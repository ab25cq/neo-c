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
struct sRefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sDerefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
    _Bool mQuote;
};
struct sLogicalDenial
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sReverseNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sPlusPlusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sNormalBlock
{
    int sline;
    char* sname;
    struct sBlock* mBlock;
};
struct sComplement
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sParenNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};
struct sCastNode
{
    int sline;
    char* sname;
    struct sType* mType;
    struct sNode* mLeft;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

char* sRefferenceNode_kind(struct sRefferenceNode* self);

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

char* sDerefferenceNode_kind(struct sDerefferenceNode* self);

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

char* sLogicalDenial_kind(struct sLogicalDenial* self);

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

char* sReverseNode_kind(struct sReverseNode* self);

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

char* sMinusNode2_kind(struct sMinusNode2* self);

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

_Bool sNormalBlock_terminated(struct sNormalBlock* self);

char* sNormalBlock_kind(struct sNormalBlock* self);

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
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
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

char* sComplement_kind(struct sComplement* self);

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

char* sParenNode_kind(struct sParenNode* self);

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

char* sCastNode_kind(struct sCastNode* self);

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* pre_position_operator(struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);

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










_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __result_obj__;
struct sType* __exception_result_var_b74;
void* right_value114;
struct sType* generics_type_47;
_Bool _if_conditional114;
struct sType* __dec_obj35;
_Bool _if_conditional115;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
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
_Bool __exception_result_var_b89;
_Bool _if_conditional153;
void* right_value120;
struct tuple2$2sFunpcharph* __exception_result_var_b90;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* __exception_result_var_b91;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
_Bool __exception_result_var_b92;
_Bool _if_conditional155;
void* right_value122;
struct tuple2$2sFunpcharph* __exception_result_var_b93;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_95;
char* fun_name_96;
void* right_value123;
struct tuple2$2sFunpcharph* __exception_result_var_b94;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_97;
char* fun_name2_98;
struct sFun* __exception_result_var_b95;
void* right_value124;
char* __exception_result_var_b96;
char* __dec_obj37;
int i_99;
void* right_value125;
char* __exception_result_var_b97;
char* new_fun_name_100;
struct sFun* __exception_result_var_b98;
_Bool _if_conditional156;
void* right_value126;
char* __exception_result_var_b99;
char* __dec_obj38;
_Bool _if_conditional157;
struct sFun* __exception_result_var_b100;
_Bool result_101;
_Bool _if_conditional158;
void* right_value127;
struct CVALUE* come_value_102;
char* left_value2_103;
void* right_value128;
void* right_value129;
struct sType* __exception_result_var_b102;
_Bool __exception_result_var_b103;
struct sType* __exception_result_var_b104;
_Bool _if_conditional163;
struct sType* __exception_result_var_b105;
void* right_value130;
char* __exception_result_var_b106;
char* __dec_obj39;
char* __exception_result_var_b107;
void* right_value131;
char* __dec_obj40;
void* right_value132;
char* __exception_result_var_b108;
char* __dec_obj41;
struct sType* __exception_result_var_b109;
void* right_value133;
struct sType* type2_107;
void* right_value134;
struct sType* __exception_result_var_b110;
struct sType* type3_108;
struct sType* __exception_result_var_b111;
void* right_value135;
struct sType* __dec_obj42;
_Bool _if_conditional164;
void* right_value136;
char* __exception_result_var_b112;
char* __dec_obj43;
void* right_value137;
char* __exception_result_var_b113;
char* __dec_obj44;
struct list$1CVALUEph* __exception_result_var_b114;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_47, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&operator_fun_80, 0, sizeof(struct sFun*));
memset(&fun_name2_81, 0, sizeof(char*));
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
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&i_99, 0, sizeof(int));
right_value125 = (void*)0;
memset(&new_fun_name_100, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&result_101, 0, sizeof(_Bool));
right_value127 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
memset(&left_value2_103, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&type2_107, 0, sizeof(struct sType*));
right_value134 = (void*)0;
memset(&type3_108, 0, sizeof(struct sType*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=(come_push_stackframe("05pre_op.c", 5, 1162),__exception_result_var_b74=sType_clone(type), come_pop_stackframe(), __exception_result_var_b74))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type_47, "05pre_op.c", 6, 1163)), "05pre_op.c", 6, 1164))->mNoSolvedGenericsType, "05pre_op.c", 6, 1165)), "05pre_op.c", 6, 1166))->v1) {
        __dec_obj35=generics_type_47;
        generics_type_47=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type_47, "05pre_op.c", 7, 1167)), "05pre_op.c", 7, 1168))->mNoSolvedGenericsType, "05pre_op.c", 7, 1169)), "05pre_op.c", 7, 1170))->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "05pre_op.c", 10, 1171)), "05pre_op.c", 10, 1172))->mNoSolvedGenericsType, "05pre_op.c", 10, 1173)), "05pre_op.c", 10, 1174))->v1) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "05pre_op.c", 11, 1175)), "05pre_op.c", 11, 1176))->mNoSolvedGenericsType, "05pre_op.c", 11, 1177)), "05pre_op.c", 11, 1178))->v1;
    }
    klass_78=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "05pre_op.c", 13, 1179)), "05pre_op.c", 13, 1180))->mClass;
    class_name_79=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_78, "05pre_op.c", 14, 1181)), "05pre_op.c", 14, 1182))->mName;
    operator_fun_80=((void*)0);
    if(_if_conditional117=(come_push_stackframe("05pre_op.c", 19, 1189),__exception_result_var_b75=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "05pre_op.c", 19, 1183)), "05pre_op.c", 19, 1184))->mGenericsTypes, "05pre_op.c", 19, 1185)), "05pre_op.c", 19, 1186))), come_pop_stackframe(), __exception_result_var_b75)>0,    _if_conditional117) {
        none_generics_name_82=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 20, 1194),__exception_result_var_b76=((char*)(right_value115=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "05pre_op.c", 20, 1190)), "05pre_op.c", 20, 1191))->mClass, "05pre_op.c", 20, 1192)), "05pre_op.c", 20, 1193))->mName))), come_pop_stackframe(), __exception_result_var_b76));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_83=(struct sType*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 22, 1197),__exception_result_var_b77=((struct sType*)(right_value116=solve_generics(type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 22, 1195)), "05pre_op.c", 22, 1196))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b77));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 24, 1198),__exception_result_var_b78=((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b78));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_84=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 25, 1199),__exception_result_var_b79=((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))), come_pop_stackframe(), __exception_result_var_b79));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_85=(come_push_stackframe("05pre_op.c", 27, 1263),__exception_result_var_b82=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 27, 1200)), "05pre_op.c", 27, 1201))->generics_funcs, "05pre_op.c", 27, 1202)), "05pre_op.c", 27, 1203)),fun_name3_84,((void*)0)), come_pop_stackframe(), __exception_result_var_b82);
        if(generics_fun_85) {
            if(_if_conditional133=!(come_push_stackframe("05pre_op.c", 31, 1265),__exception_result_var_b84=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 31, 1264),__exception_result_var_b83=((char*)(right_value119=__builtin_string(fun_name2_81))), come_pop_stackframe(), __exception_result_var_b83)),generics_fun_85,obj_type_83,info), come_pop_stackframe(), __exception_result_var_b84),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional133) {
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            operator_fun_80=(come_push_stackframe("05pre_op.c", 35, 1348),__exception_result_var_b88=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 35, 1266)), "05pre_op.c", 35, 1267))->funcs,fun_name2_81), come_pop_stackframe(), __exception_result_var_b88);
        }
        else {
            if(_if_conditional153=(come_push_stackframe("05pre_op.c", 38, 1349),__exception_result_var_b89=charp_operator_equals(fun_name,"operator_equals"), come_pop_stackframe(), __exception_result_var_b89),            _if_conditional153) {
                multiple_assign_var1=(come_push_stackframe("05pre_op.c", 39, 1350),__exception_result_var_b90=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info))), come_pop_stackframe(), __exception_result_var_b90);
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=(come_push_stackframe("05pre_op.c", 40, 1355),__exception_result_var_b91=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info))), come_pop_stackframe(), __exception_result_var_b91);
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional155=(come_push_stackframe("05pre_op.c", 44, 1356),__exception_result_var_b92=charp_operator_equals(fun_name,"operator_not_equals"), come_pop_stackframe(), __exception_result_var_b92),                _if_conditional155) {
                    multiple_assign_var3=(come_push_stackframe("05pre_op.c", 45, 1357),__exception_result_var_b93=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info))), come_pop_stackframe(), __exception_result_var_b93);
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=(come_push_stackframe("05pre_op.c", 46, 1358),__exception_result_var_b94=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info))), come_pop_stackframe(), __exception_result_var_b94);
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_80=(come_push_stackframe("05pre_op.c", 51, 1361),__exception_result_var_b95=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 51, 1359)), "05pre_op.c", 51, 1360))->funcs,fun_name2_81), come_pop_stackframe(), __exception_result_var_b95);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 56, 1362),__exception_result_var_b96=((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b96));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            new_fun_name_100=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 60, 1363),__exception_result_var_b97=((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))), come_pop_stackframe(), __exception_result_var_b97));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_80=(come_push_stackframe("05pre_op.c", 61, 1366),__exception_result_var_b98=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 61, 1364)), "05pre_op.c", 61, 1365))->funcs,new_fun_name_100), come_pop_stackframe(), __exception_result_var_b98);
            if(operator_fun_80) {
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 64, 1367),__exception_result_var_b99=((char*)(right_value126=__builtin_string(new_fun_name_100))), come_pop_stackframe(), __exception_result_var_b99));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional157=operator_fun_80==((void*)0),        _if_conditional157) {
            operator_fun_80=(come_push_stackframe("05pre_op.c", 70, 1370),__exception_result_var_b100=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 70, 1368)), "05pre_op.c", 70, 1369))->funcs,fun_name2_81), come_pop_stackframe(), __exception_result_var_b100);
        }
    }
    result_101=(_Bool)0;
    if(operator_fun_80) {
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 77, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("05pre_op.c", 79, 1395),__exception_result_var_b103=check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),(come_push_stackframe("05pre_op.c", 79, 1392),__exception_result_var_b102=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_80, "05pre_op.c", 79, 1379)), "05pre_op.c", 79, 1380))->mParamTypes, "05pre_op.c", 79, 1381)),0), "05pre_op.c", 79, 1391)), come_pop_stackframe(), __exception_result_var_b102),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "05pre_op.c", 79, 1393)), "05pre_op.c", 79, 1394))->type,left_value,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b103);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional163=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05pre_op.c", 80, 1400),__exception_result_var_b104=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_80, "05pre_op.c", 80, 1396)), "05pre_op.c", 80, 1397))->mParamTypes, "05pre_op.c", 80, 1398)),0), "05pre_op.c", 80, 1399)), come_pop_stackframe(), __exception_result_var_b104), "05pre_op.c", 80, 1401)), "05pre_op.c", 80, 1402))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "05pre_op.c", 80, 1403)), "05pre_op.c", 80, 1404))->type, "05pre_op.c", 80, 1405)), "05pre_op.c", 80, 1406))->mHeap,        _if_conditional163) {
            (come_push_stackframe("05pre_op.c", 81,1414),std_move((come_push_stackframe("05pre_op.c", 81, 1411),__exception_result_var_b105=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_80, "05pre_op.c", 81, 1407)), "05pre_op.c", 81, 1408))->mParamTypes, "05pre_op.c", 81, 1409)),0), "05pre_op.c", 81, 1410)), come_pop_stackframe(), __exception_result_var_b105),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "05pre_op.c", 81, 1412)), "05pre_op.c", 81, 1413))->type,left_value,info),come_pop_stackframe());
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 82, 1417),__exception_result_var_b106=((char*)(right_value130=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "05pre_op.c", 82, 1415)), "05pre_op.c", 82, 1416))->c_value))), come_pop_stackframe(), __exception_result_var_b106));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value131=(come_push_stackframe("05pre_op.c", 85, 1420),__exception_result_var_b107=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value, "05pre_op.c", 85, 1418)), "05pre_op.c", 85, 1419))->c_value), come_pop_stackframe(), __exception_result_var_b107))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj41=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 88, 1421)), "05pre_op.c", 88, 1422))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 88, 1421)), "05pre_op.c", 88, 1422))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 88, 1423),__exception_result_var_b108=((char*)(right_value132=xsprintf("%s(%s)",fun_name2_81,left_value2_103))), come_pop_stackframe(), __exception_result_var_b108));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(come_push_stackframe("05pre_op.c", 90, 1426),__exception_result_var_b109=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(operator_fun_80, "05pre_op.c", 90, 1424)), "05pre_op.c", 90, 1425))->mResultType), come_pop_stackframe(), __exception_result_var_b109))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type3_108=(struct sType*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 92, 1427),__exception_result_var_b110=((struct sType*)(right_value134=solve_generics(type2_107,generics_type_47,info))), come_pop_stackframe(), __exception_result_var_b110));
        come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj42=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 94, 1428)), "05pre_op.c", 94, 1429))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 94, 1428)), "05pre_op.c", 94, 1429))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=(come_push_stackframe("05pre_op.c", 94, 1430),__exception_result_var_b111=sType_clone(type3_108), come_pop_stackframe(), __exception_result_var_b111))));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 95, 1431)), "05pre_op.c", 95, 1432))->var=((void*)0);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(type3_108, "05pre_op.c", 97, 1433)), "05pre_op.c", 97, 1434))->mHeap) {
            __dec_obj43=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 98, 1435)), "05pre_op.c", 98, 1436))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 98, 1435)), "05pre_op.c", 98, 1436))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 98, 1439),__exception_result_var_b112=((char*)(right_value136=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 98, 1437)), "05pre_op.c", 98, 1438))->c_value,(struct sType*)come_increment_ref_count(type3_108),info))), come_pop_stackframe(), __exception_result_var_b112));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj44=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 101, 1440)), "05pre_op.c", 101, 1441))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 101, 1440)), "05pre_op.c", 101, 1441))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 101, 1446),__exception_result_var_b113=((char*)(right_value137=append_stackframe(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 101, 1442)), "05pre_op.c", 101, 1443))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 101, 1444)), "05pre_op.c", 101, 1445))->type,info))), come_pop_stackframe(), __exception_result_var_b113));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("05pre_op.c", 103,1449),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "05pre_op.c", 103, 1447)), "05pre_op.c", 103, 1448))->c_value),come_pop_stackframe());
        (come_push_stackframe("05pre_op.c", 105, 1502),__exception_result_var_b114=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 105, 1450)), "05pre_op.c", 105, 1451))->stack, "05pre_op.c", 105, 1452)), "05pre_op.c", 105, 1453)),(struct CVALUE*)come_increment_ref_count(come_value_102)), come_pop_stackframe(), __exception_result_var_b114);
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result84__ = result_101;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional134=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 1274)), "./neo-c.h", 1532, 1275))->item_existance, "./neo-c.h", 1532, 1276))[it_90],                    _if_conditional134) {
                        if(_if_conditional135=(come_push_stackframe("./neo-c.h", 1534, 1282),__exception_result_var_b87=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 1277)), "./neo-c.h", 1534, 1278))->keys, "./neo-c.h", 1534, 1279))[it_90], "./neo-c.h", 1534, 1280)), "./neo-c.h", 1534, 1281)),key), come_pop_stackframe(), __exception_result_var_b87),                        _if_conditional135) {
                            __result77__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 1283)), "./neo-c.h", 1536, 1284))->items, "./neo-c.h", 1536, 1285))[it_90];
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        it_90++;
                        if(_if_conditional151=it_90>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 1346)), "./neo-c.h", 1541, 1347))->size,                        _if_conditional151) {
                            it_90=0;
                        }
                        else {
                            if(_if_conditional152=it_90==hash_89,                            _if_conditional152) {
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
                                if(_if_conditional136=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1286)), "sFun_finalize", 0, 1287))->mName!=((void*)0),                                _if_conditional136) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1288)), "sFun_finalize", 0, 1289))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 1288)), "sFun_finalize", 0, 1289))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional137=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1290)), "sFun_finalize", 1, 1291))->mResultType!=((void*)0),                                _if_conditional137) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 1292)), "sFun_finalize", 1, 1293))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional138=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1294)), "sFun_finalize", 2, 1295))->mParamTypes!=((void*)0),                                _if_conditional138) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 1296)), "sFun_finalize", 2, 1297))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional139=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1298)), "sFun_finalize", 3, 1299))->mParamNames!=((void*)0),                                _if_conditional139) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 1300)), "sFun_finalize", 3, 1301))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional140=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1302)), "sFun_finalize", 4, 1303))->mParamDefaultParametors!=((void*)0),                                _if_conditional140) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 1304)), "sFun_finalize", 4, 1305))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional141=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1306)), "sFun_finalize", 5, 1307))->mLambdaType!=((void*)0),                                _if_conditional141) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 1308)), "sFun_finalize", 5, 1309))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional142=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1310)), "sFun_finalize", 6, 1311))->mBlock!=((void*)0),                                _if_conditional142) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 1312)), "sFun_finalize", 6, 1313))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional145=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1322)), "sFun_finalize", 7, 1323))->mSource!=((void*)0),                                _if_conditional145) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 1324)), "sFun_finalize", 7, 1325))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional146=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1326)), "sFun_finalize", 8, 1327))->mSourceHead!=((void*)0),                                _if_conditional146) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 1328)), "sFun_finalize", 8, 1329))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional147=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1330)), "sFun_finalize", 9, 1331))->mSourceHead2!=((void*)0),                                _if_conditional147) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1332)), "sFun_finalize", 9, 1333))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional148=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1334)), "sFun_finalize", 10, 1335))->mSourceDefer!=((void*)0),                                _if_conditional148) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1336)), "sFun_finalize", 10, 1337))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional149=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1338)), "sFun_finalize", 11, 1339))->mComeHeader!=((void*)0),                                _if_conditional149) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1340)), "sFun_finalize", 11, 1341))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1340)), "sFun_finalize", 11, 1341))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional150=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1342)), "sFun_finalize", 12, 1343))->mDeclareSName!=((void*)0),                                _if_conditional150) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1344)), "sFun_finalize", 12, 1345))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1344)), "sFun_finalize", 12, 1345))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional143=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1314)), "sBlock_finalize", 0, 1315))->mNodes!=((void*)0),                                        _if_conditional143) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 1316)), "sBlock_finalize", 0, 1317))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional144=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1318)), "sBlock_finalize", 1, 1319))->mVarTable!=((void*)0),                                        _if_conditional144) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 1320)), "sBlock_finalize", 1, 1321))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional154;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional154=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1351)), "tuple2$2sFunpcharphp_finalize", 0, 1352))->v2!=((void*)0),                    _if_conditional154) {
                        ((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1353)), "tuple2$2sFunpcharphp_finalize", 0, 1354))->v2 = come_decrement_ref_count2(((struct tuple2$2sFunpcharph*)come_null_check(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0, 1353)), "tuple2$2sFunpcharphp_finalize", 0, 1354))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional159=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1371)), "CVALUE_finalize", 0, 1372))->c_value!=((void*)0),            _if_conditional159) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1373)), "CVALUE_finalize", 0, 1374))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1373)), "CVALUE_finalize", 0, 1374))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional160=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1375)), "CVALUE_finalize", 1, 1376))->type!=((void*)0),            _if_conditional160) {
                come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1377)), "CVALUE_finalize", 1, 1378))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional161;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional18;
_Bool _if_conditional162;
struct sType* __result81__;
struct sType* default_value_106;
void* __exception_result_var_b101;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
            if(_if_conditional161=position<0,            _if_conditional161) {
                position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1382)), "./neo-c.h", 676, 1383))->len;
            }
            it_104=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1384)), "./neo-c.h", 679, 1385))->head;
            i_105=0;
            while(_while_condtional18=it_104!=((void*)0),            _while_condtional18) {
                if(_if_conditional162=position==i_105,                _if_conditional162) {
                    __result81__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_104, "./neo-c.h", 683, 1386)), "./neo-c.h", 683, 1387))->item;
                    return __result81__;
                }
                it_104=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_104, "./neo-c.h", 685, 1388)), "./neo-c.h", 685, 1389))->next;
                i_105++;
            }
            (come_push_stackframe("./neo-c.h", 690, 1390),__exception_result_var_b101=memset(&default_value_106,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b101);
            __result82__ = __result_obj__ = default_value_106;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value138;
struct list_item$1CVALUEph* litem_109;
struct CVALUE* __dec_obj45;
_Bool _if_conditional167;
void* right_value139;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj46;
void* right_value140;
struct list_item$1CVALUEph* litem_111;
struct CVALUE* __dec_obj47;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1CVALUEph*));
right_value139 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1CVALUEph*));
right_value140 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional165=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1454)), "./neo-c.h", 222, 1455))->len==0,            _if_conditional165) {
                litem_109=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value138=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value138,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_109, "./neo-c.h", 225, 1460)), "./neo-c.h", 225, 1461))->prev=((void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_109, "./neo-c.h", 226, 1462)), "./neo-c.h", 226, 1463))->next=((void*)0);
                __dec_obj45=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_109, "./neo-c.h", 227, 1464)), "./neo-c.h", 227, 1465))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_109, "./neo-c.h", 227, 1464)), "./neo-c.h", 227, 1465))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1466)), "./neo-c.h", 229, 1467))->tail=litem_109;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1468)), "./neo-c.h", 230, 1469))->head=litem_109;
            }
            else {
                if(_if_conditional167=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1470)), "./neo-c.h", 232, 1471))->len==1,                _if_conditional167) {
                    litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value139=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value139,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_110, "./neo-c.h", 235, 1472)), "./neo-c.h", 235, 1473))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1474)), "./neo-c.h", 235, 1475))->head;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_110, "./neo-c.h", 236, 1476)), "./neo-c.h", 236, 1477))->next=((void*)0);
                    __dec_obj46=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_110, "./neo-c.h", 237, 1478)), "./neo-c.h", 237, 1479))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_110, "./neo-c.h", 237, 1478)), "./neo-c.h", 237, 1479))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1480)), "./neo-c.h", 239, 1481))->tail=litem_110;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1482)), "./neo-c.h", 240, 1483))->head, "./neo-c.h", 240, 1484)), "./neo-c.h", 240, 1485))->next=litem_110;
                }
                else {
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value140=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value140,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_111, "./neo-c.h", 245, 1486)), "./neo-c.h", 245, 1487))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1488)), "./neo-c.h", 245, 1489))->tail;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_111, "./neo-c.h", 246, 1490)), "./neo-c.h", 246, 1491))->next=((void*)0);
                    __dec_obj47=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_111, "./neo-c.h", 247, 1492)), "./neo-c.h", 247, 1493))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_111, "./neo-c.h", 247, 1492)), "./neo-c.h", 247, 1493))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1494)), "./neo-c.h", 249, 1495))->tail, "./neo-c.h", 249, 1496)), "./neo-c.h", 249, 1497))->next=litem_111;
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1498)), "./neo-c.h", 250, 1499))->tail=litem_111;
                }
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1500)), "./neo-c.h", 253, 1501))->len++;
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional166=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1456)), "list_item$1CVALUEphp_finalize", 0, 1457))->item!=((void*)0),                    _if_conditional166) {
                        come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1458)), "list_item$1CVALUEphp_finalize", 0, 1459))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value141;
