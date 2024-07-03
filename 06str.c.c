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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};
struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};
struct sCharNode
{
    int sline;
    char* sname;
    int value;
};
struct sWCharNode
{
    int sline;
    char* sname;
    unsigned int value;
};
struct sWStringNode
{
    int sline;
    char* sname;
    unsigned int* value;
};
struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};
struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};
struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

_Bool sStrNode_terminated(struct sStrNode* self);

char* sStrNode_kind(struct sStrNode* self);

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

_Bool sSStringNode_terminated(struct sSStringNode* self);

char* sSStringNode_kind(struct sSStringNode* self);

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

_Bool sCharNode_terminated(struct sCharNode* self);

char* sCharNode_kind(struct sCharNode* self);

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info);

_Bool sWCharNode_terminated(struct sWCharNode* self);

char* sWCharNode_kind(struct sWCharNode* self);

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

_Bool sWStringNode_terminated(struct sWStringNode* self);

char* sWStringNode_kind(struct sWStringNode* self);

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

_Bool sRegexNode_terminated(struct sRegexNode* self);

char* sRegexNode_kind(struct sRegexNode* self);

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

_Bool sListNode_terminated(struct sListNode* self);

char* sListNode_kind(struct sListNode* self);

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

_Bool sTupleNode_terminated(struct sTupleNode* self);

char* sTupleNode_kind(struct sTupleNode* self);

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

_Bool sMapNode_terminated(struct sMapNode* self);

char* sMapNode_kind(struct sMapNode* self);

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value79;
char* __dec_obj12;
void* right_value80;
char* __dec_obj13;
struct sStrNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    # 10 "06str.c"
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 12 "06str.c"
    self->sline=sline;
    # 13 "06str.c"
    __dec_obj13=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 16 "06str.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sStrNode_terminated(struct sStrNode* self){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    # 18 "06str.c"
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__;
void* right_value81;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 23 "06str.c"
    __result54__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sStrNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
struct CVALUE* come_value_47;
void* right_value83;
char* __dec_obj14;
void* right_value84;
void* right_value85;
struct sType* __dec_obj15;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    # 28 "06str.c"
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 28, "CVALUE"))));
    come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 30 "06str.c"
    __dec_obj14=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value83=xsprintf("\"%s\"",self->value))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 31 "06str.c"
    __dec_obj15=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 31, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 33 "06str.c"
    come_value_47->var=((void*)0);
    # 35 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    # 37 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    # 39 "06str.c"
    __result56__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result56__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "CVALUE_finalize"
        # 0 "CVALUE_finalize"
        if(_if_conditional21=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional21) {
            # 0 "CVALUE_finalize"
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "CVALUE_finalize"
        # 1 "CVALUE_finalize"
        if(_if_conditional22=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional22) {
            # 1 "CVALUE_finalize"
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional23=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional23) {
                    # 0 "sType_finalize"
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional25=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional25) {
                    # 1 "sType_finalize"
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional27) {
                    # 2 "sType_finalize"
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional28) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional29) {
                    # 4 "sType_finalize"
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional30) {
                    # 5 "sType_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional32=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional32) {
                    # 6 "sType_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional33) {
                    # 7 "sType_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional35=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional35) {
                    # 8 "sType_finalize"
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional36) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional37) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional38=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional38) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional39=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional39) {
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
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
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
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional24) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional26) {
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
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
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
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional31) {
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
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
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
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional34=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional34) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional40;
void* right_value86;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj16;
_Bool _if_conditional42;
void* right_value87;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj17;
void* right_value88;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj18;
struct list$1CVALUEph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value88 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional40=self->len==0,        _if_conditional40) {
            # 217 "./neo-c.h"
            litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value86,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_54->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_54->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj16=litem_54->item;
            litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_54;
            # 224 "./neo-c.h"
            self->head=litem_54;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional42=self->len==1,            _if_conditional42) {
                # 227 "./neo-c.h"
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_55->prev=self->head;
                # 230 "./neo-c.h"
                litem_55->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj17=litem_55->item;
                litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_55;
                # 234 "./neo-c.h"
                self->head->next=litem_55;
            }
            else {
                # 237 "./neo-c.h"
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value88,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_56->prev=self->tail;
                # 240 "./neo-c.h"
                litem_56->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj18=litem_56->item;
                litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj18,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_56;
                # 244 "./neo-c.h"
                self->tail=litem_56;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result55__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result55__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional41=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional41) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __dec_obj19;
void* right_value97;
struct list$1sNodeph* __dec_obj23;
void* right_value98;
char* __dec_obj24;
struct sSStringNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
    # 50 "06str.c"
    __dec_obj19=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(value))));
    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 51 "06str.c"
    __dec_obj23=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodephp_clone(exps))));
    come_call_finalizer3(__dec_obj23,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 53 "06str.c"
    self->sline=sline;
    # 54 "06str.c"
    __dec_obj24=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value98=__builtin_string(info->sname))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 57 "06str.c"
    __result63__ = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result63__;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSStringNode_terminated(struct sSStringNode* self){
void* __result_obj__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    # 59 "06str.c"
    __result64__ = (_Bool)0;
    return __result64__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__;
void* right_value99;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    # 64 "06str.c"
    __result65__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sSStringNode")));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
struct CVALUE* come_value_65;
void* right_value101;
void* right_value102;
struct buffer* buf_66;
_Bool _if_conditional59;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_70;
_Bool _if_conditional64;
_Bool __result75__;
void* right_value103;
struct CVALUE* come_value_73;
void* right_value104;
char* method_name_74;
_Bool _if_conditional84;
struct sType* obj_type_77;
_Bool _if_conditional86;
struct sType* obj_type2_78;
void* right_value105;
void* right_value106;
char* __dec_obj25;
void* right_value107;
void* right_value108;
struct buffer* buf2_79;
void* right_value109;
void* right_value110;
struct sType* type_80;
void* right_value111;
void* right_value112;
char* c_value_81;
void* right_value113;
void* right_value114;
struct sType* type2_82;
void* right_value115;
char* __dec_obj26;
void* right_value116;
char* __dec_obj27;
void* right_value145;
struct sType* __dec_obj48;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
right_value103 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value104 = (void*)0;
memset(&method_name_74, 0, sizeof(char*));
memset(&obj_type_77, 0, sizeof(struct sType*));
memset(&obj_type2_78, 0, sizeof(struct sType*));
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
memset(&buf2_79, 0, sizeof(struct buffer*));
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&type_80, 0, sizeof(struct sType*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&c_value_81, 0, sizeof(char*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&type2_82, 0, sizeof(struct sType*));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value145 = (void*)0;
    # 69 "06str.c"
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 69, "CVALUE"))));
    come_call_finalizer3(right_value100,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 71 "06str.c"
    buf_66=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 71, "buffer"))))))));
    come_call_finalizer3(right_value101,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value102,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 73 "06str.c"
    buffer_append_str(buf_66,"xsprintf(\"");
    # 74 "06str.c"
    buffer_append_str(buf_66,self->value);
    # 75 "06str.c"
    buffer_append_str(buf_66,"\"");
    # 117 "06str.c"
    # 77 "06str.c"
    if(_if_conditional59=list$1sNodeph_length(self->exps)>0,    _if_conditional59) {
        # 115 "06str.c"
        for(        o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_70=list$1sNodeph_begin((o2_saved_67));        !list$1sNodeph_end((o2_saved_67));        it_70=list$1sNodeph_next((o2_saved_67))        ){
            # 83 "06str.c"
            # 79 "06str.c"
            if(_if_conditional64=!node_compile(it_70,info),            _if_conditional64) {
                # 80 "06str.c"
                __result75__ = (_Bool)0;
                come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result75__;
            }
            # 83 "06str.c"
            come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value103=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value103,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 84 "06str.c"
            dec_stack_ptr(1,info);
            # 86 "06str.c"
            method_name_74=(char*)come_increment_ref_count(((char*)(right_value104=create_method_name(come_value_73->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 100 "06str.c"
            # 88 "06str.c"
            if(_if_conditional84=map$2charphsFunph_at(info->funcs,method_name_74,((void*)0))==((void*)0),            _if_conditional84) {
                # 89 "06str.c"
                obj_type_77=come_value_73->type->mNoSolvedGenericsType->v1;
                # 98 "06str.c"
                # 90 "06str.c"
                if(_if_conditional86=obj_type_77&&list$1sTypeph_length(obj_type_77->mGenericsTypes)>0,                _if_conditional86) {
                    # 91 "06str.c"
                    obj_type2_78=come_value_73->type;
                    # 92 "06str.c"
                    __dec_obj25=method_name_74;
                    method_name_74=(char*)come_increment_ref_count(((char*)(right_value106=make_generics_function(obj_type2_78,(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 95 "06str.c"
                    err_msg(info,"require to_string implementation(%s)",come_value_73->type->mClass->mName);
                    # 96 "06str.c"
                    exit(1);
                }
            }
            # 100 "06str.c"
            buf2_79=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 100, "buffer"))))))));
            come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value108,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 102 "06str.c"
            buffer_append_str(buf2_79,method_name_74);
            # 103 "06str.c"
            buffer_append_str(buf2_79,"(");
            # 104 "06str.c"
            buffer_append_str(buf2_79,come_value_73->c_value);
            # 105 "06str.c"
            buffer_append_str(buf2_79,")");
            # 107 "06str.c"
            type_80=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 107, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value110,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 108 "06str.c"
            type_80->mHeap=(_Bool)1;
            # 110 "06str.c"
            c_value_81=(char*)come_increment_ref_count(((char*)(right_value112=append_object_to_right_values(((char*)(right_value111=buffer_to_string(buf2_79))),(struct sType*)come_increment_ref_count(type_80),info))));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 112 "06str.c"
            buffer_append_str(buf_66,",");
            # 113 "06str.c"
            buffer_append_str(buf_66,c_value_81);
            come_call_finalizer3(come_value_73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            method_name_74 = come_decrement_ref_count2(method_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_80,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_81 = come_decrement_ref_count2(c_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 117 "06str.c"
    buffer_append_str(buf_66,")");
    # 119 "06str.c"
    type2_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 119, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(right_value113,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 120 "06str.c"
    type2_82->mHeap=(_Bool)1;
    # 122 "06str.c"
    __dec_obj26=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value115=buffer_to_string(buf_66))));
    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 123 "06str.c"
    __dec_obj27=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value116=append_object_to_right_values(come_value_65->c_value,(struct sType*)come_increment_ref_count(type2_82),info))));
    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 124 "06str.c"
    __dec_obj48=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(type2_82))));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 125 "06str.c"
    come_value_65->var=((void*)0);
    # 127 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    # 129 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    # 131 "06str.c"
    __result94__ = (_Bool)1;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sNodeph* __result57__;
void* right_value90;
void* right_value91;
struct list$1sNodeph* result_57;
struct list_item$1sNodeph* it_58;
_Bool _while_condtional10;
void* right_value96;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sNodeph*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional43=self==((void*)0),        _if_conditional43) {
            # 131 "./neo-c.h"
            __result57__ = __result_obj__ = ((void*)0);
            return __result57__;
        }
        # 133 "./neo-c.h"
        result_57=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value91=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value90=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value90,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value91,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_58=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional10=it_58!=((void*)0),        _while_condtional10) {
            # 137 "./neo-c.h"
            list$1sNodeph_add(result_57,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(it_58->item)))));
            if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 139 "./neo-c.h"
            it_58=it_58->next;
        }
        # 142 "./neo-c.h"
        __result62__ = __result_obj__ = result_57;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result62__;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result58__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result58__;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value92;
struct list_item$1sNodeph* litem_59;
struct sNode* __dec_obj20;
_Bool _if_conditional45;
void* right_value93;
struct list_item$1sNodeph* litem_60;
struct sNode* __dec_obj21;
void* right_value94;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj22;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sNodeph*));
right_value93 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sNodeph*));
right_value94 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional44=self->len==0,                _if_conditional44) {
                    # 147 "./neo-c.h"
                    litem_59=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value92=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value92,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_59->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_59->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj20=litem_59->item;
                    litem_59->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                    # 153 "./neo-c.h"
                    self->tail=litem_59;
                    # 154 "./neo-c.h"
                    self->head=litem_59;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional45=self->len==1,                    _if_conditional45) {
                        # 157 "./neo-c.h"
                        litem_60=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value93=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value93,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_60->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_60->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj21=litem_60->item;
                        litem_60->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        # 163 "./neo-c.h"
                        self->tail=litem_60;
                        # 164 "./neo-c.h"
                        self->head->next=litem_60;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value94=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value94,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_61->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_61->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj22=litem_61->item;
                        litem_61->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                        # 173 "./neo-c.h"
                        self->tail->next=litem_61;
                        # 174 "./neo-c.h"
                        self->tail=litem_61;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result59__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result59__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional46;
struct sNode* __result60__;
void* right_value95;
struct sNode* result_62;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&result_62, 0, sizeof(struct sNode*));
                # 3 "sNode_clone"
                # 2 "sNode_clone"
                if(_if_conditional46=self==(void*)0,                _if_conditional46) {
                    # 2 "sNode_clone"
                    __result60__ = __result_obj__ = (void*)0;
                    return __result60__;
                }
                # 3 "sNode_clone"
                result_62=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 5 "sNode_clone"
                # 4 "sNode_clone"
                if(_if_conditional47=self!=((void*)0)&&self->clone!=((void*)0),                _if_conditional47) {
                    # 4 "sNode_clone"
                    result_62->_protocol_obj=self->clone(self->_protocol_obj);
                }
                # 6 "sNode_clone"
                # 5 "sNode_clone"
                if(_if_conditional48=self!=((void*)0),                _if_conditional48) {
                    # 5 "sNode_clone"
                    result_62->finalize=self->finalize;
                }
                # 7 "sNode_clone"
                # 6 "sNode_clone"
                if(_if_conditional49=self!=((void*)0),                _if_conditional49) {
                    # 6 "sNode_clone"
                    result_62->clone=self->clone;
                }
                # 8 "sNode_clone"
                # 7 "sNode_clone"
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    # 7 "sNode_clone"
                    result_62->compile=self->compile;
                }
                # 9 "sNode_clone"
                # 8 "sNode_clone"
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    # 8 "sNode_clone"
                    result_62->sline=self->sline;
                }
                # 10 "sNode_clone"
                # 9 "sNode_clone"
                if(_if_conditional52=self!=((void*)0),                _if_conditional52) {
                    # 9 "sNode_clone"
                    result_62->sname=self->sname;
                }
                # 11 "sNode_clone"
                # 10 "sNode_clone"
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    # 10 "sNode_clone"
                    result_62->terminated=self->terminated;
                }
                # 12 "sNode_clone"
                # 11 "sNode_clone"
                if(_if_conditional54=self!=((void*)0),                _if_conditional54) {
                    # 11 "sNode_clone"
                    result_62->kind=self->kind;
                }
                # 12 "sNode_clone"
                __result61__ = __result_obj__ = result_62;
                if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result61__;
                if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional11;
struct list_item$1sNodeph* prev_it_64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_64, 0, sizeof(struct list_item$1sNodeph*));
        # 114 "./neo-c.h"
        it_63=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional11=it_63!=((void*)0),        _while_condtional11) {
            # 116 "./neo-c.h"
            prev_it_64=it_63;
            # 117 "./neo-c.h"
            it_63=it_63->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_64,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional58;
int __result66__;
int __result67__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional58=self==((void*)0),        _if_conditional58) {
            # 352 "./neo-c.h"
            __result66__ = 0;
            return __result66__;
        }
        # 354 "./neo-c.h"
        __result67__ = self->len;
        return __result67__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct sNode* result_68;
struct sNode* __result68__;
_Bool _if_conditional61;
struct sNode* __result69__;
struct sNode* result_69;
struct sNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional60=self==((void*)0),            _if_conditional60) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_68,0,sizeof(struct sNode*));
                # 279 "./neo-c.h"
                __result68__ = __result_obj__ = result_68;
                return __result68__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result69__ = __result_obj__ = self->it->item;
                return __result69__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_69,0,sizeof(struct sNode*));
            # 289 "./neo-c.h"
            __result70__ = __result_obj__ = result_69;
            return __result70__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result71__ = self==((void*)0)||self->it==((void*)0);
            return __result71__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional62;
struct sNode* result_71;
struct sNode* __result72__;
_Bool _if_conditional63;
struct sNode* __result73__;
struct sNode* result_72;
struct sNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional62=self==((void*)0)||self->it==((void*)0),            _if_conditional62) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_71,0,sizeof(struct sNode*));
                # 296 "./neo-c.h"
                __result72__ = __result_obj__ = result_71;
                return __result72__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result73__ = __result_obj__ = self->it->item;
                return __result73__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_72,0,sizeof(struct sNode*));
            # 307 "./neo-c.h"
            __result74__ = __result_obj__ = result_72;
            return __result74__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sFun* __result76__;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct sFun* __result77__;
struct sFun* __result78__;
struct sFun* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                # 1201 "./neo-c.h"
                hash_75=string_get_hash_key(((char*)key))%self->size;
                # 1202 "./neo-c.h"
                it_76=hash_75;
                # 1226 "./neo-c.h"
                while(_while_condtional12=(_Bool)1,                _while_condtional12) {
                    # 1224 "./neo-c.h"
                    # 1205 "./neo-c.h"
                    if(_if_conditional65=self->item_existance[it_76],                    _if_conditional65) {
                        # 1212 "./neo-c.h"
                        # 1207 "./neo-c.h"
                        if(_if_conditional66=string_equals(self->keys[it_76],key),                        _if_conditional66) {
                            # 1209 "./neo-c.h"
                            __result76__ = __result_obj__ = self->items[it_76];
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result76__;
                        }
                        # 1212 "./neo-c.h"
                        it_76++;
                        # 1220 "./neo-c.h"
                        # 1214 "./neo-c.h"
                        if(_if_conditional82=it_76>=self->size,                        _if_conditional82) {
                            # 1215 "./neo-c.h"
                            it_76=0;
                        }
                        else {
                            # 1220 "./neo-c.h"
                            # 1217 "./neo-c.h"
                            if(_if_conditional83=it_76==hash_75,                            _if_conditional83) {
                                # 1218 "./neo-c.h"
                                __result77__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result77__;
                            }
                        }
                    }
                    else {
                        # 1222 "./neo-c.h"
                        __result78__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result78__;
                    }
                }
                # 1226 "./neo-c.h"
                __result79__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result79__;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional67=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional67) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional68) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional69=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional69) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional70=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional70) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional71=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional71) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional72=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional72) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional73=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional73) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional76=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional76) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional77=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional77) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional78=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional78) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional79=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional79) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional80=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional80) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional81=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional81) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional74;
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional74=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional74) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional75=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional75) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional85;
int __result80__;
int __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 354 "./neo-c.h"
                    # 351 "./neo-c.h"
                    if(_if_conditional85=self==((void*)0),                    _if_conditional85) {
                        # 352 "./neo-c.h"
                        __result80__ = 0;
                        return __result80__;
                    }
                    # 354 "./neo-c.h"
                    __result81__ = self->len;
                    return __result81__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional87;
