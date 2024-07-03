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

_Bool sRefferenceNode_terminated(struct sRefferenceNode* self);

char* sRefferenceNode_kind(struct sRefferenceNode* self);

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

_Bool sDerefferenceNode_terminated(struct sDerefferenceNode* self);

char* sDerefferenceNode_kind(struct sDerefferenceNode* self);

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

_Bool sLogicalDenial_terminated(struct sLogicalDenial* self);

char* sLogicalDenial_kind(struct sLogicalDenial* self);

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

_Bool sReverseNode_terminated(struct sReverseNode* self);

char* sReverseNode_kind(struct sReverseNode* self);

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusNode2_terminated(struct sMinusNode2* self);

char* sMinusNode2_kind(struct sMinusNode2* self);

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sPlusPlusNode2_terminated(struct sPlusPlusNode2* self);

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

_Bool sMinusMinusNode2_terminated(struct sMinusMinusNode2* self);

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

_Bool sComplement_terminated(struct sComplement* self);

char* sComplement_kind(struct sComplement* self);

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

_Bool sParenNode_terminated(struct sParenNode* self);

char* sParenNode_kind(struct sParenNode* self);

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

_Bool sCastNode_terminated(struct sCastNode* self);

char* sCastNode_kind(struct sCastNode* self);

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* pre_postion_operator(struct sInfo* info);

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










_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional110;
struct sType* __dec_obj35;
_Bool _if_conditional111;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
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
_Bool _if_conditional149;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
_Bool _if_conditional151;
void* right_value122;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_95;
char* fun_name_96;
void* right_value123;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_97;
char* fun_name2_98;
void* right_value124;
char* __dec_obj37;
int i_99;
void* right_value125;
char* new_fun_name_100;
_Bool _if_conditional152;
void* right_value126;
char* __dec_obj38;
_Bool _if_conditional153;
_Bool result_101;
_Bool _if_conditional154;
void* right_value127;
struct CVALUE* come_value_102;
char* left_value2_103;
void* right_value128;
void* right_value129;
_Bool _if_conditional159;
void* right_value130;
char* __dec_obj39;
void* right_value131;
char* __dec_obj40;
void* right_value132;
char* __dec_obj41;
void* right_value133;
struct sType* type2_107;
void* right_value134;
struct sType* type3_108;
void* right_value135;
struct sType* __dec_obj42;
_Bool _if_conditional160;
void* right_value136;
char* __dec_obj43;
void* right_value137;
char* __dec_obj44;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&generics_type_77, 0, sizeof(struct sType*));
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
memset(&generics_fun_87, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&fun_91, 0, sizeof(struct sFun*));
memset(&fun_name_92, 0, sizeof(char*));
memset(&fun_91, 0, sizeof(struct sFun*));
memset(&fun_name_92, 0, sizeof(char*));
right_value121 = (void*)0;
memset(&fun2_93, 0, sizeof(struct sFun*));
memset(&fun_name2_94, 0, sizeof(char*));
memset(&fun2_93, 0, sizeof(struct sFun*));
memset(&fun_name2_94, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&fun_95, 0, sizeof(struct sFun*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&fun_95, 0, sizeof(struct sFun*));
memset(&fun_name_96, 0, sizeof(char*));
right_value123 = (void*)0;
memset(&fun2_97, 0, sizeof(struct sFun*));
memset(&fun_name2_98, 0, sizeof(char*));
memset(&fun2_97, 0, sizeof(struct sFun*));
memset(&fun_name2_98, 0, sizeof(char*));
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
    # 5 "05pre_op.c"
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 10 "05pre_op.c"
    # 6 "05pre_op.c"
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        # 7 "05pre_op.c"
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 13 "05pre_op.c"
    # 10 "05pre_op.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 11 "05pre_op.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 13 "05pre_op.c"
    klass_78=type->mClass;
    # 14 "05pre_op.c"
    class_name_79=klass_78->mName;
    # 16 "05pre_op.c"
    operator_fun_80=((void*)0);
    # 18 "05pre_op.c"
    # 74 "05pre_op.c"
    # 19 "05pre_op.c"
    if(_if_conditional113=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional113) {
        # 20 "05pre_op.c"
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 22 "05pre_op.c"
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 24 "05pre_op.c"
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 25 "05pre_op.c"
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "05pre_op.c"
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        # 54 "05pre_op.c"
        # 30 "05pre_op.c"
        if(generics_fun_87) {
            # 35 "05pre_op.c"
            # 31 "05pre_op.c"
            if(_if_conditional129=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional129) {
                # 32 "05pre_op.c"
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            # 35 "05pre_op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
        else {
            # 53 "05pre_op.c"
            # 38 "05pre_op.c"
            if(_if_conditional149=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional149) {
                # 39 "05pre_op.c"
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 40 "05pre_op.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 42 "05pre_op.c"
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 53 "05pre_op.c"
                # 44 "05pre_op.c"
                if(_if_conditional151=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional151) {
                    # 45 "05pre_op.c"
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 46 "05pre_op.c"
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 48 "05pre_op.c"
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 51 "05pre_op.c"
                    operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 56 "05pre_op.c"
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 58 "05pre_op.c"
        # 69 "05pre_op.c"
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            # 60 "05pre_op.c"
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 61 "05pre_op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            # 67 "05pre_op.c"
            # 63 "05pre_op.c"
            if(operator_fun_80) {
                # 64 "05pre_op.c"
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 65 "05pre_op.c"
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 72 "05pre_op.c"
        # 69 "05pre_op.c"
        if(_if_conditional153=operator_fun_80==((void*)0),        _if_conditional153) {
            # 70 "05pre_op.c"
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    # 74 "05pre_op.c"
    result_101=(_Bool)0;
    # 110 "05pre_op.c"
    # 76 "05pre_op.c"
    if(operator_fun_80) {
        # 77 "05pre_op.c"
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 77, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 78 "05pre_op.c"
        # 79 "05pre_op.c"
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 88 "05pre_op.c"
        # 80 "05pre_op.c"
        if(_if_conditional159=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 80, 1))->mHeap&&left_value->type->mHeap,        _if_conditional159) {
            # 81 "05pre_op.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 81, 2)),left_value->type,left_value,info);
            # 82 "05pre_op.c"
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 85 "05pre_op.c"
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 88 "05pre_op.c"
        __dec_obj41=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s(%s)",fun_name2_81,left_value2_103))));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 90 "05pre_op.c"
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(operator_fun_80->mResultType))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 92 "05pre_op.c"
        type3_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=solve_generics(type2_107,generics_type_77,info))));
        come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 94 "05pre_op.c"
        __dec_obj42=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(type3_108))));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value135,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 95 "05pre_op.c"
        come_value_102->var=((void*)0);
        # 101 "05pre_op.c"
        # 97 "05pre_op.c"
        if(type3_108->mHeap) {
            # 98 "05pre_op.c"
            __dec_obj43=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value136=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(type3_108),info))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 101 "05pre_op.c"
        __dec_obj44=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value137=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 103 "05pre_op.c"
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        # 105 "05pre_op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        # 107 "05pre_op.c"
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 110 "05pre_op.c"
    __result84__ = result_101;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    # 1545 "./neo-c.h"
                    # 1526 "./neo-c.h"
                    if(_if_conditional130=self->item_existance[it_90],                    _if_conditional130) {
                        # 1533 "./neo-c.h"
                        # 1528 "./neo-c.h"
                        if(_if_conditional131=string_equals(self->keys[it_90],key),                        _if_conditional131) {
                            # 1530 "./neo-c.h"
                            __result77__ = __result_obj__ = self->items[it_90];
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        # 1533 "./neo-c.h"
                        it_90++;
                        # 1541 "./neo-c.h"
                        # 1535 "./neo-c.h"
                        if(_if_conditional147=it_90>=self->size,                        _if_conditional147) {
                            # 1536 "./neo-c.h"
                            it_90=0;
                        }
                        else {
                            # 1541 "./neo-c.h"
                            # 1538 "./neo-c.h"
                            if(_if_conditional148=it_90==hash_89,                            _if_conditional148) {
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
                                if(_if_conditional132=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional132) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional133=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional133) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional134=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional134) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional135=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional135) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional136=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional136) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional137=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional137) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional138=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional138) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional141=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional141) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional142=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional142) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional143=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional143) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional144=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional144) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional145=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional145) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional146=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional146) {
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
                                        if(_if_conditional139=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional139) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional140=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional140) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sFunpcharphp_finalize"
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    if(_if_conditional150=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional150) {
                        # 0 "tuple2$2sFunpcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional155=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional155) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional156=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional156) {
                # 1 "CVALUE_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional157;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional18;
_Bool _if_conditional158;
struct sType* __result81__;
struct sType* default_value_106;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional157=position<0,            _if_conditional157) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_104=self->head;
            # 674 "./neo-c.h"
            i_105=0;
            # 681 "./neo-c.h"
            while(_while_condtional18=it_104!=((void*)0),            _while_condtional18) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional158=position==i_105,                _if_conditional158) {
                    # 677 "./neo-c.h"
                    __result81__ = __result_obj__ = it_104->item;
                    return __result81__;
                }
                # 679 "./neo-c.h"
                it_104=it_104->next;
                # 680 "./neo-c.h"
                i_105++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_106,0,sizeof(struct sType*));
            # 685 "./neo-c.h"
            __result82__ = __result_obj__ = default_value_106;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional161;
void* right_value138;
struct list_item$1CVALUEph* litem_109;
struct CVALUE* __dec_obj45;
_Bool _if_conditional163;
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
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional161=self->len==0,            _if_conditional161) {
                # 217 "./neo-c.h"
                litem_109=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value138=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value138,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_109->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_109->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj45=litem_109->item;
                litem_109->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_109;
                # 224 "./neo-c.h"
                self->head=litem_109;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional163=self->len==1,                _if_conditional163) {
                    # 227 "./neo-c.h"
                    litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value139=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value139,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_110->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_110->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj46=litem_110->item;
                    litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_110;
                    # 234 "./neo-c.h"
                    self->head->next=litem_110;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value140=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value140,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_111->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_111->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj47=litem_111->item;
                    litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_111;
                    # 244 "./neo-c.h"
                    self->tail=litem_111;
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

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj48;
void* right_value141;
char* __dec_obj49;
struct sRefferenceNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    # 119 "05pre_op.c"
    __dec_obj48=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    # 120 "05pre_op.c"
    self->sline=info->sline;
    # 121 "05pre_op.c"
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 124 "05pre_op.c"
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRefferenceNode_terminated(struct sRefferenceNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    # 126 "05pre_op.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __result_obj__;
void* right_value142;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    # 131 "05pre_op.c"
    __result87__ = __result_obj__ = ((char*)(right_value142=__builtin_string("sRefferenceNode")));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_112;
_Bool _if_conditional166;
_Bool __result88__;
void* right_value143;
struct CVALUE* left_value_113;
void* right_value144;
struct CVALUE* come_value_114;
void* right_value145;
char* __dec_obj50;
void* right_value146;
struct sType* __dec_obj51;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_112, 0, sizeof(struct sNode*));
right_value143 = (void*)0;
memset(&left_value_113, 0, sizeof(struct CVALUE*));
right_value144 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
    # 136 "05pre_op.c"
    value_112=self->value;
    # 142 "05pre_op.c"
    # 138 "05pre_op.c"
    if(_if_conditional166=!node_compile(value_112,info),    _if_conditional166) {
        # 139 "05pre_op.c"
        __result88__ = (_Bool)0;
        return __result88__;
    }
    # 142 "05pre_op.c"
    left_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value143,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 143 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 145 "05pre_op.c"
    come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 145, "CVALUE"))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 147 "05pre_op.c"
    __dec_obj50=come_value_114->c_value;
    come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("&%s",left_value_113->c_value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 148 "05pre_op.c"
    __dec_obj51=come_value_114->type;
    come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(left_value_113->type))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 149 "05pre_op.c"
    come_value_114->type->mPointerNum++;
    # 150 "05pre_op.c"
    come_value_114->var=((void*)0);
    # 152 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_114->c_value);
    # 154 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
    # 156 "05pre_op.c"
    __result89__ = (_Bool)1;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj52;
void* right_value147;
char* __dec_obj53;
struct sDerefferenceNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    # 167 "05pre_op.c"
    __dec_obj52=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    # 168 "05pre_op.c"
    self->sline=info->sline;
    # 169 "05pre_op.c"
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 170 "05pre_op.c"
    self->mQuote=quote;
    # 173 "05pre_op.c"
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result90__;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDerefferenceNode_terminated(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    # 175 "05pre_op.c"
    __result91__ = (_Bool)0;
    return __result91__;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __result_obj__;
void* right_value148;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    # 180 "05pre_op.c"
    __result92__ = __result_obj__ = ((char*)(right_value148=__builtin_string("sDerefferenceNode")));
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_115;
_Bool _if_conditional169;
_Bool __result93__;
void* right_value149;
struct CVALUE* left_value_116;
_Bool _if_conditional170;
void* right_value150;
_Bool _if_conditional171;
void* right_value151;
void* right_value152;
char* __dec_obj54;
char* p_117;
char* p2_118;
_Bool _while_condtional19;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value153;
void* right_value154;
struct buffer* buf_119;
void* right_value155;
void* right_value156;
struct buffer* buf2_120;
void* right_value157;
void* right_value158;
void* right_value159;
void* right_value160;
char* __dec_obj55;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value161;
struct CVALUE* come_value_124;
void* right_value162;
char* __dec_obj56;
void* right_value163;
struct sType* __dec_obj57;
_Bool __result94__;
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
    # 185 "05pre_op.c"
    value_115=self->value;
    # 191 "05pre_op.c"
    # 187 "05pre_op.c"
    if(_if_conditional169=!node_compile(value_115,info),    _if_conditional169) {
        # 188 "05pre_op.c"
        __result93__ = (_Bool)0;
        return __result93__;
    }
    # 191 "05pre_op.c"
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value149,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 192 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 228 "05pre_op.c"
    # 194 "05pre_op.c"
    if(gComeDebug) {
        # 226 "05pre_op.c"
        # 195 "05pre_op.c"
        if(_if_conditional171=string_operator_not_equals(((char*)(right_value150=value_115->kind(value_115->_protocol_obj))),"sExpEqualNode"),        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional171) {
            # 196 "05pre_op.c"
            __dec_obj54=left_value_116->c_value;
            left_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value151=make_type_name_string(left_value_116->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_116->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 199 "05pre_op.c"
            p_117=left_value_116->c_value;
            # 200 "05pre_op.c"
            p2_118=((void*)0);
            # 211 "05pre_op.c"
            while(_while_condtional19=*p_117,            _while_condtional19) {
                # 209 "05pre_op.c"
                # 202 "05pre_op.c"
                if(_if_conditional172=*p_117==61,                _if_conditional172) {
                    # 203 "05pre_op.c"
                    p2_118=p_117;
                    # 204 "05pre_op.c"
                    break;
                }
                else {
                    # 207 "05pre_op.c"
                    p_117++;
                }
            }
            # 216 "05pre_op.c"
            # 211 "05pre_op.c"
            if(_if_conditional173=p2_118==((void*)0),            _if_conditional173) {
                # 212 "05pre_op.c"
                err_msg(info,"unexpected error in debugging to dereffrence and to assign");
                # 213 "05pre_op.c"
                exit(2);
            }
            # 216 "05pre_op.c"
            p_117=left_value_116->c_value;
            # 218 "05pre_op.c"
            buf_119=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value154=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value153=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 218, "buffer"))))))));
            come_call_finalizer3(right_value153,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value154,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "05pre_op.c"
            buffer_append(buf_119,p_117,p2_118-p_117);
            # 221 "05pre_op.c"
            buf2_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value156=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value155=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 221, "buffer"))))))));
            come_call_finalizer3(right_value155,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value156,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 222 "05pre_op.c"
            buffer_append(buf2_120,p2_118,p_117+strlen(p_117)-p2_118);
            # 224 "05pre_op.c"
            __dec_obj55=left_value_116->c_value;
            left_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)(right_value157=make_type_name_string(left_value_116->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),((char*)(right_value158=buffer_to_string(buf_119))),info->sname,info->sline,gComeDebugStackFrameID++,((char*)(right_value159=buffer_to_string(buf2_120)))))));
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    # 228 "05pre_op.c"
    type_121=(struct sType*)come_increment_ref_count(left_value_116->type);
    # 230 "05pre_op.c"
    fun_name_122="operator_derefference";
    # 232 "05pre_op.c"
    # 240 "05pre_op.c"
    # 233 "05pre_op.c"
    if(self->mQuote) {
        # 234 "05pre_op.c"
        calling_fun_123=(_Bool)0;
    }
    else {
        # 237 "05pre_op.c"
        calling_fun_123=operator_overload_fun_self(type_121,fun_name_122,left_value_116,info);
    }
    # 253 "05pre_op.c"
    # 240 "05pre_op.c"
    if(_if_conditional175=!calling_fun_123,    _if_conditional175) {
        # 241 "05pre_op.c"
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 241, "CVALUE"))));
        come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 243 "05pre_op.c"
        __dec_obj56=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("*%s",left_value_116->c_value))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 244 "05pre_op.c"
        __dec_obj57=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(left_value_116->type))));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 245 "05pre_op.c"
        come_value_124->type->mPointerNum--;
        # 246 "05pre_op.c"
        come_value_124->var=((void*)0);
        # 248 "05pre_op.c"
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        # 250 "05pre_op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 253 "05pre_op.c"
    __result94__ = (_Bool)1;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj58;