struct sNodeBase* __exception_result_var_b115;
struct sNode* __dec_obj48;
struct sRefferenceNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    (come_push_stackframe("05pre_op.c", 117, 1505),__exception_result_var_b115=((struct sNodeBase*)(right_value141=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "05pre_op.c", 117, 1503)), "05pre_op.c", 117, 1504))),info))), come_pop_stackframe(), __exception_result_var_b115);
    come_call_finalizer3(right_value141,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=((struct sRefferenceNode*)come_null_check(self, "05pre_op.c", 119, 1510))->value;
    ((struct sRefferenceNode*)come_null_check(self, "05pre_op.c", 119, 1510))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __result_obj__;
void* right_value142;
char* __exception_result_var_b116;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    __result86__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 124, 1519),__exception_result_var_b116=((char*)(right_value142=__builtin_string("sRefferenceNode"))), come_pop_stackframe(), __exception_result_var_b116);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_112;
_Bool __exception_result_var_b117;
_Bool _if_conditional171;
_Bool __result87__;
void* right_value143;
struct CVALUE* __exception_result_var_b118;
struct CVALUE* left_value_113;
void* right_value144;
struct CVALUE* come_value_114;
void* right_value145;
char* __exception_result_var_b119;
char* __dec_obj49;
struct sType* __exception_result_var_b120;
void* right_value146;
struct sType* __dec_obj50;
struct list$1CVALUEph* __exception_result_var_b121;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_112, 0, sizeof(struct sNode*));
right_value143 = (void*)0;
memset(&left_value_113, 0, sizeof(struct CVALUE*));
right_value144 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
    value_112=((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "05pre_op.c", 129, 1520)), "05pre_op.c", 129, 1521))->value;
    if(_if_conditional171=!(come_push_stackframe("05pre_op.c", 131, 1522),__exception_result_var_b117=node_compile(value_112,info), come_pop_stackframe(), __exception_result_var_b117),    _if_conditional171) {
        __result87__ = (_Bool)0;
        return __result87__;
    }
    left_value_113=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 135, 1523),__exception_result_var_b118=((struct CVALUE*)(right_value143=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b118));
    come_call_finalizer3(right_value143,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 136,1524),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 138, "CVALUE"))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 140, 1525)), "05pre_op.c", 140, 1526))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 140, 1525)), "05pre_op.c", 140, 1526))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 140, 1529),__exception_result_var_b119=((char*)(right_value145=xsprintf("&%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_113, "05pre_op.c", 140, 1527)), "05pre_op.c", 140, 1528))->c_value))), come_pop_stackframe(), __exception_result_var_b119));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 141, 1530)), "05pre_op.c", 141, 1531))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 141, 1530)), "05pre_op.c", 141, 1531))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(come_push_stackframe("05pre_op.c", 141, 1534),__exception_result_var_b120=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_113, "05pre_op.c", 141, 1532)), "05pre_op.c", 141, 1533))->type), come_pop_stackframe(), __exception_result_var_b120))));
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 142, 1535)), "05pre_op.c", 142, 1536))->type, "05pre_op.c", 142, 1537)), "05pre_op.c", 142, 1538))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 143, 1539)), "05pre_op.c", 143, 1540))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 145,1543),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "05pre_op.c", 145, 1541)), "05pre_op.c", 145, 1542))->c_value),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 147, 1548),__exception_result_var_b121=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 147, 1544)), "05pre_op.c", 147, 1545))->stack, "05pre_op.c", 147, 1546)), "05pre_op.c", 147, 1547)),(struct CVALUE*)come_increment_ref_count(come_value_114)), come_pop_stackframe(), __exception_result_var_b121);
    __result88__ = (_Bool)1;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional168=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1506)), "sNodeBase_finalize", 0, 1507))->sname!=((void*)0),        _if_conditional168) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1508)), "sNodeBase_finalize", 0, 1509))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 1508)), "sNodeBase_finalize", 0, 1509))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value147;
struct sNodeBase* __exception_result_var_b122;
struct sNode* __dec_obj51;
struct sDerefferenceNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    (come_push_stackframe("05pre_op.c", 157, 1551),__exception_result_var_b122=((struct sNodeBase*)(right_value147=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 157, 1549)), "05pre_op.c", 157, 1550))),info))), come_pop_stackframe(), __exception_result_var_b122);
    come_call_finalizer3(right_value147,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj51=((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 159, 1552))->value;
    ((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 159, 1552))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
    ((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 160, 1553))->mQuote=quote;
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result89__;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __result_obj__;
void* right_value148;
char* __exception_result_var_b123;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    __result90__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 165, 1562),__exception_result_var_b123=((char*)(right_value148=__builtin_string("sDerefferenceNode"))), come_pop_stackframe(), __exception_result_var_b123);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_115;
_Bool __exception_result_var_b124;
_Bool _if_conditional174;
_Bool __result91__;
void* right_value149;
struct CVALUE* __exception_result_var_b125;
struct CVALUE* left_value_116;
_Bool _if_conditional175;
void* right_value150;
_Bool __exception_result_var_b126;
_Bool _if_conditional176;
void* right_value151;
char* __exception_result_var_b127;
void* right_value152;
char* __exception_result_var_b128;
char* __dec_obj52;
char* p_117;
char* p2_118;
_Bool _while_condtional19;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value153;
void* right_value154;
struct buffer* __exception_result_var_b129;
struct buffer* buf_119;
struct buffer* __exception_result_var_b130;
void* right_value155;
void* right_value156;
struct buffer* __exception_result_var_b131;
struct buffer* buf2_120;
unsigned long int __exception_result_var_b132;
struct buffer* __exception_result_var_b133;
void* right_value157;
char* __exception_result_var_b134;
void* right_value158;
char* __exception_result_var_b135;
void* right_value159;
char* __exception_result_var_b136;
void* right_value160;
char* __exception_result_var_b137;
char* __dec_obj53;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional179;
_Bool __exception_result_var_b138;
_Bool _if_conditional180;
void* right_value161;
struct CVALUE* come_value_124;
void* right_value162;
char* __exception_result_var_b139;
char* __dec_obj54;
struct sType* __exception_result_var_b140;
void* right_value163;
struct sType* __dec_obj55;
struct list$1CVALUEph* __exception_result_var_b141;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_115, 0, sizeof(struct sNode*));
right_value149 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
right_value152 = (void*)0;
memset(&p_117, 0, sizeof(char*));
memset(&p2_118, 0, sizeof(char*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&buf_119, 0, sizeof(struct buffer*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&buf2_120, 0, sizeof(struct buffer*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
right_value161 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
    value_115=((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 170, 1563)), "05pre_op.c", 170, 1564))->value;
    if(_if_conditional174=!(come_push_stackframe("05pre_op.c", 172, 1565),__exception_result_var_b124=node_compile(value_115,info), come_pop_stackframe(), __exception_result_var_b124),    _if_conditional174) {
        __result91__ = (_Bool)0;
        return __result91__;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 176, 1566),__exception_result_var_b125=((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b125));
    come_call_finalizer3(right_value149,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 177,1567),dec_stack_ptr(1,info),come_pop_stackframe());
    if(gComeDebug) {
        if(_if_conditional176=(come_push_stackframe("05pre_op.c", 180, 1570),__exception_result_var_b126=string_operator_not_equals(((char*)(right_value150=((struct sNode*)come_null_check(((struct sNode*)come_null_check(value_115, "05pre_op.c", 180, 1568)), "05pre_op.c", 180, 1569))->kind(((struct sNode*)come_null_check(((struct sNode*)come_null_check(value_115, "05pre_op.c", 180, 1568)), "05pre_op.c", 180, 1569))->_protocol_obj))),"sExpEqualNode"), come_pop_stackframe(), __exception_result_var_b126),        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional176) {
            __dec_obj52=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 181, 1571)), "05pre_op.c", 181, 1572))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 181, 1571)), "05pre_op.c", 181, 1572))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 181, 1583),__exception_result_var_b128=((char*)(right_value152=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("05pre_op.c", 181, 1575),__exception_result_var_b127=((char*)(right_value151=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 181, 1573)), "05pre_op.c", 181, 1574))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b127), "05pre_op.c", 181, 1576)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 181, 1577)), "05pre_op.c", 181, 1578))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 181, 1579)), "05pre_op.c", 181, 1580))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 181, 1581)), "05pre_op.c", 181, 1582))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b128));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            p_117=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 184, 1584)), "05pre_op.c", 184, 1585))->c_value;
            p2_118=((void*)0);
            while(_while_condtional19=*((char*)come_null_check(p_117, "05pre_op.c", 186, 1586)),            _while_condtional19) {
                if(_if_conditional177=*((char*)come_null_check(p_117, "05pre_op.c", 187, 1587))==61,                _if_conditional177) {
                    p2_118=p_117;
                    break;
                }
                else {
                    p_117++;
                }
            }
            if(_if_conditional178=p2_118==((void*)0),            _if_conditional178) {
                (come_push_stackframe("05pre_op.c", 197,1588),err_msg(info,"unexpected error in debugging to dereffrence and to assign"),come_pop_stackframe());
                (come_push_stackframe("05pre_op.c", 198,1589),exit(2),come_pop_stackframe());
            }
            p_117=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 201, 1590)), "05pre_op.c", 201, 1591))->c_value;
            buf_119=(struct buffer*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 203, 1593),__exception_result_var_b129=((struct buffer*)(right_value154=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value153=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 203, "buffer"))), "05pre_op.c", 203, 1592)))))), come_pop_stackframe(), __exception_result_var_b129));
            come_call_finalizer3(right_value153,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value154,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05pre_op.c", 204, 1596),__exception_result_var_b130=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_119, "05pre_op.c", 204, 1594)), "05pre_op.c", 204, 1595)),p_117,p2_118-p_117), come_pop_stackframe(), __exception_result_var_b130);
            buf2_120=(struct buffer*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 206, 1598),__exception_result_var_b131=((struct buffer*)(right_value156=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value155=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 206, "buffer"))), "05pre_op.c", 206, 1597)))))), come_pop_stackframe(), __exception_result_var_b131));
            come_call_finalizer3(right_value155,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value156,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05pre_op.c", 207, 1602),__exception_result_var_b133=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_120, "05pre_op.c", 207, 1599)), "05pre_op.c", 207, 1600)),p2_118,p_117+(come_push_stackframe("05pre_op.c", 207, 1601),__exception_result_var_b132=strlen(p_117), come_pop_stackframe(), __exception_result_var_b132)-p2_118), come_pop_stackframe(), __exception_result_var_b133);
            __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 209, 1603)), "05pre_op.c", 209, 1604))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 209, 1603)), "05pre_op.c", 209, 1604))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 209, 1619),__exception_result_var_b137=((char*)(right_value160=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)come_null_check((come_push_stackframe("05pre_op.c", 209, 1607),__exception_result_var_b134=((char*)(right_value157=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 209, 1605)), "05pre_op.c", 209, 1606))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b134), "05pre_op.c", 209, 1608)),(come_push_stackframe("05pre_op.c", 209, 1611),__exception_result_var_b135=((char*)(right_value158=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_119, "05pre_op.c", 209, 1609)), "05pre_op.c", 209, 1610))))), come_pop_stackframe(), __exception_result_var_b135),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 209, 1612)), "05pre_op.c", 209, 1613))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 209, 1614)), "05pre_op.c", 209, 1615))->sline,gComeDebugStackFrameID++,(come_push_stackframe("05pre_op.c", 209, 1618),__exception_result_var_b136=((char*)(right_value159=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_120, "05pre_op.c", 209, 1616)), "05pre_op.c", 209, 1617))))), come_pop_stackframe(), __exception_result_var_b136)))), come_pop_stackframe(), __exception_result_var_b137));
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_121=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 213, 1620)), "05pre_op.c", 213, 1621))->type);
    fun_name_122="operator_derefference";
    if(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "05pre_op.c", 218, 1622)), "05pre_op.c", 218, 1623))->mQuote) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=(come_push_stackframe("05pre_op.c", 222, 1624),__exception_result_var_b138=operator_overload_fun_self(type_121,fun_name_122,left_value_116,info), come_pop_stackframe(), __exception_result_var_b138);
    }
    if(_if_conditional180=!calling_fun_123,    _if_conditional180) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 226, "CVALUE"))));
        come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj54=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 228, 1625)), "05pre_op.c", 228, 1626))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 228, 1625)), "05pre_op.c", 228, 1626))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 228, 1629),__exception_result_var_b139=((char*)(right_value162=xsprintf("*%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 228, 1627)), "05pre_op.c", 228, 1628))->c_value))), come_pop_stackframe(), __exception_result_var_b139));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj55=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 229, 1630)), "05pre_op.c", 229, 1631))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 229, 1630)), "05pre_op.c", 229, 1631))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(come_push_stackframe("05pre_op.c", 229, 1634),__exception_result_var_b140=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_116, "05pre_op.c", 229, 1632)), "05pre_op.c", 229, 1633))->type), come_pop_stackframe(), __exception_result_var_b140))));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 230, 1635)), "05pre_op.c", 230, 1636))->type, "05pre_op.c", 230, 1637)), "05pre_op.c", 230, 1638))->mPointerNum--;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 231, 1639)), "05pre_op.c", 231, 1640))->var=((void*)0);
        (come_push_stackframe("05pre_op.c", 233,1643),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_124, "05pre_op.c", 233, 1641)), "05pre_op.c", 233, 1642))->c_value),come_pop_stackframe());
        (come_push_stackframe("05pre_op.c", 235, 1648),__exception_result_var_b141=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 235, 1644)), "05pre_op.c", 235, 1645))->stack, "05pre_op.c", 235, 1646)), "05pre_op.c", 235, 1647)),(struct CVALUE*)come_increment_ref_count(come_value_124)), come_pop_stackframe(), __exception_result_var_b141);
        come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result92__ = (_Bool)1;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value164;
struct sNodeBase* __exception_result_var_b142;
struct sNode* __dec_obj56;
struct sLogicalDenial* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    (come_push_stackframe("05pre_op.c", 246, 1651),__exception_result_var_b142=((struct sNodeBase*)(right_value164=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "05pre_op.c", 246, 1649)), "05pre_op.c", 246, 1650))),info))), come_pop_stackframe(), __exception_result_var_b142);
    come_call_finalizer3(right_value164,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=((struct sLogicalDenial*)come_null_check(self, "05pre_op.c", 248, 1652))->value;
    ((struct sLogicalDenial*)come_null_check(self, "05pre_op.c", 248, 1652))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result93__;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __result_obj__;
void* right_value165;
char* __exception_result_var_b143;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result94__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 253, 1661),__exception_result_var_b143=((char*)(right_value165=__builtin_string("sLogicalDenial"))), come_pop_stackframe(), __exception_result_var_b143);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b144;
_Bool _if_conditional183;
_Bool __result95__;
void* right_value166;
struct CVALUE* __exception_result_var_b145;
struct CVALUE* come_value_125;
void* right_value167;
struct CVALUE* come_value2_126;
void* right_value168;
char* __exception_result_var_b146;
char* __dec_obj57;
struct sType* __exception_result_var_b147;
void* right_value169;
struct sType* __dec_obj58;
struct list$1CVALUEph* __exception_result_var_b148;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
memset(&come_value2_126, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    if(_if_conditional183=!(come_push_stackframe("05pre_op.c", 258, 1664),__exception_result_var_b144=node_compile(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "05pre_op.c", 258, 1662)), "05pre_op.c", 258, 1663))->value,info), come_pop_stackframe(), __exception_result_var_b144),    _if_conditional183) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    come_value_125=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 262, 1665),__exception_result_var_b145=((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b145));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 263,1666),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 265, "CVALUE"))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 267, 1667)), "05pre_op.c", 267, 1668))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 267, 1667)), "05pre_op.c", 267, 1668))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 267, 1671),__exception_result_var_b146=((char*)(right_value168=xsprintf("!%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "05pre_op.c", 267, 1669)), "05pre_op.c", 267, 1670))->c_value))), come_pop_stackframe(), __exception_result_var_b146));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 268, 1672)), "05pre_op.c", 268, 1673))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 268, 1672)), "05pre_op.c", 268, 1673))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=(come_push_stackframe("05pre_op.c", 268, 1676),__exception_result_var_b147=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "05pre_op.c", 268, 1674)), "05pre_op.c", 268, 1675))->type), come_pop_stackframe(), __exception_result_var_b147))));
    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 269, 1677)), "05pre_op.c", 269, 1678))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 271, 1683),__exception_result_var_b148=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 271, 1679)), "05pre_op.c", 271, 1680))->stack, "05pre_op.c", 271, 1681)), "05pre_op.c", 271, 1682)),(struct CVALUE*)come_increment_ref_count(come_value2_126)), come_pop_stackframe(), __exception_result_var_b148);
    (come_push_stackframe("05pre_op.c", 273,1686),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_126, "05pre_op.c", 273, 1684)), "05pre_op.c", 273, 1685))->c_value),come_pop_stackframe());
    __result96__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value170;
struct sNodeBase* __exception_result_var_b149;
struct sNode* __dec_obj59;
struct sReverseNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    (come_push_stackframe("05pre_op.c", 283, 1689),__exception_result_var_b149=((struct sNodeBase*)(right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "05pre_op.c", 283, 1687)), "05pre_op.c", 283, 1688))),info))), come_pop_stackframe(), __exception_result_var_b149);
    come_call_finalizer3(right_value170,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=((struct sReverseNode*)come_null_check(self, "05pre_op.c", 285, 1690))->value;
    ((struct sReverseNode*)come_null_check(self, "05pre_op.c", 285, 1690))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result97__;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __result_obj__;
void* right_value171;
char* __exception_result_var_b150;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result98__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 290, 1699),__exception_result_var_b150=((char*)(right_value171=__builtin_string("sReverseNode"))), come_pop_stackframe(), __exception_result_var_b150);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_127;
_Bool __exception_result_var_b151;
_Bool _if_conditional186;
_Bool __result99__;
void* right_value172;
struct CVALUE* __exception_result_var_b152;
struct CVALUE* left_value_128;
void* right_value173;
struct CVALUE* come_value_129;
void* right_value174;
char* __exception_result_var_b153;
char* __dec_obj60;
struct sType* __exception_result_var_b154;
void* right_value175;
struct sType* __dec_obj61;
struct list$1CVALUEph* __exception_result_var_b155;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_127, 0, sizeof(struct sNode*));
right_value172 = (void*)0;
memset(&left_value_128, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    value_127=((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "05pre_op.c", 295, 1700)), "05pre_op.c", 295, 1701))->value;
    if(_if_conditional186=!(come_push_stackframe("05pre_op.c", 297, 1702),__exception_result_var_b151=node_compile(value_127,info), come_pop_stackframe(), __exception_result_var_b151),    _if_conditional186) {
        __result99__ = (_Bool)0;
        return __result99__;
    }
    left_value_128=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 301, 1703),__exception_result_var_b152=((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b152));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 302,1704),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 304, "CVALUE"))));
    come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 306, 1705)), "05pre_op.c", 306, 1706))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 306, 1705)), "05pre_op.c", 306, 1706))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 306, 1709),__exception_result_var_b153=((char*)(right_value174=xsprintf("!%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_128, "05pre_op.c", 306, 1707)), "05pre_op.c", 306, 1708))->c_value))), come_pop_stackframe(), __exception_result_var_b153));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj61=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 307, 1710)), "05pre_op.c", 307, 1711))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 307, 1710)), "05pre_op.c", 307, 1711))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=(come_push_stackframe("05pre_op.c", 307, 1714),__exception_result_var_b154=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_128, "05pre_op.c", 307, 1712)), "05pre_op.c", 307, 1713))->type), come_pop_stackframe(), __exception_result_var_b154))));
    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 308, 1715)), "05pre_op.c", 308, 1716))->type, "05pre_op.c", 308, 1717)), "05pre_op.c", 308, 1718))->mPointerNum--;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 309, 1719)), "05pre_op.c", 309, 1720))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 311,1723),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_129, "05pre_op.c", 311, 1721)), "05pre_op.c", 311, 1722))->c_value),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 313, 1728),__exception_result_var_b155=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 313, 1724)), "05pre_op.c", 313, 1725))->stack, "05pre_op.c", 313, 1726)), "05pre_op.c", 313, 1727)),(struct CVALUE*)come_increment_ref_count(come_value_129)), come_pop_stackframe(), __exception_result_var_b155);
    __result100__ = (_Bool)1;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value176;
struct sNodeBase* __exception_result_var_b156;
struct sNode* __dec_obj62;
struct sMinusNode2* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    (come_push_stackframe("05pre_op.c", 323, 1731),__exception_result_var_b156=((struct sNodeBase*)(right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "05pre_op.c", 323, 1729)), "05pre_op.c", 323, 1730))),info))), come_pop_stackframe(), __exception_result_var_b156);
    come_call_finalizer3(right_value176,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj62=((struct sMinusNode2*)come_null_check(self, "05pre_op.c", 325, 1732))->value;
    ((struct sMinusNode2*)come_null_check(self, "05pre_op.c", 325, 1732))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result101__;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __result_obj__;
void* right_value177;
char* __exception_result_var_b157;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    __result102__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 330, 1741),__exception_result_var_b157=((char*)(right_value177=__builtin_string("sMinusNode2"))), come_pop_stackframe(), __exception_result_var_b157);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b158;
_Bool _if_conditional189;
_Bool __result103__;
void* right_value178;
struct CVALUE* __exception_result_var_b159;
struct CVALUE* come_value_130;
void* right_value179;
struct CVALUE* come_value2_131;
void* right_value180;
char* __exception_result_var_b160;
char* __dec_obj63;
struct sType* __exception_result_var_b161;
void* right_value181;
struct sType* __dec_obj64;
struct list$1CVALUEph* __exception_result_var_b162;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
memset(&come_value2_131, 0, sizeof(struct CVALUE*));
right_value180 = (void*)0;
right_value181 = (void*)0;
    if(_if_conditional189=!(come_push_stackframe("05pre_op.c", 335, 1744),__exception_result_var_b158=node_compile(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "05pre_op.c", 335, 1742)), "05pre_op.c", 335, 1743))->value,info), come_pop_stackframe(), __exception_result_var_b158),    _if_conditional189) {
        __result103__ = (_Bool)0;
        return __result103__;
    }
    come_value_130=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 339, 1745),__exception_result_var_b159=((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b159));
    come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 340,1746),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 342, "CVALUE"))));
    come_call_finalizer3(right_value179,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj63=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 344, 1747)), "05pre_op.c", 344, 1748))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 344, 1747)), "05pre_op.c", 344, 1748))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 344, 1751),__exception_result_var_b160=((char*)(right_value180=xsprintf("-%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "05pre_op.c", 344, 1749)), "05pre_op.c", 344, 1750))->c_value))), come_pop_stackframe(), __exception_result_var_b160));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj64=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 345, 1752)), "05pre_op.c", 345, 1753))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 345, 1752)), "05pre_op.c", 345, 1753))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=(come_push_stackframe("05pre_op.c", 345, 1756),__exception_result_var_b161=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "05pre_op.c", 345, 1754)), "05pre_op.c", 345, 1755))->type), come_pop_stackframe(), __exception_result_var_b161))));
    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 346, 1757)), "05pre_op.c", 346, 1758))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 348, 1763),__exception_result_var_b162=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 348, 1759)), "05pre_op.c", 348, 1760))->stack, "05pre_op.c", 348, 1761)), "05pre_op.c", 348, 1762)),(struct CVALUE*)come_increment_ref_count(come_value2_131)), come_pop_stackframe(), __exception_result_var_b162);
    (come_push_stackframe("05pre_op.c", 350,1766),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_131, "05pre_op.c", 350, 1764)), "05pre_op.c", 350, 1765))->c_value),come_pop_stackframe());
    __result104__ = (_Bool)1;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value182;