struct sType* __result82__;
void* right_value117;
struct sType* result_83;
_Bool _if_conditional88;
_Bool _if_conditional89;
void* right_value124;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional93;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional97;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj34;
_Bool _if_conditional98;
void* right_value129;
char* __dec_obj35;
_Bool _if_conditional99;
void* right_value130;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional100;
void* right_value131;
struct list$1sNodeph* __dec_obj37;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value132;
struct list$1sTypeph* __dec_obj38;
_Bool _if_conditional103;
void* right_value139;
struct list$1charph* __dec_obj42;
_Bool _if_conditional107;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj43;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value141;
struct sNode* __dec_obj44;
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
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
void* right_value142;
struct sNode* __dec_obj45;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value143;
char* __dec_obj46;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value144;
char* __dec_obj47;
_Bool _if_conditional148;
struct sType* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&result_83, 0, sizeof(struct sType*));
right_value124 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional87=self==(void*)0,        _if_conditional87) {
            # 2 "sType_clone"
            __result82__ = __result_obj__ = (void*)0;
            return __result82__;
        }
        # 3 "sType_clone"
        result_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 4 "sType_clone"
            result_83->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional89=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional89) {
            # 5 "sType_clone"
            __dec_obj31=result_83->mMultipleTypes;
            result_83->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value124=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value124,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional93=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional93) {
            # 6 "sType_clone"
            __dec_obj33=result_83->mNoSolvedGenericsType;
            result_83->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value127,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional97=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional97) {
            # 7 "sType_clone"
            __dec_obj34=result_83->mOriginalLoadVarType;
            result_83->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj34,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional98=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional98) {
            # 8 "sType_clone"
            __dec_obj35=result_83->mGenericsName;
            result_83->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value129=string_clone(self->mGenericsName))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional99=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional99) {
            # 9 "sType_clone"
            __dec_obj36=result_83->mGenericsTypes;
            result_83->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value130=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional100=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional100) {
            # 10 "sType_clone"
            __dec_obj37=result_83->mArrayNum;
            result_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value131=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj37,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value131,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            # 11 "sType_clone"
            result_83->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional102=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional102) {
            # 12 "sType_clone"
            __dec_obj38=result_83->mParamTypes;
            result_83->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional103=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional103) {
            # 13 "sType_clone"
            __dec_obj42=result_83->mParamNames;
            result_83->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj42,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional107=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional107) {
            # 14 "sType_clone"
            __dec_obj43=result_83->mResultType;
            result_83->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value140,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            # 15 "sType_clone"
            result_83->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional109=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional109) {
            # 16 "sType_clone"
            __dec_obj44=result_83->mAlignas;
            result_83->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(self->mAlignas))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            # 17 "sType_clone"
            result_83->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            # 18 "sType_clone"
            result_83->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            # 19 "sType_clone"
            result_83->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            # 20 "sType_clone"
            result_83->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            # 21 "sType_clone"
            result_83->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            # 22 "sType_clone"
            result_83->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            # 23 "sType_clone"
            result_83->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            # 24 "sType_clone"
            result_83->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            # 25 "sType_clone"
            result_83->mRecord=self->mRecord;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            # 26 "sType_clone"
            result_83->mExtern=self->mExtern;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            # 27 "sType_clone"
            result_83->mRestrict=self->mRestrict;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            # 28 "sType_clone"
            result_83->mImmutable=self->mImmutable;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            # 29 "sType_clone"
            result_83->mHeap=self->mHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            # 30 "sType_clone"
            result_83->mDummyHeap=self->mDummyHeap;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            # 31 "sType_clone"
            result_83->mDelegate=self->mDelegate;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            # 32 "sType_clone"
            result_83->mShare=self->mShare;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            # 33 "sType_clone"
            result_83->mClone=self->mClone;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            # 34 "sType_clone"
            result_83->mNoHeap=self->mNoHeap;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            # 35 "sType_clone"
            result_83->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            # 36 "sType_clone"
            result_83->mRefference=self->mRefference;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            # 37 "sType_clone"
            result_83->mException=self->mException;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            # 38 "sType_clone"
            result_83->mPointerNum=self->mPointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            # 39 "sType_clone"
            result_83->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            # 40 "sType_clone"
            result_83->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional134=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional134) {
            # 41 "sType_clone"
            __dec_obj45=result_83->mSizeNum;
            result_83->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(self->mSizeNum))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional135=self!=((void*)0),        _if_conditional135) {
            # 42 "sType_clone"
            result_83->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional136=self!=((void*)0),        _if_conditional136) {
            # 43 "sType_clone"
            result_83->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional137=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional137) {
            # 44 "sType_clone"
            __dec_obj46=result_83->mOriginalTypeName;
            result_83->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value143=string_clone(self->mOriginalTypeName))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional138=self!=((void*)0),        _if_conditional138) {
            # 45 "sType_clone"
            result_83->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional139=self!=((void*)0),        _if_conditional139) {
            # 46 "sType_clone"
            result_83->mFunctionParam=self->mFunctionParam;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional140=self!=((void*)0),        _if_conditional140) {
            # 47 "sType_clone"
            result_83->mAllocaValue=self->mAllocaValue;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional141=self!=((void*)0),        _if_conditional141) {
            # 48 "sType_clone"
            result_83->mGenericsStruct=self->mGenericsStruct;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional142=self!=((void*)0),        _if_conditional142) {
            # 49 "sType_clone"
            result_83->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional143=self!=((void*)0),        _if_conditional143) {
            # 50 "sType_clone"
            result_83->mComeMemCore=self->mComeMemCore;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional144=self!=((void*)0),        _if_conditional144) {
            # 51 "sType_clone"
            result_83->mInline=self->mInline;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional145=self!=((void*)0),        _if_conditional145) {
            # 52 "sType_clone"
            result_83->mNullValue=self->mNullValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional146=self!=((void*)0),        _if_conditional146) {
            # 53 "sType_clone"
            result_83->mGuardValue=self->mGuardValue;
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional147=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional147) {
            # 54 "sType_clone"
            __dec_obj47=result_83->mAsmName;
            result_83->mAsmName=(char*)come_increment_ref_count(((char*)(right_value144=string_clone(self->mAsmName))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 56 "sType_clone"
        # 55 "sType_clone"
        if(_if_conditional148=self!=((void*)0),        _if_conditional148) {
            # 55 "sType_clone"
            result_83->mArrayPointerType=self->mArrayPointerType;
        }
        # 56 "sType_clone"
        __result93__ = __result_obj__ = result_83;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result93__;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional90;
struct list$1sTypeph* __result83__;
void* right_value118;
void* right_value119;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
_Bool _while_condtional13;
void* right_value123;
struct list$1sTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_84, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
right_value123 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional90=self==((void*)0),                _if_conditional90) {
                    # 131 "./neo-c.h"
                    __result83__ = __result_obj__ = ((void*)0);
                    return __result83__;
                }
                # 133 "./neo-c.h"
                result_84=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value118=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value118,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value119,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_85=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional13=it_85!=((void*)0),                _while_condtional13) {
                    # 137 "./neo-c.h"
                    list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(it_85->item)))));
                    come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_85=it_85->next;
                }
                # 142 "./neo-c.h"
                __result86__ = __result_obj__ = result_84;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result86__;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result84__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result84__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional91;
void* right_value120;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj28;
_Bool _if_conditional92;
void* right_value121;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj29;
void* right_value122;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj30;
struct list$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
right_value121 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
right_value122 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional91=self->len==0,                        _if_conditional91) {
                            # 147 "./neo-c.h"
                            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value120=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value120,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_86->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_86->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj28=litem_86->item;
                            litem_86->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_86;
                            # 154 "./neo-c.h"
                            self->head=litem_86;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional92=self->len==1,                            _if_conditional92) {
                                # 157 "./neo-c.h"
                                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value121,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_87->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_87->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj29=litem_87->item;
                                litem_87->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_87;
                                # 164 "./neo-c.h"
                                self->head->next=litem_87;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value122,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_88->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_88->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj30=litem_88->item;
                                litem_88->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_88;
                                # 174 "./neo-c.h"
                                self->tail=litem_88;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result85__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result85__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_89;
_Bool _while_condtional14;
struct list_item$1sTypeph* prev_it_90;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sTypeph*));
                # 114 "./neo-c.h"
                it_89=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional14=it_89!=((void*)0),                _while_condtional14) {
                    # 116 "./neo-c.h"
                    prev_it_90=it_89;
                    # 117 "./neo-c.h"
                    it_89=it_89->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_90,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional94;
struct tuple1$1sTypeph* __result87__;
void* right_value125;
struct tuple1$1sTypeph* result_91;
_Bool _if_conditional96;
void* right_value126;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_91, 0, sizeof(struct tuple1$1sTypeph*));
right_value126 = (void*)0;
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional94=self==(void*)0,                _if_conditional94) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result87__ = __result_obj__ = (void*)0;
                    return __result87__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_91=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value125,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional96=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional96) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj32=result_91->v1;
                    result_91->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result88__ = __result_obj__ = result_91;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result88__;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional95=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional95) {
                        # 0 "tuple1$1sTypeph_finalize"
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional104;
struct list$1charph* __result89__;
void* right_value133;
void* right_value134;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
_Bool _while_condtional15;
void* right_value138;
struct list$1charph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&it_93, 0, sizeof(struct list_item$1charph*));
right_value138 = (void*)0;
                # 133 "./neo-c.h"
                # 130 "./neo-c.h"
                if(_if_conditional104=self==((void*)0),                _if_conditional104) {
                    # 131 "./neo-c.h"
                    __result89__ = __result_obj__ = ((void*)0);
                    return __result89__;
                }
                # 133 "./neo-c.h"
                result_92=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value133,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 135 "./neo-c.h"
                it_93=self->head;
                # 142 "./neo-c.h"
                while(_while_condtional15=it_93!=((void*)0),                _while_condtional15) {
                    # 137 "./neo-c.h"
                    list$1charph_add(result_92,(char*)come_increment_ref_count(((char*)(right_value138=string_clone(it_93->item)))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 139 "./neo-c.h"
                    it_93=it_93->next;
                }
                # 142 "./neo-c.h"
                __result92__ = __result_obj__ = result_92;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result92__;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 95 "./neo-c.h"
                    self->head=((void*)0);
                    # 96 "./neo-c.h"
                    self->tail=((void*)0);
                    # 97 "./neo-c.h"
                    self->len=0;
                    # 99 "./neo-c.h"
                    __result90__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result90__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional105;
void* right_value135;
struct list_item$1charph* litem_94;
char* __dec_obj39;
_Bool _if_conditional106;
void* right_value136;
struct list_item$1charph* litem_95;
char* __dec_obj40;
void* right_value137;
struct list_item$1charph* litem_96;
char* __dec_obj41;
struct list$1charph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
right_value136 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
                        # 177 "./neo-c.h"
                        # 146 "./neo-c.h"
                        if(_if_conditional105=self->len==0,                        _if_conditional105) {
                            # 147 "./neo-c.h"
                            litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value135,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            # 149 "./neo-c.h"
                            litem_94->prev=((void*)0);
                            # 150 "./neo-c.h"
                            litem_94->next=((void*)0);
                            # 151 "./neo-c.h"
                            __dec_obj39=litem_94->item;
                            litem_94->item=(char*)come_increment_ref_count(item);
                            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 153 "./neo-c.h"
                            self->tail=litem_94;
                            # 154 "./neo-c.h"
                            self->head=litem_94;
                        }
                        else {
                            # 177 "./neo-c.h"
                            # 156 "./neo-c.h"
                            if(_if_conditional106=self->len==1,                            _if_conditional106) {
                                # 157 "./neo-c.h"
                                litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value136,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 159 "./neo-c.h"
                                litem_95->prev=self->head;
                                # 160 "./neo-c.h"
                                litem_95->next=((void*)0);
                                # 161 "./neo-c.h"
                                __dec_obj40=litem_95->item;
                                litem_95->item=(char*)come_increment_ref_count(item);
                                __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 163 "./neo-c.h"
                                self->tail=litem_95;
                                # 164 "./neo-c.h"
                                self->head->next=litem_95;
                            }
                            else {
                                # 167 "./neo-c.h"
                                litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value137,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 169 "./neo-c.h"
                                litem_96->prev=self->tail;
                                # 170 "./neo-c.h"
                                litem_96->next=((void*)0);
                                # 171 "./neo-c.h"
                                __dec_obj41=litem_96->item;
                                litem_96->item=(char*)come_increment_ref_count(item);
                                __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 173 "./neo-c.h"
                                self->tail->next=litem_96;
                                # 174 "./neo-c.h"
                                self->tail=litem_96;
                            }
                        }
                        # 177 "./neo-c.h"
                        self->len++;
                        # 179 "./neo-c.h"
                        __result91__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result91__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_97;
_Bool _while_condtional16;
struct list_item$1charph* prev_it_98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_97, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_98, 0, sizeof(struct list_item$1charph*));
                # 114 "./neo-c.h"
                it_97=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional16=it_97!=((void*)0),                _while_condtional16) {
                    # 116 "./neo-c.h"
                    prev_it_98=it_97;
                    # 117 "./neo-c.h"
                    it_97=it_97->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_98,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value146;
char* __dec_obj49;
struct sCharNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    # 141 "06str.c"
    self->value=value;
    # 143 "06str.c"
    self->sline=info->sline;
    # 144 "06str.c"
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 147 "06str.c"
    __result95__ = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result95__;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCharNode_terminated(struct sCharNode* self){
void* __result_obj__;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
    # 149 "06str.c"
    __result96__ = (_Bool)0;
    return __result96__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__;
void* right_value147;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    # 154 "06str.c"
    __result97__ = __result_obj__ = ((char*)(right_value147=__builtin_string("sCharNode")));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct CVALUE* come_value_99;
void* right_value149;
char* __dec_obj50;
void* right_value150;
void* right_value151;
struct sType* __dec_obj51;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
    # 159 "06str.c"
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 159, "CVALUE"))));
    come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 161 "06str.c"
    __dec_obj50=come_value_99->c_value;
    come_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%d",self->value))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 162 "06str.c"
    __dec_obj51=come_value_99->type;
    come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 162, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 163 "06str.c"
    come_value_99->var=((void*)0);
    # 165 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
    # 167 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_99->c_value);
    # 169 "06str.c"
    __result98__ = (_Bool)1;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __dec_obj52;
struct sWCharNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    # 179 "06str.c"
    self->value=value;
    # 181 "06str.c"
    self->sline=info->sline;
    # 182 "06str.c"
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(info->sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 185 "06str.c"
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result99__;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sWCharNode_terminated(struct sWCharNode* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    # 187 "06str.c"
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__;
void* right_value153;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    # 192 "06str.c"
    __result101__ = __result_obj__ = ((char*)(right_value153=__builtin_string("sWCharNode")));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
struct CVALUE* come_value_100;
void* right_value155;
char* __dec_obj53;
void* right_value156;
void* right_value157;
struct sType* __dec_obj54;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
    # 197 "06str.c"
    come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 197, "CVALUE"))));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 199 "06str.c"
    __dec_obj53=come_value_100->c_value;
    come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("L'%lc'",self->value))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 200 "06str.c"
    __dec_obj54=come_value_100->type;
    come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value156=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 200, "sType")))),"wchar_t",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 201 "06str.c"
    come_value_100->var=((void*)0);
    # 203 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
    # 205 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_100->c_value);
    # 207 "06str.c"
    __result102__ = (_Bool)1;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result102__;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
unsigned int* __dec_obj55;
void* right_value158;
char* __dec_obj56;
struct sWStringNode* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
    # 217 "06str.c"
    __dec_obj55=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    # 219 "06str.c"
    self->sline=sline;
    # 220 "06str.c"
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 223 "06str.c"
    __result103__ = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result103__;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sWStringNode_terminated(struct sWStringNode* self){
void* __result_obj__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
    # 225 "06str.c"
    __result104__ = (_Bool)0;
    return __result104__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__;
void* right_value159;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    # 230 "06str.c"
    __result105__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sWStringNode")));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value160;
struct CVALUE* come_value_101;
void* right_value161;
char* __dec_obj57;
void* right_value162;
void* right_value163;
struct sType* __dec_obj58;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
    # 235 "06str.c"
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 235, "CVALUE"))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 237 "06str.c"
    __dec_obj57=come_value_101->c_value;
    come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("L'%ls'",self->value))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 238 "06str.c"
    __dec_obj58=come_value_101->type;
    come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 238, "sType")))),"wchar_t*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 239 "06str.c"
    come_value_101->var=((void*)0);
    # 241 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
    # 243 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_101->c_value);
    # 245 "06str.c"
    __result106__ = (_Bool)1;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __dec_obj59;
void* right_value165;
char* __dec_obj60;
struct sRegexNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 257 "06str.c"
    __dec_obj59=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(str))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 258 "06str.c"
    self->global=global;
    # 259 "06str.c"
    self->ignore_case=ignore_case;
    # 261 "06str.c"
    self->sline=sline;
    # 262 "06str.c"
    __dec_obj60=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(info->sname))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 265 "06str.c"
    __result107__ = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result107__;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

_Bool sRegexNode_terminated(struct sRegexNode* self){
void* __result_obj__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    # 267 "06str.c"
    __result108__ = (_Bool)0;
    return __result108__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__;
void* right_value166;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 272 "06str.c"
    __result109__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sRegexNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value167;
struct CVALUE* come_value_102;
void* right_value168;
void* right_value169;
void* right_value170;
void* right_value171;
void* right_value172;
char* __dec_obj61;
void* right_value173;
void* right_value174;
struct sType* __dec_obj62;
void* right_value175;
char* __dec_obj63;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value168 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    # 277 "06str.c"
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 277, "CVALUE"))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 279 "06str.c"
    __dec_obj61=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value168=__builtin_string("1"))):((char*)(right_value169=__builtin_string("0"))),self->global?((char*)(right_value170=__builtin_string("1"))):((char*)(right_value171=__builtin_string("0")))))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 280 "06str.c"
    __dec_obj62=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 280, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 281 "06str.c"
    come_value_102->type->mPointerNum=1;
    # 282 "06str.c"
    come_value_102->type->mHeap=(_Bool)1;
    # 283 "06str.c"
    come_value_102->var=((void*)0);
    # 285 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    # 287 "06str.c"
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    # 289 "06str.c"
    __dec_obj63=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value175=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(come_value_102->type),info))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 291 "06str.c"
    __result110__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj64;