void* right_value164;
char* __dec_obj59;
struct sLogicalDenial* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    # 263 "05pre_op.c"
    __dec_obj58=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    # 265 "05pre_op.c"
    self->sline=info->sline;
    # 266 "05pre_op.c"
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 269 "05pre_op.c"
    __result95__ = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result95__;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLogicalDenial_terminated(struct sLogicalDenial* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    # 271 "05pre_op.c"
    __result96__ = (_Bool)0;
    return __result96__;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __result_obj__;
void* right_value165;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    # 276 "05pre_op.c"
    __result97__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sLogicalDenial")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional178;
_Bool __result98__;
void* right_value166;
struct CVALUE* come_value_125;
void* right_value167;
struct CVALUE* come_value2_126;
void* right_value168;
char* __dec_obj60;
void* right_value169;
struct sType* __dec_obj61;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
memset(&come_value2_126, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 285 "05pre_op.c"
    # 281 "05pre_op.c"
    if(_if_conditional178=!node_compile(self->value,info),    _if_conditional178) {
        # 282 "05pre_op.c"
        __result98__ = (_Bool)0;
        return __result98__;
    }
    # 285 "05pre_op.c"
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 286 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 288 "05pre_op.c"
    come_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 288, "CVALUE"))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 290 "05pre_op.c"
    __dec_obj60=come_value2_126->c_value;
    come_value2_126->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("!%s",come_value_125->c_value))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 291 "05pre_op.c"
    __dec_obj61=come_value2_126->type;
    come_value2_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_clone(come_value_125->type))));
    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 292 "05pre_op.c"
    come_value2_126->var=((void*)0);
    # 294 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_126));
    # 296 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_126->c_value);
    # 298 "05pre_op.c"
    __result99__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result99__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj62;
void* right_value170;
char* __dec_obj63;
struct sReverseNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    # 308 "05pre_op.c"
    __dec_obj62=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    # 309 "05pre_op.c"
    self->sline=info->sline;
    # 310 "05pre_op.c"
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(info->sname))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 313 "05pre_op.c"
    __result100__ = __result_obj__ = self;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result100__;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sReverseNode_terminated(struct sReverseNode* self){
void* __result_obj__;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    # 315 "05pre_op.c"
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __result_obj__;
void* right_value171;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    # 320 "05pre_op.c"
    __result102__ = __result_obj__ = ((char*)(right_value171=__builtin_string("sReverseNode")));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value_127;
_Bool _if_conditional181;
_Bool __result103__;
void* right_value172;
struct CVALUE* left_value_128;
void* right_value173;
struct CVALUE* come_value_129;
void* right_value174;
char* __dec_obj64;
void* right_value175;
struct sType* __dec_obj65;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_127, 0, sizeof(struct sNode*));
right_value172 = (void*)0;
memset(&left_value_128, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    # 325 "05pre_op.c"
    value_127=self->value;
    # 331 "05pre_op.c"
    # 327 "05pre_op.c"
    if(_if_conditional181=!node_compile(value_127,info),    _if_conditional181) {
        # 328 "05pre_op.c"
        __result103__ = (_Bool)0;
        return __result103__;
    }
    # 331 "05pre_op.c"
    left_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 332 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 334 "05pre_op.c"
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 334, "CVALUE"))));
    come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 336 "05pre_op.c"
    __dec_obj64=come_value_129->c_value;
    come_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("!%s",left_value_128->c_value))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 337 "05pre_op.c"
    __dec_obj65=come_value_129->type;
    come_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_128->type))));
    come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 338 "05pre_op.c"
    come_value_129->type->mPointerNum--;
    # 339 "05pre_op.c"
    come_value_129->var=((void*)0);
    # 341 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_129->c_value);
    # 343 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
    # 345 "05pre_op.c"
    __result104__ = (_Bool)1;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj66;
void* right_value176;
char* __dec_obj67;
struct sMinusNode2* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    # 355 "05pre_op.c"
    __dec_obj66=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    # 357 "05pre_op.c"
    self->sline=info->sline;
    # 358 "05pre_op.c"
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 361 "05pre_op.c"
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusNode2_terminated(struct sMinusNode2* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    # 363 "05pre_op.c"
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __result_obj__;
void* right_value177;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    # 368 "05pre_op.c"
    __result107__ = __result_obj__ = ((char*)(right_value177=__builtin_string("sMinusNode2")));
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional184;
_Bool __result108__;
void* right_value178;
struct CVALUE* come_value_130;
void* right_value179;
struct CVALUE* come_value2_131;
void* right_value180;
char* __dec_obj68;
void* right_value181;
struct sType* __dec_obj69;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
memset(&come_value2_131, 0, sizeof(struct CVALUE*));
right_value180 = (void*)0;
right_value181 = (void*)0;
    # 377 "05pre_op.c"
    # 373 "05pre_op.c"
    if(_if_conditional184=!node_compile(self->value,info),    _if_conditional184) {
        # 374 "05pre_op.c"
        __result108__ = (_Bool)0;
        return __result108__;
    }
    # 377 "05pre_op.c"
    come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 378 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 380 "05pre_op.c"
    come_value2_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 380, "CVALUE"))));
    come_call_finalizer3(right_value179,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 382 "05pre_op.c"
    __dec_obj68=come_value2_131->c_value;
    come_value2_131->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("-%s",come_value_130->c_value))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 383 "05pre_op.c"
    __dec_obj69=come_value2_131->type;
    come_value2_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(come_value_130->type))));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 384 "05pre_op.c"
    come_value2_131->var=((void*)0);
    # 386 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_131));
    # 388 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_131->c_value);
    # 390 "05pre_op.c"
    __result109__ = (_Bool)1;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj70;
void* right_value182;
char* __dec_obj71;
struct sPlusPlusNode2* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    # 400 "05pre_op.c"
    __dec_obj70=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    # 402 "05pre_op.c"
    self->sline=info->sline;
    # 403 "05pre_op.c"
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(info->sname))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 406 "05pre_op.c"
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result110__;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sPlusPlusNode2_terminated(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    # 408 "05pre_op.c"
    __result111__ = (_Bool)0;
    return __result111__;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __result_obj__;
void* right_value183;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    # 413 "05pre_op.c"
    __result112__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sPlusPlusNode2")));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional187;
_Bool __result113__;
void* right_value184;
struct CVALUE* come_value_132;
void* right_value185;
struct CVALUE* come_value2_133;
void* right_value186;
char* __dec_obj72;
void* right_value187;
struct sType* __dec_obj73;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value185 = (void*)0;
memset(&come_value2_133, 0, sizeof(struct CVALUE*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    # 422 "05pre_op.c"
    # 418 "05pre_op.c"
    if(_if_conditional187=!node_compile(self->value,info),    _if_conditional187) {
        # 419 "05pre_op.c"
        __result113__ = (_Bool)0;
        return __result113__;
    }
    # 422 "05pre_op.c"
    come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value184,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 423 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 425 "05pre_op.c"
    come_value2_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 425, "CVALUE"))));
    come_call_finalizer3(right_value185,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 427 "05pre_op.c"
    __dec_obj72=come_value2_133->c_value;
    come_value2_133->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("++%s",come_value_132->c_value))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 428 "05pre_op.c"
    __dec_obj73=come_value2_133->type;
    come_value2_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(come_value_132->type))));
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 429 "05pre_op.c"
    come_value2_133->var=((void*)0);
    # 431 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_133));
    # 433 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_133->c_value);
    # 435 "05pre_op.c"
    __result114__ = (_Bool)1;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result114__;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj74;
void* right_value188;
char* __dec_obj75;
struct sMinusMinusNode2* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    # 445 "05pre_op.c"
    __dec_obj74=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    # 447 "05pre_op.c"
    self->sline=info->sline;
    # 448 "05pre_op.c"
    __dec_obj75=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(info->sname))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 451 "05pre_op.c"
    __result115__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result115__;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMinusMinusNode2_terminated(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    # 453 "05pre_op.c"
    __result116__ = (_Bool)0;
    return __result116__;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __result_obj__;
void* right_value189;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
    # 458 "05pre_op.c"
    __result117__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sMinusMinusNode2")));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional190;
_Bool __result118__;
void* right_value190;
struct CVALUE* come_value_134;
void* right_value191;
struct CVALUE* come_value2_135;
void* right_value192;
char* __dec_obj76;
void* right_value193;
struct sType* __dec_obj77;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
memset(&come_value_134, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
memset(&come_value2_135, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    # 467 "05pre_op.c"
    # 463 "05pre_op.c"
    if(_if_conditional190=!node_compile(self->value,info),    _if_conditional190) {
        # 464 "05pre_op.c"
        __result118__ = (_Bool)0;
        return __result118__;
    }
    # 467 "05pre_op.c"
    come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 468 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 470 "05pre_op.c"
    come_value2_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 470, "CVALUE"))));
    come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 472 "05pre_op.c"
    __dec_obj76=come_value2_135->c_value;
    come_value2_135->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("--%s",come_value_134->c_value))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 473 "05pre_op.c"
    __dec_obj77=come_value2_135->type;
    come_value2_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(come_value_134->type))));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 474 "05pre_op.c"
    come_value2_135->var=((void*)0);
    # 476 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_135));
    # 478 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_135->c_value);
    # 480 "05pre_op.c"
    __result119__ = (_Bool)1;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result119__;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj78;
void* right_value215;
struct sBlock* __dec_obj84;
struct sNormalBlock* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value215 = (void*)0;
    # 490 "05pre_op.c"
    self->sline=info->sline;
    # 491 "05pre_op.c"
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 493 "05pre_op.c"
    __dec_obj84=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value215=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj84,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value215,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 496 "05pre_op.c"
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
void* __result_obj__;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    # 498 "05pre_op.c"
    __result153__ = (_Bool)1;
    return __result153__;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __result_obj__;
void* right_value216;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    # 503 "05pre_op.c"
    __result154__ = __result_obj__ = ((char*)(right_value216=__builtin_string("sNormalBlock")));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