struct sNodeBase* __exception_result_var_b163;
struct sNode* __dec_obj65;
struct sPlusPlusNode2* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    (come_push_stackframe("05pre_op.c", 360, 1769),__exception_result_var_b163=((struct sNodeBase*)(right_value182=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "05pre_op.c", 360, 1767)), "05pre_op.c", 360, 1768))),info))), come_pop_stackframe(), __exception_result_var_b163);
    come_call_finalizer3(right_value182,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj65=((struct sPlusPlusNode2*)come_null_check(self, "05pre_op.c", 362, 1770))->value;
    ((struct sPlusPlusNode2*)come_null_check(self, "05pre_op.c", 362, 1770))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __result_obj__;
void* right_value183;
char* __exception_result_var_b164;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    __result106__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 367, 1779),__exception_result_var_b164=((char*)(right_value183=__builtin_string("sPlusPlusNode2"))), come_pop_stackframe(), __exception_result_var_b164);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b165;
_Bool _if_conditional192;
_Bool __result107__;
void* right_value184;
struct CVALUE* __exception_result_var_b166;
struct CVALUE* come_value_132;
void* right_value185;
struct CVALUE* come_value2_133;
void* right_value186;
char* __exception_result_var_b167;
char* __dec_obj66;
struct sType* __exception_result_var_b168;
void* right_value187;
struct sType* __dec_obj67;
struct list$1CVALUEph* __exception_result_var_b169;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value185 = (void*)0;
memset(&come_value2_133, 0, sizeof(struct CVALUE*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    if(_if_conditional192=!(come_push_stackframe("05pre_op.c", 372, 1782),__exception_result_var_b165=node_compile(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "05pre_op.c", 372, 1780)), "05pre_op.c", 372, 1781))->value,info), come_pop_stackframe(), __exception_result_var_b165),    _if_conditional192) {
        __result107__ = (_Bool)0;
        return __result107__;
    }
    come_value_132=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 376, 1783),__exception_result_var_b166=((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b166));
    come_call_finalizer3(right_value184,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 377,1784),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 379, "CVALUE"))));
    come_call_finalizer3(right_value185,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 381, 1785)), "05pre_op.c", 381, 1786))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 381, 1785)), "05pre_op.c", 381, 1786))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 381, 1789),__exception_result_var_b167=((char*)(right_value186=xsprintf("++%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_132, "05pre_op.c", 381, 1787)), "05pre_op.c", 381, 1788))->c_value))), come_pop_stackframe(), __exception_result_var_b167));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 382, 1790)), "05pre_op.c", 382, 1791))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 382, 1790)), "05pre_op.c", 382, 1791))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=(come_push_stackframe("05pre_op.c", 382, 1794),__exception_result_var_b168=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_132, "05pre_op.c", 382, 1792)), "05pre_op.c", 382, 1793))->type), come_pop_stackframe(), __exception_result_var_b168))));
    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 383, 1795)), "05pre_op.c", 383, 1796))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 385, 1801),__exception_result_var_b169=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 385, 1797)), "05pre_op.c", 385, 1798))->stack, "05pre_op.c", 385, 1799)), "05pre_op.c", 385, 1800)),(struct CVALUE*)come_increment_ref_count(come_value2_133)), come_pop_stackframe(), __exception_result_var_b169);
    (come_push_stackframe("05pre_op.c", 387,1804),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_133, "05pre_op.c", 387, 1802)), "05pre_op.c", 387, 1803))->c_value),come_pop_stackframe());
    __result108__ = (_Bool)1;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value188;
struct sNodeBase* __exception_result_var_b170;
struct sNode* __dec_obj68;
struct sMinusMinusNode2* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    (come_push_stackframe("05pre_op.c", 397, 1807),__exception_result_var_b170=((struct sNodeBase*)(right_value188=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "05pre_op.c", 397, 1805)), "05pre_op.c", 397, 1806))),info))), come_pop_stackframe(), __exception_result_var_b170);
    come_call_finalizer3(right_value188,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj68=((struct sMinusMinusNode2*)come_null_check(self, "05pre_op.c", 399, 1808))->value;
    ((struct sMinusMinusNode2*)come_null_check(self, "05pre_op.c", 399, 1808))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __result_obj__;
void* right_value189;
char* __exception_result_var_b171;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
    __result110__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 404, 1817),__exception_result_var_b171=((char*)(right_value189=__builtin_string("sMinusMinusNode2"))), come_pop_stackframe(), __exception_result_var_b171);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b172;
_Bool _if_conditional195;
_Bool __result111__;
void* right_value190;
struct CVALUE* __exception_result_var_b173;
struct CVALUE* come_value_134;
void* right_value191;
struct CVALUE* come_value2_135;
void* right_value192;
char* __exception_result_var_b174;
char* __dec_obj69;
struct sType* __exception_result_var_b175;
void* right_value193;
struct sType* __dec_obj70;
struct list$1CVALUEph* __exception_result_var_b176;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
memset(&come_value_134, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
memset(&come_value2_135, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    if(_if_conditional195=!(come_push_stackframe("05pre_op.c", 409, 1820),__exception_result_var_b172=node_compile(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "05pre_op.c", 409, 1818)), "05pre_op.c", 409, 1819))->value,info), come_pop_stackframe(), __exception_result_var_b172),    _if_conditional195) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    come_value_134=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 413, 1821),__exception_result_var_b173=((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b173));
    come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 414,1822),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 416, "CVALUE"))));
    come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj69=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 418, 1823)), "05pre_op.c", 418, 1824))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 418, 1823)), "05pre_op.c", 418, 1824))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 418, 1827),__exception_result_var_b174=((char*)(right_value192=xsprintf("--%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_134, "05pre_op.c", 418, 1825)), "05pre_op.c", 418, 1826))->c_value))), come_pop_stackframe(), __exception_result_var_b174));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 419, 1828)), "05pre_op.c", 419, 1829))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 419, 1828)), "05pre_op.c", 419, 1829))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(come_push_stackframe("05pre_op.c", 419, 1832),__exception_result_var_b175=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_134, "05pre_op.c", 419, 1830)), "05pre_op.c", 419, 1831))->type), come_pop_stackframe(), __exception_result_var_b175))));
    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 420, 1833)), "05pre_op.c", 420, 1834))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 422, 1839),__exception_result_var_b176=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 422, 1835)), "05pre_op.c", 422, 1836))->stack, "05pre_op.c", 422, 1837)), "05pre_op.c", 422, 1838)),(struct CVALUE*)come_increment_ref_count(come_value2_135)), come_pop_stackframe(), __exception_result_var_b176);
    (come_push_stackframe("05pre_op.c", 424,1842),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_135, "05pre_op.c", 424, 1840)), "05pre_op.c", 424, 1841))->c_value),come_pop_stackframe());
    __result112__ = (_Bool)1;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value194;
struct sNodeBase* __exception_result_var_b177;
struct sBlock* __exception_result_var_b221;
void* right_value215;
struct sBlock* __dec_obj76;
struct sNormalBlock* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value215 = (void*)0;
    (come_push_stackframe("05pre_op.c", 434, 1845),__exception_result_var_b177=((struct sNodeBase*)(right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "05pre_op.c", 434, 1843)), "05pre_op.c", 434, 1844))),info))), come_pop_stackframe(), __exception_result_var_b177);
    come_call_finalizer3(right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=((struct sNormalBlock*)come_null_check(self, "05pre_op.c", 436, 1846))->mBlock;
    ((struct sNormalBlock*)come_null_check(self, "05pre_op.c", 436, 1846))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value215=(come_push_stackframe("05pre_op.c", 436, 2371),__exception_result_var_b221=sBlock_clone(block), come_pop_stackframe(), __exception_result_var_b221))));
    come_call_finalizer3(__dec_obj76,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value215,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    __result145__ = __result_obj__ = self;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result145__;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
void* __result_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = (_Bool)1;
    return __result146__;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __result_obj__;
void* right_value216;
char* __exception_result_var_b222;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    __result147__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 446, 2380),__exception_result_var_b222=((char*)(right_value216=__builtin_string("sNormalBlock"))), come_pop_stackframe(), __exception_result_var_b222);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_193;
int __exception_result_var_b223;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_193, 0, sizeof(struct sBlock*));
    block_193=((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "05pre_op.c", 451, 2381)), "05pre_op.c", 451, 2382))->mBlock;
    (come_push_stackframe("05pre_op.c", 453,2383),add_come_code(info,"{\n"),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 455, 2384),__exception_result_var_b223=transpile_block(block_193,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0), come_pop_stackframe(), __exception_result_var_b223);
    (come_push_stackframe("05pre_op.c", 457,2385),add_come_code(info,"}\n"),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 459,2386),transpiler_clear_last_code(info),come_pop_stackframe());
    __result148__ = (_Bool)1;
    return __result148__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional196;
struct sBlock* __result113__;
void* right_value195;
struct sBlock* result_136;
_Bool _if_conditional197;
struct list$1sNodeph* __exception_result_var_b178;
void* right_value196;
struct list$1sNodeph* __dec_obj71;
_Bool _if_conditional198;
struct sVarTable* __exception_result_var_b220;
void* right_value214;
struct sVarTable* __dec_obj75;
struct sBlock* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&result_136, 0, sizeof(struct sBlock*));
right_value196 = (void*)0;
right_value214 = (void*)0;
        if(_if_conditional196=self==(void*)0,        _if_conditional196) {
            __result113__ = __result_obj__ = (void*)0;
            return __result113__;
        }
        result_136=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value195=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value195,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional197=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 1847)), "sBlock_clone", 4, 1848))->mNodes!=((void*)0),        _if_conditional197) {
            __dec_obj71=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_136, "sBlock_clone", 4, 1849)), "sBlock_clone", 4, 1850))->mNodes;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_136, "sBlock_clone", 4, 1849)), "sBlock_clone", 4, 1850))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value196=(come_push_stackframe("sBlock_clone", 4, 1853),__exception_result_var_b178=list$1sNodephp_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 4, 1851)), "sBlock_clone", 4, 1852))->mNodes), come_pop_stackframe(), __exception_result_var_b178))));
            come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value196,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional198=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 1854)), "sBlock_clone", 5, 1855))->mVarTable!=((void*)0),        _if_conditional198) {
            __dec_obj75=((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_136, "sBlock_clone", 5, 1856)), "sBlock_clone", 5, 1857))->mVarTable;
            ((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(result_136, "sBlock_clone", 5, 1856)), "sBlock_clone", 5, 1857))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value214=(come_push_stackframe("sBlock_clone", 5, 2370),__exception_result_var_b220=sVarTable_clone(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_clone", 5, 1858)), "sBlock_clone", 5, 1859))->mVarTable), come_pop_stackframe(), __exception_result_var_b220))));
            come_call_finalizer3(__dec_obj75,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value214,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result144__ = __result_obj__ = result_136;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result144__;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional199;
struct sVarTable* __result114__;
void* right_value197;
struct sVarTable* result_137;
_Bool _if_conditional200;
struct map$2charphsVarph* __exception_result_var_b219;
void* right_value213;
struct map$2charphsVarph* __dec_obj74;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sVarTable* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&result_137, 0, sizeof(struct sVarTable*));
right_value213 = (void*)0;
                if(_if_conditional199=self==(void*)0,                _if_conditional199) {
                    __result114__ = __result_obj__ = (void*)0;
                    return __result114__;
                }
                result_137=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value197=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value197,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional200=self!=((void*)0)&&((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 1860)), "sVarTable_clone", 4, 1861))->mVars!=((void*)0),                _if_conditional200) {
                    __dec_obj74=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_137, "sVarTable_clone", 4, 1862)), "sVarTable_clone", 4, 1863))->mVars;
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_137, "sVarTable_clone", 4, 1862)), "sVarTable_clone", 4, 1863))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value213=(come_push_stackframe("sVarTable_clone", 4, 2331),__exception_result_var_b219=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4, 1864)), "sVarTable_clone", 4, 1865))->mVars), come_pop_stackframe(), __exception_result_var_b219))));
                    come_call_finalizer3(__dec_obj74,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value213,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional261=self!=((void*)0),                _if_conditional261) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_137, "sVarTable_clone", 5, 2358)), "sVarTable_clone", 5, 2359))->mGlobal=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5, 2360)), "sVarTable_clone", 5, 2361))->mGlobal;
                }
                if(_if_conditional262=self!=((void*)0),                _if_conditional262) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_137, "sVarTable_clone", 6, 2362)), "sVarTable_clone", 6, 2363))->mParent=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6, 2364)), "sVarTable_clone", 6, 2365))->mParent;
                }
                if(_if_conditional263=self!=((void*)0),                _if_conditional263) {
                    ((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(result_137, "sVarTable_clone", 7, 2366)), "sVarTable_clone", 7, 2367))->mID=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7, 2368)), "sVarTable_clone", 7, 2369))->mID;
                }
                __result143__ = __result_obj__ = result_137;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result143__;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional201;
struct map$2charphsVarph* __result115__;
void* right_value198;
void* right_value204;
struct map$2charphsVarph* __exception_result_var_b180;
struct map$2charphsVarph* result_143;
void* right_value205;
void* right_value206;
struct list$1charp* __exception_result_var_b181;
struct list$1charp* __dec_obj73;
char* __exception_result_var_b184;
char* it_146;
_Bool __exception_result_var_b185;
char* __exception_result_var_b188;
struct sVar* default_value_149;
void* __exception_result_var_b189;
struct sVar* __exception_result_var_b192;
struct sVar* it2_152;
struct map$2charphsVarph* __exception_result_var_b218;
struct map$2charphsVarph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
right_value204 = (void*)0;
memset(&result_143, 0, sizeof(struct map$2charphsVarph*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&it_146, 0, sizeof(char*));
memset(&default_value_149, 0, sizeof(struct sVar*));
memset(&it2_152, 0, sizeof(struct sVar*));
                        if(_if_conditional201=self==((void*)0),                        _if_conditional201) {
                            __result115__ = __result_obj__ = ((void*)0);
                            return __result115__;
                        }
                        result_143=(struct map$2charphsVarph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1162, 1938),__exception_result_var_b180=((struct map$2charphsVarph*)(right_value204=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)(right_value198=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1162, "map$2charphsVarph"))), "./neo-c.h", 1162, 1866)))))), come_pop_stackframe(), __exception_result_var_b180));
                        come_call_finalizer3(right_value198,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value204,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj73=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_143, "./neo-c.h", 1164, 1939)), "./neo-c.h", 1164, 1940))->key_list;
                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_143, "./neo-c.h", 1164, 1939)), "./neo-c.h", 1164, 1940))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1164, 1942),__exception_result_var_b181=((struct list$1charp*)(right_value206=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value205=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1164, "list$1charp"))), "./neo-c.h", 1164, 1941)))))), come_pop_stackframe(), __exception_result_var_b181));
                        come_call_finalizer3(__dec_obj73,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value205,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value206,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_146=(come_push_stackframe("./neo-c.h", 1166, 1965),__exception_result_var_b184=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 1943)), "./neo-c.h", 1166, 1944))), come_pop_stackframe(), __exception_result_var_b184);                        !(come_push_stackframe("./neo-c.h", 1166, 1974),__exception_result_var_b185=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 1966)), "./neo-c.h", 1166, 1967))), come_pop_stackframe(), __exception_result_var_b185);                        it_146=(come_push_stackframe("./neo-c.h", 1166, 2003),__exception_result_var_b188=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1166, 1975)), "./neo-c.h", 1166, 1976))), come_pop_stackframe(), __exception_result_var_b188)                        ){
                            (come_push_stackframe("./neo-c.h", 1168, 2004),__exception_result_var_b189=memset(&default_value_149,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b189);
                            it2_152=(come_push_stackframe("./neo-c.h", 1170, 2026),__exception_result_var_b192=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1170, 2005)), "./neo-c.h", 1170, 2006)),it_146,default_value_149), come_pop_stackframe(), __exception_result_var_b192);
                            (come_push_stackframe("./neo-c.h", 1172, 2330),__exception_result_var_b218=map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(result_143, "./neo-c.h", 1172, 2027)), "./neo-c.h", 1172, 2028)),it_146,it2_152), come_pop_stackframe(), __exception_result_var_b218);
                        }
                        __result142__ = __result_obj__ = result_143;
                        come_call_finalizer3(result_143,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result142__;
                        come_call_finalizer3(result_143,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* right_value199;
void* right_value200;
void* right_value201;
int i_138;
void* right_value202;
void* right_value203;
struct list$1charp* __exception_result_var_b179;
struct list$1charp* __dec_obj72;
struct map$2charphsVarph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&i_138, 0, sizeof(int));
right_value202 = (void*)0;
right_value203 = (void*)0;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1068, 1867)), "./neo-c.h", 1068, 1868))->keys=(char**)come_increment_ref_count(((char**)(right_value199=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
                            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1069, 1869)), "./neo-c.h", 1069, 1870))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value200=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1069, "sVar*%"))));
                            come_call_finalizer3(right_value200,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1070, 1887)), "./neo-c.h", 1070, 1888))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value201=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_138=0;                            i_138<128;                            i_138++                            ){
                                ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1074, 1889)), "./neo-c.h", 1074, 1890))->item_existance, "./neo-c.h", 1074, 1891))[i_138]=(_Bool)0;
                            }
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1077, 1892)), "./neo-c.h", 1077, 1893))->size=128;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1078, 1894)), "./neo-c.h", 1078, 1895))->len=0;
                            __dec_obj72=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 1896)), "./neo-c.h", 1080, 1897))->key_list;
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1080, 1896)), "./neo-c.h", 1080, 1897))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 1909),__exception_result_var_b179=((struct list$1charp*)(right_value203=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value202=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 1898)))))), come_pop_stackframe(), __exception_result_var_b179));
                            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value202,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value203,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1082, 1910)), "./neo-c.h", 1082, 1911))->it=0;
                            __result117__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result117__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional202=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1871)), "sVar_finalize", 0, 1872))->mName!=((void*)0),                                _if_conditional202) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1873)), "sVar_finalize", 0, 1874))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1873)), "sVar_finalize", 0, 1874))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional203=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1875)), "sVar_finalize", 1, 1876))->mCValueName!=((void*)0),                                _if_conditional203) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1877)), "sVar_finalize", 1, 1878))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1877)), "sVar_finalize", 1, 1878))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional204=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 1879)), "sVar_finalize", 2, 1880))->mType!=((void*)0),                                _if_conditional204) {
                                    come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 1881)), "sVar_finalize", 2, 1882))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional205=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1883)), "sVar_finalize", 3, 1884))->mFunName!=((void*)0),                                _if_conditional205) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1885)), "sVar_finalize", 3, 1886))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1885)), "sVar_finalize", 3, 1886))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 101, 1899)), "./neo-c.h", 101, 1900))->head=((void*)0);
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 102, 1901)), "./neo-c.h", 102, 1902))->tail=((void*)0);
                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 103, 1903)), "./neo-c.h", 103, 1904))->len=0;
                                __result116__ = __result_obj__ = self;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result116__;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_139;
_Bool _while_condtional20;
struct list_item$1charp* prev_it_140;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*));
                                    it_139=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 1905)), "./neo-c.h", 120, 1906))->head;
                                    while(_while_condtional20=it_139!=((void*)0),                                    _while_condtional20) {
                                        prev_it_140=it_139;
                                        it_139=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_139, "./neo-c.h", 123, 1907)), "./neo-c.h", 123, 1908))->next;
                                        come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_141;
_Bool _if_conditional206;
_Bool _if_conditional207;
int i_142;
_Bool _if_conditional208;
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_141, 0, sizeof(int));
memset(&i_142, 0, sizeof(int));
                                for(                                i_141=0;                                i_141<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 1912)), "./neo-c.h", 1111, 1913))->size;                                i_141++                                ){
                                    if(_if_conditional206=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 1914)), "./neo-c.h", 1112, 1915))->item_existance, "./neo-c.h", 1112, 1916))[i_141],                                    _if_conditional206) {
                                        if(_if_conditional207=1,                                        _if_conditional207) {
                                            come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 1917)), "./neo-c.h", 1114, 1918))->items, "./neo-c.h", 1114, 1919))[i_141],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                (come_push_stackframe("./neo-c.h", 1118,1922),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 1920)), "./neo-c.h", 1118, 1921))->items),come_pop_stackframe());
                                for(                                i_142=0;                                i_142<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 1923)), "./neo-c.h", 1120, 1924))->size;                                i_142++                                ){
                                    if(_if_conditional208=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 1925)), "./neo-c.h", 1121, 1926))->item_existance, "./neo-c.h", 1121, 1927))[i_142],                                    _if_conditional208) {
                                        if(_if_conditional209=1,                                        _if_conditional209) {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1928)), "./neo-c.h", 1123, 1929))->keys, "./neo-c.h", 1123, 1930))[i_142] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1928)), "./neo-c.h", 1123, 1929))->keys, "./neo-c.h", 1123, 1930))[i_142], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                (come_push_stackframe("./neo-c.h", 1127,1933),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 1931)), "./neo-c.h", 1127, 1932))->keys),come_pop_stackframe());
                                come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 1934)), "./neo-c.h", 1129, 1935))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1936)), "./neo-c.h", 1131, 1937))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1936)), "./neo-c.h", 1131, 1937))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional210;
char* result_144;
void* __exception_result_var_b182;
char* __result118__;
_Bool _if_conditional211;
char* __result119__;
char* result_145;
void* __exception_result_var_b183;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(char*));
memset(&result_145, 0, sizeof(char*));
                            if(_if_conditional210=self==((void*)0),                            _if_conditional210) {
                                (come_push_stackframe("./neo-c.h", 1282, 1945),__exception_result_var_b182=memset(&result_144,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b182);
                                __result118__ = __result_obj__ = result_144;
                                return __result118__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 1946)), "./neo-c.h", 1285, 1947))->key_list, "./neo-c.h", 1285, 1948)), "./neo-c.h", 1285, 1949))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 1950)), "./neo-c.h", 1285, 1951))->key_list, "./neo-c.h", 1285, 1952)), "./neo-c.h", 1285, 1953))->head;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 1954)), "./neo-c.h", 1287, 1955))->key_list, "./neo-c.h", 1287, 1956)), "./neo-c.h", 1287, 1957))->it) {
                                __result119__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 1958)), "./neo-c.h", 1288, 1959))->key_list, "./neo-c.h", 1288, 1960)), "./neo-c.h", 1288, 1961))->it, "./neo-c.h", 1288, 1962)), "./neo-c.h", 1288, 1963))->item;
                                return __result119__;
                            }
                            (come_push_stackframe("./neo-c.h", 1292, 1964),__exception_result_var_b183=memset(&result_145,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b183);
                            __result120__ = __result_obj__ = result_145;
                            return __result120__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result121__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 1968)), "./neo-c.h", 1314, 1969))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 1970)), "./neo-c.h", 1314, 1971))->key_list, "./neo-c.h", 1314, 1972)), "./neo-c.h", 1314, 1973))->it==((void*)0);
                            return __result121__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional212;