void* right_value176;
char* __dec_obj65;
struct sListNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    # 301 "06str.c"
    __dec_obj64=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    # 303 "06str.c"
    self->sline=info->sline;
    # 304 "06str.c"
    __dec_obj65=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 307 "06str.c"
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sListNode_terminated(struct sListNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    # 309 "06str.c"
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__;
void* right_value177;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    # 314 "06str.c"
    __result113__ = __result_obj__ = ((char*)(right_value177=__builtin_string("sListNode")));
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_103;
void* right_value178;
void* right_value179;
struct list$1CVALUEph* params_106;
struct sType* list_element_type_107;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_109;
_Bool _if_conditional157;
_Bool __result115__;
void* right_value180;
struct CVALUE* come_value_110;
_Bool _if_conditional158;
void* right_value181;
void* right_value182;
struct sType* __dec_obj66;
void* right_value183;
struct sType* type_values_111;
void* right_value187;
static int list_value_num_115=0;
void* right_value188;
char* var_name_116;
void* right_value189;
struct sVar* var__117;
void* right_value190;
void* right_value191;
void* right_value192;
struct buffer* source_118;
int i_119;
struct list$1CVALUEph* o2_saved_120;
struct CVALUE* it_123;
_Bool _if_conditional166;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
struct sType* list_type_129;
void* right_value201;
void* right_value202;
struct sType* obj_type_133;
char* fun_name_134;
void* right_value203;
void* right_value204;
void* right_value205;
char* generics_fun_name_135;
struct sFun* fun_136;
_Bool _if_conditional171;
void* right_value206;
void* right_value207;
char* __dec_obj73;
_Bool _if_conditional172;
_Bool __result129__;
void* right_value208;
struct sType* result_type_137;
struct sType* type_138;
void* right_value209;
struct CVALUE* obj_value_139;
void* right_value210;
void* right_value211;
struct buffer* num_string_140;
void* right_value212;
struct sType* type2_141;
void* right_value213;
char* type_name_142;
void* right_value214;
void* right_value215;
char* __dec_obj74;
void* right_value216;
struct sType* type3_143;
void* right_value217;
struct sType* __dec_obj75;
void* right_value218;
char* __dec_obj76;
void* right_value219;
void* right_value220;
struct list$1CVALUEph* come_params_144;
_Bool _if_conditional175;
void* right_value221;
struct CVALUE* come_value2_148;
void* right_value222;
char* __dec_obj77;
struct sType* __dec_obj78;
void* right_value223;
struct CVALUE* come_value3_149;
void* right_value224;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value225;
void* right_value226;
struct buffer* buf_150;
int j_151;
struct list$1CVALUEph* o2_saved_152;
struct CVALUE* it_153;
_Bool _if_conditional176;
void* right_value227;
struct CVALUE* come_value4_154;
void* right_value228;
char* __dec_obj81;
_Bool _if_conditional177;
void* right_value229;
void* right_value230;
char* __dec_obj82;
void* right_value231;
struct sType* __dec_obj83;
void* right_value232;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_103, 0, sizeof(struct list$1sNodeph*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&params_106, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_107, 0, sizeof(struct sType*));
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_109, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&come_value_110, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&type_values_111, 0, sizeof(struct sType*));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&var_name_116, 0, sizeof(char*));
right_value189 = (void*)0;
memset(&var__117, 0, sizeof(struct sVar*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
memset(&source_118, 0, sizeof(struct buffer*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1CVALUEph*));
memset(&it_123, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&list_type_129, 0, sizeof(struct sType*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&obj_type_133, 0, sizeof(struct sType*));
memset(&fun_name_134, 0, sizeof(char*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&generics_fun_name_135, 0, sizeof(char*));
memset(&fun_136, 0, sizeof(struct sFun*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&type_138, 0, sizeof(struct sType*));
right_value209 = (void*)0;
memset(&obj_value_139, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&num_string_140, 0, sizeof(struct buffer*));
right_value212 = (void*)0;
memset(&type2_141, 0, sizeof(struct sType*));
right_value213 = (void*)0;
memset(&type_name_142, 0, sizeof(char*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&type3_143, 0, sizeof(struct sType*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&come_params_144, 0, sizeof(struct list$1CVALUEph*));
right_value221 = (void*)0;
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&come_value3_149, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&buf_150, 0, sizeof(struct buffer*));
memset(&j_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1CVALUEph*));
memset(&it_153, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
memset(&come_value4_154, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 319 "06str.c"
    list_elements_103=self->list_elements;
    # 321 "06str.c"
    params_106=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value179=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value178=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 321, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value178,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 322 "06str.c"
    list_element_type_107=((void*)0);
    # 341 "06str.c"
    for(    o2_saved_108=(list_elements_103),it_109=list$1sNodeph_begin((o2_saved_108));    !list$1sNodeph_end((o2_saved_108));    it_109=list$1sNodeph_next((o2_saved_108))    ){
        # 329 "06str.c"
        # 325 "06str.c"
        if(_if_conditional157=!node_compile(it_109,info),        _if_conditional157) {
            # 326 "06str.c"
            __result115__ = (_Bool)0;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
        # 329 "06str.c"
        come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value180,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 330 "06str.c"
        dec_stack_ptr(1,info);
        # 336 "06str.c"
        # 332 "06str.c"
        if(list_element_type_107) {
            # 333 "06str.c"
            check_assign_type(((char*)(right_value181=xsprintf("invalid list element type"))),list_element_type_107,come_value_110->type,come_value_110,(_Bool)0,(_Bool)1,info);
            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 336 "06str.c"
        list$1CVALUEph_push_back(params_106,(struct CVALUE*)come_increment_ref_count(come_value_110));
        # 338 "06str.c"
        __dec_obj66=list_element_type_107;
        list_element_type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(come_value_110->type))));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value182,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 341 "06str.c"
    type_values_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(list_element_type_107))));
    come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 342 "06str.c"
    list$1sNodeph_push_back(type_values_111->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=create_int_node(list$1CVALUEph_length(params_106),info)))));
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 343 "06str.c"
    type_values_111->mHeap=(_Bool)0;
    # 345 "06str.c"
    # 346 "06str.c"
    var_name_116=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("__list_values%d__",++list_value_num_115))));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 348 "06str.c"
    add_variable_to_table(var_name_116,(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type_values_111)))),info);
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 350 "06str.c"
    var__117=get_variable_from_table(info->lv_table,var_name_116);
    # 352 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value190=make_define_var(type_values_111,var__117->mCValueName,(_Bool)0,info))));
    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 354 "06str.c"
    source_118=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value192=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 354, "buffer"))))))));
    come_call_finalizer3(right_value191,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value192,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 356 "06str.c"
    buffer_append_str(source_118,"{");
    # 358 "06str.c"
    i_119=0;
    # 369 "06str.c"
    for(    o2_saved_120=(struct list$1CVALUEph*)come_increment_ref_count((params_106)),it_123=list$1CVALUEph_begin((o2_saved_120));    !list$1CVALUEph_end((o2_saved_120));    it_123=list$1CVALUEph_next((o2_saved_120))    ){
        # 366 "06str.c"
        # 360 "06str.c"
        if(list_element_type_107->mHeap) {
            # 361 "06str.c"
            buffer_append_str(source_118,((char*)(right_value193=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_119), "06str.c", 361, 0))->c_value))));
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 364 "06str.c"
            buffer_append_str(source_118,((char*)(right_value194=xsprintf("%s[%d]=%s;\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_119), "06str.c", 364, 1))->c_value))));
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 366 "06str.c"
        i_119++;
    }
    come_call_finalizer3(o2_saved_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    # 369 "06str.c"
    buffer_append_str(source_118,"}");
    # 371 "06str.c"
    add_come_code(info,"%s",((char*)(right_value195=buffer_to_string(source_118))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 373 "06str.c"
    list_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 373, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 374 "06str.c"
    list$1sTypeph_push_back(list_type_129->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(list_element_type_107)))));
    come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 376 "06str.c"
    obj_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(list_type_129))));
    come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 377 "06str.c"
    fun_name_134="initialize_with_values";
    # 379 "06str.c"
    generics_fun_name_135=(char*)come_increment_ref_count(((char*)(right_value205=string_to_string(((char*)(right_value204=make_generics_function(obj_type_133,(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(fun_name_134)))),info,(_Bool)1)))))));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 381 "06str.c"
    fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
    # 394 "06str.c"
    # 383 "06str.c"
    if(_if_conditional171=fun_136==((void*)0),    _if_conditional171) {
        # 384 "06str.c"
        __dec_obj73=generics_fun_name_135;
        generics_fun_name_135=(char*)come_increment_ref_count(((char*)(right_value207=create_method_name(obj_type_133,(_Bool)0,((char*)(right_value206=__builtin_string(fun_name_134))),info,(_Bool)1))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 386 "06str.c"
        fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
        # 392 "06str.c"
        # 388 "06str.c"
        if(_if_conditional172=fun_136==((void*)0),        _if_conditional172) {
            # 389 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_135,info->come_fun->mName);
            # 390 "06str.c"
            __result129__ = (_Bool)1;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result129__;
        }
    }
    # 394 "06str.c"
    result_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(fun_136->mResultType))));
    come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 395 "06str.c"
    result_type_137->mStatic=(_Bool)0;
    # 397 "06str.c"
    type_138=list_type_129;
    # 399 "06str.c"
    obj_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 399, "CVALUE"))));
    come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 401 "06str.c"
    num_string_140=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value210=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 401, "buffer"))))))));
    come_call_finalizer3(right_value210,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 403 "06str.c"
    buffer_append_str(num_string_140,"1");
    # 405 "06str.c"
    type2_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=solve_generics(type_138,type_138,info))));
    come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 407 "06str.c"
    type_name_142=(char*)come_increment_ref_count(((char*)(right_value213=make_type_name_string(type2_141,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 409 "06str.c"
    __dec_obj74=obj_value_139->c_value;
    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value215=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_142,type_name_142,((char*)(right_value214=buffer_to_string(num_string_140))),info->sname,info->sline,type_name_142))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 411 "06str.c"
    type3_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_clone(type2_141))));
    come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 412 "06str.c"
    type3_143->mPointerNum++;
    # 413 "06str.c"
    type3_143->mHeap=(_Bool)1;
    # 414 "06str.c"
    type2_141->mHeap=(_Bool)1;
    # 415 "06str.c"
    __dec_obj75=obj_value_139->type;
    obj_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(type2_141))));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 416 "06str.c"
    __dec_obj76=obj_value_139->c_value;
    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value218=append_object_to_right_values(obj_value_139->c_value,(struct sType*)come_increment_ref_count(type3_143),info))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 417 "06str.c"
    obj_value_139->type->mPointerNum++;
    # 418 "06str.c"
    obj_value_139->var=((void*)0);
    # 420 "06str.c"
    come_params_144=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value220=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value219=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 420, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value219,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value220,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 425 "06str.c"
    # 422 "06str.c"
    if(_if_conditional175=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 422, 2))->mHeap&&obj_value_139->type->mHeap,    _if_conditional175) {
        # 423 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 423, 3)),obj_value_139->type,obj_value_139,info);
    }
    # 425 "06str.c"
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(obj_value_139));
    # 427 "06str.c"
    come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 427, "CVALUE"))));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 429 "06str.c"
    __dec_obj77=come_value2_148->c_value;
    come_value2_148->c_value=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("%d",list$1CVALUEph_length(params_106)))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 430 "06str.c"
    __dec_obj78=come_value2_148->type;
    come_value2_148->type=((void*)0);
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 431 "06str.c"
    come_value2_148->var=((void*)0);
    # 433 "06str.c"
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value2_148));
    # 435 "06str.c"
    come_value3_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 435, "CVALUE"))));
    come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 437 "06str.c"
    __dec_obj79=come_value3_149->c_value;
    come_value3_149->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s",var__117->mCValueName))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 438 "06str.c"
    __dec_obj80=come_value3_149->type;
    come_value3_149->type=((void*)0);
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 439 "06str.c"
    come_value3_149->var=((void*)0);
    # 441 "06str.c"
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value3_149));
    # 443 "06str.c"
    buf_150=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value226=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value225=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 443, "buffer"))))))));
    come_call_finalizer3(right_value225,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value226,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 445 "06str.c"
    buffer_append_str(buf_150,generics_fun_name_135);
    # 446 "06str.c"
    buffer_append_str(buf_150,"(");
    # 448 "06str.c"
    j_151=0;
    # 458 "06str.c"
    for(    o2_saved_152=(struct list$1CVALUEph*)come_increment_ref_count((come_params_144)),it_153=list$1CVALUEph_begin((o2_saved_152));    !list$1CVALUEph_end((o2_saved_152));    it_153=list$1CVALUEph_next((o2_saved_152))    ){
        # 450 "06str.c"
        buffer_append_str(buf_150,it_153->c_value);
        # 456 "06str.c"
        # 452 "06str.c"
        if(_if_conditional176=j_151!=list$1CVALUEph_length(come_params_144)-1,        _if_conditional176) {
            # 453 "06str.c"
            buffer_append_str(buf_150,",");
        }
        # 456 "06str.c"
        j_151++;
    }
    come_call_finalizer3(o2_saved_152,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    # 458 "06str.c"
    buffer_append_str(buf_150,")");
    # 460 "06str.c"
    come_value4_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 460, "CVALUE"))));
    come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 462 "06str.c"
    __dec_obj81=come_value4_154->c_value;
    come_value4_154->c_value=(char*)come_increment_ref_count(((char*)(right_value228=buffer_to_string(buf_150))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 468 "06str.c"
    # 464 "06str.c"
    if(result_type_137->mHeap) {
        # 465 "06str.c"
        __dec_obj82=come_value4_154->c_value;
        come_value4_154->c_value=(char*)come_increment_ref_count(((char*)(right_value230=append_object_to_right_values(((char*)(right_value229=buffer_to_string(buf_150))),(struct sType*)come_increment_ref_count(result_type_137),info))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 468 "06str.c"
    __dec_obj83=come_value4_154->type;
    come_value4_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(result_type_137))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 469 "06str.c"
    come_value4_154->type->mStatic=(_Bool)0;
    # 470 "06str.c"
    come_value4_154->var=((void*)0);
    # 472 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value232=buffer_to_string(buf_150))));
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 474 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_154));
    # 476 "06str.c"
    __result132__ = (_Bool)1;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_144,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_144,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
        # 95 "./neo-c.h"
        self->head=((void*)0);
        # 96 "./neo-c.h"
        self->tail=((void*)0);
        # 97 "./neo-c.h"
        self->len=0;
        # 99 "./neo-c.h"
        __result114__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result114__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_104;
_Bool _while_condtional17;
struct list_item$1CVALUEph* prev_it_105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_105, 0, sizeof(struct list_item$1CVALUEph*));
            # 114 "./neo-c.h"
            it_104=self->head;
            # 120 "./neo-c.h"
            while(_while_condtional17=it_104!=((void*)0),            _while_condtional17) {
                # 116 "./neo-c.h"
                prev_it_105=it_104;
                # 117 "./neo-c.h"
                it_104=it_104->next;
                # 118 "./neo-c.h"
                come_call_finalizer3(prev_it_105,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional159;
void* right_value184;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj67;
_Bool _if_conditional160;
void* right_value185;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj68;
void* right_value186;
struct list_item$1sNodeph* litem_114;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sNodeph*));
right_value185 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1sNodeph*));
right_value186 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1sNodeph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional159=self->len==0,        _if_conditional159) {
            # 217 "./neo-c.h"
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value184=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 217, "list_item$1sNodeph"))));
            come_call_finalizer3(right_value184,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_112->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_112->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj67=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
            # 223 "./neo-c.h"
            self->tail=litem_112;
            # 224 "./neo-c.h"
            self->head=litem_112;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional160=self->len==1,            _if_conditional160) {
                # 227 "./neo-c.h"
                litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value185=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 227, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value185,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_113->prev=self->head;
                # 230 "./neo-c.h"
                litem_113->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj68=litem_113->item;
                litem_113->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                # 233 "./neo-c.h"
                self->tail=litem_113;
                # 234 "./neo-c.h"
                self->head->next=litem_113;
            }
            else {
                # 237 "./neo-c.h"
                litem_114=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value186=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 237, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value186,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_114->prev=self->tail;
                # 240 "./neo-c.h"
                litem_114->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj69=litem_114->item;
                litem_114->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
                # 243 "./neo-c.h"
                self->tail->next=litem_114;
                # 244 "./neo-c.h"
                self->tail=litem_114;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result116__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result116__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional161;
int __result117__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            # 352 "./neo-c.h"
            __result117__ = 0;
            return __result117__;
        }
        # 354 "./neo-c.h"
        __result118__ = self->len;
        return __result118__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional162;
struct CVALUE* result_121;
struct CVALUE* __result119__;
_Bool _if_conditional163;
struct CVALUE* __result120__;
struct CVALUE* result_122;
struct CVALUE* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct CVALUE*));
memset(&result_122, 0, sizeof(struct CVALUE*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional162=self==((void*)0),        _if_conditional162) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_121,0,sizeof(struct CVALUE*));
            # 279 "./neo-c.h"
            __result119__ = __result_obj__ = result_121;
            return __result119__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result120__ = __result_obj__ = self->it->item;
            return __result120__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_122,0,sizeof(struct CVALUE*));
        # 289 "./neo-c.h"
        __result121__ = __result_obj__ = result_122;
        return __result121__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result122__ = self==((void*)0)||self->it==((void*)0);
        return __result122__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional164;
struct CVALUE* result_124;
struct CVALUE* __result123__;
_Bool _if_conditional165;
struct CVALUE* __result124__;
struct CVALUE* result_125;
struct CVALUE* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct CVALUE*));
memset(&result_125, 0, sizeof(struct CVALUE*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional164=self==((void*)0)||self->it==((void*)0),        _if_conditional164) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_124,0,sizeof(struct CVALUE*));
            # 296 "./neo-c.h"
            __result123__ = __result_obj__ = result_124;
            return __result123__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result124__ = __result_obj__ = self->it->item;
            return __result124__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_125,0,sizeof(struct CVALUE*));
        # 307 "./neo-c.h"
        __result125__ = __result_obj__ = result_125;
        return __result125__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional167;
struct list_item$1CVALUEph* it_126;
int i_127;
_Bool _while_condtional18;
_Bool _if_conditional168;
struct CVALUE* __result126__;
struct CVALUE* default_value_128;
struct CVALUE* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_127, 0, sizeof(int));
memset(&default_value_128, 0, sizeof(struct CVALUE*));
                # 673 "./neo-c.h"
                # 669 "./neo-c.h"
                if(_if_conditional167=position<0,                _if_conditional167) {
                    # 670 "./neo-c.h"
                    position+=self->len;
                }
                # 673 "./neo-c.h"
                it_126=self->head;
                # 674 "./neo-c.h"
                i_127=0;
                # 681 "./neo-c.h"
                while(_while_condtional18=it_126!=((void*)0),                _while_condtional18) {
                    # 679 "./neo-c.h"
                    # 676 "./neo-c.h"
                    if(_if_conditional168=position==i_127,                    _if_conditional168) {
                        # 677 "./neo-c.h"
                        __result126__ = __result_obj__ = it_126->item;
                        return __result126__;
                    }
                    # 679 "./neo-c.h"
                    it_126=it_126->next;
                    # 680 "./neo-c.h"
                    i_127++;
                }
                # 683 "./neo-c.h"
                # 684 "./neo-c.h"
                memset(&default_value_128,0,sizeof(struct CVALUE*));
                # 685 "./neo-c.h"
                __result127__ = __result_obj__ = default_value_128;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result127__;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional169;
void* right_value198;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj70;
_Bool _if_conditional170;
void* right_value199;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj71;
void* right_value200;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj72;
struct list$1sTypeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value199 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value200 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional169=self->len==0,        _if_conditional169) {
            # 217 "./neo-c.h"
            litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value198=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value198,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_130->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_130->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj70=litem_130->item;
            litem_130->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_130;
            # 224 "./neo-c.h"
            self->head=litem_130;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional170=self->len==1,            _if_conditional170) {
                # 227 "./neo-c.h"
                litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value199=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value199,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_131->prev=self->head;
                # 230 "./neo-c.h"
                litem_131->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj71=litem_131->item;
                litem_131->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_131;
                # 234 "./neo-c.h"
                self->head->next=litem_131;
            }
            else {
                # 237 "./neo-c.h"
                litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value200=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value200,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_132->prev=self->tail;
                # 240 "./neo-c.h"
                litem_132->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj72=litem_132->item;
                litem_132->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_132;
                # 244 "./neo-c.h"
                self->tail=litem_132;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result128__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result128__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional173;
struct list_item$1sTypeph* it_145;
int i_146;
_Bool _while_condtional19;
_Bool _if_conditional174;
struct sType* __result130__;
struct sType* default_value_147;
struct sType* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_146, 0, sizeof(int));
memset(&default_value_147, 0, sizeof(struct sType*));
        # 673 "./neo-c.h"
        # 669 "./neo-c.h"
        if(_if_conditional173=position<0,        _if_conditional173) {
            # 670 "./neo-c.h"
            position+=self->len;
        }
        # 673 "./neo-c.h"
        it_145=self->head;
        # 674 "./neo-c.h"
        i_146=0;
        # 681 "./neo-c.h"
        while(_while_condtional19=it_145!=((void*)0),        _while_condtional19) {
            # 679 "./neo-c.h"
            # 676 "./neo-c.h"
            if(_if_conditional174=position==i_146,            _if_conditional174) {
                # 677 "./neo-c.h"
                __result130__ = __result_obj__ = it_145->item;
                return __result130__;
            }
            # 679 "./neo-c.h"
            it_145=it_145->next;
            # 680 "./neo-c.h"
            i_146++;
        }
        # 683 "./neo-c.h"
        # 684 "./neo-c.h"
        memset(&default_value_147,0,sizeof(struct sType*));
        # 685 "./neo-c.h"
        __result131__ = __result_obj__ = default_value_147;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result131__;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj84;