void* __result_obj__;
struct sBlock* block_193;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_193, 0, sizeof(struct sBlock*));
    # 508 "05pre_op.c"
    block_193=self->mBlock;
    # 510 "05pre_op.c"
    add_come_code(info,"{\n");
    # 512 "05pre_op.c"
    transpile_block(block_193,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    # 514 "05pre_op.c"
    add_come_code(info,"}\n");
    # 516 "05pre_op.c"
    transpiler_clear_last_code(info);
    # 518 "05pre_op.c"
    __result155__ = (_Bool)1;
    return __result155__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional191;
struct sBlock* __result120__;
void* right_value195;
struct sBlock* result_136;
_Bool _if_conditional192;
void* right_value196;
struct list$1sNodeph* __dec_obj79;
_Bool _if_conditional193;
void* right_value214;
struct sVarTable* __dec_obj83;
struct sBlock* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
memset(&result_136, 0, sizeof(struct sBlock*));
right_value196 = (void*)0;
right_value214 = (void*)0;
        # 3 "sBlock_clone"
        # 2 "sBlock_clone"
        if(_if_conditional191=self==(void*)0,        _if_conditional191) {
            # 2 "sBlock_clone"
            __result120__ = __result_obj__ = (void*)0;
            return __result120__;
        }
        # 3 "sBlock_clone"
        result_136=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value195=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        come_call_finalizer3(right_value195,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sBlock_clone"
        # 4 "sBlock_clone"
        if(_if_conditional192=self!=((void*)0)&&self->mNodes!=((void*)0),        _if_conditional192) {
            # 4 "sBlock_clone"
            __dec_obj79=result_136->mNodes;
            result_136->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value196=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value196,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        # 5 "sBlock_clone"
        if(_if_conditional193=self!=((void*)0)&&self->mVarTable!=((void*)0),        _if_conditional193) {
            # 5 "sBlock_clone"
            __dec_obj83=result_136->mVarTable;
            result_136->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value214=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj83,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value214,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 6 "sBlock_clone"
        __result151__ = __result_obj__ = result_136;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result151__;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool _if_conditional194;
struct sVarTable* __result121__;
void* right_value197;
struct sVarTable* result_137;
_Bool _if_conditional195;
void* right_value213;
struct map$2charphsVarph* __dec_obj82;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
struct sVarTable* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
memset(&result_137, 0, sizeof(struct sVarTable*));
right_value213 = (void*)0;
                # 3 "sVarTable_clone"
                # 2 "sVarTable_clone"
                if(_if_conditional194=self==(void*)0,                _if_conditional194) {
                    # 2 "sVarTable_clone"
                    __result121__ = __result_obj__ = (void*)0;
                    return __result121__;
                }
                # 3 "sVarTable_clone"
                result_137=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value197=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                come_call_finalizer3(right_value197,sVarTable_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sVarTable_clone"
                # 4 "sVarTable_clone"
                if(_if_conditional195=self!=((void*)0)&&self->mVars!=((void*)0),                _if_conditional195) {
                    # 4 "sVarTable_clone"
                    __dec_obj82=result_137->mVars;
                    result_137->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value213=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj82,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value213,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 6 "sVarTable_clone"
                # 5 "sVarTable_clone"
                if(_if_conditional256=self!=((void*)0),                _if_conditional256) {
                    # 5 "sVarTable_clone"
                    result_137->mGlobal=self->mGlobal;
                }
                # 7 "sVarTable_clone"
                # 6 "sVarTable_clone"
                if(_if_conditional257=self!=((void*)0),                _if_conditional257) {
                    # 6 "sVarTable_clone"
                    result_137->mParent=self->mParent;
                }
                # 8 "sVarTable_clone"
                # 7 "sVarTable_clone"
                if(_if_conditional258=self!=((void*)0),                _if_conditional258) {
                    # 7 "sVarTable_clone"
                    result_137->mID=self->mID;
                }
                # 8 "sVarTable_clone"
                __result150__ = __result_obj__ = result_137;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result150__;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional196;
struct map$2charphsVarph* __result122__;
void* right_value198;
void* right_value204;
struct map$2charphsVarph* result_143;
void* right_value205;
void* right_value206;
struct list$1charp* __dec_obj81;
char* it_146;
struct sVar* default_value_149;
struct sVar* it2_152;
struct map$2charphsVarph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
right_value204 = (void*)0;
memset(&result_143, 0, sizeof(struct map$2charphsVarph*));
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&it_146, 0, sizeof(char*));
memset(&default_value_149, 0, sizeof(struct sVar*));
memset(&it2_152, 0, sizeof(struct sVar*));
                        # 1156 "./neo-c.h"
                        # 1152 "./neo-c.h"
                        if(_if_conditional196=self==((void*)0),                        _if_conditional196) {
                            # 1153 "./neo-c.h"
                            __result122__ = __result_obj__ = ((void*)0);
                            return __result122__;
                        }
                        # 1156 "./neo-c.h"
                        result_143=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value204=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value198=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1156, "map$2charphsVarph"))))))));
                        come_call_finalizer3(right_value198,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value204,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1158 "./neo-c.h"
                        __dec_obj81=result_143->key_list;
                        result_143->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value206=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value205=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1158, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj81,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value205,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value206,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 1169 "./neo-c.h"
                        for(                        it_146=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_146=map$2charphsVarph_next(self)                        ){
                            # 1161 "./neo-c.h"
                            # 1162 "./neo-c.h"
                            memset(&default_value_149,0,sizeof(struct sVar*));
                            # 1164 "./neo-c.h"
                            it2_152=map$2charphsVarph_at(self,it_146,default_value_149);
                            # 1166 "./neo-c.h"
                            map$2charphsVarph_insert2(result_143,it_146,it2_152);
                        }
                        # 1169 "./neo-c.h"
                        __result149__ = __result_obj__ = result_143;
                        come_call_finalizer3(result_143,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result149__;
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
struct list$1charp* __dec_obj80;
struct map$2charphsVarph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&i_138, 0, sizeof(int));
right_value202 = (void*)0;
right_value203 = (void*)0;
                            # 1062 "./neo-c.h"
                            self->keys=(char**)come_increment_ref_count(((char**)(right_value199=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1062, "char*%"))));
                            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1063 "./neo-c.h"
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value200=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1063, "sVar*%"))));
                            come_call_finalizer3(right_value200,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1064 "./neo-c.h"
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value201=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1064, "bool"))));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1071 "./neo-c.h"
                            for(                            i_138=0;                            i_138<128;                            i_138++                            ){
                                # 1068 "./neo-c.h"
                                self->item_existance[i_138]=(_Bool)0;
                            }
                            # 1071 "./neo-c.h"
                            self->size=128;
                            # 1072 "./neo-c.h"
                            self->len=0;
                            # 1074 "./neo-c.h"
                            __dec_obj80=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value203=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value202=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1074, "list$1charp"))))))));
                            come_call_finalizer3(__dec_obj80,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value202,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value203,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1076 "./neo-c.h"
                            self->it=0;
                            # 1078 "./neo-c.h"
                            __result124__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result124__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sVar_finalize"
                                # 0 "sVar_finalize"
                                if(_if_conditional197=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional197) {
                                    # 0 "sVar_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sVar_finalize"
                                # 1 "sVar_finalize"
                                if(_if_conditional198=self!=((void*)0)&&self->mCValueName!=((void*)0),                                _if_conditional198) {
                                    # 1 "sVar_finalize"
                                    self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sVar_finalize"
                                # 2 "sVar_finalize"
                                if(_if_conditional199=self!=((void*)0)&&self->mType!=((void*)0),                                _if_conditional199) {
                                    # 2 "sVar_finalize"
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sVar_finalize"
                                # 3 "sVar_finalize"
                                if(_if_conditional200=self!=((void*)0)&&self->mFunName!=((void*)0),                                _if_conditional200) {
                                    # 3 "sVar_finalize"
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
                                # 95 "./neo-c.h"
                                self->head=((void*)0);
                                # 96 "./neo-c.h"
                                self->tail=((void*)0);
                                # 97 "./neo-c.h"
                                self->len=0;
                                # 99 "./neo-c.h"
                                __result123__ = __result_obj__ = self;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result123__;
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
                                    # 114 "./neo-c.h"
                                    it_139=self->head;
                                    # 120 "./neo-c.h"
                                    while(_while_condtional20=it_139!=((void*)0),                                    _while_condtional20) {
                                        # 116 "./neo-c.h"
                                        prev_it_140=it_139;
                                        # 117 "./neo-c.h"
                                        it_139=it_139->next;
                                        # 118 "./neo-c.h"
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
_Bool _if_conditional201;
_Bool _if_conditional202;
int i_142;
_Bool _if_conditional203;
_Bool _if_conditional204;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_141, 0, sizeof(int));
memset(&i_142, 0, sizeof(int));
                                # 1112 "./neo-c.h"
                                for(                                i_141=0;                                i_141<self->size;                                i_141++                                ){
                                    # 1111 "./neo-c.h"
                                    # 1106 "./neo-c.h"
                                    if(_if_conditional201=self->item_existance[i_141],                                    _if_conditional201) {
                                        # 1110 "./neo-c.h"
                                        # 1107 "./neo-c.h"
                                        if(_if_conditional202=1,                                        _if_conditional202) {
                                            # 1108 "./neo-c.h"
                                            come_call_finalizer3(self->items[i_141],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                # 1112 "./neo-c.h"
                                come_free((char*)self->items);
                                # 1121 "./neo-c.h"
                                for(                                i_142=0;                                i_142<self->size;                                i_142++                                ){
                                    # 1120 "./neo-c.h"
                                    # 1115 "./neo-c.h"
                                    if(_if_conditional203=self->item_existance[i_142],                                    _if_conditional203) {
                                        # 1119 "./neo-c.h"
                                        # 1116 "./neo-c.h"
                                        if(_if_conditional204=1,                                        _if_conditional204) {
                                            # 1117 "./neo-c.h"
                                            self->keys[i_142] = come_decrement_ref_count2(self->keys[i_142], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional205;
char* result_144;
char* __result125__;
_Bool _if_conditional206;
char* __result126__;
char* result_145;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(char*));
memset(&result_145, 0, sizeof(char*));
                            # 1279 "./neo-c.h"
                            # 1274 "./neo-c.h"
                            if(_if_conditional205=self==((void*)0),                            _if_conditional205) {
                                # 1275 "./neo-c.h"
                                # 1276 "./neo-c.h"
                                memset(&result_144,0,sizeof(char*));
                                # 1277 "./neo-c.h"
                                __result125__ = __result_obj__ = result_144;
                                return __result125__;
                            }
                            # 1279 "./neo-c.h"
                            self->key_list->it=self->key_list->head;
                            # 1285 "./neo-c.h"
                            # 1281 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1282 "./neo-c.h"
                                __result126__ = __result_obj__ = self->key_list->it->item;
                                return __result126__;
                            }
                            # 1285 "./neo-c.h"
                            # 1286 "./neo-c.h"
                            memset(&result_145,0,sizeof(char*));
                            # 1287 "./neo-c.h"
                            __result127__ = __result_obj__ = result_145;
                            return __result127__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1308 "./neo-c.h"
                            __result128__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                            return __result128__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional207;
char* result_147;
char* __result129__;
_Bool _if_conditional208;
char* __result130__;
char* result_148;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(char*));
memset(&result_148, 0, sizeof(char*));
                            # 1296 "./neo-c.h"
                            # 1291 "./neo-c.h"
                            if(_if_conditional207=self==((void*)0)||self->key_list->it==((void*)0),                            _if_conditional207) {
                                # 1292 "./neo-c.h"
                                # 1293 "./neo-c.h"
                                memset(&result_147,0,sizeof(char*));
                                # 1294 "./neo-c.h"
                                __result129__ = __result_obj__ = result_147;
                                return __result129__;
                            }
                            # 1296 "./neo-c.h"
                            self->key_list->it=self->key_list->it->next;
                            # 1302 "./neo-c.h"
                            # 1298 "./neo-c.h"
                            if(self->key_list->it) {
                                # 1299 "./neo-c.h"
                                __result130__ = __result_obj__ = self->key_list->it->item;
                                return __result130__;
                            }
                            # 1302 "./neo-c.h"
                            # 1303 "./neo-c.h"
                            memset(&result_148,0,sizeof(char*));
                            # 1304 "./neo-c.h"
                            __result131__ = __result_obj__ = result_148;
                            return __result131__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_150;
unsigned int it_151;
_Bool _while_condtional21;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sVar* __result132__;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sVar* __result133__;
struct sVar* __result134__;
struct sVar* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_150, 0, sizeof(unsigned int));
memset(&it_151, 0, sizeof(unsigned int));
                                # 1201 "./neo-c.h"
                                hash_150=string_get_hash_key(((char*)key))%self->size;
                                # 1202 "./neo-c.h"
                                it_151=hash_150;
                                # 1226 "./neo-c.h"
                                while(_while_condtional21=(_Bool)1,                                _while_condtional21) {
                                    # 1224 "./neo-c.h"
                                    # 1205 "./neo-c.h"
                                    if(_if_conditional209=self->item_existance[it_151],                                    _if_conditional209) {
                                        # 1212 "./neo-c.h"
                                        # 1207 "./neo-c.h"
                                        if(_if_conditional210=string_equals(self->keys[it_151],key),                                        _if_conditional210) {
                                            # 1209 "./neo-c.h"
                                            __result132__ = __result_obj__ = self->items[it_151];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result132__;
                                        }
                                        # 1212 "./neo-c.h"
                                        it_151++;
                                        # 1220 "./neo-c.h"
                                        # 1214 "./neo-c.h"
                                        if(_if_conditional211=it_151>=self->size,                                        _if_conditional211) {
                                            # 1215 "./neo-c.h"
                                            it_151=0;
                                        }
                                        else {
                                            # 1220 "./neo-c.h"
                                            # 1217 "./neo-c.h"
                                            if(_if_conditional212=it_151==hash_150,                                            _if_conditional212) {
                                                # 1218 "./neo-c.h"
                                                __result133__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result133__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1222 "./neo-c.h"
                                        __result134__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result134__;
                                    }
                                }
                                # 1226 "./neo-c.h"
                                __result135__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result135__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional213;
unsigned int hash_164;
int it_165;
_Bool _while_condtional23;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool same_key_exist_182;
char* it2_185;
_Bool _if_conditional248;
_Bool _if_conditional249;
struct map$2charphsVarph* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_164, 0, sizeof(unsigned int));
memset(&it_165, 0, sizeof(int));
memset(&same_key_exist_182, 0, sizeof(_Bool));
memset(&it2_185, 0, sizeof(char*));
                                # 1445 "./neo-c.h"
                                # 1442 "./neo-c.h"
                                if(_if_conditional213=self->len*2>=self->size,                                _if_conditional213) {
                                    # 1443 "./neo-c.h"
                                    map$2charphsVarph_rehash(self);
                                }
                                # 1445 "./neo-c.h"
                                hash_164=string_get_hash_key(key)%self->size;
                                # 1446 "./neo-c.h"
                                it_165=hash_164;
                                # 1504 "./neo-c.h"
                                while(_while_condtional23=(_Bool)1,                                _while_condtional23) {
                                    # 1502 "./neo-c.h"
                                    # 1449 "./neo-c.h"
                                    if(_if_conditional217=self->item_existance[it_165],                                    _if_conditional217) {
                                        # 1472 "./neo-c.h"
                                        # 1451 "./neo-c.h"
                                        if(_if_conditional218=string_equals(self->keys[it_165],key),                                        _if_conditional218) {
                                            # 1462 "./neo-c.h"
                                            # 1453 "./neo-c.h"
                                            if(_if_conditional219=1,                                            _if_conditional219) {
                                                # 1454 "./neo-c.h"
                                                self->keys[it_165] = come_decrement_ref_count2(self->keys[it_165], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                # 1455 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_165]);
                                                # 1456 "./neo-c.h"
                                                self->keys[it_165]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                # 1459 "./neo-c.h"
                                                list$1charp_remove(self->key_list,self->keys[it_165]);
                                                # 1460 "./neo-c.h"
                                                self->keys[it_165]=key;
                                            }
                                            # 1469 "./neo-c.h"
                                            # 1462 "./neo-c.h"
                                            if(_if_conditional239=1,                                            _if_conditional239) {
                                                # 1463 "./neo-c.h"
                                                come_call_finalizer3(self->items[it_165],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                # 1464 "./neo-c.h"
                                                self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                # 1467 "./neo-c.h"
                                                self->items[it_165]=item;
                                            }
                                            # 1469 "./neo-c.h"
                                            break;
                                        }
                                        # 1472 "./neo-c.h"
                                        it_165++;
                                        # 1482 "./neo-c.h"
                                        # 1474 "./neo-c.h"
                                        if(_if_conditional240=it_165>=self->size,                                        _if_conditional240) {
                                            # 1475 "./neo-c.h"
                                            it_165=0;
                                        }
                                        else {
                                            # 1482 "./neo-c.h"
                                            # 1477 "./neo-c.h"
                                            if(_if_conditional241=it_165==hash_164,                                            _if_conditional241) {
                                                # 1478 "./neo-c.h"
                                                printf("unexpected error in map.insert\n");
                                                # 1479 "./neo-c.h"
                                                stackframe();
                                                # 1480 "./neo-c.h"
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        # 1484 "./neo-c.h"
                                        self->item_existance[it_165]=(_Bool)1;
                                        # 1491 "./neo-c.h"
                                        # 1485 "./neo-c.h"
                                        if(_if_conditional242=1,                                        _if_conditional242) {
                                            # 1486 "./neo-c.h"
                                            self->keys[it_165]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            # 1489 "./neo-c.h"
                                            self->keys[it_165]=key;
                                        }
                                        # 1498 "./neo-c.h"
                                        # 1491 "./neo-c.h"
                                        if(_if_conditional243=1,                                        _if_conditional243) {
                                            # 1492 "./neo-c.h"
                                            self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            # 1495 "./neo-c.h"
                                            self->items[it_165]=item;
                                        }
                                        # 1498 "./neo-c.h"
                                        self->len++;
                                        # 1500 "./neo-c.h"
                                        break;
                                    }
                                }
                                # 1504 "./neo-c.h"
                                same_key_exist_182=(_Bool)0;
                                # 1512 "./neo-c.h"
                                for(                                it2_185=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_185=list$1charp_next(self->key_list)                                ){
                                    # 1510 "./neo-c.h"
                                    # 1507 "./neo-c.h"
                                    if(_if_conditional248=string_equals(it2_185,key),                                    _if_conditional248) {
                                        # 1508 "./neo-c.h"
                                        same_key_exist_182=(_Bool)1;
                                    }
                                }
                                # 1516 "./neo-c.h"
                                # 1512 "./neo-c.h"
                                if(_if_conditional249=!same_key_exist_182,                                _if_conditional249) {
                                    # 1513 "./neo-c.h"
                                    list$1charp_push_back(self->key_list,key);
                                }
                                # 1516 "./neo-c.h"
                                __result148__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result148__;
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
char* it_158;
struct sVar* default_value_159;
struct sVar* it2_160;
unsigned int hash_161;
int n_162;
_Bool _while_condtional22;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sVar* default_value_163;
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
                                        # 1312 "./neo-c.h"
                                        size_153=self->size*10;
                                        # 1313 "./neo-c.h"
                                        keys_154=(char**)come_increment_ref_count(((char**)(right_value207=(char**)come_calloc(1, sizeof(char*)*(1*(size_153)), "./neo-c.h", 1313, "char*%"))));
                                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1314 "./neo-c.h"
                                        items_155=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value208=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_153)), "./neo-c.h", 1314, "sVar*%"))));
                                        come_call_finalizer3(right_value208,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 1315 "./neo-c.h"
                                        item_existance_156=(_Bool*)come_increment_ref_count(((_Bool*)(right_value209=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_153)), "./neo-c.h", 1315, "bool"))));
                                        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        # 1317 "./neo-c.h"
                                        len_157=0;
                                        # 1352 "./neo-c.h"
                                        for(                                        it_158=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_158=map$2charphsVarph_next(self)                                        ){
                                            # 1320 "./neo-c.h"
                                            # 1321 "./neo-c.h"
                                            memset(&default_value_159,0,sizeof(struct sVar*));
                                            # 1322 "./neo-c.h"
                                            it2_160=map$2charphsVarph_at(self,it_158,default_value_159);
                                            # 1323 "./neo-c.h"
                                            hash_161=string_get_hash_key(it_158)%size_153;
                                            # 1324 "./neo-c.h"
                                            n_162=hash_161;
                                            # 1350 "./neo-c.h"
                                            while(_while_condtional22=(_Bool)1,                                            _while_condtional22) {
                                                # 1349 "./neo-c.h"
                                                # 1327 "./neo-c.h"
                                                if(_if_conditional214=item_existance_156[n_162],                                                _if_conditional214) {
                                                    # 1329 "./neo-c.h"
                                                    n_162++;
                                                    # 1339 "./neo-c.h"
                                                    # 1331 "./neo-c.h"
                                                    if(_if_conditional215=n_162>=size_153,                                                    _if_conditional215) {
                                                        # 1332 "./neo-c.h"
                                                        n_162=0;
                                                    }
                                                    else {
                                                        # 1339 "./neo-c.h"
                                                        # 1334 "./neo-c.h"
                                                        if(_if_conditional216=n_162==hash_161,                                                        _if_conditional216) {
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
                                                    item_existance_156[n_162]=(_Bool)1;
                                                    # 1342 "./neo-c.h"
                                                    keys_154[n_162]=it_158;
                                                    # 1343 "./neo-c.h"
                                                    # 1344 "./neo-c.h"
                                                    items_155[n_162]=map$2charphsVarph_at(self,it_158,default_value_163);
                                                    # 1346 "./neo-c.h"
                                                    len_157++;
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
                                        self->keys=keys_154;
                                        # 1357 "./neo-c.h"
                                        self->items=items_155;
                                        # 1358 "./neo-c.h"
                                        self->item_existance=item_existance_156;
                                        # 1360 "./neo-c.h"
                                        self->size=size_153;
                                        # 1361 "./neo-c.h"
                                        self->len=len_157;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_166;
struct list_item$1charp* it_167;
_Bool _while_condtional24;
_Bool _if_conditional220;
struct list$1charp* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_166, 0, sizeof(int));
memset(&it_167, 0, sizeof(struct list_item$1charp*));
                                                    # 435 "./neo-c.h"
                                                    it2_166=0;
                                                    # 436 "./neo-c.h"
                                                    it_167=self->head;
                                                    # 447 "./neo-c.h"
                                                    while(_while_condtional24=it_167!=((void*)0),                                                    _while_condtional24) {
                                                        # 442 "./neo-c.h"
                                                        # 438 "./neo-c.h"
                                                        if(_if_conditional220=string_equals(it_167->item,item),                                                        _if_conditional220) {
                                                            # 439 "./neo-c.h"
                                                            list$1charp_delete(self,it2_166,it2_166+1);
                                                            # 440 "./neo-c.h"
                                                            break;
                                                        }
                                                        # 442 "./neo-c.h"
                                                        it2_166++;
                                                        # 444 "./neo-c.h"
                                                        it_167=it_167->next;
                                                    }
                                                    # 447 "./neo-c.h"
                                                    __result139__ = __result_obj__ = self;
                                                    return __result139__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
int tmp_168;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1charp* __result136__;
_Bool _if_conditional227;
_Bool _if_conditional228;
struct list_item$1charp* it_171;
int i_172;
_Bool _while_condtional26;
_Bool _if_conditional229;
struct list_item$1charp* prev_it_173;
_Bool _if_conditional230;
_Bool _if_conditional231;
struct list_item$1charp* it_174;
int i_175;
_Bool _while_condtional27;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
struct list_item$1charp* head_prev_it_178;
struct list_item$1charp* tail_it_179;
int i_180;
_Bool _while_condtional28;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct list_item$1charp* prev_it_181;
_Bool _if_conditional237;
_Bool _if_conditional238;
struct list$1charp* __result138__;
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
                                                                # 454 "./neo-c.h"
                                                                # 451 "./neo-c.h"
                                                                if(_if_conditional221=head<0,                                                                _if_conditional221) {
                                                                    # 452 "./neo-c.h"
                                                                    head+=self->len;
                                                                }
                                                                # 458 "./neo-c.h"
                                                                # 454 "./neo-c.h"
                                                                if(_if_conditional222=tail<0,                                                                _if_conditional222) {
                                                                    # 455 "./neo-c.h"
                                                                    tail+=self->len+1;
                                                                }
                                                                # 464 "./neo-c.h"
                                                                # 458 "./neo-c.h"
                                                                if(_if_conditional223=head>tail,                                                                _if_conditional223) {
                                                                    # 459 "./neo-c.h"
                                                                    tmp_168=tail;
                                                                    # 460 "./neo-c.h"
                                                                    tail=head;
                                                                    # 461 "./neo-c.h"
                                                                    head=tmp_168;
                                                                }
                                                                # 468 "./neo-c.h"
                                                                # 464 "./neo-c.h"
                                                                if(_if_conditional224=head<0,                                                                _if_conditional224) {
                                                                    # 465 "./neo-c.h"
                                                                    head=0;
                                                                }
                                                                # 472 "./neo-c.h"
                                                                # 468 "./neo-c.h"
                                                                if(_if_conditional225=tail>self->len,                                                                _if_conditional225) {
                                                                    # 469 "./neo-c.h"
                                                                    tail=self->len;
                                                                }
                                                                # 476 "./neo-c.h"
                                                                # 472 "./neo-c.h"
                                                                if(_if_conditional226=head==tail,                                                                _if_conditional226) {
                                                                    # 473 "./neo-c.h"
                                                                    __result136__ = __result_obj__ = self;
                                                                    return __result136__;
                                                                }
                                                                # 571 "./neo-c.h"
                                                                # 476 "./neo-c.h"
                                                                if(_if_conditional227=head==0&&tail==self->len,                                                                _if_conditional227) {
                                                                    # 478 "./neo-c.h"
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    # 571 "./neo-c.h"
                                                                    # 480 "./neo-c.h"
                                                                    if(_if_conditional228=head==0,                                                                    _if_conditional228) {
                                                                        # 481 "./neo-c.h"
                                                                        it_171=self->head;
                                                                        # 482 "./neo-c.h"
                                                                        i_172=0;
                                                                        # 504 "./neo-c.h"
                                                                        while(_while_condtional26=it_171!=((void*)0),                                                                        _while_condtional26) {
                                                                            # 503 "./neo-c.h"
                                                                            # 484 "./neo-c.h"
                                                                            if(_if_conditional229=i_172<tail,                                                                            _if_conditional229) {
                                                                                # 485 "./neo-c.h"
                                                                                prev_it_173=it_171;
                                                                                # 487 "./neo-c.h"
                                                                                it_171=it_171->next;
                                                                                # 488 "./neo-c.h"
                                                                                i_172++;
                                                                                # 490 "./neo-c.h"
                                                                                come_call_finalizer3(prev_it_173,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                # 492 "./neo-c.h"
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                # 503 "./neo-c.h"
                                                                                # 494 "./neo-c.h"
                                                                                if(_if_conditional230=i_172==tail,                                                                                _if_conditional230) {
                                                                                    # 495 "./neo-c.h"
                                                                                    self->head=it_171;
                                                                                    # 496 "./neo-c.h"
                                                                                    self->head->prev=((void*)0);
                                                                                    # 497 "./neo-c.h"
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    # 500 "./neo-c.h"
                                                                                    it_171=it_171->next;
                                                                                    # 501 "./neo-c.h"
                                                                                    i_172++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        # 571 "./neo-c.h"
                                                                        # 505 "./neo-c.h"
                                                                        if(_if_conditional231=tail==self->len,                                                                        _if_conditional231) {
                                                                            # 506 "./neo-c.h"
                                                                            it_174=self->head;
                                                                            # 507 "./neo-c.h"
                                                                            i_175=0;
                                                                            # 529 "./neo-c.h"
                                                                            while(_while_condtional27=it_174!=((void*)0),                                                                            _while_condtional27) {
                                                                                # 514 "./neo-c.h"
                                                                                # 509 "./neo-c.h"
                                                                                if(_if_conditional232=i_175==head,                                                                                _if_conditional232) {
                                                                                    # 510 "./neo-c.h"
                                                                                    self->tail=it_174->prev;
                                                                                    # 511 "./neo-c.h"
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                # 528 "./neo-c.h"
                                                                                # 514 "./neo-c.h"
                                                                                if(_if_conditional233=i_175>=head,                                                                                _if_conditional233) {
                                                                                    # 515 "./neo-c.h"
                                                                                    prev_it_176=it_174;
                                                                                    # 517 "./neo-c.h"
                                                                                    it_174=it_174->next;
                                                                                    # 518 "./neo-c.h"
                                                                                    i_175++;
                                                                                    # 520 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_176,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 522 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 525 "./neo-c.h"
                                                                                    it_174=it_174->next;
                                                                                    # 526 "./neo-c.h"
                                                                                    i_175++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            # 531 "./neo-c.h"
                                                                            it_177=self->head;
                                                                            # 533 "./neo-c.h"
                                                                            head_prev_it_178=((void*)0);
                                                                            # 534 "./neo-c.h"
                                                                            tail_it_179=((void*)0);
                                                                            # 537 "./neo-c.h"
                                                                            i_180=0;
                                                                            # 563 "./neo-c.h"
                                                                            while(_while_condtional28=it_177!=((void*)0),                                                                            _while_condtional28) {
                                                                                # 542 "./neo-c.h"
                                                                                # 539 "./neo-c.h"
                                                                                if(_if_conditional234=i_180==head,                                                                                _if_conditional234) {
                                                                                    # 540 "./neo-c.h"
                                                                                    head_prev_it_178=it_177->prev;
                                                                                }
                                                                                # 546 "./neo-c.h"
                                                                                # 542 "./neo-c.h"
                                                                                if(_if_conditional235=i_180==tail,                                                                                _if_conditional235) {
                                                                                    # 543 "./neo-c.h"
                                                                                    tail_it_179=it_177;
                                                                                }
                                                                                # 561 "./neo-c.h"
                                                                                # 546 "./neo-c.h"
                                                                                if(_if_conditional236=i_180>=head&&i_180<tail,                                                                                _if_conditional236) {
                                                                                    # 548 "./neo-c.h"
                                                                                    prev_it_181=it_177;
                                                                                    # 550 "./neo-c.h"
                                                                                    it_177=it_177->next;
                                                                                    # 551 "./neo-c.h"
                                                                                    i_180++;
                                                                                    # 553 "./neo-c.h"
                                                                                    come_call_finalizer3(prev_it_181,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    # 555 "./neo-c.h"
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    # 558 "./neo-c.h"
                                                                                    it_177=it_177->next;
                                                                                    # 559 "./neo-c.h"
                                                                                    i_180++;
                                                                                }
                                                                            }
                                                                            # 566 "./neo-c.h"
                                                                            # 563 "./neo-c.h"
                                                                            if(_if_conditional237=head_prev_it_178!=((void*)0),                                                                            _if_conditional237) {
                                                                                # 564 "./neo-c.h"
                                                                                head_prev_it_178->next=tail_it_179;
                                                                            }
                                                                            # 569 "./neo-c.h"
                                                                            # 566 "./neo-c.h"
                                                                            if(_if_conditional238=tail_it_179!=((void*)0),                                                                            _if_conditional238) {
                                                                                # 567 "./neo-c.h"
                                                                                tail_it_179->prev=head_prev_it_178;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                # 571 "./neo-c.h"
                                                                __result138__ = __result_obj__ = self;
                                                                return __result138__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_169;
_Bool _while_condtional25;
struct list_item$1charp* prev_it_170;
struct list$1charp* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_170, 0, sizeof(struct list_item$1charp*));
                                                                        # 420 "./neo-c.h"
                                                                        it_169=self->head;
                                                                        # 427 "./neo-c.h"
                                                                        while(_while_condtional25=it_169!=((void*)0),                                                                        _while_condtional25) {
                                                                            # 422 "./neo-c.h"
                                                                            prev_it_170=it_169;
                                                                            # 423 "./neo-c.h"
                                                                            it_169=it_169->next;
                                                                            # 424 "./neo-c.h"
                                                                            come_call_finalizer3(prev_it_170,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        # 427 "./neo-c.h"
                                                                        self->head=((void*)0);
                                                                        # 428 "./neo-c.h"
                                                                        self->tail=((void*)0);
                                                                        # 430 "./neo-c.h"
                                                                        self->len=0;
                                                                        # 432 "./neo-c.h"
                                                                        __result137__ = __result_obj__ = self;
                                                                        return __result137__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional244;
char* result_183;
char* __result140__;
_Bool _if_conditional245;
char* __result141__;
char* result_184;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                                    # 281 "./neo-c.h"
                                    # 276 "./neo-c.h"
                                    if(_if_conditional244=self==((void*)0),                                    _if_conditional244) {
                                        # 277 "./neo-c.h"
                                        # 278 "./neo-c.h"
                                        memset(&result_183,0,sizeof(char*));
                                        # 279 "./neo-c.h"
                                        __result140__ = __result_obj__ = result_183;
                                        return __result140__;
                                    }
                                    # 281 "./neo-c.h"
                                    self->it=self->head;
                                    # 287 "./neo-c.h"
                                    # 283 "./neo-c.h"
                                    if(self->it) {
                                        # 284 "./neo-c.h"
                                        __result141__ = __result_obj__ = self->it->item;
                                        return __result141__;
                                    }
                                    # 287 "./neo-c.h"
                                    # 288 "./neo-c.h"
                                    memset(&result_184,0,sizeof(char*));
                                    # 289 "./neo-c.h"
                                    __result142__ = __result_obj__ = result_184;
                                    return __result142__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 311 "./neo-c.h"
                                    __result143__ = self==((void*)0)||self->it==((void*)0);
                                    return __result143__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional246;
char* result_186;
char* __result144__;
_Bool _if_conditional247;
char* __result145__;
char* result_187;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                                    # 299 "./neo-c.h"
                                    # 293 "./neo-c.h"
                                    if(_if_conditional246=self==((void*)0)||self->it==((void*)0),                                    _if_conditional246) {
                                        # 294 "./neo-c.h"
                                        # 295 "./neo-c.h"
                                        memset(&result_186,0,sizeof(char*));
                                        # 296 "./neo-c.h"
                                        __result144__ = __result_obj__ = result_186;
                                        return __result144__;
                                    }
                                    # 299 "./neo-c.h"
                                    self->it=self->it->next;
                                    # 305 "./neo-c.h"
                                    # 301 "./neo-c.h"
                                    if(self->it) {
                                        # 302 "./neo-c.h"
                                        __result145__ = __result_obj__ = self->it->item;
                                        return __result145__;
                                    }
                                    # 305 "./neo-c.h"
                                    # 306 "./neo-c.h"
                                    memset(&result_187,0,sizeof(char*));
                                    # 307 "./neo-c.h"
                                    __result146__ = __result_obj__ = result_187;
                                    return __result146__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional250;
void* right_value210;
struct list_item$1charp* litem_188;
_Bool _if_conditional251;
void* right_value211;
struct list_item$1charp* litem_189;
void* right_value212;
struct list_item$1charp* litem_190;
struct list$1charp* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
right_value211 = (void*)0;
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
right_value212 = (void*)0;
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
                                        # 247 "./neo-c.h"
                                        # 216 "./neo-c.h"
                                        if(_if_conditional250=self->len==0,                                        _if_conditional250) {
                                            # 217 "./neo-c.h"
                                            litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value210=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 217, "list_item$1charp"))));
                                            come_call_finalizer3(right_value210,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 219 "./neo-c.h"
                                            litem_188->prev=((void*)0);
                                            # 220 "./neo-c.h"
                                            litem_188->next=((void*)0);
                                            # 221 "./neo-c.h"
                                            litem_188->item=item;
                                            # 223 "./neo-c.h"
                                            self->tail=litem_188;
                                            # 224 "./neo-c.h"
                                            self->head=litem_188;
                                        }
                                        else {
                                            # 247 "./neo-c.h"
                                            # 226 "./neo-c.h"
                                            if(_if_conditional251=self->len==1,                                            _if_conditional251) {
                                                # 227 "./neo-c.h"
                                                litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value211=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 227, "list_item$1charp"))));
                                                come_call_finalizer3(right_value211,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 229 "./neo-c.h"
                                                litem_189->prev=self->head;
                                                # 230 "./neo-c.h"
                                                litem_189->next=((void*)0);
                                                # 231 "./neo-c.h"
                                                litem_189->item=item;
                                                # 233 "./neo-c.h"
                                                self->tail=litem_189;
                                                # 234 "./neo-c.h"
                                                self->head->next=litem_189;
                                            }
                                            else {
                                                # 237 "./neo-c.h"
                                                litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value212=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 237, "list_item$1charp"))));
                                                come_call_finalizer3(right_value212,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 239 "./neo-c.h"
                                                litem_190->prev=self->tail;
                                                # 240 "./neo-c.h"
                                                litem_190->next=((void*)0);
                                                # 241 "./neo-c.h"
                                                litem_190->item=item;
                                                # 243 "./neo-c.h"
                                                self->tail->next=litem_190;
                                                # 244 "./neo-c.h"
                                                self->tail=litem_190;
                                            }
                                        }
                                        # 247 "./neo-c.h"
                                        self->len++;
                                        # 249 "./neo-c.h"
                                        __result147__ = __result_obj__ = self;
                                        return __result147__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_191;
_Bool _if_conditional252;
_Bool _if_conditional253;
int i_192;
_Bool _if_conditional254;
_Bool _if_conditional255;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_191, 0, sizeof(int));
memset(&i_192, 0, sizeof(int));
                        # 1112 "./neo-c.h"
                        for(                        i_191=0;                        i_191<self->size;                        i_191++                        ){
                            # 1111 "./neo-c.h"
                            # 1106 "./neo-c.h"
                            if(_if_conditional252=self->item_existance[i_191],                            _if_conditional252) {
                                # 1110 "./neo-c.h"
                                # 1107 "./neo-c.h"
                                if(_if_conditional253=1,                                _if_conditional253) {
                                    # 1108 "./neo-c.h"
                                    come_call_finalizer3(self->items[i_191],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        # 1112 "./neo-c.h"
                        come_free((char*)self->items);
                        # 1121 "./neo-c.h"
                        for(                        i_192=0;                        i_192<self->size;                        i_192++                        ){
                            # 1120 "./neo-c.h"
                            # 1115 "./neo-c.h"
                            if(_if_conditional254=self->item_existance[i_192],                            _if_conditional254) {
                                # 1119 "./neo-c.h"
                                # 1116 "./neo-c.h"
                                if(_if_conditional255=1,                                _if_conditional255) {
                                    # 1117 "./neo-c.h"
                                    self->keys[i_192] = come_decrement_ref_count2(self->keys[i_192], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj85;
void* right_value217;
char* __dec_obj86;
struct sComplement* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    # 528 "05pre_op.c"
    __dec_obj85=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    # 530 "05pre_op.c"
    self->sline=info->sline;
    # 531 "05pre_op.c"
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(info->sname))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 534 "05pre_op.c"
    __result156__ = __result_obj__ = self;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result156__;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sComplement_terminated(struct sComplement* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    # 536 "05pre_op.c"
    __result157__ = (_Bool)0;
    return __result157__;
}

char* sComplement_kind(struct sComplement* self){
void* __result_obj__;
void* right_value218;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
    # 541 "05pre_op.c"
    __result158__ = __result_obj__ = ((char*)(right_value218=__builtin_string("sComplement")));
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional263;
_Bool __result159__;
void* right_value219;
struct CVALUE* come_value_194;
void* right_value220;
struct CVALUE* come_value2_195;
void* right_value221;
char* __dec_obj87;
void* right_value222;
struct sType* __dec_obj88;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value220 = (void*)0;
memset(&come_value2_195, 0, sizeof(struct CVALUE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
    # 550 "05pre_op.c"
    # 546 "05pre_op.c"
    if(_if_conditional263=!node_compile(self->value,info),    _if_conditional263) {
        # 547 "05pre_op.c"
        __result159__ = (_Bool)0;
        return __result159__;
    }
    # 550 "05pre_op.c"
    come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value219,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 551 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 553 "05pre_op.c"
    come_value2_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 553, "CVALUE"))));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 555 "05pre_op.c"
    __dec_obj87=come_value2_195->c_value;
    come_value2_195->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("~%s",come_value_194->c_value))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 556 "05pre_op.c"
    __dec_obj88=come_value2_195->type;
    come_value2_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(come_value_194->type))));
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 557 "05pre_op.c"
    come_value2_195->var=((void*)0);
    # 559 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_195));
    # 561 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value2_195->c_value);
    # 563 "05pre_op.c"
    __result160__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value223;
struct sNode* __dec_obj89;
void* right_value224;
char* __dec_obj90;
struct sParenNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
    # 573 "05pre_op.c"
    __dec_obj89=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(left))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 574 "05pre_op.c"
    self->sline=info->sline;
    # 575 "05pre_op.c"
    __dec_obj90=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(info->sname))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 578 "05pre_op.c"
    __result161__ = __result_obj__ = self;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result161__;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sParenNode_terminated(struct sParenNode* self){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    # 580 "05pre_op.c"
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sParenNode_kind(struct sParenNode* self){
void* __result_obj__;
void* right_value225;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
    # 585 "05pre_op.c"
    __result163__ = __result_obj__ = ((char*)(right_value225=__builtin_string("sParenNode")));
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_196;
_Bool _if_conditional266;
_Bool __result164__;
void* right_value226;
struct CVALUE* left_value_197;
void* right_value227;
struct CVALUE* come_value_198;
void* right_value228;
char* __dec_obj91;
void* right_value229;
struct sType* __dec_obj92;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_196, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&left_value_197, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    # 590 "05pre_op.c"
    left_196=self->mLeft;
    # 596 "05pre_op.c"
    # 592 "05pre_op.c"
    if(_if_conditional266=!node_compile(left_196,info),    _if_conditional266) {
        # 593 "05pre_op.c"
        __result164__ = (_Bool)0;
        return __result164__;
    }
    # 596 "05pre_op.c"
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 597 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 599 "05pre_op.c"
    come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 599, "CVALUE"))));
    come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 601 "05pre_op.c"
    __dec_obj91=come_value_198->c_value;
    come_value_198->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("(%s)",left_value_197->c_value))));
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 602 "05pre_op.c"
    __dec_obj92=come_value_198->type;
    come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(left_value_197->type))));
    come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 603 "05pre_op.c"
    come_value_198->var=((void*)0);
    # 605 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_198->c_value);
    # 607 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
    # 609 "05pre_op.c"
    __result165__ = (_Bool)1;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value230;
struct sType* __dec_obj93;
void* right_value231;
struct sNode* __dec_obj94;
void* right_value232;
char* __dec_obj95;
struct sCastNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 620 "05pre_op.c"
    __dec_obj93=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(type))));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 621 "05pre_op.c"
    __dec_obj94=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 622 "05pre_op.c"
    self->sline=info->sline;
    # 623 "05pre_op.c"
    __dec_obj95=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(info->sname))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 626 "05pre_op.c"
    __result166__ = __result_obj__ = self;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result166__;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCastNode_terminated(struct sCastNode* self){
void* __result_obj__;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    # 628 "05pre_op.c"
    __result167__ = (_Bool)0;
    return __result167__;
}

char* sCastNode_kind(struct sCastNode* self){
void* __result_obj__;
void* right_value233;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    # 633 "05pre_op.c"
    __result168__ = __result_obj__ = ((char*)(right_value233=__builtin_string("sCastNode")));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result168__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_199;
struct sNode* left_200;
_Bool _if_conditional270;
_Bool __result169__;
void* right_value234;
struct CVALUE* left_value_201;
void* right_value235;
void* right_value236;
struct sType* type2_202;
void* right_value237;
struct CVALUE* come_value_203;
void* right_value238;
void* right_value239;
char* __dec_obj96;
void* right_value240;
struct sType* __dec_obj97;
_Bool __result170__;
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
    # 638 "05pre_op.c"
    type_199=self->mType;
    # 639 "05pre_op.c"
    left_200=self->mLeft;
    # 645 "05pre_op.c"
    # 641 "05pre_op.c"
    if(_if_conditional270=!node_compile(left_200,info),    _if_conditional270) {
        # 642 "05pre_op.c"
        __result169__ = (_Bool)0;
        return __result169__;
    }
    # 645 "05pre_op.c"
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 646 "05pre_op.c"
    dec_stack_ptr(1,info);
    # 648 "05pre_op.c"
    type2_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=solve_generics(((struct sType*)(right_value235=sType_clone(type_199))),info->generics_type,info))));
    come_call_finalizer3(right_value235,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 650 "05pre_op.c"
    come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 650, "CVALUE"))));
    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 652 "05pre_op.c"
    cast_type(type2_202,left_value_201->type,left_value_201,info);
    # 654 "05pre_op.c"
    __dec_obj96=come_value_203->c_value;
    come_value_203->c_value=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("(%s)%s",((char*)(right_value238=make_type_name_string(type2_202,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_201->c_value))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 655 "05pre_op.c"
    __dec_obj97=come_value_203->type;
    come_value_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(type2_202))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 656 "05pre_op.c"
    come_value_203->var=((void*)0);
    # 658 "05pre_op.c"
    add_come_last_code(info,"%s;\n",come_value_203->c_value);
    # 660 "05pre_op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
    # 662 "05pre_op.c"
    __result170__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* right_value241;
struct sBlock* block_204;
void* right_value242;
void* right_value243;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* right_value247;
struct sNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&block_204, 0, sizeof(struct sBlock*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value247 = (void*)0;
    # 668 "05pre_op.c"
    block_204=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value241=parse_block(info,(_Bool)0,(_Bool)0))));
    come_call_finalizer3(right_value241,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    # 670 "05pre_op.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 670, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNormalBlock*)(right_value243=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value242=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 670, "sNormalBlock")))),block_204,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result173__ = __result_obj__ = ((struct sNode*)(right_value247=_inf_value1));
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value242,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value243,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value247) { right_value247 = come_decrement_ref_count2(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result173__;
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sNormalBlock_finalize"
        # 0 "sNormalBlock_finalize"
        if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional271) {
            # 0 "sNormalBlock_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sNormalBlock_finalize"
        # 1 "sNormalBlock_finalize"
        if(_if_conditional272=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional272) {
            # 1 "sNormalBlock_finalize"
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
_Bool _if_conditional273;
struct sNormalBlock* __result171__;
void* right_value244;
struct sNormalBlock* result_205;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value245;
char* __dec_obj98;
_Bool _if_conditional276;
void* right_value246;
struct sBlock* __dec_obj99;
struct sNormalBlock* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
memset(&result_205, 0, sizeof(struct sNormalBlock*));
right_value245 = (void*)0;
right_value246 = (void*)0;
        # 3 "sNormalBlock_clone"
        # 2 "sNormalBlock_clone"
        if(_if_conditional273=self==(void*)0,        _if_conditional273) {
            # 2 "sNormalBlock_clone"
            __result171__ = __result_obj__ = (void*)0;
            return __result171__;
        }
        # 3 "sNormalBlock_clone"
        result_205=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(right_value244=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        come_call_finalizer3(right_value244,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sNormalBlock_clone"
        # 4 "sNormalBlock_clone"
        if(_if_conditional274=self!=((void*)0),        _if_conditional274) {
            # 4 "sNormalBlock_clone"
            result_205->sline=self->sline;
        }
        # 6 "sNormalBlock_clone"
        # 5 "sNormalBlock_clone"
        if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional275) {
            # 5 "sNormalBlock_clone"
            __dec_obj98=result_205->sname;
            result_205->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(self->sname))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sNormalBlock_clone"
        # 6 "sNormalBlock_clone"
        if(_if_conditional276=self!=((void*)0)&&self->mBlock!=((void*)0),        _if_conditional276) {
            # 6 "sNormalBlock_clone"
            __dec_obj99=result_205->mBlock;
            result_205->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value246=sBlock_clone(self->mBlock))));
            come_call_finalizer3(__dec_obj99,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value246,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sNormalBlock_clone"
        __result172__ = __result_obj__ = result_205;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result172__;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value248;
void* right_value249;
void* right_value250;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* right_value254;
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value254 = (void*)0;
    # 675 "05pre_op.c"
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 675, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLogicalDenial*)(right_value250=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value248=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 675, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(node)))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLogicalDenial_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result176__ = __result_obj__ = ((struct sNode*)(right_value254=_inf_value2));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(right_value248,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value250,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result176__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* pre_postion_operator(struct sInfo* info){
void* __result_obj__;
_Bool refference_207;
char* p_208;
int sline_209;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
_Bool _while_condtional29;
_Bool _if_conditional286;
_Bool _if_conditional287;
void* right_value255;
struct sNode* __result177__;
_Bool _if_conditional288;
void* right_value256;
struct sNode* node_210;
void* right_value257;
void* right_value258;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* right_value262;
struct sNode* __result180__;
_Bool _if_conditional295;
void* right_value263;
struct sNode* node_212;
void* right_value264;
void* right_value265;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* right_value269;
struct sNode* __result183__;
_Bool _if_conditional302;
void* right_value270;
struct sNode* node_214;
void* right_value271;
void* right_value272;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* right_value276;
struct sNode* __result186__;
_Bool _if_conditional309;
void* right_value277;
struct sNode* node_216;
void* right_value278;
void* right_value279;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* right_value283;
struct sNode* __result189__;
_Bool _if_conditional316;
void* right_value284;
struct sNode* node_218;
void* right_value285;
void* right_value286;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* right_value290;
struct sNode* __result192__;
_Bool _if_conditional323;
_Bool quote_220;
_Bool _if_conditional324;
_Bool no_assign_221;
void* right_value291;
struct sNode* value_222;
void* right_value292;
void* right_value293;
struct sNode* _inf_value8;
struct sDerefferenceNode* _inf_obj_value8;
void* right_value297;
struct sNode* __result195__;
_Bool _if_conditional332;
void* right_value298;
struct sNode* value_224;
void* right_value299;
void* right_value300;
struct sNode* _inf_value9;
struct sRefferenceNode* _inf_obj_value9;
void* right_value304;
struct sNode* __result198__;
_Bool _if_conditional339;
void* right_value305;
struct sNode* value_226;
void* right_value306;
void* right_value307;
struct sNode* _inf_value10;
struct sReverseNode* _inf_obj_value10;
void* right_value311;
struct sNode* __result201__;
_Bool _if_conditional346;
_Bool cast_expression_flag_228;
char* p_229;
int sline_230;
void* right_value312;
char* word_231;
_Bool _if_conditional347;
void* right_value313;
char* __dec_obj118;
_Bool _if_conditional348;
_Bool tuple_expression_flag_232;
char* p_233;
int sline_234;
_Bool no_comma_235;
_Bool no_output_err_236;
_Bool no_output_come_code_237;
void* right_value314;
struct sNode* node_238;
struct sNode* node2_239;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value315;
struct sNode* node_240;
struct sNode* __result202__;
_Bool _if_conditional351;
void* right_value316;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_241;
char* name_242;
_Bool err_243;
_Bool _if_conditional354;
int __exception_result_var_b1;
void* right_value317;
struct sNode* node_244;
void* right_value318;
void* right_value319;
struct sNode* _inf_value11;
struct sCastNode* _inf_obj_value11;
void* right_value324;
struct sNode* __result205__;
void* right_value325;
struct sNode* node_246;
int __exception_result_var_b2;
void* right_value326;
void* right_value327;
struct sNode* _inf_value12;
struct sParenNode* _inf_obj_value12;
void* right_value331;
struct sNode* __dec_obj124;
struct sNode* __result208__;
struct sNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&refference_207, 0, sizeof(_Bool));
memset(&p_208, 0, sizeof(char*));
memset(&sline_209, 0, sizeof(int));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&node_210, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&node_212, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&node_214, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&node_216, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&node_218, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value290 = (void*)0;
memset(&quote_220, 0, sizeof(_Bool));
memset(&no_assign_221, 0, sizeof(_Bool));
right_value291 = (void*)0;
memset(&value_222, 0, sizeof(struct sNode*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&value_224, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&value_226, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value311 = (void*)0;
memset(&cast_expression_flag_228, 0, sizeof(_Bool));
memset(&p_229, 0, sizeof(char*));
memset(&sline_230, 0, sizeof(int));
right_value312 = (void*)0;
memset(&word_231, 0, sizeof(char*));
right_value313 = (void*)0;
memset(&tuple_expression_flag_232, 0, sizeof(_Bool));
memset(&p_233, 0, sizeof(char*));
memset(&sline_234, 0, sizeof(int));
memset(&no_comma_235, 0, sizeof(_Bool));
memset(&no_output_err_236, 0, sizeof(_Bool));
memset(&no_output_come_code_237, 0, sizeof(_Bool));
right_value314 = (void*)0;
memset(&node_238, 0, sizeof(struct sNode*));
memset(&node2_239, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&node_240, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&type_241, 0, sizeof(struct sType*));
memset(&name_242, 0, sizeof(char*));
memset(&err_243, 0, sizeof(_Bool));
memset(&type_241, 0, sizeof(struct sType*));
memset(&name_242, 0, sizeof(char*));
memset(&err_243, 0, sizeof(_Bool));
right_value317 = (void*)0;
memset(&node_244, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&node_246, 0, sizeof(struct sNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value331 = (void*)0;
    # 680 "05pre_op.c"
    skip_spaces_and_lf(info);
    # 682 "05pre_op.c"
    refference_207=(_Bool)0;
    # 710 "05pre_op.c"
    {
        # 684 "05pre_op.c"
        p_208=info->p;
        # 685 "05pre_op.c"
        sline_209=info->sline;
        # 706 "05pre_op.c"
        # 687 "05pre_op.c"
        if(_if_conditional283=*info->p==38,        _if_conditional283) {
            # 688 "05pre_op.c"
            info->p++;
            # 689 "05pre_op.c"
            skip_spaces_and_lf(info);
            # 704 "05pre_op.c"
            # 691 "05pre_op.c"
            if(_if_conditional284=xisalpha(*info->p)||*info->p==95,            _if_conditional284) {
                # 692 "05pre_op.c"
                refference_207=(_Bool)1;
            }
            else {
                # 704 "05pre_op.c"
                # 694 "05pre_op.c"
                if(_if_conditional285=*info->p==40,                _if_conditional285) {
                    # 700 "05pre_op.c"
                    while(_while_condtional29=*info->p==40,                    _while_condtional29) {
                        # 697 "05pre_op.c"
                        info->p++;
                        # 697 "05pre_op.c"
                        skip_spaces_and_lf(info);
                    }
                    # 703 "05pre_op.c"
                    # 700 "05pre_op.c"
                    if(_if_conditional286=xisalpha(*info->p)||*info->p==95,                    _if_conditional286) {
                        # 701 "05pre_op.c"
                        refference_207=(_Bool)1;
                    }
                }
            }
        }
        # 706 "05pre_op.c"
        info->p=p_208;
        # 707 "05pre_op.c"
        info->sline=sline_209;
    }
    # 710 "05pre_op.c"
    parse_sharp_v5(info);
    # 879 "05pre_op.c"
    # 712 "05pre_op.c"
    if(_if_conditional287=*info->p==123,    _if_conditional287) {
        # 713 "05pre_op.c"
        __result177__ = __result_obj__ = ((struct sNode*)(right_value255=parse_normal_block(info)));
        if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result177__;
    }
    else {
        # 879 "05pre_op.c"
        # 715 "05pre_op.c"
        if(_if_conditional288=*info->p==33,        _if_conditional288) {
            # 716 "05pre_op.c"
            info->p++;
            # 717 "05pre_op.c"
            skip_spaces_and_lf(info);
            # 719 "05pre_op.c"
            node_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=expression_node_v99(info))));
            if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 721 "05pre_op.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 721, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(right_value258=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value257=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 721, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_210),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLogicalDenial_finalize;
            _inf_value3->clone=(void*)sLogicalDenial_clone;
            _inf_value3->compile=(void*)sLogicalDenial_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sLogicalDenial_terminated;
            _inf_value3->kind=(void*)sLogicalDenial_kind;
            __result180__ = __result_obj__ = ((struct sNode*)(right_value262=_inf_value3));
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value257,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value258,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result180__;
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 879 "05pre_op.c"
            # 723 "05pre_op.c"
            if(_if_conditional295=*info->p==45&&*(info->p+1)==45,            _if_conditional295) {
                # 724 "05pre_op.c"
                info->p+=2;
                # 725 "05pre_op.c"
                skip_spaces_and_lf(info);
                # 727 "05pre_op.c"
                node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=expression_node_v99(info))));
                if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 729 "05pre_op.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 729, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sMinusMinusNode2*)(right_value265=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value264=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 729, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_212),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value4->clone=(void*)sMinusMinusNode2_clone;
                _inf_value4->compile=(void*)sMinusMinusNode2_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sMinusMinusNode2_terminated;
                _inf_value4->kind=(void*)sMinusMinusNode2_kind;
                __result183__ = __result_obj__ = ((struct sNode*)(right_value269=_inf_value4));
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value264,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value265,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result183__;
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 879 "05pre_op.c"
                # 731 "05pre_op.c"
                if(_if_conditional302=*info->p==45&&!xisdigit(*(info->p+1)),                _if_conditional302) {
                    # 732 "05pre_op.c"
                    info->p++;
                    # 733 "05pre_op.c"
                    skip_spaces_and_lf(info);
                    # 735 "05pre_op.c"
                    node_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=expression_node_v99(info))));
                    if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 737 "05pre_op.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 737, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sMinusNode2*)(right_value272=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value271=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 737, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_214),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sMinusNode2_finalize;
                    _inf_value5->clone=(void*)sMinusNode2_clone;
                    _inf_value5->compile=(void*)sMinusNode2_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sMinusNode2_terminated;
                    _inf_value5->kind=(void*)sMinusNode2_kind;
                    __result186__ = __result_obj__ = ((struct sNode*)(right_value276=_inf_value5));
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value271,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value272,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result186__;
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 879 "05pre_op.c"
                    # 739 "05pre_op.c"
                    if(_if_conditional309=*info->p==43&&*(info->p+1)==43,                    _if_conditional309) {
                        # 740 "05pre_op.c"
                        info->p+=2;
                        # 741 "05pre_op.c"
                        skip_spaces_and_lf(info);
                        # 743 "05pre_op.c"
                        node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=expression_node_v99(info))));
                        if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 745 "05pre_op.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 745, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sPlusPlusNode2*)(right_value279=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value278=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 745, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_216),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value6->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value6->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sPlusPlusNode2_terminated;
                        _inf_value6->kind=(void*)sPlusPlusNode2_kind;
                        __result189__ = __result_obj__ = ((struct sNode*)(right_value283=_inf_value6));
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value278,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value279,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result189__;
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 879 "05pre_op.c"
                        # 747 "05pre_op.c"
                        if(_if_conditional316=*info->p==126,                        _if_conditional316) {
                            # 748 "05pre_op.c"
                            info->p++;
                            # 749 "05pre_op.c"
                            skip_spaces_and_lf(info);
                            # 751 "05pre_op.c"
                            node_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_node_v99(info))));
                            if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 753 "05pre_op.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 753, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sComplement*)(right_value286=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value285=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 753, "sComplement")))),(struct sNode*)come_increment_ref_count(node_218),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sComplement_finalize;
                            _inf_value7->clone=(void*)sComplement_clone;
                            _inf_value7->compile=(void*)sComplement_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sComplement_terminated;
                            _inf_value7->kind=(void*)sComplement_kind;
                            __result192__ = __result_obj__ = ((struct sNode*)(right_value290=_inf_value7));
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value285,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value286,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result192__;
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 879 "05pre_op.c"
                            # 755 "05pre_op.c"
                            if(_if_conditional323=(*info->p==92&&*(info->p+1)==42)||*info->p==42,                            _if_conditional323) {
                                # 756 "05pre_op.c"
                                # 768 "05pre_op.c"
                                # 757 "05pre_op.c"
                                if(_if_conditional324=*info->p==92,                                _if_conditional324) {
                                    # 758 "05pre_op.c"
                                    info->p+=2;
                                    # 759 "05pre_op.c"
                                    skip_spaces_and_lf(info);
                                    # 760 "05pre_op.c"
                                    quote_220=(_Bool)1;
                                }
                                else {
                                    # 763 "05pre_op.c"
                                    info->p++;
                                    # 764 "05pre_op.c"
                                    skip_spaces_and_lf(info);
                                    # 765 "05pre_op.c"
                                    quote_220=(_Bool)0;
                                }
                                # 768 "05pre_op.c"
                                no_assign_221=info->no_assign;
                                # 769 "05pre_op.c"
                                info->no_assign=(_Bool)1;
                                # 770 "05pre_op.c"
                                value_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=expression_node_v99(info))));
                                if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 771 "05pre_op.c"
                                info->no_assign=no_assign_221;
                                # 774 "05pre_op.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 774, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sDerefferenceNode*)(right_value293=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value292=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 773, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_222),quote_220,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sDerefferenceNode_finalize;
                                _inf_value8->clone=(void*)sDerefferenceNode_clone;
                                _inf_value8->compile=(void*)sDerefferenceNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sDerefferenceNode_terminated;
                                _inf_value8->kind=(void*)sDerefferenceNode_kind;
                                __result195__ = __result_obj__ = ((struct sNode*)(right_value297=_inf_value8));
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value292,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value293,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value297) { right_value297 = come_decrement_ref_count2(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result195__;
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 879 "05pre_op.c"
                                # 775 "05pre_op.c"
                                if(_if_conditional332=*info->p==38&&refference_207,                                _if_conditional332) {
                                    # 776 "05pre_op.c"
                                    info->p++;
                                    # 777 "05pre_op.c"
                                    skip_spaces_and_lf(info);
                                    # 779 "05pre_op.c"
                                    value_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=expression_node_v99(info))));
                                    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 781 "05pre_op.c"
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 781, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sRefferenceNode*)(right_value300=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value299=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 781, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_224),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sRefferenceNode_finalize;
                                    _inf_value9->clone=(void*)sRefferenceNode_clone;
                                    _inf_value9->compile=(void*)sRefferenceNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sRefferenceNode_terminated;
                                    _inf_value9->kind=(void*)sRefferenceNode_kind;
                                    __result198__ = __result_obj__ = ((struct sNode*)(right_value304=_inf_value9));
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value299,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value300,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result198__;
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 879 "05pre_op.c"
                                    # 783 "05pre_op.c"
                                    if(_if_conditional339=*info->p==33,                                    _if_conditional339) {
                                        # 784 "05pre_op.c"
                                        info->p++;
                                        # 785 "05pre_op.c"
                                        skip_spaces_and_lf(info);
                                        # 787 "05pre_op.c"
                                        value_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=expression_node_v99(info))));
                                        if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 789 "05pre_op.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 789, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sReverseNode*)(right_value307=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value306=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 789, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_226),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sReverseNode_finalize;
                                        _inf_value10->clone=(void*)sReverseNode_clone;
                                        _inf_value10->compile=(void*)sReverseNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sReverseNode_terminated;
                                        _inf_value10->kind=(void*)sReverseNode_kind;
                                        __result201__ = __result_obj__ = ((struct sNode*)(right_value311=_inf_value10));
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value306,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value307,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result201__;
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 879 "05pre_op.c"
                                        # 791 "05pre_op.c"
                                        if(_if_conditional346=*info->p==40,                                        _if_conditional346) {
                                            # 792 "05pre_op.c"
                                            info->p++;
                                            # 793 "05pre_op.c"
                                            skip_spaces_and_lf(info);
                                            # 796 "05pre_op.c"
                                            cast_expression_flag_228=(_Bool)0;
                                            # 815 "05pre_op.c"
                                            {
                                                # 798 "05pre_op.c"
                                                p_229=info->p;
                                                # 799 "05pre_op.c"
                                                sline_230=info->sline;
                                                # 801 "05pre_op.c"
                                                word_231=(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string(""))));
                                                right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                # 806 "05pre_op.c"
                                                # 802 "05pre_op.c"
                                                if(_if_conditional347=xisalpha(*info->p)||*info->p==95,                                                _if_conditional347) {
                                                    # 803 "05pre_op.c"
                                                    __dec_obj118=word_231;
                                                    word_231=(char*)come_increment_ref_count(((char*)(right_value313=parse_word(info))));
                                                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 810 "05pre_op.c"
                                                # 806 "05pre_op.c"
                                                if(_if_conditional348=is_type_name(word_231,info),                                                _if_conditional348) {
                                                    # 807 "05pre_op.c"
                                                    cast_expression_flag_228=(_Bool)1;
                                                }
                                                # 810 "05pre_op.c"
                                                info->p=p_229;
                                                # 811 "05pre_op.c"
                                                info->sline=sline_230;
                                                word_231 = come_decrement_ref_count2(word_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 815 "05pre_op.c"
                                            tuple_expression_flag_232=(_Bool)0;
                                            # 842 "05pre_op.c"
                                            {
                                                # 817 "05pre_op.c"
                                                p_233=info->p;
                                                # 818 "05pre_op.c"
                                                sline_234=info->sline;
                                                # 820 "05pre_op.c"
                                                no_comma_235=info->no_comma;
                                                # 821 "05pre_op.c"
                                                info->no_comma=(_Bool)1;
                                                # 822 "05pre_op.c"
                                                no_output_err_236=info->no_output_err;
                                                # 823 "05pre_op.c"
                                                info->no_output_err=(_Bool)1;
                                                # 824 "05pre_op.c"
                                                no_output_come_code_237=info->no_output_come_code;
                                                # 825 "05pre_op.c"
                                                info->no_output_come_code=(_Bool)1;
                                                # 827 "05pre_op.c"
                                                node_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=expression_v13(info))));
                                                if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 828 "05pre_op.c"
                                                node2_239=(struct sNode*)come_increment_ref_count(node_238);
                                                # 830 "05pre_op.c"
                                                info->no_comma=no_comma_235;
                                                # 831 "05pre_op.c"
                                                info->no_output_err=no_output_err_236;
                                                # 832 "05pre_op.c"
                                                info->no_output_come_code=no_output_come_code_237;
                                                # 838 "05pre_op.c"
                                                # 834 "05pre_op.c"
                                                if(_if_conditional349=*info->p==44,                                                _if_conditional349) {
                                                    # 835 "05pre_op.c"
                                                    tuple_expression_flag_232=(_Bool)1;
                                                }
                                                # 838 "05pre_op.c"
                                                info->p=p_233;
                                                # 839 "05pre_op.c"
                                                info->sline=sline_234;
                                                if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node2_239) { node2_239 = come_decrement_ref_count2(node2_239, ((struct sNode*)node2_239)->finalize, ((struct sNode*)node2_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 875 "05pre_op.c"
                                            # 842 "05pre_op.c"
                                            if(_if_conditional350=!gComeC&&tuple_expression_flag_232,                                            _if_conditional350) {
                                                # 843 "05pre_op.c"
                                                node_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=parse_tuple(info))));
                                                if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 845 "05pre_op.c"
                                                __result202__ = __result_obj__ = node_240;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result202__;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 875 "05pre_op.c"
                                                # 847 "05pre_op.c"
                                                if(cast_expression_flag_228) {
                                                    # 848 "05pre_op.c"
                                                    parse_sharp_v5(info);
                                                    # 849 "05pre_op.c"
                                                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value316=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                    type_241=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                    name_242=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                    err_243=multiple_assign_var5->v3;
                                                    come_call_finalizer3(right_value316,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 856 "05pre_op.c"
                                                    # 851 "05pre_op.c"
                                                    if(_if_conditional354=!err_243,                                                    _if_conditional354) {
                                                        # 852 "05pre_op.c"
                                                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                        # 853 "05pre_op.c"
                                                        exit(2);
                                                    }
                                                    # 856 "05pre_op.c"
                                                    parse_sharp_v5(info);
                                                    # 857 "05pre_op.c"
                                                    (come_push_stackframe("05pre_op.c", 857, 3),__exception_result_var_b1=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b1);
                                                    # 859 "05pre_op.c"
                                                    node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=expression_node_v99(info))));
                                                    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 861 "05pre_op.c"
                                                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 861, "struct sNode");
                                                    _inf_obj_value11=come_increment_ref_count(((struct sCastNode*)(right_value319=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value318=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 861, "sCastNode")))),type_241,node_244,info))));
                                                    _inf_value11->_protocol_obj=_inf_obj_value11;
                                                    _inf_value11->finalize=(void*)sCastNode_finalize;
                                                    _inf_value11->clone=(void*)sCastNode_clone;
                                                    _inf_value11->compile=(void*)sCastNode_compile;
                                                    _inf_value11->sline=(void*)sNodeBase_sline;
                                                    _inf_value11->sname=(void*)sNodeBase_sname;
                                                    _inf_value11->terminated=(void*)sCastNode_terminated;
                                                    _inf_value11->kind=(void*)sCastNode_kind;
                                                    __result205__ = __result_obj__ = ((struct sNode*)(right_value324=_inf_value11));
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(right_value318,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value319,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result205__;
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 864 "05pre_op.c"
                                                    parse_sharp_v5(info);
                                                    # 865 "05pre_op.c"
                                                    node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=expression_v13(info))));
                                                    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 866 "05pre_op.c"
                                                    parse_sharp_v5(info);
                                                    # 868 "05pre_op.c"
                                                    (come_push_stackframe("05pre_op.c", 868, 4),__exception_result_var_b2=expected_next_character(41,info), come_pop_stackframe(), __exception_result_var_b2);
                                                    # 869 "05pre_op.c"
                                                    parse_sharp_v5(info);
                                                    # 871 "05pre_op.c"
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 871, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sParenNode*)(right_value327=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value326=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 871, "sParenNode")))),node_246,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sParenNode_finalize;
                                                    _inf_value12->clone=(void*)sParenNode_clone;
                                                    _inf_value12->compile=(void*)sParenNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sParenNode_terminated;
                                                    _inf_value12->kind=(void*)sParenNode_kind;
                                                    __dec_obj124=node_246;
                                                    node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=_inf_value12)));
                                                    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                                    come_call_finalizer3(right_value326,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value327,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 873 "05pre_op.c"
                                                    __result208__ = __result_obj__ = node_246;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result208__;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                        }
                                        else {
                                            # 877 "05pre_op.c"
                                            __result209__ = __result_obj__ = (struct sNode*)((void*)0);
                                            return __result209__;
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
_Bool _if_conditional289;
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sLogicalDenial_finalize"
                # 0 "sLogicalDenial_finalize"
                if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional289) {
                    # 0 "sLogicalDenial_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sLogicalDenial_finalize"
                # 1 "sLogicalDenial_finalize"
                if(_if_conditional290=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional290) {
                    # 1 "sLogicalDenial_finalize"
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
_Bool _if_conditional291;
struct sLogicalDenial* __result178__;
void* right_value259;
struct sLogicalDenial* result_211;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value260;
char* __dec_obj102;
_Bool _if_conditional294;
void* right_value261;
struct sNode* __dec_obj103;
struct sLogicalDenial* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
memset(&result_211, 0, sizeof(struct sLogicalDenial*));
right_value260 = (void*)0;
right_value261 = (void*)0;
                # 3 "sLogicalDenial_clone"
                # 2 "sLogicalDenial_clone"
                if(_if_conditional291=self==(void*)0,                _if_conditional291) {
                    # 2 "sLogicalDenial_clone"
                    __result178__ = __result_obj__ = (void*)0;
                    return __result178__;
                }
                # 3 "sLogicalDenial_clone"
                result_211=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(right_value259=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                come_call_finalizer3(right_value259,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sLogicalDenial_clone"
                # 4 "sLogicalDenial_clone"
                if(_if_conditional292=self!=((void*)0),                _if_conditional292) {
                    # 4 "sLogicalDenial_clone"
                    result_211->sline=self->sline;
                }
                # 6 "sLogicalDenial_clone"
                # 5 "sLogicalDenial_clone"
                if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional293) {
                    # 5 "sLogicalDenial_clone"
                    __dec_obj102=result_211->sname;
                    result_211->sname=(char*)come_increment_ref_count(((char*)(right_value260=string_clone(self->sname))));
                    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sLogicalDenial_clone"
                # 6 "sLogicalDenial_clone"
                if(_if_conditional294=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional294) {
                    # 6 "sLogicalDenial_clone"
                    __dec_obj103=result_211->value;
                    result_211->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(self->value))));
                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sLogicalDenial_clone"
                __result179__ = __result_obj__ = result_211;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
                return __result179__;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional296;
_Bool _if_conditional297;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sMinusMinusNode2_finalize"
                    # 0 "sMinusMinusNode2_finalize"
                    if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional296) {
                        # 0 "sMinusMinusNode2_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sMinusMinusNode2_finalize"
                    # 1 "sMinusMinusNode2_finalize"
                    if(_if_conditional297=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional297) {
                        # 1 "sMinusMinusNode2_finalize"
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional298;
struct sMinusMinusNode2* __result181__;
void* right_value266;
struct sMinusMinusNode2* result_213;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value267;
char* __dec_obj104;
_Bool _if_conditional301;
void* right_value268;
struct sNode* __dec_obj105;
struct sMinusMinusNode2* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
memset(&result_213, 0, sizeof(struct sMinusMinusNode2*));
right_value267 = (void*)0;
right_value268 = (void*)0;
                    # 3 "sMinusMinusNode2_clone"
                    # 2 "sMinusMinusNode2_clone"
                    if(_if_conditional298=self==(void*)0,                    _if_conditional298) {
                        # 2 "sMinusMinusNode2_clone"
                        __result181__ = __result_obj__ = (void*)0;
                        return __result181__;
                    }
                    # 3 "sMinusMinusNode2_clone"
                    result_213=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(right_value266=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    come_call_finalizer3(right_value266,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sMinusMinusNode2_clone"
                    # 4 "sMinusMinusNode2_clone"
                    if(_if_conditional299=self!=((void*)0),                    _if_conditional299) {
                        # 4 "sMinusMinusNode2_clone"
                        result_213->sline=self->sline;
                    }
                    # 6 "sMinusMinusNode2_clone"
                    # 5 "sMinusMinusNode2_clone"
                    if(_if_conditional300=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional300) {
                        # 5 "sMinusMinusNode2_clone"
                        __dec_obj104=result_213->sname;
                        result_213->sname=(char*)come_increment_ref_count(((char*)(right_value267=string_clone(self->sname))));
                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sMinusMinusNode2_clone"
                    # 6 "sMinusMinusNode2_clone"
                    if(_if_conditional301=self!=((void*)0)&&self->value!=((void*)0),                    _if_conditional301) {
                        # 6 "sMinusMinusNode2_clone"
                        __dec_obj105=result_213->value;
                        result_213->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(self->value))));
                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sMinusMinusNode2_clone"
                    __result182__ = __result_obj__ = result_213;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                    return __result182__;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sMinusNode2_finalize"
                        # 0 "sMinusNode2_finalize"
                        if(_if_conditional303=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional303) {
                            # 0 "sMinusNode2_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sMinusNode2_finalize"
                        # 1 "sMinusNode2_finalize"
                        if(_if_conditional304=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional304) {
                            # 1 "sMinusNode2_finalize"
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
_Bool _if_conditional305;
struct sMinusNode2* __result184__;
void* right_value273;
struct sMinusNode2* result_215;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value274;
char* __dec_obj106;
_Bool _if_conditional308;
void* right_value275;
struct sNode* __dec_obj107;
struct sMinusNode2* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
memset(&result_215, 0, sizeof(struct sMinusNode2*));
right_value274 = (void*)0;
right_value275 = (void*)0;
                        # 3 "sMinusNode2_clone"
                        # 2 "sMinusNode2_clone"
                        if(_if_conditional305=self==(void*)0,                        _if_conditional305) {
                            # 2 "sMinusNode2_clone"
                            __result184__ = __result_obj__ = (void*)0;
                            return __result184__;
                        }
                        # 3 "sMinusNode2_clone"
                        result_215=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(right_value273=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        come_call_finalizer3(right_value273,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        # 5 "sMinusNode2_clone"
                        # 4 "sMinusNode2_clone"
                        if(_if_conditional306=self!=((void*)0),                        _if_conditional306) {
                            # 4 "sMinusNode2_clone"
                            result_215->sline=self->sline;
                        }
                        # 6 "sMinusNode2_clone"
                        # 5 "sMinusNode2_clone"
                        if(_if_conditional307=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional307) {
                            # 5 "sMinusNode2_clone"
                            __dec_obj106=result_215->sname;
                            result_215->sname=(char*)come_increment_ref_count(((char*)(right_value274=string_clone(self->sname))));
                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 7 "sMinusNode2_clone"
                        # 6 "sMinusNode2_clone"
                        if(_if_conditional308=self!=((void*)0)&&self->value!=((void*)0),                        _if_conditional308) {
                            # 6 "sMinusNode2_clone"
                            __dec_obj107=result_215->value;
                            result_215->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=sNode_clone(self->value))));
                            if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sMinusNode2_clone"
                        __result185__ = __result_obj__ = result_215;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                        return __result185__;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sPlusPlusNode2_finalize"
                            # 0 "sPlusPlusNode2_finalize"
                            if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional310) {
                                # 0 "sPlusPlusNode2_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sPlusPlusNode2_finalize"
                            # 1 "sPlusPlusNode2_finalize"
                            if(_if_conditional311=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional311) {
                                # 1 "sPlusPlusNode2_finalize"
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
_Bool _if_conditional312;
struct sPlusPlusNode2* __result187__;
void* right_value280;
struct sPlusPlusNode2* result_217;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value281;
char* __dec_obj108;
_Bool _if_conditional315;
void* right_value282;
struct sNode* __dec_obj109;
struct sPlusPlusNode2* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
memset(&result_217, 0, sizeof(struct sPlusPlusNode2*));
right_value281 = (void*)0;
right_value282 = (void*)0;
                            # 3 "sPlusPlusNode2_clone"
                            # 2 "sPlusPlusNode2_clone"
                            if(_if_conditional312=self==(void*)0,                            _if_conditional312) {
                                # 2 "sPlusPlusNode2_clone"
                                __result187__ = __result_obj__ = (void*)0;
                                return __result187__;
                            }
                            # 3 "sPlusPlusNode2_clone"
                            result_217=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(right_value280=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            come_call_finalizer3(right_value280,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sPlusPlusNode2_clone"
                            # 4 "sPlusPlusNode2_clone"
                            if(_if_conditional313=self!=((void*)0),                            _if_conditional313) {
                                # 4 "sPlusPlusNode2_clone"
                                result_217->sline=self->sline;
                            }
                            # 6 "sPlusPlusNode2_clone"
                            # 5 "sPlusPlusNode2_clone"
                            if(_if_conditional314=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional314) {
                                # 5 "sPlusPlusNode2_clone"
                                __dec_obj108=result_217->sname;
                                result_217->sname=(char*)come_increment_ref_count(((char*)(right_value281=string_clone(self->sname))));
                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sPlusPlusNode2_clone"
                            # 6 "sPlusPlusNode2_clone"
                            if(_if_conditional315=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional315) {
                                # 6 "sPlusPlusNode2_clone"
                                __dec_obj109=result_217->value;
                                result_217->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=sNode_clone(self->value))));
                                if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sPlusPlusNode2_clone"
                            __result188__ = __result_obj__ = result_217;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
                            return __result188__;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sComplement_finalize"
                                # 0 "sComplement_finalize"
                                if(_if_conditional317=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional317) {
                                    # 0 "sComplement_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sComplement_finalize"
                                # 1 "sComplement_finalize"
                                if(_if_conditional318=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional318) {
                                    # 1 "sComplement_finalize"
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sComplement* __result190__;
void* right_value287;
struct sComplement* result_219;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value288;
char* __dec_obj110;
_Bool _if_conditional322;
void* right_value289;
struct sNode* __dec_obj111;
struct sComplement* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
memset(&result_219, 0, sizeof(struct sComplement*));
right_value288 = (void*)0;
right_value289 = (void*)0;
                                # 3 "sComplement_clone"
                                # 2 "sComplement_clone"
                                if(_if_conditional319=self==(void*)0,                                _if_conditional319) {
                                    # 2 "sComplement_clone"
                                    __result190__ = __result_obj__ = (void*)0;
                                    return __result190__;
                                }
                                # 3 "sComplement_clone"
                                result_219=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(right_value287=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                come_call_finalizer3(right_value287,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sComplement_clone"
                                # 4 "sComplement_clone"
                                if(_if_conditional320=self!=((void*)0),                                _if_conditional320) {
                                    # 4 "sComplement_clone"
                                    result_219->sline=self->sline;
                                }
                                # 6 "sComplement_clone"
                                # 5 "sComplement_clone"
                                if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional321) {
                                    # 5 "sComplement_clone"
                                    __dec_obj110=result_219->sname;
                                    result_219->sname=(char*)come_increment_ref_count(((char*)(right_value288=string_clone(self->sname))));
                                    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sComplement_clone"
                                # 6 "sComplement_clone"
                                if(_if_conditional322=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional322) {
                                    # 6 "sComplement_clone"
                                    __dec_obj111=result_219->value;
                                    result_219->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=sNode_clone(self->value))));
                                    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sComplement_clone"
                                __result191__ = __result_obj__ = result_219;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 1, 0, (void*)0);
                                return __result191__;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional325;
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sDerefferenceNode_finalize"
                                    # 0 "sDerefferenceNode_finalize"
                                    if(_if_conditional325=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional325) {
                                        # 0 "sDerefferenceNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sDerefferenceNode_finalize"
                                    # 1 "sDerefferenceNode_finalize"
                                    if(_if_conditional326=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional326) {
                                        # 1 "sDerefferenceNode_finalize"
                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional327;
struct sDerefferenceNode* __result193__;
void* right_value294;
struct sDerefferenceNode* result_223;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value295;
char* __dec_obj112;
_Bool _if_conditional330;
void* right_value296;
struct sNode* __dec_obj113;
_Bool _if_conditional331;
struct sDerefferenceNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
memset(&result_223, 0, sizeof(struct sDerefferenceNode*));
right_value295 = (void*)0;
right_value296 = (void*)0;
                                    # 3 "sDerefferenceNode_clone"
                                    # 2 "sDerefferenceNode_clone"
                                    if(_if_conditional327=self==(void*)0,                                    _if_conditional327) {
                                        # 2 "sDerefferenceNode_clone"
                                        __result193__ = __result_obj__ = (void*)0;
                                        return __result193__;
                                    }
                                    # 3 "sDerefferenceNode_clone"
                                    result_223=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(right_value294=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                    come_call_finalizer3(right_value294,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sDerefferenceNode_clone"
                                    # 4 "sDerefferenceNode_clone"
                                    if(_if_conditional328=self!=((void*)0),                                    _if_conditional328) {
                                        # 4 "sDerefferenceNode_clone"
                                        result_223->sline=self->sline;
                                    }
                                    # 6 "sDerefferenceNode_clone"
                                    # 5 "sDerefferenceNode_clone"
                                    if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional329) {
                                        # 5 "sDerefferenceNode_clone"
                                        __dec_obj112=result_223->sname;
                                        result_223->sname=(char*)come_increment_ref_count(((char*)(right_value295=string_clone(self->sname))));
                                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sDerefferenceNode_clone"
                                    # 6 "sDerefferenceNode_clone"
                                    if(_if_conditional330=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional330) {
                                        # 6 "sDerefferenceNode_clone"
                                        __dec_obj113=result_223->value;
                                        result_223->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(self->value))));
                                        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sDerefferenceNode_clone"
                                    # 7 "sDerefferenceNode_clone"
                                    if(_if_conditional331=self!=((void*)0),                                    _if_conditional331) {
                                        # 7 "sDerefferenceNode_clone"
                                        result_223->mQuote=self->mQuote;
                                    }
                                    # 8 "sDerefferenceNode_clone"
                                    __result194__ = __result_obj__ = result_223;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result194__;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sRefferenceNode_finalize"
                                        # 0 "sRefferenceNode_finalize"
                                        if(_if_conditional333=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional333) {
                                            # 0 "sRefferenceNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sRefferenceNode_finalize"
                                        # 1 "sRefferenceNode_finalize"
                                        if(_if_conditional334=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional334) {
                                            # 1 "sRefferenceNode_finalize"
                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
_Bool _if_conditional335;
struct sRefferenceNode* __result196__;
void* right_value301;
struct sRefferenceNode* result_225;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value302;
char* __dec_obj114;
_Bool _if_conditional338;
void* right_value303;
struct sNode* __dec_obj115;
struct sRefferenceNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&result_225, 0, sizeof(struct sRefferenceNode*));
right_value302 = (void*)0;
right_value303 = (void*)0;
                                        # 3 "sRefferenceNode_clone"
                                        # 2 "sRefferenceNode_clone"
                                        if(_if_conditional335=self==(void*)0,                                        _if_conditional335) {
                                            # 2 "sRefferenceNode_clone"
                                            __result196__ = __result_obj__ = (void*)0;
                                            return __result196__;
                                        }
                                        # 3 "sRefferenceNode_clone"
                                        result_225=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(right_value301=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                        come_call_finalizer3(right_value301,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sRefferenceNode_clone"
                                        # 4 "sRefferenceNode_clone"
                                        if(_if_conditional336=self!=((void*)0),                                        _if_conditional336) {
                                            # 4 "sRefferenceNode_clone"
                                            result_225->sline=self->sline;
                                        }
                                        # 6 "sRefferenceNode_clone"
                                        # 5 "sRefferenceNode_clone"
                                        if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional337) {
                                            # 5 "sRefferenceNode_clone"
                                            __dec_obj114=result_225->sname;
                                            result_225->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(self->sname))));
                                            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sRefferenceNode_clone"
                                        # 6 "sRefferenceNode_clone"
                                        if(_if_conditional338=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional338) {
                                            # 6 "sRefferenceNode_clone"
                                            __dec_obj115=result_225->value;
                                            result_225->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=sNode_clone(self->value))));
                                            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sRefferenceNode_clone"
                                        __result197__ = __result_obj__ = result_225;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result197__;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sReverseNode_finalize"
                                            # 0 "sReverseNode_finalize"
                                            if(_if_conditional340=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional340) {
                                                # 0 "sReverseNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sReverseNode_finalize"
                                            # 1 "sReverseNode_finalize"
                                            if(_if_conditional341=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional341) {
                                                # 1 "sReverseNode_finalize"
                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
_Bool _if_conditional342;
struct sReverseNode* __result199__;
void* right_value308;
struct sReverseNode* result_227;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value309;
char* __dec_obj116;
_Bool _if_conditional345;
void* right_value310;
struct sNode* __dec_obj117;
struct sReverseNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value308 = (void*)0;
memset(&result_227, 0, sizeof(struct sReverseNode*));
right_value309 = (void*)0;
right_value310 = (void*)0;
                                            # 3 "sReverseNode_clone"
                                            # 2 "sReverseNode_clone"
                                            if(_if_conditional342=self==(void*)0,                                            _if_conditional342) {
                                                # 2 "sReverseNode_clone"
                                                __result199__ = __result_obj__ = (void*)0;
                                                return __result199__;
                                            }
                                            # 3 "sReverseNode_clone"
                                            result_227=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(right_value308=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                            come_call_finalizer3(right_value308,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sReverseNode_clone"
                                            # 4 "sReverseNode_clone"
                                            if(_if_conditional343=self!=((void*)0),                                            _if_conditional343) {
                                                # 4 "sReverseNode_clone"
                                                result_227->sline=self->sline;
                                            }
                                            # 6 "sReverseNode_clone"
                                            # 5 "sReverseNode_clone"
                                            if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional344) {
                                                # 5 "sReverseNode_clone"
                                                __dec_obj116=result_227->sname;
                                                result_227->sname=(char*)come_increment_ref_count(((char*)(right_value309=string_clone(self->sname))));
                                                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sReverseNode_clone"
                                            # 6 "sReverseNode_clone"
                                            if(_if_conditional345=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional345) {
                                                # 6 "sReverseNode_clone"
                                                __dec_obj117=result_227->value;
                                                result_227->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=sNode_clone(self->value))));
                                                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sReverseNode_clone"
                                            __result200__ = __result_obj__ = result_227;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result200__;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                        # 0 "tuple3$3sTypephcharphboolp_finalize"
                                                        if(_if_conditional352=self!=((void*)0)&&self->v1!=((void*)0),                                                        _if_conditional352) {
                                                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "tuple3$3sTypephcharphboolp_finalize"
                                                        # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                        if(_if_conditional353=self!=((void*)0)&&self->v2!=((void*)0),                                                        _if_conditional353) {
                                                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                                                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void sCastNode_finalize(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sCastNode_finalize"
                                                        # 0 "sCastNode_finalize"
                                                        if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional355) {
                                                            # 0 "sCastNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sCastNode_finalize"
                                                        # 1 "sCastNode_finalize"
                                                        if(_if_conditional356=self!=((void*)0)&&self->mType!=((void*)0),                                                        _if_conditional356) {
                                                            # 1 "sCastNode_finalize"
                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 3 "sCastNode_finalize"
                                                        # 2 "sCastNode_finalize"
                                                        if(_if_conditional357=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional357) {
                                                            # 2 "sCastNode_finalize"
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
_Bool _if_conditional358;
struct sCastNode* __result203__;
void* right_value320;
struct sCastNode* result_245;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value321;
char* __dec_obj119;
_Bool _if_conditional361;
void* right_value322;
struct sType* __dec_obj120;
_Bool _if_conditional362;
void* right_value323;
struct sNode* __dec_obj121;
struct sCastNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
memset(&result_245, 0, sizeof(struct sCastNode*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
                                                        # 3 "sCastNode_clone"
                                                        # 2 "sCastNode_clone"
                                                        if(_if_conditional358=self==(void*)0,                                                        _if_conditional358) {
                                                            # 2 "sCastNode_clone"
                                                            __result203__ = __result_obj__ = (void*)0;
                                                            return __result203__;
                                                        }
                                                        # 3 "sCastNode_clone"
                                                        result_245=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(right_value320=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                        come_call_finalizer3(right_value320,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sCastNode_clone"
                                                        # 4 "sCastNode_clone"
                                                        if(_if_conditional359=self!=((void*)0),                                                        _if_conditional359) {
                                                            # 4 "sCastNode_clone"
                                                            result_245->sline=self->sline;
                                                        }
                                                        # 6 "sCastNode_clone"
                                                        # 5 "sCastNode_clone"
                                                        if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional360) {
                                                            # 5 "sCastNode_clone"
                                                            __dec_obj119=result_245->sname;
                                                            result_245->sname=(char*)come_increment_ref_count(((char*)(right_value321=string_clone(self->sname))));
                                                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sCastNode_clone"
                                                        # 6 "sCastNode_clone"
                                                        if(_if_conditional361=self!=((void*)0)&&self->mType!=((void*)0),                                                        _if_conditional361) {
                                                            # 6 "sCastNode_clone"
                                                            __dec_obj120=result_245->mType;
                                                            result_245->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(self->mType))));
                                                            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value322,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 8 "sCastNode_clone"
                                                        # 7 "sCastNode_clone"
                                                        if(_if_conditional362=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional362) {
                                                            # 7 "sCastNode_clone"
                                                            __dec_obj121=result_245->mLeft;
                                                            result_245->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(self->mLeft))));
                                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 8 "sCastNode_clone"
                                                        __result204__ = __result_obj__ = result_245;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result204__;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sParenNode_finalize"
                                                        # 0 "sParenNode_finalize"
                                                        if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional363) {
                                                            # 0 "sParenNode_finalize"
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sParenNode_finalize"
                                                        # 1 "sParenNode_finalize"
                                                        if(_if_conditional364=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional364) {
                                                            # 1 "sParenNode_finalize"
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
_Bool _if_conditional365;
struct sParenNode* __result206__;
void* right_value328;
struct sParenNode* result_247;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value329;
char* __dec_obj122;
_Bool _if_conditional368;
void* right_value330;
struct sNode* __dec_obj123;
struct sParenNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&result_247, 0, sizeof(struct sParenNode*));
right_value329 = (void*)0;
right_value330 = (void*)0;
                                                        # 3 "sParenNode_clone"
                                                        # 2 "sParenNode_clone"
                                                        if(_if_conditional365=self==(void*)0,                                                        _if_conditional365) {
                                                            # 2 "sParenNode_clone"
                                                            __result206__ = __result_obj__ = (void*)0;
                                                            return __result206__;
                                                        }
                                                        # 3 "sParenNode_clone"
                                                        result_247=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(right_value328=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                        come_call_finalizer3(right_value328,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 5 "sParenNode_clone"
                                                        # 4 "sParenNode_clone"
                                                        if(_if_conditional366=self!=((void*)0),                                                        _if_conditional366) {
                                                            # 4 "sParenNode_clone"
                                                            result_247->sline=self->sline;
                                                        }
                                                        # 6 "sParenNode_clone"
                                                        # 5 "sParenNode_clone"
                                                        if(_if_conditional367=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional367) {
                                                            # 5 "sParenNode_clone"
                                                            __dec_obj122=result_247->sname;
                                                            result_247->sname=(char*)come_increment_ref_count(((char*)(right_value329=string_clone(self->sname))));
                                                            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        # 7 "sParenNode_clone"
                                                        # 6 "sParenNode_clone"
                                                        if(_if_conditional368=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        _if_conditional368) {
                                                            # 6 "sParenNode_clone"
                                                            __dec_obj123=result_247->mLeft;
                                                            result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=sNode_clone(self->mLeft))));
                                                            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value330) { right_value330 = come_decrement_ref_count2(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        # 7 "sParenNode_clone"
                                                        __result207__ = __result_obj__ = result_247;
                                                        come_call_finalizer3(result_247,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result207__;
                                                        come_call_finalizer3(result_247,sParenNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
void* right_value332;
struct sNode* node_248;
_Bool _if_conditional369;
void* right_value333;
struct sNode* __result210__;
struct sNode* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value332 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value333 = (void*)0;
    # 883 "05pre_op.c"
    node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=pre_postion_operator(info))));
    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 891 "05pre_op.c"
    # 885 "05pre_op.c"
    if(_if_conditional369=node_248==((void*)0),    _if_conditional369) {
        # 886 "05pre_op.c"
        __result210__ = __result_obj__ = ((struct sNode*)(right_value333=expression_node_v97(info)));
        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result210__;
    }
    else {
        # 889 "05pre_op.c"
        __result211__ = __result_obj__ = node_248;
        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result211__;
    }
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