char* result_147;
void* __exception_result_var_b186;
char* __result122__;
_Bool _if_conditional213;
char* __result123__;
char* result_148;
void* __exception_result_var_b187;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(char*));
memset(&result_148, 0, sizeof(char*));
                            if(_if_conditional212=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 1977)), "./neo-c.h", 1297, 1978))->key_list, "./neo-c.h", 1297, 1979)), "./neo-c.h", 1297, 1980))->it==((void*)0),                            _if_conditional212) {
                                (come_push_stackframe("./neo-c.h", 1299, 1981),__exception_result_var_b186=memset(&result_147,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b186);
                                __result122__ = __result_obj__ = result_147;
                                return __result122__;
                            }
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 1982)), "./neo-c.h", 1302, 1983))->key_list, "./neo-c.h", 1302, 1984)), "./neo-c.h", 1302, 1985))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 1986)), "./neo-c.h", 1302, 1987))->key_list, "./neo-c.h", 1302, 1988)), "./neo-c.h", 1302, 1989))->it, "./neo-c.h", 1302, 1990)), "./neo-c.h", 1302, 1991))->next;
                            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 1992)), "./neo-c.h", 1304, 1993))->key_list, "./neo-c.h", 1304, 1994)), "./neo-c.h", 1304, 1995))->it) {
                                __result123__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 1996)), "./neo-c.h", 1305, 1997))->key_list, "./neo-c.h", 1305, 1998)), "./neo-c.h", 1305, 1999))->it, "./neo-c.h", 1305, 2000)), "./neo-c.h", 1305, 2001))->item;
                                return __result123__;
                            }
                            (come_push_stackframe("./neo-c.h", 1309, 2002),__exception_result_var_b187=memset(&result_148,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b187);
                            __result124__ = __result_obj__ = result_148;
                            return __result124__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b190;
unsigned int hash_150;
unsigned int it_151;
_Bool _while_condtional21;
_Bool _if_conditional214;
_Bool __exception_result_var_b191;
_Bool _if_conditional215;
struct sVar* __result125__;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sVar* __result126__;
struct sVar* __result127__;
struct sVar* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_150, 0, sizeof(unsigned int));
memset(&it_151, 0, sizeof(unsigned int));
                                hash_150=(come_push_stackframe("./neo-c.h", 1207, 2009),__exception_result_var_b190=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2007)), "./neo-c.h", 1207, 2008))), come_pop_stackframe(), __exception_result_var_b190)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1207, 2010)), "./neo-c.h", 1207, 2011))->size;
                                it_151=hash_150;
                                while(_while_condtional21=(_Bool)1,                                _while_condtional21) {
                                    if(_if_conditional214=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1211, 2012)), "./neo-c.h", 1211, 2013))->item_existance, "./neo-c.h", 1211, 2014))[it_151],                                    _if_conditional214) {
                                        if(_if_conditional215=(come_push_stackframe("./neo-c.h", 1213, 2020),__exception_result_var_b191=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1213, 2015)), "./neo-c.h", 1213, 2016))->keys, "./neo-c.h", 1213, 2017))[it_151], "./neo-c.h", 1213, 2018)), "./neo-c.h", 1213, 2019)),key), come_pop_stackframe(), __exception_result_var_b191),                                        _if_conditional215) {
                                            __result125__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1215, 2021)), "./neo-c.h", 1215, 2022))->items, "./neo-c.h", 1215, 2023))[it_151];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result125__;
                                        }
                                        it_151++;
                                        if(_if_conditional216=it_151>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1220, 2024)), "./neo-c.h", 1220, 2025))->size,                                        _if_conditional216) {
                                            it_151=0;
                                        }
                                        else {
                                            if(_if_conditional217=it_151==hash_150,                                            _if_conditional217) {
                                                __result126__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result126__;
                                            }
                                        }
                                    }
                                    else {
                                        __result127__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result127__;
                                    }
                                }
                                __result128__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result128__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional218;
unsigned int __exception_result_var_b201;
unsigned int hash_164;
int it_165;
_Bool _while_condtional23;
_Bool _if_conditional222;
_Bool __exception_result_var_b202;
_Bool _if_conditional223;
_Bool _if_conditional224;
struct list$1charp* __exception_result_var_b206;
struct list$1charp* __exception_result_var_b207;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
int __exception_result_var_b208;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool same_key_exist_182;
char* __exception_result_var_b211;
char* it2_185;
_Bool __exception_result_var_b212;
char* __exception_result_var_b215;
_Bool __exception_result_var_b216;
_Bool _if_conditional253;
_Bool _if_conditional254;
struct list$1charp* __exception_result_var_b217;
struct map$2charphsVarph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_164, 0, sizeof(unsigned int));
memset(&it_165, 0, sizeof(int));
memset(&same_key_exist_182, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
                                if(_if_conditional218=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 2029)), "./neo-c.h", 1448, 2030))->len*2>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1448, 2031)), "./neo-c.h", 1448, 2032))->size,                                _if_conditional218) {
                                    (come_push_stackframe("./neo-c.h", 1449,2081),map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1449, 2033)), "./neo-c.h", 1449, 2034))),come_pop_stackframe());
                                }
                                hash_164=(come_push_stackframe("./neo-c.h", 1451, 2084),__exception_result_var_b201=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1451, 2082)), "./neo-c.h", 1451, 2083))), come_pop_stackframe(), __exception_result_var_b201)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1451, 2085)), "./neo-c.h", 1451, 2086))->size;
                                it_165=hash_164;
                                while(_while_condtional23=(_Bool)1,                                _while_condtional23) {
                                    if(_if_conditional222=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1455, 2087)), "./neo-c.h", 1455, 2088))->item_existance, "./neo-c.h", 1455, 2089))[it_165],                                    _if_conditional222) {
                                        if(_if_conditional223=(come_push_stackframe("./neo-c.h", 1457, 2095),__exception_result_var_b202=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1457, 2090)), "./neo-c.h", 1457, 2091))->keys, "./neo-c.h", 1457, 2092))[it_165], "./neo-c.h", 1457, 2093)), "./neo-c.h", 1457, 2094)),key), come_pop_stackframe(), __exception_result_var_b202),                                        _if_conditional223) {
                                            if(_if_conditional224=1,                                            _if_conditional224) {
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 2096)), "./neo-c.h", 1460, 2097))->keys, "./neo-c.h", 1460, 2098))[it_165] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1460, 2096)), "./neo-c.h", 1460, 2097))->keys, "./neo-c.h", 1460, 2098))[it_165], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                (come_push_stackframe("./neo-c.h", 1461, 2187),__exception_result_var_b206=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 2099)), "./neo-c.h", 1461, 2100))->key_list, "./neo-c.h", 1461, 2101)), "./neo-c.h", 1461, 2102)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1461, 2184)), "./neo-c.h", 1461, 2185))->keys, "./neo-c.h", 1461, 2186))[it_165]), come_pop_stackframe(), __exception_result_var_b206);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1462, 2188)), "./neo-c.h", 1462, 2189))->keys, "./neo-c.h", 1462, 2190))[it_165]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                (come_push_stackframe("./neo-c.h", 1465, 2198),__exception_result_var_b207=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 2191)), "./neo-c.h", 1465, 2192))->key_list, "./neo-c.h", 1465, 2193)), "./neo-c.h", 1465, 2194)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1465, 2195)), "./neo-c.h", 1465, 2196))->keys, "./neo-c.h", 1465, 2197))[it_165]), come_pop_stackframe(), __exception_result_var_b207);
                                                ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1466, 2199)), "./neo-c.h", 1466, 2200))->keys, "./neo-c.h", 1466, 2201))[it_165]=key;
                                            }
                                            if(_if_conditional244=1,                                            _if_conditional244) {
                                                come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1469, 2202)), "./neo-c.h", 1469, 2203))->items, "./neo-c.h", 1469, 2204))[it_165],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1470, 2205)), "./neo-c.h", 1470, 2206))->items, "./neo-c.h", 1470, 2207))[it_165]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1473, 2208)), "./neo-c.h", 1473, 2209))->items, "./neo-c.h", 1473, 2210))[it_165]=item;
                                            }
                                            break;
                                        }
                                        it_165++;
                                        if(_if_conditional245=it_165>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1480, 2211)), "./neo-c.h", 1480, 2212))->size,                                        _if_conditional245) {
                                            it_165=0;
                                        }
                                        else {
                                            if(_if_conditional246=it_165==hash_164,                                            _if_conditional246) {
                                                (come_push_stackframe("./neo-c.h", 1484, 2213),__exception_result_var_b208=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b208);
                                                (come_push_stackframe("./neo-c.h", 1485,2214),stackframe(),come_pop_stackframe());
                                                (come_push_stackframe("./neo-c.h", 1486,2215),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    else {
                                        ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1490, 2216)), "./neo-c.h", 1490, 2217))->item_existance, "./neo-c.h", 1490, 2218))[it_165]=(_Bool)1;
                                        if(_if_conditional247=1,                                        _if_conditional247) {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1492, 2219)), "./neo-c.h", 1492, 2220))->keys, "./neo-c.h", 1492, 2221))[it_165]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1495, 2222)), "./neo-c.h", 1495, 2223))->keys, "./neo-c.h", 1495, 2224))[it_165]=key;
                                        }
                                        if(_if_conditional248=1,                                        _if_conditional248) {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1498, 2225)), "./neo-c.h", 1498, 2226))->items, "./neo-c.h", 1498, 2227))[it_165]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1501, 2228)), "./neo-c.h", 1501, 2229))->items, "./neo-c.h", 1501, 2230))[it_165]=item;
                                        }
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1504, 2231)), "./neo-c.h", 1504, 2232))->len++;
                                        break;
                                    }
                                }
                                same_key_exist_182=(_Bool)0;
                                for(                                it2_185=(come_push_stackframe("./neo-c.h", 1511, 2249),__exception_result_var_b211=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2233)), "./neo-c.h", 1511, 2234))->key_list, "./neo-c.h", 1511, 2235)), "./neo-c.h", 1511, 2236))), come_pop_stackframe(), __exception_result_var_b211);                                !(come_push_stackframe("./neo-c.h", 1511, 2256),__exception_result_var_b212=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2250)), "./neo-c.h", 1511, 2251))->key_list, "./neo-c.h", 1511, 2252)), "./neo-c.h", 1511, 2253))), come_pop_stackframe(), __exception_result_var_b212);                                it2_185=(come_push_stackframe("./neo-c.h", 1511, 2277),__exception_result_var_b215=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1511, 2257)), "./neo-c.h", 1511, 2258))->key_list, "./neo-c.h", 1511, 2259)), "./neo-c.h", 1511, 2260))), come_pop_stackframe(), __exception_result_var_b215)                                ){
                                    if(_if_conditional253=(come_push_stackframe("./neo-c.h", 1513, 2280),__exception_result_var_b216=string_equals(((char*)come_null_check(((char*)come_null_check(it2_185, "./neo-c.h", 1513, 2278)), "./neo-c.h", 1513, 2279)),key), come_pop_stackframe(), __exception_result_var_b216),                                    _if_conditional253) {
                                        same_key_exist_182=(_Bool)1;
                                    }
                                }
                                if(_if_conditional254=!same_key_exist_182,                                _if_conditional254) {
                                    (come_push_stackframe("./neo-c.h", 1519, 2329),__exception_result_var_b217=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1519, 2281)), "./neo-c.h", 1519, 2282))->key_list, "./neo-c.h", 1519, 2283)), "./neo-c.h", 1519, 2284)),key), come_pop_stackframe(), __exception_result_var_b217);
                                }
                                __result141__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result141__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_153;
void* right_value207;
char** keys_154;
void* right_value208;
struct sVar** items_155;
void* right_value209;
_Bool* item_existance_156;
int len_157;
char* __exception_result_var_b193;
char* it_158;
_Bool __exception_result_var_b194;
char* __exception_result_var_b195;
struct sVar* default_value_159;
void* __exception_result_var_b196;
struct sVar* __exception_result_var_b197;
struct sVar* it2_160;
unsigned int __exception_result_var_b198;
unsigned int hash_161;
int n_162;
_Bool _while_condtional22;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
int __exception_result_var_b199;
struct sVar* default_value_163;
struct sVar* __exception_result_var_b200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_153, 0, sizeof(int));
right_value207 = (void*)0;
memset(&keys_154, 0, sizeof(char**));
right_value208 = (void*)0;
memset(&items_155, 0, sizeof(struct sVar**));
right_value209 = (void*)0;
memset(&item_existance_156, 0, sizeof(_Bool*));
memset(&len_157, 0, sizeof(int));
memset(&it_158, 0, sizeof(char*));
memset(&default_value_159, 0, sizeof(struct sVar*));
memset(&it2_160, 0, sizeof(struct sVar*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&n_162, 0, sizeof(int));
memset(&default_value_163, 0, sizeof(struct sVar*));
                                        size_153=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1318, 2035)), "./neo-c.h", 1318, 2036))->size*10;
                                        keys_154=(char**)come_increment_ref_count(((char**)(right_value207=(char**)come_calloc(1, sizeof(char*)*(1*(size_153)), "./neo-c.h", 1319, "char*%"))));
                                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        items_155=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value208=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_153)), "./neo-c.h", 1320, "sVar*%"))));
                                        come_call_finalizer3(right_value208,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        item_existance_156=(_Bool*)come_increment_ref_count(((_Bool*)(right_value209=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_153)), "./neo-c.h", 1321, "bool"))));
                                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        len_157=0;
                                        for(                                        it_158=(come_push_stackframe("./neo-c.h", 1325, 2039),__exception_result_var_b193=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2037)), "./neo-c.h", 1325, 2038))), come_pop_stackframe(), __exception_result_var_b193);                                        !(come_push_stackframe("./neo-c.h", 1325, 2042),__exception_result_var_b194=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2040)), "./neo-c.h", 1325, 2041))), come_pop_stackframe(), __exception_result_var_b194);                                        it_158=(come_push_stackframe("./neo-c.h", 1325, 2045),__exception_result_var_b195=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2043)), "./neo-c.h", 1325, 2044))), come_pop_stackframe(), __exception_result_var_b195)                                        ){
                                            (come_push_stackframe("./neo-c.h", 1327, 2046),__exception_result_var_b196=memset(&default_value_159,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b196);
                                            it2_160=(come_push_stackframe("./neo-c.h", 1328, 2049),__exception_result_var_b197=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1328, 2047)), "./neo-c.h", 1328, 2048)),it_158,default_value_159), come_pop_stackframe(), __exception_result_var_b197);
                                            hash_161=(come_push_stackframe("./neo-c.h", 1329, 2052),__exception_result_var_b198=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_158, "./neo-c.h", 1329, 2050)), "./neo-c.h", 1329, 2051))), come_pop_stackframe(), __exception_result_var_b198)%size_153;
                                            n_162=hash_161;
                                            while(_while_condtional22=(_Bool)1,                                            _while_condtional22) {
                                                if(_if_conditional219=((_Bool*)come_null_check(item_existance_156, "./neo-c.h", 1333, 2053))[n_162],                                                _if_conditional219) {
                                                    n_162++;
                                                    if(_if_conditional220=n_162>=size_153,                                                    _if_conditional220) {
                                                        n_162=0;
                                                    }
                                                    else {
                                                        if(_if_conditional221=n_162==hash_161,                                                        _if_conditional221) {
                                                            (come_push_stackframe("./neo-c.h", 1341, 2054),__exception_result_var_b199=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b199);
                                                            (come_push_stackframe("./neo-c.h", 1342,2055),stackframe(),come_pop_stackframe());
                                                            (come_push_stackframe("./neo-c.h", 1343,2056),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                else {
                                                    ((_Bool*)come_null_check(item_existance_156, "./neo-c.h", 1347, 2057))[n_162]=(_Bool)1;
                                                    ((char**)come_null_check(keys_154, "./neo-c.h", 1348, 2058))[n_162]=it_158;
                                                    ((struct sVar**)come_null_check(items_155, "./neo-c.h", 1350, 2059))[n_162]=(come_push_stackframe("./neo-c.h", 1350, 2062),__exception_result_var_b200=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1350, 2060)), "./neo-c.h", 1350, 2061)),it_158,default_value_163), come_pop_stackframe(), __exception_result_var_b200);
                                                    len_157++;
                                                    break;
                                                }
                                            }
                                        }
                                        (come_push_stackframe("./neo-c.h", 1358,2065),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1358, 2063)), "./neo-c.h", 1358, 2064))->items),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2066)), "./neo-c.h", 1359, 2067))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2066)), "./neo-c.h", 1359, 2067))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        (come_push_stackframe("./neo-c.h", 1360,2070),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1360, 2068)), "./neo-c.h", 1360, 2069))->keys),come_pop_stackframe());
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1362, 2071)), "./neo-c.h", 1362, 2072))->keys=keys_154;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1363, 2073)), "./neo-c.h", 1363, 2074))->items=items_155;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1364, 2075)), "./neo-c.h", 1364, 2076))->item_existance=item_existance_156;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1366, 2077)), "./neo-c.h", 1366, 2078))->size=size_153;
                                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1367, 2079)), "./neo-c.h", 1367, 2080))->len=len_157;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_166;
struct list_item$1charp* it_167;
_Bool _while_condtional24;
_Bool __exception_result_var_b203;
_Bool _if_conditional225;
struct list$1charp* __exception_result_var_b205;
struct list$1charp* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_166, 0, sizeof(int));
memset(&it_167, 0, sizeof(struct list_item$1charp*));
                                                    it2_166=0;
                                                    it_167=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 2103)), "./neo-c.h", 442, 2104))->head;
                                                    while(_while_condtional24=it_167!=((void*)0),                                                    _while_condtional24) {
                                                        if(_if_conditional225=(come_push_stackframe("./neo-c.h", 444, 2109),__exception_result_var_b203=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_167, "./neo-c.h", 444, 2105)), "./neo-c.h", 444, 2106))->item, "./neo-c.h", 444, 2107)), "./neo-c.h", 444, 2108)),item), come_pop_stackframe(), __exception_result_var_b203),                                                        _if_conditional225) {
                                                            (come_push_stackframe("./neo-c.h", 445, 2181),__exception_result_var_b205=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 2110)), "./neo-c.h", 445, 2111)),it2_166,it2_166+1), come_pop_stackframe(), __exception_result_var_b205);
                                                            break;
                                                        }
                                                        it2_166++;
                                                        it_167=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_167, "./neo-c.h", 450, 2182)), "./neo-c.h", 450, 2183))->next;
                                                    }
                                                    __result132__ = __result_obj__ = self;
                                                    return __result132__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
int tmp_168;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list$1charp* __result129__;
_Bool _if_conditional232;
struct list$1charp* __exception_result_var_b204;
_Bool _if_conditional233;
struct list_item$1charp* it_171;
int i_172;
_Bool _while_condtional26;
_Bool _if_conditional234;
struct list_item$1charp* prev_it_173;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* it_174;
int i_175;
_Bool _while_condtional27;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
struct list_item$1charp* head_prev_it_178;
struct list_item$1charp* tail_it_179;
int i_180;
_Bool _while_condtional28;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional242;
_Bool _if_conditional243;
struct list$1charp* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_168, 0, sizeof(int));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
memset(&i_172, 0, sizeof(int));
memset(&prev_it_173, 0, sizeof(struct list_item$1charp*));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&i_175, 0, sizeof(int));
memset(&prev_it_176, 0, sizeof(struct list_item$1charp*));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_179, 0, sizeof(struct list_item$1charp*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional226=head<0,                                                                _if_conditional226) {
                                                                    head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 2112)), "./neo-c.h", 458, 2113))->len;
                                                                }
                                                                if(_if_conditional227=tail<0,                                                                _if_conditional227) {
                                                                    tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 2114)), "./neo-c.h", 461, 2115))->len+1;
                                                                }
                                                                if(_if_conditional228=head>tail,                                                                _if_conditional228) {
                                                                    tmp_168=tail;
                                                                    tail=head;
                                                                    head=tmp_168;
                                                                }
                                                                if(_if_conditional229=head<0,                                                                _if_conditional229) {
                                                                    head=0;
                                                                }
                                                                if(_if_conditional230=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 2116)), "./neo-c.h", 474, 2117))->len,                                                                _if_conditional230) {
                                                                    tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 2118)), "./neo-c.h", 475, 2119))->len;
                                                                }
                                                                if(_if_conditional231=head==tail,                                                                _if_conditional231) {
                                                                    __result129__ = __result_obj__ = self;
                                                                    return __result129__;
                                                                }
                                                                if(_if_conditional232=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 2120)), "./neo-c.h", 482, 2121))->len,                                                                _if_conditional232) {
                                                                    (come_push_stackframe("./neo-c.h", 484, 2134),__exception_result_var_b204=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 2122)), "./neo-c.h", 484, 2123))), come_pop_stackframe(), __exception_result_var_b204);
                                                                }
                                                                else {
                                                                    if(_if_conditional233=head==0,                                                                    _if_conditional233) {
                                                                        it_171=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 2135)), "./neo-c.h", 487, 2136))->head;
                                                                        i_172=0;
                                                                        while(_while_condtional26=it_171!=((void*)0),                                                                        _while_condtional26) {
                                                                            if(_if_conditional234=i_172<tail,                                                                            _if_conditional234) {
                                                                                prev_it_173=it_171;
                                                                                it_171=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_171, "./neo-c.h", 493, 2137)), "./neo-c.h", 493, 2138))->next;
                                                                                i_172++;
                                                                                come_call_finalizer3(prev_it_173,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 2139)), "./neo-c.h", 498, 2140))->len--;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional235=i_172==tail,                                                                                _if_conditional235) {
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 2141)), "./neo-c.h", 501, 2142))->head=it_171;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 2143)), "./neo-c.h", 502, 2144))->head, "./neo-c.h", 502, 2145)), "./neo-c.h", 502, 2146))->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_171=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_171, "./neo-c.h", 506, 2147)), "./neo-c.h", 506, 2148))->next;
                                                                                    i_172++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional236=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 2149)), "./neo-c.h", 511, 2150))->len,                                                                        _if_conditional236) {
                                                                            it_174=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 2151)), "./neo-c.h", 512, 2152))->head;
                                                                            i_175=0;
                                                                            while(_while_condtional27=it_174!=((void*)0),                                                                            _while_condtional27) {
                                                                                if(_if_conditional237=i_175==head,                                                                                _if_conditional237) {
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 2153)), "./neo-c.h", 516, 2154))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_174, "./neo-c.h", 516, 2155)), "./neo-c.h", 516, 2156))->prev;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 2157)), "./neo-c.h", 517, 2158))->tail, "./neo-c.h", 517, 2159)), "./neo-c.h", 517, 2160))->next=((void*)0);
                                                                                }
                                                                                if(_if_conditional238=i_175>=head,                                                                                _if_conditional238) {
                                                                                    prev_it_176=it_174;
                                                                                    it_174=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_174, "./neo-c.h", 523, 2161)), "./neo-c.h", 523, 2162))->next;
                                                                                    i_175++;
                                                                                    come_call_finalizer3(prev_it_176,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 2163)), "./neo-c.h", 528, 2164))->len--;
                                                                                }
                                                                                else {
                                                                                    it_174=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_174, "./neo-c.h", 531, 2165)), "./neo-c.h", 531, 2166))->next;
                                                                                    i_175++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_177=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 2167)), "./neo-c.h", 537, 2168))->head;
                                                                            head_prev_it_178=((void*)0);
                                                                            tail_it_179=((void*)0);
                                                                            i_180=0;
                                                                            while(_while_condtional28=it_177!=((void*)0),                                                                            _while_condtional28) {
                                                                                if(_if_conditional239=i_180==head,                                                                                _if_conditional239) {
                                                                                    head_prev_it_178=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_177, "./neo-c.h", 546, 2169)), "./neo-c.h", 546, 2170))->prev;
                                                                                }
                                                                                if(_if_conditional240=i_180==tail,                                                                                _if_conditional240) {
                                                                                    tail_it_179=it_177;
                                                                                }
                                                                                if(_if_conditional241=i_180>=head&&i_180<tail,                                                                                _if_conditional241) {
                                                                                    prev_it_181=it_177;
                                                                                    it_177=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_177, "./neo-c.h", 556, 2171)), "./neo-c.h", 556, 2172))->next;
                                                                                    i_180++;
                                                                                    come_call_finalizer3(prev_it_181,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 2173)), "./neo-c.h", 561, 2174))->len--;
                                                                                }
                                                                                else {
                                                                                    it_177=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_177, "./neo-c.h", 564, 2175)), "./neo-c.h", 564, 2176))->next;
                                                                                    i_180++;
                                                                                }
                                                                            }
                                                                            if(_if_conditional242=head_prev_it_178!=((void*)0),                                                                            _if_conditional242) {
                                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_178, "./neo-c.h", 570, 2177)), "./neo-c.h", 570, 2178))->next=tail_it_179;
                                                                            }
                                                                            if(_if_conditional243=tail_it_179!=((void*)0),                                                                            _if_conditional243) {
                                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_179, "./neo-c.h", 573, 2179)), "./neo-c.h", 573, 2180))->prev=head_prev_it_178;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result131__ = __result_obj__ = self;
                                                                return __result131__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_169;