void* right_value233;
char* __dec_obj85;
struct sTupleNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    # 486 "06str.c"
    __dec_obj84=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj84,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    # 488 "06str.c"
    self->sline=info->sline;
    # 489 "06str.c"
    __dec_obj85=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(info->sname))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 492 "06str.c"
    __result133__ = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result133__;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sTupleNode_terminated(struct sTupleNode* self){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    # 494 "06str.c"
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__;
void* right_value234;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    # 499 "06str.c"
    __result135__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sTupleNode")));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_155;
void* right_value235;
void* right_value236;
struct list$1sTypeph* tuple_types_156;
void* right_value237;
void* right_value238;
struct list$1CVALUEph* tuple_values_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* it_159;
_Bool _if_conditional180;
_Bool __result136__;
void* right_value239;
struct CVALUE* come_value_160;
void* right_value243;
void* right_value244;
void* right_value245;
void* right_value246;
void* right_value247;
struct sType* type_162;
struct list$1sTypeph* o2_saved_163;
struct sType* it_166;
void* right_value248;
void* right_value249;
struct CVALUE* obj_value_169;
void* right_value250;
void* right_value251;
struct buffer* num_string_170;
void* right_value252;
struct sType* type2_171;
void* right_value253;
char* type_name_172;
void* right_value254;
void* right_value255;
char* __dec_obj88;
void* right_value256;
struct sType* type3_173;
void* right_value257;
struct sType* __dec_obj89;
void* right_value258;
char* __dec_obj90;
void* right_value259;
struct sType* obj_type_174;
char* fun_name_175;
void* right_value260;
void* right_value261;
void* right_value262;
char* generics_fun_name_176;
struct sFun* fun_177;
_Bool _if_conditional189;
void* right_value263;
void* right_value264;
char* __dec_obj91;
_Bool _if_conditional190;
_Bool __result146__;
void* right_value265;
struct sType* result_type_178;
void* right_value266;
void* right_value267;
struct list$1CVALUEph* come_params_179;
_Bool _if_conditional191;
int i_180;
struct list$1CVALUEph* o2_saved_181;
struct CVALUE* it_182;
void* right_value268;
struct CVALUE* come_value_183;
_Bool _if_conditional192;
void* right_value269;
void* right_value270;
struct buffer* buf_184;
int j_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_187;
_Bool _if_conditional193;
void* right_value271;
struct CVALUE* come_value2_188;
void* right_value272;
char* __dec_obj92;
_Bool _if_conditional194;
void* right_value273;
void* right_value274;
char* __dec_obj93;
void* right_value275;
struct sType* __dec_obj94;
void* right_value276;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_155, 0, sizeof(struct list$1sNodeph*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&tuple_types_156, 0, sizeof(struct list$1sTypeph*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&tuple_values_157, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_158, 0, sizeof(struct list$1sNodeph*));
memset(&it_159, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&type_162, 0, sizeof(struct sType*));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_166, 0, sizeof(struct sType*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&obj_value_169, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&num_string_170, 0, sizeof(struct buffer*));
right_value252 = (void*)0;
memset(&type2_171, 0, sizeof(struct sType*));
right_value253 = (void*)0;
memset(&type_name_172, 0, sizeof(char*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&type3_173, 0, sizeof(struct sType*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&obj_type_174, 0, sizeof(struct sType*));
memset(&fun_name_175, 0, sizeof(char*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
memset(&fun_177, 0, sizeof(struct sFun*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&result_type_178, 0, sizeof(struct sType*));
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&come_params_179, 0, sizeof(struct list$1CVALUEph*));
memset(&i_180, 0, sizeof(int));
memset(&o2_saved_181, 0, sizeof(struct list$1CVALUEph*));
memset(&it_182, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&j_185, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_187, 0, sizeof(struct CVALUE*));
right_value271 = (void*)0;
memset(&come_value2_188, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
    # 504 "06str.c"
    tuple_elements_155=self->tuple_elements;
    # 505 "06str.c"
    tuple_types_156=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value236=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value235=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 505, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value235,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value236,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 506 "06str.c"
    tuple_values_157=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value238=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value237=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 506, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value237,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value238,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 520 "06str.c"
    for(    o2_saved_158=(tuple_elements_155),it_159=list$1sNodeph_begin((o2_saved_158));    !list$1sNodeph_end((o2_saved_158));    it_159=list$1sNodeph_next((o2_saved_158))    ){
        # 513 "06str.c"
        # 509 "06str.c"
        if(_if_conditional180=!node_compile(it_159,info),        _if_conditional180) {
            # 510 "06str.c"
            __result136__ = (_Bool)0;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result136__;
        }
        # 513 "06str.c"
        come_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 514 "06str.c"
        dec_stack_ptr(1,info);
        # 516 "06str.c"
        list$1CVALUEph_push_back(tuple_values_157,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=CVALUE_clone(come_value_160)))));
        come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 517 "06str.c"
        list$1sTypeph_push_back(tuple_types_156,(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(come_value_160->type)))));
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 520 "06str.c"
    type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 520, "sType")))),((char*)(right_value246=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_156)))),(_Bool)0,info))));
    come_call_finalizer3(right_value245,sType_finalize, 0, 1, 0, 0, __result_obj__);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 526 "06str.c"
    for(    o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_156)),it_166=list$1sTypeph_begin((o2_saved_163));    !list$1sTypeph_end((o2_saved_163));    it_166=list$1sTypeph_next((o2_saved_163))    ){
        # 523 "06str.c"
        list$1sTypeph_push_back(type_162->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_clone(it_166)))));
        come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    # 526 "06str.c"
    obj_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 526, "CVALUE"))));
    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 528 "06str.c"
    num_string_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value250=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 528, "buffer"))))))));
    come_call_finalizer3(right_value250,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value251,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 530 "06str.c"
    buffer_append_str(num_string_170,"1");
    # 532 "06str.c"
    type2_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=solve_generics(type_162,type_162,info))));
    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 534 "06str.c"
    type_name_172=(char*)come_increment_ref_count(((char*)(right_value253=make_type_name_string(type2_171,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 536 "06str.c"
    __dec_obj88=obj_value_169->c_value;
    obj_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,((char*)(right_value254=buffer_to_string(num_string_170))),info->sname,info->sline,type_name_172))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 538 "06str.c"
    type3_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(type2_171))));
    come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 539 "06str.c"
    type3_173->mPointerNum++;
    # 540 "06str.c"
    type3_173->mHeap=(_Bool)1;
    # 541 "06str.c"
    type2_171->mHeap=(_Bool)1;
    # 542 "06str.c"
    __dec_obj89=obj_value_169->type;
    obj_value_169->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(type2_171))));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 543 "06str.c"
    __dec_obj90=obj_value_169->c_value;
    obj_value_169->c_value=(char*)come_increment_ref_count(((char*)(right_value258=append_object_to_right_values(obj_value_169->c_value,(struct sType*)come_increment_ref_count(type3_173),info))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 544 "06str.c"
    obj_value_169->type->mPointerNum++;
    # 545 "06str.c"
    obj_value_169->var=((void*)0);
    # 547 "06str.c"
    obj_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(type2_171))));
    come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 548 "06str.c"
    fun_name_175="initialize";
    # 550 "06str.c"
    generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value262=string_to_string(((char*)(right_value261=make_generics_function(obj_type_174,(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(fun_name_175)))),info,(_Bool)1)))))));
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 552 "06str.c"
    fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
    # 565 "06str.c"
    # 554 "06str.c"
    if(_if_conditional189=fun_177==((void*)0),    _if_conditional189) {
        # 555 "06str.c"
        __dec_obj91=generics_fun_name_176;
        generics_fun_name_176=(char*)come_increment_ref_count(((char*)(right_value264=create_method_name(obj_type_174,(_Bool)0,((char*)(right_value263=__builtin_string(fun_name_175))),info,(_Bool)1))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 557 "06str.c"
        fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
        # 563 "06str.c"
        # 559 "06str.c"
        if(_if_conditional190=fun_177==((void*)0),        _if_conditional190) {
            # 560 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_176,info->come_fun->mName);
            # 561 "06str.c"
            __result146__ = (_Bool)1;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result146__;
        }
    }
    # 565 "06str.c"
    result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(fun_177->mResultType))));
    come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 566 "06str.c"
    result_type_178->mStatic=(_Bool)0;
    # 568 "06str.c"
    come_params_179=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value267=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value266=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 568, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value266,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value267,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 573 "06str.c"
    # 570 "06str.c"
    if(_if_conditional191=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 570, 4))->mHeap&&obj_value_169->type->mHeap,    _if_conditional191) {
        # 571 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 571, 5)),obj_value_169->type,obj_value_169,info);
    }
    # 573 "06str.c"
    list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(obj_value_169));
    # 575 "06str.c"
    i_180=1;
    # 587 "06str.c"
    for(    o2_saved_181=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_157)),it_182=list$1CVALUEph_begin((o2_saved_181));    !list$1CVALUEph_end((o2_saved_181));    it_182=list$1CVALUEph_next((o2_saved_181))    ){
        # 577 "06str.c"
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=CVALUE_clone(it_182))));
        come_call_finalizer3(right_value268,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 582 "06str.c"
        # 579 "06str.c"
        if(_if_conditional192=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 579, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 579, 7))->mHeap&&come_value_183->type->mHeap,        _if_conditional192) {
            # 580 "06str.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 580, 8)),come_value_183->type,come_value_183,info);
        }
        # 582 "06str.c"
        list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(come_value_183));
        # 584 "06str.c"
        i_180++;
        come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    # 587 "06str.c"
    buf_184=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value269=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 587, "buffer"))))))));
    come_call_finalizer3(right_value269,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 589 "06str.c"
    buffer_append_str(buf_184,generics_fun_name_176);
    # 590 "06str.c"
    buffer_append_str(buf_184,"(");
    # 592 "06str.c"
    j_185=0;
    # 602 "06str.c"
    for(    o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((come_params_179)),it_187=list$1CVALUEph_begin((o2_saved_186));    !list$1CVALUEph_end((o2_saved_186));    it_187=list$1CVALUEph_next((o2_saved_186))    ){
        # 594 "06str.c"
        buffer_append_str(buf_184,it_187->c_value);
        # 600 "06str.c"
        # 596 "06str.c"
        if(_if_conditional193=j_185!=list$1CVALUEph_length(come_params_179)-1,        _if_conditional193) {
            # 597 "06str.c"
            buffer_append_str(buf_184,",");
        }
        # 600 "06str.c"
        j_185++;
    }
    come_call_finalizer3(o2_saved_186,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    # 602 "06str.c"
    buffer_append_str(buf_184,")");
    # 604 "06str.c"
    come_value2_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 604, "CVALUE"))));
    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 606 "06str.c"
    __dec_obj92=come_value2_188->c_value;
    come_value2_188->c_value=(char*)come_increment_ref_count(((char*)(right_value272=buffer_to_string(buf_184))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 612 "06str.c"
    # 608 "06str.c"
    if(result_type_178->mHeap) {
        # 609 "06str.c"
        __dec_obj93=come_value2_188->c_value;
        come_value2_188->c_value=(char*)come_increment_ref_count(((char*)(right_value274=append_object_to_right_values(((char*)(right_value273=buffer_to_string(buf_184))),(struct sType*)come_increment_ref_count(result_type_178),info))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 612 "06str.c"
    __dec_obj94=come_value2_188->type;
    come_value2_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(result_type_178))));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 613 "06str.c"
    come_value2_188->type->mStatic=(_Bool)0;
    # 614 "06str.c"
    come_value2_188->var=((void*)0);
    # 616 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value276=buffer_to_string(buf_184))));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 618 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_188));
    # 620 "06str.c"
    __result147__ = (_Bool)1;
    come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_179,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result147__;
    come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_179,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional181;
struct CVALUE* __result137__;
void* right_value240;
struct CVALUE* result_161;
_Bool _if_conditional182;
void* right_value241;
char* __dec_obj86;
_Bool _if_conditional183;
void* right_value242;
struct sType* __dec_obj87;
_Bool _if_conditional184;
struct CVALUE* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
memset(&result_161, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
            # 3 "CVALUE_clone"
            # 2 "CVALUE_clone"
            if(_if_conditional181=self==(void*)0,            _if_conditional181) {
                # 2 "CVALUE_clone"
                __result137__ = __result_obj__ = (void*)0;
                return __result137__;
            }
            # 3 "CVALUE_clone"
            result_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "CVALUE_clone"
            # 4 "CVALUE_clone"
            if(_if_conditional182=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional182) {
                # 4 "CVALUE_clone"
                __dec_obj86=result_161->c_value;
                result_161->c_value=(char*)come_increment_ref_count(((char*)(right_value241=string_clone(self->c_value))));
                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "CVALUE_clone"
            # 5 "CVALUE_clone"
            if(_if_conditional183=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional183) {
                # 5 "CVALUE_clone"
                __dec_obj87=result_161->type;
                result_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "CVALUE_clone"
            # 6 "CVALUE_clone"
            if(_if_conditional184=self!=((void*)0),            _if_conditional184) {
                # 6 "CVALUE_clone"
                result_161->var=self->var;
            }
            # 7 "CVALUE_clone"
            __result138__ = __result_obj__ = result_161;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result138__;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional185;
struct sType* result_164;
struct sType* __result139__;
_Bool _if_conditional186;
struct sType* __result140__;
struct sType* result_165;
struct sType* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sType*));
memset(&result_165, 0, sizeof(struct sType*));
        # 281 "./neo-c.h"
        # 276 "./neo-c.h"
        if(_if_conditional185=self==((void*)0),        _if_conditional185) {
            # 277 "./neo-c.h"
            # 278 "./neo-c.h"
            memset(&result_164,0,sizeof(struct sType*));
            # 279 "./neo-c.h"
            __result139__ = __result_obj__ = result_164;
            return __result139__;
        }
        # 281 "./neo-c.h"
        self->it=self->head;
        # 287 "./neo-c.h"
        # 283 "./neo-c.h"
        if(self->it) {
            # 284 "./neo-c.h"
            __result140__ = __result_obj__ = self->it->item;
            return __result140__;
        }
        # 287 "./neo-c.h"
        # 288 "./neo-c.h"
        memset(&result_165,0,sizeof(struct sType*));
        # 289 "./neo-c.h"
        __result141__ = __result_obj__ = result_165;
        return __result141__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
        # 311 "./neo-c.h"
        __result142__ = self==((void*)0)||self->it==((void*)0);
        return __result142__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct sType* result_167;
struct sType* __result143__;
_Bool _if_conditional188;
struct sType* __result144__;
struct sType* result_168;
struct sType* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sType*));
memset(&result_168, 0, sizeof(struct sType*));
        # 299 "./neo-c.h"
        # 293 "./neo-c.h"
        if(_if_conditional187=self==((void*)0)||self->it==((void*)0),        _if_conditional187) {
            # 294 "./neo-c.h"
            # 295 "./neo-c.h"
            memset(&result_167,0,sizeof(struct sType*));
            # 296 "./neo-c.h"
            __result143__ = __result_obj__ = result_167;
            return __result143__;
        }
        # 299 "./neo-c.h"
        self->it=self->it->next;
        # 305 "./neo-c.h"
        # 301 "./neo-c.h"
        if(self->it) {
            # 302 "./neo-c.h"
            __result144__ = __result_obj__ = self->it->item;
            return __result144__;
        }
        # 305 "./neo-c.h"
        # 306 "./neo-c.h"
        memset(&result_168,0,sizeof(struct sType*));
        # 307 "./neo-c.h"
        __result145__ = __result_obj__ = result_168;
        return __result145__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* __dec_obj95;
struct list$1sNodeph* __dec_obj96;
void* right_value277;
char* __dec_obj97;
struct sMapNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    # 631 "06str.c"
    __dec_obj95=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    # 632 "06str.c"
    __dec_obj96=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    # 634 "06str.c"
    self->sline=info->sline;
    # 635 "06str.c"
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 638 "06str.c"
    __result148__ = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMapNode_terminated(struct sMapNode* self){
void* __result_obj__;
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    # 640 "06str.c"
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__;
void* right_value278;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    # 645 "06str.c"
    __result150__ = __result_obj__ = ((char*)(right_value278=__builtin_string("sMapNode")));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_189;
struct list$1sNodeph* map_elements_190;
void* right_value279;
void* right_value280;
struct list$1CVALUEph* key_params_191;
void* right_value281;
void* right_value282;
struct list$1CVALUEph* element_params_192;
struct sType* map_key_type_193;
struct sType* map_element_type_194;
int i_195;
struct sNode* key_elements_199;
struct sNode* elements_200;
_Bool _if_conditional200;
_Bool __result153__;
void* right_value283;
struct CVALUE* come_value_201;
_Bool _if_conditional201;
void* right_value284;
_Bool _if_conditional202;
_Bool __result154__;
void* right_value285;
struct CVALUE* come_value2_202;
_Bool _if_conditional203;
void* right_value286;
void* right_value287;
struct sType* __dec_obj98;
void* right_value288;
struct sType* __dec_obj99;
static int map_value_num_203=0;
void* right_value289;
struct sType* key_type_values_204;
void* right_value290;
void* right_value291;
char* var_name_205;
void* right_value292;
struct sVar* var__206;
void* right_value293;
void* right_value294;
struct sType* element_type_values_207;
void* right_value295;
void* right_value296;
char* var_name2_208;
void* right_value297;
struct sVar* var2__209;
void* right_value298;
void* right_value299;
void* right_value300;
struct buffer* source_210;
int i_211;
struct CVALUE* key_param_212;
struct CVALUE* element_param_213;
_Bool _if_conditional204;
void* right_value301;
void* right_value302;
_Bool _if_conditional205;
void* right_value303;
void* right_value304;
void* right_value305;
void* right_value306;
void* right_value307;
struct sType* map_type_214;
void* right_value308;
void* right_value309;
void* right_value310;
struct sType* obj_type_215;
char* fun_name_216;
void* right_value311;
void* right_value312;
void* right_value313;
char* generics_fun_name_217;
struct sFun* fun_218;
_Bool _if_conditional206;
void* right_value314;
void* right_value315;
char* __dec_obj100;
_Bool _if_conditional207;
_Bool __result155__;
void* right_value316;
struct sType* result_type_219;
struct sType* type_220;
void* right_value317;
struct CVALUE* obj_value_221;
void* right_value318;
void* right_value319;
struct buffer* num_string_222;
void* right_value320;
struct sType* type2_223;
void* right_value321;
char* type_name_224;
void* right_value322;
void* right_value323;
char* __dec_obj101;
void* right_value324;
struct sType* type3_225;
void* right_value325;
struct sType* __dec_obj102;
void* right_value326;
char* __dec_obj103;
void* right_value327;
void* right_value328;
struct list$1CVALUEph* come_params_226;
_Bool _if_conditional208;
void* right_value329;
struct CVALUE* come_value2_227;
void* right_value330;
char* __dec_obj104;
struct sType* __dec_obj105;
void* right_value331;
struct CVALUE* come_value3_228;
void* right_value332;
char* __dec_obj106;
struct sType* __dec_obj107;
void* right_value333;
struct CVALUE* come_value4_229;
void* right_value334;
char* __dec_obj108;
struct sType* __dec_obj109;
void* right_value335;
void* right_value336;
struct buffer* buf_230;
int j_231;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* it_233;
_Bool _if_conditional209;
void* right_value337;
struct CVALUE* come_value5_234;
void* right_value338;
char* __dec_obj110;
_Bool _if_conditional210;
void* right_value339;
void* right_value340;
char* __dec_obj111;
void* right_value341;
struct sType* __dec_obj112;
void* right_value342;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_189, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_190, 0, sizeof(struct list$1sNodeph*));
right_value279 = (void*)0;
right_value280 = (void*)0;
memset(&key_params_191, 0, sizeof(struct list$1CVALUEph*));
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&element_params_192, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_193, 0, sizeof(struct sType*));
memset(&map_element_type_194, 0, sizeof(struct sType*));
memset(&i_195, 0, sizeof(int));
memset(&key_elements_199, 0, sizeof(struct sNode*));
memset(&elements_200, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
memset(&come_value_201, 0, sizeof(struct CVALUE*));
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&come_value2_202, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
memset(&key_type_values_204, 0, sizeof(struct sType*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&var_name_205, 0, sizeof(char*));
right_value292 = (void*)0;
memset(&var__206, 0, sizeof(struct sVar*));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&element_type_values_207, 0, sizeof(struct sType*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&var_name2_208, 0, sizeof(char*));
right_value297 = (void*)0;
memset(&var2__209, 0, sizeof(struct sVar*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&source_210, 0, sizeof(struct buffer*));
memset(&i_211, 0, sizeof(int));
memset(&key_param_212, 0, sizeof(struct CVALUE*));
memset(&element_param_213, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&map_type_214, 0, sizeof(struct sType*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&obj_type_215, 0, sizeof(struct sType*));
memset(&fun_name_216, 0, sizeof(char*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&generics_fun_name_217, 0, sizeof(char*));
memset(&fun_218, 0, sizeof(struct sFun*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&type_220, 0, sizeof(struct sType*));
right_value317 = (void*)0;
memset(&obj_value_221, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&num_string_222, 0, sizeof(struct buffer*));
right_value320 = (void*)0;
memset(&type2_223, 0, sizeof(struct sType*));
right_value321 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&type3_225, 0, sizeof(struct sType*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&come_params_226, 0, sizeof(struct list$1CVALUEph*));
right_value329 = (void*)0;
memset(&come_value2_227, 0, sizeof(struct CVALUE*));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&come_value3_228, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&come_value4_229, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&buf_230, 0, sizeof(struct buffer*));
memset(&j_231, 0, sizeof(int));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
right_value337 = (void*)0;
memset(&come_value5_234, 0, sizeof(struct CVALUE*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
    # 650 "06str.c"
    map_key_elements_189=self->map_key_elements;
    # 651 "06str.c"
    map_elements_190=self->map_elements;
    # 653 "06str.c"
    key_params_191=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value280=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value279=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 653, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value279,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value280,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 654 "06str.c"
    element_params_192=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value282=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value281=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 654, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value281,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value282,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 655 "06str.c"
    map_key_type_193=((void*)0);
    # 656 "06str.c"
    map_element_type_194=((void*)0);
    # 692 "06str.c"
    for(    i_195=0;    i_195<list$1sNodeph_length(map_key_elements_189);    i_195++    ){
        # 659 "06str.c"
        key_elements_199=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_189,i_195), "06str.c", 659, 9));
        # 660 "06str.c"
        elements_200=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_190,i_195), "06str.c", 660, 10));
        # 666 "06str.c"
        # 662 "06str.c"
        if(_if_conditional200=!node_compile(key_elements_199,info),        _if_conditional200) {
            # 663 "06str.c"
            __result153__ = (_Bool)0;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result153__;
        }
        # 666 "06str.c"
        come_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value283,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 667 "06str.c"
        dec_stack_ptr(1,info);
        # 673 "06str.c"
        # 669 "06str.c"
        if(map_key_type_193) {
            # 670 "06str.c"
            check_assign_type(((char*)(right_value284=xsprintf("invalid map key type"))),map_key_type_193,come_value_201->type,come_value_201,(_Bool)0,(_Bool)1,info);
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 673 "06str.c"
        list$1CVALUEph_push_back(key_params_191,(struct CVALUE*)come_increment_ref_count(come_value_201));
        # 679 "06str.c"
        # 675 "06str.c"
        if(_if_conditional202=!node_compile(elements_200,info),        _if_conditional202) {
            # 676 "06str.c"
            __result154__ = (_Bool)0;
            come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result154__;
        }
        # 679 "06str.c"
        come_value2_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 680 "06str.c"
        dec_stack_ptr(1,info);
        # 686 "06str.c"
        # 682 "06str.c"
        if(map_element_type_194) {
            # 683 "06str.c"
            check_assign_type(((char*)(right_value286=xsprintf("invalid map element type"))),map_element_type_194,come_value2_202->type,come_value2_202,(_Bool)0,(_Bool)1,info);
            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 686 "06str.c"
        list$1CVALUEph_push_back(element_params_192,(struct CVALUE*)come_increment_ref_count(come_value2_202));
        # 688 "06str.c"
        __dec_obj98=map_key_type_193;
        map_key_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(come_value_201->type))));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value287,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 689 "06str.c"
        __dec_obj99=map_element_type_194;
        map_element_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(come_value2_202->type))));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 692 "06str.c"
    # 694 "06str.c"
    key_type_values_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(map_key_type_193))));
    come_call_finalizer3(right_value289,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 695 "06str.c"
    list$1sNodeph_push_back(key_type_values_204->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=create_int_node(list$1CVALUEph_length(key_params_191),info)))));
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 696 "06str.c"
    key_type_values_204->mHeap=(_Bool)0;
    # 698 "06str.c"
    var_name_205=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("__map_keys%d__",++map_value_num_203))));
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 700 "06str.c"
    add_variable_to_table(var_name_205,(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(key_type_values_204)))),info);
    come_call_finalizer3(right_value292,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 702 "06str.c"
    var__206=get_variable_from_table(info->lv_table,var_name_205);
    # 704 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value293=make_define_var(key_type_values_204,var__206->mCValueName,(_Bool)0,info))));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 706 "06str.c"
    element_type_values_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(map_element_type_194))));
    come_call_finalizer3(right_value294,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 707 "06str.c"
    list$1sNodeph_push_back(element_type_values_207->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=create_int_node(list$1CVALUEph_length(element_params_192),info)))));
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 708 "06str.c"
    element_type_values_207->mHeap=(_Bool)0;
    # 710 "06str.c"
    var_name2_208=(char*)come_increment_ref_count(((char*)(right_value296=xsprintf("__map_element%d__",map_value_num_203))));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 712 "06str.c"
    add_variable_to_table(var_name2_208,(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(element_type_values_207)))),info);
    come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 714 "06str.c"
    var2__209=get_variable_from_table(info->lv_table,var_name2_208);
    # 716 "06str.c"
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value298=make_define_var(element_type_values_207,var2__209->mCValueName,(_Bool)0,info))));
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 718 "06str.c"
    source_210=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 718, "buffer"))))))));
    come_call_finalizer3(right_value299,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value300,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 720 "06str.c"
    buffer_append_str(source_210,"{");
    # 741 "06str.c"
    for(    i_211=0;    i_211<list$1CVALUEph_length(key_params_191);    i_211++    ){
        # 723 "06str.c"
        key_param_212=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_191,i_211), "06str.c", 723, 11));
        # 724 "06str.c"
        element_param_213=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_192,i_211), "06str.c", 724, 12));
        # 733 "06str.c"
        # 726 "06str.c"
        if(map_key_type_193->mHeap) {
            # 727 "06str.c"
            buffer_append_str(source_210,((char*)(right_value301=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 730 "06str.c"
            buffer_append_str(source_210,((char*)(right_value302=xsprintf("%s[%d]=%s;\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 739 "06str.c"
        # 733 "06str.c"
        if(map_element_type_194->mHeap) {
            # 734 "06str.c"
            buffer_append_str(source_210,((char*)(right_value303=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 737 "06str.c"
            buffer_append_str(source_210,((char*)(right_value304=xsprintf("%s[%d]=%s;\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    # 741 "06str.c"
    buffer_append_str(source_210,"}");
    # 743 "06str.c"
    add_come_code(info,"%s",((char*)(right_value305=buffer_to_string(source_210))));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 745 "06str.c"
    map_type_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value307=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value306=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 745, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer3(right_value306,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 746 "06str.c"
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(map_key_type_193)))));
    come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 747 "06str.c"
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=sType_clone(map_element_type_194)))));
    come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 749 "06str.c"
    obj_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(map_type_214))));
    come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 750 "06str.c"
    fun_name_216="initialize_with_values";
    # 752 "06str.c"
    generics_fun_name_217=(char*)come_increment_ref_count(((char*)(right_value313=string_to_string(((char*)(right_value312=make_generics_function(obj_type_215,(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string(fun_name_216)))),info,(_Bool)1)))))));
    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 754 "06str.c"
    fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
    # 767 "06str.c"
    # 756 "06str.c"
    if(_if_conditional206=fun_218==((void*)0),    _if_conditional206) {
        # 757 "06str.c"
        __dec_obj100=generics_fun_name_217;
        generics_fun_name_217=(char*)come_increment_ref_count(((char*)(right_value315=create_method_name(obj_type_215,(_Bool)0,((char*)(right_value314=__builtin_string(fun_name_216))),info,(_Bool)1))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 759 "06str.c"
        fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
        # 765 "06str.c"
        # 761 "06str.c"
        if(_if_conditional207=fun_218==((void*)0),        _if_conditional207) {
            # 762 "06str.c"
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_217,info->come_fun->mName);
            # 763 "06str.c"
            __result155__ = (_Bool)1;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result155__;
        }
    }
    # 767 "06str.c"
    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(fun_218->mResultType))));
    come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 768 "06str.c"
    result_type_219->mStatic=(_Bool)0;
    # 770 "06str.c"
    type_220=map_type_214;
    # 772 "06str.c"
    obj_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 772, "CVALUE"))));
    come_call_finalizer3(right_value317,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 774 "06str.c"
    num_string_222=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value318=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 774, "buffer"))))))));
    come_call_finalizer3(right_value318,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 776 "06str.c"
    buffer_append_str(num_string_222,"1");
    # 778 "06str.c"
    type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=solve_generics(type_220,type_220,info))));
    come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 780 "06str.c"
    type_name_224=(char*)come_increment_ref_count(((char*)(right_value321=make_type_name_string(type2_223,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 782 "06str.c"
    __dec_obj101=obj_value_221->c_value;
    obj_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value323=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_224,type_name_224,((char*)(right_value322=buffer_to_string(num_string_222))),info->sname,info->sline,type_name_224))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 784 "06str.c"
    type3_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(type2_223))));
    come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 785 "06str.c"
    type3_225->mPointerNum++;
    # 786 "06str.c"
    type3_225->mHeap=(_Bool)1;
    # 787 "06str.c"
    type2_223->mHeap=(_Bool)1;
    # 788 "06str.c"
    __dec_obj102=obj_value_221->type;
    obj_value_221->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(type2_223))));
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 789 "06str.c"
    __dec_obj103=obj_value_221->c_value;
    obj_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value326=append_object_to_right_values(obj_value_221->c_value,(struct sType*)come_increment_ref_count(type3_225),info))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 790 "06str.c"
    obj_value_221->type->mPointerNum++;
    # 791 "06str.c"
    obj_value_221->var=((void*)0);
    # 793 "06str.c"
    come_params_226=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value328=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value327=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 793, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value327,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value328,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 798 "06str.c"
    # 795 "06str.c"
    if(_if_conditional208=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 795, 13))->mHeap&&obj_value_221->type->mHeap,    _if_conditional208) {
        # 796 "06str.c"
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 796, 14)),obj_value_221->type,obj_value_221,info);
    }
    # 798 "06str.c"
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(obj_value_221));
    # 800 "06str.c"
    come_value2_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 800, "CVALUE"))));
    come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 802 "06str.c"
    __dec_obj104=come_value2_227->c_value;
    come_value2_227->c_value=(char*)come_increment_ref_count(((char*)(right_value330=xsprintf("%d",list$1CVALUEph_length(key_params_191)))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 803 "06str.c"
    __dec_obj105=come_value2_227->type;
    come_value2_227->type=((void*)0);
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 804 "06str.c"
    come_value2_227->var=((void*)0);
    # 806 "06str.c"
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value2_227));
    # 808 "06str.c"
    come_value3_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 808, "CVALUE"))));
    come_call_finalizer3(right_value331,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 810 "06str.c"
    __dec_obj106=come_value3_228->c_value;
    come_value3_228->c_value=(char*)come_increment_ref_count(((char*)(right_value332=xsprintf("%s",var__206->mCValueName))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 811 "06str.c"
    __dec_obj107=come_value3_228->type;
    come_value3_228->type=((void*)0);
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 812 "06str.c"
    come_value3_228->var=((void*)0);
    # 814 "06str.c"
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value3_228));
    # 816 "06str.c"
    come_value4_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "CVALUE"))));
    come_call_finalizer3(right_value333,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 818 "06str.c"
    __dec_obj108=come_value4_229->c_value;
    come_value4_229->c_value=(char*)come_increment_ref_count(((char*)(right_value334=xsprintf("%s",var2__209->mCValueName))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 819 "06str.c"
    __dec_obj109=come_value4_229->type;
    come_value4_229->type=((void*)0);
    come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
    # 820 "06str.c"
    come_value4_229->var=((void*)0);
    # 822 "06str.c"
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value4_229));
    # 824 "06str.c"
    buf_230=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value336=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value335=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 824, "buffer"))))))));
    come_call_finalizer3(right_value335,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value336,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 826 "06str.c"
    buffer_append_str(buf_230,generics_fun_name_217);
    # 827 "06str.c"
    buffer_append_str(buf_230,"(");
    # 829 "06str.c"
    j_231=0;
    # 839 "06str.c"
    for(    o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((come_params_226)),it_233=list$1CVALUEph_begin((o2_saved_232));    !list$1CVALUEph_end((o2_saved_232));    it_233=list$1CVALUEph_next((o2_saved_232))    ){
        # 831 "06str.c"
        buffer_append_str(buf_230,it_233->c_value);
        # 837 "06str.c"
        # 833 "06str.c"
        if(_if_conditional209=j_231!=list$1CVALUEph_length(come_params_226)-1,        _if_conditional209) {
            # 834 "06str.c"
            buffer_append_str(buf_230,",");
        }
        # 837 "06str.c"
        j_231++;
    }
    come_call_finalizer3(o2_saved_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    # 839 "06str.c"
    buffer_append_str(buf_230,")");
    # 841 "06str.c"
    come_value5_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 841, "CVALUE"))));
    come_call_finalizer3(right_value337,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 843 "06str.c"
    __dec_obj110=come_value5_234->c_value;
    come_value5_234->c_value=(char*)come_increment_ref_count(((char*)(right_value338=buffer_to_string(buf_230))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 849 "06str.c"
    # 845 "06str.c"
    if(result_type_219->mHeap) {
        # 846 "06str.c"
        __dec_obj111=come_value5_234->c_value;
        come_value5_234->c_value=(char*)come_increment_ref_count(((char*)(right_value340=append_object_to_right_values(((char*)(right_value339=buffer_to_string(buf_230))),(struct sType*)come_increment_ref_count(result_type_219),info))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 849 "06str.c"
    __dec_obj112=come_value5_234->type;
    come_value5_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(result_type_219))));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 850 "06str.c"
    come_value5_234->type->mStatic=(_Bool)0;
    # 851 "06str.c"
    come_value5_234->var=((void*)0);
    # 853 "06str.c"
    add_come_last_code(info,"%s;\n",((char*)(right_value342=buffer_to_string(buf_230))));
    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 855 "06str.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_234));
    # 857 "06str.c"
    __result156__ = (_Bool)1;
    come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool _if_conditional198;
struct list_item$1sNodeph* it_196;
int i_197;
_Bool _while_condtional20;
_Bool _if_conditional199;
struct sNode* __result151__;
struct sNode* default_value_198;
struct sNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_196, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_197, 0, sizeof(int));
memset(&default_value_198, 0, sizeof(struct sNode*));
            # 673 "./neo-c.h"
            # 669 "./neo-c.h"
            if(_if_conditional198=position<0,            _if_conditional198) {
                # 670 "./neo-c.h"
                position+=self->len;
            }
            # 673 "./neo-c.h"
            it_196=self->head;
            # 674 "./neo-c.h"
            i_197=0;
            # 681 "./neo-c.h"
            while(_while_condtional20=it_196!=((void*)0),            _while_condtional20) {
                # 679 "./neo-c.h"
                # 676 "./neo-c.h"
                if(_if_conditional199=position==i_197,                _if_conditional199) {
                    # 677 "./neo-c.h"
                    __result151__ = __result_obj__ = it_196->item;
                    return __result151__;
                }
                # 679 "./neo-c.h"
                it_196=it_196->next;
                # 680 "./neo-c.h"
                i_197++;
            }
            # 683 "./neo-c.h"
            # 684 "./neo-c.h"
            memset(&default_value_198,0,sizeof(struct sNode*));
            # 685 "./neo-c.h"
            __result152__ = __result_obj__ = default_value_198;
            if(default_value_198) { default_value_198 = come_decrement_ref_count2(default_value_198, ((struct sNode*)default_value_198)->finalize, ((struct sNode*)default_value_198)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result152__;
            if(default_value_198) { default_value_198 = come_decrement_ref_count2(default_value_198, ((struct sNode*)default_value_198)->finalize, ((struct sNode*)default_value_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional211;
int sline_235;
void* right_value343;
void* right_value344;
struct list$1sNodeph* exps_236;
void* right_value345;
void* right_value346;
struct buffer* value_237;
char* head_of_last_line_238;
_Bool _while_condtional21;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
int len_239;
_Bool _while_condtional22;
_Bool _if_conditional218;
_Bool _while_condtional23;
_Bool _if_conditional219;
void* right_value347;
struct sNode* exp_240;
_Bool _if_conditional220;
_Bool _if_conditional221;
int sline2_241;
_Bool _if_conditional222;
void* right_value348;
void* right_value349;
void* right_value350;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value355;
struct sNode* __result159__;
_Bool _if_conditional231;
int sline_243;
void* right_value356;
void* right_value357;
struct buffer* value_244;
_Bool _while_condtional24;
_Bool _if_conditional232;
char* p_245;
int sline_246;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
int sline2_247;
_Bool _if_conditional237;
void* right_value358;
void* right_value359;
void* right_value360;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value364;
struct sNode* __result162__;
_Bool _if_conditional244;
int sline_249;
void* right_value365;
void* right_value366;
struct buffer* buf_250;
_Bool _while_condtional25;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool global_251;
_Bool ignore_case_252;
_Bool _while_condtional26;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value367;
void* right_value368;
void* right_value369;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value373;
struct sNode* __result165__;
_Bool _if_conditional258;
int c_254;
_Bool _if_conditional259;
_Bool _if_conditional260;
int n_255;
_Bool _while_condtional27;
_Bool _if_conditional261;
int n_256;
_Bool _while_condtional28;
_Bool _while_condtional29;
unsigned long long int n_259;
_Bool _if_conditional262;
void* right_value374;
void* right_value375;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value378;
struct sNode* __result168__;
_Bool _if_conditional268;
unsigned int c_261;
_Bool _if_conditional269;
_Bool _if_conditional270;
int n_262;
_Bool _while_condtional30;
_Bool _if_conditional271;
int n_263;
_Bool _while_condtional31;
_Bool _while_condtional32;
unsigned long long int n_266;
unsigned char p2_267;
_Bool _if_conditional272;
int size_268;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value379;
void* right_value380;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value383;
struct sNode* __result171__;
_Bool _if_conditional281;
int sline_271;
void* right_value384;
void* right_value385;
struct buffer* value_272;
_Bool _while_condtional33;
_Bool _if_conditional282;
char* p_273;
int sline_274;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
int len_275;
int n_276;
_Bool _while_condtional34;
_Bool _if_conditional286;
_Bool _while_condtional35;
unsigned long int lont_279;
int n_280;
_Bool _if_conditional287;
int sline2_281;
_Bool _if_conditional288;
int len_282;
void* right_value386;
unsigned int* wstr_283;
char* str_284;
_Bool _if_conditional289;
void* right_value387;
void* right_value388;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value392;
struct sNode* __result174__;
_Bool _if_conditional296;
int sline_286;
void* right_value393;
void* right_value394;
struct list$1sNodeph* exps_287;
void* right_value395;
void* right_value396;
struct buffer* value_288;
_Bool _while_condtional36;
_Bool _if_conditional297;
char* p_289;
int sline_290;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value397;
struct sNode* exp_291;
char* p_292;
_Bool _while_condtional37;
_Bool _if_conditional301;
_Bool _if_conditional302;
int len_293;
_Bool _while_condtional38;
_Bool _if_conditional303;
_Bool _while_condtional39;
_Bool _if_conditional304;
void* right_value398;
struct sNode* exp_294;
_Bool _if_conditional305;
_Bool _if_conditional306;
int sline2_295;
_Bool _if_conditional307;
void* right_value399;
void* right_value400;
void* right_value401;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value406;
struct sNode* __result177__;
_Bool _if_conditional316;
char* p_297;
_Bool no_comma_298;
void* right_value407;
struct sNode* node_299;
char* p2_300;
void* right_value408;
void* right_value409;
struct buffer* first_element_source_301;
void* right_value410;
void* right_value411;
struct list$1sNodeph* list_elements_302;
void* right_value412;
void* right_value413;
struct list$1sNodeph* map_keys_303;
void* right_value414;
void* right_value415;
struct list$1sNodeph* map_elements_304;
_Bool _if_conditional317;
_Bool no_comma_305;
void* right_value416;
struct sNode* node2_306;
_Bool _if_conditional318;
void* right_value417;
void* right_value418;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value423;
struct sNode* __result180__;
int __exception_result_var_b1;
_Bool _while_condtional40;
_Bool no_comma_308;
void* right_value424;
struct sNode* node2_309;
int __exception_result_var_b2;
void* right_value425;
struct sNode* node3_310;
_Bool _if_conditional327;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value426;
void* right_value427;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value432;
struct sNode* __result183__;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _while_condtional41;
_Bool no_comma_312;
void* right_value433;
struct sNode* node2_313;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value434;
void* right_value435;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value439;
struct sNode* __result186__;
void* right_value440;
struct sNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_235, 0, sizeof(int));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&exps_236, 0, sizeof(struct list$1sNodeph*));
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&value_237, 0, sizeof(struct buffer*));
memset(&head_of_last_line_238, 0, sizeof(char*));
memset(&len_239, 0, sizeof(int));
right_value347 = (void*)0;
memset(&exp_240, 0, sizeof(struct sNode*));
memset(&sline2_241, 0, sizeof(int));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value355 = (void*)0;
memset(&sline_243, 0, sizeof(int));
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&value_244, 0, sizeof(struct buffer*));
memset(&p_245, 0, sizeof(char*));
memset(&sline_246, 0, sizeof(int));
memset(&sline2_247, 0, sizeof(int));
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value364 = (void*)0;
memset(&sline_249, 0, sizeof(int));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&buf_250, 0, sizeof(struct buffer*));
memset(&global_251, 0, sizeof(_Bool));
memset(&ignore_case_252, 0, sizeof(_Bool));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value373 = (void*)0;
memset(&c_254, 0, sizeof(int));
memset(&n_255, 0, sizeof(int));
memset(&n_256, 0, sizeof(int));
memset(&n_259, 0, sizeof(unsigned long long int));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value378 = (void*)0;
memset(&c_261, 0, sizeof(unsigned int));
memset(&n_262, 0, sizeof(int));
memset(&n_263, 0, sizeof(int));
memset(&n_266, 0, sizeof(unsigned long long int));
memset(&p2_267, 0, sizeof(unsigned char));
memset(&size_268, 0, sizeof(int));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value383 = (void*)0;
memset(&sline_271, 0, sizeof(int));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&value_272, 0, sizeof(struct buffer*));
memset(&p_273, 0, sizeof(char*));
memset(&sline_274, 0, sizeof(int));
memset(&len_275, 0, sizeof(int));
memset(&n_276, 0, sizeof(int));
memset(&lont_279, 0, sizeof(unsigned long int));
memset(&n_280, 0, sizeof(int));
memset(&sline2_281, 0, sizeof(int));
memset(&len_282, 0, sizeof(int));
right_value386 = (void*)0;
memset(&wstr_283, 0, sizeof(unsigned int*));
memset(&str_284, 0, sizeof(char*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value392 = (void*)0;
memset(&sline_286, 0, sizeof(int));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&exps_287, 0, sizeof(struct list$1sNodeph*));
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&value_288, 0, sizeof(struct buffer*));
memset(&p_289, 0, sizeof(char*));
memset(&sline_290, 0, sizeof(int));
right_value397 = (void*)0;
memset(&exp_291, 0, sizeof(struct sNode*));
memset(&p_292, 0, sizeof(char*));
memset(&len_293, 0, sizeof(int));
right_value398 = (void*)0;
memset(&exp_294, 0, sizeof(struct sNode*));
memset(&sline2_295, 0, sizeof(int));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value406 = (void*)0;
memset(&p_297, 0, sizeof(char*));
memset(&no_comma_298, 0, sizeof(_Bool));
right_value407 = (void*)0;
memset(&node_299, 0, sizeof(struct sNode*));
memset(&p2_300, 0, sizeof(char*));
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&first_element_source_301, 0, sizeof(struct buffer*));
right_value410 = (void*)0;
right_value411 = (void*)0;
memset(&list_elements_302, 0, sizeof(struct list$1sNodeph*));
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&map_keys_303, 0, sizeof(struct list$1sNodeph*));
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&map_elements_304, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_305, 0, sizeof(_Bool));
right_value416 = (void*)0;
memset(&node2_306, 0, sizeof(struct sNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value423 = (void*)0;
memset(&no_comma_308, 0, sizeof(_Bool));
right_value424 = (void*)0;
memset(&node2_309, 0, sizeof(struct sNode*));
right_value425 = (void*)0;
memset(&node3_310, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value432 = (void*)0;
memset(&no_comma_312, 0, sizeof(_Bool));
right_value433 = (void*)0;
memset(&node2_313, 0, sizeof(struct sNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
    # 1828 "06str.c"
    # 864 "06str.c"
    if(_if_conditional211=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional211) {
        # 865 "06str.c"
        info->p+=4;
        # 866 "06str.c"
        info->sline++;
        # 868 "06str.c"
        sline_235=info->sline;
        # 870 "06str.c"
        exps_236=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value344=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value343=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 870, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value343,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value344,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 871 "06str.c"
        value_237=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value345=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "buffer"))))))));
        come_call_finalizer3(right_value345,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value346,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 873 "06str.c"
        head_of_last_line_238=((void*)0);
        # 1018 "06str.c"
        while(_while_condtional21=1,        _while_condtional21) {
            # 1016 "06str.c"
            # 877 "06str.c"
            if(_if_conditional212=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional212) {
                # 882 "06str.c"
                # 878 "06str.c"
                if(head_of_last_line_238) {
                    # 879 "06str.c"
                    buffer_trim(value_237,info->p-head_of_last_line_238);
                }
                # 882 "06str.c"
                info->p+=3;
                # 884 "06str.c"
                skip_spaces_and_lf(info);
                # 885 "06str.c"
                break;
            }
            else {
                # 1016 "06str.c"
                # 887 "06str.c"
                if(_if_conditional214=*info->p==37,                _if_conditional214) {
                    # 888 "06str.c"
                    buffer_append_char(value_237,37);
                    # 889 "06str.c"
                    buffer_append_char(value_237,37);
                    # 890 "06str.c"
                    info->p++;
                }
                else {
                    # 1016 "06str.c"
                    # 892 "06str.c"
                    if(_if_conditional215=*info->p==34,                    _if_conditional215) {
                        # 893 "06str.c"
                        buffer_append_char(value_237,92);
                        # 894 "06str.c"
                        buffer_append_char(value_237,34);
                        # 895 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1016 "06str.c"
                        # 908 "06str.c"
                        if(_if_conditional216=*info->p==92,                        _if_conditional216) {
                            # 909 "06str.c"
                            buffer_append_char(value_237,92);
                            # 910 "06str.c"
                            info->p++;
                            # 995 "06str.c"
                            # 912 "06str.c"
                            if(_if_conditional217=xisdigit(*info->p),                            _if_conditional217) {
                                # 913 "06str.c"
                                len_239=0;
                                # 919 "06str.c"
                                while(_while_condtional22=xisdigit(*info->p)&&len_239<3,                                _while_condtional22) {
                                    # 915 "06str.c"
                                    buffer_append_char(value_237,*info->p);
                                    # 916 "06str.c"
                                    info->p++;
                                    # 917 "06str.c"
                                    len_239++;
                                }
                            }
                            else {
                                # 995 "06str.c"
                                # 920 "06str.c"
                                if(_if_conditional218=*info->p==120||*info->p==88,                                _if_conditional218) {
                                    # 921 "06str.c"
                                    buffer_append_char(value_237,*info->p);
                                    # 922 "06str.c"
                                    info->p++;
                                    # 928 "06str.c"
                                    while(_while_condtional23=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional23) {
                                        # 925 "06str.c"
                                        buffer_append_char(value_237,*info->p);
                                        # 926 "06str.c"
                                        info->p++;
                                    }
                                }
                                else {
                                    # 995 "06str.c"
                                    # 929 "06str.c"
                                    if(_if_conditional219=*info->p==123,                                    _if_conditional219) {
                                        # 930 "06str.c"
                                        info->p++;
                                        # 932 "06str.c"
                                        exp_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_v13(info))));
                                        if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 934 "06str.c"
                                        list$1sNodeph_add(exps_236,(struct sNode*)come_increment_ref_count(exp_240));
                                        # 940 "06str.c"
                                        # 936 "06str.c"
                                        if(_if_conditional220=*info->p==125,                                        _if_conditional220) {
                                            # 937 "06str.c"
                                            info->p++;
                                        }
                                        # 940 "06str.c"
                                        buffer_append_str(value_237,"%s");
                                        if(exp_240) { exp_240 = come_decrement_ref_count2(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 994 "06str.c"
                                        switch (*info->p) {
                                            # 945 "06str.c"
                                            case 48:
                                            # 945 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 946 "06str.c"
                                            info->p++;
                                            # 947 "06str.c"
                                            break;
                                            # 950 "06str.c"
                                            case 110:
                                            # 950 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 951 "06str.c"
                                            info->p++;
                                            # 952 "06str.c"
                                            break;
                                            # 955 "06str.c"
                                            case 116:
                                            # 955 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 956 "06str.c"
                                            info->p++;
                                            # 957 "06str.c"
                                            break;
                                            # 960 "06str.c"
                                            case 114:
                                            # 960 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 961 "06str.c"
                                            info->p++;
                                            # 962 "06str.c"
                                            break;
                                            # 965 "06str.c"
                                            case 118:
                                            # 965 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 966 "06str.c"
                                            info->p++;
                                            # 967 "06str.c"
                                            break;
                                            # 970 "06str.c"
                                            case 102:
                                            # 970 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 971 "06str.c"
                                            info->p++;
                                            # 972 "06str.c"
                                            break;
                                            # 975 "06str.c"
                                            case 97:
                                            # 975 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 976 "06str.c"
                                            info->p++;
                                            # 977 "06str.c"
                                            break;
                                            # 980 "06str.c"
                                            case 98:
                                            # 980 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 981 "06str.c"
                                            info->p++;
                                            # 982 "06str.c"
                                            break;
                                            # 985 "06str.c"
                                            case 92:
                                            # 985 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 986 "06str.c"
                                            info->p++;
                                            # 987 "06str.c"
                                            break;
                                            # 990 "06str.c"
                                            default:
                                            # 990 "06str.c"
                                            buffer_append_char(value_237,*info->p);
                                            # 991 "06str.c"
                                            info->p++;
                                            # 992 "06str.c"
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            # 1016 "06str.c"
                            # 996 "06str.c"
                            if(_if_conditional221=*info->p==0,                            _if_conditional221) {
                                # 997 "06str.c"
                                sline2_241=info->sline;
                                # 998 "06str.c"
                                info->sline=sline_235;
                                # 999 "06str.c"
                                err_msg(info,"close \" to make embbeded string value");
                                # 1000 "06str.c"
                                exit(2);
                            }
                            else {
                                # 1015 "06str.c"
                                # 1003 "06str.c"
                                if(_if_conditional222=*info->p==10,                                _if_conditional222) {
                                    # 1004 "06str.c"
                                    buffer_append_char(value_237,92);
                                    # 1005 "06str.c"
                                    buffer_append_char(value_237,110);
                                    # 1006 "06str.c"
                                    info->p++;
                                    # 1007 "06str.c"
                                    info->sline++;
                                    # 1009 "06str.c"
                                    head_of_last_line_238=info->p;
                                }
                                else {
                                    # 1012 "06str.c"
                                    buffer_append_char(value_237,*info->p);
                                    # 1013 "06str.c"
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        # 1018 "06str.c"
        skip_spaces_and_lf(info);
        # 1020 "06str.c"
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1020, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value350=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value348=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1020, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value349=buffer_to_string(value_237)))),(struct list$1sNodeph*)come_increment_ref_count(exps_236),sline_235,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sSStringNode_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result159__ = __result_obj__ = ((struct sNode*)(right_value355=_inf_value1));
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value348,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value350,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result159__;
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 1828 "06str.c"
        # 1022 "06str.c"
        if(_if_conditional231=*info->p==34,        _if_conditional231) {
            # 1024 "06str.c"
            info->p++;
            # 1026 "06str.c"
            sline_243=info->sline;
            # 1028 "06str.c"
            value_244=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value357=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value356=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1028, "buffer"))))))));
            come_call_finalizer3(right_value356,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value357,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 1078 "06str.c"
            while(_while_condtional24=1,            _while_condtional24) {
                # 1076 "06str.c"
                # 1031 "06str.c"
                if(_if_conditional232=*info->p==34,                _if_conditional232) {
                    # 1032 "06str.c"
                    info->p++;
                    # 1034 "06str.c"
                    p_245=info->p;
                    # 1035 "06str.c"
                    sline_246=info->sline;
                    # 1037 "06str.c"
                    skip_spaces_and_lf(info);
                    # 1041 "06str.c"
                    parse_sharp_v5(info);
                    # 1049 "06str.c"
                    # 1041 "06str.c"
                    if(_if_conditional233=*info->p==34,                    _if_conditional233) {
                        # 1042 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1045 "06str.c"
                        info->p=p_245;
                        # 1046 "06str.c"
                        info->sline=sline_246;
                        # 1047 "06str.c"
                        break;
                    }
                }
                else {
                    # 1076 "06str.c"
                    # 1050 "06str.c"
                    if(_if_conditional234=*info->p==92,                    _if_conditional234) {
                        # 1051 "06str.c"
                        buffer_append_char(value_244,92);
                        # 1052 "06str.c"
                        info->p++;
                        # 1062 "06str.c"
                        # 1054 "06str.c"
                        if(_if_conditional235=*info->p==34,                        _if_conditional235) {
                            # 1055 "06str.c"
                            buffer_append_char(value_244,34);
                            # 1056 "06str.c"
                            info->p++;
                        }
                        else {
                            # 1059 "06str.c"
                            buffer_append_char(value_244,*info->p);
                            # 1060 "06str.c"
                            info->p++;
                        }
                    }
                    else {
                        # 1076 "06str.c"
                        # 1063 "06str.c"
                        if(_if_conditional236=*info->p==0,                        _if_conditional236) {
                            # 1064 "06str.c"
                            sline2_247=info->sline;
                            # 1065 "06str.c"
                            info->sline=sline_243;
                            # 1066 "06str.c"
                            err_msg(info,"close \" to make c string value");
                            # 1067 "06str.c"
                            info->sline=sline2_247;
                            # 1068 "06str.c"
                            exit(2);
                        }
                        else {
                            # 1071 "06str.c"
                            # 1071 "06str.c"
                            if(_if_conditional237=*info->p==10,                            _if_conditional237) {
                                # 1071 "06str.c"
                                info->sline++;
                            }
                            # 1073 "06str.c"
                            buffer_append_char(value_244,*info->p);
                            # 1074 "06str.c"
                            info->p++;
                        }
                    }
                }
            }
            # 1078 "06str.c"
            skip_spaces_and_lf(info);
            # 1080 "06str.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1080, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value360=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value358=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1080, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value359=buffer_to_string(value_244)))),sline_243,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStrNode_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result162__ = __result_obj__ = ((struct sNode*)(right_value364=_inf_value2));
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value358,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value360,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result162__;
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 1828 "06str.c"
            # 1082 "06str.c"
            if(_if_conditional244=*info->p==47,            _if_conditional244) {
                # 1083 "06str.c"
                info->p++;
                # 1085 "06str.c"
                sline_249=info->sline;
                # 1087 "06str.c"
                buf_250=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1087, "buffer"))))))));
                come_call_finalizer3(right_value365,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value366,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                # 1108 "06str.c"
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    # 1106 "06str.c"
                    # 1089 "06str.c"
                    if(_if_conditional245=*info->p==92&&*(info->p+1)==47,                    _if_conditional245) {
                        # 1090 "06str.c"
                        info->p++;
                        # 1091 "06str.c"
                        buffer_append_char(buf_250,*info->p);
                        # 1092 "06str.c"
                        info->p++;
                    }
                    else {
                        # 1106 "06str.c"
                        # 1094 "06str.c"
                        if(_if_conditional246=*info->p==47,                        _if_conditional246) {
                            # 1095 "06str.c"
                            info->p++;
                            # 1096 "06str.c"
                            break;
                        }
                        else {
                            # 1106 "06str.c"
                            # 1098 "06str.c"
                            if(_if_conditional247=*info->p==0,                            _if_conditional247) {
                                # 1099 "06str.c"
                                err_msg(info,"require closing / for regex");
                                # 1100 "06str.c"
                                exit(5);
                            }
                            else {
                                # 1103 "06str.c"
                                buffer_append_char(buf_250,*info->p);
                                # 1104 "06str.c"
                                info->p++;
                            }
                        }
                    }
                }
                # 1108 "06str.c"
                global_251=(_Bool)0;
                # 1109 "06str.c"
                ignore_case_252=(_Bool)0;
                # 1124 "06str.c"
                while(_while_condtional26=*info->p==103||*info->p==105,                _while_condtional26) {
                    # 1122 "06str.c"
                    # 1111 "06str.c"
                    if(_if_conditional248=*info->p==103,                    _if_conditional248) {
                        # 1112 "06str.c"
                        info->p++;
                        # 1113 "06str.c"
                        global_251=(_Bool)1;
                    }
                    else {
                        # 1122 "06str.c"
                        # 1115 "06str.c"
                        if(_if_conditional249=*info->p==105,                        _if_conditional249) {
                            # 1116 "06str.c"
                            info->p++;
                            # 1117 "06str.c"
                            ignore_case_252=(_Bool)1;
                        }
                        else {
                            # 1120 "06str.c"
                            break;
                        }
                    }
                }
                # 1124 "06str.c"
                skip_spaces_and_lf(info);
                # 1126 "06str.c"
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1126, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value369=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value367=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1126, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value368=buffer_to_string(buf_250)))),global_251,ignore_case_252,sline_249,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sRegexNode_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result165__ = __result_obj__ = ((struct sNode*)(right_value373=_inf_value3));
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value367,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value369,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result165__;
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 1828 "06str.c"
                # 1128 "06str.c"
                if(_if_conditional258=*info->p==39,                _if_conditional258) {
                    # 1129 "06str.c"
                    info->p++;
                    # 1131 "06str.c"
                    # 1235 "06str.c"
                    # 1133 "06str.c"
                    if(_if_conditional259=*info->p==92,                    _if_conditional259) {
                        # 1134 "06str.c"
                        info->p++;
                        # 1229 "06str.c"
                        # 1136 "06str.c"
                        if(_if_conditional260=xisdigit(*info->p),                        _if_conditional260) {
                            # 1137 "06str.c"
                            n_255=0;
                            # 1143 "06str.c"
                            while(_while_condtional27=xisdigit(*info->p),                            _while_condtional27) {
                                # 1139 "06str.c"
                                n_255=n_255*8+*info->p-48;
                                # 1140 "06str.c"
                                info->p++;
                            }
                            # 1143 "06str.c"
                            c_254=n_255;
                        }
                        else {
                            # 1228 "06str.c"
                            switch (*info->p) {
                                # 1148 "06str.c"
                                case 110:
                                # 1148 "06str.c"
                                c_254=10;
                                # 1149 "06str.c"
                                info->p++;
                                # 1150 "06str.c"
                                break;
                                # 1153 "06str.c"
                                case 116:
                                # 1153 "06str.c"
                                c_254=9;
                                # 1154 "06str.c"
                                info->p++;
                                # 1155 "06str.c"
                                break;
                                # 1158 "06str.c"
                                case 114:
                                # 1158 "06str.c"
                                c_254=13;
                                # 1159 "06str.c"
                                info->p++;
                                # 1160 "06str.c"
                                break;
                                # 1163 "06str.c"
                                case 97:
                                # 1163 "06str.c"
                                c_254=7;
                                # 1164 "06str.c"
                                info->p++;
                                # 1165 "06str.c"
                                break;
                                # 1168 "06str.c"
                                case 102:
                                # 1168 "06str.c"
                                c_254=12;
                                # 1169 "06str.c"
                                info->p++;
                                # 1170 "06str.c"
                                break;
                                # 1173 "06str.c"
                                case 118:
                                # 1173 "06str.c"
                                c_254=11;
                                # 1174 "06str.c"
                                info->p++;
                                # 1175 "06str.c"
                                break;
                                # 1178 "06str.c"
                                case 98:
                                # 1178 "06str.c"
                                c_254=8;
                                # 1179 "06str.c"
                                info->p++;
                                # 1180 "06str.c"
                                break;
                                # 1183 "06str.c"
                                case 92:
                                # 1183 "06str.c"
                                c_254=92;
                                # 1184 "06str.c"
                                info->p++;
                                # 1185 "06str.c"
                                break;
                                # 1188 "06str.c"
                                case 48:
                                # 1188 "06str.c"
                                c_254=0;
                                # 1189 "06str.c"
                                info->p++;
                                # 1201 "06str.c"
                                # 1191 "06str.c"
                                if(_if_conditional261=xisdigit(*info->p),                                _if_conditional261) {
                                    # 1192 "06str.c"
                                    n_256=0;
                                    # 1199 "06str.c"
                                    while(_while_condtional28=xisdigit(*info->p),                                    _while_condtional28) {
                                        # 1194 "06str.c"
                                        n_256=n_256*8+*info->p-48;
                                        # 1195 "06str.c"
                                        info->p++;
                                        # 1196 "06str.c"
                                        skip_spaces_and_lf(info);
                                    }
                                    # 1199 "06str.c"
                                    c_254=n_256;
                                }
                                # 1201 "06str.c"
                                break;
                                # 1204 "06str.c"
                                case 120:
                                # 1204 "06str.c"
                                case 88:
                                # 1221 "06str.c"
                                {
                                    # 1205 "06str.c"
                                    info->p++;
                                    # 1207 "06str.c"
                                    char buf_257[128];
                                    memset(&buf_257, 0, sizeof(char)                                    *(128)                                    );
                                    # 1208 "06str.c"
                                    strncpy(buf_257,"0x",128);
                                    # 1217 "06str.c"
                                    while(_while_condtional29=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional29) {
                                        # 1210 "06str.c"
                                        char buf2_258[2];
                                        memset(&buf2_258, 0, sizeof(char)                                        *(2)                                        );
                                        # 1211 "06str.c"
                                        buf2_258[0]=*info->p;
                                        # 1212 "06str.c"
                                        buf2_258[1]=0;
                                        # 1213 "06str.c"
                                        info->p++;
                                        # 1214 "06str.c"
                                        strncat(buf_257,buf2_258,128);
                                    }
                                    # 1217 "06str.c"
                                    n_259=strtoll(buf_257,((void*)0),0);
                                    # 1219 "06str.c"
                                    c_254=n_259;
                                }
                                # 1221 "06str.c"
                                break;
                                # 1224 "06str.c"
                                default:
                                # 1224 "06str.c"
                                c_254=*info->p;
                                # 1225 "06str.c"
                                info->p++;
                                # 1226 "06str.c"
                                break;
                            }
                        }
                    }
                    else {
                        # 1231 "06str.c"
                        c_254=*info->p;
                        # 1232 "06str.c"
                        info->p++;
                    }
                    # 1245 "06str.c"
                    # 1235 "06str.c"
                    if(_if_conditional262=*info->p!=39,                    _if_conditional262) {
                        # 1236 "06str.c"
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        # 1239 "06str.c"
                        info->p++;
                        # 1241 "06str.c"
                        skip_spaces_and_lf(info);
                        # 1243 "06str.c"
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1243, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value375=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value374=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1243, "sCharNode")))),c_254,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sCharNode_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result168__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value4));
                        come_call_finalizer3(right_value374,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value375,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result168__;
                    }
                }
                else {
                    # 1828 "06str.c"
                    # 1247 "06str.c"
                    if(_if_conditional268=*info->p==76&&*(info->p+1)==39,                    _if_conditional268) {
                        # 1248 "06str.c"
                        info->p+=2;
                        # 1250 "06str.c"
                        # 1370 "06str.c"
                        # 1252 "06str.c"
                        if(_if_conditional269=*info->p==92,                        _if_conditional269) {
                            # 1253 "06str.c"
                            info->p++;
                            # 1334 "06str.c"
                            # 1255 "06str.c"
                            if(_if_conditional270=xisdigit(*info->p),                            _if_conditional270) {
                                # 1256 "06str.c"
                                n_262=0;
                                # 1262 "06str.c"
                                while(_while_condtional30=xisdigit(*info->p),                                _while_condtional30) {
                                    # 1258 "06str.c"
                                    n_262=n_262*8+*info->p-48;
                                    # 1259 "06str.c"
                                    info->p++;
                                }
                                # 1262 "06str.c"
                                c_261=n_262;
                            }
                            else {
                                # 1333 "06str.c"
                                switch (*info->p) {
                                    # 1267 "06str.c"
                                    case 110:
                                    # 1267 "06str.c"
                                    c_261=10;
                                    # 1268 "06str.c"
                                    info->p++;
                                    # 1269 "06str.c"
                                    break;
                                    # 1272 "06str.c"
                                    case 116:
                                    # 1272 "06str.c"
                                    c_261=9;
                                    # 1273 "06str.c"
                                    info->p++;
                                    # 1274 "06str.c"
                                    break;
                                    # 1277 "06str.c"
                                    case 114:
                                    # 1277 "06str.c"
                                    c_261=13;
                                    # 1278 "06str.c"
                                    info->p++;
                                    # 1279 "06str.c"
                                    break;
                                    # 1282 "06str.c"
                                    case 97:
                                    # 1282 "06str.c"
                                    c_261=7;
                                    # 1283 "06str.c"
                                    info->p++;
                                    # 1284 "06str.c"
                                    break;
                                    # 1287 "06str.c"
                                    case 92:
                                    # 1287 "06str.c"
                                    c_261=92;
                                    # 1288 "06str.c"
                                    info->p++;
                                    # 1289 "06str.c"
                                    break;
                                    # 1292 "06str.c"
                                    case 48:
                                    # 1292 "06str.c"
                                    c_261=0;
                                    # 1294 "06str.c"
                                    info->p++;
                                    # 1306 "06str.c"
                                    # 1296 "06str.c"
                                    if(_if_conditional271=xisdigit(*info->p),                                    _if_conditional271) {
                                        # 1297 "06str.c"
                                        n_263=0;
                                        # 1304 "06str.c"
                                        while(_while_condtional31=xisdigit(*info->p),                                        _while_condtional31) {
                                            # 1299 "06str.c"
                                            n_263=n_263*8+*info->p-48;
                                            # 1300 "06str.c"
                                            info->p++;
                                            # 1301 "06str.c"
                                            skip_spaces_and_lf(info);
                                        }
                                        # 1304 "06str.c"
                                        c_261=n_263;
                                    }
                                    # 1306 "06str.c"
                                    break;
                                    # 1309 "06str.c"
                                    case 120:
                                    # 1309 "06str.c"
                                    case 88:
                                    # 1326 "06str.c"
                                    {
                                        # 1310 "06str.c"
                                        info->p++;
                                        # 1312 "06str.c"
                                        char buf_264[128];
                                        memset(&buf_264, 0, sizeof(char)                                        *(128)                                        );
                                        # 1313 "06str.c"
                                        strncpy(buf_264,"0x",128);
                                        # 1322 "06str.c"
                                        while(_while_condtional32=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional32) {
                                            # 1315 "06str.c"
                                            char buf2_265[2];
                                            memset(&buf2_265, 0, sizeof(char)                                            *(2)                                            );
                                            # 1316 "06str.c"
                                            buf2_265[0]=*info->p;
                                            # 1317 "06str.c"
                                            buf2_265[1]=0;
                                            # 1318 "06str.c"
                                            info->p++;
                                            # 1319 "06str.c"
                                            strncat(buf_264,buf2_265,128);
                                        }
                                        # 1322 "06str.c"
                                        n_266=strtoll(buf_264,((void*)0),0);
                                        # 1324 "06str.c"
                                        c_261=n_266;
                                    }
                                    # 1326 "06str.c"
                                    break;
                                    # 1329 "06str.c"
                                    default:
                                    # 1329 "06str.c"
                                    c_261=*info->p;
                                    # 1330 "06str.c"
                                    info->p++;
                                    # 1331 "06str.c"
                                    break;
                                }
                            }
                        }
                        else {
                            # 1336 "06str.c"
                            p2_267=*(unsigned char*)info->p;
                            # 1368 "06str.c"
                            # 1339 "06str.c"
                            if(_if_conditional272=p2_267>127,                            _if_conditional272) {
                                # 1340 "06str.c"
                                # 1341 "06str.c"
                                char str_269[4+1];
                                memset(&str_269, 0, sizeof(char)                                *(4+1)                                );
                                # 1343 "06str.c"
                                size_268=((p2_267&128)>>7)+((p2_267&64)>>6)+((p2_267&32)>>5)+((p2_267&16)>>4);
                                # 1362 "06str.c"
                                # 1345 "06str.c"
                                if(_if_conditional273=size_268>4,                                _if_conditional273) {
                                    # 1346 "06str.c"
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    # 1347 "06str.c"
                                    info->err_num++;
                                }
                                else {
                                    # 1350 "06str.c"
                                    memcpy(str_269,info->p,size_268);
                                    # 1351 "06str.c"
                                    str_269[size_268]=0;
                                    # 1360 "06str.c"
                                    # 1353 "06str.c"
                                    if(_if_conditional274=mbtowc(&c_261,str_269,size_268)<0,                                    _if_conditional274) {
                                        # 1354 "06str.c"
                                        perror("mbtowc");
                                        # 1355 "06str.c"
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        # 1356 "06str.c"
                                        info->err_num++;
                                        # 1357 "06str.c"
                                        c_261=0;
                                    }
                                    # 1360 "06str.c"
                                    info->p+=size_268;
                                }
                            }
                            else {
                                # 1365 "06str.c"
                                c_261=*info->p;
                                # 1366 "06str.c"
                                info->p++;
                            }
                        }
                        # 1381 "06str.c"
                        # 1370 "06str.c"
                        if(_if_conditional275=*info->p!=39,                        _if_conditional275) {
                            # 1371 "06str.c"
                            err_msg(info,"close \' to make character value");
                            # 1372 "06str.c"
                            info->err_num++;
                        }
                        else {
                            # 1375 "06str.c"
                            info->p++;
                            # 1377 "06str.c"
                            skip_spaces_and_lf(info);
                            # 1379 "06str.c"
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1379, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value380=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value379=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1379, "sWCharNode")))),c_261,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sWCharNode_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result171__ = __result_obj__ = ((struct sNode*)(right_value383=_inf_value5));
                            come_call_finalizer3(right_value379,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value380,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result171__;
                        }
                    }
                    else {
                        # 1828 "06str.c"
                        # 1383 "06str.c"
                        if(_if_conditional281=*info->p==76&&*(info->p+1)==34,                        _if_conditional281) {
                            # 1384 "06str.c"
                            info->p+=2;
                            # 1386 "06str.c"
                            sline_271=info->sline;
                            # 1388 "06str.c"
                            value_272=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1388, "buffer"))))))));
                            come_call_finalizer3(right_value384,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            # 1507 "06str.c"
                            while(_while_condtional33=1,                            _while_condtional33) {
                                # 1505 "06str.c"
                                # 1391 "06str.c"
                                if(_if_conditional282=*info->p==34,                                _if_conditional282) {
                                    # 1392 "06str.c"
                                    info->p++;
                                    # 1394 "06str.c"
                                    p_273=info->p;
                                    # 1395 "06str.c"
                                    sline_274=info->sline;
                                    # 1397 "06str.c"
                                    skip_spaces_and_lf(info);
                                    # 1407 "06str.c"
                                    # 1399 "06str.c"
                                    if(_if_conditional283=*info->p==34,                                    _if_conditional283) {
                                        # 1400 "06str.c"
                                        info->p++;
                                    }
                                    else {
                                        # 1403 "06str.c"
                                        info->p=p_273;
                                        # 1404 "06str.c"
                                        info->sline=sline_274;
                                        # 1405 "06str.c"
                                        break;
                                    }
                                }
                                else {
                                    # 1505 "06str.c"
                                    # 1408 "06str.c"
                                    if(_if_conditional284=*info->p==92,                                    _if_conditional284) {
                                        # 1409 "06str.c"
                                        info->p++;
                                        # 1492 "06str.c"
                                        # 1411 "06str.c"
                                        if(_if_conditional285=xisdigit(*info->p),                                        _if_conditional285) {
                                            # 1412 "06str.c"
                                            len_275=0;
                                            # 1413 "06str.c"
                                            n_276=0;
                                            # 1420 "06str.c"
                                            while(_while_condtional34=xisdigit(*info->p)&&len_275<3,                                            _while_condtional34) {
                                                # 1415 "06str.c"
                                                n_276=n_276*8+*info->p-48;
                                                # 1416 "06str.c"
                                                info->p++;
                                                # 1417 "06str.c"
                                                len_275++;
                                            }
                                            # 1420 "06str.c"
                                            buffer_append_char(value_272,n_276);
                                        }
                                        else {
                                            # 1492 "06str.c"
                                            # 1422 "06str.c"
                                            if(_if_conditional286=*info->p==120||*info->p==88,                                            _if_conditional286) {
                                                # 1423 "06str.c"
                                                info->p++;
                                                # 1425 "06str.c"
                                                char buf_277[128];
                                                memset(&buf_277, 0, sizeof(char)                                                *(128)                                                );
                                                # 1426 "06str.c"
                                                strncpy(buf_277,"0x",128);
                                                # 1435 "06str.c"
                                                while(_while_condtional35=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional35) {
                                                    # 1428 "06str.c"
                                                    char buf2_278[2];
                                                    memset(&buf2_278, 0, sizeof(char)                                                    *(2)                                                    );
                                                    # 1429 "06str.c"
                                                    buf2_278[0]=*info->p;
                                                    # 1430 "06str.c"
                                                    buf2_278[1]=0;
                                                    # 1431 "06str.c"
                                                    info->p++;
                                                    # 1432 "06str.c"
                                                    strncat(buf_277,buf2_278,128);
                                                }
                                                # 1435 "06str.c"
                                                # 1435 "06str.c"
                                                n_280=strtoll(buf_277,((void*)0),0);
                                                # 1437 "06str.c"
                                                buffer_append_char(value_272,(char)n_280);
                                            }
                                            else {
                                                # 1491 "06str.c"
                                                switch (*info->p) {
                                                    # 1442 "06str.c"
                                                    case 48:
                                                    # 1442 "06str.c"
                                                    buffer_append_char(value_272,0);
                                                    # 1443 "06str.c"
                                                    info->p++;
                                                    # 1444 "06str.c"
                                                    break;
                                                    # 1447 "06str.c"
                                                    case 110:
                                                    # 1447 "06str.c"
                                                    buffer_append_char(value_272,10);
                                                    # 1448 "06str.c"
                                                    info->p++;
                                                    # 1449 "06str.c"
                                                    break;
                                                    # 1452 "06str.c"
                                                    case 116:
                                                    # 1452 "06str.c"
                                                    buffer_append_char(value_272,9);
                                                    # 1453 "06str.c"
                                                    info->p++;
                                                    # 1454 "06str.c"
                                                    break;
                                                    # 1457 "06str.c"
                                                    case 114:
                                                    # 1457 "06str.c"
                                                    buffer_append_char(value_272,13);
                                                    # 1458 "06str.c"
                                                    info->p++;
                                                    # 1459 "06str.c"
                                                    break;
                                                    # 1462 "06str.c"
                                                    case 118:
                                                    # 1462 "06str.c"
                                                    buffer_append_char(value_272,11);
                                                    # 1463 "06str.c"
                                                    info->p++;
                                                    # 1464 "06str.c"
                                                    break;
                                                    # 1467 "06str.c"
                                                    case 102:
                                                    # 1467 "06str.c"
                                                    buffer_append_char(value_272,12);
                                                    # 1468 "06str.c"
                                                    info->p++;
                                                    # 1469 "06str.c"
                                                    break;
                                                    # 1472 "06str.c"
                                                    case 97:
                                                    # 1472 "06str.c"
                                                    buffer_append_char(value_272,7);
                                                    # 1473 "06str.c"
                                                    info->p++;
                                                    # 1474 "06str.c"
                                                    break;
                                                    # 1477 "06str.c"
                                                    case 98:
                                                    # 1477 "06str.c"
                                                    buffer_append_char(value_272,8);
                                                    # 1478 "06str.c"
                                                    info->p++;
                                                    # 1479 "06str.c"
                                                    break;
                                                    # 1482 "06str.c"
                                                    case 92:
                                                    # 1482 "06str.c"
                                                    buffer_append_char(value_272,92);
                                                    # 1483 "06str.c"
                                                    info->p++;
                                                    # 1484 "06str.c"
                                                    break;
                                                    # 1487 "06str.c"
                                                    default:
                                                    # 1487 "06str.c"
                                                    buffer_append_char(value_272,*info->p);
                                                    # 1488 "06str.c"
                                                    info->p++;
                                                    # 1489 "06str.c"
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        # 1505 "06str.c"
                                        # 1493 "06str.c"
                                        if(_if_conditional287=*info->p==0,                                        _if_conditional287) {
                                            # 1494 "06str.c"
                                            sline2_281=info->sline;
                                            # 1495 "06str.c"
                                            info->sline=sline_271;
                                            # 1496 "06str.c"
                                            err_msg(info,"close \" to make c string value");
                                            # 1497 "06str.c"
                                            exit(2);
                                        }
                                        else {
                                            # 1500 "06str.c"
                                            # 1500 "06str.c"
                                            if(_if_conditional288=*info->p==10,                                            _if_conditional288) {
                                                # 1500 "06str.c"
                                                info->sline++;
                                            }
                                            # 1502 "06str.c"
                                            buffer_append_char(value_272,*info->p);
                                            # 1503 "06str.c"
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            # 1507 "06str.c"
                            skip_spaces_and_lf(info);
                            # 1509 "06str.c"
                            len_282=value_272->len;
                            # 1511 "06str.c"
                            wstr_283=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value386=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_282+1)), "06str.c", 1511, "int"))));
                            right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 1513 "06str.c"
                            str_284=value_272->buf;
                            # 1520 "06str.c"
                            # 1515 "06str.c"
                            if(_if_conditional289=mbstowcs(wstr_283,str_284,len_282+1)<0,                            _if_conditional289) {
                                # 1516 "06str.c"
                                perror("mbstowcs");
                                # 1517 "06str.c"
                                exit(1);
                            }
                            # 1520 "06str.c"
                            wstr_283[len_282]=0;
                            # 1522 "06str.c"
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1522, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value388=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value387=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1522, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_283),sline_271,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sWStringNode_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result174__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value6));
                            come_call_finalizer3(value_272,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_283 = come_decrement_ref_count2(wstr_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value387,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value388,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result174__;
                            come_call_finalizer3(value_272,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_283 = come_decrement_ref_count2(wstr_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            # 1828 "06str.c"
                            # 1525 "06str.c"
                            if(_if_conditional296=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional296) {
                                # 1526 "06str.c"
                                info->p+=2;
                                # 1528 "06str.c"
                                sline_286=info->sline;
                                # 1530 "06str.c"
                                exps_287=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value394=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value393=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1530, "list$1sNodeph"))))))));
                                come_call_finalizer3(right_value393,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value394,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 1531 "06str.c"
                                value_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1531, "buffer"))))))));
                                come_call_finalizer3(right_value395,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value396,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                # 1674 "06str.c"
                                while(_while_condtional36=1,                                _while_condtional36) {
                                    # 1672 "06str.c"
                                    # 1534 "06str.c"
                                    if(_if_conditional297=*info->p==34,                                    _if_conditional297) {
                                        # 1535 "06str.c"
                                        info->p++;
                                        # 1537 "06str.c"
                                        p_289=info->p;
                                        # 1538 "06str.c"
                                        sline_290=info->sline;
                                        # 1540 "06str.c"
                                        skip_spaces_and_lf(info);
                                        # 1550 "06str.c"
                                        # 1542 "06str.c"
                                        if(_if_conditional298=*info->p==34,                                        _if_conditional298) {
                                            # 1543 "06str.c"
                                            info->p++;
                                        }
                                        else {
                                            # 1546 "06str.c"
                                            info->p=p_289;
                                            # 1547 "06str.c"
                                            info->sline=sline_290;
                                            # 1548 "06str.c"
                                            break;
                                        }
                                    }
                                    else {
                                        # 1672 "06str.c"
                                        # 1551 "06str.c"
                                        if(_if_conditional299=*info->p==37,                                        _if_conditional299) {
                                            # 1552 "06str.c"
                                            buffer_append_char(value_288,37);
                                            # 1553 "06str.c"
                                            buffer_append_char(value_288,37);
                                            # 1554 "06str.c"
                                            info->p++;
                                        }
                                        else {
                                            # 1672 "06str.c"
                                            # 1556 "06str.c"
                                            if(_if_conditional300=*info->p==36,                                            _if_conditional300) {
                                                # 1557 "06str.c"
                                                info->p++;
                                                # 1559 "06str.c"
                                                exp_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=expression_v13(info))));
                                                if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1561 "06str.c"
                                                list$1sNodeph_add(exps_287,(struct sNode*)come_increment_ref_count(exp_291));
                                                # 1563 "06str.c"
                                                buffer_append_str(value_288,"%s");
                                                # 1565 "06str.c"
                                                p_292=info->p-1;
                                                # 1570 "06str.c"
                                                while(_while_condtional37=*p_292==32||*p_292==9,                                                _while_condtional37) {
                                                    # 1567 "06str.c"
                                                    p_292--;
                                                }
                                                # 1570 "06str.c"
                                                info->p=p_292+1;
                                                if(exp_291) { exp_291 = come_decrement_ref_count2(exp_291, ((struct sNode*)exp_291)->finalize, ((struct sNode*)exp_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1672 "06str.c"
                                                # 1572 "06str.c"
                                                if(_if_conditional301=*info->p==92,                                                _if_conditional301) {
                                                    # 1573 "06str.c"
                                                    buffer_append_char(value_288,92);
                                                    # 1574 "06str.c"
                                                    info->p++;
                                                    # 1659 "06str.c"
                                                    # 1576 "06str.c"
                                                    if(_if_conditional302=xisdigit(*info->p),                                                    _if_conditional302) {
                                                        # 1577 "06str.c"
                                                        len_293=0;
                                                        # 1583 "06str.c"
                                                        while(_while_condtional38=xisdigit(*info->p)&&len_293<3,                                                        _while_condtional38) {
                                                            # 1579 "06str.c"
                                                            buffer_append_char(value_288,*info->p);
                                                            # 1580 "06str.c"
                                                            info->p++;
                                                            # 1581 "06str.c"
                                                            len_293++;
                                                        }
                                                    }
                                                    else {
                                                        # 1659 "06str.c"
                                                        # 1584 "06str.c"
                                                        if(_if_conditional303=*info->p==120||*info->p==88,                                                        _if_conditional303) {
                                                            # 1585 "06str.c"
                                                            buffer_append_char(value_288,*info->p);
                                                            # 1586 "06str.c"
                                                            info->p++;
                                                            # 1592 "06str.c"
                                                            while(_while_condtional39=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional39) {
                                                                # 1589 "06str.c"
                                                                buffer_append_char(value_288,*info->p);
                                                                # 1590 "06str.c"
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            # 1659 "06str.c"
                                                            # 1593 "06str.c"
                                                            if(_if_conditional304=*info->p==123,                                                            _if_conditional304) {
                                                                # 1594 "06str.c"
                                                                info->p++;
                                                                # 1596 "06str.c"
                                                                exp_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
                                                                if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1598 "06str.c"
                                                                list$1sNodeph_add(exps_287,(struct sNode*)come_increment_ref_count(exp_294));
                                                                # 1604 "06str.c"
                                                                # 1600 "06str.c"
                                                                if(_if_conditional305=*info->p==125,                                                                _if_conditional305) {
                                                                    # 1601 "06str.c"
                                                                    info->p++;
                                                                }
                                                                # 1604 "06str.c"
                                                                buffer_append_str(value_288,"%s");
                                                                if(exp_294) { exp_294 = come_decrement_ref_count2(exp_294, ((struct sNode*)exp_294)->finalize, ((struct sNode*)exp_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                # 1658 "06str.c"
                                                                switch (*info->p) {
                                                                    # 1609 "06str.c"
                                                                    case 48:
                                                                    # 1609 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1610 "06str.c"
                                                                    info->p++;
                                                                    # 1611 "06str.c"
                                                                    break;
                                                                    # 1614 "06str.c"
                                                                    case 110:
                                                                    # 1614 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1615 "06str.c"
                                                                    info->p++;
                                                                    # 1616 "06str.c"
                                                                    break;
                                                                    # 1619 "06str.c"
                                                                    case 116:
                                                                    # 1619 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1620 "06str.c"
                                                                    info->p++;
                                                                    # 1621 "06str.c"
                                                                    break;
                                                                    # 1624 "06str.c"
                                                                    case 114:
                                                                    # 1624 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1625 "06str.c"
                                                                    info->p++;
                                                                    # 1626 "06str.c"
                                                                    break;
                                                                    # 1629 "06str.c"
                                                                    case 118:
                                                                    # 1629 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1630 "06str.c"
                                                                    info->p++;
                                                                    # 1631 "06str.c"
                                                                    break;
                                                                    # 1634 "06str.c"
                                                                    case 102:
                                                                    # 1634 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1635 "06str.c"
                                                                    info->p++;
                                                                    # 1636 "06str.c"
                                                                    break;
                                                                    # 1639 "06str.c"
                                                                    case 97:
                                                                    # 1639 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1640 "06str.c"
                                                                    info->p++;
                                                                    # 1641 "06str.c"
                                                                    break;
                                                                    # 1644 "06str.c"
                                                                    case 98:
                                                                    # 1644 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1645 "06str.c"
                                                                    info->p++;
                                                                    # 1646 "06str.c"
                                                                    break;
                                                                    # 1649 "06str.c"
                                                                    case 92:
                                                                    # 1649 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1650 "06str.c"
                                                                    info->p++;
                                                                    # 1651 "06str.c"
                                                                    break;
                                                                    # 1654 "06str.c"
                                                                    default:
                                                                    # 1654 "06str.c"
                                                                    buffer_append_char(value_288,*info->p);
                                                                    # 1655 "06str.c"
                                                                    info->p++;
                                                                    # 1656 "06str.c"
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    # 1672 "06str.c"
                                                    # 1660 "06str.c"
                                                    if(_if_conditional306=*info->p==0,                                                    _if_conditional306) {
                                                        # 1661 "06str.c"
                                                        sline2_295=info->sline;
                                                        # 1662 "06str.c"
                                                        info->sline=sline_286;
                                                        # 1663 "06str.c"
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        # 1664 "06str.c"
                                                        exit(2);
                                                    }
                                                    else {
                                                        # 1667 "06str.c"
                                                        # 1667 "06str.c"
                                                        if(_if_conditional307=*info->p==10,                                                        _if_conditional307) {
                                                            # 1667 "06str.c"
                                                            info->sline++;
                                                        }
                                                        # 1669 "06str.c"
                                                        buffer_append_char(value_288,*info->p);
                                                        # 1670 "06str.c"
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                # 1674 "06str.c"
                                skip_spaces_and_lf(info);
                                # 1676 "06str.c"
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1676, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value401=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value399=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1676, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value400=buffer_to_string(value_288)))),(struct list$1sNodeph*)come_increment_ref_count(exps_287),sline_286,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sSStringNode_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result177__ = __result_obj__ = ((struct sNode*)(right_value406=_inf_value7));
                                come_call_finalizer3(exps_287,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value399,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value401,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result177__;
                                come_call_finalizer3(exps_287,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                # 1828 "06str.c"
                                # 1678 "06str.c"
                                if(_if_conditional316=*info->p==91,                                _if_conditional316) {
                                    # 1679 "06str.c"
                                    info->p++;
                                    # 1680 "06str.c"
                                    skip_spaces_and_lf(info);
                                    # 1682 "06str.c"
                                    p_297=info->p;
                                    # 1684 "06str.c"
                                    no_comma_298=info->no_comma;
                                    # 1685 "06str.c"
                                    info->no_comma=(_Bool)1;
                                    # 1687 "06str.c"
                                    node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=expression_v13(info))));
                                    if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 1689 "06str.c"
                                    info->no_comma=no_comma_298;
                                    # 1691 "06str.c"
                                    p2_300=info->p;
                                    # 1693 "06str.c"
                                    first_element_source_301=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value409=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value408=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1693, "buffer"))))))));
                                    come_call_finalizer3(right_value408,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value409,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1695 "06str.c"
                                    buffer_append(first_element_source_301,p_297,p2_300-p_297);
                                    # 1696 "06str.c"
                                    buffer_append_char(first_element_source_301,0);
                                    # 1698 "06str.c"
                                    list_elements_302=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value411=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value410=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1698, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value410,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value411,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1700 "06str.c"
                                    map_keys_303=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value413=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value412=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1700, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value412,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value413,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1701 "06str.c"
                                    map_elements_304=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value415=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value414=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1701, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value414,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value415,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 1818 "06str.c"
                                    # 1704 "06str.c"
                                    if(_if_conditional317=*info->p==58,                                    _if_conditional317) {
                                        # 1705 "06str.c"
                                        info->p++;
                                        # 1706 "06str.c"
                                        skip_spaces_and_lf(info);
                                        # 1708 "06str.c"
                                        list$1sNodeph_push_back(map_keys_303,(struct sNode*)come_increment_ref_count(node_299));
                                        # 1710 "06str.c"
                                        no_comma_305=info->no_comma;
                                        # 1711 "06str.c"
                                        info->no_comma=(_Bool)1;
                                        # 1713 "06str.c"
                                        node2_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=expression_v13(info))));
                                        if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 1715 "06str.c"
                                        info->no_comma=no_comma_305;
                                        # 1717 "06str.c"
                                        list$1sNodeph_push_back(map_elements_304,(struct sNode*)come_increment_ref_count(node2_306));
                                        # 1770 "06str.c"
                                        # 1719 "06str.c"
                                        if(_if_conditional318=*info->p==93,                                        _if_conditional318) {
                                            # 1720 "06str.c"
                                            info->p++;
                                            # 1721 "06str.c"
                                            skip_spaces_and_lf(info);
                                            # 1723 "06str.c"
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1723, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value418=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value417=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1723, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_303),(struct list$1sNodeph*)come_increment_ref_count(map_elements_304),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sMapNode_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result180__ = __result_obj__ = ((struct sNode*)(right_value423=_inf_value8));
                                            if(node2_306) { node2_306 = come_decrement_ref_count2(node2_306, ((struct sNode*)node2_306)->finalize, ((struct sNode*)node2_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value417,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value418,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result180__;
                                        }
                                        else {
                                            # 1726 "06str.c"
                                            (come_push_stackframe("06str.c", 1726, 15),__exception_result_var_b1=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b1);
                                            # 1768 "06str.c"
                                            while(_while_condtional40=(_Bool)1,                                            _while_condtional40) {
                                                # 1729 "06str.c"
                                                no_comma_308=info->no_comma;
                                                # 1730 "06str.c"
                                                info->no_comma=(_Bool)1;
                                                # 1732 "06str.c"
                                                node2_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=expression_v13(info))));
                                                if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1734 "06str.c"
                                                info->no_comma=no_comma_308;
                                                # 1736 "06str.c"
                                                list$1sNodeph_push_back(map_keys_303,(struct sNode*)come_increment_ref_count(node2_309));
                                                # 1738 "06str.c"
                                                (come_push_stackframe("06str.c", 1738, 16),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
                                                # 1740 "06str.c"
                                                no_comma_308=info->no_comma;
                                                # 1741 "06str.c"
                                                info->no_comma=(_Bool)1;
                                                # 1743 "06str.c"
                                                node3_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=expression_v13(info))));
                                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1745 "06str.c"
                                                info->no_comma=no_comma_308;
                                                # 1747 "06str.c"
                                                list$1sNodeph_push_back(map_elements_304,(struct sNode*)come_increment_ref_count(node3_310));
                                                # 1766 "06str.c"
                                                # 1749 "06str.c"
                                                if(_if_conditional327=*info->p==0,                                                _if_conditional327) {
                                                    # 1750 "06str.c"
                                                    err_msg(info,"invalid source end");
                                                    # 1751 "06str.c"
                                                    exit(2);
                                                }
                                                else {
                                                    # 1766 "06str.c"
                                                    # 1753 "06str.c"
                                                    if(_if_conditional328=*info->p==44,                                                    _if_conditional328) {
                                                        # 1754 "06str.c"
                                                        info->p++;
                                                        # 1755 "06str.c"
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        # 1766 "06str.c"
                                                        # 1757 "06str.c"
                                                        if(_if_conditional329=*info->p==93,                                                        _if_conditional329) {
                                                            # 1758 "06str.c"
                                                            info->p++;
                                                            # 1759 "06str.c"
                                                            skip_spaces_and_lf(info);
                                                            # 1760 "06str.c"
                                                            if(node2_309) { node2_309 = come_decrement_ref_count2(node2_309, ((struct sNode*)node2_309)->finalize, ((struct sNode*)node2_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_310) { node3_310 = come_decrement_ref_count2(node3_310, ((struct sNode*)node3_310)->finalize, ((struct sNode*)node3_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            # 1763 "06str.c"
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            # 1764 "06str.c"
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_309) { node2_309 = come_decrement_ref_count2(node2_309, ((struct sNode*)node2_309)->finalize, ((struct sNode*)node2_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_310) { node3_310 = come_decrement_ref_count2(node3_310, ((struct sNode*)node3_310)->finalize, ((struct sNode*)node3_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 1768 "06str.c"
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1768, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value427=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value426=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1768, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_303),(struct list$1sNodeph*)come_increment_ref_count(map_elements_304),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sMapNode_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result183__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value9));
                                            if(node2_306) { node2_306 = come_decrement_ref_count2(node2_306, ((struct sNode*)node2_306)->finalize, ((struct sNode*)node2_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value426,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value427,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result183__;
                                        }
                                        if(node2_306) { node2_306 = come_decrement_ref_count2(node2_306, ((struct sNode*)node2_306)->finalize, ((struct sNode*)node2_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 1818 "06str.c"
                                        # 1772 "06str.c"
                                        if(_if_conditional338=*info->p==93,                                        _if_conditional338) {
                                            # 1773 "06str.c"
                                            info->p++;
                                            # 1774 "06str.c"
                                            skip_spaces_and_lf(info);
                                            # 1776 "06str.c"
                                            list$1sNodeph_push_back(list_elements_302,(struct sNode*)come_increment_ref_count(node_299));
                                        }
                                        else {
                                            # 1818 "06str.c"
                                            # 1778 "06str.c"
                                            if(_if_conditional339=*info->p==44,                                            _if_conditional339) {
                                                # 1779 "06str.c"
                                                info->p++;
                                                # 1780 "06str.c"
                                                skip_spaces_and_lf(info);
                                                # 1782 "06str.c"
                                                list$1sNodeph_push_back(list_elements_302,(struct sNode*)come_increment_ref_count(node_299));
                                                # 1812 "06str.c"
                                                while(_while_condtional41=(_Bool)1,                                                _while_condtional41) {
                                                    # 1785 "06str.c"
                                                    no_comma_312=info->no_comma;
                                                    # 1786 "06str.c"
                                                    info->no_comma=(_Bool)1;
                                                    # 1788 "06str.c"
                                                    node2_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=expression_v13(info))));
                                                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1790 "06str.c"
                                                    info->no_comma=no_comma_312;
                                                    # 1792 "06str.c"
                                                    list$1sNodeph_push_back(list_elements_302,(struct sNode*)come_increment_ref_count(node2_313));
                                                    # 1811 "06str.c"
                                                    # 1794 "06str.c"
                                                    if(_if_conditional340=*info->p==0,                                                    _if_conditional340) {
                                                        # 1795 "06str.c"
                                                        err_msg(info,"invalid source end");
                                                        # 1796 "06str.c"
                                                        exit(2);
                                                    }
                                                    else {
                                                        # 1811 "06str.c"
                                                        # 1798 "06str.c"
                                                        if(_if_conditional341=*info->p==44,                                                        _if_conditional341) {
                                                            # 1799 "06str.c"
                                                            info->p++;
                                                            # 1800 "06str.c"
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            # 1811 "06str.c"
                                                            # 1802 "06str.c"
                                                            if(_if_conditional342=*info->p==93,                                                            _if_conditional342) {
                                                                # 1803 "06str.c"
                                                                info->p++;
                                                                # 1804 "06str.c"
                                                                skip_spaces_and_lf(info);
                                                                # 1805 "06str.c"
                                                                if(node2_313) { node2_313 = come_decrement_ref_count2(node2_313, ((struct sNode*)node2_313)->finalize, ((struct sNode*)node2_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                # 1808 "06str.c"
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                # 1809 "06str.c"
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_313) { node2_313 = come_decrement_ref_count2(node2_313, ((struct sNode*)node2_313)->finalize, ((struct sNode*)node2_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                # 1814 "06str.c"
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                # 1815 "06str.c"
                                                exit(2);
                                            }
                                        }
                                    }
                                    # 1823 "06str.c"
                                    # 1818 "06str.c"
                                    if(_if_conditional343=list$1sNodeph_length(list_elements_302)>0,                                    _if_conditional343) {
                                        # 1819 "06str.c"
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1819, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value435=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value434=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1819, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_302),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sListNode_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result186__ = __result_obj__ = ((struct sNode*)(right_value439=_inf_value10));
                                        if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(first_element_source_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(list_elements_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_keys_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_elements_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value434,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value435,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result186__;
                                    }
                                    else {
                                    }
                                    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(first_element_source_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(list_elements_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_keys_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_elements_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    # 1825 "06str.c"
                                    ((struct sNode*)(right_value440=expression_node_v1(info)));
                                    if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    # 1828 "06str.c"
    __result187__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result187__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional238;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sStrNode_finalize"
                # 0 "sStrNode_finalize"
                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional238) {
                    # 0 "sStrNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sStrNode_finalize"
                # 1 "sStrNode_finalize"
                if(_if_conditional239=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional239) {
                    # 1 "sStrNode_finalize"
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional240;
struct sStrNode* __result160__;
void* right_value361;
struct sStrNode* result_248;
_Bool _if_conditional241;
_Bool _if_conditional242;
void* right_value362;
char* __dec_obj116;
_Bool _if_conditional243;
void* right_value363;
char* __dec_obj117;
struct sStrNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
memset(&result_248, 0, sizeof(struct sStrNode*));
right_value362 = (void*)0;
right_value363 = (void*)0;
                # 3 "sStrNode_clone"
                # 2 "sStrNode_clone"
                if(_if_conditional240=self==(void*)0,                _if_conditional240) {
                    # 2 "sStrNode_clone"
                    __result160__ = __result_obj__ = (void*)0;
                    return __result160__;
                }
                # 3 "sStrNode_clone"
                result_248=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value361=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer3(right_value361,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sStrNode_clone"
                # 4 "sStrNode_clone"
                if(_if_conditional241=self!=((void*)0),                _if_conditional241) {
                    # 4 "sStrNode_clone"
                    result_248->sline=self->sline;
                }
                # 6 "sStrNode_clone"
                # 5 "sStrNode_clone"
                if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional242) {
                    # 5 "sStrNode_clone"
                    __dec_obj116=result_248->sname;
                    result_248->sname=(char*)come_increment_ref_count(((char*)(right_value362=string_clone(self->sname))));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStrNode_clone"
                # 6 "sStrNode_clone"
                if(_if_conditional243=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional243) {
                    # 6 "sStrNode_clone"
                    __dec_obj117=result_248->value;
                    result_248->value=(char*)come_increment_ref_count(((char*)(right_value363=string_clone(self->value))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sStrNode_clone"
                __result161__ = __result_obj__ = result_248;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result161__;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sRegexNode_finalize"
                    # 0 "sRegexNode_finalize"
                    if(_if_conditional250=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional250) {
                        # 0 "sRegexNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "sRegexNode_finalize"
                    # 1 "sRegexNode_finalize"
                    if(_if_conditional251=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional251) {
                        # 1 "sRegexNode_finalize"
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional252;
struct sRegexNode* __result163__;
void* right_value370;
struct sRegexNode* result_253;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value371;
char* __dec_obj118;
_Bool _if_conditional255;
void* right_value372;
char* __dec_obj119;
_Bool _if_conditional256;
_Bool _if_conditional257;
struct sRegexNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value370 = (void*)0;
memset(&result_253, 0, sizeof(struct sRegexNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
                    # 3 "sRegexNode_clone"
                    # 2 "sRegexNode_clone"
                    if(_if_conditional252=self==(void*)0,                    _if_conditional252) {
                        # 2 "sRegexNode_clone"
                        __result163__ = __result_obj__ = (void*)0;
                        return __result163__;
                    }
                    # 3 "sRegexNode_clone"
                    result_253=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value370=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer3(right_value370,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "sRegexNode_clone"
                    # 4 "sRegexNode_clone"
                    if(_if_conditional253=self!=((void*)0),                    _if_conditional253) {
                        # 4 "sRegexNode_clone"
                        result_253->sline=self->sline;
                    }
                    # 6 "sRegexNode_clone"
                    # 5 "sRegexNode_clone"
                    if(_if_conditional254=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional254) {
                        # 5 "sRegexNode_clone"
                        __dec_obj118=result_253->sname;
                        result_253->sname=(char*)come_increment_ref_count(((char*)(right_value371=string_clone(self->sname))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 7 "sRegexNode_clone"
                    # 6 "sRegexNode_clone"
                    if(_if_conditional255=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional255) {
                        # 6 "sRegexNode_clone"
                        __dec_obj119=result_253->str;
                        result_253->str=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->str))));
                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 8 "sRegexNode_clone"
                    # 7 "sRegexNode_clone"
                    if(_if_conditional256=self!=((void*)0),                    _if_conditional256) {
                        # 7 "sRegexNode_clone"
                        result_253->global=self->global;
                    }
                    # 9 "sRegexNode_clone"
                    # 8 "sRegexNode_clone"
                    if(_if_conditional257=self!=((void*)0),                    _if_conditional257) {
                        # 8 "sRegexNode_clone"
                        result_253->ignore_case=self->ignore_case;
                    }
                    # 9 "sRegexNode_clone"
                    __result164__ = __result_obj__ = result_253;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result164__;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sCharNode_finalize"
                            # 0 "sCharNode_finalize"
                            if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional263) {
                                # 0 "sCharNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional264;
struct sCharNode* __result166__;
void* right_value376;
struct sCharNode* result_260;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value377;
char* __dec_obj120;
_Bool _if_conditional267;
struct sCharNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value376 = (void*)0;
memset(&result_260, 0, sizeof(struct sCharNode*));
right_value377 = (void*)0;
                            # 3 "sCharNode_clone"
                            # 2 "sCharNode_clone"
                            if(_if_conditional264=self==(void*)0,                            _if_conditional264) {
                                # 2 "sCharNode_clone"
                                __result166__ = __result_obj__ = (void*)0;
                                return __result166__;
                            }
                            # 3 "sCharNode_clone"
                            result_260=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value376=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer3(right_value376,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sCharNode_clone"
                            # 4 "sCharNode_clone"
                            if(_if_conditional265=self!=((void*)0),                            _if_conditional265) {
                                # 4 "sCharNode_clone"
                                result_260->sline=self->sline;
                            }
                            # 6 "sCharNode_clone"
                            # 5 "sCharNode_clone"
                            if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional266) {
                                # 5 "sCharNode_clone"
                                __dec_obj120=result_260->sname;
                                result_260->sname=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(self->sname))));
                                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sCharNode_clone"
                            # 6 "sCharNode_clone"
                            if(_if_conditional267=self!=((void*)0),                            _if_conditional267) {
                                # 6 "sCharNode_clone"
                                result_260->value=self->value;
                            }
                            # 7 "sCharNode_clone"
                            __result167__ = __result_obj__ = result_260;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result167__;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sWCharNode_finalize"
                                # 0 "sWCharNode_finalize"
                                if(_if_conditional276=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional276) {
                                    # 0 "sWCharNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional277;
struct sWCharNode* __result169__;
void* right_value381;
struct sWCharNode* result_270;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value382;
char* __dec_obj121;
_Bool _if_conditional280;
struct sWCharNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_270, 0, sizeof(struct sWCharNode*));
right_value382 = (void*)0;
                                # 3 "sWCharNode_clone"
                                # 2 "sWCharNode_clone"
                                if(_if_conditional277=self==(void*)0,                                _if_conditional277) {
                                    # 2 "sWCharNode_clone"
                                    __result169__ = __result_obj__ = (void*)0;
                                    return __result169__;
                                }
                                # 3 "sWCharNode_clone"
                                result_270=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value381=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer3(right_value381,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sWCharNode_clone"
                                # 4 "sWCharNode_clone"
                                if(_if_conditional278=self!=((void*)0),                                _if_conditional278) {
                                    # 4 "sWCharNode_clone"
                                    result_270->sline=self->sline;
                                }
                                # 6 "sWCharNode_clone"
                                # 5 "sWCharNode_clone"
                                if(_if_conditional279=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional279) {
                                    # 5 "sWCharNode_clone"
                                    __dec_obj121=result_270->sname;
                                    result_270->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sWCharNode_clone"
                                # 6 "sWCharNode_clone"
                                if(_if_conditional280=self!=((void*)0),                                _if_conditional280) {
                                    # 6 "sWCharNode_clone"
                                    result_270->value=self->value;
                                }
                                # 7 "sWCharNode_clone"
                                __result170__ = __result_obj__ = result_270;
                                come_call_finalizer3(result_270,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result170__;
                                come_call_finalizer3(result_270,sWCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sWStringNode_finalize"
                                # 0 "sWStringNode_finalize"
                                if(_if_conditional290=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional290) {
                                    # 0 "sWStringNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sWStringNode_finalize"
                                # 1 "sWStringNode_finalize"
                                if(_if_conditional291=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional291) {
                                    # 1 "sWStringNode_finalize"
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional292;
struct sWStringNode* __result172__;
void* right_value389;
struct sWStringNode* result_285;
_Bool _if_conditional293;
_Bool _if_conditional294;
void* right_value390;
char* __dec_obj122;
_Bool _if_conditional295;
void* right_value391;
unsigned int* __dec_obj123;
struct sWStringNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value389 = (void*)0;
memset(&result_285, 0, sizeof(struct sWStringNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
                                # 3 "sWStringNode_clone"
                                # 2 "sWStringNode_clone"
                                if(_if_conditional292=self==(void*)0,                                _if_conditional292) {
                                    # 2 "sWStringNode_clone"
                                    __result172__ = __result_obj__ = (void*)0;
                                    return __result172__;
                                }
                                # 3 "sWStringNode_clone"
                                result_285=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value389=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer3(right_value389,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sWStringNode_clone"
                                # 4 "sWStringNode_clone"
                                if(_if_conditional293=self!=((void*)0),                                _if_conditional293) {
                                    # 4 "sWStringNode_clone"
                                    result_285->sline=self->sline;
                                }
                                # 6 "sWStringNode_clone"
                                # 5 "sWStringNode_clone"
                                if(_if_conditional294=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional294) {
                                    # 5 "sWStringNode_clone"
                                    __dec_obj122=result_285->sname;
                                    result_285->sname=(char*)come_increment_ref_count(((char*)(right_value390=string_clone(self->sname))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sWStringNode_clone"
                                # 6 "sWStringNode_clone"
                                if(_if_conditional295=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional295) {
                                    # 6 "sWStringNode_clone"
                                    __dec_obj123=result_285->value;
                                    result_285->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value391=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 6, "unsigned int*"))));
                                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sWStringNode_clone"
                                __result173__ = __result_obj__ = result_285;
                                come_call_finalizer3(result_285,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result173__;
                                come_call_finalizer3(result_285,sWStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sSStringNode_finalize"
                                    # 0 "sSStringNode_finalize"
                                    if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional308) {
                                        # 0 "sSStringNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sSStringNode_finalize"
                                    # 1 "sSStringNode_finalize"
                                    if(_if_conditional309=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional309) {
                                        # 1 "sSStringNode_finalize"
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sSStringNode_finalize"
                                    # 2 "sSStringNode_finalize"
                                    if(_if_conditional310=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional310) {
                                        # 2 "sSStringNode_finalize"
                                        come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional311;
struct sSStringNode* __result175__;
void* right_value402;
struct sSStringNode* result_296;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value403;
char* __dec_obj124;
_Bool _if_conditional314;
void* right_value404;
char* __dec_obj125;
_Bool _if_conditional315;
void* right_value405;
struct list$1sNodeph* __dec_obj126;
struct sSStringNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
memset(&result_296, 0, sizeof(struct sSStringNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
                                    # 3 "sSStringNode_clone"
                                    # 2 "sSStringNode_clone"
                                    if(_if_conditional311=self==(void*)0,                                    _if_conditional311) {
                                        # 2 "sSStringNode_clone"
                                        __result175__ = __result_obj__ = (void*)0;
                                        return __result175__;
                                    }
                                    # 3 "sSStringNode_clone"
                                    result_296=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value402=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer3(right_value402,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sSStringNode_clone"
                                    # 4 "sSStringNode_clone"
                                    if(_if_conditional312=self!=((void*)0),                                    _if_conditional312) {
                                        # 4 "sSStringNode_clone"
                                        result_296->sline=self->sline;
                                    }
                                    # 6 "sSStringNode_clone"
                                    # 5 "sSStringNode_clone"
                                    if(_if_conditional313=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional313) {
                                        # 5 "sSStringNode_clone"
                                        __dec_obj124=result_296->sname;
                                        result_296->sname=(char*)come_increment_ref_count(((char*)(right_value403=string_clone(self->sname))));
                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sSStringNode_clone"
                                    # 6 "sSStringNode_clone"
                                    if(_if_conditional314=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional314) {
                                        # 6 "sSStringNode_clone"
                                        __dec_obj125=result_296->value;
                                        result_296->value=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->value))));
                                        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sSStringNode_clone"
                                    # 7 "sSStringNode_clone"
                                    if(_if_conditional315=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional315) {
                                        # 7 "sSStringNode_clone"
                                        __dec_obj126=result_296->exps;
                                        result_296->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value405=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer3(__dec_obj126,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value405,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sSStringNode_clone"
                                    __result176__ = __result_obj__ = result_296;
                                    come_call_finalizer3(result_296,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result176__;
                                    come_call_finalizer3(result_296,sSStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sMapNode_finalize"
                                                # 0 "sMapNode_finalize"
                                                if(_if_conditional330=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional330) {
                                                    # 0 "sMapNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sMapNode_finalize"
                                                # 1 "sMapNode_finalize"
                                                if(_if_conditional331=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional331) {
                                                    # 1 "sMapNode_finalize"
                                                    come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 3 "sMapNode_finalize"
                                                # 2 "sMapNode_finalize"
                                                if(_if_conditional332=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional332) {
                                                    # 2 "sMapNode_finalize"
                                                    come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional333;
struct sMapNode* __result181__;
void* right_value428;
struct sMapNode* result_311;
_Bool _if_conditional334;
_Bool _if_conditional335;
void* right_value429;
char* __dec_obj130;
_Bool _if_conditional336;
void* right_value430;
struct list$1sNodeph* __dec_obj131;
_Bool _if_conditional337;
void* right_value431;
struct list$1sNodeph* __dec_obj132;
struct sMapNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_311, 0, sizeof(struct sMapNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
                                                # 3 "sMapNode_clone"
                                                # 2 "sMapNode_clone"
                                                if(_if_conditional333=self==(void*)0,                                                _if_conditional333) {
                                                    # 2 "sMapNode_clone"
                                                    __result181__ = __result_obj__ = (void*)0;
                                                    return __result181__;
                                                }
                                                # 3 "sMapNode_clone"
                                                result_311=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value428=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer3(right_value428,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sMapNode_clone"
                                                # 4 "sMapNode_clone"
                                                if(_if_conditional334=self!=((void*)0),                                                _if_conditional334) {
                                                    # 4 "sMapNode_clone"
                                                    result_311->sline=self->sline;
                                                }
                                                # 6 "sMapNode_clone"
                                                # 5 "sMapNode_clone"
                                                if(_if_conditional335=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional335) {
                                                    # 5 "sMapNode_clone"
                                                    __dec_obj130=result_311->sname;
                                                    result_311->sname=(char*)come_increment_ref_count(((char*)(right_value429=string_clone(self->sname))));
                                                    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sMapNode_clone"
                                                # 6 "sMapNode_clone"
                                                if(_if_conditional336=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional336) {
                                                    # 6 "sMapNode_clone"
                                                    __dec_obj131=result_311->map_key_elements;
                                                    result_311->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value430=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer3(__dec_obj131,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value430,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 8 "sMapNode_clone"
                                                # 7 "sMapNode_clone"
                                                if(_if_conditional337=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional337) {
                                                    # 7 "sMapNode_clone"
                                                    __dec_obj132=result_311->map_elements;
                                                    result_311->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value431=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value431,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                # 8 "sMapNode_clone"
                                                __result182__ = __result_obj__ = result_311;
                                                come_call_finalizer3(result_311,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result182__;
                                                come_call_finalizer3(result_311,sMapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sListNode_finalize"
                                            # 0 "sListNode_finalize"
                                            if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional344) {
                                                # 0 "sListNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sListNode_finalize"
                                            # 1 "sListNode_finalize"
                                            if(_if_conditional345=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional345) {
                                                # 1 "sListNode_finalize"
                                                come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional346;
struct sListNode* __result184__;
void* right_value436;
struct sListNode* result_314;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value437;
char* __dec_obj133;
_Bool _if_conditional349;
void* right_value438;
struct list$1sNodeph* __dec_obj134;
struct sListNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value436 = (void*)0;
memset(&result_314, 0, sizeof(struct sListNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
                                            # 3 "sListNode_clone"
                                            # 2 "sListNode_clone"
                                            if(_if_conditional346=self==(void*)0,                                            _if_conditional346) {
                                                # 2 "sListNode_clone"
                                                __result184__ = __result_obj__ = (void*)0;
                                                return __result184__;
                                            }
                                            # 3 "sListNode_clone"
                                            result_314=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value436=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer3(right_value436,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sListNode_clone"
                                            # 4 "sListNode_clone"
                                            if(_if_conditional347=self!=((void*)0),                                            _if_conditional347) {
                                                # 4 "sListNode_clone"
                                                result_314->sline=self->sline;
                                            }
                                            # 6 "sListNode_clone"
                                            # 5 "sListNode_clone"
                                            if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional348) {
                                                # 5 "sListNode_clone"
                                                __dec_obj133=result_314->sname;
                                                result_314->sname=(char*)come_increment_ref_count(((char*)(right_value437=string_clone(self->sname))));
                                                __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sListNode_clone"
                                            # 6 "sListNode_clone"
                                            if(_if_conditional349=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional349) {
                                                # 6 "sListNode_clone"
                                                __dec_obj134=result_314->list_elements;
                                                result_314->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value438=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer3(__dec_obj134,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value438,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sListNode_clone"
                                            __result185__ = __result_obj__ = result_314;
                                            come_call_finalizer3(result_314,sListNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result185__;
                                            come_call_finalizer3(result_314,sListNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value441;
void* right_value442;
struct list$1sNodeph* tuple_elements_315;
_Bool _while_condtional42;
char* p_316;
_Bool no_comma_317;
void* right_value443;
struct sNode* node_318;
void* right_value444;
struct sNode* __dec_obj135;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value445;
void* right_value446;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value450;
struct sNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&tuple_elements_315, 0, sizeof(struct list$1sNodeph*));
memset(&p_316, 0, sizeof(char*));
memset(&no_comma_317, 0, sizeof(_Bool));
right_value443 = (void*)0;
memset(&node_318, 0, sizeof(struct sNode*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value450 = (void*)0;
    # 1833 "06str.c"
    tuple_elements_315=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value441=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1833, "list$1sNodeph"))))))));
    come_call_finalizer3(right_value441,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value442,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 1862 "06str.c"
    while(_while_condtional42=(_Bool)1,    _while_condtional42) {
        # 1835 "06str.c"
        p_316=info->p;
        # 1837 "06str.c"
        no_comma_317=info->no_comma;
        # 1838 "06str.c"
        info->no_comma=(_Bool)1;
        # 1840 "06str.c"
        node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=expression_v13(info))));
        if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1841 "06str.c"
        __dec_obj135=node_318;
        node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_318),info))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1843 "06str.c"
        info->no_comma=no_comma_317;
        # 1845 "06str.c"
        list$1sNodeph_push_back(tuple_elements_315,(struct sNode*)come_increment_ref_count(node_318));
        # 1860 "06str.c"
        # 1847 "06str.c"
        if(_if_conditional350=*info->p==44,        _if_conditional350) {
            # 1848 "06str.c"
            info->p++;
            # 1849 "06str.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 1860 "06str.c"
            # 1851 "06str.c"
            if(_if_conditional351=*info->p==41,            _if_conditional351) {
                # 1852 "06str.c"
                info->p++;
                # 1853 "06str.c"
                skip_spaces_and_lf(info);
                # 1854 "06str.c"
                if(node_318) { node_318 = come_decrement_ref_count2(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                # 1857 "06str.c"
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                # 1858 "06str.c"
                exit(2);
            }
        }
        if(node_318) { node_318 = come_decrement_ref_count2(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 1862 "06str.c"
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1862, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value446=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value445=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1862, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_315),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sTupleNode_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result190__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value11));
    come_call_finalizer3(tuple_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value445,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value446,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result190__;
    come_call_finalizer3(tuple_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sTupleNode_finalize"
        # 0 "sTupleNode_finalize"
        if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional352) {
            # 0 "sTupleNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sTupleNode_finalize"
        # 1 "sTupleNode_finalize"
        if(_if_conditional353=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional353) {
            # 1 "sTupleNode_finalize"
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional354;
struct sTupleNode* __result188__;
void* right_value447;
struct sTupleNode* result_319;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value448;
char* __dec_obj136;
_Bool _if_conditional357;
void* right_value449;
struct list$1sNodeph* __dec_obj137;
struct sTupleNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value447 = (void*)0;
memset(&result_319, 0, sizeof(struct sTupleNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
        # 3 "sTupleNode_clone"
        # 2 "sTupleNode_clone"
        if(_if_conditional354=self==(void*)0,        _if_conditional354) {
            # 2 "sTupleNode_clone"
            __result188__ = __result_obj__ = (void*)0;
            return __result188__;
        }
        # 3 "sTupleNode_clone"
        result_319=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value447=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer3(right_value447,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sTupleNode_clone"
        # 4 "sTupleNode_clone"
        if(_if_conditional355=self!=((void*)0),        _if_conditional355) {
            # 4 "sTupleNode_clone"
            result_319->sline=self->sline;
        }
        # 6 "sTupleNode_clone"
        # 5 "sTupleNode_clone"
        if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional356) {
            # 5 "sTupleNode_clone"
            __dec_obj136=result_319->sname;
            result_319->sname=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(self->sname))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sTupleNode_clone"
        # 6 "sTupleNode_clone"
        if(_if_conditional357=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional357) {
            # 6 "sTupleNode_clone"
            __dec_obj137=result_319->tuple_elements;
            result_319->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value449=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer3(__dec_obj137,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value449,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sTupleNode_clone"
        __result189__ = __result_obj__ = result_319;
        come_call_finalizer3(result_319,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result189__;
        come_call_finalizer3(result_319,sTupleNode_finalize, 0, 0, 0, 0, (void*)0);
}