_Bool _while_condtional25;
struct list_item$1charp* prev_it_170;
struct list$1charp* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_170, 0, sizeof(struct list_item$1charp*));
                                                                        it_169=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 2124)), "./neo-c.h", 426, 2125))->head;
                                                                        while(_while_condtional25=it_169!=((void*)0),                                                                        _while_condtional25) {
                                                                            prev_it_170=it_169;
                                                                            it_169=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_169, "./neo-c.h", 429, 2126)), "./neo-c.h", 429, 2127))->next;
                                                                            come_call_finalizer3(prev_it_170,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 2128)), "./neo-c.h", 433, 2129))->head=((void*)0);
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 2130)), "./neo-c.h", 434, 2131))->tail=((void*)0);
                                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 2132)), "./neo-c.h", 436, 2133))->len=0;
                                                                        __result130__ = __result_obj__ = self;
                                                                        return __result130__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional249;
char* result_183;
void* __exception_result_var_b209;
char* __result133__;
_Bool _if_conditional250;
char* __result134__;
char* result_184;
void* __exception_result_var_b210;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                                    if(_if_conditional249=self==((void*)0),                                    _if_conditional249) {
                                        (come_push_stackframe("./neo-c.h", 284, 2237),__exception_result_var_b209=memset(&result_183,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b209);
                                        __result133__ = __result_obj__ = result_183;
                                        return __result133__;
                                    }
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 2238)), "./neo-c.h", 287, 2239))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 2240)), "./neo-c.h", 287, 2241))->head;
                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 2242)), "./neo-c.h", 289, 2243))->it) {
                                        __result134__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 2244)), "./neo-c.h", 290, 2245))->it, "./neo-c.h", 290, 2246)), "./neo-c.h", 290, 2247))->item;
                                        return __result134__;
                                    }
                                    (come_push_stackframe("./neo-c.h", 294, 2248),__exception_result_var_b210=memset(&result_184,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b210);
                                    __result135__ = __result_obj__ = result_184;
                                    return __result135__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
                                    __result136__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 2254)), "./neo-c.h", 317, 2255))->it==((void*)0);
                                    return __result136__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional251;
char* result_186;
void* __exception_result_var_b213;
char* __result137__;
_Bool _if_conditional252;
char* __result138__;
char* result_187;
void* __exception_result_var_b214;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                                    if(_if_conditional251=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 2261)), "./neo-c.h", 299, 2262))->it==((void*)0),                                    _if_conditional251) {
                                        (come_push_stackframe("./neo-c.h", 301, 2263),__exception_result_var_b213=memset(&result_186,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b213);
                                        __result137__ = __result_obj__ = result_186;
                                        return __result137__;
                                    }
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 2264)), "./neo-c.h", 305, 2265))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 2266)), "./neo-c.h", 305, 2267))->it, "./neo-c.h", 305, 2268)), "./neo-c.h", 305, 2269))->next;
                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 2270)), "./neo-c.h", 307, 2271))->it) {
                                        __result138__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 2272)), "./neo-c.h", 308, 2273))->it, "./neo-c.h", 308, 2274)), "./neo-c.h", 308, 2275))->item;
                                        return __result138__;
                                    }
                                    (come_push_stackframe("./neo-c.h", 312, 2276),__exception_result_var_b214=memset(&result_187,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b214);
                                    __result139__ = __result_obj__ = result_187;
                                    return __result139__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional255;
void* right_value210;
struct list_item$1charp* litem_188;
_Bool _if_conditional256;
void* right_value211;
struct list_item$1charp* litem_189;
void* right_value212;
struct list_item$1charp* litem_190;
struct list$1charp* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
right_value211 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
right_value212 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional255=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 2285)), "./neo-c.h", 222, 2286))->len==0,                                        _if_conditional255) {
                                            litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value210=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                                            come_call_finalizer3(right_value210,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_188, "./neo-c.h", 225, 2287)), "./neo-c.h", 225, 2288))->prev=((void*)0);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_188, "./neo-c.h", 226, 2289)), "./neo-c.h", 226, 2290))->next=((void*)0);
                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_188, "./neo-c.h", 227, 2291)), "./neo-c.h", 227, 2292))->item=item;
                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 2293)), "./neo-c.h", 229, 2294))->tail=litem_188;
                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 2295)), "./neo-c.h", 230, 2296))->head=litem_188;
                                        }
                                        else {
                                            if(_if_conditional256=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 2297)), "./neo-c.h", 232, 2298))->len==1,                                            _if_conditional256) {
                                                litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value211=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                                                come_call_finalizer3(right_value211,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_189, "./neo-c.h", 235, 2299)), "./neo-c.h", 235, 2300))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 2301)), "./neo-c.h", 235, 2302))->head;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_189, "./neo-c.h", 236, 2303)), "./neo-c.h", 236, 2304))->next=((void*)0);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_189, "./neo-c.h", 237, 2305)), "./neo-c.h", 237, 2306))->item=item;
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 2307)), "./neo-c.h", 239, 2308))->tail=litem_189;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 2309)), "./neo-c.h", 240, 2310))->head, "./neo-c.h", 240, 2311)), "./neo-c.h", 240, 2312))->next=litem_189;
                                            }
                                            else {
                                                litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value212=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                                                come_call_finalizer3(right_value212,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_190, "./neo-c.h", 245, 2313)), "./neo-c.h", 245, 2314))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 2315)), "./neo-c.h", 245, 2316))->tail;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_190, "./neo-c.h", 246, 2317)), "./neo-c.h", 246, 2318))->next=((void*)0);
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_190, "./neo-c.h", 247, 2319)), "./neo-c.h", 247, 2320))->item=item;
                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 2321)), "./neo-c.h", 249, 2322))->tail, "./neo-c.h", 249, 2323)), "./neo-c.h", 249, 2324))->next=litem_190;
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 2325)), "./neo-c.h", 250, 2326))->tail=litem_190;
                                            }
                                        }
                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 2327)), "./neo-c.h", 253, 2328))->len++;
                                        __result140__ = __result_obj__ = self;
                                        return __result140__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_191;
_Bool _if_conditional257;
_Bool _if_conditional258;
int i_192;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_191, 0, sizeof(int));
memset(&i_192, 0, sizeof(int));
                        for(                        i_191=0;                        i_191<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 2332)), "./neo-c.h", 1111, 2333))->size;                        i_191++                        ){
                            if(_if_conditional257=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 2334)), "./neo-c.h", 1112, 2335))->item_existance, "./neo-c.h", 1112, 2336))[i_191],                            _if_conditional257) {
                                if(_if_conditional258=1,                                _if_conditional258) {
                                    come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 2337)), "./neo-c.h", 1114, 2338))->items, "./neo-c.h", 1114, 2339))[i_191],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        (come_push_stackframe("./neo-c.h", 1118,2342),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 2340)), "./neo-c.h", 1118, 2341))->items),come_pop_stackframe());
                        for(                        i_192=0;                        i_192<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 2343)), "./neo-c.h", 1120, 2344))->size;                        i_192++                        ){
                            if(_if_conditional259=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 2345)), "./neo-c.h", 1121, 2346))->item_existance, "./neo-c.h", 1121, 2347))[i_192],                            _if_conditional259) {
                                if(_if_conditional260=1,                                _if_conditional260) {
                                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 2348)), "./neo-c.h", 1123, 2349))->keys, "./neo-c.h", 1123, 2350))[i_192] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 2348)), "./neo-c.h", 1123, 2349))->keys, "./neo-c.h", 1123, 2350))[i_192], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        (come_push_stackframe("./neo-c.h", 1127,2353),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 2351)), "./neo-c.h", 1127, 2352))->keys),come_pop_stackframe());
                        come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 2354)), "./neo-c.h", 1129, 2355))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 2356)), "./neo-c.h", 1131, 2357))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 2356)), "./neo-c.h", 1131, 2357))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* right_value217;
struct sNodeBase* __exception_result_var_b224;
struct sNode* __dec_obj77;
struct sComplement* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    (come_push_stackframe("05pre_op.c", 469, 2389),__exception_result_var_b224=((struct sNodeBase*)(right_value217=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "05pre_op.c", 469, 2387)), "05pre_op.c", 469, 2388))),info))), come_pop_stackframe(), __exception_result_var_b224);
    come_call_finalizer3(right_value217,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=((struct sComplement*)come_null_check(self, "05pre_op.c", 471, 2390))->value;
    ((struct sComplement*)come_null_check(self, "05pre_op.c", 471, 2390))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    __result149__ = __result_obj__ = self;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result149__;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sComplement_kind(struct sComplement* self){
void* __result_obj__;
void* right_value218;
char* __exception_result_var_b225;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
    __result150__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 476, 2399),__exception_result_var_b225=((char*)(right_value218=__builtin_string("sComplement"))), come_pop_stackframe(), __exception_result_var_b225);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b226;
_Bool _if_conditional268;
_Bool __result151__;
void* right_value219;
struct CVALUE* __exception_result_var_b227;
struct CVALUE* come_value_194;
void* right_value220;
struct CVALUE* come_value2_195;
void* right_value221;
char* __exception_result_var_b228;
char* __dec_obj78;
struct sType* __exception_result_var_b229;
void* right_value222;
struct sType* __dec_obj79;
struct list$1CVALUEph* __exception_result_var_b230;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value220 = (void*)0;
memset(&come_value2_195, 0, sizeof(struct CVALUE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
    if(_if_conditional268=!(come_push_stackframe("05pre_op.c", 481, 2402),__exception_result_var_b226=node_compile(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "05pre_op.c", 481, 2400)), "05pre_op.c", 481, 2401))->value,info), come_pop_stackframe(), __exception_result_var_b226),    _if_conditional268) {
        __result151__ = (_Bool)0;
        return __result151__;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 485, 2403),__exception_result_var_b227=((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b227));
    come_call_finalizer3(right_value219,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 486,2404),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value2_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 488, "CVALUE"))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 490, 2405)), "05pre_op.c", 490, 2406))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 490, 2405)), "05pre_op.c", 490, 2406))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 490, 2409),__exception_result_var_b228=((char*)(right_value221=xsprintf("~%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_194, "05pre_op.c", 490, 2407)), "05pre_op.c", 490, 2408))->c_value))), come_pop_stackframe(), __exception_result_var_b228));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj79=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 491, 2410)), "05pre_op.c", 491, 2411))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 491, 2410)), "05pre_op.c", 491, 2411))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(come_push_stackframe("05pre_op.c", 491, 2414),__exception_result_var_b229=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_194, "05pre_op.c", 491, 2412)), "05pre_op.c", 491, 2413))->type), come_pop_stackframe(), __exception_result_var_b229))));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 492, 2415)), "05pre_op.c", 492, 2416))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 494, 2421),__exception_result_var_b230=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 494, 2417)), "05pre_op.c", 494, 2418))->stack, "05pre_op.c", 494, 2419)), "05pre_op.c", 494, 2420)),(struct CVALUE*)come_increment_ref_count(come_value2_195)), come_pop_stackframe(), __exception_result_var_b230);
    (come_push_stackframe("05pre_op.c", 496,2424),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_195, "05pre_op.c", 496, 2422)), "05pre_op.c", 496, 2423))->c_value),come_pop_stackframe());
    __result152__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value223;
struct sNodeBase* __exception_result_var_b231;
struct sNode* __exception_result_var_b232;
void* right_value224;
struct sNode* __dec_obj80;
struct sParenNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
    (come_push_stackframe("05pre_op.c", 506, 2427),__exception_result_var_b231=((struct sNodeBase*)(right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "05pre_op.c", 506, 2425)), "05pre_op.c", 506, 2426))),info))), come_pop_stackframe(), __exception_result_var_b231);
    come_call_finalizer3(right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj80=((struct sParenNode*)come_null_check(self, "05pre_op.c", 508, 2428))->mLeft;
    ((struct sParenNode*)come_null_check(self, "05pre_op.c", 508, 2428))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=(come_push_stackframe("05pre_op.c", 508, 2429),__exception_result_var_b232=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b232))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result153__ = __result_obj__ = self;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result153__;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sParenNode_kind(struct sParenNode* self){
void* __result_obj__;
void* right_value225;
char* __exception_result_var_b233;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
    __result154__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 513, 2438),__exception_result_var_b233=((char*)(right_value225=__builtin_string("sParenNode"))), come_pop_stackframe(), __exception_result_var_b233);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_196;
_Bool __exception_result_var_b234;
_Bool _if_conditional271;
_Bool __result155__;
void* right_value226;
struct CVALUE* __exception_result_var_b235;
struct CVALUE* left_value_197;
void* right_value227;
struct CVALUE* come_value_198;
void* right_value228;
char* __exception_result_var_b236;
char* __dec_obj81;
struct sType* __exception_result_var_b237;
void* right_value229;
struct sType* __dec_obj82;
struct list$1CVALUEph* __exception_result_var_b238;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_196, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&left_value_197, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    left_196=((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "05pre_op.c", 518, 2439)), "05pre_op.c", 518, 2440))->mLeft;
    if(_if_conditional271=!(come_push_stackframe("05pre_op.c", 520, 2441),__exception_result_var_b234=node_compile(left_196,info), come_pop_stackframe(), __exception_result_var_b234),    _if_conditional271) {
        __result155__ = (_Bool)0;
        return __result155__;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 524, 2442),__exception_result_var_b235=((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b235));
    come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 525,2443),dec_stack_ptr(1,info),come_pop_stackframe());
    come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 527, "CVALUE"))));
    come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 529, 2444)), "05pre_op.c", 529, 2445))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 529, 2444)), "05pre_op.c", 529, 2445))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 529, 2448),__exception_result_var_b236=((char*)(right_value228=xsprintf("(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_197, "05pre_op.c", 529, 2446)), "05pre_op.c", 529, 2447))->c_value))), come_pop_stackframe(), __exception_result_var_b236));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 530, 2449)), "05pre_op.c", 530, 2450))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 530, 2449)), "05pre_op.c", 530, 2450))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=(come_push_stackframe("05pre_op.c", 530, 2453),__exception_result_var_b237=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_197, "05pre_op.c", 530, 2451)), "05pre_op.c", 530, 2452))->type), come_pop_stackframe(), __exception_result_var_b237))));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 531, 2454)), "05pre_op.c", 531, 2455))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 533,2458),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_198, "05pre_op.c", 533, 2456)), "05pre_op.c", 533, 2457))->c_value),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 535, 2463),__exception_result_var_b238=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 535, 2459)), "05pre_op.c", 535, 2460))->stack, "05pre_op.c", 535, 2461)), "05pre_op.c", 535, 2462)),(struct CVALUE*)come_increment_ref_count(come_value_198)), come_pop_stackframe(), __exception_result_var_b238);
    __result156__ = (_Bool)1;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value230;
struct sNodeBase* __exception_result_var_b239;
struct sType* __exception_result_var_b240;
void* right_value231;
struct sType* __dec_obj83;
struct sNode* __exception_result_var_b241;
void* right_value232;
struct sNode* __dec_obj84;
struct sCastNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    (come_push_stackframe("05pre_op.c", 545, 2466),__exception_result_var_b239=((struct sNodeBase*)(right_value230=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "05pre_op.c", 545, 2464)), "05pre_op.c", 545, 2465))),info))), come_pop_stackframe(), __exception_result_var_b239);
    come_call_finalizer3(right_value230,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=((struct sCastNode*)come_null_check(self, "05pre_op.c", 547, 2467))->mType;
    ((struct sCastNode*)come_null_check(self, "05pre_op.c", 547, 2467))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(come_push_stackframe("05pre_op.c", 547, 2468),__exception_result_var_b240=sType_clone(type), come_pop_stackframe(), __exception_result_var_b240))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=((struct sCastNode*)come_null_check(self, "05pre_op.c", 548, 2469))->mLeft;
    ((struct sCastNode*)come_null_check(self, "05pre_op.c", 548, 2469))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=(come_push_stackframe("05pre_op.c", 548, 2470),__exception_result_var_b241=sNode_clone(left), come_pop_stackframe(), __exception_result_var_b241))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCastNode_kind(struct sCastNode* self){
void* __result_obj__;
void* right_value233;
char* __exception_result_var_b242;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    __result158__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 553, 2483),__exception_result_var_b242=((char*)(right_value233=__builtin_string("sCastNode"))), come_pop_stackframe(), __exception_result_var_b242);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_199;
struct sNode* left_200;
_Bool __exception_result_var_b243;
_Bool _if_conditional275;
_Bool __result159__;
void* right_value234;
struct CVALUE* __exception_result_var_b244;
struct CVALUE* left_value_201;
struct sType* __exception_result_var_b245;
void* right_value235;
void* right_value236;
struct sType* __exception_result_var_b246;
struct sType* type2_202;
void* right_value237;
struct CVALUE* come_value_203;
void* right_value238;
char* __exception_result_var_b247;
void* right_value239;
char* __exception_result_var_b248;
char* __dec_obj85;
struct sType* __exception_result_var_b249;
void* right_value240;
struct sType* __dec_obj86;
struct list$1CVALUEph* __exception_result_var_b250;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_199, 0, sizeof(struct sType*));
memset(&left_200, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
memset(&left_value_201, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&type2_202, 0, sizeof(struct sType*));
right_value237 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
    type_199=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "05pre_op.c", 558, 2484)), "05pre_op.c", 558, 2485))->mType;
    left_200=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "05pre_op.c", 559, 2486)), "05pre_op.c", 559, 2487))->mLeft;
    if(_if_conditional275=!(come_push_stackframe("05pre_op.c", 561, 2488),__exception_result_var_b243=node_compile(left_200,info), come_pop_stackframe(), __exception_result_var_b243),    _if_conditional275) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 565, 2489),__exception_result_var_b244=((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b244));
    come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 566,2490),dec_stack_ptr(1,info),come_pop_stackframe());
    type2_202=(struct sType*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 568, 2494),__exception_result_var_b246=((struct sType*)(right_value236=solve_generics(((struct sType*)(right_value235=(come_push_stackframe("05pre_op.c", 568, 2491),__exception_result_var_b245=sType_clone(type_199), come_pop_stackframe(), __exception_result_var_b245))),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 568, 2492)), "05pre_op.c", 568, 2493))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b246));
    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 570, "CVALUE"))));
    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05pre_op.c", 572,2497),cast_type(type2_202,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "05pre_op.c", 572, 2495)), "05pre_op.c", 572, 2496))->type,left_value_201,info),come_pop_stackframe());
    __dec_obj85=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 574, 2498)), "05pre_op.c", 574, 2499))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 574, 2498)), "05pre_op.c", 574, 2499))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 574, 2503),__exception_result_var_b248=((char*)(right_value239=xsprintf("(%s)%s",(come_push_stackframe("05pre_op.c", 574, 2500),__exception_result_var_b247=((char*)(right_value238=make_type_name_string(type2_202,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b247),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(left_value_201, "05pre_op.c", 574, 2501)), "05pre_op.c", 574, 2502))->c_value))), come_pop_stackframe(), __exception_result_var_b248));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj86=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 575, 2504)), "05pre_op.c", 575, 2505))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 575, 2504)), "05pre_op.c", 575, 2505))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=(come_push_stackframe("05pre_op.c", 575, 2506),__exception_result_var_b249=sType_clone(type2_202), come_pop_stackframe(), __exception_result_var_b249))));
    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 576, 2507)), "05pre_op.c", 576, 2508))->var=((void*)0);
    (come_push_stackframe("05pre_op.c", 578,2511),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05pre_op.c", 578, 2509)), "05pre_op.c", 578, 2510))->c_value),come_pop_stackframe());
    (come_push_stackframe("05pre_op.c", 580, 2516),__exception_result_var_b250=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 580, 2512)), "05pre_op.c", 580, 2513))->stack, "05pre_op.c", 580, 2514)), "05pre_op.c", 580, 2515)),(struct CVALUE*)come_increment_ref_count(come_value_203)), come_pop_stackframe(), __exception_result_var_b250);
    __result160__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value241;
struct sBlock* __exception_result_var_b251;
struct sBlock* block_204;
void* right_value242;
void* right_value243;
struct sNormalBlock* __exception_result_var_b252;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* right_value247;
struct sNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&block_204, 0, sizeof(struct sBlock*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value247 = (void*)0;
    block_204=(struct sBlock*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 588, 2517),__exception_result_var_b251=((struct sBlock*)(right_value241=parse_block(info,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b251));
    come_call_finalizer3(right_value241,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 590, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("05pre_op.c", 590, 2519),__exception_result_var_b252=((struct sNormalBlock*)(right_value243=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)(right_value242=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 590, "sNormalBlock"))), "05pre_op.c", 590, 2518))),block_204,info))), come_pop_stackframe(), __exception_result_var_b252));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result163__ = __result_obj__ = ((struct sNode*)(right_value247=_inf_value1));
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value242,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value243,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result163__;
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional276;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional276=self!=((void*)0)&&((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_finalize", 0, 2520)), "sNormalBlock_finalize", 0, 2521))->sname!=((void*)0),        _if_conditional276) {
            ((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_finalize", 0, 2522)), "sNormalBlock_finalize", 0, 2523))->sname = come_decrement_ref_count2(((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_finalize", 0, 2522)), "sNormalBlock_finalize", 0, 2523))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional277=self!=((void*)0)&&((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_finalize", 1, 2524)), "sNormalBlock_finalize", 1, 2525))->mBlock!=((void*)0),        _if_conditional277) {
            come_call_finalizer3(((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_finalize", 1, 2526)), "sNormalBlock_finalize", 1, 2527))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sNormalBlock* __result161__;
void* right_value244;
struct sNormalBlock* result_205;
_Bool _if_conditional279;
_Bool _if_conditional280;
char* __exception_result_var_b253;
void* right_value245;
char* __dec_obj87;
_Bool _if_conditional281;
struct sBlock* __exception_result_var_b254;
void* right_value246;
struct sBlock* __dec_obj88;
struct sNormalBlock* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&result_205, 0, sizeof(struct sNormalBlock*));
right_value245 = (void*)0;
right_value246 = (void*)0;
        if(_if_conditional278=self==(void*)0,        _if_conditional278) {
            __result161__ = __result_obj__ = (void*)0;
            return __result161__;
        }
        result_205=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value244=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer3(right_value244,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional279=self!=((void*)0),        _if_conditional279) {
            ((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(result_205, "sNormalBlock_clone", 4, 2528)), "sNormalBlock_clone", 4, 2529))->sline=((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_clone", 4, 2530)), "sNormalBlock_clone", 4, 2531))->sline;
        }
        if(_if_conditional280=self!=((void*)0)&&((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_clone", 5, 2532)), "sNormalBlock_clone", 5, 2533))->sname!=((void*)0),        _if_conditional280) {
            __dec_obj87=((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(result_205, "sNormalBlock_clone", 5, 2534)), "sNormalBlock_clone", 5, 2535))->sname;
            ((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(result_205, "sNormalBlock_clone", 5, 2534)), "sNormalBlock_clone", 5, 2535))->sname=(char*)come_increment_ref_count(((char*)(right_value245=(come_push_stackframe("sNormalBlock_clone", 5, 2538),__exception_result_var_b253=string_clone(((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_clone", 5, 2536)), "sNormalBlock_clone", 5, 2537))->sname), come_pop_stackframe(), __exception_result_var_b253))));
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional281=self!=((void*)0)&&((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_clone", 6, 2539)), "sNormalBlock_clone", 6, 2540))->mBlock!=((void*)0),        _if_conditional281) {
            __dec_obj88=((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(result_205, "sNormalBlock_clone", 6, 2541)), "sNormalBlock_clone", 6, 2542))->mBlock;
            ((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(result_205, "sNormalBlock_clone", 6, 2541)), "sNormalBlock_clone", 6, 2542))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value246=(come_push_stackframe("sNormalBlock_clone", 6, 2545),__exception_result_var_b254=sBlock_clone(((struct sNormalBlock*)come_null_check(((struct sNormalBlock*)come_null_check(self, "sNormalBlock_clone", 6, 2543)), "sNormalBlock_clone", 6, 2544))->mBlock), come_pop_stackframe(), __exception_result_var_b254))));
            come_call_finalizer3(__dec_obj88,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value246,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result162__ = __result_obj__ = result_205;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result162__;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value248;
struct sNode* __exception_result_var_b255;
void* right_value249;
void* right_value250;
struct sLogicalDenial* __exception_result_var_b256;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* right_value254;
struct sNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value254 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 595, "struct sNode");
    _inf_obj_value2=come_increment_ref_count((come_push_stackframe("05pre_op.c", 595, 2548),__exception_result_var_b256=((struct sLogicalDenial*)(right_value250=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)(right_value248=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 595, "sLogicalDenial"))), "05pre_op.c", 595, 2546))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=(come_push_stackframe("05pre_op.c", 595, 2547),__exception_result_var_b255=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b255)))),info))), come_pop_stackframe(), __exception_result_var_b256));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result166__ = __result_obj__ = ((struct sNode*)(right_value254=_inf_value2));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(right_value248,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value250,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result166__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* pre_position_operator(struct sInfo* info){
void* __result_obj__;
_Bool refference_207;
char* p_208;
int sline_209;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool __exception_result_var_b259;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _while_condtional29;
_Bool __exception_result_var_b260;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value255;
struct sNode* __exception_result_var_b261;
struct sNode* __result167__;
void* right_value256;
struct sNode* __exception_result_var_b262;
struct sNode* __result168__;
_Bool _if_conditional295;
void* right_value257;
struct sNode* __exception_result_var_b263;
struct sNode* node_210;
void* right_value258;
void* right_value259;
struct sLogicalDenial* __exception_result_var_b264;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value263;
struct sNode* __result171__;
_Bool _if_conditional302;
void* right_value264;
struct sNode* __exception_result_var_b267;
struct sNode* node_212;
void* right_value265;
void* right_value266;
struct sMinusMinusNode2* __exception_result_var_b268;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* right_value270;
struct sNode* __result174__;
_Bool __exception_result_var_b271;
_Bool _if_conditional309;
void* right_value271;
struct sNode* __exception_result_var_b272;
struct sNode* node_214;
void* right_value272;
void* right_value273;
struct sMinusNode2* __exception_result_var_b273;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* right_value277;
struct sNode* __result177__;
_Bool _if_conditional316;
void* right_value278;
struct sNode* __exception_result_var_b276;
struct sNode* node_216;
void* right_value279;
void* right_value280;
struct sPlusPlusNode2* __exception_result_var_b277;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* right_value284;
struct sNode* __result180__;
_Bool _if_conditional323;
void* right_value285;
struct sNode* __exception_result_var_b280;
struct sNode* node_218;
void* right_value286;
void* right_value287;
struct sComplement* __exception_result_var_b281;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* right_value291;
struct sNode* __result183__;
_Bool _if_conditional330;
_Bool quote_220;
_Bool _if_conditional331;
_Bool no_assign_221;
void* right_value292;
struct sNode* __exception_result_var_b284;
struct sNode* value_222;
void* right_value293;
void* right_value294;
struct sDerefferenceNode* __exception_result_var_b285;
struct sNode* _inf_value8;
struct sDerefferenceNode* _inf_obj_value8;
void* right_value298;
struct sNode* __result186__;
_Bool _if_conditional339;
void* right_value299;
struct sNode* __exception_result_var_b288;
struct sNode* value_224;
void* right_value300;
void* right_value301;
struct sRefferenceNode* __exception_result_var_b289;
struct sNode* _inf_value9;
struct sRefferenceNode* _inf_obj_value9;
void* right_value305;
struct sNode* __result189__;
_Bool _if_conditional346;
void* right_value306;
struct sNode* __exception_result_var_b292;
struct sNode* value_226;
void* right_value307;
void* right_value308;
struct sReverseNode* __exception_result_var_b293;
struct sNode* _inf_value10;
struct sReverseNode* _inf_obj_value10;
void* right_value312;
struct sNode* __result192__;
_Bool _if_conditional353;
_Bool cast_expression_flag_228;
char* p_229;
int sline_230;
void* right_value313;
char* __exception_result_var_b296;
char* word_231;
_Bool __exception_result_var_b297;
_Bool _if_conditional354;
void* right_value314;
char* __exception_result_var_b298;
char* __dec_obj107;
_Bool __exception_result_var_b299;
_Bool _if_conditional355;
_Bool tuple_expression_flag_232;
_Bool _if_conditional356;
char* p_233;
int sline_234;
_Bool no_comma_235;
_Bool no_output_err_236;
_Bool no_output_come_code_237;
void* right_value315;
struct sNode* __exception_result_var_b300;
struct sNode* node_238;
struct sNode* node2_239;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value316;
struct sNode* __exception_result_var_b301;
struct sNode* node_240;
struct sNode* __result193__;
_Bool _if_conditional359;
void* right_value317;
struct tuple3$3sTypephcharphbool* __exception_result_var_b302;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_241;
char* name_242;
_Bool err_243;
_Bool _if_conditional362;
int __exception_result_var_b303;
int __exception_result_var_b304;
void* right_value318;
struct sNode* __exception_result_var_b305;
struct sNode* node_244;
void* right_value319;
void* right_value320;
struct sCastNode* __exception_result_var_b306;
struct sNode* _inf_value11;
struct sCastNode* _inf_obj_value11;
void* right_value325;
struct sNode* __result196__;
void* right_value326;
struct sNode* __exception_result_var_b310;
struct sNode* node_246;
int __exception_result_var_b311;
void* right_value327;
void* right_value328;
struct sParenNode* __exception_result_var_b312;
struct sNode* _inf_value12;
struct sParenNode* _inf_obj_value12;
void* right_value332;
struct sNode* __dec_obj113;
struct sNode* __result199__;
struct sNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_207, 0, sizeof(_Bool));
memset(&p_208, 0, sizeof(char*));
memset(&sline_209, 0, sizeof(int));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&node_210, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&node_212, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&node_214, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&node_216, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&node_218, 0, sizeof(struct sNode*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value291 = (void*)0;
memset(&quote_220, 0, sizeof(_Bool));
memset(&no_assign_221, 0, sizeof(_Bool));
right_value292 = (void*)0;
memset(&value_222, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
memset(&value_224, 0, sizeof(struct sNode*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&value_226, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
right_value308 = (void*)0;
right_value312 = (void*)0;
memset(&cast_expression_flag_228, 0, sizeof(_Bool));
memset(&p_229, 0, sizeof(char*));
memset(&sline_230, 0, sizeof(int));
right_value313 = (void*)0;
memset(&word_231, 0, sizeof(char*));
right_value314 = (void*)0;
memset(&tuple_expression_flag_232, 0, sizeof(_Bool));
memset(&p_233, 0, sizeof(char*));
memset(&sline_234, 0, sizeof(int));
memset(&no_comma_235, 0, sizeof(_Bool));
memset(&no_output_err_236, 0, sizeof(_Bool));
memset(&no_output_come_code_237, 0, sizeof(_Bool));
right_value315 = (void*)0;
memset(&node_238, 0, sizeof(struct sNode*));
memset(&node2_239, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&node_240, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&node_244, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&node_246, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value332 = (void*)0;
    (come_push_stackframe("05pre_op.c", 600,2575),skip_spaces_and_lf(info),come_pop_stackframe());
    refference_207=(_Bool)0;
    {
        p_208=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 604, 2576)), "05pre_op.c", 604, 2577))->p;
        sline_209=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 605, 2578)), "05pre_op.c", 605, 2579))->sline;
        if(_if_conditional288=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 607, 2580)), "05pre_op.c", 607, 2581))->p, "05pre_op.c", 607, 2582))==38&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 607, 2583)), "05pre_op.c", 607, 2584))->p+1), "05pre_op.c", 607, 2585))!=38,        _if_conditional288) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 608, 2586)), "05pre_op.c", 608, 2587))->p++;
            (come_push_stackframe("05pre_op.c", 609,2588),skip_spaces_and_lf(info),come_pop_stackframe());
            if(_if_conditional289=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 611, 2589)), "05pre_op.c", 611, 2590))->p, "05pre_op.c", 611, 2591))==34,            _if_conditional289) {
                refference_207=(_Bool)1;
            }
            else {
                if(_if_conditional290=(come_push_stackframe("05pre_op.c", 614, 2595),__exception_result_var_b259=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 614, 2592)), "05pre_op.c", 614, 2593))->p, "05pre_op.c", 614, 2594))), come_pop_stackframe(), __exception_result_var_b259)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 614, 2596)), "05pre_op.c", 614, 2597))->p, "05pre_op.c", 614, 2598))==95,                _if_conditional290) {
                    refference_207=(_Bool)1;
                }
                else {
                    if(_if_conditional291=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 617, 2599)), "05pre_op.c", 617, 2600))->p, "05pre_op.c", 617, 2601))==40||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 617, 2602)), "05pre_op.c", 617, 2603))->p, "05pre_op.c", 617, 2604))==42,                    _if_conditional291) {
                        while(_while_condtional29=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 618, 2605)), "05pre_op.c", 618, 2606))->p, "05pre_op.c", 618, 2607))==40||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 618, 2608)), "05pre_op.c", 618, 2609))->p, "05pre_op.c", 618, 2610))==42,                        _while_condtional29) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 619, 2611)), "05pre_op.c", 619, 2612))->p++;
                            (come_push_stackframe("05pre_op.c", 620,2613),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        if(_if_conditional292=(come_push_stackframe("05pre_op.c", 623, 2617),__exception_result_var_b260=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 623, 2614)), "05pre_op.c", 623, 2615))->p, "05pre_op.c", 623, 2616))), come_pop_stackframe(), __exception_result_var_b260)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 623, 2618)), "05pre_op.c", 623, 2619))->p, "05pre_op.c", 623, 2620))==95,                        _if_conditional292) {
                            refference_207=(_Bool)1;
                        }
                    }
                }
            }
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 629, 2621)), "05pre_op.c", 629, 2622))->p=p_208;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 630, 2623)), "05pre_op.c", 630, 2624))->sline=sline_209;
    }
    (come_push_stackframe("05pre_op.c", 633,2625),parse_sharp_v5(info),come_pop_stackframe());
    if(_if_conditional293=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 635, 2626)), "05pre_op.c", 635, 2627))->p, "05pre_op.c", 635, 2628))==123,    _if_conditional293) {
        if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 636, 2629)), "05pre_op.c", 636, 2630))->array_initializer) {
            __result167__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 637, 2631),__exception_result_var_b261=((struct sNode*)(right_value255=parse_array_initializer(info))), come_pop_stackframe(), __exception_result_var_b261);
            if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result167__;
        }
        else {
            __result168__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 640, 2632),__exception_result_var_b262=((struct sNode*)(right_value256=parse_normal_block(info))), come_pop_stackframe(), __exception_result_var_b262);
            if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result168__;
        }
    }
    else {
        if(_if_conditional295=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 643, 2633)), "05pre_op.c", 643, 2634))->p, "05pre_op.c", 643, 2635))==33,        _if_conditional295) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 644, 2636)), "05pre_op.c", 644, 2637))->p++;
            (come_push_stackframe("05pre_op.c", 645,2638),skip_spaces_and_lf(info),come_pop_stackframe());
            node_210=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 647, 2639),__exception_result_var_b263=((struct sNode*)(right_value257=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b263));
            if(right_value257) { right_value257 = come_decrement_ref_count2(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 649, "struct sNode");
            _inf_obj_value3=come_increment_ref_count((come_push_stackframe("05pre_op.c", 649, 2641),__exception_result_var_b264=((struct sLogicalDenial*)(right_value259=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)(right_value258=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 649, "sLogicalDenial"))), "05pre_op.c", 649, 2640))),(struct sNode*)come_increment_ref_count(node_210),info))), come_pop_stackframe(), __exception_result_var_b264));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLogicalDenial_finalize;
            _inf_value3->clone=(void*)sLogicalDenial_clone;
            _inf_value3->compile=(void*)sLogicalDenial_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sLogicalDenial_kind;
            __result171__ = __result_obj__ = ((struct sNode*)(right_value263=_inf_value3));
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value258,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value259,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result171__;
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional302=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 651, 2668)), "05pre_op.c", 651, 2669))->p, "05pre_op.c", 651, 2670))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 651, 2671)), "05pre_op.c", 651, 2672))->p+1), "05pre_op.c", 651, 2673))==45,            _if_conditional302) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 652, 2674)), "05pre_op.c", 652, 2675))->p+=2;
                (come_push_stackframe("05pre_op.c", 653,2676),skip_spaces_and_lf(info),come_pop_stackframe());
                node_212=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 655, 2677),__exception_result_var_b267=((struct sNode*)(right_value264=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b267));
                if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 657, "struct sNode");
                _inf_obj_value4=come_increment_ref_count((come_push_stackframe("05pre_op.c", 657, 2679),__exception_result_var_b268=((struct sMinusMinusNode2*)(right_value266=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)(right_value265=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 657, "sMinusMinusNode2"))), "05pre_op.c", 657, 2678))),(struct sNode*)come_increment_ref_count(node_212),info))), come_pop_stackframe(), __exception_result_var_b268));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value4->clone=(void*)sMinusMinusNode2_clone;
                _inf_value4->compile=(void*)sMinusMinusNode2_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sMinusMinusNode2_kind;
                __result174__ = __result_obj__ = ((struct sNode*)(right_value270=_inf_value4));
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value265,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value266,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result174__;
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional309=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 659, 2706)), "05pre_op.c", 659, 2707))->p, "05pre_op.c", 659, 2708))==45&&!(come_push_stackframe("05pre_op.c", 659, 2712),__exception_result_var_b271=xisdigit(*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 659, 2709)), "05pre_op.c", 659, 2710))->p+1), "05pre_op.c", 659, 2711))), come_pop_stackframe(), __exception_result_var_b271),                _if_conditional309) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 660, 2713)), "05pre_op.c", 660, 2714))->p++;
                    (come_push_stackframe("05pre_op.c", 661,2715),skip_spaces_and_lf(info),come_pop_stackframe());
                    node_214=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 663, 2716),__exception_result_var_b272=((struct sNode*)(right_value271=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b272));
                    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 665, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count((come_push_stackframe("05pre_op.c", 665, 2718),__exception_result_var_b273=((struct sMinusNode2*)(right_value273=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)(right_value272=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 665, "sMinusNode2"))), "05pre_op.c", 665, 2717))),(struct sNode*)come_increment_ref_count(node_214),info))), come_pop_stackframe(), __exception_result_var_b273));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sMinusNode2_finalize;
                    _inf_value5->clone=(void*)sMinusNode2_clone;
                    _inf_value5->compile=(void*)sMinusNode2_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sMinusNode2_kind;
                    __result177__ = __result_obj__ = ((struct sNode*)(right_value277=_inf_value5));
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value272,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value273,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result177__;
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional316=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 667, 2745)), "05pre_op.c", 667, 2746))->p, "05pre_op.c", 667, 2747))==43&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 667, 2748)), "05pre_op.c", 667, 2749))->p+1), "05pre_op.c", 667, 2750))==43,                    _if_conditional316) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 668, 2751)), "05pre_op.c", 668, 2752))->p+=2;
                        (come_push_stackframe("05pre_op.c", 669,2753),skip_spaces_and_lf(info),come_pop_stackframe());
                        node_216=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 671, 2754),__exception_result_var_b276=((struct sNode*)(right_value278=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b276));
                        if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 673, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count((come_push_stackframe("05pre_op.c", 673, 2756),__exception_result_var_b277=((struct sPlusPlusNode2*)(right_value280=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)(right_value279=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 673, "sPlusPlusNode2"))), "05pre_op.c", 673, 2755))),(struct sNode*)come_increment_ref_count(node_216),info))), come_pop_stackframe(), __exception_result_var_b277));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value6->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value6->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sPlusPlusNode2_kind;
                        __result180__ = __result_obj__ = ((struct sNode*)(right_value284=_inf_value6));
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value279,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value280,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result180__;
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional323=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 675, 2783)), "05pre_op.c", 675, 2784))->p, "05pre_op.c", 675, 2785))==126,                        _if_conditional323) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 676, 2786)), "05pre_op.c", 676, 2787))->p++;
                            (come_push_stackframe("05pre_op.c", 677,2788),skip_spaces_and_lf(info),come_pop_stackframe());
                            node_218=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 679, 2789),__exception_result_var_b280=((struct sNode*)(right_value285=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b280));
                            if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 681, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count((come_push_stackframe("05pre_op.c", 681, 2791),__exception_result_var_b281=((struct sComplement*)(right_value287=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)come_null_check(((struct sComplement*)(right_value286=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 681, "sComplement"))), "05pre_op.c", 681, 2790))),(struct sNode*)come_increment_ref_count(node_218),info))), come_pop_stackframe(), __exception_result_var_b281));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sComplement_finalize;
                            _inf_value7->clone=(void*)sComplement_clone;
                            _inf_value7->compile=(void*)sComplement_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sComplement_kind;
                            __result183__ = __result_obj__ = ((struct sNode*)(right_value291=_inf_value7));
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value286,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value287,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result183__;
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional330=(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 683, 2818)), "05pre_op.c", 683, 2819))->p, "05pre_op.c", 683, 2820))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 683, 2821)), "05pre_op.c", 683, 2822))->p+1), "05pre_op.c", 683, 2823))==42)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 683, 2824)), "05pre_op.c", 683, 2825))->p, "05pre_op.c", 683, 2826))==42,                            _if_conditional330) {
                                if(_if_conditional331=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 685, 2827)), "05pre_op.c", 685, 2828))->p, "05pre_op.c", 685, 2829))==92,                                _if_conditional331) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 686, 2830)), "05pre_op.c", 686, 2831))->p+=2;
                                    (come_push_stackframe("05pre_op.c", 687,2832),skip_spaces_and_lf(info),come_pop_stackframe());
                                    quote_220=(_Bool)1;
                                }
                                else {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 691, 2833)), "05pre_op.c", 691, 2834))->p++;
                                    (come_push_stackframe("05pre_op.c", 692,2835),skip_spaces_and_lf(info),come_pop_stackframe());
                                    quote_220=(_Bool)0;
                                }
                                no_assign_221=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 696, 2836)), "05pre_op.c", 696, 2837))->no_assign;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 697, 2838)), "05pre_op.c", 697, 2839))->no_assign=(_Bool)1;
                                value_222=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 698, 2840),__exception_result_var_b284=((struct sNode*)(right_value292=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b284));
                                if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 699, 2841)), "05pre_op.c", 699, 2842))->no_assign=no_assign_221;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 702, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count((come_push_stackframe("05pre_op.c", 701, 2844),__exception_result_var_b285=((struct sDerefferenceNode*)(right_value294=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)(right_value293=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 701, "sDerefferenceNode"))), "05pre_op.c", 701, 2843))),(struct sNode*)come_increment_ref_count(value_222),quote_220,info))), come_pop_stackframe(), __exception_result_var_b285));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sDerefferenceNode_finalize;
                                _inf_value8->clone=(void*)sDerefferenceNode_clone;
                                _inf_value8->compile=(void*)sDerefferenceNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sDerefferenceNode_kind;
                                __result186__ = __result_obj__ = ((struct sNode*)(right_value298=_inf_value8));
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value293,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value294,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result186__;
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional339=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 703, 2875)), "05pre_op.c", 703, 2876))->p, "05pre_op.c", 703, 2877))==38&&refference_207,                                _if_conditional339) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 704, 2878)), "05pre_op.c", 704, 2879))->p++;
                                    (come_push_stackframe("05pre_op.c", 705,2880),skip_spaces_and_lf(info),come_pop_stackframe());
                                    value_224=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 707, 2881),__exception_result_var_b288=((struct sNode*)(right_value299=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b288));
                                    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 709, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count((come_push_stackframe("05pre_op.c", 709, 2883),__exception_result_var_b289=((struct sRefferenceNode*)(right_value301=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)(right_value300=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 709, "sRefferenceNode"))), "05pre_op.c", 709, 2882))),(struct sNode*)come_increment_ref_count(value_224),info))), come_pop_stackframe(), __exception_result_var_b289));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sRefferenceNode_finalize;
                                    _inf_value9->clone=(void*)sRefferenceNode_clone;
                                    _inf_value9->compile=(void*)sRefferenceNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                                    _inf_value9->kind=(void*)sRefferenceNode_kind;
                                    __result189__ = __result_obj__ = ((struct sNode*)(right_value305=_inf_value9));
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value300,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value301,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result189__;
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional346=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 711, 2910)), "05pre_op.c", 711, 2911))->p, "05pre_op.c", 711, 2912))==33,                                    _if_conditional346) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 712, 2913)), "05pre_op.c", 712, 2914))->p++;
                                        (come_push_stackframe("05pre_op.c", 713,2915),skip_spaces_and_lf(info),come_pop_stackframe());
                                        value_226=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 715, 2916),__exception_result_var_b292=((struct sNode*)(right_value306=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b292));
                                        if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 717, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count((come_push_stackframe("05pre_op.c", 717, 2918),__exception_result_var_b293=((struct sReverseNode*)(right_value308=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)come_null_check(((struct sReverseNode*)(right_value307=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 717, "sReverseNode"))), "05pre_op.c", 717, 2917))),(struct sNode*)come_increment_ref_count(value_226),info))), come_pop_stackframe(), __exception_result_var_b293));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sReverseNode_finalize;
                                        _inf_value10->clone=(void*)sReverseNode_clone;
                                        _inf_value10->compile=(void*)sReverseNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sReverseNode_kind;
                                        __result192__ = __result_obj__ = ((struct sNode*)(right_value312=_inf_value10));
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value307,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value308,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result192__;
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional353=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 719, 2945)), "05pre_op.c", 719, 2946))->p, "05pre_op.c", 719, 2947))==40,                                        _if_conditional353) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 720, 2948)), "05pre_op.c", 720, 2949))->p++;
                                            (come_push_stackframe("05pre_op.c", 721,2950),skip_spaces_and_lf(info),come_pop_stackframe());
                                            cast_expression_flag_228=(_Bool)0;
                                            {
                                                p_229=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 726, 2951)), "05pre_op.c", 726, 2952))->p;
                                                sline_230=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 727, 2953)), "05pre_op.c", 727, 2954))->sline;
                                                (come_push_stackframe("05pre_op.c", 729,2955),parse_sharp_v5(info),come_pop_stackframe());
                                                word_231=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 731, 2956),__exception_result_var_b296=((char*)(right_value313=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b296));
                                                right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional354=(come_push_stackframe("05pre_op.c", 732, 2960),__exception_result_var_b297=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 732, 2957)), "05pre_op.c", 732, 2958))->p, "05pre_op.c", 732, 2959))), come_pop_stackframe(), __exception_result_var_b297)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 732, 2961)), "05pre_op.c", 732, 2962))->p, "05pre_op.c", 732, 2963))==95,                                                _if_conditional354) {
                                                    __dec_obj107=word_231;
                                                    word_231=(char*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 733, 2964),__exception_result_var_b298=((char*)(right_value314=parse_word(info))), come_pop_stackframe(), __exception_result_var_b298));
                                                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                (come_push_stackframe("05pre_op.c", 736,2965),parse_sharp_v5(info),come_pop_stackframe());
                                                if(_if_conditional355=(come_push_stackframe("05pre_op.c", 738, 2966),__exception_result_var_b299=is_type_name(word_231,info), come_pop_stackframe(), __exception_result_var_b299),                                                _if_conditional355) {
                                                    cast_expression_flag_228=(_Bool)1;
                                                }
                                                (come_push_stackframe("05pre_op.c", 742,2967),parse_sharp_v5(info),come_pop_stackframe());
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 744, 2968)), "05pre_op.c", 744, 2969))->p=p_229;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 745, 2970)), "05pre_op.c", 745, 2971))->sline=sline_230;
                                                word_231 = come_decrement_ref_count2(word_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            tuple_expression_flag_232=(_Bool)0;
                                            if(_if_conditional356=!gComeC,                                            _if_conditional356) {
                                                p_233=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 752, 2972)), "05pre_op.c", 752, 2973))->p;
                                                sline_234=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 753, 2974)), "05pre_op.c", 753, 2975))->sline;
                                                (come_push_stackframe("05pre_op.c", 755,2976),parse_sharp_v5(info),come_pop_stackframe());
                                                no_comma_235=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 757, 2977)), "05pre_op.c", 757, 2978))->no_comma;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 758, 2979)), "05pre_op.c", 758, 2980))->no_comma=(_Bool)1;
                                                no_output_err_236=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 759, 2981)), "05pre_op.c", 759, 2982))->no_output_err;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 760, 2983)), "05pre_op.c", 760, 2984))->no_output_err=(_Bool)1;
                                                no_output_come_code_237=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 761, 2985)), "05pre_op.c", 761, 2986))->no_output_come_code;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 762, 2987)), "05pre_op.c", 762, 2988))->no_output_come_code=(_Bool)1;
                                                node_238=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 764, 2989),__exception_result_var_b300=((struct sNode*)(right_value315=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b300));
                                                if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                node2_239=(struct sNode*)come_increment_ref_count(node_238);
                                                (come_push_stackframe("05pre_op.c", 767,2990),parse_sharp_v5(info),come_pop_stackframe());
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 769, 2991)), "05pre_op.c", 769, 2992))->no_comma=no_comma_235;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 770, 2993)), "05pre_op.c", 770, 2994))->no_output_err=no_output_err_236;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 771, 2995)), "05pre_op.c", 771, 2996))->no_output_come_code=no_output_come_code_237;
                                                if(_if_conditional357=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 773, 2997)), "05pre_op.c", 773, 2998))->p, "05pre_op.c", 773, 2999))==44,                                                _if_conditional357) {
                                                    tuple_expression_flag_232=(_Bool)1;
                                                }
                                                (come_push_stackframe("05pre_op.c", 777,3000),parse_sharp_v5(info),come_pop_stackframe());
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 779, 3001)), "05pre_op.c", 779, 3002))->p=p_233;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 780, 3003)), "05pre_op.c", 780, 3004))->sline=sline_234;
                                                if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node2_239) { node2_239 = come_decrement_ref_count2(node2_239, ((struct sNode*)node2_239)->finalize, ((struct sNode*)node2_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional358=!gComeC&&tuple_expression_flag_232,                                            _if_conditional358) {
                                                (come_push_stackframe("05pre_op.c", 784,3005),parse_sharp_v5(info),come_pop_stackframe());
                                                node_240=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 786, 3006),__exception_result_var_b301=((struct sNode*)(right_value316=parse_tuple(info))), come_pop_stackframe(), __exception_result_var_b301));
                                                if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                (come_push_stackframe("05pre_op.c", 788,3007),parse_sharp_v5(info),come_pop_stackframe());
                                                __result193__ = __result_obj__ = node_240;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result193__;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(cast_expression_flag_228) {
                                                    (come_push_stackframe("05pre_op.c", 793,3008),parse_sharp_v5(info),come_pop_stackframe());
                                                    multiple_assign_var5=(come_push_stackframe("05pre_op.c", 794, 3009),__exception_result_var_b302=((struct tuple3$3sTypephcharphbool*)(right_value317=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b302);
                                                    type_241=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                    name_242=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                    err_243=multiple_assign_var5->v3;
                                                    come_call_finalizer3(right_value317,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional362=!err_243,                                                    _if_conditional362) {
                                                        (come_push_stackframe("05pre_op.c", 797, 3022),__exception_result_var_b303=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 797, 3018)), "05pre_op.c", 797, 3019))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05pre_op.c", 797, 3020)), "05pre_op.c", 797, 3021))->sline), come_pop_stackframe(), __exception_result_var_b303);
                                                        (come_push_stackframe("05pre_op.c", 798,3023),exit(2),come_pop_stackframe());
                                                    }
                                                    (come_push_stackframe("05pre_op.c", 801,3024),parse_sharp_v5(info),come_pop_stackframe());
                                                    (come_push_stackframe("05pre_op.c", 802, 3025),__exception_result_var_b304=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b304);
                                                    (come_push_stackframe("05pre_op.c", 803,3026),parse_sharp_v5(info),come_pop_stackframe());
                                                    node_244=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 805, 3027),__exception_result_var_b305=((struct sNode*)(right_value318=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b305));
                                                    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 807, "struct sNode");
                                                    _inf_obj_value11=come_increment_ref_count((come_push_stackframe("05pre_op.c", 807, 3029),__exception_result_var_b306=((struct sCastNode*)(right_value320=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)come_null_check(((struct sCastNode*)(right_value319=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 807, "sCastNode"))), "05pre_op.c", 807, 3028))),type_241,node_244,info))), come_pop_stackframe(), __exception_result_var_b306));
                                                    _inf_value11->_protocol_obj=_inf_obj_value11;
                                                    _inf_value11->finalize=(void*)sCastNode_finalize;
                                                    _inf_value11->clone=(void*)sCastNode_clone;
                                                    _inf_value11->compile=(void*)sCastNode_compile;
                                                    _inf_value11->sline=(void*)sNodeBase_sline;
                                                    _inf_value11->sname=(void*)sNodeBase_sname;
                                                    _inf_value11->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value11->kind=(void*)sCastNode_kind;
                                                    __result196__ = __result_obj__ = ((struct sNode*)(right_value325=_inf_value11));
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value319,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value320,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result196__;
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    (come_push_stackframe("05pre_op.c", 810,3067),parse_sharp_v5(info),come_pop_stackframe());
                                                    node_246=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 811, 3068),__exception_result_var_b310=((struct sNode*)(right_value326=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b310));
                                                    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    (come_push_stackframe("05pre_op.c", 812,3069),parse_sharp_v5(info),come_pop_stackframe());
                                                    (come_push_stackframe("05pre_op.c", 814, 3070),__exception_result_var_b311=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b311);
                                                    (come_push_stackframe("05pre_op.c", 815,3071),parse_sharp_v5(info),come_pop_stackframe());
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 817, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count((come_push_stackframe("05pre_op.c", 817, 3073),__exception_result_var_b312=((struct sParenNode*)(right_value328=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)come_null_check(((struct sParenNode*)(right_value327=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 817, "sParenNode"))), "05pre_op.c", 817, 3072))),node_246,info))), come_pop_stackframe(), __exception_result_var_b312));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sParenNode_finalize;
                                                    _inf_value12->clone=(void*)sParenNode_clone;
                                                    _inf_value12->compile=(void*)sParenNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value12->kind=(void*)sParenNode_kind;
                                                    __dec_obj113=node_246;
                                                    node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=_inf_value12)));
                                                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                                    come_call_finalizer3(right_value327,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value328,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __result199__ = __result_obj__ = node_246;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result199__;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                        }
                                        else {
                                            __result200__ = __result_obj__ = (struct sNode*)((void*)0);
                                            return __result200__;
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

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional296;
_Bool _if_conditional297;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional296=self!=((void*)0)&&((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 0, 2642)), "sLogicalDenial_finalize", 0, 2643))->sname!=((void*)0),                _if_conditional296) {
                    ((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 0, 2644)), "sLogicalDenial_finalize", 0, 2645))->sname = come_decrement_ref_count2(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 0, 2644)), "sLogicalDenial_finalize", 0, 2645))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional297=self!=((void*)0)&&((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2646)), "sLogicalDenial_finalize", 1, 2647))->value!=((void*)0),                _if_conditional297) {
                    if(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2648)), "sLogicalDenial_finalize", 1, 2649))->value) { ((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2648)), "sLogicalDenial_finalize", 1, 2649))->value = come_decrement_ref_count2(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2648)), "sLogicalDenial_finalize", 1, 2649))->value, ((struct sNode*)((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2648)), "sLogicalDenial_finalize", 1, 2649))->value)->finalize, ((struct sNode*)((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_finalize", 1, 2648)), "sLogicalDenial_finalize", 1, 2649))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional298;
struct sLogicalDenial* __result169__;
void* right_value260;
struct sLogicalDenial* result_211;
_Bool _if_conditional299;
_Bool _if_conditional300;
char* __exception_result_var_b265;
void* right_value261;
char* __dec_obj91;
_Bool _if_conditional301;
struct sNode* __exception_result_var_b266;
void* right_value262;
struct sNode* __dec_obj92;
struct sLogicalDenial* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
memset(&result_211, 0, sizeof(struct sLogicalDenial*));
right_value261 = (void*)0;
right_value262 = (void*)0;
                if(_if_conditional298=self==(void*)0,                _if_conditional298) {
                    __result169__ = __result_obj__ = (void*)0;
                    return __result169__;
                }
                result_211=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value260=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer3(right_value260,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional299=self!=((void*)0),                _if_conditional299) {
                    ((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(result_211, "sLogicalDenial_clone", 4, 2650)), "sLogicalDenial_clone", 4, 2651))->sline=((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_clone", 4, 2652)), "sLogicalDenial_clone", 4, 2653))->sline;
                }
                if(_if_conditional300=self!=((void*)0)&&((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_clone", 5, 2654)), "sLogicalDenial_clone", 5, 2655))->sname!=((void*)0),                _if_conditional300) {
                    __dec_obj91=((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(result_211, "sLogicalDenial_clone", 5, 2656)), "sLogicalDenial_clone", 5, 2657))->sname;
                    ((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(result_211, "sLogicalDenial_clone", 5, 2656)), "sLogicalDenial_clone", 5, 2657))->sname=(char*)come_increment_ref_count(((char*)(right_value261=(come_push_stackframe("sLogicalDenial_clone", 5, 2660),__exception_result_var_b265=string_clone(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_clone", 5, 2658)), "sLogicalDenial_clone", 5, 2659))->sname), come_pop_stackframe(), __exception_result_var_b265))));
                    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional301=self!=((void*)0)&&((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_clone", 6, 2661)), "sLogicalDenial_clone", 6, 2662))->value!=((void*)0),                _if_conditional301) {
                    __dec_obj92=((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(result_211, "sLogicalDenial_clone", 6, 2663)), "sLogicalDenial_clone", 6, 2664))->value;
                    ((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(result_211, "sLogicalDenial_clone", 6, 2663)), "sLogicalDenial_clone", 6, 2664))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=(come_push_stackframe("sLogicalDenial_clone", 6, 2667),__exception_result_var_b266=sNode_clone(((struct sLogicalDenial*)come_null_check(((struct sLogicalDenial*)come_null_check(self, "sLogicalDenial_clone", 6, 2665)), "sLogicalDenial_clone", 6, 2666))->value), come_pop_stackframe(), __exception_result_var_b266))));
                    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result170__ = __result_obj__ = result_211;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
                return __result170__;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional303=self!=((void*)0)&&((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 0, 2680)), "sMinusMinusNode2_finalize", 0, 2681))->sname!=((void*)0),                    _if_conditional303) {
                        ((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 0, 2682)), "sMinusMinusNode2_finalize", 0, 2683))->sname = come_decrement_ref_count2(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 0, 2682)), "sMinusMinusNode2_finalize", 0, 2683))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional304=self!=((void*)0)&&((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2684)), "sMinusMinusNode2_finalize", 1, 2685))->value!=((void*)0),                    _if_conditional304) {
                        if(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2686)), "sMinusMinusNode2_finalize", 1, 2687))->value) { ((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2686)), "sMinusMinusNode2_finalize", 1, 2687))->value = come_decrement_ref_count2(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2686)), "sMinusMinusNode2_finalize", 1, 2687))->value, ((struct sNode*)((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2686)), "sMinusMinusNode2_finalize", 1, 2687))->value)->finalize, ((struct sNode*)((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_finalize", 1, 2686)), "sMinusMinusNode2_finalize", 1, 2687))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional305;
struct sMinusMinusNode2* __result172__;
void* right_value267;
struct sMinusMinusNode2* result_213;
_Bool _if_conditional306;
_Bool _if_conditional307;
char* __exception_result_var_b269;
void* right_value268;
char* __dec_obj93;
_Bool _if_conditional308;
struct sNode* __exception_result_var_b270;
void* right_value269;
struct sNode* __dec_obj94;
struct sMinusMinusNode2* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
memset(&result_213, 0, sizeof(struct sMinusMinusNode2*));
right_value268 = (void*)0;
right_value269 = (void*)0;
                    if(_if_conditional305=self==(void*)0,                    _if_conditional305) {
                        __result172__ = __result_obj__ = (void*)0;
                        return __result172__;
                    }
                    result_213=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value267=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer3(right_value267,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional306=self!=((void*)0),                    _if_conditional306) {
                        ((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(result_213, "sMinusMinusNode2_clone", 4, 2688)), "sMinusMinusNode2_clone", 4, 2689))->sline=((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_clone", 4, 2690)), "sMinusMinusNode2_clone", 4, 2691))->sline;
                    }
                    if(_if_conditional307=self!=((void*)0)&&((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_clone", 5, 2692)), "sMinusMinusNode2_clone", 5, 2693))->sname!=((void*)0),                    _if_conditional307) {
                        __dec_obj93=((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(result_213, "sMinusMinusNode2_clone", 5, 2694)), "sMinusMinusNode2_clone", 5, 2695))->sname;
                        ((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(result_213, "sMinusMinusNode2_clone", 5, 2694)), "sMinusMinusNode2_clone", 5, 2695))->sname=(char*)come_increment_ref_count(((char*)(right_value268=(come_push_stackframe("sMinusMinusNode2_clone", 5, 2698),__exception_result_var_b269=string_clone(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_clone", 5, 2696)), "sMinusMinusNode2_clone", 5, 2697))->sname), come_pop_stackframe(), __exception_result_var_b269))));
                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional308=self!=((void*)0)&&((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_clone", 6, 2699)), "sMinusMinusNode2_clone", 6, 2700))->value!=((void*)0),                    _if_conditional308) {
                        __dec_obj94=((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(result_213, "sMinusMinusNode2_clone", 6, 2701)), "sMinusMinusNode2_clone", 6, 2702))->value;
                        ((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(result_213, "sMinusMinusNode2_clone", 6, 2701)), "sMinusMinusNode2_clone", 6, 2702))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=(come_push_stackframe("sMinusMinusNode2_clone", 6, 2705),__exception_result_var_b270=sNode_clone(((struct sMinusMinusNode2*)come_null_check(((struct sMinusMinusNode2*)come_null_check(self, "sMinusMinusNode2_clone", 6, 2703)), "sMinusMinusNode2_clone", 6, 2704))->value), come_pop_stackframe(), __exception_result_var_b270))));
                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result173__ = __result_obj__ = result_213;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                    return __result173__;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional310=self!=((void*)0)&&((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 0, 2719)), "sMinusNode2_finalize", 0, 2720))->sname!=((void*)0),                        _if_conditional310) {
                            ((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 0, 2721)), "sMinusNode2_finalize", 0, 2722))->sname = come_decrement_ref_count2(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 0, 2721)), "sMinusNode2_finalize", 0, 2722))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional311=self!=((void*)0)&&((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2723)), "sMinusNode2_finalize", 1, 2724))->value!=((void*)0),                        _if_conditional311) {
                            if(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2725)), "sMinusNode2_finalize", 1, 2726))->value) { ((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2725)), "sMinusNode2_finalize", 1, 2726))->value = come_decrement_ref_count2(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2725)), "sMinusNode2_finalize", 1, 2726))->value, ((struct sNode*)((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2725)), "sMinusNode2_finalize", 1, 2726))->value)->finalize, ((struct sNode*)((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_finalize", 1, 2725)), "sMinusNode2_finalize", 1, 2726))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional312;
struct sMinusNode2* __result175__;
void* right_value274;
struct sMinusNode2* result_215;
_Bool _if_conditional313;
_Bool _if_conditional314;
char* __exception_result_var_b274;
void* right_value275;
char* __dec_obj95;
_Bool _if_conditional315;
struct sNode* __exception_result_var_b275;
void* right_value276;
struct sNode* __dec_obj96;
struct sMinusNode2* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
memset(&result_215, 0, sizeof(struct sMinusNode2*));
right_value275 = (void*)0;
right_value276 = (void*)0;
                        if(_if_conditional312=self==(void*)0,                        _if_conditional312) {
                            __result175__ = __result_obj__ = (void*)0;
                            return __result175__;
                        }
                        result_215=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value274=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer3(right_value274,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional313=self!=((void*)0),                        _if_conditional313) {
                            ((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(result_215, "sMinusNode2_clone", 4, 2727)), "sMinusNode2_clone", 4, 2728))->sline=((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_clone", 4, 2729)), "sMinusNode2_clone", 4, 2730))->sline;
                        }
                        if(_if_conditional314=self!=((void*)0)&&((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_clone", 5, 2731)), "sMinusNode2_clone", 5, 2732))->sname!=((void*)0),                        _if_conditional314) {
                            __dec_obj95=((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(result_215, "sMinusNode2_clone", 5, 2733)), "sMinusNode2_clone", 5, 2734))->sname;
                            ((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(result_215, "sMinusNode2_clone", 5, 2733)), "sMinusNode2_clone", 5, 2734))->sname=(char*)come_increment_ref_count(((char*)(right_value275=(come_push_stackframe("sMinusNode2_clone", 5, 2737),__exception_result_var_b274=string_clone(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_clone", 5, 2735)), "sMinusNode2_clone", 5, 2736))->sname), come_pop_stackframe(), __exception_result_var_b274))));
                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional315=self!=((void*)0)&&((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_clone", 6, 2738)), "sMinusNode2_clone", 6, 2739))->value!=((void*)0),                        _if_conditional315) {
                            __dec_obj96=((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(result_215, "sMinusNode2_clone", 6, 2740)), "sMinusNode2_clone", 6, 2741))->value;
                            ((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(result_215, "sMinusNode2_clone", 6, 2740)), "sMinusNode2_clone", 6, 2741))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=(come_push_stackframe("sMinusNode2_clone", 6, 2744),__exception_result_var_b275=sNode_clone(((struct sMinusNode2*)come_null_check(((struct sMinusNode2*)come_null_check(self, "sMinusNode2_clone", 6, 2742)), "sMinusNode2_clone", 6, 2743))->value), come_pop_stackframe(), __exception_result_var_b275))));
                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result176__ = __result_obj__ = result_215;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                        return __result176__;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional317=self!=((void*)0)&&((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 0, 2757)), "sPlusPlusNode2_finalize", 0, 2758))->sname!=((void*)0),                            _if_conditional317) {
                                ((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 0, 2759)), "sPlusPlusNode2_finalize", 0, 2760))->sname = come_decrement_ref_count2(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 0, 2759)), "sPlusPlusNode2_finalize", 0, 2760))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional318=self!=((void*)0)&&((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2761)), "sPlusPlusNode2_finalize", 1, 2762))->value!=((void*)0),                            _if_conditional318) {
                                if(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2763)), "sPlusPlusNode2_finalize", 1, 2764))->value) { ((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2763)), "sPlusPlusNode2_finalize", 1, 2764))->value = come_decrement_ref_count2(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2763)), "sPlusPlusNode2_finalize", 1, 2764))->value, ((struct sNode*)((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2763)), "sPlusPlusNode2_finalize", 1, 2764))->value)->finalize, ((struct sNode*)((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_finalize", 1, 2763)), "sPlusPlusNode2_finalize", 1, 2764))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sPlusPlusNode2* __result178__;
void* right_value281;
struct sPlusPlusNode2* result_217;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* __exception_result_var_b278;
void* right_value282;
char* __dec_obj97;
_Bool _if_conditional322;
struct sNode* __exception_result_var_b279;
void* right_value283;
struct sNode* __dec_obj98;
struct sPlusPlusNode2* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
memset(&result_217, 0, sizeof(struct sPlusPlusNode2*));
right_value282 = (void*)0;
right_value283 = (void*)0;
                            if(_if_conditional319=self==(void*)0,                            _if_conditional319) {
                                __result178__ = __result_obj__ = (void*)0;
                                return __result178__;
                            }
                            result_217=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value281=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer3(right_value281,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional320=self!=((void*)0),                            _if_conditional320) {
                                ((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(result_217, "sPlusPlusNode2_clone", 4, 2765)), "sPlusPlusNode2_clone", 4, 2766))->sline=((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_clone", 4, 2767)), "sPlusPlusNode2_clone", 4, 2768))->sline;
                            }
                            if(_if_conditional321=self!=((void*)0)&&((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_clone", 5, 2769)), "sPlusPlusNode2_clone", 5, 2770))->sname!=((void*)0),                            _if_conditional321) {
                                __dec_obj97=((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(result_217, "sPlusPlusNode2_clone", 5, 2771)), "sPlusPlusNode2_clone", 5, 2772))->sname;
                                ((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(result_217, "sPlusPlusNode2_clone", 5, 2771)), "sPlusPlusNode2_clone", 5, 2772))->sname=(char*)come_increment_ref_count(((char*)(right_value282=(come_push_stackframe("sPlusPlusNode2_clone", 5, 2775),__exception_result_var_b278=string_clone(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_clone", 5, 2773)), "sPlusPlusNode2_clone", 5, 2774))->sname), come_pop_stackframe(), __exception_result_var_b278))));
                                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional322=self!=((void*)0)&&((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_clone", 6, 2776)), "sPlusPlusNode2_clone", 6, 2777))->value!=((void*)0),                            _if_conditional322) {
                                __dec_obj98=((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(result_217, "sPlusPlusNode2_clone", 6, 2778)), "sPlusPlusNode2_clone", 6, 2779))->value;
                                ((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(result_217, "sPlusPlusNode2_clone", 6, 2778)), "sPlusPlusNode2_clone", 6, 2779))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=(come_push_stackframe("sPlusPlusNode2_clone", 6, 2782),__exception_result_var_b279=sNode_clone(((struct sPlusPlusNode2*)come_null_check(((struct sPlusPlusNode2*)come_null_check(self, "sPlusPlusNode2_clone", 6, 2780)), "sPlusPlusNode2_clone", 6, 2781))->value), come_pop_stackframe(), __exception_result_var_b279))));
                                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result179__ = __result_obj__ = result_217;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
                            return __result179__;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional324=self!=((void*)0)&&((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 0, 2792)), "sComplement_finalize", 0, 2793))->sname!=((void*)0),                                _if_conditional324) {
                                    ((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 0, 2794)), "sComplement_finalize", 0, 2795))->sname = come_decrement_ref_count2(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 0, 2794)), "sComplement_finalize", 0, 2795))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional325=self!=((void*)0)&&((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2796)), "sComplement_finalize", 1, 2797))->value!=((void*)0),                                _if_conditional325) {
                                    if(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2798)), "sComplement_finalize", 1, 2799))->value) { ((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2798)), "sComplement_finalize", 1, 2799))->value = come_decrement_ref_count2(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2798)), "sComplement_finalize", 1, 2799))->value, ((struct sNode*)((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2798)), "sComplement_finalize", 1, 2799))->value)->finalize, ((struct sNode*)((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_finalize", 1, 2798)), "sComplement_finalize", 1, 2799))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional326;
struct sComplement* __result181__;
void* right_value288;
struct sComplement* result_219;
_Bool _if_conditional327;
_Bool _if_conditional328;
char* __exception_result_var_b282;
void* right_value289;
char* __dec_obj99;
_Bool _if_conditional329;
struct sNode* __exception_result_var_b283;
void* right_value290;
struct sNode* __dec_obj100;
struct sComplement* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&result_219, 0, sizeof(struct sComplement*));
right_value289 = (void*)0;
right_value290 = (void*)0;
                                if(_if_conditional326=self==(void*)0,                                _if_conditional326) {
                                    __result181__ = __result_obj__ = (void*)0;
                                    return __result181__;
                                }
                                result_219=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value288=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer3(right_value288,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional327=self!=((void*)0),                                _if_conditional327) {
                                    ((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(result_219, "sComplement_clone", 4, 2800)), "sComplement_clone", 4, 2801))->sline=((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_clone", 4, 2802)), "sComplement_clone", 4, 2803))->sline;
                                }
                                if(_if_conditional328=self!=((void*)0)&&((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_clone", 5, 2804)), "sComplement_clone", 5, 2805))->sname!=((void*)0),                                _if_conditional328) {
                                    __dec_obj99=((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(result_219, "sComplement_clone", 5, 2806)), "sComplement_clone", 5, 2807))->sname;
                                    ((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(result_219, "sComplement_clone", 5, 2806)), "sComplement_clone", 5, 2807))->sname=(char*)come_increment_ref_count(((char*)(right_value289=(come_push_stackframe("sComplement_clone", 5, 2810),__exception_result_var_b282=string_clone(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_clone", 5, 2808)), "sComplement_clone", 5, 2809))->sname), come_pop_stackframe(), __exception_result_var_b282))));
                                    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional329=self!=((void*)0)&&((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_clone", 6, 2811)), "sComplement_clone", 6, 2812))->value!=((void*)0),                                _if_conditional329) {
                                    __dec_obj100=((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(result_219, "sComplement_clone", 6, 2813)), "sComplement_clone", 6, 2814))->value;
                                    ((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(result_219, "sComplement_clone", 6, 2813)), "sComplement_clone", 6, 2814))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=(come_push_stackframe("sComplement_clone", 6, 2817),__exception_result_var_b283=sNode_clone(((struct sComplement*)come_null_check(((struct sComplement*)come_null_check(self, "sComplement_clone", 6, 2815)), "sComplement_clone", 6, 2816))->value), come_pop_stackframe(), __exception_result_var_b283))));
                                    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result182__ = __result_obj__ = result_219;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 1, 0, (void*)0);
                                return __result182__;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional332;
_Bool _if_conditional333;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional332=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0, 2845)), "sDerefferenceNode_finalize", 0, 2846))->sname!=((void*)0),                                    _if_conditional332) {
                                        ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0, 2847)), "sDerefferenceNode_finalize", 0, 2848))->sname = come_decrement_ref_count2(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 0, 2847)), "sDerefferenceNode_finalize", 0, 2848))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional333=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2849)), "sDerefferenceNode_finalize", 1, 2850))->value!=((void*)0),                                    _if_conditional333) {
                                        if(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2851)), "sDerefferenceNode_finalize", 1, 2852))->value) { ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2851)), "sDerefferenceNode_finalize", 1, 2852))->value = come_decrement_ref_count2(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2851)), "sDerefferenceNode_finalize", 1, 2852))->value, ((struct sNode*)((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2851)), "sDerefferenceNode_finalize", 1, 2852))->value)->finalize, ((struct sNode*)((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_finalize", 1, 2851)), "sDerefferenceNode_finalize", 1, 2852))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional334;
struct sDerefferenceNode* __result184__;
void* right_value295;
struct sDerefferenceNode* result_223;
_Bool _if_conditional335;
_Bool _if_conditional336;
char* __exception_result_var_b286;
void* right_value296;
char* __dec_obj101;
_Bool _if_conditional337;
struct sNode* __exception_result_var_b287;
void* right_value297;
struct sNode* __dec_obj102;
_Bool _if_conditional338;
struct sDerefferenceNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
memset(&result_223, 0, sizeof(struct sDerefferenceNode*));
right_value296 = (void*)0;
right_value297 = (void*)0;
                                    if(_if_conditional334=self==(void*)0,                                    _if_conditional334) {
                                        __result184__ = __result_obj__ = (void*)0;
                                        return __result184__;
                                    }
                                    result_223=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value295=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                    come_call_finalizer3(right_value295,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional335=self!=((void*)0),                                    _if_conditional335) {
                                        ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 4, 2853)), "sDerefferenceNode_clone", 4, 2854))->sline=((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 4, 2855)), "sDerefferenceNode_clone", 4, 2856))->sline;
                                    }
                                    if(_if_conditional336=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 5, 2857)), "sDerefferenceNode_clone", 5, 2858))->sname!=((void*)0),                                    _if_conditional336) {
                                        __dec_obj101=((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 5, 2859)), "sDerefferenceNode_clone", 5, 2860))->sname;
                                        ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 5, 2859)), "sDerefferenceNode_clone", 5, 2860))->sname=(char*)come_increment_ref_count(((char*)(right_value296=(come_push_stackframe("sDerefferenceNode_clone", 5, 2863),__exception_result_var_b286=string_clone(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 5, 2861)), "sDerefferenceNode_clone", 5, 2862))->sname), come_pop_stackframe(), __exception_result_var_b286))));
                                        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional337=self!=((void*)0)&&((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 6, 2864)), "sDerefferenceNode_clone", 6, 2865))->value!=((void*)0),                                    _if_conditional337) {
                                        __dec_obj102=((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 6, 2866)), "sDerefferenceNode_clone", 6, 2867))->value;
                                        ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 6, 2866)), "sDerefferenceNode_clone", 6, 2867))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=(come_push_stackframe("sDerefferenceNode_clone", 6, 2870),__exception_result_var_b287=sNode_clone(((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 6, 2868)), "sDerefferenceNode_clone", 6, 2869))->value), come_pop_stackframe(), __exception_result_var_b287))));
                                        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional338=self!=((void*)0),                                    _if_conditional338) {
                                        ((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(result_223, "sDerefferenceNode_clone", 7, 2871)), "sDerefferenceNode_clone", 7, 2872))->mQuote=((struct sDerefferenceNode*)come_null_check(((struct sDerefferenceNode*)come_null_check(self, "sDerefferenceNode_clone", 7, 2873)), "sDerefferenceNode_clone", 7, 2874))->mQuote;
                                    }
                                    __result185__ = __result_obj__ = result_223;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result185__;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional340=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0, 2884)), "sRefferenceNode_finalize", 0, 2885))->sname!=((void*)0),                                        _if_conditional340) {
                                            ((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0, 2886)), "sRefferenceNode_finalize", 0, 2887))->sname = come_decrement_ref_count2(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 0, 2886)), "sRefferenceNode_finalize", 0, 2887))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional341=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2888)), "sRefferenceNode_finalize", 1, 2889))->value!=((void*)0),                                        _if_conditional341) {
                                            if(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2890)), "sRefferenceNode_finalize", 1, 2891))->value) { ((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2890)), "sRefferenceNode_finalize", 1, 2891))->value = come_decrement_ref_count2(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2890)), "sRefferenceNode_finalize", 1, 2891))->value, ((struct sNode*)((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2890)), "sRefferenceNode_finalize", 1, 2891))->value)->finalize, ((struct sNode*)((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_finalize", 1, 2890)), "sRefferenceNode_finalize", 1, 2891))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional342;
struct sRefferenceNode* __result187__;
void* right_value302;
struct sRefferenceNode* result_225;
_Bool _if_conditional343;
_Bool _if_conditional344;
char* __exception_result_var_b290;
void* right_value303;
char* __dec_obj103;
_Bool _if_conditional345;
struct sNode* __exception_result_var_b291;
void* right_value304;
struct sNode* __dec_obj104;
struct sRefferenceNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
memset(&result_225, 0, sizeof(struct sRefferenceNode*));
right_value303 = (void*)0;
right_value304 = (void*)0;
                                        if(_if_conditional342=self==(void*)0,                                        _if_conditional342) {
                                            __result187__ = __result_obj__ = (void*)0;
                                            return __result187__;
                                        }
                                        result_225=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value302=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                        come_call_finalizer3(right_value302,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional343=self!=((void*)0),                                        _if_conditional343) {
                                            ((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(result_225, "sRefferenceNode_clone", 4, 2892)), "sRefferenceNode_clone", 4, 2893))->sline=((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_clone", 4, 2894)), "sRefferenceNode_clone", 4, 2895))->sline;
                                        }
                                        if(_if_conditional344=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_clone", 5, 2896)), "sRefferenceNode_clone", 5, 2897))->sname!=((void*)0),                                        _if_conditional344) {
                                            __dec_obj103=((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(result_225, "sRefferenceNode_clone", 5, 2898)), "sRefferenceNode_clone", 5, 2899))->sname;
                                            ((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(result_225, "sRefferenceNode_clone", 5, 2898)), "sRefferenceNode_clone", 5, 2899))->sname=(char*)come_increment_ref_count(((char*)(right_value303=(come_push_stackframe("sRefferenceNode_clone", 5, 2902),__exception_result_var_b290=string_clone(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_clone", 5, 2900)), "sRefferenceNode_clone", 5, 2901))->sname), come_pop_stackframe(), __exception_result_var_b290))));
                                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional345=self!=((void*)0)&&((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_clone", 6, 2903)), "sRefferenceNode_clone", 6, 2904))->value!=((void*)0),                                        _if_conditional345) {
                                            __dec_obj104=((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(result_225, "sRefferenceNode_clone", 6, 2905)), "sRefferenceNode_clone", 6, 2906))->value;
                                            ((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(result_225, "sRefferenceNode_clone", 6, 2905)), "sRefferenceNode_clone", 6, 2906))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=(come_push_stackframe("sRefferenceNode_clone", 6, 2909),__exception_result_var_b291=sNode_clone(((struct sRefferenceNode*)come_null_check(((struct sRefferenceNode*)come_null_check(self, "sRefferenceNode_clone", 6, 2907)), "sRefferenceNode_clone", 6, 2908))->value), come_pop_stackframe(), __exception_result_var_b291))));
                                            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result188__ = __result_obj__ = result_225;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result188__;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional347=self!=((void*)0)&&((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0, 2919)), "sReverseNode_finalize", 0, 2920))->sname!=((void*)0),                                            _if_conditional347) {
                                                ((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0, 2921)), "sReverseNode_finalize", 0, 2922))->sname = come_decrement_ref_count2(((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 0, 2921)), "sReverseNode_finalize", 0, 2922))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional348=self!=((void*)0)&&((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2923)), "sReverseNode_finalize", 1, 2924))->value!=((void*)0),                                            _if_conditional348) {
                                                if(((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2925)), "sReverseNode_finalize", 1, 2926))->value) { ((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2925)), "sReverseNode_finalize", 1, 2926))->value = come_decrement_ref_count2(((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2925)), "sReverseNode_finalize", 1, 2926))->value, ((struct sNode*)((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2925)), "sReverseNode_finalize", 1, 2926))->value)->finalize, ((struct sNode*)((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_finalize", 1, 2925)), "sReverseNode_finalize", 1, 2926))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional349;
struct sReverseNode* __result190__;
void* right_value309;
struct sReverseNode* result_227;
_Bool _if_conditional350;
_Bool _if_conditional351;
char* __exception_result_var_b294;
void* right_value310;
char* __dec_obj105;
_Bool _if_conditional352;
struct sNode* __exception_result_var_b295;
void* right_value311;
struct sNode* __dec_obj106;
struct sReverseNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
memset(&result_227, 0, sizeof(struct sReverseNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
                                            if(_if_conditional349=self==(void*)0,                                            _if_conditional349) {
                                                __result190__ = __result_obj__ = (void*)0;
                                                return __result190__;
                                            }
                                            result_227=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value309=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                            come_call_finalizer3(right_value309,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional350=self!=((void*)0),                                            _if_conditional350) {
                                                ((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(result_227, "sReverseNode_clone", 4, 2927)), "sReverseNode_clone", 4, 2928))->sline=((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_clone", 4, 2929)), "sReverseNode_clone", 4, 2930))->sline;
                                            }
                                            if(_if_conditional351=self!=((void*)0)&&((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_clone", 5, 2931)), "sReverseNode_clone", 5, 2932))->sname!=((void*)0),                                            _if_conditional351) {
                                                __dec_obj105=((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(result_227, "sReverseNode_clone", 5, 2933)), "sReverseNode_clone", 5, 2934))->sname;
                                                ((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(result_227, "sReverseNode_clone", 5, 2933)), "sReverseNode_clone", 5, 2934))->sname=(char*)come_increment_ref_count(((char*)(right_value310=(come_push_stackframe("sReverseNode_clone", 5, 2937),__exception_result_var_b294=string_clone(((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_clone", 5, 2935)), "sReverseNode_clone", 5, 2936))->sname), come_pop_stackframe(), __exception_result_var_b294))));
                                                __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional352=self!=((void*)0)&&((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_clone", 6, 2938)), "sReverseNode_clone", 6, 2939))->value!=((void*)0),                                            _if_conditional352) {
                                                __dec_obj106=((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(result_227, "sReverseNode_clone", 6, 2940)), "sReverseNode_clone", 6, 2941))->value;
                                                ((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(result_227, "sReverseNode_clone", 6, 2940)), "sReverseNode_clone", 6, 2941))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=(come_push_stackframe("sReverseNode_clone", 6, 2944),__exception_result_var_b295=sNode_clone(((struct sReverseNode*)come_null_check(((struct sReverseNode*)come_null_check(self, "sReverseNode_clone", 6, 2942)), "sReverseNode_clone", 6, 2943))->value), come_pop_stackframe(), __exception_result_var_b295))));
                                                if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result191__ = __result_obj__ = result_227;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result191__;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional360;
_Bool _if_conditional361;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional360=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3010)), "tuple3$3sTypephcharphboolp_finalize", 0, 3011))->v1!=((void*)0),                                                        _if_conditional360) {
                                                            come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3012)), "tuple3$3sTypephcharphboolp_finalize", 0, 3013))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional361=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3014)), "tuple3$3sTypephcharphboolp_finalize", 1, 3015))->v2!=((void*)0),                                                        _if_conditional361) {
                                                            ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3016)), "tuple3$3sTypephcharphboolp_finalize", 1, 3017))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3016)), "tuple3$3sTypephcharphboolp_finalize", 1, 3017))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional363=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 0, 3030)), "sCastNode_finalize", 0, 3031))->sname!=((void*)0),                                                        _if_conditional363) {
                                                            ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 0, 3032)), "sCastNode_finalize", 0, 3033))->sname = come_decrement_ref_count2(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 0, 3032)), "sCastNode_finalize", 0, 3033))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional364=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 1, 3034)), "sCastNode_finalize", 1, 3035))->mType!=((void*)0),                                                        _if_conditional364) {
                                                            come_call_finalizer3(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 1, 3036)), "sCastNode_finalize", 1, 3037))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional365=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3038)), "sCastNode_finalize", 2, 3039))->mLeft!=((void*)0),                                                        _if_conditional365) {
                                                            if(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3040)), "sCastNode_finalize", 2, 3041))->mLeft) { ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3040)), "sCastNode_finalize", 2, 3041))->mLeft = come_decrement_ref_count2(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3040)), "sCastNode_finalize", 2, 3041))->mLeft, ((struct sNode*)((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3040)), "sCastNode_finalize", 2, 3041))->mLeft)->finalize, ((struct sNode*)((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_finalize", 2, 3040)), "sCastNode_finalize", 2, 3041))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional366;
struct sCastNode* __result194__;
void* right_value321;
struct sCastNode* result_245;
_Bool _if_conditional367;
_Bool _if_conditional368;
char* __exception_result_var_b307;
void* right_value322;
char* __dec_obj108;
_Bool _if_conditional369;
struct sType* __exception_result_var_b308;
void* right_value323;
struct sType* __dec_obj109;
_Bool _if_conditional370;
struct sNode* __exception_result_var_b309;
void* right_value324;
struct sNode* __dec_obj110;
struct sCastNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
memset(&result_245, 0, sizeof(struct sCastNode*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
                                                        if(_if_conditional366=self==(void*)0,                                                        _if_conditional366) {
                                                            __result194__ = __result_obj__ = (void*)0;
                                                            return __result194__;
                                                        }
                                                        result_245=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value321=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                        come_call_finalizer3(right_value321,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional367=self!=((void*)0),                                                        _if_conditional367) {
                                                            ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 4, 3042)), "sCastNode_clone", 4, 3043))->sline=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 4, 3044)), "sCastNode_clone", 4, 3045))->sline;
                                                        }
                                                        if(_if_conditional368=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 5, 3046)), "sCastNode_clone", 5, 3047))->sname!=((void*)0),                                                        _if_conditional368) {
                                                            __dec_obj108=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 5, 3048)), "sCastNode_clone", 5, 3049))->sname;
                                                            ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 5, 3048)), "sCastNode_clone", 5, 3049))->sname=(char*)come_increment_ref_count(((char*)(right_value322=(come_push_stackframe("sCastNode_clone", 5, 3052),__exception_result_var_b307=string_clone(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 5, 3050)), "sCastNode_clone", 5, 3051))->sname), come_pop_stackframe(), __exception_result_var_b307))));
                                                            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional369=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 6, 3053)), "sCastNode_clone", 6, 3054))->mType!=((void*)0),                                                        _if_conditional369) {
                                                            __dec_obj109=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 6, 3055)), "sCastNode_clone", 6, 3056))->mType;
                                                            ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 6, 3055)), "sCastNode_clone", 6, 3056))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=(come_push_stackframe("sCastNode_clone", 6, 3059),__exception_result_var_b308=sType_clone(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 6, 3057)), "sCastNode_clone", 6, 3058))->mType), come_pop_stackframe(), __exception_result_var_b308))));
                                                            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional370=self!=((void*)0)&&((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 7, 3060)), "sCastNode_clone", 7, 3061))->mLeft!=((void*)0),                                                        _if_conditional370) {
                                                            __dec_obj110=((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 7, 3062)), "sCastNode_clone", 7, 3063))->mLeft;
                                                            ((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(result_245, "sCastNode_clone", 7, 3062)), "sCastNode_clone", 7, 3063))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=(come_push_stackframe("sCastNode_clone", 7, 3066),__exception_result_var_b309=sNode_clone(((struct sCastNode*)come_null_check(((struct sCastNode*)come_null_check(self, "sCastNode_clone", 7, 3064)), "sCastNode_clone", 7, 3065))->mLeft), come_pop_stackframe(), __exception_result_var_b309))));
                                                            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        __result195__ = __result_obj__ = result_245;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result195__;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional371=self!=((void*)0)&&((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 0, 3074)), "sParenNode_finalize", 0, 3075))->sname!=((void*)0),                                                        _if_conditional371) {
                                                            ((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 0, 3076)), "sParenNode_finalize", 0, 3077))->sname = come_decrement_ref_count2(((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 0, 3076)), "sParenNode_finalize", 0, 3077))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional372=self!=((void*)0)&&((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3078)), "sParenNode_finalize", 1, 3079))->mLeft!=((void*)0),                                                        _if_conditional372) {
                                                            if(((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3080)), "sParenNode_finalize", 1, 3081))->mLeft) { ((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3080)), "sParenNode_finalize", 1, 3081))->mLeft = come_decrement_ref_count2(((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3080)), "sParenNode_finalize", 1, 3081))->mLeft, ((struct sNode*)((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3080)), "sParenNode_finalize", 1, 3081))->mLeft)->finalize, ((struct sNode*)((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_finalize", 1, 3080)), "sParenNode_finalize", 1, 3081))->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional373;
struct sParenNode* __result197__;
void* right_value329;
struct sParenNode* result_247;
_Bool _if_conditional374;
_Bool _if_conditional375;
char* __exception_result_var_b313;
void* right_value330;
char* __dec_obj111;
_Bool _if_conditional376;
struct sNode* __exception_result_var_b314;
void* right_value331;
struct sNode* __dec_obj112;
struct sParenNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
memset(&result_247, 0, sizeof(struct sParenNode*));
right_value330 = (void*)0;
right_value331 = (void*)0;
                                                        if(_if_conditional373=self==(void*)0,                                                        _if_conditional373) {
                                                            __result197__ = __result_obj__ = (void*)0;
                                                            return __result197__;
                                                        }
                                                        result_247=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value329=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                        come_call_finalizer3(right_value329,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional374=self!=((void*)0),                                                        _if_conditional374) {
                                                            ((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(result_247, "sParenNode_clone", 4, 3082)), "sParenNode_clone", 4, 3083))->sline=((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_clone", 4, 3084)), "sParenNode_clone", 4, 3085))->sline;
                                                        }
                                                        if(_if_conditional375=self!=((void*)0)&&((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_clone", 5, 3086)), "sParenNode_clone", 5, 3087))->sname!=((void*)0),                                                        _if_conditional375) {
                                                            __dec_obj111=((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(result_247, "sParenNode_clone", 5, 3088)), "sParenNode_clone", 5, 3089))->sname;
                                                            ((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(result_247, "sParenNode_clone", 5, 3088)), "sParenNode_clone", 5, 3089))->sname=(char*)come_increment_ref_count(((char*)(right_value330=(come_push_stackframe("sParenNode_clone", 5, 3092),__exception_result_var_b313=string_clone(((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_clone", 5, 3090)), "sParenNode_clone", 5, 3091))->sname), come_pop_stackframe(), __exception_result_var_b313))));
                                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        if(_if_conditional376=self!=((void*)0)&&((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_clone", 6, 3093)), "sParenNode_clone", 6, 3094))->mLeft!=((void*)0),                                                        _if_conditional376) {
                                                            __dec_obj112=((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(result_247, "sParenNode_clone", 6, 3095)), "sParenNode_clone", 6, 3096))->mLeft;
                                                            ((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(result_247, "sParenNode_clone", 6, 3095)), "sParenNode_clone", 6, 3096))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=(come_push_stackframe("sParenNode_clone", 6, 3099),__exception_result_var_b314=sNode_clone(((struct sParenNode*)come_null_check(((struct sParenNode*)come_null_check(self, "sParenNode_clone", 6, 3097)), "sParenNode_clone", 6, 3098))->mLeft), come_pop_stackframe(), __exception_result_var_b314))));
                                                            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        __result198__ = __result_obj__ = result_247;
                                                        come_call_finalizer3(result_247,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result198__;
                                                        come_call_finalizer3(result_247,sParenNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
void* right_value333;
struct sNode* __exception_result_var_b315;
struct sNode* node_248;
_Bool _if_conditional377;
void* right_value334;
struct sNode* __exception_result_var_b316;
struct sNode* __result201__;
struct sNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value334 = (void*)0;
    node_248=(struct sNode*)come_increment_ref_count((come_push_stackframe("05pre_op.c", 829, 3100),__exception_result_var_b315=((struct sNode*)(right_value333=pre_position_operator(info))), come_pop_stackframe(), __exception_result_var_b315));
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    if(_if_conditional377=node_248==((void*)0),    _if_conditional377) {
        __result201__ = __result_obj__ = (come_push_stackframe("05pre_op.c", 832, 3101),__exception_result_var_b316=((struct sNode*)(right_value334=expression_node_v97(info))), come_pop_stackframe(), __exception_result_var_b316);
        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result201__;
    }
    else {
        __result202__ = __result_obj__ = node_248;
        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result202__;
    }
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

