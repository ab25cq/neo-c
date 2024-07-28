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










char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_47;
_Bool _while_condtional7;
_Bool _if_conditional19;
void* right_value79;
char* __exception_result_var_b51;
void* right_value80;
char* __exception_result_var_b52;
char* __result52__;
void* right_value81;
char* __exception_result_var_b53;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&p_47, 0, sizeof(char*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
    p_47=class_name;
    while(_while_condtional7=*((char*)come_null_check(p_47, "14struct.c", 6, 573)),    _while_condtional7) {
        if(_if_conditional19=*((char*)come_null_check(p_47, "14struct.c", 7, 574))==36,        _if_conditional19) {
            __result52__ = __result_obj__ = (come_push_stackframe("14struct.c", 8, 578),__exception_result_var_b52=((char*)(right_value80=string_substring(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("14struct.c", 8, 575),__exception_result_var_b51=((char*)(right_value79=__builtin_string(class_name))), come_pop_stackframe(), __exception_result_var_b51), "14struct.c", 8, 576)), "14struct.c", 8, 577)),0,p_47-class_name))), come_pop_stackframe(), __exception_result_var_b52);
            right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result52__;
        }
        else {
            p_47++;
        }
    }
    __result53__ = __result_obj__ = (come_push_stackframe("14struct.c", 15, 579),__exception_result_var_b53=((char*)(right_value81=__builtin_string(class_name))), come_pop_stackframe(), __exception_result_var_b53);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value82;
void* right_value83;
struct buffer* __exception_result_var_b54;
struct buffer* buf_48;
struct sClass* klass_49;
char* class_name_50;
struct buffer* __exception_result_var_b55;
int __exception_result_var_b56;
_Bool _if_conditional21;
struct buffer* __exception_result_var_b57;
int __exception_result_var_b58;
struct buffer* __exception_result_var_b59;
int i_51;
int __exception_result_var_b60;
struct sType* __exception_result_var_b62;
struct sType* type_52;
void* right_value84;
char* __exception_result_var_b63;
char* type_name_62;
struct buffer* __exception_result_var_b64;
int i_63;
struct buffer* __exception_result_var_b65;
_Bool _if_conditional41;
struct buffer* __exception_result_var_b66;
void* right_value85;
char* __exception_result_var_b67;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&buf_48, 0, sizeof(struct buffer*));
memset(&klass_49, 0, sizeof(struct sClass*));
memset(&class_name_50, 0, sizeof(char*));
memset(&i_51, 0, sizeof(int));
memset(&type_52, 0, sizeof(struct sType*));
right_value84 = (void*)0;
memset(&type_name_62, 0, sizeof(char*));
memset(&i_63, 0, sizeof(int));
right_value85 = (void*)0;
    buf_48=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 20, 581),__exception_result_var_b54=((struct buffer*)(right_value83=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))), "14struct.c", 20, 580)))))), come_pop_stackframe(), __exception_result_var_b54));
    come_call_finalizer3(right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value83,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    klass_49=((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 22, 582)), "14struct.c", 22, 583))->mClass;
    class_name_50=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_49, "14struct.c", 24, 584)), "14struct.c", 24, 585))->mName;
    (come_push_stackframe("14struct.c", 26, 588),__exception_result_var_b55=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 26, 586)), "14struct.c", 26, 587)),class_name_50), come_pop_stackframe(), __exception_result_var_b55);
    if(_if_conditional21=(come_push_stackframe("14struct.c", 28, 595),__exception_result_var_b56=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 28, 589)), "14struct.c", 28, 590))->mGenericsTypes, "14struct.c", 28, 591)), "14struct.c", 28, 592))), come_pop_stackframe(), __exception_result_var_b56)>0,    _if_conditional21) {
        (come_push_stackframe("14struct.c", 29, 598),__exception_result_var_b57=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 29, 596)), "14struct.c", 29, 597)),36), come_pop_stackframe(), __exception_result_var_b57);
        (come_push_stackframe("14struct.c", 30, 606),__exception_result_var_b59=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 30, 599)), "14struct.c", 30, 600)),(come_push_stackframe("14struct.c", 30, 605),__exception_result_var_b58=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 30, 601)), "14struct.c", 30, 602))->mGenericsTypes, "14struct.c", 30, 603)), "14struct.c", 30, 604))), come_pop_stackframe(), __exception_result_var_b58)+48), come_pop_stackframe(), __exception_result_var_b59);
        for(        i_51=0;        i_51<(come_push_stackframe("14struct.c", 32, 611),__exception_result_var_b60=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 32, 607)), "14struct.c", 32, 608))->mGenericsTypes, "14struct.c", 32, 609)), "14struct.c", 32, 610))), come_pop_stackframe(), __exception_result_var_b60);        i_51++        ){
            type_52=(come_push_stackframe("14struct.c", 33, 705),__exception_result_var_b62=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 33, 612)), "14struct.c", 33, 613))->mGenericsTypes, "14struct.c", 33, 614)),i_51), "14struct.c", 33, 704)), come_pop_stackframe(), __exception_result_var_b62);
            type_name_62=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 34, 706),__exception_result_var_b63=((char*)(right_value84=create_generics_name(type_52,info))), come_pop_stackframe(), __exception_result_var_b63));
            right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 36, 709),__exception_result_var_b64=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 36, 707)), "14struct.c", 36, 708)),type_name_62), come_pop_stackframe(), __exception_result_var_b64);
            for(            i_63=0;            i_63<((struct sType*)come_null_check(((struct sType*)come_null_check(type_52, "14struct.c", 38, 710)), "14struct.c", 38, 711))->mPointerNum;            i_63++            ){
                (come_push_stackframe("14struct.c", 39, 714),__exception_result_var_b65=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 39, 712)), "14struct.c", 39, 713)),112), come_pop_stackframe(), __exception_result_var_b65);
            }
            if(((struct sType*)come_null_check(((struct sType*)come_null_check(type_52, "14struct.c", 42, 715)), "14struct.c", 42, 716))->mHeap) {
                (come_push_stackframe("14struct.c", 43, 719),__exception_result_var_b66=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 43, 717)), "14struct.c", 43, 718)),"h"), come_pop_stackframe(), __exception_result_var_b66);
            }
            type_name_62 = come_decrement_ref_count2(type_name_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result58__ = __result_obj__ = (come_push_stackframe("14struct.c", 48, 722),__exception_result_var_b67=((char*)(right_value85=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_48, "14struct.c", 48, 720)), "14struct.c", 48, 721))))), come_pop_stackframe(), __exception_result_var_b67);
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
        __result55__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 593)), "./neo-c.h", 360, 594))->len;
        return __result55__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional22;
struct list_item$1sTypeph* it_53;
int i_54;
_Bool _while_condtional8;
_Bool _if_conditional23;
struct sType* __result56__;
struct sType* default_value_55;
void* __exception_result_var_b61;
struct sType* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_54, 0, sizeof(int));
memset(&default_value_55, 0, sizeof(struct sType*));
                if(_if_conditional22=position<0,                _if_conditional22) {
                    position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 615)), "./neo-c.h", 676, 616))->len;
                }
                it_53=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 617)), "./neo-c.h", 679, 618))->head;
                i_54=0;
                while(_while_condtional8=it_53!=((void*)0),                _while_condtional8) {
                    if(_if_conditional23=position==i_54,                    _if_conditional23) {
                        __result56__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_53, "./neo-c.h", 683, 619)), "./neo-c.h", 683, 620))->item;
                        return __result56__;
                    }
                    it_53=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_53, "./neo-c.h", 685, 621)), "./neo-c.h", 685, 622))->next;
                    i_54++;
                }
                (come_push_stackframe("./neo-c.h", 690, 623),__exception_result_var_b61=memset(&default_value_55,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b61);
                __result57__ = __result_obj__ = default_value_55;
                come_call_finalizer3(default_value_55,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer3(default_value_55,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 624)), "sType_finalize", 0, 625))->mMultipleTypes!=((void*)0),                    _if_conditional24) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 626)), "sType_finalize", 0, 627))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 636)), "sType_finalize", 1, 637))->mNoSolvedGenericsType!=((void*)0),                    _if_conditional26) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 638)), "sType_finalize", 1, 639))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 644)), "sType_finalize", 2, 645))->mOriginalLoadVarType!=((void*)0),                    _if_conditional28) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 646)), "sType_finalize", 2, 647))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 648)), "sType_finalize", 3, 649))->mGenericsName!=((void*)0),                    _if_conditional29) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 650)), "sType_finalize", 3, 651))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 650)), "sType_finalize", 3, 651))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 652)), "sType_finalize", 4, 653))->mGenericsTypes!=((void*)0),                    _if_conditional30) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 654)), "sType_finalize", 4, 655))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 656)), "sType_finalize", 5, 657))->mArrayNum!=((void*)0),                    _if_conditional31) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 658)), "sType_finalize", 5, 659))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 668)), "sType_finalize", 6, 669))->mParamTypes!=((void*)0),                    _if_conditional33) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 670)), "sType_finalize", 6, 671))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 672)), "sType_finalize", 7, 673))->mParamNames!=((void*)0),                    _if_conditional34) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 674)), "sType_finalize", 7, 675))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 684)), "sType_finalize", 8, 685))->mResultType!=((void*)0),                    _if_conditional36) {
                        come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 686)), "sType_finalize", 8, 687))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 688)), "sType_finalize", 9, 689))->mAlignas!=((void*)0),                    _if_conditional37) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 690)), "sType_finalize", 9, 691))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 690)), "sType_finalize", 9, 691))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 690)), "sType_finalize", 9, 691))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 690)), "sType_finalize", 9, 691))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 690)), "sType_finalize", 9, 691))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 692)), "sType_finalize", 10, 693))->mSizeNum!=((void*)0),                    _if_conditional38) {
                        if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 694)), "sType_finalize", 10, 695))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 694)), "sType_finalize", 10, 695))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 694)), "sType_finalize", 10, 695))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 694)), "sType_finalize", 10, 695))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 694)), "sType_finalize", 10, 695))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 696)), "sType_finalize", 11, 697))->mOriginalTypeName!=((void*)0),                    _if_conditional39) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 698)), "sType_finalize", 11, 699))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 698)), "sType_finalize", 11, 699))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 700)), "sType_finalize", 12, 701))->mAsmName!=((void*)0),                    _if_conditional40) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 702)), "sType_finalize", 12, 703))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 702)), "sType_finalize", 12, 703))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional9;
struct list_item$1sTypeph* prev_it_57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1sTypeph*));
                            it_56=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 628)), "./neo-c.h", 120, 629))->head;
                            while(_while_condtional9=it_56!=((void*)0),                            _while_condtional9) {
                                prev_it_57=it_56;
                                it_56=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_56, "./neo-c.h", 123, 630)), "./neo-c.h", 123, 631))->next;
                                come_call_finalizer3(prev_it_57,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional25=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 632)), "list_item$1sTypephp_finalize", 0, 633))->item!=((void*)0),                                    _if_conditional25) {
                                        come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 634)), "list_item$1sTypephp_finalize", 0, 635))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional27=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 640)), "tuple1$1sTypephp_finalize", 0, 641))->v1!=((void*)0),                            _if_conditional27) {
                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 642)), "tuple1$1sTypephp_finalize", 0, 643))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_58;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1sNodeph*));
                            it_58=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 660)), "./neo-c.h", 120, 661))->head;
                            while(_while_condtional10=it_58!=((void*)0),                            _while_condtional10) {
                                prev_it_59=it_58;
                                it_58=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_58, "./neo-c.h", 123, 662)), "./neo-c.h", 123, 663))->next;
                                come_call_finalizer3(prev_it_59,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional32=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 664)), "list_item$1sNodephp_finalize", 0, 665))->item!=((void*)0),                                    _if_conditional32) {
                                        if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 666)), "list_item$1sNodephp_finalize", 0, 667))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 666)), "list_item$1sNodephp_finalize", 0, 667))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 666)), "list_item$1sNodephp_finalize", 0, 667))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 666)), "list_item$1sNodephp_finalize", 0, 667))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 666)), "list_item$1sNodephp_finalize", 0, 667))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_60;
_Bool _while_condtional11;
struct list_item$1charph* prev_it_61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1charph*));
                            it_60=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 676)), "./neo-c.h", 120, 677))->head;
                            while(_while_condtional11=it_60!=((void*)0),                            _while_condtional11) {
                                prev_it_61=it_60;
                                it_60=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_60, "./neo-c.h", 123, 678)), "./neo-c.h", 123, 679))->next;
                                come_call_finalizer3(prev_it_61,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional35=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 680)), "list_item$1charphp_finalize", 0, 681))->item!=((void*)0),                                    _if_conditional35) {
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 682)), "list_item$1charphp_finalize", 0, 683))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 682)), "list_item$1charphp_finalize", 0, 683))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional42;
void* right_value86;
void* right_value87;
struct buffer* __exception_result_var_b68;
struct buffer* buf_64;
void* right_value88;
char* __exception_result_var_b69;
struct buffer* __exception_result_var_b70;
struct list$1tuple2$2charphsTypephph* o2_saved_65;
struct tuple2$2charphsTypeph* __exception_result_var_b73;
struct tuple2$2charphsTypeph* it_68;
_Bool __exception_result_var_b74;
struct tuple2$2charphsTypeph* __exception_result_var_b77;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_71;
struct sType* type_72;
struct buffer* __exception_result_var_b78;
void* right_value89;
char* __exception_result_var_b79;
struct buffer* __exception_result_var_b80;
struct buffer* __exception_result_var_b81;
struct buffer* __exception_result_var_b82;
_Bool __exception_result_var_b83;
_Bool _if_conditional50;
void* right_value90;
char* __exception_result_var_b84;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&buf_64, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
memset(&o2_saved_65, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_68, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value89 = (void*)0;
right_value90 = (void*)0;
    if(_if_conditional42=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 58, 723)), "14struct.c", 58, 724))->mOutputed,    _if_conditional42) {
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 59, 725)), "14struct.c", 59, 726))->mOutputed=(_Bool)1;
        buf_64=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 61, 728),__exception_result_var_b68=((struct buffer*)(right_value87=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value86=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))), "14struct.c", 61, 727)))))), come_pop_stackframe(), __exception_result_var_b68));
        come_call_finalizer3(right_value86,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("14struct.c", 64, 734),__exception_result_var_b70=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 64, 729)), "14struct.c", 64, 730)),(come_push_stackframe("14struct.c", 64, 733),__exception_result_var_b69=((char*)(right_value88=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 64, 731)), "14struct.c", 64, 732))->mName))), come_pop_stackframe(), __exception_result_var_b69)), come_pop_stackframe(), __exception_result_var_b70);
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        o2_saved_65=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 67, 735)), "14struct.c", 67, 736))->mFields)),it_68=(come_push_stackframe("14struct.c", 67, 751),__exception_result_var_b73=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_65), "14struct.c", 67, 737)), "14struct.c", 67, 738))), come_pop_stackframe(), __exception_result_var_b73);        !(come_push_stackframe("14struct.c", 67, 756),__exception_result_var_b74=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_65), "14struct.c", 67, 752)), "14struct.c", 67, 753))), come_pop_stackframe(), __exception_result_var_b74);        it_68=(come_push_stackframe("14struct.c", 67, 775),__exception_result_var_b77=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_65), "14struct.c", 67, 757)), "14struct.c", 67, 758))), come_pop_stackframe(), __exception_result_var_b77)        ){
            multiple_assign_var1=it_68;
            name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type_72, "14struct.c", 70, 776)), "14struct.c", 70, 777))->mStatic=(_Bool)0;
            (come_push_stackframe("14struct.c", 72, 780),__exception_result_var_b78=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 72, 778)), "14struct.c", 72, 779)),"    "), come_pop_stackframe(), __exception_result_var_b78);
            (come_push_stackframe("14struct.c", 73, 784),__exception_result_var_b80=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 73, 781)), "14struct.c", 73, 782)),(come_push_stackframe("14struct.c", 73, 783),__exception_result_var_b79=((char*)(right_value89=make_define_var(type_72,name_71,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b79)), come_pop_stackframe(), __exception_result_var_b80);
            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 74, 787),__exception_result_var_b81=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 74, 785)), "14struct.c", 74, 786)),";\n"), come_pop_stackframe(), __exception_result_var_b81);
            name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_72,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_65,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("14struct.c", 77, 806),__exception_result_var_b82=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 77, 804)), "14struct.c", 77, 805)),"};\n"), come_pop_stackframe(), __exception_result_var_b82);
        if(_if_conditional50=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 79, 807)), "14struct.c", 79, 808))->output_header_file&&(come_push_stackframe("14struct.c", 79, 813),__exception_result_var_b83=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 79, 809)), "14struct.c", 79, 810))->mDeclareSName,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 79, 811)), "14struct.c", 79, 812))->base_sname), come_pop_stackframe(), __exception_result_var_b83),        _if_conditional50) {
        }
        else {
            (come_push_stackframe("14struct.c", 82,817),add_come_code_at_source_head(info,"%s",(come_push_stackframe("14struct.c", 82, 816),__exception_result_var_b84=((char*)(right_value90=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_64, "14struct.c", 82, 814)), "14struct.c", 82, 815))))), come_pop_stackframe(), __exception_result_var_b84)),come_pop_stackframe());
            right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(buf_64,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct tuple2$2charphsTypeph* result_66;
void* __exception_result_var_b71;
struct tuple2$2charphsTypeph* __result59__;
_Bool _if_conditional44;
struct tuple2$2charphsTypeph* __result60__;
struct tuple2$2charphsTypeph* result_67;
void* __exception_result_var_b72;
struct tuple2$2charphsTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional43=self==((void*)0),            _if_conditional43) {
                (come_push_stackframe("./neo-c.h", 284, 739),__exception_result_var_b71=memset(&result_66,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b71);
                __result59__ = __result_obj__ = result_66;
                return __result59__;
            }
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 740)), "./neo-c.h", 287, 741))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 742)), "./neo-c.h", 287, 743))->head;
            if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 744)), "./neo-c.h", 289, 745))->it) {
                __result60__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 746)), "./neo-c.h", 290, 747))->it, "./neo-c.h", 290, 748)), "./neo-c.h", 290, 749))->item;
                return __result60__;
            }
            (come_push_stackframe("./neo-c.h", 294, 750),__exception_result_var_b72=memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b72);
            __result61__ = __result_obj__ = result_67;
            return __result61__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
            __result62__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 754)), "./neo-c.h", 317, 755))->it==((void*)0);
            return __result62__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* result_69;
void* __exception_result_var_b75;
struct tuple2$2charphsTypeph* __result63__;
_Bool _if_conditional46;
struct tuple2$2charphsTypeph* __result64__;
struct tuple2$2charphsTypeph* result_70;
void* __exception_result_var_b76;
struct tuple2$2charphsTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_70, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional45=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 759)), "./neo-c.h", 299, 760))->it==((void*)0),            _if_conditional45) {
                (come_push_stackframe("./neo-c.h", 301, 761),__exception_result_var_b75=memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b75);
                __result63__ = __result_obj__ = result_69;
                return __result63__;
            }
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 762)), "./neo-c.h", 305, 763))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 764)), "./neo-c.h", 305, 765))->it, "./neo-c.h", 305, 766)), "./neo-c.h", 305, 767))->next;
            if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 768)), "./neo-c.h", 307, 769))->it) {
                __result64__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 770)), "./neo-c.h", 308, 771))->it, "./neo-c.h", 308, 772)), "./neo-c.h", 308, 773))->item;
                return __result64__;
            }
            (come_push_stackframe("./neo-c.h", 312, 774),__exception_result_var_b76=memset(&result_70,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b76);
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
            it_73=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 788)), "./neo-c.h", 120, 789))->head;
            while(_while_condtional12=it_73!=((void*)0),            _while_condtional12) {
                prev_it_74=it_73;
                it_73=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_73, "./neo-c.h", 123, 790)), "./neo-c.h", 123, 791))->next;
                come_call_finalizer3(prev_it_74,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional47=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 792)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 793))->item!=((void*)0),                    _if_conditional47) {
                        come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 794)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 795))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value91;
void* right_value92;
struct buffer* __exception_result_var_b85;
struct buffer* buf_75;
_Bool _if_conditional52;
void* right_value93;
char* __exception_result_var_b86;
struct buffer* __exception_result_var_b87;
void* right_value94;
char* __exception_result_var_b88;
struct buffer* __exception_result_var_b89;
struct list$1tuple2$2charphsTypephph* o2_saved_76;
struct tuple2$2charphsTypeph* __exception_result_var_b90;
struct tuple2$2charphsTypeph* it_77;
_Bool __exception_result_var_b91;
struct tuple2$2charphsTypeph* __exception_result_var_b92;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_78;
struct sType* type_79;
struct buffer* __exception_result_var_b93;
void* right_value95;
char* __exception_result_var_b94;
struct buffer* __exception_result_var_b95;
struct buffer* __exception_result_var_b96;
struct buffer* __exception_result_var_b97;
_Bool __exception_result_var_b98;
_Bool _if_conditional53;
void* right_value96;
char* __exception_result_var_b99;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&o2_saved_76, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_77, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value95 = (void*)0;
right_value96 = (void*)0;
    if(_if_conditional51=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 95, 818)), "14struct.c", 95, 819))->mOutputed2,    _if_conditional51) {
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 96, 820)), "14struct.c", 96, 821))->mOutputed2=(_Bool)1;
        buf_75=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 98, 823),__exception_result_var_b85=((struct buffer*)(right_value92=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value91=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))), "14struct.c", 98, 822)))))), come_pop_stackframe(), __exception_result_var_b85));
        come_call_finalizer3(right_value91,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value92,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 101, 824)), "14struct.c", 101, 825))->mParentClassName) {
            (come_push_stackframe("14struct.c", 102, 833),__exception_result_var_b87=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 102, 826)), "14struct.c", 102, 827)),(come_push_stackframe("14struct.c", 102, 832),__exception_result_var_b86=((char*)(right_value93=xsprintf("struct %s extends %s\n{\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 102, 828)), "14struct.c", 102, 829))->mName,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 102, 830)), "14struct.c", 102, 831))->mParentClassName))), come_pop_stackframe(), __exception_result_var_b86)), come_pop_stackframe(), __exception_result_var_b87);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            (come_push_stackframe("14struct.c", 105, 839),__exception_result_var_b89=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 105, 834)), "14struct.c", 105, 835)),(come_push_stackframe("14struct.c", 105, 838),__exception_result_var_b88=((char*)(right_value94=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 105, 836)), "14struct.c", 105, 837))->mName))), come_pop_stackframe(), __exception_result_var_b88)), come_pop_stackframe(), __exception_result_var_b89);
            right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        for(        o2_saved_76=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 107, 840)), "14struct.c", 107, 841))->mFields)),it_77=(come_push_stackframe("14struct.c", 107, 844),__exception_result_var_b90=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_76), "14struct.c", 107, 842)), "14struct.c", 107, 843))), come_pop_stackframe(), __exception_result_var_b90);        !(come_push_stackframe("14struct.c", 107, 847),__exception_result_var_b91=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_76), "14struct.c", 107, 845)), "14struct.c", 107, 846))), come_pop_stackframe(), __exception_result_var_b91);        it_77=(come_push_stackframe("14struct.c", 107, 850),__exception_result_var_b92=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_76), "14struct.c", 107, 848)), "14struct.c", 107, 849))), come_pop_stackframe(), __exception_result_var_b92)        ){
            multiple_assign_var2=it_77;
            name_78=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_79=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type_79, "14struct.c", 110, 851)), "14struct.c", 110, 852))->mStatic=(_Bool)0;
            (come_push_stackframe("14struct.c", 112, 855),__exception_result_var_b93=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 112, 853)), "14struct.c", 112, 854)),"    "), come_pop_stackframe(), __exception_result_var_b93);
            (come_push_stackframe("14struct.c", 113, 859),__exception_result_var_b95=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 113, 856)), "14struct.c", 113, 857)),(come_push_stackframe("14struct.c", 113, 858),__exception_result_var_b94=((char*)(right_value95=make_define_var_no_solved(type_79,name_78,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b94)), come_pop_stackframe(), __exception_result_var_b95);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 114, 862),__exception_result_var_b96=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 114, 860)), "14struct.c", 114, 861)),";\n"), come_pop_stackframe(), __exception_result_var_b96);
            name_78 = come_decrement_ref_count2(name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_76,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("14struct.c", 116, 865),__exception_result_var_b97=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 116, 863)), "14struct.c", 116, 864)),"};\n"), come_pop_stackframe(), __exception_result_var_b97);
        if(_if_conditional53=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 118, 866)), "14struct.c", 118, 867))->output_header_file&&(come_push_stackframe("14struct.c", 118, 872),__exception_result_var_b98=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass, "14struct.c", 118, 868)), "14struct.c", 118, 869))->mDeclareSName,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 118, 870)), "14struct.c", 118, 871))->base_sname), come_pop_stackframe(), __exception_result_var_b98),        _if_conditional53) {
        }
        else {
            (come_push_stackframe("14struct.c", 121,876),add_come_code_at_come_header(info,"%s",(come_push_stackframe("14struct.c", 121, 875),__exception_result_var_b99=((char*)(right_value96=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_75, "14struct.c", 121, 873)), "14struct.c", 121, 874))))), come_pop_stackframe(), __exception_result_var_b99)),come_pop_stackframe());
            right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
struct sType* type2_80;
_Bool __exception_result_var_b100;
_Bool _if_conditional54;
_Bool __result66__;
struct sClass* klass_81;
_Bool _if_conditional55;
_Bool __result67__;
_Bool _if_conditional56;
_Bool __result68__;
int i_82;
int __exception_result_var_b101;
struct sType* __exception_result_var_b102;
_Bool __exception_result_var_b103;
_Bool result_83;
_Bool _if_conditional57;
_Bool __result69__;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_80, 0, sizeof(struct sType*));
memset(&klass_81, 0, sizeof(struct sClass*));
memset(&i_82, 0, sizeof(int));
memset(&result_83, 0, sizeof(_Bool));
    type2_80=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 129, 877)), "14struct.c", 129, 878))->mNoSolvedGenericsType, "14struct.c", 129, 879)), "14struct.c", 129, 880))->v1;
    if(_if_conditional54=type2_80&&(come_push_stackframe("14struct.c", 131, 881),__exception_result_var_b100=is_no_contained_generics_types(type2_80,info), come_pop_stackframe(), __exception_result_var_b100),    _if_conditional54) {
        __result66__ = (_Bool)0;
        return __result66__;
    }
    klass_81=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 135, 882)), "14struct.c", 135, 883))->mClass;
    if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_81, "14struct.c", 137, 884)), "14struct.c", 137, 885))->mGenerics) {
        __result67__ = (_Bool)0;
        return __result67__;
    }
    if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_81, "14struct.c", 140, 886)), "14struct.c", 140, 887))->mMethodGenerics) {
        __result68__ = (_Bool)0;
        return __result68__;
    }
    for(    i_82=0;    i_82<(come_push_stackframe("14struct.c", 143, 892),__exception_result_var_b101=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 143, 888)), "14struct.c", 143, 889))->mGenericsTypes, "14struct.c", 143, 890)), "14struct.c", 143, 891))), come_pop_stackframe(), __exception_result_var_b101);    i_82++    ){
        result_83=(come_push_stackframe("14struct.c", 144, 898),__exception_result_var_b103=is_no_contained_generics_types((come_push_stackframe("14struct.c", 144, 897),__exception_result_var_b102=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 144, 893)), "14struct.c", 144, 894))->mGenericsTypes, "14struct.c", 144, 895)),i_82), "14struct.c", 144, 896)), come_pop_stackframe(), __exception_result_var_b102),info), come_pop_stackframe(), __exception_result_var_b103);
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
_Bool __exception_result_var_b104;
_Bool _if_conditional58;
_Bool __result71__;
struct sClass* klass_85;
_Bool _if_conditional59;
_Bool __result72__;
int i_86;
int __exception_result_var_b105;
struct sType* __exception_result_var_b106;
_Bool __exception_result_var_b107;
_Bool result_87;
_Bool _if_conditional60;
_Bool __result73__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type2_84, 0, sizeof(struct sType*));
memset(&klass_85, 0, sizeof(struct sClass*));
memset(&i_86, 0, sizeof(int));
memset(&result_87, 0, sizeof(_Bool));
    type2_84=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 156, 899)), "14struct.c", 156, 900))->mNoSolvedGenericsType, "14struct.c", 156, 901)), "14struct.c", 156, 902))->v1;
    if(_if_conditional58=type2_84&&(come_push_stackframe("14struct.c", 158, 903),__exception_result_var_b104=is_contained_method_generics_types(type2_84,info), come_pop_stackframe(), __exception_result_var_b104),    _if_conditional58) {
        __result71__ = (_Bool)1;
        return __result71__;
    }
    klass_85=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 162, 904)), "14struct.c", 162, 905))->mClass;
    if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_85, "14struct.c", 164, 906)), "14struct.c", 164, 907))->mMethodGenerics) {
        __result72__ = (_Bool)1;
        return __result72__;
    }
    for(    i_86=0;    i_86<(come_push_stackframe("14struct.c", 167, 912),__exception_result_var_b105=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 167, 908)), "14struct.c", 167, 909))->mGenericsTypes, "14struct.c", 167, 910)), "14struct.c", 167, 911))), come_pop_stackframe(), __exception_result_var_b105);    i_86++    ){
        result_87=(come_push_stackframe("14struct.c", 168, 918),__exception_result_var_b107=is_contained_method_generics_types((come_push_stackframe("14struct.c", 168, 917),__exception_result_var_b106=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 168, 913)), "14struct.c", 168, 914))->mGenericsTypes, "14struct.c", 168, 915)),i_86), "14struct.c", 168, 916)), come_pop_stackframe(), __exception_result_var_b106),info), come_pop_stackframe(), __exception_result_var_b107);
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
char* __exception_result_var_b108;
char* new_name_88;
_Bool __exception_result_var_b109;
_Bool __exception_result_var_b112;
_Bool _if_conditional65;
struct sType* __exception_result_var_b136;
void* right_value133;
struct sType* type2_91;
struct sClass* __exception_result_var_b140;
struct sClass* generics_class_116;
_Bool _if_conditional152;
_Bool __result101__;
void* right_value134;
void* right_value135;
struct sClass* __exception_result_var_b141;
struct sClass* new_class_120;
void* right_value142;
char* __exception_result_var_b173;
struct map$2charphsClassph* __exception_result_var_b174;
int i_165;
struct list$1tuple2$2charphsTypephph* o2_saved_166;
struct tuple2$2charphsTypeph* __exception_result_var_b175;
struct tuple2$2charphsTypeph* it_167;
_Bool __exception_result_var_b176;
struct tuple2$2charphsTypeph* __exception_result_var_b177;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_168;
struct sType* type_169;
void* right_value143;
struct sType* __exception_result_var_b178;
struct sType* new_type_170;
char* __exception_result_var_b179;
void* right_value147;
struct sType* __exception_result_var_b180;
void* right_value148;
void* right_value149;
void* right_value150;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b181;
struct sType* __exception_result_var_b182;
void* right_value151;
struct sType* __dec_obj40;
struct list$1sTypeph* __exception_result_var_b183;
_Bool __exception_result_var_b184;
_Bool _if_conditional208;
struct sClass* __exception_result_var_b185;
struct sClass* generics_class_176;
_Bool _if_conditional209;
_Bool __result129__;
void* right_value152;
void* right_value153;
struct sClass* __exception_result_var_b186;
struct sClass* new_class_177;
void* right_value154;
char* __exception_result_var_b187;
struct map$2charphsClassph* __exception_result_var_b188;
_Bool existance_method_generics_178;
int i_179;
struct list$1tuple2$2charphsTypephph* o2_saved_180;
struct tuple2$2charphsTypeph* __exception_result_var_b189;
struct tuple2$2charphsTypeph* it_181;
_Bool __exception_result_var_b190;
struct tuple2$2charphsTypeph* __exception_result_var_b191;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_182;
struct sType* type_183;
void* right_value155;
struct sType* __exception_result_var_b192;
struct sType* new_type_184;
_Bool __exception_result_var_b193;
_Bool _if_conditional210;
char* __exception_result_var_b194;
void* right_value156;
struct sType* __exception_result_var_b195;
void* right_value157;
void* right_value158;
void* right_value159;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b196;
struct sType* __exception_result_var_b197;
void* right_value160;
struct sType* __dec_obj41;
struct list$1sTypeph* __exception_result_var_b198;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sType* __exception_result_var_b199;
void* right_value161;
struct sType* __dec_obj42;
struct sClass* __exception_result_var_b200;
struct list$1sTypeph* __exception_result_var_b201;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&new_name_88, 0, sizeof(char*));
right_value133 = (void*)0;
memset(&type2_91, 0, sizeof(struct sType*));
memset(&generics_class_116, 0, sizeof(struct sClass*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_class_120, 0, sizeof(struct sClass*));
right_value142 = (void*)0;
memset(&i_165, 0, sizeof(int));
memset(&o2_saved_166, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_167, 0, sizeof(struct tuple2$2charphsTypeph*));
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
right_value155 = (void*)0;
memset(&new_type_184, 0, sizeof(struct sType*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    new_name_88=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 180, 919),__exception_result_var_b108=((char*)(right_value97=create_generics_name(type,info))), come_pop_stackframe(), __exception_result_var_b108));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional65=(come_push_stackframe("14struct.c", 182, 920),__exception_result_var_b109=is_no_contained_generics_types(type,info), come_pop_stackframe(), __exception_result_var_b109)&&!(come_push_stackframe("14struct.c", 182, 941),__exception_result_var_b112=map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 182, 921)), "14struct.c", 182, 922))->classes, "14struct.c", 182, 923)), "14struct.c", 182, 924)),new_name_88), come_pop_stackframe(), __exception_result_var_b112),    _if_conditional65) {
        type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(come_push_stackframe("14struct.c", 183, 1451),__exception_result_var_b136=sType_clone(type), come_pop_stackframe(), __exception_result_var_b136))));
        come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
        generics_class_116=(come_push_stackframe("14struct.c", 185, 1494),__exception_result_var_b140=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 185, 1452)), "14struct.c", 185, 1453))->generics_classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 185, 1454)), "14struct.c", 185, 1455))->mClass, "14struct.c", 185, 1456)), "14struct.c", 185, 1457))->mName), come_pop_stackframe(), __exception_result_var_b140);
        if(_if_conditional152=generics_class_116==((void*)0),        _if_conditional152) {
            (come_push_stackframe("14struct.c", 188,1499),err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 188, 1495)), "14struct.c", 188, 1496))->mClass, "14struct.c", 188, 1497)), "14struct.c", 188, 1498))->mName),come_pop_stackframe());
            __result101__ = (_Bool)0;
            come_call_finalizer3(type2_91,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        new_class_120=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 192, 1501),__exception_result_var_b141=((struct sClass*)(right_value135=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value134=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 192, "sClass"))), "14struct.c", 192, 1500))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b141));
        come_call_finalizer3(right_value134,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value135,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("14struct.c", 194, 1879),__exception_result_var_b174=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 194, 1502)), "14struct.c", 194, 1503))->classes, "14struct.c", 194, 1504)), "14struct.c", 194, 1505)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 194, 1878),__exception_result_var_b173=((char*)(right_value142=__builtin_string(new_name_88))), come_pop_stackframe(), __exception_result_var_b173)),(struct sClass*)come_increment_ref_count(new_class_120)), come_pop_stackframe(), __exception_result_var_b174);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_165=0;
        for(        o2_saved_166=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(generics_class_116, "14struct.c", 197, 1880)), "14struct.c", 197, 1881))->mFields)),it_167=(come_push_stackframe("14struct.c", 197, 1884),__exception_result_var_b175=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_166), "14struct.c", 197, 1882)), "14struct.c", 197, 1883))), come_pop_stackframe(), __exception_result_var_b175);        !(come_push_stackframe("14struct.c", 197, 1887),__exception_result_var_b176=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_166), "14struct.c", 197, 1885)), "14struct.c", 197, 1886))), come_pop_stackframe(), __exception_result_var_b176);        it_167=(come_push_stackframe("14struct.c", 197, 1890),__exception_result_var_b177=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_166), "14struct.c", 197, 1888)), "14struct.c", 197, 1889))), come_pop_stackframe(), __exception_result_var_b177)        ){
            multiple_assign_var3=it_167;
            name_168=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_169=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_170=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 200, 1891),__exception_result_var_b178=((struct sType*)(right_value143=solve_generics(type_169,type2_91,info))), come_pop_stackframe(), __exception_result_var_b178));
            come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 202, 1970),__exception_result_var_b181=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(new_class_120, "14struct.c", 202, 1892)), "14struct.c", 202, 1893))->mFields, "14struct.c", 202, 1894)), "14struct.c", 202, 1895)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value150=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value149=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 202, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value147=(come_push_stackframe("14struct.c", 202, 1964),__exception_result_var_b179=string_clone(name_168), come_pop_stackframe(), __exception_result_var_b179)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(come_push_stackframe("14struct.c", 202, 1965),__exception_result_var_b180=sType_clone(new_type_170), come_pop_stackframe(), __exception_result_var_b180))))))))), come_pop_stackframe(), __exception_result_var_b181);
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
            right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value150,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_166,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj40=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 205, 1971)), "14struct.c", 205, 1972))->mNoSolvedGenericsType, "14struct.c", 205, 1973)), "14struct.c", 205, 1974))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 205, 1971)), "14struct.c", 205, 1972))->mNoSolvedGenericsType, "14struct.c", 205, 1973)), "14struct.c", 205, 1974))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=(come_push_stackframe("14struct.c", 205, 1975),__exception_result_var_b182=sType_clone(type), come_pop_stackframe(), __exception_result_var_b182))));
        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 206, 1976)), "14struct.c", 206, 1977))->mNoSolvedGenericsType, "14struct.c", 206, 1978)), "14struct.c", 206, 1979))->v1, "14struct.c", 206, 1980)), "14struct.c", 206, 1981))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 206, 1982)), "14struct.c", 206, 1983))->mPointerNum;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 207, 1984)), "14struct.c", 207, 1985))->mClass=new_class_120;
        (come_push_stackframe("14struct.c", 208, 2000),__exception_result_var_b183=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 208, 1986)), "14struct.c", 208, 1987))->mGenericsTypes, "14struct.c", 208, 1988)), "14struct.c", 208, 1989))), come_pop_stackframe(), __exception_result_var_b183);
        (come_push_stackframe("14struct.c", 210,2001),output_struct(new_class_120,info),come_pop_stackframe());
        come_call_finalizer3(type2_91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(new_class_120,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional208=!(come_push_stackframe("14struct.c", 212, 2006),__exception_result_var_b184=map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 212, 2002)), "14struct.c", 212, 2003))->classes, "14struct.c", 212, 2004)), "14struct.c", 212, 2005)),new_name_88), come_pop_stackframe(), __exception_result_var_b184),        _if_conditional208) {
            generics_class_176=(come_push_stackframe("14struct.c", 213, 2013),__exception_result_var_b185=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 213, 2007)), "14struct.c", 213, 2008))->generics_classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 213, 2009)), "14struct.c", 213, 2010))->mClass, "14struct.c", 213, 2011)), "14struct.c", 213, 2012))->mName), come_pop_stackframe(), __exception_result_var_b185);
            if(_if_conditional209=generics_class_176==((void*)0),            _if_conditional209) {
                (come_push_stackframe("14struct.c", 216,2018),err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 216, 2014)), "14struct.c", 216, 2015))->mClass, "14struct.c", 216, 2016)), "14struct.c", 216, 2017))->mName),come_pop_stackframe());
                __result129__ = (_Bool)0;
                new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result129__;
            }
            new_class_177=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 220, 2020),__exception_result_var_b186=((struct sClass*)(right_value153=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 220, "sClass"))), "14struct.c", 220, 2019))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b186));
            come_call_finalizer3(right_value152,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value153,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 222, 2026),__exception_result_var_b188=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 222, 2021)), "14struct.c", 222, 2022))->classes, "14struct.c", 222, 2023)), "14struct.c", 222, 2024)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 222, 2025),__exception_result_var_b187=((char*)(right_value154=__builtin_string(new_name_88))), come_pop_stackframe(), __exception_result_var_b187)),(struct sClass*)come_increment_ref_count(new_class_177)), come_pop_stackframe(), __exception_result_var_b188);
            right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            existance_method_generics_178=(_Bool)0;
            i_179=0;
            for(            o2_saved_180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(generics_class_176, "14struct.c", 226, 2027)), "14struct.c", 226, 2028))->mFields)),it_181=(come_push_stackframe("14struct.c", 226, 2031),__exception_result_var_b189=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_180), "14struct.c", 226, 2029)), "14struct.c", 226, 2030))), come_pop_stackframe(), __exception_result_var_b189);            !(come_push_stackframe("14struct.c", 226, 2034),__exception_result_var_b190=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_180), "14struct.c", 226, 2032)), "14struct.c", 226, 2033))), come_pop_stackframe(), __exception_result_var_b190);            it_181=(come_push_stackframe("14struct.c", 226, 2037),__exception_result_var_b191=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_180), "14struct.c", 226, 2035)), "14struct.c", 226, 2036))), come_pop_stackframe(), __exception_result_var_b191)            ){
                multiple_assign_var4=it_181;
                name_182=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_183=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                new_type_184=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 229, 2038),__exception_result_var_b192=((struct sType*)(right_value155=solve_generics(type_183,generics_type,info))), come_pop_stackframe(), __exception_result_var_b192));
                come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional210=(come_push_stackframe("14struct.c", 231, 2039),__exception_result_var_b193=is_contained_method_generics_types(new_type_184,info), come_pop_stackframe(), __exception_result_var_b193),                _if_conditional210) {
                }
                (come_push_stackframe("14struct.c", 235, 2046),__exception_result_var_b196=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(new_class_177, "14struct.c", 235, 2040)), "14struct.c", 235, 2041))->mFields, "14struct.c", 235, 2042)), "14struct.c", 235, 2043)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value159=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value158=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 235, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(right_value156=(come_push_stackframe("14struct.c", 235, 2044),__exception_result_var_b194=string_clone(name_182), come_pop_stackframe(), __exception_result_var_b194)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(come_push_stackframe("14struct.c", 235, 2045),__exception_result_var_b195=sType_clone(new_type_184), come_pop_stackframe(), __exception_result_var_b195))))))))), come_pop_stackframe(), __exception_result_var_b196);
                right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
                right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value159,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(new_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_180,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj41=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 238, 2047)), "14struct.c", 238, 2048))->mNoSolvedGenericsType, "14struct.c", 238, 2049)), "14struct.c", 238, 2050))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 238, 2047)), "14struct.c", 238, 2048))->mNoSolvedGenericsType, "14struct.c", 238, 2049)), "14struct.c", 238, 2050))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(come_push_stackframe("14struct.c", 238, 2051),__exception_result_var_b197=sType_clone(type), come_pop_stackframe(), __exception_result_var_b197))));
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 239, 2052)), "14struct.c", 239, 2053))->mNoSolvedGenericsType, "14struct.c", 239, 2054)), "14struct.c", 239, 2055))->v1, "14struct.c", 239, 2056)), "14struct.c", 239, 2057))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 239, 2058)), "14struct.c", 239, 2059))->mPointerNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 240, 2060)), "14struct.c", 240, 2061))->mClass=new_class_177;
            (come_push_stackframe("14struct.c", 241, 2066),__exception_result_var_b198=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 241, 2062)), "14struct.c", 241, 2063))->mGenericsTypes, "14struct.c", 241, 2064)), "14struct.c", 241, 2065))), come_pop_stackframe(), __exception_result_var_b198);
            if(_if_conditional211=!existance_method_generics_178,            _if_conditional211) {
                (come_push_stackframe("14struct.c", 244,2067),output_struct(new_class_177,info),come_pop_stackframe());
            }
            come_call_finalizer3(new_class_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional212=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 248, 2068)), "14struct.c", 248, 2069))->mNoSolvedGenericsType, "14struct.c", 248, 2070)), "14struct.c", 248, 2071))->v1==((void*)0),            _if_conditional212) {
                __dec_obj42=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 249, 2072)), "14struct.c", 249, 2073))->mNoSolvedGenericsType, "14struct.c", 249, 2074)), "14struct.c", 249, 2075))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 249, 2072)), "14struct.c", 249, 2073))->mNoSolvedGenericsType, "14struct.c", 249, 2074)), "14struct.c", 249, 2075))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(come_push_stackframe("14struct.c", 249, 2076),__exception_result_var_b199=sType_clone(type), come_pop_stackframe(), __exception_result_var_b199))));
                come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 250, 2077)), "14struct.c", 250, 2078))->mNoSolvedGenericsType, "14struct.c", 250, 2079)), "14struct.c", 250, 2080))->v1, "14struct.c", 250, 2081)), "14struct.c", 250, 2082))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 250, 2083)), "14struct.c", 250, 2084))->mPointerNum;
            }
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 252, 2085)), "14struct.c", 252, 2086))->mClass=(come_push_stackframe("14struct.c", 252, 2089),__exception_result_var_b200=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 252, 2087)), "14struct.c", 252, 2088))->classes,new_name_88), come_pop_stackframe(), __exception_result_var_b200);
            (come_push_stackframe("14struct.c", 253, 2094),__exception_result_var_b201=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 253, 2090)), "14struct.c", 253, 2091))->mGenericsTypes, "14struct.c", 253, 2092)), "14struct.c", 253, 2093))), come_pop_stackframe(), __exception_result_var_b201);
        }
    }
    __result130__ = (_Bool)1;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result130__;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
unsigned int __exception_result_var_b110;
unsigned int hash_89;
int it_90;
_Bool _while_condtional13;
_Bool _if_conditional61;
_Bool __exception_result_var_b111;
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
        hash_89=(come_push_stackframe("./neo-c.h", 1605, 927),__exception_result_var_b110=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1605, 925)), "./neo-c.h", 1605, 926))), come_pop_stackframe(), __exception_result_var_b110)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1605, 928)), "./neo-c.h", 1605, 929))->size;
        it_90=hash_89;
        while(_while_condtional13=(_Bool)1,        _while_condtional13) {
            if(_if_conditional61=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1609, 930)), "./neo-c.h", 1609, 931))->item_existance, "./neo-c.h", 1609, 932))[it_90],            _if_conditional61) {
                if(_if_conditional62=(come_push_stackframe("./neo-c.h", 1611, 938),__exception_result_var_b111=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1611, 933)), "./neo-c.h", 1611, 934))->keys, "./neo-c.h", 1611, 935))[it_90], "./neo-c.h", 1611, 936)), "./neo-c.h", 1611, 937)),key), come_pop_stackframe(), __exception_result_var_b111),                _if_conditional62) {
                    __result75__ = (_Bool)1;
                    return __result75__;
                }
                it_90++;
                if(_if_conditional63=it_90>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1618, 939)), "./neo-c.h", 1618, 940))->size,                _if_conditional63) {
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
struct sType* result_92;
_Bool _if_conditional67;
_Bool _if_conditional68;
struct list$1sTypeph* __exception_result_var_b116;
void* right_value105;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional72;
struct tuple1$1sTypeph* __exception_result_var_b118;
void* right_value108;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional76;
struct tuple1$1sTypeph* __exception_result_var_b119;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional77;
char* __exception_result_var_b120;
void* right_value110;
char* __dec_obj19;
_Bool _if_conditional78;
struct list$1sTypeph* __exception_result_var_b121;
void* right_value111;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional79;
struct list$1sNodeph* __exception_result_var_b125;
void* right_value119;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional92;
_Bool _if_conditional93;
struct list$1sTypeph* __exception_result_var_b126;
void* right_value120;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional94;
struct list$1charph* __exception_result_var_b130;
void* right_value127;
struct list$1charph* __dec_obj29;
_Bool _if_conditional98;
struct tuple1$1sTypeph* __exception_result_var_b131;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional99;
_Bool _if_conditional100;
struct sNode* __exception_result_var_b132;
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
_Bool _if_conditional127;
struct sNode* __exception_result_var_b133;
void* right_value130;
struct sNode* __dec_obj32;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
char* __exception_result_var_b134;
void* right_value131;
char* __dec_obj33;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
char* __exception_result_var_b135;
void* right_value132;
char* __dec_obj34;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_92, 0, sizeof(struct sType*));
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
            result_92=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value98,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 4, 942)), "sType_clone", 4, 943))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 944)), "sType_clone", 4, 945))->mClass;
            }
            if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 946)), "sType_clone", 5, 947))->mMultipleTypes!=((void*)0),            _if_conditional68) {
                __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 5, 948)), "sType_clone", 5, 949))->mMultipleTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 5, 948)), "sType_clone", 5, 949))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=(come_push_stackframe("sType_clone", 5, 1015),__exception_result_var_b116=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 950)), "sType_clone", 5, 951))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b116))));
                come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional72=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1020)), "sType_clone", 6, 1021))->mNoSolvedGenericsType!=((void*)0),            _if_conditional72) {
                __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 6, 1022)), "sType_clone", 6, 1023))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 6, 1022)), "sType_clone", 6, 1023))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value108=(come_push_stackframe("sType_clone", 6, 1037),__exception_result_var_b118=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1024)), "sType_clone", 6, 1025))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b118))));
                come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value108,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1038)), "sType_clone", 7, 1039))->mOriginalLoadVarType!=((void*)0),            _if_conditional76) {
                __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 7, 1040)), "sType_clone", 7, 1041))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 7, 1040)), "sType_clone", 7, 1041))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=(come_push_stackframe("sType_clone", 7, 1044),__exception_result_var_b119=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1042)), "sType_clone", 7, 1043))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b119))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1045)), "sType_clone", 8, 1046))->mGenericsName!=((void*)0),            _if_conditional77) {
                __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 8, 1047)), "sType_clone", 8, 1048))->mGenericsName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 8, 1047)), "sType_clone", 8, 1048))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value110=(come_push_stackframe("sType_clone", 8, 1051),__exception_result_var_b120=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1049)), "sType_clone", 8, 1050))->mGenericsName), come_pop_stackframe(), __exception_result_var_b120))));
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1052)), "sType_clone", 9, 1053))->mGenericsTypes!=((void*)0),            _if_conditional78) {
                __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 9, 1054)), "sType_clone", 9, 1055))->mGenericsTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 9, 1054)), "sType_clone", 9, 1055))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value111=(come_push_stackframe("sType_clone", 9, 1058),__exception_result_var_b121=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1056)), "sType_clone", 9, 1057))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b121))));
                come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1059)), "sType_clone", 10, 1060))->mArrayNum!=((void*)0),            _if_conditional79) {
                __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 10, 1061)), "sType_clone", 10, 1062))->mArrayNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 10, 1061)), "sType_clone", 10, 1062))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value119=(come_push_stackframe("sType_clone", 10, 1162),__exception_result_var_b125=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1063)), "sType_clone", 10, 1064))->mArrayNum), come_pop_stackframe(), __exception_result_var_b125))));
                come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value119,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 11, 1167)), "sType_clone", 11, 1168))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1169)), "sType_clone", 11, 1170))->mOmitArrayNum;
            }
            if(_if_conditional93=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1171)), "sType_clone", 12, 1172))->mParamTypes!=((void*)0),            _if_conditional93) {
                __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 12, 1173)), "sType_clone", 12, 1174))->mParamTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 12, 1173)), "sType_clone", 12, 1174))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=(come_push_stackframe("sType_clone", 12, 1177),__exception_result_var_b126=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1175)), "sType_clone", 12, 1176))->mParamTypes), come_pop_stackframe(), __exception_result_var_b126))));
                come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional94=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1178)), "sType_clone", 13, 1179))->mParamNames!=((void*)0),            _if_conditional94) {
                __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 13, 1180)), "sType_clone", 13, 1181))->mParamNames;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 13, 1180)), "sType_clone", 13, 1181))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value127=(come_push_stackframe("sType_clone", 13, 1247),__exception_result_var_b130=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1182)), "sType_clone", 13, 1183))->mParamNames), come_pop_stackframe(), __exception_result_var_b130))));
                come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value127,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional98=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1252)), "sType_clone", 14, 1253))->mResultType!=((void*)0),            _if_conditional98) {
                __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 14, 1254)), "sType_clone", 14, 1255))->mResultType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 14, 1254)), "sType_clone", 14, 1255))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=(come_push_stackframe("sType_clone", 14, 1258),__exception_result_var_b131=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1256)), "sType_clone", 14, 1257))->mResultType), come_pop_stackframe(), __exception_result_var_b131))));
                come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value128,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 15, 1259)), "sType_clone", 15, 1260))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1261)), "sType_clone", 15, 1262))->mVarArgs;
            }
            if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1263)), "sType_clone", 16, 1264))->mAlignas!=((void*)0),            _if_conditional100) {
                __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 16, 1265)), "sType_clone", 16, 1266))->mAlignas;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 16, 1265)), "sType_clone", 16, 1266))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=(come_push_stackframe("sType_clone", 16, 1269),__exception_result_var_b132=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1267)), "sType_clone", 16, 1268))->mAlignas), come_pop_stackframe(), __exception_result_var_b132))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 17, 1270)), "sType_clone", 17, 1271))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1272)), "sType_clone", 17, 1273))->mUnsigned;
            }
            if(_if_conditional102=self!=((void*)0),            _if_conditional102) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 18, 1274)), "sType_clone", 18, 1275))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1276)), "sType_clone", 18, 1277))->mShort;
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 19, 1278)), "sType_clone", 19, 1279))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1280)), "sType_clone", 19, 1281))->mLong;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 20, 1282)), "sType_clone", 20, 1283))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1284)), "sType_clone", 20, 1285))->mLongLong;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 21, 1286)), "sType_clone", 21, 1287))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1288)), "sType_clone", 21, 1289))->mConstant;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 22, 1290)), "sType_clone", 22, 1291))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1292)), "sType_clone", 22, 1293))->mRegister;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 23, 1294)), "sType_clone", 23, 1295))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1296)), "sType_clone", 23, 1297))->mVolatile;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 24, 1298)), "sType_clone", 24, 1299))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1300)), "sType_clone", 24, 1301))->mStatic;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 25, 1302)), "sType_clone", 25, 1303))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1304)), "sType_clone", 25, 1305))->mUniq;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 26, 1306)), "sType_clone", 26, 1307))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1308)), "sType_clone", 26, 1309))->mRecord;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 27, 1310)), "sType_clone", 27, 1311))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1312)), "sType_clone", 27, 1313))->mExtern;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 28, 1314)), "sType_clone", 28, 1315))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1316)), "sType_clone", 28, 1317))->mRestrict;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 29, 1318)), "sType_clone", 29, 1319))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1320)), "sType_clone", 29, 1321))->mImmutable;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 30, 1322)), "sType_clone", 30, 1323))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1324)), "sType_clone", 30, 1325))->mHeap;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 31, 1326)), "sType_clone", 31, 1327))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1328)), "sType_clone", 31, 1329))->mDummyHeap;
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 32, 1330)), "sType_clone", 32, 1331))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1332)), "sType_clone", 32, 1333))->mDelegate;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 33, 1334)), "sType_clone", 33, 1335))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1336)), "sType_clone", 33, 1337))->mShare;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 34, 1338)), "sType_clone", 34, 1339))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1340)), "sType_clone", 34, 1341))->mClone;
            }
            if(_if_conditional119=self!=((void*)0),            _if_conditional119) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 35, 1342)), "sType_clone", 35, 1343))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1344)), "sType_clone", 35, 1345))->mNoHeap;
            }
            if(_if_conditional120=self!=((void*)0),            _if_conditional120) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 36, 1346)), "sType_clone", 36, 1347))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1348)), "sType_clone", 36, 1349))->mNoCallingDestructor;
            }
            if(_if_conditional121=self!=((void*)0),            _if_conditional121) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 37, 1350)), "sType_clone", 37, 1351))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1352)), "sType_clone", 37, 1353))->mRefference;
            }
            if(_if_conditional122=self!=((void*)0),            _if_conditional122) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 38, 1354)), "sType_clone", 38, 1355))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1356)), "sType_clone", 38, 1357))->mException;
            }
            if(_if_conditional123=self!=((void*)0),            _if_conditional123) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 39, 1358)), "sType_clone", 39, 1359))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1360)), "sType_clone", 39, 1361))->mPointerNum;
            }
            if(_if_conditional124=self!=((void*)0),            _if_conditional124) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 40, 1362)), "sType_clone", 40, 1363))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1364)), "sType_clone", 40, 1365))->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional125=self!=((void*)0),            _if_conditional125) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 41, 1366)), "sType_clone", 41, 1367))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1368)), "sType_clone", 41, 1369))->mNoArrayPointerNum;
            }
            if(_if_conditional126=self!=((void*)0),            _if_conditional126) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 42, 1370)), "sType_clone", 42, 1371))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1372)), "sType_clone", 42, 1373))->mTypedefOriginalPointerNum;
            }
            if(_if_conditional127=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1374)), "sType_clone", 43, 1375))->mSizeNum!=((void*)0),            _if_conditional127) {
                __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 43, 1376)), "sType_clone", 43, 1377))->mSizeNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 43, 1376)), "sType_clone", 43, 1377))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value130=(come_push_stackframe("sType_clone", 43, 1380),__exception_result_var_b133=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1378)), "sType_clone", 43, 1379))->mSizeNum), come_pop_stackframe(), __exception_result_var_b133))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, ((struct sNode*)right_value130)->finalize, ((struct sNode*)right_value130)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional128=self!=((void*)0),            _if_conditional128) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 44, 1381)), "sType_clone", 44, 1382))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1383)), "sType_clone", 44, 1384))->mDynamicArrayNum;
            }
            if(_if_conditional129=self!=((void*)0),            _if_conditional129) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 45, 1385)), "sType_clone", 45, 1386))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1387)), "sType_clone", 45, 1388))->mTypeOfExpression;
            }
            if(_if_conditional130=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1389)), "sType_clone", 46, 1390))->mOriginalTypeName!=((void*)0),            _if_conditional130) {
                __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 46, 1391)), "sType_clone", 46, 1392))->mOriginalTypeName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 46, 1391)), "sType_clone", 46, 1392))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value131=(come_push_stackframe("sType_clone", 46, 1395),__exception_result_var_b134=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1393)), "sType_clone", 46, 1394))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b134))));
                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional131=self!=((void*)0),            _if_conditional131) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 47, 1396)), "sType_clone", 47, 1397))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1398)), "sType_clone", 47, 1399))->mOriginalPointerNum;
            }
            if(_if_conditional132=self!=((void*)0),            _if_conditional132) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 48, 1400)), "sType_clone", 48, 1401))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1402)), "sType_clone", 48, 1403))->mFunctionParam;
            }
            if(_if_conditional133=self!=((void*)0),            _if_conditional133) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 49, 1404)), "sType_clone", 49, 1405))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1406)), "sType_clone", 49, 1407))->mAllocaValue;
            }
            if(_if_conditional134=self!=((void*)0),            _if_conditional134) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 50, 1408)), "sType_clone", 50, 1409))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1410)), "sType_clone", 50, 1411))->mGenericsStruct;
            }
            if(_if_conditional135=self!=((void*)0),            _if_conditional135) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 51, 1412)), "sType_clone", 51, 1413))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1414)), "sType_clone", 51, 1415))->mSolvedGenericsName;
            }
            if(_if_conditional136=self!=((void*)0),            _if_conditional136) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 52, 1416)), "sType_clone", 52, 1417))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1418)), "sType_clone", 52, 1419))->mComeMemCore;
            }
            if(_if_conditional137=self!=((void*)0),            _if_conditional137) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 53, 1420)), "sType_clone", 53, 1421))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1422)), "sType_clone", 53, 1423))->mInline;
            }
            if(_if_conditional138=self!=((void*)0),            _if_conditional138) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 54, 1424)), "sType_clone", 54, 1425))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1426)), "sType_clone", 54, 1427))->mNullValue;
            }
            if(_if_conditional139=self!=((void*)0),            _if_conditional139) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 55, 1428)), "sType_clone", 55, 1429))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1430)), "sType_clone", 55, 1431))->mGuardValue;
            }
            if(_if_conditional140=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1432)), "sType_clone", 56, 1433))->mAsmName!=((void*)0),            _if_conditional140) {
                __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 56, 1434)), "sType_clone", 56, 1435))->mAsmName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 56, 1434)), "sType_clone", 56, 1435))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value132=(come_push_stackframe("sType_clone", 56, 1438),__exception_result_var_b135=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1436)), "sType_clone", 56, 1437))->mAsmName), come_pop_stackframe(), __exception_result_var_b135))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional141=self!=((void*)0),            _if_conditional141) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 57, 1439)), "sType_clone", 57, 1440))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1441)), "sType_clone", 57, 1442))->mArrayPointerType;
            }
            if(_if_conditional142=self!=((void*)0),            _if_conditional142) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 58, 1443)), "sType_clone", 58, 1444))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1445)), "sType_clone", 58, 1446))->mLambdaArray;
            }
            if(_if_conditional143=self!=((void*)0),            _if_conditional143) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_92, "sType_clone", 59, 1447)), "sType_clone", 59, 1448))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1449)), "sType_clone", 59, 1450))->mNoNumberArray;
            }
            __result96__ = __result_obj__ = result_92;
            come_call_finalizer3(result_92,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result96__;
            come_call_finalizer3(result_92,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1sTypeph* __result80__;
void* right_value99;
void* right_value100;
struct list$1sTypeph* __exception_result_var_b113;
struct list$1sTypeph* result_93;
struct list_item$1sTypeph* it_94;
_Bool _while_condtional14;
struct sType* __exception_result_var_b114;
void* right_value104;
struct list$1sTypeph* __exception_result_var_b115;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_93, 0, sizeof(struct list$1sTypeph*));
memset(&it_94, 0, sizeof(struct list_item$1sTypeph*));
right_value104 = (void*)0;
                    if(_if_conditional69=self==((void*)0),                    _if_conditional69) {
                        __result80__ = __result_obj__ = ((void*)0);
                        return __result80__;
                    }
                    result_93=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 960),__exception_result_var_b113=((struct list$1sTypeph*)(right_value100=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 952)), "./neo-c.h", 139, 953)))))), come_pop_stackframe(), __exception_result_var_b113));
                    come_call_finalizer3(right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value100,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_94=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 961)), "./neo-c.h", 141, 962))->head;
                    while(_while_condtional14=it_94!=((void*)0),                    _while_condtional14) {
                        (come_push_stackframe("./neo-c.h", 143, 1012),__exception_result_var_b115=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_93, "./neo-c.h", 143, 963)), "./neo-c.h", 143, 964)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(come_push_stackframe("./neo-c.h", 143, 1011),__exception_result_var_b114=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_94, "./neo-c.h", 143, 1009)), "./neo-c.h", 143, 1010))->item), come_pop_stackframe(), __exception_result_var_b114))))), come_pop_stackframe(), __exception_result_var_b115);
                        come_call_finalizer3(right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_94=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_94, "./neo-c.h", 145, 1013)), "./neo-c.h", 145, 1014))->next;
                    }
                    __result83__ = __result_obj__ = result_93;
                    come_call_finalizer3(result_93,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                    come_call_finalizer3(result_93,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 954)), "./neo-c.h", 101, 955))->head=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 956)), "./neo-c.h", 102, 957))->tail=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 958)), "./neo-c.h", 103, 959))->len=0;
                        __result81__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value101;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj12;
_Bool _if_conditional71;
void* right_value102;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj13;
void* right_value103;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj14;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1sTypeph*));
right_value102 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
right_value103 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional70=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 965)), "./neo-c.h", 152, 966))->len==0,                            _if_conditional70) {
                                litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value101,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_95, "./neo-c.h", 155, 967)), "./neo-c.h", 155, 968))->prev=((void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_95, "./neo-c.h", 156, 969)), "./neo-c.h", 156, 970))->next=((void*)0);
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_95, "./neo-c.h", 157, 971)), "./neo-c.h", 157, 972))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_95, "./neo-c.h", 157, 971)), "./neo-c.h", 157, 972))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 973)), "./neo-c.h", 159, 974))->tail=litem_95;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 975)), "./neo-c.h", 160, 976))->head=litem_95;
                            }
                            else {
                                if(_if_conditional71=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 977)), "./neo-c.h", 162, 978))->len==1,                                _if_conditional71) {
                                    litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value102,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_96, "./neo-c.h", 165, 979)), "./neo-c.h", 165, 980))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 981)), "./neo-c.h", 165, 982))->head;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_96, "./neo-c.h", 166, 983)), "./neo-c.h", 166, 984))->next=((void*)0);
                                    __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_96, "./neo-c.h", 167, 985)), "./neo-c.h", 167, 986))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_96, "./neo-c.h", 167, 985)), "./neo-c.h", 167, 986))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 987)), "./neo-c.h", 169, 988))->tail=litem_96;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 989)), "./neo-c.h", 170, 990))->head, "./neo-c.h", 170, 991)), "./neo-c.h", 170, 992))->next=litem_96;
                                }
                                else {
                                    litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_97, "./neo-c.h", 175, 993)), "./neo-c.h", 175, 994))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 995)), "./neo-c.h", 175, 996))->tail;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_97, "./neo-c.h", 176, 997)), "./neo-c.h", 176, 998))->next=((void*)0);
                                    __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_97, "./neo-c.h", 177, 999)), "./neo-c.h", 177, 1000))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_97, "./neo-c.h", 177, 999)), "./neo-c.h", 177, 1000))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 1001)), "./neo-c.h", 179, 1002))->tail, "./neo-c.h", 179, 1003)), "./neo-c.h", 179, 1004))->next=litem_97;
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 1005)), "./neo-c.h", 180, 1006))->tail=litem_97;
                                }
                            }
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 1007)), "./neo-c.h", 183, 1008))->len++;
                            __result82__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result82__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_98;
_Bool _while_condtional15;
struct list_item$1sTypeph* prev_it_99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_98, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_99, 0, sizeof(struct list_item$1sTypeph*));
                    it_98=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1016)), "./neo-c.h", 120, 1017))->head;
                    while(_while_condtional15=it_98!=((void*)0),                    _while_condtional15) {
                        prev_it_99=it_98;
                        it_98=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_98, "./neo-c.h", 123, 1018)), "./neo-c.h", 123, 1019))->next;
                        come_call_finalizer3(prev_it_99,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional73;
struct tuple1$1sTypeph* __result84__;
void* right_value106;
struct tuple1$1sTypeph* result_100;
_Bool _if_conditional75;
struct sType* __exception_result_var_b117;
void* right_value107;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&result_100, 0, sizeof(struct tuple1$1sTypeph*));
right_value107 = (void*)0;
                    if(_if_conditional73=self==(void*)0,                    _if_conditional73) {
                        __result84__ = __result_obj__ = (void*)0;
                        return __result84__;
                    }
                    result_100=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value106=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value106,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional75=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1030)), "tuple1$1sTypephp_clone", 4, 1031))->v1!=((void*)0),                    _if_conditional75) {
                        __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_100, "tuple1$1sTypephp_clone", 4, 1032)), "tuple1$1sTypephp_clone", 4, 1033))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_100, "tuple1$1sTypephp_clone", 4, 1032)), "tuple1$1sTypephp_clone", 4, 1033))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1036),__exception_result_var_b117=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1034)), "tuple1$1sTypephp_clone", 4, 1035))->v1), come_pop_stackframe(), __exception_result_var_b117))));
                        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value107,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result85__ = __result_obj__ = result_100;
                    come_call_finalizer3(result_100,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                    come_call_finalizer3(result_100,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional74;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional74=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1026)), "tuple1$1sTypeph_finalize", 0, 1027))->v1!=((void*)0),                        _if_conditional74) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1028)), "tuple1$1sTypeph_finalize", 0, 1029))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional80;
struct list$1sNodeph* __result86__;
void* right_value112;
void* right_value113;
struct list$1sNodeph* __exception_result_var_b122;
struct list$1sNodeph* result_101;
struct list_item$1sNodeph* it_102;
_Bool _while_condtional16;
struct sNode* __exception_result_var_b123;
void* right_value118;
struct list$1sNodeph* __exception_result_var_b124;
struct list$1sNodeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
right_value113 = (void*)0;
memset(&result_101, 0, sizeof(struct list$1sNodeph*));
memset(&it_102, 0, sizeof(struct list_item$1sNodeph*));
right_value118 = (void*)0;
                    if(_if_conditional80=self==((void*)0),                    _if_conditional80) {
                        __result86__ = __result_obj__ = ((void*)0);
                        return __result86__;
                    }
                    result_101=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1073),__exception_result_var_b122=((struct list$1sNodeph*)(right_value113=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 1065)), "./neo-c.h", 139, 1066)))))), come_pop_stackframe(), __exception_result_var_b122));
                    come_call_finalizer3(right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value113,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_102=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 1074)), "./neo-c.h", 141, 1075))->head;
                    while(_while_condtional16=it_102!=((void*)0),                    _while_condtional16) {
                        (come_push_stackframe("./neo-c.h", 143, 1159),__exception_result_var_b124=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_101, "./neo-c.h", 143, 1076)), "./neo-c.h", 143, 1077)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=(come_push_stackframe("./neo-c.h", 143, 1158),__exception_result_var_b123=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_102, "./neo-c.h", 143, 1122)), "./neo-c.h", 143, 1123))->item), come_pop_stackframe(), __exception_result_var_b123))))), come_pop_stackframe(), __exception_result_var_b124);
                        if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_102=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_102, "./neo-c.h", 145, 1160)), "./neo-c.h", 145, 1161))->next;
                    }
                    __result91__ = __result_obj__ = result_101;
                    come_call_finalizer3(result_101,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result91__;
                    come_call_finalizer3(result_101,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 1067)), "./neo-c.h", 101, 1068))->head=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 1069)), "./neo-c.h", 102, 1070))->tail=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 1071)), "./neo-c.h", 103, 1072))->len=0;
                        __result87__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result87__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional81;
void* right_value114;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj21;
_Bool _if_conditional82;
void* right_value115;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj22;
void* right_value116;
struct list_item$1sNodeph* litem_105;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
right_value115 = (void*)0;
memset(&litem_104, 0, sizeof(struct list_item$1sNodeph*));
right_value116 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional81=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 1078)), "./neo-c.h", 152, 1079))->len==0,                            _if_conditional81) {
                                litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value114,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_103, "./neo-c.h", 155, 1080)), "./neo-c.h", 155, 1081))->prev=((void*)0);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_103, "./neo-c.h", 156, 1082)), "./neo-c.h", 156, 1083))->next=((void*)0);
                                __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_103, "./neo-c.h", 157, 1084)), "./neo-c.h", 157, 1085))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_103, "./neo-c.h", 157, 1084)), "./neo-c.h", 157, 1085))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 1086)), "./neo-c.h", 159, 1087))->tail=litem_103;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 1088)), "./neo-c.h", 160, 1089))->head=litem_103;
                            }
                            else {
                                if(_if_conditional82=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 1090)), "./neo-c.h", 162, 1091))->len==1,                                _if_conditional82) {
                                    litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value115,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_104, "./neo-c.h", 165, 1092)), "./neo-c.h", 165, 1093))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 1094)), "./neo-c.h", 165, 1095))->head;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_104, "./neo-c.h", 166, 1096)), "./neo-c.h", 166, 1097))->next=((void*)0);
                                    __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_104, "./neo-c.h", 167, 1098)), "./neo-c.h", 167, 1099))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_104, "./neo-c.h", 167, 1098)), "./neo-c.h", 167, 1099))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 1100)), "./neo-c.h", 169, 1101))->tail=litem_104;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 1102)), "./neo-c.h", 170, 1103))->head, "./neo-c.h", 170, 1104)), "./neo-c.h", 170, 1105))->next=litem_104;
                                }
                                else {
                                    litem_105=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_105, "./neo-c.h", 175, 1106)), "./neo-c.h", 175, 1107))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 1108)), "./neo-c.h", 175, 1109))->tail;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_105, "./neo-c.h", 176, 1110)), "./neo-c.h", 176, 1111))->next=((void*)0);
                                    __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_105, "./neo-c.h", 177, 1112)), "./neo-c.h", 177, 1113))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_105, "./neo-c.h", 177, 1112)), "./neo-c.h", 177, 1113))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 1114)), "./neo-c.h", 179, 1115))->tail, "./neo-c.h", 179, 1116)), "./neo-c.h", 179, 1117))->next=litem_105;
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 1118)), "./neo-c.h", 180, 1119))->tail=litem_105;
                                }
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 1120)), "./neo-c.h", 183, 1121))->len++;
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
struct sNode* result_106;
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
memset(&result_106, 0, sizeof(struct sNode*));
                            if(_if_conditional83=self==(void*)0,                            _if_conditional83) {
                                __result89__ = __result_obj__ = (void*)0;
                                return __result89__;
                            }
                            result_106=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional84=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1124)), "sNode_clone", 4, 1125))->clone!=((void*)0),                            _if_conditional84) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 4, 1126)), "sNode_clone", 4, 1127))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1128)), "sNode_clone", 4, 1129))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1128)), "sNode_clone", 4, 1129))->_protocol_obj);
                            }
                            if(_if_conditional85=self!=((void*)0),                            _if_conditional85) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 5, 1130)), "sNode_clone", 5, 1131))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 1132)), "sNode_clone", 5, 1133))->finalize;
                            }
                            if(_if_conditional86=self!=((void*)0),                            _if_conditional86) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 6, 1134)), "sNode_clone", 6, 1135))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 1136)), "sNode_clone", 6, 1137))->clone;
                            }
                            if(_if_conditional87=self!=((void*)0),                            _if_conditional87) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 7, 1138)), "sNode_clone", 7, 1139))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 1140)), "sNode_clone", 7, 1141))->compile;
                            }
                            if(_if_conditional88=self!=((void*)0),                            _if_conditional88) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 8, 1142)), "sNode_clone", 8, 1143))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 1144)), "sNode_clone", 8, 1145))->sline;
                            }
                            if(_if_conditional89=self!=((void*)0),                            _if_conditional89) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 9, 1146)), "sNode_clone", 9, 1147))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 1148)), "sNode_clone", 9, 1149))->sname;
                            }
                            if(_if_conditional90=self!=((void*)0),                            _if_conditional90) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 10, 1150)), "sNode_clone", 10, 1151))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 1152)), "sNode_clone", 10, 1153))->terminated;
                            }
                            if(_if_conditional91=self!=((void*)0),                            _if_conditional91) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_106, "sNode_clone", 11, 1154)), "sNode_clone", 11, 1155))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 1156)), "sNode_clone", 11, 1157))->kind;
                            }
                            __result90__ = __result_obj__ = result_106;
                            if(result_106) { result_106 = come_decrement_ref_count2(result_106, ((struct sNode*)result_106)->finalize, ((struct sNode*)result_106)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result90__;
                            if(result_106) { result_106 = come_decrement_ref_count2(result_106, ((struct sNode*)result_106)->finalize, ((struct sNode*)result_106)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_107;
_Bool _while_condtional17;
struct list_item$1sNodeph* prev_it_108;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_107, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_108, 0, sizeof(struct list_item$1sNodeph*));
                    it_107=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1163)), "./neo-c.h", 120, 1164))->head;
                    while(_while_condtional17=it_107!=((void*)0),                    _while_condtional17) {
                        prev_it_108=it_107;
                        it_107=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_107, "./neo-c.h", 123, 1165)), "./neo-c.h", 123, 1166))->next;
                        come_call_finalizer3(prev_it_108,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct list$1charph* __result92__;
void* right_value121;
void* right_value122;
struct list$1charph* __exception_result_var_b127;
struct list$1charph* result_109;
struct list_item$1charph* it_110;
_Bool _while_condtional18;
char* __exception_result_var_b128;
void* right_value126;
struct list$1charph* __exception_result_var_b129;
struct list$1charph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&result_109, 0, sizeof(struct list$1charph*));
memset(&it_110, 0, sizeof(struct list_item$1charph*));
right_value126 = (void*)0;
                    if(_if_conditional95=self==((void*)0),                    _if_conditional95) {
                        __result92__ = __result_obj__ = ((void*)0);
                        return __result92__;
                    }
                    result_109=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1192),__exception_result_var_b127=((struct list$1charph*)(right_value122=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1184)), "./neo-c.h", 139, 1185)))))), come_pop_stackframe(), __exception_result_var_b127));
                    come_call_finalizer3(right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value122,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_110=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1193)), "./neo-c.h", 141, 1194))->head;
                    while(_while_condtional18=it_110!=((void*)0),                    _while_condtional18) {
                        (come_push_stackframe("./neo-c.h", 143, 1244),__exception_result_var_b129=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_109, "./neo-c.h", 143, 1195)), "./neo-c.h", 143, 1196)),(char*)come_increment_ref_count(((char*)(right_value126=(come_push_stackframe("./neo-c.h", 143, 1243),__exception_result_var_b128=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_110, "./neo-c.h", 143, 1241)), "./neo-c.h", 143, 1242))->item), come_pop_stackframe(), __exception_result_var_b128))))), come_pop_stackframe(), __exception_result_var_b129);
                        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_110=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_110, "./neo-c.h", 145, 1245)), "./neo-c.h", 145, 1246))->next;
                    }
                    __result95__ = __result_obj__ = result_109;
                    come_call_finalizer3(result_109,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result95__;
                    come_call_finalizer3(result_109,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1186)), "./neo-c.h", 101, 1187))->head=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1188)), "./neo-c.h", 102, 1189))->tail=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1190)), "./neo-c.h", 103, 1191))->len=0;
                        __result93__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result93__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional96;
void* right_value123;
struct list_item$1charph* litem_111;
char* __dec_obj26;
_Bool _if_conditional97;
void* right_value124;
struct list_item$1charph* litem_112;
char* __dec_obj27;
void* right_value125;
struct list_item$1charph* litem_113;
char* __dec_obj28;
struct list$1charph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
right_value124 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
right_value125 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional96=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1197)), "./neo-c.h", 152, 1198))->len==0,                            _if_conditional96) {
                                litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value123,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_111, "./neo-c.h", 155, 1199)), "./neo-c.h", 155, 1200))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_111, "./neo-c.h", 156, 1201)), "./neo-c.h", 156, 1202))->next=((void*)0);
                                __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_111, "./neo-c.h", 157, 1203)), "./neo-c.h", 157, 1204))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_111, "./neo-c.h", 157, 1203)), "./neo-c.h", 157, 1204))->item=(char*)come_increment_ref_count(item);
                                __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1205)), "./neo-c.h", 159, 1206))->tail=litem_111;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1207)), "./neo-c.h", 160, 1208))->head=litem_111;
                            }
                            else {
                                if(_if_conditional97=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1209)), "./neo-c.h", 162, 1210))->len==1,                                _if_conditional97) {
                                    litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value124,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_112, "./neo-c.h", 165, 1211)), "./neo-c.h", 165, 1212))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1213)), "./neo-c.h", 165, 1214))->head;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_112, "./neo-c.h", 166, 1215)), "./neo-c.h", 166, 1216))->next=((void*)0);
                                    __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_112, "./neo-c.h", 167, 1217)), "./neo-c.h", 167, 1218))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_112, "./neo-c.h", 167, 1217)), "./neo-c.h", 167, 1218))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1219)), "./neo-c.h", 169, 1220))->tail=litem_112;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1221)), "./neo-c.h", 170, 1222))->head, "./neo-c.h", 170, 1223)), "./neo-c.h", 170, 1224))->next=litem_112;
                                }
                                else {
                                    litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value125,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_113, "./neo-c.h", 175, 1225)), "./neo-c.h", 175, 1226))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1227)), "./neo-c.h", 175, 1228))->tail;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_113, "./neo-c.h", 176, 1229)), "./neo-c.h", 176, 1230))->next=((void*)0);
                                    __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_113, "./neo-c.h", 177, 1231)), "./neo-c.h", 177, 1232))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_113, "./neo-c.h", 177, 1231)), "./neo-c.h", 177, 1232))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1233)), "./neo-c.h", 179, 1234))->tail, "./neo-c.h", 179, 1235)), "./neo-c.h", 179, 1236))->next=litem_113;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1237)), "./neo-c.h", 180, 1238))->tail=litem_113;
                                }
                            }
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1239)), "./neo-c.h", 183, 1240))->len++;
                            __result94__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result94__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_114;
_Bool _while_condtional19;
struct list_item$1charph* prev_it_115;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_114, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1charph*));
                    it_114=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1248)), "./neo-c.h", 120, 1249))->head;
                    while(_while_condtional19=it_114!=((void*)0),                    _while_condtional19) {
                        prev_it_115=it_114;
                        it_114=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_114, "./neo-c.h", 123, 1250)), "./neo-c.h", 123, 1251))->next;
                        come_call_finalizer3(prev_it_115,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_117;
void* __exception_result_var_b137;
unsigned int __exception_result_var_b138;
unsigned int hash_118;
unsigned int it_119;
_Bool _while_condtional20;
_Bool _if_conditional144;
_Bool __exception_result_var_b139;
_Bool _if_conditional145;
struct sClass* __result97__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sClass* __result98__;
struct sClass* __result99__;
struct sClass* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_117, 0, sizeof(struct sClass*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
            (come_push_stackframe("./neo-c.h", 1526, 1458),__exception_result_var_b137=memset(&default_value_117,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b137);
            hash_118=(come_push_stackframe("./neo-c.h", 1528, 1461),__exception_result_var_b138=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1459)), "./neo-c.h", 1528, 1460))), come_pop_stackframe(), __exception_result_var_b138)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 1462)), "./neo-c.h", 1528, 1463))->size;
            it_119=hash_118;
            while(_while_condtional20=(_Bool)1,            _while_condtional20) {
                if(_if_conditional144=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 1464)), "./neo-c.h", 1532, 1465))->item_existance, "./neo-c.h", 1532, 1466))[it_119],                _if_conditional144) {
                    if(_if_conditional145=(come_push_stackframe("./neo-c.h", 1534, 1472),__exception_result_var_b139=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 1467)), "./neo-c.h", 1534, 1468))->keys, "./neo-c.h", 1534, 1469))[it_119], "./neo-c.h", 1534, 1470)), "./neo-c.h", 1534, 1471)),key), come_pop_stackframe(), __exception_result_var_b139),                    _if_conditional145) {
                        __result97__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 1473)), "./neo-c.h", 1536, 1474))->items, "./neo-c.h", 1536, 1475))[it_119];
                        come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        return __result97__;
                    }
                    it_119++;
                    if(_if_conditional150=it_119>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 1492)), "./neo-c.h", 1541, 1493))->size,                    _if_conditional150) {
                        it_119=0;
                    }
                    else {
                        if(_if_conditional151=it_119==hash_118,                        _if_conditional151) {
                            __result98__ = __result_obj__ = default_value_117;
                            come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
                            return __result98__;
                        }
                    }
                }
                else {
                    __result99__ = __result_obj__ = default_value_117;
                    come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result99__;
                }
            }
            __result100__ = __result_obj__ = default_value_117;
            come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional146=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1476)), "sClass_finalize", 0, 1477))->mName!=((void*)0),                            _if_conditional146) {
                                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1478)), "sClass_finalize", 0, 1479))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 1478)), "sClass_finalize", 0, 1479))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional147=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1480)), "sClass_finalize", 1, 1481))->mFields!=((void*)0),                            _if_conditional147) {
                                come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 1482)), "sClass_finalize", 1, 1483))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional148=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1484)), "sClass_finalize", 2, 1485))->mDeclareSName!=((void*)0),                            _if_conditional148) {
                                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1486)), "sClass_finalize", 2, 1487))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 1486)), "sClass_finalize", 2, 1487))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional149=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1488)), "sClass_finalize", 3, 1489))->mParentClassName!=((void*)0),                            _if_conditional149) {
                                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1490)), "sClass_finalize", 3, 1491))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 1490)), "sClass_finalize", 3, 1491))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional153;
unsigned int __exception_result_var_b156;
unsigned int hash_138;
unsigned int it_139;
_Bool _while_condtional23;
_Bool _if_conditional165;
_Bool __exception_result_var_b157;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list$1charp* __exception_result_var_b161;
struct list$1charp* __exception_result_var_b162;
_Bool _if_conditional187;
_Bool _if_conditional188;
_Bool _if_conditional189;
int __exception_result_var_b163;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool same_key_exist_156;
char* __exception_result_var_b166;
char* it2_159;
_Bool __exception_result_var_b167;
char* __exception_result_var_b170;
_Bool __exception_result_var_b171;
_Bool _if_conditional196;
_Bool _if_conditional197;
struct list$1charp* __exception_result_var_b172;
struct map$2charphsClassph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_138, 0, sizeof(unsigned int));
memset(&it_139, 0, sizeof(unsigned int));
memset(&same_key_exist_156, 0, sizeof(_Bool));
memset(&it2_159, 0, sizeof(char*));
            if(_if_conditional153=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1506)), "./neo-c.h", 1371, 1507))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1508)), "./neo-c.h", 1371, 1509))->size,            _if_conditional153) {
                (come_push_stackframe("./neo-c.h", 1372,1629),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1510)), "./neo-c.h", 1372, 1511))),come_pop_stackframe());
            }
            hash_138=(come_push_stackframe("./neo-c.h", 1374, 1632),__exception_result_var_b156=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1630)), "./neo-c.h", 1374, 1631))), come_pop_stackframe(), __exception_result_var_b156)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1633)), "./neo-c.h", 1374, 1634))->size;
            it_139=hash_138;
            while(_while_condtional23=(_Bool)1,            _while_condtional23) {
                if(_if_conditional165=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1635)), "./neo-c.h", 1378, 1636))->item_existance, "./neo-c.h", 1378, 1637))[it_139],                _if_conditional165) {
                    if(_if_conditional166=(come_push_stackframe("./neo-c.h", 1380, 1643),__exception_result_var_b157=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1638)), "./neo-c.h", 1380, 1639))->keys, "./neo-c.h", 1380, 1640))[it_139], "./neo-c.h", 1380, 1641)), "./neo-c.h", 1380, 1642)),key), come_pop_stackframe(), __exception_result_var_b157),                    _if_conditional166) {
                        if(_if_conditional167=1,                        _if_conditional167) {
                            (come_push_stackframe("./neo-c.h", 1383, 1732),__exception_result_var_b161=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1644)), "./neo-c.h", 1383, 1645))->key_list, "./neo-c.h", 1383, 1646)), "./neo-c.h", 1383, 1647)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1729)), "./neo-c.h", 1383, 1730))->keys, "./neo-c.h", 1383, 1731))[it_139]), come_pop_stackframe(), __exception_result_var_b161);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1733)), "./neo-c.h", 1384, 1734))->keys, "./neo-c.h", 1384, 1735))[it_139] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1733)), "./neo-c.h", 1384, 1734))->keys, "./neo-c.h", 1384, 1735))[it_139], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1736)), "./neo-c.h", 1385, 1737))->keys, "./neo-c.h", 1385, 1738))[it_139]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            (come_push_stackframe("./neo-c.h", 1388, 1746),__exception_result_var_b162=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1739)), "./neo-c.h", 1388, 1740))->key_list, "./neo-c.h", 1388, 1741)), "./neo-c.h", 1388, 1742)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1743)), "./neo-c.h", 1388, 1744))->keys, "./neo-c.h", 1388, 1745))[it_139]), come_pop_stackframe(), __exception_result_var_b162);
                            ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1747)), "./neo-c.h", 1389, 1748))->keys, "./neo-c.h", 1389, 1749))[it_139]=key;
                        }
                        if(_if_conditional187=1,                        _if_conditional187) {
                            come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1750)), "./neo-c.h", 1392, 1751))->items, "./neo-c.h", 1392, 1752))[it_139],sClass_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1753)), "./neo-c.h", 1393, 1754))->items, "./neo-c.h", 1393, 1755))[it_139]=(struct sClass*)come_increment_ref_count(item);
                        }
                        else {
                            ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1756)), "./neo-c.h", 1396, 1757))->items, "./neo-c.h", 1396, 1758))[it_139]=item;
                        }
                        break;
                    }
                    it_139++;
                    if(_if_conditional188=it_139>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1759)), "./neo-c.h", 1403, 1760))->size,                    _if_conditional188) {
                        it_139=0;
                    }
                    else {
                        if(_if_conditional189=it_139==hash_138,                        _if_conditional189) {
                            (come_push_stackframe("./neo-c.h", 1407, 1761),__exception_result_var_b163=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b163);
                            (come_push_stackframe("./neo-c.h", 1408,1762),stackframe(),come_pop_stackframe());
                            (come_push_stackframe("./neo-c.h", 1409,1763),exit(2),come_pop_stackframe());
                        }
                    }
                }
                else {
                    ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1764)), "./neo-c.h", 1413, 1765))->item_existance, "./neo-c.h", 1413, 1766))[it_139]=(_Bool)1;
                    if(_if_conditional190=1,                    _if_conditional190) {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1767)), "./neo-c.h", 1415, 1768))->keys, "./neo-c.h", 1415, 1769))[it_139]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1770)), "./neo-c.h", 1418, 1771))->keys, "./neo-c.h", 1418, 1772))[it_139]=key;
                    }
                    if(_if_conditional191=1,                    _if_conditional191) {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1773)), "./neo-c.h", 1421, 1774))->items, "./neo-c.h", 1421, 1775))[it_139]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1776)), "./neo-c.h", 1424, 1777))->items, "./neo-c.h", 1424, 1778))[it_139]=item;
                    }
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1779)), "./neo-c.h", 1427, 1780))->len++;
                    break;
                }
            }
            same_key_exist_156=(_Bool)0;
            for(            it2_159=(come_push_stackframe("./neo-c.h", 1434, 1797),__exception_result_var_b166=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1781)), "./neo-c.h", 1434, 1782))->key_list, "./neo-c.h", 1434, 1783)), "./neo-c.h", 1434, 1784))), come_pop_stackframe(), __exception_result_var_b166);            !(come_push_stackframe("./neo-c.h", 1434, 1804),__exception_result_var_b167=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1798)), "./neo-c.h", 1434, 1799))->key_list, "./neo-c.h", 1434, 1800)), "./neo-c.h", 1434, 1801))), come_pop_stackframe(), __exception_result_var_b167);            it2_159=(come_push_stackframe("./neo-c.h", 1434, 1825),__exception_result_var_b170=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1805)), "./neo-c.h", 1434, 1806))->key_list, "./neo-c.h", 1434, 1807)), "./neo-c.h", 1434, 1808))), come_pop_stackframe(), __exception_result_var_b170)            ){
                if(_if_conditional196=(come_push_stackframe("./neo-c.h", 1436, 1828),__exception_result_var_b171=string_equals(((char*)come_null_check(((char*)come_null_check(it2_159, "./neo-c.h", 1436, 1826)), "./neo-c.h", 1436, 1827)),key), come_pop_stackframe(), __exception_result_var_b171),                _if_conditional196) {
                    same_key_exist_156=(_Bool)1;
                }
            }
            if(_if_conditional197=!same_key_exist_156,            _if_conditional197) {
                (come_push_stackframe("./neo-c.h", 1442, 1877),__exception_result_var_b172=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1829)), "./neo-c.h", 1442, 1830))->key_list, "./neo-c.h", 1442, 1831)), "./neo-c.h", 1442, 1832)),key), come_pop_stackframe(), __exception_result_var_b172);
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
char* __exception_result_var_b144;
char* it_128;
_Bool __exception_result_var_b145;
char* __exception_result_var_b148;
struct sClass* default_value_131;
void* __exception_result_var_b149;
struct sClass* __exception_result_var_b152;
struct sClass* it2_132;
unsigned int __exception_result_var_b153;
unsigned int hash_135;
int n_136;
_Bool _while_condtional22;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
int __exception_result_var_b154;
struct sClass* default_value_137;
struct sClass* __exception_result_var_b155;
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
memset(&it2_132, 0, sizeof(struct sClass*));
memset(&hash_135, 0, sizeof(unsigned int));
memset(&n_136, 0, sizeof(int));
memset(&default_value_137, 0, sizeof(struct sClass*));
                    size_121=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1512)), "./neo-c.h", 1318, 1513))->size*10;
                    keys_122=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_121)), "./neo-c.h", 1319, "char*%"))));
                    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    items_123=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_121)), "./neo-c.h", 1320, "sClass*%"))));
                    come_call_finalizer3(right_value137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    item_existance_124=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_121)), "./neo-c.h", 1321, "bool"))));
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    len_125=0;
                    for(                    it_128=(come_push_stackframe("./neo-c.h", 1325, 1536),__exception_result_var_b144=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1514)), "./neo-c.h", 1325, 1515))), come_pop_stackframe(), __exception_result_var_b144);                    !(come_push_stackframe("./neo-c.h", 1325, 1545),__exception_result_var_b145=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1537)), "./neo-c.h", 1325, 1538))), come_pop_stackframe(), __exception_result_var_b145);                    it_128=(come_push_stackframe("./neo-c.h", 1325, 1574),__exception_result_var_b148=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1546)), "./neo-c.h", 1325, 1547))), come_pop_stackframe(), __exception_result_var_b148)                    ){
                        (come_push_stackframe("./neo-c.h", 1327, 1575),__exception_result_var_b149=memset(&default_value_131,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b149);
                        it2_132=(come_push_stackframe("./neo-c.h", 1328, 1597),__exception_result_var_b152=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1576)), "./neo-c.h", 1328, 1577)),it_128,default_value_131), come_pop_stackframe(), __exception_result_var_b152);
                        hash_135=(come_push_stackframe("./neo-c.h", 1329, 1600),__exception_result_var_b153=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_128, "./neo-c.h", 1329, 1598)), "./neo-c.h", 1329, 1599))), come_pop_stackframe(), __exception_result_var_b153)%size_121;
                        n_136=hash_135;
                        while(_while_condtional22=(_Bool)1,                        _while_condtional22) {
                            if(_if_conditional162=((_Bool*)come_null_check(item_existance_124, "./neo-c.h", 1333, 1601))[n_136],                            _if_conditional162) {
                                n_136++;
                                if(_if_conditional163=n_136>=size_121,                                _if_conditional163) {
                                    n_136=0;
                                }
                                else {
                                    if(_if_conditional164=n_136==hash_135,                                    _if_conditional164) {
                                        (come_push_stackframe("./neo-c.h", 1341, 1602),__exception_result_var_b154=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b154);
                                        (come_push_stackframe("./neo-c.h", 1342,1603),stackframe(),come_pop_stackframe());
                                        (come_push_stackframe("./neo-c.h", 1343,1604),exit(2),come_pop_stackframe());
                                    }
                                }
                            }
                            else {
                                ((_Bool*)come_null_check(item_existance_124, "./neo-c.h", 1347, 1605))[n_136]=(_Bool)1;
                                ((char**)come_null_check(keys_122, "./neo-c.h", 1348, 1606))[n_136]=it_128;
                                ((struct sClass**)come_null_check(items_123, "./neo-c.h", 1350, 1607))[n_136]=(come_push_stackframe("./neo-c.h", 1350, 1610),__exception_result_var_b155=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1608)), "./neo-c.h", 1350, 1609)),it_128,default_value_137), come_pop_stackframe(), __exception_result_var_b155);
                                len_125++;
                                break;
                            }
                        }
                    }
                    (come_push_stackframe("./neo-c.h", 1358,1613),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1611)), "./neo-c.h", 1358, 1612))->items),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1614)), "./neo-c.h", 1359, 1615))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1614)), "./neo-c.h", 1359, 1615))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    (come_push_stackframe("./neo-c.h", 1360,1618),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1616)), "./neo-c.h", 1360, 1617))->keys),come_pop_stackframe());
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1619)), "./neo-c.h", 1362, 1620))->keys=keys_122;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1621)), "./neo-c.h", 1363, 1622))->items=items_123;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1623)), "./neo-c.h", 1364, 1624))->item_existance=item_existance_124;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1625)), "./neo-c.h", 1366, 1626))->size=size_121;
                    ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1627)), "./neo-c.h", 1367, 1628))->len=len_125;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional154;
char* result_126;
void* __exception_result_var_b142;
char* __result102__;
_Bool _if_conditional155;
char* __result103__;
char* result_127;
void* __exception_result_var_b143;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(char*));
memset(&result_127, 0, sizeof(char*));
                        if(_if_conditional154=self==((void*)0),                        _if_conditional154) {
                            (come_push_stackframe("./neo-c.h", 1282, 1516),__exception_result_var_b142=memset(&result_126,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b142);
                            __result102__ = __result_obj__ = result_126;
                            return __result102__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1517)), "./neo-c.h", 1285, 1518))->key_list, "./neo-c.h", 1285, 1519)), "./neo-c.h", 1285, 1520))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1521)), "./neo-c.h", 1285, 1522))->key_list, "./neo-c.h", 1285, 1523)), "./neo-c.h", 1285, 1524))->head;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1525)), "./neo-c.h", 1287, 1526))->key_list, "./neo-c.h", 1287, 1527)), "./neo-c.h", 1287, 1528))->it) {
                            __result103__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1529)), "./neo-c.h", 1288, 1530))->key_list, "./neo-c.h", 1288, 1531)), "./neo-c.h", 1288, 1532))->it, "./neo-c.h", 1288, 1533)), "./neo-c.h", 1288, 1534))->item;
                            return __result103__;
                        }
                        (come_push_stackframe("./neo-c.h", 1292, 1535),__exception_result_var_b143=memset(&result_127,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b143);
                        __result104__ = __result_obj__ = result_127;
                        return __result104__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result105__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1539)), "./neo-c.h", 1314, 1540))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1541)), "./neo-c.h", 1314, 1542))->key_list, "./neo-c.h", 1314, 1543)), "./neo-c.h", 1314, 1544))->it==((void*)0);
                        return __result105__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional156;
char* result_129;
void* __exception_result_var_b146;
char* __result106__;
_Bool _if_conditional157;
char* __result107__;
char* result_130;
void* __exception_result_var_b147;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&result_130, 0, sizeof(char*));
                        if(_if_conditional156=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1548)), "./neo-c.h", 1297, 1549))->key_list, "./neo-c.h", 1297, 1550)), "./neo-c.h", 1297, 1551))->it==((void*)0),                        _if_conditional156) {
                            (come_push_stackframe("./neo-c.h", 1299, 1552),__exception_result_var_b146=memset(&result_129,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b146);
                            __result106__ = __result_obj__ = result_129;
                            return __result106__;
                        }
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1553)), "./neo-c.h", 1302, 1554))->key_list, "./neo-c.h", 1302, 1555)), "./neo-c.h", 1302, 1556))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1557)), "./neo-c.h", 1302, 1558))->key_list, "./neo-c.h", 1302, 1559)), "./neo-c.h", 1302, 1560))->it, "./neo-c.h", 1302, 1561)), "./neo-c.h", 1302, 1562))->next;
                        if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1563)), "./neo-c.h", 1304, 1564))->key_list, "./neo-c.h", 1304, 1565)), "./neo-c.h", 1304, 1566))->it) {
                            __result107__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1567)), "./neo-c.h", 1305, 1568))->key_list, "./neo-c.h", 1305, 1569)), "./neo-c.h", 1305, 1570))->it, "./neo-c.h", 1305, 1571)), "./neo-c.h", 1305, 1572))->item;
                            return __result107__;
                        }
                        (come_push_stackframe("./neo-c.h", 1309, 1573),__exception_result_var_b147=memset(&result_130,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b147);
                        __result108__ = __result_obj__ = result_130;
                        return __result108__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b150;
unsigned int hash_133;
unsigned int it_134;
_Bool _while_condtional21;
_Bool _if_conditional158;
_Bool __exception_result_var_b151;
_Bool _if_conditional159;
struct sClass* __result109__;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct sClass* __result110__;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_133, 0, sizeof(unsigned int));
memset(&it_134, 0, sizeof(unsigned int));
                            hash_133=(come_push_stackframe("./neo-c.h", 1207, 1580),__exception_result_var_b150=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1578)), "./neo-c.h", 1207, 1579))), come_pop_stackframe(), __exception_result_var_b150)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1581)), "./neo-c.h", 1207, 1582))->size;
                            it_134=hash_133;
                            while(_while_condtional21=(_Bool)1,                            _while_condtional21) {
                                if(_if_conditional158=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1583)), "./neo-c.h", 1211, 1584))->item_existance, "./neo-c.h", 1211, 1585))[it_134],                                _if_conditional158) {
                                    if(_if_conditional159=(come_push_stackframe("./neo-c.h", 1213, 1591),__exception_result_var_b151=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1586)), "./neo-c.h", 1213, 1587))->keys, "./neo-c.h", 1213, 1588))[it_134], "./neo-c.h", 1213, 1589)), "./neo-c.h", 1213, 1590)),key), come_pop_stackframe(), __exception_result_var_b151),                                    _if_conditional159) {
                                        __result109__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1592)), "./neo-c.h", 1215, 1593))->items, "./neo-c.h", 1215, 1594))[it_134];
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result109__;
                                    }
                                    it_134++;
                                    if(_if_conditional160=it_134>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1595)), "./neo-c.h", 1220, 1596))->size,                                    _if_conditional160) {
                                        it_134=0;
                                    }
                                    else {
                                        if(_if_conditional161=it_134==hash_133,                                        _if_conditional161) {
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
_Bool __exception_result_var_b158;
_Bool _if_conditional168;
struct list$1charp* __exception_result_var_b160;
struct list$1charp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_140, 0, sizeof(int));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
                                it2_140=0;
                                it_141=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1648)), "./neo-c.h", 442, 1649))->head;
                                while(_while_condtional24=it_141!=((void*)0),                                _while_condtional24) {
                                    if(_if_conditional168=(come_push_stackframe("./neo-c.h", 444, 1654),__exception_result_var_b158=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_141, "./neo-c.h", 444, 1650)), "./neo-c.h", 444, 1651))->item, "./neo-c.h", 444, 1652)), "./neo-c.h", 444, 1653)),item), come_pop_stackframe(), __exception_result_var_b158),                                    _if_conditional168) {
                                        (come_push_stackframe("./neo-c.h", 445, 1726),__exception_result_var_b160=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1655)), "./neo-c.h", 445, 1656)),it2_140,it2_140+1), come_pop_stackframe(), __exception_result_var_b160);
                                        break;
                                    }
                                    it2_140++;
                                    it_141=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_141, "./neo-c.h", 450, 1727)), "./neo-c.h", 450, 1728))->next;
                                }
                                __result116__ = __result_obj__ = self;
                                return __result116__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
int tmp_142;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
struct list$1charp* __result113__;
_Bool _if_conditional175;
struct list$1charp* __exception_result_var_b159;
_Bool _if_conditional176;
struct list_item$1charp* it_145;
int i_146;
_Bool _while_condtional26;
_Bool _if_conditional177;
struct list_item$1charp* prev_it_147;
_Bool _if_conditional178;
_Bool _if_conditional179;
struct list_item$1charp* it_148;
int i_149;
_Bool _while_condtional27;
_Bool _if_conditional180;
_Bool _if_conditional181;
struct list_item$1charp* prev_it_150;
struct list_item$1charp* it_151;
struct list_item$1charp* head_prev_it_152;
struct list_item$1charp* tail_it_153;
int i_154;
_Bool _while_condtional28;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
struct list_item$1charp* prev_it_155;
_Bool _if_conditional185;
_Bool _if_conditional186;
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
                                            if(_if_conditional169=head<0,                                            _if_conditional169) {
                                                head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1657)), "./neo-c.h", 458, 1658))->len;
                                            }
                                            if(_if_conditional170=tail<0,                                            _if_conditional170) {
                                                tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1659)), "./neo-c.h", 461, 1660))->len+1;
                                            }
                                            if(_if_conditional171=head>tail,                                            _if_conditional171) {
                                                tmp_142=tail;
                                                tail=head;
                                                head=tmp_142;
                                            }
                                            if(_if_conditional172=head<0,                                            _if_conditional172) {
                                                head=0;
                                            }
                                            if(_if_conditional173=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1661)), "./neo-c.h", 474, 1662))->len,                                            _if_conditional173) {
                                                tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1663)), "./neo-c.h", 475, 1664))->len;
                                            }
                                            if(_if_conditional174=head==tail,                                            _if_conditional174) {
                                                __result113__ = __result_obj__ = self;
                                                return __result113__;
                                            }
                                            if(_if_conditional175=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1665)), "./neo-c.h", 482, 1666))->len,                                            _if_conditional175) {
                                                (come_push_stackframe("./neo-c.h", 484, 1679),__exception_result_var_b159=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1667)), "./neo-c.h", 484, 1668))), come_pop_stackframe(), __exception_result_var_b159);
                                            }
                                            else {
                                                if(_if_conditional176=head==0,                                                _if_conditional176) {
                                                    it_145=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1680)), "./neo-c.h", 487, 1681))->head;
                                                    i_146=0;
                                                    while(_while_condtional26=it_145!=((void*)0),                                                    _while_condtional26) {
                                                        if(_if_conditional177=i_146<tail,                                                        _if_conditional177) {
                                                            prev_it_147=it_145;
                                                            it_145=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_145, "./neo-c.h", 493, 1682)), "./neo-c.h", 493, 1683))->next;
                                                            i_146++;
                                                            come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1684)), "./neo-c.h", 498, 1685))->len--;
                                                        }
                                                        else {
                                                            if(_if_conditional178=i_146==tail,                                                            _if_conditional178) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1686)), "./neo-c.h", 501, 1687))->head=it_145;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1688)), "./neo-c.h", 502, 1689))->head, "./neo-c.h", 502, 1690)), "./neo-c.h", 502, 1691))->prev=((void*)0);
                                                                break;
                                                            }
                                                            else {
                                                                it_145=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_145, "./neo-c.h", 506, 1692)), "./neo-c.h", 506, 1693))->next;
                                                                i_146++;
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional179=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1694)), "./neo-c.h", 511, 1695))->len,                                                    _if_conditional179) {
                                                        it_148=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1696)), "./neo-c.h", 512, 1697))->head;
                                                        i_149=0;
                                                        while(_while_condtional27=it_148!=((void*)0),                                                        _while_condtional27) {
                                                            if(_if_conditional180=i_149==head,                                                            _if_conditional180) {
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1698)), "./neo-c.h", 516, 1699))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_148, "./neo-c.h", 516, 1700)), "./neo-c.h", 516, 1701))->prev;
                                                                ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1702)), "./neo-c.h", 517, 1703))->tail, "./neo-c.h", 517, 1704)), "./neo-c.h", 517, 1705))->next=((void*)0);
                                                            }
                                                            if(_if_conditional181=i_149>=head,                                                            _if_conditional181) {
                                                                prev_it_150=it_148;
                                                                it_148=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_148, "./neo-c.h", 523, 1706)), "./neo-c.h", 523, 1707))->next;
                                                                i_149++;
                                                                come_call_finalizer3(prev_it_150,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1708)), "./neo-c.h", 528, 1709))->len--;
                                                            }
                                                            else {
                                                                it_148=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_148, "./neo-c.h", 531, 1710)), "./neo-c.h", 531, 1711))->next;
                                                                i_149++;
                                                            }
                                                        }
                                                    }
                                                    else {
                                                        it_151=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1712)), "./neo-c.h", 537, 1713))->head;
                                                        head_prev_it_152=((void*)0);
                                                        tail_it_153=((void*)0);
                                                        i_154=0;
                                                        while(_while_condtional28=it_151!=((void*)0),                                                        _while_condtional28) {
                                                            if(_if_conditional182=i_154==head,                                                            _if_conditional182) {
                                                                head_prev_it_152=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_151, "./neo-c.h", 546, 1714)), "./neo-c.h", 546, 1715))->prev;
                                                            }
                                                            if(_if_conditional183=i_154==tail,                                                            _if_conditional183) {
                                                                tail_it_153=it_151;
                                                            }
                                                            if(_if_conditional184=i_154>=head&&i_154<tail,                                                            _if_conditional184) {
                                                                prev_it_155=it_151;
                                                                it_151=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_151, "./neo-c.h", 556, 1716)), "./neo-c.h", 556, 1717))->next;
                                                                i_154++;
                                                                come_call_finalizer3(prev_it_155,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1718)), "./neo-c.h", 561, 1719))->len--;
                                                            }
                                                            else {
                                                                it_151=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_151, "./neo-c.h", 564, 1720)), "./neo-c.h", 564, 1721))->next;
                                                                i_154++;
                                                            }
                                                        }
                                                        if(_if_conditional185=head_prev_it_152!=((void*)0),                                                        _if_conditional185) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_152, "./neo-c.h", 570, 1722)), "./neo-c.h", 570, 1723))->next=tail_it_153;
                                                        }
                                                        if(_if_conditional186=tail_it_153!=((void*)0),                                                        _if_conditional186) {
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_153, "./neo-c.h", 573, 1724)), "./neo-c.h", 573, 1725))->prev=head_prev_it_152;
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
                                                    it_143=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1669)), "./neo-c.h", 426, 1670))->head;
                                                    while(_while_condtional25=it_143!=((void*)0),                                                    _while_condtional25) {
                                                        prev_it_144=it_143;
                                                        it_143=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_143, "./neo-c.h", 429, 1671)), "./neo-c.h", 429, 1672))->next;
                                                        come_call_finalizer3(prev_it_144,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1673)), "./neo-c.h", 433, 1674))->head=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1675)), "./neo-c.h", 434, 1676))->tail=((void*)0);
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1677)), "./neo-c.h", 436, 1678))->len=0;
                                                    __result114__ = __result_obj__ = self;
                                                    return __result114__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional192;
char* result_157;
void* __exception_result_var_b164;
char* __result117__;
_Bool _if_conditional193;
char* __result118__;
char* result_158;
void* __exception_result_var_b165;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result_158, 0, sizeof(char*));
                if(_if_conditional192=self==((void*)0),                _if_conditional192) {
                    (come_push_stackframe("./neo-c.h", 284, 1785),__exception_result_var_b164=memset(&result_157,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b164);
                    __result117__ = __result_obj__ = result_157;
                    return __result117__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1786)), "./neo-c.h", 287, 1787))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1788)), "./neo-c.h", 287, 1789))->head;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1790)), "./neo-c.h", 289, 1791))->it) {
                    __result118__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1792)), "./neo-c.h", 290, 1793))->it, "./neo-c.h", 290, 1794)), "./neo-c.h", 290, 1795))->item;
                    return __result118__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1796),__exception_result_var_b165=memset(&result_158,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b165);
                __result119__ = __result_obj__ = result_158;
                return __result119__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
                __result120__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1802)), "./neo-c.h", 317, 1803))->it==((void*)0);
                return __result120__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional194;
char* result_160;
void* __exception_result_var_b168;
char* __result121__;
_Bool _if_conditional195;
char* __result122__;
char* result_161;
void* __exception_result_var_b169;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result_161, 0, sizeof(char*));
                if(_if_conditional194=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1809)), "./neo-c.h", 299, 1810))->it==((void*)0),                _if_conditional194) {
                    (come_push_stackframe("./neo-c.h", 301, 1811),__exception_result_var_b168=memset(&result_160,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b168);
                    __result121__ = __result_obj__ = result_160;
                    return __result121__;
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1812)), "./neo-c.h", 305, 1813))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1814)), "./neo-c.h", 305, 1815))->it, "./neo-c.h", 305, 1816)), "./neo-c.h", 305, 1817))->next;
                if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1818)), "./neo-c.h", 307, 1819))->it) {
                    __result122__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1820)), "./neo-c.h", 308, 1821))->it, "./neo-c.h", 308, 1822)), "./neo-c.h", 308, 1823))->item;
                    return __result122__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1824),__exception_result_var_b169=memset(&result_161,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b169);
                __result123__ = __result_obj__ = result_161;
                return __result123__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional198;
void* right_value139;
struct list_item$1charp* litem_162;
_Bool _if_conditional199;
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
                    if(_if_conditional198=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1833)), "./neo-c.h", 222, 1834))->len==0,                    _if_conditional198) {
                        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                        come_call_finalizer3(right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 225, 1835)), "./neo-c.h", 225, 1836))->prev=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 226, 1837)), "./neo-c.h", 226, 1838))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_162, "./neo-c.h", 227, 1839)), "./neo-c.h", 227, 1840))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1841)), "./neo-c.h", 229, 1842))->tail=litem_162;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1843)), "./neo-c.h", 230, 1844))->head=litem_162;
                    }
                    else {
                        if(_if_conditional199=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1845)), "./neo-c.h", 232, 1846))->len==1,                        _if_conditional199) {
                            litem_163=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                            come_call_finalizer3(right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_163, "./neo-c.h", 235, 1847)), "./neo-c.h", 235, 1848))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1849)), "./neo-c.h", 235, 1850))->head;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_163, "./neo-c.h", 236, 1851)), "./neo-c.h", 236, 1852))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_163, "./neo-c.h", 237, 1853)), "./neo-c.h", 237, 1854))->item=item;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1855)), "./neo-c.h", 239, 1856))->tail=litem_163;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1857)), "./neo-c.h", 240, 1858))->head, "./neo-c.h", 240, 1859)), "./neo-c.h", 240, 1860))->next=litem_163;
                        }
                        else {
                            litem_164=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                            come_call_finalizer3(right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_164, "./neo-c.h", 245, 1861)), "./neo-c.h", 245, 1862))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1863)), "./neo-c.h", 245, 1864))->tail;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_164, "./neo-c.h", 246, 1865)), "./neo-c.h", 246, 1866))->next=((void*)0);
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_164, "./neo-c.h", 247, 1867)), "./neo-c.h", 247, 1868))->item=item;
                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1869)), "./neo-c.h", 249, 1870))->tail, "./neo-c.h", 249, 1871)), "./neo-c.h", 249, 1872))->next=litem_164;
                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1873)), "./neo-c.h", 250, 1874))->tail=litem_164;
                        }
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1875)), "./neo-c.h", 253, 1876))->len++;
                    __result124__ = __result_obj__ = self;
                    return __result124__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional200;
void* right_value144;
struct list_item$1tuple2$2charphsTypephph* litem_171;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional203;
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
                if(_if_conditional200=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 222, 1896)), "./neo-c.h", 222, 1897))->len==0,                _if_conditional200) {
                    litem_171=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(right_value144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 225, 1898)), "./neo-c.h", 225, 1899))->prev=((void*)0);
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 226, 1900)), "./neo-c.h", 226, 1901))->next=((void*)0);
                    __dec_obj35=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 227, 1902)), "./neo-c.h", 227, 1903))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_171, "./neo-c.h", 227, 1902)), "./neo-c.h", 227, 1903))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj35,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 229, 1912)), "./neo-c.h", 229, 1913))->tail=litem_171;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 230, 1914)), "./neo-c.h", 230, 1915))->head=litem_171;
                }
                else {
                    if(_if_conditional203=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 232, 1916)), "./neo-c.h", 232, 1917))->len==1,                    _if_conditional203) {
                        litem_172=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value145=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value145,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 235, 1918)), "./neo-c.h", 235, 1919))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 235, 1920)), "./neo-c.h", 235, 1921))->head;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 236, 1922)), "./neo-c.h", 236, 1923))->next=((void*)0);
                        __dec_obj36=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 237, 1924)), "./neo-c.h", 237, 1925))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_172, "./neo-c.h", 237, 1924)), "./neo-c.h", 237, 1925))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj36,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 239, 1934)), "./neo-c.h", 239, 1935))->tail=litem_172;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 240, 1936)), "./neo-c.h", 240, 1937))->head, "./neo-c.h", 240, 1938)), "./neo-c.h", 240, 1939))->next=litem_172;
                    }
                    else {
                        litem_173=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value146=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value146,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_173, "./neo-c.h", 245, 1940)), "./neo-c.h", 245, 1941))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 245, 1942)), "./neo-c.h", 245, 1943))->tail;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_173, "./neo-c.h", 246, 1944)), "./neo-c.h", 246, 1945))->next=((void*)0);
                        __dec_obj37=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_173, "./neo-c.h", 247, 1946)), "./neo-c.h", 247, 1947))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_173, "./neo-c.h", 247, 1946)), "./neo-c.h", 247, 1947))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj37,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 249, 1956)), "./neo-c.h", 249, 1957))->tail, "./neo-c.h", 249, 1958)), "./neo-c.h", 249, 1959))->next=litem_173;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 250, 1960)), "./neo-c.h", 250, 1961))->tail=litem_173;
                    }
                }
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 253, 1962)), "./neo-c.h", 253, 1963))->len++;
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
                __dec_obj38=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1966)), "./neo-c.h", 1744, 1967))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1966)), "./neo-c.h", 1744, 1967))->v1=(char*)come_increment_ref_count(v1);
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj39=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1968)), "./neo-c.h", 1745, 1969))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1968)), "./neo-c.h", 1745, 1969))->v2=(struct sType*)come_increment_ref_count(v2);
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
            it_174=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 426, 1990)), "./neo-c.h", 426, 1991))->head;
            while(_while_condtional29=it_174!=((void*)0),            _while_condtional29) {
                prev_it_175=it_174;
                it_174=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_174, "./neo-c.h", 429, 1992)), "./neo-c.h", 429, 1993))->next;
                come_call_finalizer3(prev_it_175,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 433, 1994)), "./neo-c.h", 433, 1995))->head=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 434, 1996)), "./neo-c.h", 434, 1997))->tail=((void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 436, 1998)), "./neo-c.h", 436, 1999))->len=0;
            __result128__ = __result_obj__ = self;
            return __result128__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* right_value162;
struct sNodeBase* __exception_result_var_b202;
void* right_value163;
char* __exception_result_var_b203;
char* __dec_obj43;
struct sClass* __exception_result_var_b213;
void* right_value178;
struct sClass* __dec_obj53;
struct sStructNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value178 = (void*)0;
    (come_push_stackframe("14struct.c", 263, 2097),__exception_result_var_b202=((struct sNodeBase*)(right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "14struct.c", 263, 2095)), "14struct.c", 263, 2096))),info))), come_pop_stackframe(), __exception_result_var_b202);
    come_call_finalizer3(right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=((struct sStructNode*)come_null_check(self, "14struct.c", 265, 2102))->mName;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 265, 2102))->mName=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 265, 2103),__exception_result_var_b203=((char*)(right_value163=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b203));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=((struct sStructNode*)come_null_check(self, "14struct.c", 266, 2104))->mClass;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 266, 2104))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value178=(come_push_stackframe("14struct.c", 266, 2298),__exception_result_var_b213=sClass_clone(klass), come_pop_stackframe(), __exception_result_var_b213))));
    come_call_finalizer3(__dec_obj53,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value178,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sStructNode*)come_null_check(self, "14struct.c", 268, 2299))->mOutput=output;
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
char* __exception_result_var_b214;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result141__ = __result_obj__ = (come_push_stackframe("14struct.c", 278, 2312),__exception_result_var_b214=((char*)(right_value179=__builtin_string("sStructNode"))), come_pop_stackframe(), __exception_result_var_b214);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* __exception_result_var_b215;
void* right_value180;
struct sClass* klass_194;
void* right_value181;
char* __exception_result_var_b216;
char* name_195;
struct sClass* __exception_result_var_b217;
_Bool _if_conditional249;
struct sClass* __exception_result_var_b218;
void* right_value182;
struct map$2charphsClassph* __exception_result_var_b219;
struct sClass* __exception_result_var_b220;
int __exception_result_var_b221;
int __exception_result_var_b222;
_Bool _if_conditional251;
struct sClass* __exception_result_var_b223;
struct sClass* klass2_196;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b224;
void* right_value183;
struct list$1tuple2$2charphsTypephph* __dec_obj54;
void* right_value184;
void* right_value185;
struct sType* __exception_result_var_b225;
struct sType* type_197;
struct sType* __exception_result_var_b250;
void* right_value189;
struct map$2charphsTypeph* __exception_result_var_b251;
_Bool _if_conditional274;
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
    klass_194=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value180=(come_push_stackframe("14struct.c", 283, 2315),__exception_result_var_b215=sClass_clone(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "14struct.c", 283, 2313)), "14struct.c", 283, 2314))->mClass), come_pop_stackframe(), __exception_result_var_b215))));
    come_call_finalizer3(right_value180,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    name_195=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 284, 2318),__exception_result_var_b216=((char*)(right_value181=__builtin_string(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "14struct.c", 284, 2316)), "14struct.c", 284, 2317))->mName))), come_pop_stackframe(), __exception_result_var_b216));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional249=(come_push_stackframe("14struct.c", 286, 2323),__exception_result_var_b217=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 286, 2319)), "14struct.c", 286, 2320))->classes, "14struct.c", 286, 2321)), "14struct.c", 286, 2322)),name_195,((void*)0)), come_pop_stackframe(), __exception_result_var_b217)==((void*)0),    _if_conditional249) {
        (come_push_stackframe("14struct.c", 287, 2329),__exception_result_var_b219=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 287, 2324)), "14struct.c", 287, 2325))->classes, "14struct.c", 287, 2326)), "14struct.c", 287, 2327)),(char*)come_increment_ref_count(name_195),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value182=(come_push_stackframe("14struct.c", 287, 2328),__exception_result_var_b218=sClass_clone(klass_194), come_pop_stackframe(), __exception_result_var_b218))))), come_pop_stackframe(), __exception_result_var_b219);
        come_call_finalizer3(right_value182,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional251=(come_push_stackframe("14struct.c", 289, 2341),__exception_result_var_b221=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check((come_push_stackframe("14struct.c", 289, 2334),__exception_result_var_b220=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 289, 2330)), "14struct.c", 289, 2331))->classes, "14struct.c", 289, 2332)), "14struct.c", 289, 2333)),name_195,((void*)0)), come_pop_stackframe(), __exception_result_var_b220), "14struct.c", 289, 2335)), "14struct.c", 289, 2336))->mFields, "14struct.c", 289, 2337)), "14struct.c", 289, 2338))), come_pop_stackframe(), __exception_result_var_b221)==0&&(come_push_stackframe("14struct.c", 289, 2346),__exception_result_var_b222=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_194, "14struct.c", 289, 2342)), "14struct.c", 289, 2343))->mFields, "14struct.c", 289, 2344)), "14struct.c", 289, 2345))), come_pop_stackframe(), __exception_result_var_b222)>0,        _if_conditional251) {
            klass2_196=(come_push_stackframe("14struct.c", 290, 2351),__exception_result_var_b223=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 290, 2347)), "14struct.c", 290, 2348))->classes, "14struct.c", 290, 2349)), "14struct.c", 290, 2350)),name_195,((void*)0)), come_pop_stackframe(), __exception_result_var_b223);
            __dec_obj54=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_196, "14struct.c", 291, 2352)), "14struct.c", 291, 2353))->mFields;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_196, "14struct.c", 291, 2352)), "14struct.c", 291, 2353))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value183=(come_push_stackframe("14struct.c", 291, 2356),__exception_result_var_b224=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_194, "14struct.c", 291, 2354)), "14struct.c", 291, 2355))->mFields), come_pop_stackframe(), __exception_result_var_b224))));
            come_call_finalizer3(__dec_obj54,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value183,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_197=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 294, 2358),__exception_result_var_b225=((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 294, "sType"))), "14struct.c", 294, 2357))),name_195,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b225));
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value185,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("14struct.c", 295, 2581),__exception_result_var_b251=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 295, 2359)), "14struct.c", 295, 2360))->types, "14struct.c", 295, 2361)), "14struct.c", 295, 2362)),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=(come_push_stackframe("14struct.c", 295, 2580),__exception_result_var_b250=sType_clone(type_197), come_pop_stackframe(), __exception_result_var_b250))))), come_pop_stackframe(), __exception_result_var_b251);
    come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "14struct.c", 297, 2582)), "14struct.c", 297, 2583))->mOutput) {
        (come_push_stackframe("14struct.c", 298,2584),output_struct(klass_194,info),come_pop_stackframe());
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
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional213=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2098)), "sNodeBase_finalize", 0, 2099))->sname!=((void*)0),        _if_conditional213) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2100)), "sNodeBase_finalize", 0, 2101))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 2100)), "sNodeBase_finalize", 0, 2101))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional214;
struct sClass* __result131__;
void* right_value164;
struct sClass* result_185;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
char* __exception_result_var_b204;
void* right_value165;
char* __dec_obj44;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b210;
void* right_value175;
struct list$1tuple2$2charphsTypephph* __dec_obj50;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
char* __exception_result_var_b211;
void* right_value176;
char* __dec_obj51;
_Bool _if_conditional244;
_Bool _if_conditional245;
char* __exception_result_var_b212;
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
        if(_if_conditional214=self==(void*)0,        _if_conditional214) {
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        result_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value164=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
        come_call_finalizer3(right_value164,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional215=self!=((void*)0),        _if_conditional215) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 4, 2105)), "sClass_clone", 4, 2106))->mStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 4, 2107)), "sClass_clone", 4, 2108))->mStruct;
        }
        if(_if_conditional216=self!=((void*)0),        _if_conditional216) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 5, 2109)), "sClass_clone", 5, 2110))->mFloat=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 5, 2111)), "sClass_clone", 5, 2112))->mFloat;
        }
        if(_if_conditional217=self!=((void*)0),        _if_conditional217) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 6, 2113)), "sClass_clone", 6, 2114))->mUnion=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 6, 2115)), "sClass_clone", 6, 2116))->mUnion;
        }
        if(_if_conditional218=self!=((void*)0),        _if_conditional218) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 7, 2117)), "sClass_clone", 7, 2118))->mGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 7, 2119)), "sClass_clone", 7, 2120))->mGenerics;
        }
        if(_if_conditional219=self!=((void*)0),        _if_conditional219) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 8, 2121)), "sClass_clone", 8, 2122))->mMethodGenerics=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 8, 2123)), "sClass_clone", 8, 2124))->mMethodGenerics;
        }
        if(_if_conditional220=self!=((void*)0),        _if_conditional220) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 9, 2125)), "sClass_clone", 9, 2126))->mEnum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 9, 2127)), "sClass_clone", 9, 2128))->mEnum;
        }
        if(_if_conditional221=self!=((void*)0),        _if_conditional221) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 10, 2129)), "sClass_clone", 10, 2130))->mProtocol=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 10, 2131)), "sClass_clone", 10, 2132))->mProtocol;
        }
        if(_if_conditional222=self!=((void*)0),        _if_conditional222) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 11, 2133)), "sClass_clone", 11, 2134))->mNumber=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 11, 2135)), "sClass_clone", 11, 2136))->mNumber;
        }
        if(_if_conditional223=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 2137)), "sClass_clone", 12, 2138))->mName!=((void*)0),        _if_conditional223) {
            __dec_obj44=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 12, 2139)), "sClass_clone", 12, 2140))->mName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 12, 2139)), "sClass_clone", 12, 2140))->mName=(char*)come_increment_ref_count(((char*)(right_value165=(come_push_stackframe("sClass_clone", 12, 2143),__exception_result_var_b204=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 12, 2141)), "sClass_clone", 12, 2142))->mName), come_pop_stackframe(), __exception_result_var_b204))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional224=self!=((void*)0),        _if_conditional224) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 13, 2144)), "sClass_clone", 13, 2145))->mGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 13, 2146)), "sClass_clone", 13, 2147))->mGenericsNum;
        }
        if(_if_conditional225=self!=((void*)0),        _if_conditional225) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 14, 2148)), "sClass_clone", 14, 2149))->mMethodGenericsNum=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 14, 2150)), "sClass_clone", 14, 2151))->mMethodGenericsNum;
        }
        if(_if_conditional226=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 2152)), "sClass_clone", 15, 2153))->mFields!=((void*)0),        _if_conditional226) {
            __dec_obj50=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 15, 2154)), "sClass_clone", 15, 2155))->mFields;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 15, 2154)), "sClass_clone", 15, 2155))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value175=(come_push_stackframe("sClass_clone", 15, 2267),__exception_result_var_b210=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 15, 2156)), "sClass_clone", 15, 2157))->mFields), come_pop_stackframe(), __exception_result_var_b210))));
            come_call_finalizer3(__dec_obj50,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value175,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional241=self!=((void*)0),        _if_conditional241) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 16, 2272)), "sClass_clone", 16, 2273))->mOutputed=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 16, 2274)), "sClass_clone", 16, 2275))->mOutputed;
        }
        if(_if_conditional242=self!=((void*)0),        _if_conditional242) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 17, 2276)), "sClass_clone", 17, 2277))->mOutputed2=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 17, 2278)), "sClass_clone", 17, 2279))->mOutputed2;
        }
        if(_if_conditional243=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2280)), "sClass_clone", 18, 2281))->mDeclareSName!=((void*)0),        _if_conditional243) {
            __dec_obj51=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 18, 2282)), "sClass_clone", 18, 2283))->mDeclareSName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 18, 2282)), "sClass_clone", 18, 2283))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value176=(come_push_stackframe("sClass_clone", 18, 2286),__exception_result_var_b211=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 18, 2284)), "sClass_clone", 18, 2285))->mDeclareSName), come_pop_stackframe(), __exception_result_var_b211))));
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional244=self!=((void*)0),        _if_conditional244) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 19, 2287)), "sClass_clone", 19, 2288))->mNobodyStruct=((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 19, 2289)), "sClass_clone", 19, 2290))->mNobodyStruct;
        }
        if(_if_conditional245=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2291)), "sClass_clone", 20, 2292))->mParentClassName!=((void*)0),        _if_conditional245) {
            __dec_obj52=((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 20, 2293)), "sClass_clone", 20, 2294))->mParentClassName;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(result_185, "sClass_clone", 20, 2293)), "sClass_clone", 20, 2294))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value177=(come_push_stackframe("sClass_clone", 20, 2297),__exception_result_var_b212=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_clone", 20, 2295)), "sClass_clone", 20, 2296))->mParentClassName), come_pop_stackframe(), __exception_result_var_b212))));
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
_Bool _if_conditional227;
struct list$1tuple2$2charphsTypephph* __result132__;
void* right_value166;
void* right_value167;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b205;
struct list$1tuple2$2charphsTypephph* result_186;
struct list_item$1tuple2$2charphsTypephph* it_187;
_Bool _while_condtional30;
struct tuple2$2charphsTypeph* __exception_result_var_b208;
void* right_value174;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b209;
struct list$1tuple2$2charphsTypephph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&result_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_187, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value174 = (void*)0;
                if(_if_conditional227=self==((void*)0),                _if_conditional227) {
                    __result132__ = __result_obj__ = ((void*)0);
                    return __result132__;
                }
                result_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2166),__exception_result_var_b205=((struct list$1tuple2$2charphsTypephph*)(right_value167=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value166=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsTypephph"))), "./neo-c.h", 139, 2158)), "./neo-c.h", 139, 2159)))))), come_pop_stackframe(), __exception_result_var_b205));
                come_call_finalizer3(right_value166,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value167,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_187=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 141, 2167)), "./neo-c.h", 141, 2168))->head;
                while(_while_condtional30=it_187!=((void*)0),                _while_condtional30) {
                    (come_push_stackframe("./neo-c.h", 143, 2264),__exception_result_var_b209=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_186, "./neo-c.h", 143, 2169)), "./neo-c.h", 143, 2170)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value174=(come_push_stackframe("./neo-c.h", 143, 2263),__exception_result_var_b208=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_187, "./neo-c.h", 143, 2239)), "./neo-c.h", 143, 2240))->item), come_pop_stackframe(), __exception_result_var_b208))))), come_pop_stackframe(), __exception_result_var_b209);
                    come_call_finalizer3(right_value174,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_187=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_187, "./neo-c.h", 145, 2265)), "./neo-c.h", 145, 2266))->next;
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
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 101, 2160)), "./neo-c.h", 101, 2161))->head=((void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 102, 2162)), "./neo-c.h", 102, 2163))->tail=((void*)0);
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 103, 2164)), "./neo-c.h", 103, 2165))->len=0;
                    __result133__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result133__;
                    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional228;
void* right_value168;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj45;
_Bool _if_conditional231;
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
                        if(_if_conditional228=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 2171)), "./neo-c.h", 152, 2172))->len==0,                        _if_conditional228) {
                            litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value168=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value168,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_188, "./neo-c.h", 155, 2173)), "./neo-c.h", 155, 2174))->prev=((void*)0);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_188, "./neo-c.h", 156, 2175)), "./neo-c.h", 156, 2176))->next=((void*)0);
                            __dec_obj45=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_188, "./neo-c.h", 157, 2177)), "./neo-c.h", 157, 2178))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_188, "./neo-c.h", 157, 2177)), "./neo-c.h", 157, 2178))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj45,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 2187)), "./neo-c.h", 159, 2188))->tail=litem_188;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 2189)), "./neo-c.h", 160, 2190))->head=litem_188;
                        }
                        else {
                            if(_if_conditional231=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 2191)), "./neo-c.h", 162, 2192))->len==1,                            _if_conditional231) {
                                litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value169=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value169,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_189, "./neo-c.h", 165, 2193)), "./neo-c.h", 165, 2194))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 2195)), "./neo-c.h", 165, 2196))->head;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_189, "./neo-c.h", 166, 2197)), "./neo-c.h", 166, 2198))->next=((void*)0);
                                __dec_obj46=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_189, "./neo-c.h", 167, 2199)), "./neo-c.h", 167, 2200))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_189, "./neo-c.h", 167, 2199)), "./neo-c.h", 167, 2200))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj46,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 2209)), "./neo-c.h", 169, 2210))->tail=litem_189;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 2211)), "./neo-c.h", 170, 2212))->head, "./neo-c.h", 170, 2213)), "./neo-c.h", 170, 2214))->next=litem_189;
                            }
                            else {
                                litem_190=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value170=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(right_value170,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_190, "./neo-c.h", 175, 2215)), "./neo-c.h", 175, 2216))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 2217)), "./neo-c.h", 175, 2218))->tail;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_190, "./neo-c.h", 176, 2219)), "./neo-c.h", 176, 2220))->next=((void*)0);
                                __dec_obj47=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_190, "./neo-c.h", 177, 2221)), "./neo-c.h", 177, 2222))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_190, "./neo-c.h", 177, 2221)), "./neo-c.h", 177, 2222))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj47,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 2231)), "./neo-c.h", 179, 2232))->tail, "./neo-c.h", 179, 2233)), "./neo-c.h", 179, 2234))->next=litem_190;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 2235)), "./neo-c.h", 180, 2236))->tail=litem_190;
                            }
                        }
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 2237)), "./neo-c.h", 183, 2238))->len++;
                        __result134__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional234;
_Bool _if_conditional235;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional234=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2223)), "tuple2$2charphsTypephp_finalize", 0, 2224))->v1!=((void*)0),                                    _if_conditional234) {
                                        ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2225)), "tuple2$2charphsTypephp_finalize", 0, 2226))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 2225)), "tuple2$2charphsTypephp_finalize", 0, 2226))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional235=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2227)), "tuple2$2charphsTypephp_finalize", 1, 2228))->v2!=((void*)0),                                    _if_conditional235) {
                                        come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 2229)), "tuple2$2charphsTypephp_finalize", 1, 2230))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional236;
struct tuple2$2charphsTypeph* __result135__;
void* right_value171;
struct tuple2$2charphsTypeph* result_191;
_Bool _if_conditional239;
char* __exception_result_var_b206;
void* right_value172;
char* __dec_obj48;
_Bool _if_conditional240;
struct sType* __exception_result_var_b207;
void* right_value173;
struct sType* __dec_obj49;
struct tuple2$2charphsTypeph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value172 = (void*)0;
right_value173 = (void*)0;
                        if(_if_conditional236=self==(void*)0,                        _if_conditional236) {
                            __result135__ = __result_obj__ = (void*)0;
                            return __result135__;
                        }
                        result_191=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                        come_call_finalizer3(right_value171,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional239=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2249)), "tuple2$2charphsTypephp_clone", 4, 2250))->v1!=((void*)0),                        _if_conditional239) {
                            __dec_obj48=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_191, "tuple2$2charphsTypephp_clone", 4, 2251)), "tuple2$2charphsTypephp_clone", 4, 2252))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_191, "tuple2$2charphsTypephp_clone", 4, 2251)), "tuple2$2charphsTypephp_clone", 4, 2252))->v1=(char*)come_increment_ref_count(((char*)(right_value172=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 2255),__exception_result_var_b206=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 2253)), "tuple2$2charphsTypephp_clone", 4, 2254))->v1), come_pop_stackframe(), __exception_result_var_b206))));
                            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional240=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2256)), "tuple2$2charphsTypephp_clone", 5, 2257))->v2!=((void*)0),                        _if_conditional240) {
                            __dec_obj49=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_191, "tuple2$2charphsTypephp_clone", 5, 2258)), "tuple2$2charphsTypephp_clone", 5, 2259))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_191, "tuple2$2charphsTypephp_clone", 5, 2258)), "tuple2$2charphsTypephp_clone", 5, 2259))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 2262),__exception_result_var_b207=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 2260)), "tuple2$2charphsTypephp_clone", 5, 2261))->v2), come_pop_stackframe(), __exception_result_var_b207))));
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
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional237=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2241)), "tuple2$2charphsTypeph_finalize", 0, 2242))->v1!=((void*)0),                            _if_conditional237) {
                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2243)), "tuple2$2charphsTypeph_finalize", 0, 2244))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 2243)), "tuple2$2charphsTypeph_finalize", 0, 2244))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional238=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2245)), "tuple2$2charphsTypeph_finalize", 1, 2246))->v2!=((void*)0),                            _if_conditional238) {
                                come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 2247)), "tuple2$2charphsTypeph_finalize", 1, 2248))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                it_192=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 2268)), "./neo-c.h", 120, 2269))->head;
                while(_while_condtional31=it_192!=((void*)0),                _while_condtional31) {
                    prev_it_193=it_192;
                    it_192=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_192, "./neo-c.h", 123, 2270)), "./neo-c.h", 123, 2271))->next;
                    come_call_finalizer3(prev_it_193,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional250;
int __result142__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional250=self==((void*)0),            _if_conditional250) {
                __result142__ = 0;
                return __result142__;
            }
            __result143__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 360, 2339)), "./neo-c.h", 360, 2340))->len;
            return __result143__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool _if_conditional252;
unsigned int __exception_result_var_b240;
unsigned int hash_215;
unsigned int it_216;
_Bool _while_condtional34;
_Bool _if_conditional264;
_Bool __exception_result_var_b241;
_Bool _if_conditional265;
_Bool _if_conditional266;
struct list$1charp* __exception_result_var_b242;
struct list$1charp* __exception_result_var_b243;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
int __exception_result_var_b244;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool same_key_exist_217;
char* __exception_result_var_b245;
char* it2_218;
_Bool __exception_result_var_b246;
char* __exception_result_var_b247;
_Bool __exception_result_var_b248;
_Bool _if_conditional272;
_Bool _if_conditional273;
struct list$1charp* __exception_result_var_b249;
struct map$2charphsTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_215, 0, sizeof(unsigned int));
memset(&it_216, 0, sizeof(unsigned int));
memset(&same_key_exist_217, 0, sizeof(_Bool));
memset(&it2_218, 0, sizeof(char*));
        if(_if_conditional252=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 2363)), "./neo-c.h", 1371, 2364))->len*10>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1371, 2365)), "./neo-c.h", 1371, 2366))->size,        _if_conditional252) {
            (come_push_stackframe("./neo-c.h", 1372,2486),map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1372, 2367)), "./neo-c.h", 1372, 2368))),come_pop_stackframe());
        }
        hash_215=(come_push_stackframe("./neo-c.h", 1374, 2489),__exception_result_var_b240=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 2487)), "./neo-c.h", 1374, 2488))), come_pop_stackframe(), __exception_result_var_b240)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1374, 2490)), "./neo-c.h", 1374, 2491))->size;
        it_216=hash_215;
        while(_while_condtional34=(_Bool)1,        _while_condtional34) {
            if(_if_conditional264=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1378, 2492)), "./neo-c.h", 1378, 2493))->item_existance, "./neo-c.h", 1378, 2494))[it_216],            _if_conditional264) {
                if(_if_conditional265=(come_push_stackframe("./neo-c.h", 1380, 2500),__exception_result_var_b241=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1380, 2495)), "./neo-c.h", 1380, 2496))->keys, "./neo-c.h", 1380, 2497))[it_216], "./neo-c.h", 1380, 2498)), "./neo-c.h", 1380, 2499)),key), come_pop_stackframe(), __exception_result_var_b241),                _if_conditional265) {
                    if(_if_conditional266=1,                    _if_conditional266) {
                        (come_push_stackframe("./neo-c.h", 1383, 2508),__exception_result_var_b242=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 2501)), "./neo-c.h", 1383, 2502))->key_list, "./neo-c.h", 1383, 2503)), "./neo-c.h", 1383, 2504)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1383, 2505)), "./neo-c.h", 1383, 2506))->keys, "./neo-c.h", 1383, 2507))[it_216]), come_pop_stackframe(), __exception_result_var_b242);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 2509)), "./neo-c.h", 1384, 2510))->keys, "./neo-c.h", 1384, 2511))[it_216] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1384, 2509)), "./neo-c.h", 1384, 2510))->keys, "./neo-c.h", 1384, 2511))[it_216], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1385, 2512)), "./neo-c.h", 1385, 2513))->keys, "./neo-c.h", 1385, 2514))[it_216]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        (come_push_stackframe("./neo-c.h", 1388, 2522),__exception_result_var_b243=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 2515)), "./neo-c.h", 1388, 2516))->key_list, "./neo-c.h", 1388, 2517)), "./neo-c.h", 1388, 2518)),((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1388, 2519)), "./neo-c.h", 1388, 2520))->keys, "./neo-c.h", 1388, 2521))[it_216]), come_pop_stackframe(), __exception_result_var_b243);
                        ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1389, 2523)), "./neo-c.h", 1389, 2524))->keys, "./neo-c.h", 1389, 2525))[it_216]=key;
                    }
                    if(_if_conditional267=1,                    _if_conditional267) {
                        come_call_finalizer3(((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1392, 2526)), "./neo-c.h", 1392, 2527))->items, "./neo-c.h", 1392, 2528))[it_216],sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1393, 2529)), "./neo-c.h", 1393, 2530))->items, "./neo-c.h", 1393, 2531))[it_216]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1396, 2532)), "./neo-c.h", 1396, 2533))->items, "./neo-c.h", 1396, 2534))[it_216]=item;
                    }
                    break;
                }
                it_216++;
                if(_if_conditional268=it_216>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1403, 2535)), "./neo-c.h", 1403, 2536))->size,                _if_conditional268) {
                    it_216=0;
                }
                else {
                    if(_if_conditional269=it_216==hash_215,                    _if_conditional269) {
                        (come_push_stackframe("./neo-c.h", 1407, 2537),__exception_result_var_b244=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b244);
                        (come_push_stackframe("./neo-c.h", 1408,2538),stackframe(),come_pop_stackframe());
                        (come_push_stackframe("./neo-c.h", 1409,2539),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                ((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1413, 2540)), "./neo-c.h", 1413, 2541))->item_existance, "./neo-c.h", 1413, 2542))[it_216]=(_Bool)1;
                if(_if_conditional270=1,                _if_conditional270) {
                    ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1415, 2543)), "./neo-c.h", 1415, 2544))->keys, "./neo-c.h", 1415, 2545))[it_216]=(char*)come_increment_ref_count(key);
                }
                else {
                    ((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1418, 2546)), "./neo-c.h", 1418, 2547))->keys, "./neo-c.h", 1418, 2548))[it_216]=key;
                }
                if(_if_conditional271=1,                _if_conditional271) {
                    ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1421, 2549)), "./neo-c.h", 1421, 2550))->items, "./neo-c.h", 1421, 2551))[it_216]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1424, 2552)), "./neo-c.h", 1424, 2553))->items, "./neo-c.h", 1424, 2554))[it_216]=item;
                }
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1427, 2555)), "./neo-c.h", 1427, 2556))->len++;
                break;
            }
        }
        same_key_exist_217=(_Bool)0;
        for(        it2_218=(come_push_stackframe("./neo-c.h", 1434, 2561),__exception_result_var_b245=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 2557)), "./neo-c.h", 1434, 2558))->key_list, "./neo-c.h", 1434, 2559)), "./neo-c.h", 1434, 2560))), come_pop_stackframe(), __exception_result_var_b245);        !(come_push_stackframe("./neo-c.h", 1434, 2566),__exception_result_var_b246=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 2562)), "./neo-c.h", 1434, 2563))->key_list, "./neo-c.h", 1434, 2564)), "./neo-c.h", 1434, 2565))), come_pop_stackframe(), __exception_result_var_b246);        it2_218=(come_push_stackframe("./neo-c.h", 1434, 2571),__exception_result_var_b247=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1434, 2567)), "./neo-c.h", 1434, 2568))->key_list, "./neo-c.h", 1434, 2569)), "./neo-c.h", 1434, 2570))), come_pop_stackframe(), __exception_result_var_b247)        ){
            if(_if_conditional272=(come_push_stackframe("./neo-c.h", 1436, 2574),__exception_result_var_b248=string_equals(((char*)come_null_check(((char*)come_null_check(it2_218, "./neo-c.h", 1436, 2572)), "./neo-c.h", 1436, 2573)),key), come_pop_stackframe(), __exception_result_var_b248),            _if_conditional272) {
                same_key_exist_217=(_Bool)1;
            }
        }
        if(_if_conditional273=!same_key_exist_217,        _if_conditional273) {
            (come_push_stackframe("./neo-c.h", 1442, 2579),__exception_result_var_b249=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1442, 2575)), "./neo-c.h", 1442, 2576))->key_list, "./neo-c.h", 1442, 2577)), "./neo-c.h", 1442, 2578)),key), come_pop_stackframe(), __exception_result_var_b249);
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
char* __exception_result_var_b228;
char* it_205;
_Bool __exception_result_var_b229;
char* __exception_result_var_b232;
struct sType* default_value_208;
void* __exception_result_var_b233;
struct sType* __exception_result_var_b236;
struct sType* it2_209;
unsigned int __exception_result_var_b237;
unsigned int hash_212;
int n_213;
_Bool _while_condtional33;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
int __exception_result_var_b238;
struct sType* default_value_214;
struct sType* __exception_result_var_b239;
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
memset(&it2_209, 0, sizeof(struct sType*));
memset(&hash_212, 0, sizeof(unsigned int));
memset(&n_213, 0, sizeof(int));
memset(&default_value_214, 0, sizeof(struct sType*));
                size_198=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1318, 2369)), "./neo-c.h", 1318, 2370))->size*10;
                keys_199=(char**)come_increment_ref_count(((char**)(right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_198)), "./neo-c.h", 1319, "char*%"))));
                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_200=(struct sType**)come_increment_ref_count(((struct sType**)(right_value187=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_198)), "./neo-c.h", 1320, "sType*%"))));
                come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_201=(_Bool*)come_increment_ref_count(((_Bool*)(right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_198)), "./neo-c.h", 1321, "bool"))));
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_202=0;
                for(                it_205=(come_push_stackframe("./neo-c.h", 1325, 2393),__exception_result_var_b228=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 2371)), "./neo-c.h", 1325, 2372))), come_pop_stackframe(), __exception_result_var_b228);                !(come_push_stackframe("./neo-c.h", 1325, 2402),__exception_result_var_b229=map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 2394)), "./neo-c.h", 1325, 2395))), come_pop_stackframe(), __exception_result_var_b229);                it_205=(come_push_stackframe("./neo-c.h", 1325, 2431),__exception_result_var_b232=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1325, 2403)), "./neo-c.h", 1325, 2404))), come_pop_stackframe(), __exception_result_var_b232)                ){
                    (come_push_stackframe("./neo-c.h", 1327, 2432),__exception_result_var_b233=memset(&default_value_208,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b233);
                    it2_209=(come_push_stackframe("./neo-c.h", 1328, 2454),__exception_result_var_b236=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1328, 2433)), "./neo-c.h", 1328, 2434)),it_205,default_value_208), come_pop_stackframe(), __exception_result_var_b236);
                    hash_212=(come_push_stackframe("./neo-c.h", 1329, 2457),__exception_result_var_b237=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_205, "./neo-c.h", 1329, 2455)), "./neo-c.h", 1329, 2456))), come_pop_stackframe(), __exception_result_var_b237)%size_198;
                    n_213=hash_212;
                    while(_while_condtional33=(_Bool)1,                    _while_condtional33) {
                        if(_if_conditional261=((_Bool*)come_null_check(item_existance_201, "./neo-c.h", 1333, 2458))[n_213],                        _if_conditional261) {
                            n_213++;
                            if(_if_conditional262=n_213>=size_198,                            _if_conditional262) {
                                n_213=0;
                            }
                            else {
                                if(_if_conditional263=n_213==hash_212,                                _if_conditional263) {
                                    (come_push_stackframe("./neo-c.h", 1341, 2459),__exception_result_var_b238=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b238);
                                    (come_push_stackframe("./neo-c.h", 1342,2460),stackframe(),come_pop_stackframe());
                                    (come_push_stackframe("./neo-c.h", 1343,2461),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            ((_Bool*)come_null_check(item_existance_201, "./neo-c.h", 1347, 2462))[n_213]=(_Bool)1;
                            ((char**)come_null_check(keys_199, "./neo-c.h", 1348, 2463))[n_213]=it_205;
                            ((struct sType**)come_null_check(items_200, "./neo-c.h", 1350, 2464))[n_213]=(come_push_stackframe("./neo-c.h", 1350, 2467),__exception_result_var_b239=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1350, 2465)), "./neo-c.h", 1350, 2466)),it_205,default_value_214), come_pop_stackframe(), __exception_result_var_b239);
                            len_202++;
                            break;
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1358,2470),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1358, 2468)), "./neo-c.h", 1358, 2469))->items),come_pop_stackframe());
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 2471)), "./neo-c.h", 1359, 2472))->item_existance = come_decrement_ref_count2(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1359, 2471)), "./neo-c.h", 1359, 2472))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (come_push_stackframe("./neo-c.h", 1360,2475),come_free((char*)((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1360, 2473)), "./neo-c.h", 1360, 2474))->keys),come_pop_stackframe());
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1362, 2476)), "./neo-c.h", 1362, 2477))->keys=keys_199;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1363, 2478)), "./neo-c.h", 1363, 2479))->items=items_200;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1364, 2480)), "./neo-c.h", 1364, 2481))->item_existance=item_existance_201;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1366, 2482)), "./neo-c.h", 1366, 2483))->size=size_198;
                ((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1367, 2484)), "./neo-c.h", 1367, 2485))->len=len_202;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional253;
char* result_203;
void* __exception_result_var_b226;
char* __result144__;
_Bool _if_conditional254;
char* __result145__;
char* result_204;
void* __exception_result_var_b227;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
                    if(_if_conditional253=self==((void*)0),                    _if_conditional253) {
                        (come_push_stackframe("./neo-c.h", 1282, 2373),__exception_result_var_b226=memset(&result_203,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b226);
                        __result144__ = __result_obj__ = result_203;
                        return __result144__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 2374)), "./neo-c.h", 1285, 2375))->key_list, "./neo-c.h", 1285, 2376)), "./neo-c.h", 1285, 2377))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1285, 2378)), "./neo-c.h", 1285, 2379))->key_list, "./neo-c.h", 1285, 2380)), "./neo-c.h", 1285, 2381))->head;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1287, 2382)), "./neo-c.h", 1287, 2383))->key_list, "./neo-c.h", 1287, 2384)), "./neo-c.h", 1287, 2385))->it) {
                        __result145__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1288, 2386)), "./neo-c.h", 1288, 2387))->key_list, "./neo-c.h", 1288, 2388)), "./neo-c.h", 1288, 2389))->it, "./neo-c.h", 1288, 2390)), "./neo-c.h", 1288, 2391))->item;
                        return __result145__;
                    }
                    (come_push_stackframe("./neo-c.h", 1292, 2392),__exception_result_var_b227=memset(&result_204,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b227);
                    __result146__ = __result_obj__ = result_204;
                    return __result146__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result147__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 2396)), "./neo-c.h", 1314, 2397))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1314, 2398)), "./neo-c.h", 1314, 2399))->key_list, "./neo-c.h", 1314, 2400)), "./neo-c.h", 1314, 2401))->it==((void*)0);
                    return __result147__;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional255;
char* result_206;
void* __exception_result_var_b230;
char* __result148__;
_Bool _if_conditional256;
char* __result149__;
char* result_207;
void* __exception_result_var_b231;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                    if(_if_conditional255=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1297, 2405)), "./neo-c.h", 1297, 2406))->key_list, "./neo-c.h", 1297, 2407)), "./neo-c.h", 1297, 2408))->it==((void*)0),                    _if_conditional255) {
                        (come_push_stackframe("./neo-c.h", 1299, 2409),__exception_result_var_b230=memset(&result_206,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b230);
                        __result148__ = __result_obj__ = result_206;
                        return __result148__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 2410)), "./neo-c.h", 1302, 2411))->key_list, "./neo-c.h", 1302, 2412)), "./neo-c.h", 1302, 2413))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1302, 2414)), "./neo-c.h", 1302, 2415))->key_list, "./neo-c.h", 1302, 2416)), "./neo-c.h", 1302, 2417))->it, "./neo-c.h", 1302, 2418)), "./neo-c.h", 1302, 2419))->next;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1304, 2420)), "./neo-c.h", 1304, 2421))->key_list, "./neo-c.h", 1304, 2422)), "./neo-c.h", 1304, 2423))->it) {
                        __result149__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1305, 2424)), "./neo-c.h", 1305, 2425))->key_list, "./neo-c.h", 1305, 2426)), "./neo-c.h", 1305, 2427))->it, "./neo-c.h", 1305, 2428)), "./neo-c.h", 1305, 2429))->item;
                        return __result149__;
                    }
                    (come_push_stackframe("./neo-c.h", 1309, 2430),__exception_result_var_b231=memset(&result_207,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b231);
                    __result150__ = __result_obj__ = result_207;
                    return __result150__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b234;
unsigned int hash_210;
unsigned int it_211;
_Bool _while_condtional32;
_Bool _if_conditional257;
_Bool __exception_result_var_b235;
_Bool _if_conditional258;
struct sType* __result151__;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct sType* __result152__;
struct sType* __result153__;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&it_211, 0, sizeof(unsigned int));
                        hash_210=(come_push_stackframe("./neo-c.h", 1207, 2437),__exception_result_var_b234=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2435)), "./neo-c.h", 1207, 2436))), come_pop_stackframe(), __exception_result_var_b234)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1207, 2438)), "./neo-c.h", 1207, 2439))->size;
                        it_211=hash_210;
                        while(_while_condtional32=(_Bool)1,                        _while_condtional32) {
                            if(_if_conditional257=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1211, 2440)), "./neo-c.h", 1211, 2441))->item_existance, "./neo-c.h", 1211, 2442))[it_211],                            _if_conditional257) {
                                if(_if_conditional258=(come_push_stackframe("./neo-c.h", 1213, 2448),__exception_result_var_b235=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1213, 2443)), "./neo-c.h", 1213, 2444))->keys, "./neo-c.h", 1213, 2445))[it_211], "./neo-c.h", 1213, 2446)), "./neo-c.h", 1213, 2447)),key), come_pop_stackframe(), __exception_result_var_b235),                                _if_conditional258) {
                                    __result151__ = __result_obj__ = ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1215, 2449)), "./neo-c.h", 1215, 2450))->items, "./neo-c.h", 1215, 2451))[it_211];
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                }
                                it_211++;
                                if(_if_conditional259=it_211>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1220, 2452)), "./neo-c.h", 1220, 2453))->size,                                _if_conditional259) {
                                    it_211=0;
                                }
                                else {
                                    if(_if_conditional260=it_211==hash_210,                                    _if_conditional260) {
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
struct sNodeBase* __exception_result_var_b252;
void* right_value191;
char* __exception_result_var_b253;
char* __dec_obj55;
struct sClass* __exception_result_var_b254;
void* right_value192;
struct sClass* __dec_obj56;
struct sStructNobodyNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    (come_push_stackframe("14struct.c", 309, 2587),__exception_result_var_b252=((struct sNodeBase*)(right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 309, 2585)), "14struct.c", 309, 2586))),info))), come_pop_stackframe(), __exception_result_var_b252);
    come_call_finalizer3(right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 311, 2588))->mName;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 311, 2588))->mName=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 311, 2589),__exception_result_var_b253=((char*)(right_value191=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b253));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 312, 2590))->mClass;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 312, 2590))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=(come_push_stackframe("14struct.c", 312, 2591),__exception_result_var_b254=sClass_clone(klass), come_pop_stackframe(), __exception_result_var_b254))));
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
char* __exception_result_var_b255;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    __result159__ = __result_obj__ = (come_push_stackframe("14struct.c", 322, 2604),__exception_result_var_b255=((char*)(right_value193=__builtin_string("sStructNobodyNode"))), come_pop_stackframe(), __exception_result_var_b255);
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __exception_result_var_b256;
char* name_219;
struct sClass* klass_220;
struct sClass* __exception_result_var_b257;
_Bool _if_conditional278;
struct sClass* __exception_result_var_b258;
void* right_value195;
struct map$2charphsClassph* __exception_result_var_b259;
void* right_value196;
void* right_value197;
struct sType* __exception_result_var_b260;
struct sType* type_221;
struct sType* __exception_result_var_b261;
void* right_value198;
struct map$2charphsTypeph* __exception_result_var_b262;
_Bool __exception_result_var_b263;
_Bool _if_conditional279;
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
    name_219=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 327, 2607),__exception_result_var_b256=((char*)(right_value194=__builtin_string(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 327, 2605)), "14struct.c", 327, 2606))->mName))), come_pop_stackframe(), __exception_result_var_b256));
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_220=((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 328, 2608)), "14struct.c", 328, 2609))->mClass;
    if(_if_conditional278=(come_push_stackframe("14struct.c", 330, 2614),__exception_result_var_b257=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 330, 2610)), "14struct.c", 330, 2611))->classes, "14struct.c", 330, 2612)), "14struct.c", 330, 2613)),name_219,((void*)0)), come_pop_stackframe(), __exception_result_var_b257)==((void*)0),    _if_conditional278) {
        (come_push_stackframe("14struct.c", 331, 2620),__exception_result_var_b259=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 331, 2615)), "14struct.c", 331, 2616))->classes, "14struct.c", 331, 2617)), "14struct.c", 331, 2618)),(char*)come_increment_ref_count(name_219),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value195=(come_push_stackframe("14struct.c", 331, 2619),__exception_result_var_b258=sClass_clone(klass_220), come_pop_stackframe(), __exception_result_var_b258))))), come_pop_stackframe(), __exception_result_var_b259);
        come_call_finalizer3(right_value195,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    type_221=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 334, 2622),__exception_result_var_b260=((struct sType*)(right_value197=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 334, "sType"))), "14struct.c", 334, 2621))),name_219,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b260));
    come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("14struct.c", 336, 2628),__exception_result_var_b262=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 336, 2623)), "14struct.c", 336, 2624))->types, "14struct.c", 336, 2625)), "14struct.c", 336, 2626)),(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=(come_push_stackframe("14struct.c", 336, 2627),__exception_result_var_b261=sType_clone(type_221), come_pop_stackframe(), __exception_result_var_b261))))), come_pop_stackframe(), __exception_result_var_b262);
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional279=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 338, 2629)), "14struct.c", 338, 2630))->output_header_file&&(come_push_stackframe("14struct.c", 338, 2635),__exception_result_var_b263=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_220, "14struct.c", 338, 2631)), "14struct.c", 338, 2632))->mDeclareSName,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 338, 2633)), "14struct.c", 338, 2634))->base_sname), come_pop_stackframe(), __exception_result_var_b263),    _if_conditional279) {
    }
    else {
        (come_push_stackframe("14struct.c", 341,2636),add_come_code_at_source_head(info,"struct %s;\n",name_219),come_pop_stackframe());
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
struct sNodeBase* __exception_result_var_b264;
struct sGenericsStructNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    (come_push_stackframe("14struct.c", 352, 2639),__exception_result_var_b264=((struct sNodeBase*)(right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 352, 2637)), "14struct.c", 352, 2638))),info))), come_pop_stackframe(), __exception_result_var_b264);
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
char* __exception_result_var_b265;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    __result163__ = __result_obj__ = (come_push_stackframe("14struct.c", 362, 2644),__exception_result_var_b265=((char*)(right_value200=__builtin_string("sGenericsStructNode"))), come_pop_stackframe(), __exception_result_var_b265);
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
struct sNodeBase* __exception_result_var_b266;
void* right_value202;
char* __exception_result_var_b267;
char* __dec_obj57;
struct sClass* __exception_result_var_b268;
void* right_value203;
struct sClass* __dec_obj58;
struct list$1sNodeph* __dec_obj59;
struct sClassNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
    (come_push_stackframe("14struct.c", 376, 2647),__exception_result_var_b266=((struct sNodeBase*)(right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "14struct.c", 376, 2645)), "14struct.c", 376, 2646))),info))), come_pop_stackframe(), __exception_result_var_b266);
    come_call_finalizer3(right_value201,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=((struct sClassNode*)come_null_check(self, "14struct.c", 378, 2648))->mName;
    ((struct sClassNode*)come_null_check(self, "14struct.c", 378, 2648))->mName=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 378, 2649),__exception_result_var_b267=((char*)(right_value202=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b267));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=((struct sClassNode*)come_null_check(self, "14struct.c", 379, 2650))->mClass;
    ((struct sClassNode*)come_null_check(self, "14struct.c", 379, 2650))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value203=(come_push_stackframe("14struct.c", 379, 2651),__exception_result_var_b268=sClass_clone(klass), come_pop_stackframe(), __exception_result_var_b268))));
    come_call_finalizer3(__dec_obj58,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value203,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=((struct sClassNode*)come_null_check(self, "14struct.c", 381, 2652))->mMethods;
    ((struct sClassNode*)come_null_check(self, "14struct.c", 381, 2652))->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    ((struct sClassNode*)come_null_check(self, "14struct.c", 383, 2653))->mOutput=output;
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
char* __exception_result_var_b269;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result167__ = __result_obj__ = (come_push_stackframe("14struct.c", 393, 2670),__exception_result_var_b269=((char*)(right_value204=__builtin_string("sClassNode"))), come_pop_stackframe(), __exception_result_var_b269);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* __exception_result_var_b270;
void* right_value205;
struct sClass* klass_222;
void* right_value206;
char* __exception_result_var_b271;
char* name_223;
struct sClass* __exception_result_var_b272;
_Bool _if_conditional285;
struct sClass* __exception_result_var_b273;
void* right_value207;
struct map$2charphsClassph* __exception_result_var_b274;
struct sClass* __exception_result_var_b275;
int __exception_result_var_b276;
int __exception_result_var_b277;
_Bool _if_conditional286;
struct sClass* __exception_result_var_b278;
struct sClass* klass2_224;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b279;
void* right_value208;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
void* right_value209;
void* right_value210;
struct sType* __exception_result_var_b280;
struct sType* type_225;
struct sType* __exception_result_var_b281;
void* right_value211;
struct map$2charphsTypeph* __exception_result_var_b282;
_Bool _if_conditional287;
struct list$1sNodeph* o2_saved_226;
struct sNode* __exception_result_var_b285;
struct sNode* it_229;
_Bool __exception_result_var_b286;
struct sNode* __exception_result_var_b289;
_Bool __exception_result_var_b290;
_Bool _if_conditional292;
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
    klass_222=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value205=(come_push_stackframe("14struct.c", 398, 2673),__exception_result_var_b270=sClass_clone(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "14struct.c", 398, 2671)), "14struct.c", 398, 2672))->mClass), come_pop_stackframe(), __exception_result_var_b270))));
    come_call_finalizer3(right_value205,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    name_223=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 399, 2676),__exception_result_var_b271=((char*)(right_value206=__builtin_string(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "14struct.c", 399, 2674)), "14struct.c", 399, 2675))->mName))), come_pop_stackframe(), __exception_result_var_b271));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(_if_conditional285=(come_push_stackframe("14struct.c", 401, 2681),__exception_result_var_b272=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 401, 2677)), "14struct.c", 401, 2678))->classes, "14struct.c", 401, 2679)), "14struct.c", 401, 2680)),name_223,((void*)0)), come_pop_stackframe(), __exception_result_var_b272)==((void*)0),    _if_conditional285) {
        (come_push_stackframe("14struct.c", 402, 2687),__exception_result_var_b274=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 402, 2682)), "14struct.c", 402, 2683))->classes, "14struct.c", 402, 2684)), "14struct.c", 402, 2685)),(char*)come_increment_ref_count(name_223),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value207=(come_push_stackframe("14struct.c", 402, 2686),__exception_result_var_b273=sClass_clone(klass_222), come_pop_stackframe(), __exception_result_var_b273))))), come_pop_stackframe(), __exception_result_var_b274);
        come_call_finalizer3(right_value207,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        if(_if_conditional286=(come_push_stackframe("14struct.c", 404, 2697),__exception_result_var_b276=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check((come_push_stackframe("14struct.c", 404, 2692),__exception_result_var_b275=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 404, 2688)), "14struct.c", 404, 2689))->classes, "14struct.c", 404, 2690)), "14struct.c", 404, 2691)),name_223,((void*)0)), come_pop_stackframe(), __exception_result_var_b275), "14struct.c", 404, 2693)), "14struct.c", 404, 2694))->mFields, "14struct.c", 404, 2695)), "14struct.c", 404, 2696))), come_pop_stackframe(), __exception_result_var_b276)==0&&(come_push_stackframe("14struct.c", 404, 2702),__exception_result_var_b277=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_222, "14struct.c", 404, 2698)), "14struct.c", 404, 2699))->mFields, "14struct.c", 404, 2700)), "14struct.c", 404, 2701))), come_pop_stackframe(), __exception_result_var_b277)>0,        _if_conditional286) {
            klass2_224=(come_push_stackframe("14struct.c", 405, 2707),__exception_result_var_b278=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 405, 2703)), "14struct.c", 405, 2704))->classes, "14struct.c", 405, 2705)), "14struct.c", 405, 2706)),name_223,((void*)0)), come_pop_stackframe(), __exception_result_var_b278);
            __dec_obj60=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_224, "14struct.c", 406, 2708)), "14struct.c", 406, 2709))->mFields;
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_224, "14struct.c", 406, 2708)), "14struct.c", 406, 2709))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value208=(come_push_stackframe("14struct.c", 406, 2712),__exception_result_var_b279=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_222, "14struct.c", 406, 2710)), "14struct.c", 406, 2711))->mFields), come_pop_stackframe(), __exception_result_var_b279))));
            come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value208,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    type_225=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 409, 2714),__exception_result_var_b280=((struct sType*)(right_value210=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 409, "sType"))), "14struct.c", 409, 2713))),name_223,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b280));
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("14struct.c", 410, 2720),__exception_result_var_b282=map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 410, 2715)), "14struct.c", 410, 2716))->types, "14struct.c", 410, 2717)), "14struct.c", 410, 2718)),(char*)come_increment_ref_count(name_223),(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(come_push_stackframe("14struct.c", 410, 2719),__exception_result_var_b281=sType_clone(type_225), come_pop_stackframe(), __exception_result_var_b281))))), come_pop_stackframe(), __exception_result_var_b282);
    come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "14struct.c", 412, 2721)), "14struct.c", 412, 2722))->mOutput) {
        (come_push_stackframe("14struct.c", 413,2723),output_struct(klass_222,info),come_pop_stackframe());
    }
    for(    o2_saved_226=(struct list$1sNodeph*)come_increment_ref_count((((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "14struct.c", 416, 2724)), "14struct.c", 416, 2725))->mMethods)),it_229=(come_push_stackframe("14struct.c", 416, 2740),__exception_result_var_b285=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_226), "14struct.c", 416, 2726)), "14struct.c", 416, 2727))), come_pop_stackframe(), __exception_result_var_b285);    !(come_push_stackframe("14struct.c", 416, 2745),__exception_result_var_b286=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_226), "14struct.c", 416, 2741)), "14struct.c", 416, 2742))), come_pop_stackframe(), __exception_result_var_b286);    it_229=(come_push_stackframe("14struct.c", 416, 2764),__exception_result_var_b289=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_226), "14struct.c", 416, 2746)), "14struct.c", 416, 2747))), come_pop_stackframe(), __exception_result_var_b289)    ){
        if(_if_conditional292=!(come_push_stackframe("14struct.c", 417, 2765),__exception_result_var_b290=node_compile(it_229,info), come_pop_stackframe(), __exception_result_var_b290),        _if_conditional292) {
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
_Bool _if_conditional288;
struct sNode* result_227;
void* __exception_result_var_b283;
struct sNode* __result168__;
_Bool _if_conditional289;
struct sNode* __result169__;
struct sNode* result_228;
void* __exception_result_var_b284;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(struct sNode*));
memset(&result_228, 0, sizeof(struct sNode*));
        if(_if_conditional288=self==((void*)0),        _if_conditional288) {
            (come_push_stackframe("./neo-c.h", 284, 2728),__exception_result_var_b283=memset(&result_227,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b283);
            __result168__ = __result_obj__ = result_227;
            return __result168__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 2729)), "./neo-c.h", 287, 2730))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 2731)), "./neo-c.h", 287, 2732))->head;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 2733)), "./neo-c.h", 289, 2734))->it) {
            __result169__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 2735)), "./neo-c.h", 290, 2736))->it, "./neo-c.h", 290, 2737)), "./neo-c.h", 290, 2738))->item;
            return __result169__;
        }
        (come_push_stackframe("./neo-c.h", 294, 2739),__exception_result_var_b284=memset(&result_228,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b284);
        __result170__ = __result_obj__ = result_228;
        return __result170__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
        __result171__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 2743)), "./neo-c.h", 317, 2744))->it==((void*)0);
        return __result171__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional290;
struct sNode* result_230;
void* __exception_result_var_b287;
struct sNode* __result172__;
_Bool _if_conditional291;
struct sNode* __result173__;
struct sNode* result_231;
void* __exception_result_var_b288;
struct sNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_230, 0, sizeof(struct sNode*));
memset(&result_231, 0, sizeof(struct sNode*));
        if(_if_conditional290=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 2748)), "./neo-c.h", 299, 2749))->it==((void*)0),        _if_conditional290) {
            (come_push_stackframe("./neo-c.h", 301, 2750),__exception_result_var_b287=memset(&result_230,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b287);
            __result172__ = __result_obj__ = result_230;
            return __result172__;
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 2751)), "./neo-c.h", 305, 2752))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 2753)), "./neo-c.h", 305, 2754))->it, "./neo-c.h", 305, 2755)), "./neo-c.h", 305, 2756))->next;
        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 2757)), "./neo-c.h", 307, 2758))->it) {
            __result173__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 2759)), "./neo-c.h", 308, 2760))->it, "./neo-c.h", 308, 2761)), "./neo-c.h", 308, 2762))->item;
            return __result173__;
        }
        (come_push_stackframe("./neo-c.h", 312, 2763),__exception_result_var_b288=memset(&result_231,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b288);
        __result174__ = __result_obj__ = result_231;
        return __result174__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_232;
struct sClass* __exception_result_var_b291;
_Bool _if_conditional293;
void* right_value212;
void* right_value213;
char* __exception_result_var_b292;
void* right_value214;
struct sClass* __exception_result_var_b293;
struct sClass* __dec_obj61;
void* right_value215;
char* __exception_result_var_b294;
struct map$2charphsClassph* __exception_result_var_b295;
struct sClass* __exception_result_var_b296;
struct sClass* __exception_result_var_b297;
void* right_value216;
struct sClass* __dec_obj62;
_Bool output_233;
int __exception_result_var_b298;
_Bool _if_conditional294;
struct sClass* parent_class_234;
_Bool __exception_result_var_b299;
_Bool _if_conditional295;
void* right_value217;
char* __exception_result_var_b300;
void* right_value218;
char* __exception_result_var_b301;
char* parent_class_name_235;
struct sClass* __exception_result_var_b302;
_Bool _if_conditional296;
struct sNode* __result177__;
int __exception_result_var_b303;
_Bool _while_condtional35;
_Bool multiple_declare_236;
char* p_237;
int sline_238;
void* right_value219;
struct tuple3$3sTypephcharphbool* __exception_result_var_b304;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_239;
char* name_240;
_Bool err_241;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value220;
struct tuple3$3sTypephcharphbool* __exception_result_var_b305;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_242;
char* name_243;
_Bool err_244;
void* right_value221;
struct tuple2$2sTypephcharph* __exception_result_var_b306;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_245;
char* name2_246;
_Bool _if_conditional303;
void* right_value222;
void* right_value223;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b307;
_Bool _while_condtional36;
void* right_value224;
struct tuple2$2sTypephcharph* __exception_result_var_b308;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_247;
char* name2_248;
_Bool _if_conditional304;
void* right_value225;
void* right_value226;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b309;
void* right_value227;
struct tuple3$3sTypephcharphbool* __exception_result_var_b310;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_249;
char* name_250;
_Bool err_251;
_Bool _if_conditional305;
int __exception_result_var_b311;
_Bool _if_conditional306;
void* right_value228;
void* right_value229;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b312;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
char* __exception_result_var_b313;
void* right_value230;
char* __dec_obj63;
struct sClass* __exception_result_var_b314;
void* right_value231;
struct map$2charphsClassph* __exception_result_var_b315;
void* right_value232;
void* right_value233;
char* __exception_result_var_b316;
void* right_value234;
struct sStructNode* __exception_result_var_b317;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value239;
struct sNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_232, 0, sizeof(struct sClass*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&output_233, 0, sizeof(_Bool));
memset(&parent_class_234, 0, sizeof(struct sClass*));
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&parent_class_name_235, 0, sizeof(char*));
memset(&multiple_declare_236, 0, sizeof(_Bool));
memset(&p_237, 0, sizeof(char*));
memset(&sline_238, 0, sizeof(int));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value239 = (void*)0;
    if(_if_conditional293=(come_push_stackframe("14struct.c", 429, 2770),__exception_result_var_b291=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 429, 2766)), "14struct.c", 429, 2767))->classes, "14struct.c", 429, 2768)), "14struct.c", 429, 2769)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b291)==((void*)0),    _if_conditional293) {
        __dec_obj61=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 430, 2773),__exception_result_var_b293=((struct sClass*)(right_value214=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value212=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 430, "sClass"))), "14struct.c", 430, 2771))),(come_push_stackframe("14struct.c", 430, 2772),__exception_result_var_b292=((char*)(right_value213=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b292),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b293));
        come_call_finalizer3(__dec_obj61,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value214,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("14struct.c", 431, 2779),__exception_result_var_b295=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 431, 2774)), "14struct.c", 431, 2775))->classes, "14struct.c", 431, 2776)), "14struct.c", 431, 2777)),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 431, 2778),__exception_result_var_b294=((char*)(right_value215=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b294)),(struct sClass*)come_increment_ref_count(klass_232)), come_pop_stackframe(), __exception_result_var_b295);
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj62=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value216=(come_push_stackframe("14struct.c", 434, 2785),__exception_result_var_b297=sClass_clone((come_push_stackframe("14struct.c", 434, 2784),__exception_result_var_b296=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 434, 2780)), "14struct.c", 434, 2781))->classes, "14struct.c", 434, 2782)), "14struct.c", 434, 2783)),type_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b296)), come_pop_stackframe(), __exception_result_var_b297))));
        come_call_finalizer3(__dec_obj62,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value216,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    if(_if_conditional294=(come_push_stackframe("14struct.c", 438, 2790),__exception_result_var_b298=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 438, 2786)), "14struct.c", 438, 2787))->mFields, "14struct.c", 438, 2788)), "14struct.c", 438, 2789))), come_pop_stackframe(), __exception_result_var_b298)>0,    _if_conditional294) {
        output_233=(_Bool)0;
    }
    else {
        output_233=(_Bool)1;
    }
    parent_class_234=((void*)0);
    if(_if_conditional295=(come_push_stackframe("14struct.c", 446, 2791),__exception_result_var_b299=parsecmp("extends",info), come_pop_stackframe(), __exception_result_var_b299),    _if_conditional295) {
        (come_push_stackframe("14struct.c", 447, 2792),__exception_result_var_b300=((char*)(right_value217=parse_word(info))), come_pop_stackframe(), __exception_result_var_b300);
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_235=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 449, 2793),__exception_result_var_b301=((char*)(right_value218=parse_word(info))), come_pop_stackframe(), __exception_result_var_b301));
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_234=(come_push_stackframe("14struct.c", 451, 2796),__exception_result_var_b302=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 451, 2794)), "14struct.c", 451, 2795))->classes,parent_class_name_235), come_pop_stackframe(), __exception_result_var_b302);
        if(_if_conditional296=parent_class_234==((void*)0),        _if_conditional296) {
            (come_push_stackframe("14struct.c", 454,2797),err_msg(info,"invalid class name(%s)",parent_class_name_235),come_pop_stackframe());
            __result177__ = __result_obj__ = ((void*)0);
            parent_class_name_235 = come_decrement_ref_count2(parent_class_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
            return __result177__;
        }
        parent_class_name_235 = come_decrement_ref_count2(parent_class_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("14struct.c", 459, 2798),__exception_result_var_b303=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b303);
    while(_while_condtional35=(_Bool)1,    _while_condtional35) {
        multiple_declare_236=(_Bool)0;
        {
            p_237=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 464, 2799)), "14struct.c", 464, 2800))->p;
            sline_238=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 465, 2801)), "14struct.c", 465, 2802))->sline;
            multiple_assign_var5=(come_push_stackframe("14struct.c", 467, 2803),__exception_result_var_b304=((struct tuple3$3sTypephcharphbool*)(right_value219=backtrace_parse_type((_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b304);
            type_239=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_240=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_241=multiple_assign_var5->v3;
            come_call_finalizer3(right_value219,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional299=err_241&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 469, 2812)), "14struct.c", 469, 2813))->p, "14struct.c", 469, 2814))==44,            _if_conditional299) {
                multiple_declare_236=(_Bool)1;
            }
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 473, 2815)), "14struct.c", 473, 2816))->p=p_237;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 474, 2817)), "14struct.c", 474, 2818))->sline=sline_238;
            come_call_finalizer3(type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_236) {
            multiple_assign_var6=(come_push_stackframe("14struct.c", 478, 2819),__exception_result_var_b305=((struct tuple3$3sTypephcharphbool*)(right_value220=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b305);
            base_type_242=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_243=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_244=multiple_assign_var6->v3;
            come_call_finalizer3(right_value220,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=(come_push_stackframe("14struct.c", 480, 2820),__exception_result_var_b306=((struct tuple2$2sTypephcharph*)(right_value221=parse_variable_name((struct sType*)come_increment_ref_count(base_type_242),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b306);
            type2_245=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_246=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(right_value221,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(output_233) {
                (come_push_stackframe("14struct.c", 483, 2833),__exception_result_var_b307=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 483, 2829)), "14struct.c", 483, 2830))->mFields, "14struct.c", 483, 2831)), "14struct.c", 483, 2832)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value223=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value222=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 483, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_246),(struct sType*)come_increment_ref_count(type2_245)))))), come_pop_stackframe(), __exception_result_var_b307);
                come_call_finalizer3(right_value222,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value223,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional36=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 486, 2834)), "14struct.c", 486, 2835))->p, "14struct.c", 486, 2836))==44,            _while_condtional36) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 487, 2837)), "14struct.c", 487, 2838))->p++;
                (come_push_stackframe("14struct.c", 488,2839),skip_spaces_and_lf(info),come_pop_stackframe());
                multiple_assign_var8=(come_push_stackframe("14struct.c", 490, 2840),__exception_result_var_b308=((struct tuple2$2sTypephcharph*)(right_value224=parse_variable_name((struct sType*)come_increment_ref_count(base_type_242),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b308);
                type2_247=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_248=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(output_233) {
                    (come_push_stackframe("14struct.c", 493, 2845),__exception_result_var_b309=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 493, 2841)), "14struct.c", 493, 2842))->mFields, "14struct.c", 493, 2843)), "14struct.c", 493, 2844)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value226=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value225=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 493, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_248),(struct sType*)come_increment_ref_count(type2_247)))))), come_pop_stackframe(), __exception_result_var_b309);
                    come_call_finalizer3(right_value225,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value226,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_248 = come_decrement_ref_count2(name2_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_243 = come_decrement_ref_count2(name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_245,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_246 = come_decrement_ref_count2(name2_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            (come_push_stackframe("14struct.c", 498,2846),parse_sharp_v5(info),come_pop_stackframe());
            multiple_assign_var9=(come_push_stackframe("14struct.c", 499, 2847),__exception_result_var_b310=((struct tuple3$3sTypephcharphbool*)(right_value227=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b310);
            type2_249=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_250=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_251=multiple_assign_var9->v3;
            come_call_finalizer3(right_value227,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional305=!err_251,            _if_conditional305) {
                (come_push_stackframe("14struct.c", 501, 2852),__exception_result_var_b311=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 501, 2848)), "14struct.c", 501, 2849))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 501, 2850)), "14struct.c", 501, 2851))->sline), come_pop_stackframe(), __exception_result_var_b311);
                (come_push_stackframe("14struct.c", 502,2853),exit(2),come_pop_stackframe());
            }
            if(output_233) {
                (come_push_stackframe("14struct.c", 506, 2858),__exception_result_var_b312=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 506, 2854)), "14struct.c", 506, 2855))->mFields, "14struct.c", 506, 2856)), "14struct.c", 506, 2857)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value229=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value228=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 506, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_250),(struct sType*)come_increment_ref_count(type2_249)))))), come_pop_stackframe(), __exception_result_var_b312);
                come_call_finalizer3(right_value228,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value229,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(type2_249,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_250 = come_decrement_ref_count2(name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional307=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 509, 2859)), "14struct.c", 509, 2860))->p, "14struct.c", 509, 2861))==59,        _if_conditional307) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 510, 2862)), "14struct.c", 510, 2863))->p++;
            (come_push_stackframe("14struct.c", 511,2864),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        (come_push_stackframe("14struct.c", 514,2865),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional308=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 516, 2866)), "14struct.c", 516, 2867))->p, "14struct.c", 516, 2868))==125,        _if_conditional308) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 517, 2869)), "14struct.c", 517, 2870))->p++;
            (come_push_stackframe("14struct.c", 518,2871),skip_spaces_and_lf(info),come_pop_stackframe());
            break;
        }
        (come_push_stackframe("14struct.c", 521,2872),parse_sharp_v5(info),come_pop_stackframe());
    }
    if(parent_class_234) {
        __dec_obj63=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 524, 2873)), "14struct.c", 524, 2874))->mParentClassName;
        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 524, 2873)), "14struct.c", 524, 2874))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value230=(come_push_stackframe("14struct.c", 524, 2877),__exception_result_var_b313=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_234, "14struct.c", 524, 2875)), "14struct.c", 524, 2876))->mName), come_pop_stackframe(), __exception_result_var_b313))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("14struct.c", 525, 2885),__exception_result_var_b315=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 525, 2878)), "14struct.c", 525, 2879))->classes, "14struct.c", 525, 2880)), "14struct.c", 525, 2881)),(char*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_232, "14struct.c", 525, 2882)), "14struct.c", 525, 2883))->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value231=(come_push_stackframe("14struct.c", 525, 2884),__exception_result_var_b314=sClass_clone(klass_232), come_pop_stackframe(), __exception_result_var_b314))))), come_pop_stackframe(), __exception_result_var_b315);
        come_call_finalizer3(right_value231,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 528, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("14struct.c", 528, 2888),__exception_result_var_b317=((struct sStructNode*)(right_value234=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)come_null_check(((struct sStructNode*)(right_value232=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 528, "sStructNode"))), "14struct.c", 528, 2886))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 528, 2887),__exception_result_var_b316=((char*)(right_value233=__builtin_string(type_name))), come_pop_stackframe(), __exception_result_var_b316)),(struct sClass*)come_increment_ref_count(klass_232),output_233,info))), come_pop_stackframe(), __exception_result_var_b317));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result180__ = __result_obj__ = ((struct sNode*)(right_value239=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value232,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value234,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value239) { right_value239 = come_decrement_ref_count2(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result180__;
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional297=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2804)), "tuple3$3sTypephcharphboolp_finalize", 0, 2805))->v1!=((void*)0),                _if_conditional297) {
                    come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 2806)), "tuple3$3sTypephcharphboolp_finalize", 0, 2807))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional298=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2808)), "tuple3$3sTypephcharphboolp_finalize", 1, 2809))->v2!=((void*)0),                _if_conditional298) {
                    ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2810)), "tuple3$3sTypephcharphboolp_finalize", 1, 2811))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 2810)), "tuple3$3sTypephcharphboolp_finalize", 1, 2811))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional301=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2821)), "tuple2$2sTypephcharphp_finalize", 0, 2822))->v1!=((void*)0),                _if_conditional301) {
                    come_call_finalizer3(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 2823)), "tuple2$2sTypephcharphp_finalize", 0, 2824))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional302=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2825)), "tuple2$2sTypephcharphp_finalize", 1, 2826))->v2!=((void*)0),                _if_conditional302) {
                    ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2827)), "tuple2$2sTypephcharphp_finalize", 1, 2828))->v2 = come_decrement_ref_count2(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 2827)), "tuple2$2sTypephcharphp_finalize", 1, 2828))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b321;
_Bool _if_conditional319;
char* source_head_253;
void* right_value240;
char* __exception_result_var_b322;
char* type_name_254;
_Bool _if_conditional320;
struct sClass* struct_class_255;
struct sClass* __exception_result_var_b323;
_Bool _if_conditional321;
void* right_value241;
void* right_value242;
struct sClass* __exception_result_var_b324;
struct sClass* __dec_obj67;
struct sClass* __exception_result_var_b325;
struct sClass* __dec_obj68;
char* source_tail_256;
void* right_value243;
void* right_value244;
struct buffer* __exception_result_var_b326;
struct buffer* header_257;
struct buffer* __exception_result_var_b327;
void* right_value245;
char* __exception_result_var_b328;
void* right_value246;
void* right_value247;
char* __exception_result_var_b329;
void* right_value248;
struct sStructNobodyNode* __exception_result_var_b330;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value253;
struct sNode* __result183__;
_Bool _if_conditional330;
struct list$1charph* __exception_result_var_b334;
_Bool _while_condtional38;
void* right_value254;
char* __exception_result_var_b335;
char* T_261;
char* __exception_result_var_b336;
void* right_value258;
struct list$1charph* __exception_result_var_b337;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct sClass* generics_class_265;
struct sClass* __exception_result_var_b338;
_Bool _if_conditional335;
void* right_value259;
void* right_value260;
struct sClass* __exception_result_var_b339;
struct sClass* __dec_obj75;
struct sClass* __exception_result_var_b340;
_Bool _if_conditional336;
struct map$2charphsClassph* __exception_result_var_b341;
int __exception_result_var_b342;
_Bool _while_condtional39;
void* right_value261;
struct tuple3$3sTypephcharphbool* __exception_result_var_b343;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_266;
char* name_267;
_Bool err_268;
_Bool _if_conditional337;
int __exception_result_var_b344;
_Bool _if_conditional338;
void* right_value262;
void* right_value263;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b345;
_Bool _while_condtional40;
void* right_value264;
char* __exception_result_var_b346;
char* name2_269;
struct sType* __exception_result_var_b347;
void* right_value265;
struct sType* type3_270;
_Bool _if_conditional339;
_Bool no_comma_271;
void* right_value266;
struct sNode* __exception_result_var_b348;
struct sNode* node_272;
struct sNode* __dec_obj76;
void* right_value267;
void* right_value268;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b349;
void* right_value269;
void* right_value270;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b350;
_Bool _if_conditional340;
_Bool _if_conditional341;
struct list$1charph* __exception_result_var_b351;
char* source_tail_273;
void* right_value271;
void* right_value272;
struct buffer* __exception_result_var_b352;
struct buffer* header_274;
struct buffer* __exception_result_var_b353;
struct buffer* __exception_result_var_b354;
void* right_value273;
char* __exception_result_var_b355;
void* right_value274;
void* right_value275;
struct sGenericsStructNode* __exception_result_var_b356;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value278;
struct sNode* __result188__;
_Bool output_276;
struct sClass* struct_class_277;
struct sClass* __exception_result_var_b358;
_Bool _if_conditional346;
void* right_value279;
void* right_value280;
struct sClass* __exception_result_var_b359;
struct sClass* __dec_obj78;
struct sClass* __exception_result_var_b360;
struct sClass* __exception_result_var_b361;
void* right_value281;
struct sClass* __dec_obj79;
int __exception_result_var_b362;
_Bool _if_conditional347;
struct sClass* parent_class_278;
_Bool __exception_result_var_b363;
_Bool _if_conditional348;
void* right_value282;
char* __exception_result_var_b364;
void* right_value283;
char* __exception_result_var_b365;
char* parent_class_name_279;
struct sClass* __exception_result_var_b366;
_Bool _if_conditional349;
struct sNode* __result189__;
int __exception_result_var_b367;
_Bool _while_condtional41;
_Bool multiple_declare_280;
char* p_281;
int sline_282;
void* right_value284;
struct tuple3$3sTypephcharphbool* __exception_result_var_b368;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_283;
char* name_284;
_Bool err_285;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value285;
struct tuple3$3sTypephcharphbool* __exception_result_var_b369;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_286;
char* name_287;
_Bool err_288;
void* right_value286;
struct tuple2$2sTypephcharph* __exception_result_var_b370;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_289;
char* name2_290;
void* right_value287;
void* right_value288;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b371;
_Bool _while_condtional42;
void* right_value289;
struct tuple2$2sTypephcharph* __exception_result_var_b372;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_291;
char* name2_292;
void* right_value290;
void* right_value291;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b373;
void* right_value292;
struct tuple3$3sTypephcharphbool* __exception_result_var_b374;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_293;
char* name_294;
_Bool err_295;
_Bool _if_conditional352;
int __exception_result_var_b375;
void* right_value293;
void* right_value294;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b376;
_Bool _if_conditional353;
_Bool _if_conditional354;
struct list$1charph* __exception_result_var_b377;
struct sClass* __exception_result_var_b378;
struct sClass* klass2_296;
_Bool _if_conditional355;
_Bool _if_conditional356;
char* source_tail_297;
void* right_value295;
void* right_value296;
struct buffer* __exception_result_var_b379;
struct buffer* header_298;
struct buffer* __exception_result_var_b380;
void* right_value297;
char* __exception_result_var_b381;
_Bool _if_conditional357;
char* __exception_result_var_b382;
void* right_value298;
char* __dec_obj80;
struct sClass* __exception_result_var_b383;
void* right_value299;
struct map$2charphsClassph* __exception_result_var_b384;
void* right_value300;
void* right_value301;
char* __exception_result_var_b385;
struct sClass* __exception_result_var_b386;
void* right_value302;
void* right_value303;
struct sStructNode* __exception_result_var_b387;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value308;
struct sNode* __result192__;
_Bool __exception_result_var_b391;
_Bool _if_conditional367;
char* source_head_300;
void* right_value309;
char* __exception_result_var_b392;
char* type_name_301;
struct sClass* parent_class_302;
_Bool __exception_result_var_b393;
_Bool _if_conditional368;
void* right_value310;
char* __exception_result_var_b394;
void* right_value311;
char* __exception_result_var_b395;
char* parent_class_name_303;
struct sClass* __exception_result_var_b396;
_Bool _if_conditional369;
struct sNode* __result193__;
void* right_value312;
void* right_value313;
struct list$1sClassp* __exception_result_var_b397;
struct list$1sClassp* parent_classes_304;
struct sClass* parent_class2_307;
struct list$1sClassp* __exception_result_var_b398;
_Bool _if_conditional372;
struct sClass* __exception_result_var_b399;
_Bool output_311;
struct sClass* struct_class_312;
struct sClass* __exception_result_var_b400;
_Bool _if_conditional373;
void* right_value317;
void* right_value318;
struct sClass* __exception_result_var_b401;
struct sClass* __dec_obj84;
struct sClass* __exception_result_var_b402;
struct sClass* __exception_result_var_b403;
void* right_value319;
struct sClass* __dec_obj85;
int __exception_result_var_b404;
_Bool _if_conditional374;
struct sClass* defining_class_313;
struct sClass* __exception_result_var_b405;
_Bool _if_conditional375;
_Bool _if_conditional376;
char* __exception_result_var_b406;
void* right_value320;
char* __dec_obj86;
struct sClass* __exception_result_var_b407;
void* right_value321;
struct map$2charphsClassph* __exception_result_var_b408;
void* right_value327;
struct list$1sClassp* __exception_result_var_b411;
struct list$1sClassp* o2_saved_319;
struct sClass* __exception_result_var_b414;
struct sClass* parent_322;
_Bool __exception_result_var_b415;
struct sClass* __exception_result_var_b418;
struct list$1tuple2$2charphsTypephph* o2_saved_325;
struct tuple2$2charphsTypeph* __exception_result_var_b419;
struct tuple2$2charphsTypeph* it_326;
_Bool __exception_result_var_b420;
struct tuple2$2charphsTypeph* __exception_result_var_b421;
struct tuple2$2charphsTypeph* __exception_result_var_b422;
void* right_value328;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b423;
struct sClass* __exception_result_var_b424;
int __exception_result_var_b425;
int __exception_result_var_b426;
_Bool _if_conditional383;
struct sClass* __exception_result_var_b427;
struct sClass* klass2_327;
_Bool _if_conditional384;
char* __exception_result_var_b428;
void* right_value329;
char* __dec_obj87;
struct sClass* __exception_result_var_b429;
void* right_value330;
struct map$2charphsClassph* __exception_result_var_b430;
void* right_value331;
struct list$1sClassp* __exception_result_var_b431;
struct list$1sClassp* o2_saved_328;
struct sClass* __exception_result_var_b432;
struct sClass* parent_329;
_Bool __exception_result_var_b433;
struct sClass* __exception_result_var_b434;
struct list$1tuple2$2charphsTypephph* o2_saved_330;
struct tuple2$2charphsTypeph* __exception_result_var_b435;
struct tuple2$2charphsTypeph* it_331;
_Bool __exception_result_var_b436;
struct tuple2$2charphsTypeph* __exception_result_var_b437;
struct tuple2$2charphsTypeph* __exception_result_var_b438;
void* right_value332;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b439;
struct list$1tuple2$2charphsTypephph* o2_saved_332;
struct tuple2$2charphsTypeph* __exception_result_var_b440;
struct tuple2$2charphsTypeph* it_333;
_Bool __exception_result_var_b441;
struct tuple2$2charphsTypeph* __exception_result_var_b442;
struct tuple2$2charphsTypeph* __exception_result_var_b443;
void* right_value333;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b444;
int __exception_result_var_b445;
char* head_334;
char* p_saved_335;
int sline_saved_336;
char* __dec_obj88;
char* sname_saved_337;
void* right_value334;
void* right_value335;
struct list$1sNodeph* __exception_result_var_b446;
struct list$1sNodeph* methods_338;
_Bool _while_condtional45;
_Bool _if_conditional385;
_Bool _if_conditional386;
void* right_value336;
char* __exception_result_var_b447;
char* __dec_obj89;
char* __dec_obj90;
struct map$2charphcharph* __dec_obj91;
_Bool __exception_result_var_b448;
_Bool include__343;
_Bool multiple_declare_344;
_Bool _if_conditional391;
char* p_345;
int sline_346;
int __exception_result_var_b449;
_Bool _if_conditional392;
void* right_value337;
struct tuple3$3sTypephcharphbool* __exception_result_var_b450;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_347;
char* name_348;
_Bool err_349;
_Bool _if_conditional393;
_Bool define_function_flag_350;
_Bool _if_conditional394;
char* p_351;
int sline_352;
int __exception_result_var_b451;
_Bool _if_conditional395;
_Bool invalid_type_353;
_Bool __exception_result_var_b452;
_Bool _if_conditional396;
void* right_value338;
struct tuple3$3sTypephcharphbool* __exception_result_var_b453;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_354;
char* fun_name_355;
_Bool err_356;
char* __dec_obj92;
char* word_357;
_Bool __exception_result_var_b454;
_Bool _if_conditional397;
void* right_value339;
char* __exception_result_var_b455;
char* __dec_obj93;
_Bool __exception_result_var_b456;
_Bool _if_conditional398;
void* right_value340;
char* __exception_result_var_b457;
char* __dec_obj94;
char* __dec_obj95;
_Bool _if_conditional399;
_Bool __exception_result_var_b458;
_Bool _if_conditional400;
_Bool _while_condtional47;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool __exception_result_var_b459;
_Bool _if_conditional404;
void* right_value341;
char* __exception_result_var_b460;
char* __dec_obj96;
unsigned long int __exception_result_var_b461;
_Bool _if_conditional405;
_Bool _if_conditional406;
char* tail_358;
int pointer_num_359;
void* right_value342;
void* right_value343;
struct sType* __exception_result_var_b462;
struct sType* __dec_obj97;
void* right_value344;
struct sNode* __exception_result_var_b463;
struct sNode* method_360;
struct sType* __dec_obj98;
struct list$1sNodeph* __exception_result_var_b464;
_Bool _if_conditional409;
void* right_value348;
struct tuple3$3sTypephcharphbool* __exception_result_var_b465;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_364;
char* name_365;
_Bool err_366;
void* right_value349;
struct tuple2$2sTypephcharph* __exception_result_var_b466;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_367;
char* name2_368;
void* right_value350;
void* right_value351;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b467;
_Bool _while_condtional48;
void* right_value352;
struct tuple2$2sTypephcharph* __exception_result_var_b468;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_369;
char* name2_370;
void* right_value353;
void* right_value354;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b469;
int __exception_result_var_b470;
_Bool __exception_result_var_b471;
_Bool _if_conditional410;
void* right_value355;
char* __exception_result_var_b472;
void* right_value356;
char* __exception_result_var_b473;
char* module_name_371;
void* right_value357;
void* right_value358;
struct list$1charph* __exception_result_var_b474;
struct list$1charph* params_372;
_Bool _if_conditional411;
_Bool _while_condtional49;
void* right_value359;
char* __exception_result_var_b475;
char* word_373;
struct list$1charph* __exception_result_var_b476;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value360;
char* __exception_result_var_b477;
char* __dec_obj102;
struct sClassModule* __exception_result_var_b481;
_Bool _if_conditional424;
struct sNode* __result210__;
struct sClassModule* __exception_result_var_b482;
struct sClassModule* module_377;
int __exception_result_var_b483;
int __exception_result_var_b484;
_Bool _if_conditional426;
void* right_value361;
void* right_value367;
struct map$2charphcharph* __exception_result_var_b486;
struct map$2charphcharph* __dec_obj104;
int i_381;
struct list$1charph* o2_saved_382;
char* __exception_result_var_b489;
char* it_385;
_Bool __exception_result_var_b490;
char* __exception_result_var_b493;
char* __exception_result_var_b495;
void* right_value371;
char* __exception_result_var_b521;
void* right_value372;
char* __exception_result_var_b522;
char* __dec_obj105;
void* right_value373;
struct tuple3$3sTypephcharphbool* __exception_result_var_b523;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_412;
char* name_413;
_Bool err_414;
_Bool _if_conditional459;
int __exception_result_var_b524;
void* right_value374;
void* right_value375;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b525;
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value376;
char* __exception_result_var_b526;
char* __dec_obj106;
struct list$1charph* __exception_result_var_b527;
void* right_value377;
void* right_value378;
char* __exception_result_var_b528;
struct sClass* __exception_result_var_b529;
void* right_value379;
void* right_value380;
struct sClassNode* __exception_result_var_b530;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* right_value386;
struct sNode* __result239__;
void* right_value387;
struct sNode* __exception_result_var_b535;
struct sNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&source_head_253, 0, sizeof(char*));
right_value240 = (void*)0;
memset(&type_name_254, 0, sizeof(char*));
memset(&struct_class_255, 0, sizeof(struct sClass*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&source_tail_256, 0, sizeof(char*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&header_257, 0, sizeof(struct buffer*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&T_261, 0, sizeof(char*));
right_value258 = (void*)0;
memset(&generics_class_265, 0, sizeof(struct sClass*));
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&name2_269, 0, sizeof(char*));
right_value265 = (void*)0;
memset(&type3_270, 0, sizeof(struct sType*));
memset(&no_comma_271, 0, sizeof(_Bool));
right_value266 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&source_tail_273, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&header_274, 0, sizeof(struct buffer*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value278 = (void*)0;
memset(&output_276, 0, sizeof(_Bool));
memset(&struct_class_277, 0, sizeof(struct sClass*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&parent_class_278, 0, sizeof(struct sClass*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&parent_class_name_279, 0, sizeof(char*));
memset(&multiple_declare_280, 0, sizeof(_Bool));
memset(&p_281, 0, sizeof(char*));
memset(&sline_282, 0, sizeof(int));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&klass2_296, 0, sizeof(struct sClass*));
memset(&source_tail_297, 0, sizeof(char*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&header_298, 0, sizeof(struct buffer*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value308 = (void*)0;
memset(&source_head_300, 0, sizeof(char*));
right_value309 = (void*)0;
memset(&type_name_301, 0, sizeof(char*));
memset(&parent_class_302, 0, sizeof(struct sClass*));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&parent_class_name_303, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&parent_classes_304, 0, sizeof(struct list$1sClassp*));
memset(&parent_class2_307, 0, sizeof(struct sClass*));
memset(&output_311, 0, sizeof(_Bool));
memset(&struct_class_312, 0, sizeof(struct sClass*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&defining_class_313, 0, sizeof(struct sClass*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value327 = (void*)0;
memset(&o2_saved_319, 0, sizeof(struct list$1sClassp*));
memset(&parent_322, 0, sizeof(struct sClass*));
memset(&o2_saved_325, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_326, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value328 = (void*)0;
memset(&klass2_327, 0, sizeof(struct sClass*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&o2_saved_328, 0, sizeof(struct list$1sClassp*));
memset(&parent_329, 0, sizeof(struct sClass*));
memset(&o2_saved_330, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_331, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value332 = (void*)0;
memset(&o2_saved_332, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_333, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value333 = (void*)0;
memset(&head_334, 0, sizeof(char*));
memset(&p_saved_335, 0, sizeof(char*));
memset(&sline_saved_336, 0, sizeof(int));
memset(&sname_saved_337, 0, sizeof(char*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&methods_338, 0, sizeof(struct list$1sNodeph*));
right_value336 = (void*)0;
memset(&include__343, 0, sizeof(_Bool));
memset(&multiple_declare_344, 0, sizeof(_Bool));
memset(&p_345, 0, sizeof(char*));
memset(&sline_346, 0, sizeof(int));
right_value337 = (void*)0;
memset(&define_function_flag_350, 0, sizeof(_Bool));
memset(&p_351, 0, sizeof(char*));
memset(&sline_352, 0, sizeof(int));
memset(&invalid_type_353, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&word_357, 0, sizeof(char*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&tail_358, 0, sizeof(char*));
memset(&pointer_num_359, 0, sizeof(int));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&method_360, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&module_name_371, 0, sizeof(char*));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&params_372, 0, sizeof(struct list$1charph*));
right_value359 = (void*)0;
memset(&word_373, 0, sizeof(char*));
right_value360 = (void*)0;
memset(&module_377, 0, sizeof(struct sClassModule*));
right_value361 = (void*)0;
right_value367 = (void*)0;
memset(&i_381, 0, sizeof(int));
memset(&o2_saved_382, 0, sizeof(struct list$1charph*));
memset(&it_385, 0, sizeof(char*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
    if(_if_conditional319=(come_push_stackframe("14struct.c", 533, 2930),__exception_result_var_b321=charp_operator_equals(buf,"struct"), come_pop_stackframe(), __exception_result_var_b321),    _if_conditional319) {
        source_head_253=head;
        type_name_254=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 536, 2931),__exception_result_var_b322=((char*)(right_value240=parse_word(info))), come_pop_stackframe(), __exception_result_var_b322));
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional320=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 538, 2932)), "14struct.c", 538, 2933))->p, "14struct.c", 538, 2934))==59,        _if_conditional320) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 539, 2935)), "14struct.c", 539, 2936))->p++;
            (come_push_stackframe("14struct.c", 540,2937),skip_spaces_and_lf(info),come_pop_stackframe());
            if(_if_conditional321=(come_push_stackframe("14struct.c", 543, 2942),__exception_result_var_b323=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 543, 2938)), "14struct.c", 543, 2939))->classes, "14struct.c", 543, 2940)), "14struct.c", 543, 2941)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b323)==((void*)0),            _if_conditional321) {
                __dec_obj67=struct_class_255;
                struct_class_255=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 544, 2944),__exception_result_var_b324=((struct sClass*)(right_value242=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value241=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 544, "sClass"))), "14struct.c", 544, 2943))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b324));
                come_call_finalizer3(__dec_obj67,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value241,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value242,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_255, "14struct.c", 545, 2945)), "14struct.c", 545, 2946))->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj68=struct_class_255;
                struct_class_255=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 548, 2951),__exception_result_var_b325=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 548, 2947)), "14struct.c", 548, 2948))->classes, "14struct.c", 548, 2949)), "14struct.c", 548, 2950)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b325));
                come_call_finalizer3(__dec_obj68,sClass_finalize, 0, 0, 0, 0, (void*)0);
                ((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_255, "14struct.c", 549, 2952)), "14struct.c", 549, 2953))->mNobodyStruct=(_Bool)1;
            }
            source_tail_256=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 552, 2954)), "14struct.c", 552, 2955))->p;
            header_257=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 554, 2957),__exception_result_var_b326=((struct buffer*)(right_value244=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 554, "buffer"))), "14struct.c", 554, 2956)))))), come_pop_stackframe(), __exception_result_var_b326));
            come_call_finalizer3(right_value243,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value244,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("14struct.c", 555, 2960),__exception_result_var_b327=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_257, "14struct.c", 555, 2958)), "14struct.c", 555, 2959)),source_head_253,source_tail_256-source_head_253), come_pop_stackframe(), __exception_result_var_b327);
            (come_push_stackframe("14struct.c", 557,2964),add_come_code_at_come_header(info,"%s",(come_push_stackframe("14struct.c", 557, 2963),__exception_result_var_b328=((char*)(right_value245=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_257, "14struct.c", 557, 2961)), "14struct.c", 557, 2962))))), come_pop_stackframe(), __exception_result_var_b328)),come_pop_stackframe());
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 559, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("14struct.c", 559, 2967),__exception_result_var_b330=((struct sStructNobodyNode*)(right_value248=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)(right_value246=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 559, "sStructNobodyNode"))), "14struct.c", 559, 2965))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 559, 2966),__exception_result_var_b329=((char*)(right_value247=__builtin_string(type_name_254))), come_pop_stackframe(), __exception_result_var_b329)),(struct sClass*)come_increment_ref_count(struct_class_255),info))), come_pop_stackframe(), __exception_result_var_b330));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result183__ = __result_obj__ = ((struct sNode*)(right_value253=_inf_value2));
            come_call_finalizer3(struct_class_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value246,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value248,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result183__;
            come_call_finalizer3(struct_class_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional330=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 562, 3005)), "14struct.c", 562, 3006))->p, "14struct.c", 562, 3007))==60,            _if_conditional330) {
                (come_push_stackframe("14struct.c", 563, 3022),__exception_result_var_b334=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 563, 3008)), "14struct.c", 563, 3009))->generics_type_names, "14struct.c", 563, 3010)), "14struct.c", 563, 3011))), come_pop_stackframe(), __exception_result_var_b334);
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 565, 3023)), "14struct.c", 565, 3024))->p++;
                (come_push_stackframe("14struct.c", 566,3025),skip_spaces_and_lf(info),come_pop_stackframe());
                while(_while_condtional38=(_Bool)1,                _while_condtional38) {
                    T_261=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 569, 3026),__exception_result_var_b335=((char*)(right_value254=parse_word(info))), come_pop_stackframe(), __exception_result_var_b335));
                    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("14struct.c", 570, 3076),__exception_result_var_b337=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 570, 3027)), "14struct.c", 570, 3028))->generics_type_names, "14struct.c", 570, 3029)), "14struct.c", 570, 3030)),(char*)come_increment_ref_count(((char*)(right_value258=(come_push_stackframe("14struct.c", 570, 3075),__exception_result_var_b336=string_clone(T_261), come_pop_stackframe(), __exception_result_var_b336))))), come_pop_stackframe(), __exception_result_var_b337);
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional333=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 572, 3077)), "14struct.c", 572, 3078))->p, "14struct.c", 572, 3079))==62,                    _if_conditional333) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 573, 3080)), "14struct.c", 573, 3081))->p++;
                        (come_push_stackframe("14struct.c", 574,3082),skip_spaces_and_lf(info),come_pop_stackframe());
                        T_261 = come_decrement_ref_count2(T_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(_if_conditional334=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 577, 3083)), "14struct.c", 577, 3084))->p, "14struct.c", 577, 3085))==44,                        _if_conditional334) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 578, 3086)), "14struct.c", 578, 3087))->p++;
                            (come_push_stackframe("14struct.c", 579,3088),skip_spaces_and_lf(info),come_pop_stackframe());
                        }
                        else {
                            (come_push_stackframe("14struct.c", 582,3089),err_msg(info,"invalid generics struct definition"),come_pop_stackframe());
                            (come_push_stackframe("14struct.c", 583,3090),exit(2),come_pop_stackframe());
                        }
                    }
                    T_261 = come_decrement_ref_count2(T_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional335=(come_push_stackframe("14struct.c", 588, 3095),__exception_result_var_b338=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 588, 3091)), "14struct.c", 588, 3092))->generics_classes, "14struct.c", 588, 3093)), "14struct.c", 588, 3094)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b338)!=((void*)0),                _if_conditional335) {
                    (come_push_stackframe("14struct.c", 589,3096),err_msg(info,"redifined generics struct(%s)",type_name_254),come_pop_stackframe());
                    (come_push_stackframe("14struct.c", 590,3097),exit(2),come_pop_stackframe());
                }
                else {
                    __dec_obj75=generics_class_265;
                    generics_class_265=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 593, 3099),__exception_result_var_b339=((struct sClass*)(right_value260=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value259=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 593, "sClass"))), "14struct.c", 593, 3098))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b339));
                    come_call_finalizer3(__dec_obj75,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value259,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value260,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional336=(come_push_stackframe("14struct.c", 596, 3104),__exception_result_var_b340=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 596, 3100)), "14struct.c", 596, 3101))->generics_classes, "14struct.c", 596, 3102)), "14struct.c", 596, 3103)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b340)==((void*)0),                _if_conditional336) {
                    (come_push_stackframe("14struct.c", 597, 3109),__exception_result_var_b341=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 597, 3105)), "14struct.c", 597, 3106))->generics_classes, "14struct.c", 597, 3107)), "14struct.c", 597, 3108)),(char*)come_increment_ref_count(type_name_254),(struct sClass*)come_increment_ref_count(generics_class_265)), come_pop_stackframe(), __exception_result_var_b341);
                }
                (come_push_stackframe("14struct.c", 600, 3110),__exception_result_var_b342=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b342);
                while(_while_condtional39=(_Bool)1,                _while_condtional39) {
                    (come_push_stackframe("14struct.c", 603,3111),parse_sharp_v5(info),come_pop_stackframe());
                    multiple_assign_var10=(come_push_stackframe("14struct.c", 605, 3112),__exception_result_var_b343=((struct tuple3$3sTypephcharphbool*)(right_value261=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b343);
                    type2_266=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_267=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_268=multiple_assign_var10->v3;
                    come_call_finalizer3(right_value261,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional337=!err_268,                    _if_conditional337) {
                        (come_push_stackframe("14struct.c", 608, 3117),__exception_result_var_b344=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 608, 3113)), "14struct.c", 608, 3114))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 608, 3115)), "14struct.c", 608, 3116))->sline), come_pop_stackframe(), __exception_result_var_b344);
                        (come_push_stackframe("14struct.c", 609,3118),exit(2),come_pop_stackframe());
                    }
                    if(_if_conditional338=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 612, 3119)), "14struct.c", 612, 3120))->p, "14struct.c", 612, 3121))==44,                    _if_conditional338) {
                        (come_push_stackframe("14struct.c", 613, 3126),__exception_result_var_b345=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(generics_class_265, "14struct.c", 613, 3122)), "14struct.c", 613, 3123))->mFields, "14struct.c", 613, 3124)), "14struct.c", 613, 3125)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value263=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value262=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 613, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(type2_266)))))), come_pop_stackframe(), __exception_result_var_b345);
                        come_call_finalizer3(right_value262,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value263,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional40=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 615, 3127)), "14struct.c", 615, 3128))->p, "14struct.c", 615, 3129))==44,                        _while_condtional40) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 616, 3130)), "14struct.c", 616, 3131))->p++;
                            (come_push_stackframe("14struct.c", 617,3132),skip_spaces_and_lf(info),come_pop_stackframe());
                            name2_269=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 619, 3133),__exception_result_var_b346=((char*)(right_value264=parse_word(info))), come_pop_stackframe(), __exception_result_var_b346));
                            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            type3_270=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(come_push_stackframe("14struct.c", 621, 3134),__exception_result_var_b347=sType_clone(type2_266), come_pop_stackframe(), __exception_result_var_b347))));
                            come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional339=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 623, 3135)), "14struct.c", 623, 3136))->p, "14struct.c", 623, 3137))==58,                            _if_conditional339) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 624, 3138)), "14struct.c", 624, 3139))->p++;
                                (come_push_stackframe("14struct.c", 625,3140),skip_spaces_and_lf(info),come_pop_stackframe());
                                no_comma_271=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 627, 3141)), "14struct.c", 627, 3142))->no_comma;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 628, 3143)), "14struct.c", 628, 3144))->no_comma=(_Bool)1;
                                node_272=(struct sNode*)come_increment_ref_count((come_push_stackframe("14struct.c", 629, 3145),__exception_result_var_b348=((struct sNode*)(right_value266=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b348));
                                if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 630, 3146)), "14struct.c", 630, 3147))->no_comma=no_comma_271;
                                __dec_obj76=((struct sType*)come_null_check(((struct sType*)come_null_check(type3_270, "14struct.c", 632, 3148)), "14struct.c", 632, 3149))->mSizeNum;
                                ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_270, "14struct.c", 632, 3148)), "14struct.c", 632, 3149))->mSizeNum=(struct sNode*)come_increment_ref_count(node_272);
                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            (come_push_stackframe("14struct.c", 635, 3154),__exception_result_var_b349=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(generics_class_265, "14struct.c", 635, 3150)), "14struct.c", 635, 3151))->mFields, "14struct.c", 635, 3152)), "14struct.c", 635, 3153)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value268=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value267=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 635, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_269),(struct sType*)come_increment_ref_count(type3_270)))))), come_pop_stackframe(), __exception_result_var_b349);
                            come_call_finalizer3(right_value267,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value268,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            name2_269 = come_decrement_ref_count2(name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type3_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        (come_push_stackframe("14struct.c", 639, 3159),__exception_result_var_b350=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(generics_class_265, "14struct.c", 639, 3155)), "14struct.c", 639, 3156))->mFields, "14struct.c", 639, 3157)), "14struct.c", 639, 3158)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value270=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value269=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 639, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(type2_266)))))), come_pop_stackframe(), __exception_result_var_b350);
                        come_call_finalizer3(right_value269,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value270,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional340=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 642, 3160)), "14struct.c", 642, 3161))->p, "14struct.c", 642, 3162))==59,                    _if_conditional340) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 643, 3163)), "14struct.c", 643, 3164))->p++;
                        (come_push_stackframe("14struct.c", 644,3165),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    (come_push_stackframe("14struct.c", 648,3166),parse_sharp_v5(info),come_pop_stackframe());
                    if(_if_conditional341=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 650, 3167)), "14struct.c", 650, 3168))->p, "14struct.c", 650, 3169))==125,                    _if_conditional341) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 651, 3170)), "14struct.c", 651, 3171))->p++;
                        (come_push_stackframe("14struct.c", 652,3172),skip_spaces_and_lf(info),come_pop_stackframe());
                        come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    (come_push_stackframe("14struct.c", 655,3173),parse_sharp_v5(info),come_pop_stackframe());
                    come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                (come_push_stackframe("14struct.c", 658, 3178),__exception_result_var_b351=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 658, 3174)), "14struct.c", 658, 3175))->generics_type_names, "14struct.c", 658, 3176)), "14struct.c", 658, 3177))), come_pop_stackframe(), __exception_result_var_b351);
                source_tail_273=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 660, 3179)), "14struct.c", 660, 3180))->p;
                header_274=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 662, 3182),__exception_result_var_b352=((struct buffer*)(right_value272=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 662, "buffer"))), "14struct.c", 662, 3181)))))), come_pop_stackframe(), __exception_result_var_b352));
                come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value272,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("14struct.c", 663, 3185),__exception_result_var_b353=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_274, "14struct.c", 663, 3183)), "14struct.c", 663, 3184)),"struct "), come_pop_stackframe(), __exception_result_var_b353);
                (come_push_stackframe("14struct.c", 664, 3188),__exception_result_var_b354=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_274, "14struct.c", 664, 3186)), "14struct.c", 664, 3187)),source_head_253,source_tail_273-source_head_253), come_pop_stackframe(), __exception_result_var_b354);
                (come_push_stackframe("14struct.c", 666,3192),add_come_code_at_come_header(info,"%s;\n",(come_push_stackframe("14struct.c", 666, 3191),__exception_result_var_b355=((char*)(right_value273=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_274, "14struct.c", 666, 3189)), "14struct.c", 666, 3190))))), come_pop_stackframe(), __exception_result_var_b355)),come_pop_stackframe());
                right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 668, "struct sNode");
                _inf_obj_value3=come_increment_ref_count((come_push_stackframe("14struct.c", 668, 3194),__exception_result_var_b356=((struct sGenericsStructNode*)(right_value275=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)(right_value274=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 668, "sGenericsStructNode"))), "14struct.c", 668, 3193))),info))), come_pop_stackframe(), __exception_result_var_b356));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result188__ = __result_obj__ = ((struct sNode*)(right_value278=_inf_value3));
                come_call_finalizer3(generics_class_265,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value274,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value275,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result188__;
                come_call_finalizer3(generics_class_265,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_276=(_Bool)1;
                if(_if_conditional346=(come_push_stackframe("14struct.c", 674, 3214),__exception_result_var_b358=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 674, 3210)), "14struct.c", 674, 3211))->classes, "14struct.c", 674, 3212)), "14struct.c", 674, 3213)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b358)==((void*)0),                _if_conditional346) {
                    __dec_obj78=struct_class_277;
                    struct_class_277=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 675, 3216),__exception_result_var_b359=((struct sClass*)(right_value280=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value279=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 675, "sClass"))), "14struct.c", 675, 3215))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b359));
                    come_call_finalizer3(__dec_obj78,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value279,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value280,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj79=struct_class_277;
                    struct_class_277=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value281=(come_push_stackframe("14struct.c", 678, 3222),__exception_result_var_b361=sClass_clone((come_push_stackframe("14struct.c", 678, 3221),__exception_result_var_b360=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 678, 3217)), "14struct.c", 678, 3218))->classes, "14struct.c", 678, 3219)), "14struct.c", 678, 3220)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b360)), come_pop_stackframe(), __exception_result_var_b361))));
                    come_call_finalizer3(__dec_obj79,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value281,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional347=(come_push_stackframe("14struct.c", 679, 3227),__exception_result_var_b362=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 679, 3223)), "14struct.c", 679, 3224))->mFields, "14struct.c", 679, 3225)), "14struct.c", 679, 3226))), come_pop_stackframe(), __exception_result_var_b362)>0,                    _if_conditional347) {
                        output_276=(_Bool)0;
                    }
                }
                parent_class_278=((void*)0);
                if(_if_conditional348=(come_push_stackframe("14struct.c", 685, 3228),__exception_result_var_b363=parsecmp("extends",info), come_pop_stackframe(), __exception_result_var_b363),                _if_conditional348) {
                    (come_push_stackframe("14struct.c", 686, 3229),__exception_result_var_b364=((char*)(right_value282=parse_word(info))), come_pop_stackframe(), __exception_result_var_b364);
                    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_279=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 688, 3230),__exception_result_var_b365=((char*)(right_value283=parse_word(info))), come_pop_stackframe(), __exception_result_var_b365));
                    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_278=(come_push_stackframe("14struct.c", 690, 3233),__exception_result_var_b366=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 690, 3231)), "14struct.c", 690, 3232))->classes,parent_class_name_279), come_pop_stackframe(), __exception_result_var_b366);
                    if(_if_conditional349=parent_class_278==((void*)0),                    _if_conditional349) {
                        (come_push_stackframe("14struct.c", 693,3234),err_msg(info,"invalid class name(%s)",parent_class_name_279),come_pop_stackframe());
                        __result189__ = __result_obj__ = ((void*)0);
                        parent_class_name_279 = come_decrement_ref_count2(parent_class_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result189__;
                    }
                    parent_class_name_279 = come_decrement_ref_count2(parent_class_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                (come_push_stackframe("14struct.c", 698, 3235),__exception_result_var_b367=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b367);
                while(_while_condtional41=(_Bool)1,                _while_condtional41) {
                    (come_push_stackframe("14struct.c", 701,3236),parse_sharp_v5(info),come_pop_stackframe());
                    multiple_declare_280=(_Bool)0;
                    {
                        p_281=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 705, 3237)), "14struct.c", 705, 3238))->p;
                        sline_282=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 706, 3239)), "14struct.c", 706, 3240))->sline;
                        multiple_assign_var11=(come_push_stackframe("14struct.c", 708, 3241),__exception_result_var_b368=((struct tuple3$3sTypephcharphbool*)(right_value284=backtrace_parse_type((_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b368);
                        type_283=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_284=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_285=multiple_assign_var11->v3;
                        come_call_finalizer3(right_value284,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional350=err_285&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 710, 3242)), "14struct.c", 710, 3243))->p, "14struct.c", 710, 3244))==44,                        _if_conditional350) {
                            multiple_declare_280=(_Bool)1;
                        }
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 714, 3245)), "14struct.c", 714, 3246))->p=p_281;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 715, 3247)), "14struct.c", 715, 3248))->sline=sline_282;
                        come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_280) {
                        multiple_assign_var12=(come_push_stackframe("14struct.c", 719, 3249),__exception_result_var_b369=((struct tuple3$3sTypephcharphbool*)(right_value285=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b369);
                        base_type_286=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_287=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_288=multiple_assign_var12->v3;
                        come_call_finalizer3(right_value285,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=(come_push_stackframe("14struct.c", 721, 3250),__exception_result_var_b370=((struct tuple2$2sTypephcharph*)(right_value286=parse_variable_name((struct sType*)come_increment_ref_count(base_type_286),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b370);
                        type2_289=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_290=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(right_value286,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("14struct.c", 723, 3255),__exception_result_var_b371=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 723, 3251)), "14struct.c", 723, 3252))->mFields, "14struct.c", 723, 3253)), "14struct.c", 723, 3254)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value288=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value287=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 723, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_290),(struct sType*)come_increment_ref_count(type2_289)))))), come_pop_stackframe(), __exception_result_var_b371);
                        come_call_finalizer3(right_value287,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value288,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional42=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 725, 3256)), "14struct.c", 725, 3257))->p, "14struct.c", 725, 3258))==44,                        _while_condtional42) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 726, 3259)), "14struct.c", 726, 3260))->p++;
                            (come_push_stackframe("14struct.c", 727,3261),skip_spaces_and_lf(info),come_pop_stackframe());
                            multiple_assign_var14=(come_push_stackframe("14struct.c", 729, 3262),__exception_result_var_b372=((struct tuple2$2sTypephcharph*)(right_value289=parse_variable_name((struct sType*)come_increment_ref_count(base_type_286),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b372);
                            type2_291=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_292=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            come_call_finalizer3(right_value289,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("14struct.c", 731, 3267),__exception_result_var_b373=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 731, 3263)), "14struct.c", 731, 3264))->mFields, "14struct.c", 731, 3265)), "14struct.c", 731, 3266)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value291=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value290=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 731, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_292),(struct sType*)come_increment_ref_count(type2_291)))))), come_pop_stackframe(), __exception_result_var_b373);
                            come_call_finalizer3(right_value290,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value291,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_292 = come_decrement_ref_count2(name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(base_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_287 = come_decrement_ref_count2(name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_290 = come_decrement_ref_count2(name2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=(come_push_stackframe("14struct.c", 735, 3268),__exception_result_var_b374=((struct tuple3$3sTypephcharphbool*)(right_value292=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b374);
                        type2_293=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_294=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_295=multiple_assign_var15->v3;
                        come_call_finalizer3(right_value292,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional352=!err_295,                        _if_conditional352) {
                            (come_push_stackframe("14struct.c", 737, 3273),__exception_result_var_b375=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 737, 3269)), "14struct.c", 737, 3270))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 737, 3271)), "14struct.c", 737, 3272))->sline), come_pop_stackframe(), __exception_result_var_b375);
                            (come_push_stackframe("14struct.c", 738,3274),exit(2),come_pop_stackframe());
                        }
                        (come_push_stackframe("14struct.c", 741, 3279),__exception_result_var_b376=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 741, 3275)), "14struct.c", 741, 3276))->mFields, "14struct.c", 741, 3277)), "14struct.c", 741, 3278)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value294=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value293=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 741, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_294),(struct sType*)come_increment_ref_count(type2_293)))))), come_pop_stackframe(), __exception_result_var_b376);
                        come_call_finalizer3(right_value293,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value294,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional353=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 744, 3280)), "14struct.c", 744, 3281))->p, "14struct.c", 744, 3282))==59,                    _if_conditional353) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 745, 3283)), "14struct.c", 745, 3284))->p++;
                        (come_push_stackframe("14struct.c", 746,3285),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    (come_push_stackframe("14struct.c", 750,3286),parse_sharp_v5(info),come_pop_stackframe());
                    if(_if_conditional354=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 752, 3287)), "14struct.c", 752, 3288))->p, "14struct.c", 752, 3289))==125,                    _if_conditional354) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 753, 3290)), "14struct.c", 753, 3291))->p++;
                        (come_push_stackframe("14struct.c", 754,3292),skip_spaces_and_lf(info),come_pop_stackframe());
                        break;
                    }
                    (come_push_stackframe("14struct.c", 757,3293),parse_sharp_v5(info),come_pop_stackframe());
                }
                (come_push_stackframe("14struct.c", 760, 3298),__exception_result_var_b377=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 760, 3294)), "14struct.c", 760, 3295))->generics_type_names, "14struct.c", 760, 3296)), "14struct.c", 760, 3297))), come_pop_stackframe(), __exception_result_var_b377);
                klass2_296=(come_push_stackframe("14struct.c", 762, 3303),__exception_result_var_b378=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 762, 3299)), "14struct.c", 762, 3300))->classes, "14struct.c", 762, 3301)), "14struct.c", 762, 3302)),type_name_254,((void*)0)), come_pop_stackframe(), __exception_result_var_b378);
                if(_if_conditional355=klass2_296==((void*)0)||((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_296, "14struct.c", 764, 3304)), "14struct.c", 764, 3305))->mNobodyStruct,                _if_conditional355) {
                    if(klass2_296) {
                        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_296, "14struct.c", 765, 3306)), "14struct.c", 765, 3307))->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_297=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 766, 3308)), "14struct.c", 766, 3309))->p;
                    header_298=(struct buffer*)come_increment_ref_count((come_push_stackframe("14struct.c", 768, 3311),__exception_result_var_b379=((struct buffer*)(right_value296=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value295=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 768, "buffer"))), "14struct.c", 768, 3310)))))), come_pop_stackframe(), __exception_result_var_b379));
                    come_call_finalizer3(right_value295,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value296,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("14struct.c", 769, 3314),__exception_result_var_b380=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_298, "14struct.c", 769, 3312)), "14struct.c", 769, 3313)),source_head_253,source_tail_297-source_head_253), come_pop_stackframe(), __exception_result_var_b380);
                    (come_push_stackframe("14struct.c", 771,3318),add_come_code_at_come_header(info,"%s;\n",(come_push_stackframe("14struct.c", 771, 3317),__exception_result_var_b381=((char*)(right_value297=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(header_298, "14struct.c", 771, 3315)), "14struct.c", 771, 3316))))), come_pop_stackframe(), __exception_result_var_b381)),come_pop_stackframe());
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(header_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(parent_class_278) {
                    __dec_obj80=((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 775, 3319)), "14struct.c", 775, 3320))->mParentClassName;
                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 775, 3319)), "14struct.c", 775, 3320))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value298=(come_push_stackframe("14struct.c", 775, 3323),__exception_result_var_b382=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_278, "14struct.c", 775, 3321)), "14struct.c", 775, 3322))->mName), come_pop_stackframe(), __exception_result_var_b382))));
                    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("14struct.c", 776, 3331),__exception_result_var_b384=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 776, 3324)), "14struct.c", 776, 3325))->classes, "14struct.c", 776, 3326)), "14struct.c", 776, 3327)),(char*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_277, "14struct.c", 776, 3328)), "14struct.c", 776, 3329))->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value299=(come_push_stackframe("14struct.c", 776, 3330),__exception_result_var_b383=sClass_clone(struct_class_277), come_pop_stackframe(), __exception_result_var_b383))))), come_pop_stackframe(), __exception_result_var_b384);
                    come_call_finalizer3(right_value299,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 779, "struct sNode");
                _inf_obj_value4=come_increment_ref_count((come_push_stackframe("14struct.c", 779, 3335),__exception_result_var_b387=((struct sStructNode*)(right_value303=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)come_null_check(((struct sStructNode*)(right_value300=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 779, "sStructNode"))), "14struct.c", 779, 3332))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 779, 3333),__exception_result_var_b385=((char*)(right_value301=__builtin_string(type_name_254))), come_pop_stackframe(), __exception_result_var_b385)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value302=(come_push_stackframe("14struct.c", 779, 3334),__exception_result_var_b386=sClass_clone(struct_class_277), come_pop_stackframe(), __exception_result_var_b386)))),output_276,info))), come_pop_stackframe(), __exception_result_var_b387));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result192__ = __result_obj__ = ((struct sNode*)(right_value308=_inf_value4));
                come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value300,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value302,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value303,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result192__;
                come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional367=(come_push_stackframe("14struct.c", 783, 3377),__exception_result_var_b391=charp_operator_equals(buf,"class"), come_pop_stackframe(), __exception_result_var_b391),        _if_conditional367) {
            source_head_300=head;
            type_name_301=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 786, 3378),__exception_result_var_b392=((char*)(right_value309=parse_word(info))), come_pop_stackframe(), __exception_result_var_b392));
            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parent_class_302=((void*)0);
            if(_if_conditional368=(come_push_stackframe("14struct.c", 789, 3379),__exception_result_var_b393=parsecmp("extends",info), come_pop_stackframe(), __exception_result_var_b393),            _if_conditional368) {
                (come_push_stackframe("14struct.c", 790, 3380),__exception_result_var_b394=((char*)(right_value310=parse_word(info))), come_pop_stackframe(), __exception_result_var_b394);
                right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_303=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 792, 3381),__exception_result_var_b395=((char*)(right_value311=parse_word(info))), come_pop_stackframe(), __exception_result_var_b395));
                right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_302=(come_push_stackframe("14struct.c", 794, 3384),__exception_result_var_b396=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 794, 3382)), "14struct.c", 794, 3383))->classes,parent_class_name_303), come_pop_stackframe(), __exception_result_var_b396);
                if(_if_conditional369=parent_class_302==((void*)0),                _if_conditional369) {
                    (come_push_stackframe("14struct.c", 797,3385),err_msg(info,"invalid class name(%s)",parent_class_name_303),come_pop_stackframe());
                    __result193__ = __result_obj__ = ((void*)0);
                    parent_class_name_303 = come_decrement_ref_count2(parent_class_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result193__;
                }
                parent_class_name_303 = come_decrement_ref_count2(parent_class_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parent_classes_304=(struct list$1sClassp*)come_increment_ref_count((come_push_stackframe("14struct.c", 802, 3397),__exception_result_var_b397=((struct list$1sClassp*)(right_value313=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)(right_value312=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 802, "list$1sClassp"))), "14struct.c", 802, 3386)))))), come_pop_stackframe(), __exception_result_var_b397));
            come_call_finalizer3(right_value312,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value313,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            parent_class2_307=parent_class_302;
            while(parent_class2_307) {
                (come_push_stackframe("14struct.c", 806, 3444),__exception_result_var_b398=list$1sClassp_add(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(parent_classes_304, "14struct.c", 806, 3398)), "14struct.c", 806, 3399)),parent_class2_307), come_pop_stackframe(), __exception_result_var_b398);
                if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_302, "14struct.c", 807, 3445)), "14struct.c", 807, 3446))->mParentClassName) {
                    parent_class2_307=(come_push_stackframe("14struct.c", 808, 3451),__exception_result_var_b399=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 808, 3447)), "14struct.c", 808, 3448))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_302, "14struct.c", 808, 3449)), "14struct.c", 808, 3450))->mParentClassName), come_pop_stackframe(), __exception_result_var_b399);
                }
                else {
                    parent_class2_307=((void*)0);
                }
            }
            output_311=(_Bool)1;
            if(_if_conditional373=(come_push_stackframe("14struct.c", 818, 3456),__exception_result_var_b400=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 818, 3452)), "14struct.c", 818, 3453))->classes, "14struct.c", 818, 3454)), "14struct.c", 818, 3455)),type_name_301,((void*)0)), come_pop_stackframe(), __exception_result_var_b400)==((void*)0),            _if_conditional373) {
                __dec_obj84=struct_class_312;
                struct_class_312=(struct sClass*)come_increment_ref_count((come_push_stackframe("14struct.c", 819, 3458),__exception_result_var_b401=((struct sClass*)(right_value318=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value317=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 819, "sClass"))), "14struct.c", 819, 3457))),type_name_301,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b401));
                come_call_finalizer3(__dec_obj84,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value317,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value318,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj85=struct_class_312;
                struct_class_312=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value319=(come_push_stackframe("14struct.c", 822, 3464),__exception_result_var_b403=sClass_clone((come_push_stackframe("14struct.c", 822, 3463),__exception_result_var_b402=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 822, 3459)), "14struct.c", 822, 3460))->classes, "14struct.c", 822, 3461)), "14struct.c", 822, 3462)),type_name_301,((void*)0)), come_pop_stackframe(), __exception_result_var_b402)), come_pop_stackframe(), __exception_result_var_b403))));
                come_call_finalizer3(__dec_obj85,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value319,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional374=(come_push_stackframe("14struct.c", 823, 3469),__exception_result_var_b404=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 823, 3465)), "14struct.c", 823, 3466))->mFields, "14struct.c", 823, 3467)), "14struct.c", 823, 3468))), come_pop_stackframe(), __exception_result_var_b404)>0,                _if_conditional374) {
                    output_311=(_Bool)0;
                }
            }
            defining_class_313=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 828, 3470)), "14struct.c", 828, 3471))->defining_class;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 829, 3472)), "14struct.c", 829, 3473))->defining_class=struct_class_312;
            if(_if_conditional375=(come_push_stackframe("14struct.c", 831, 3478),__exception_result_var_b405=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 831, 3474)), "14struct.c", 831, 3475))->classes, "14struct.c", 831, 3476)), "14struct.c", 831, 3477)),type_name_301,((void*)0)), come_pop_stackframe(), __exception_result_var_b405)==((void*)0),            _if_conditional375) {
                if(parent_class_302) {
                    __dec_obj86=((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 833, 3479)), "14struct.c", 833, 3480))->mParentClassName;
                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 833, 3479)), "14struct.c", 833, 3480))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value320=(come_push_stackframe("14struct.c", 833, 3483),__exception_result_var_b406=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_302, "14struct.c", 833, 3481)), "14struct.c", 833, 3482))->mName), come_pop_stackframe(), __exception_result_var_b406))));
                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                (come_push_stackframe("14struct.c", 835, 3489),__exception_result_var_b408=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 835, 3484)), "14struct.c", 835, 3485))->classes, "14struct.c", 835, 3486)), "14struct.c", 835, 3487)),(char*)come_increment_ref_count(type_name_301),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value321=(come_push_stackframe("14struct.c", 835, 3488),__exception_result_var_b407=sClass_clone(struct_class_312), come_pop_stackframe(), __exception_result_var_b407))))), come_pop_stackframe(), __exception_result_var_b408);
                come_call_finalizer3(right_value321,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                for(                o2_saved_319=(struct list$1sClassp*)come_increment_ref_count(((come_push_stackframe("14struct.c", 837, 3547),__exception_result_var_b411=((struct list$1sClassp*)(right_value327=list$1sClassp_reverse(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(parent_classes_304, "14struct.c", 837, 3490)), "14struct.c", 837, 3491))))), come_pop_stackframe(), __exception_result_var_b411))),parent_322=(come_push_stackframe("14struct.c", 837, 3562),__exception_result_var_b414=list$1sClassp_begin(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_319), "14struct.c", 837, 3548)), "14struct.c", 837, 3549))), come_pop_stackframe(), __exception_result_var_b414) ,                come_call_finalizer3(right_value327,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                0;                !(come_push_stackframe("14struct.c", 837, 3567),__exception_result_var_b415=list$1sClassp_end(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_319), "14struct.c", 837, 3563)), "14struct.c", 837, 3564))), come_pop_stackframe(), __exception_result_var_b415);                parent_322=(come_push_stackframe("14struct.c", 837, 3586),__exception_result_var_b418=list$1sClassp_next(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_319), "14struct.c", 837, 3568)), "14struct.c", 837, 3569))), come_pop_stackframe(), __exception_result_var_b418)                ){
                    for(                    o2_saved_325=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_322, "14struct.c", 838, 3587)), "14struct.c", 838, 3588))->mFields)),it_326=(come_push_stackframe("14struct.c", 838, 3591),__exception_result_var_b419=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_325), "14struct.c", 838, 3589)), "14struct.c", 838, 3590))), come_pop_stackframe(), __exception_result_var_b419);                    !(come_push_stackframe("14struct.c", 838, 3594),__exception_result_var_b420=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_325), "14struct.c", 838, 3592)), "14struct.c", 838, 3593))), come_pop_stackframe(), __exception_result_var_b420);                    it_326=(come_push_stackframe("14struct.c", 838, 3597),__exception_result_var_b421=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_325), "14struct.c", 838, 3595)), "14struct.c", 838, 3596))), come_pop_stackframe(), __exception_result_var_b421)                    ){
                        (come_push_stackframe("14struct.c", 839, 3603),__exception_result_var_b423=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 839, 3598)), "14struct.c", 839, 3599))->mFields, "14struct.c", 839, 3600)), "14struct.c", 839, 3601)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value328=(come_push_stackframe("14struct.c", 839, 3602),__exception_result_var_b422=tuple2$2charphsTypephp_clone(it_326), come_pop_stackframe(), __exception_result_var_b422))))), come_pop_stackframe(), __exception_result_var_b423);
                        come_call_finalizer3(right_value328,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_325,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_319,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional383=(come_push_stackframe("14struct.c", 843, 3613),__exception_result_var_b425=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check((come_push_stackframe("14struct.c", 843, 3608),__exception_result_var_b424=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 843, 3604)), "14struct.c", 843, 3605))->classes, "14struct.c", 843, 3606)), "14struct.c", 843, 3607)),type_name_301,((void*)0)), come_pop_stackframe(), __exception_result_var_b424), "14struct.c", 843, 3609)), "14struct.c", 843, 3610))->mFields, "14struct.c", 843, 3611)), "14struct.c", 843, 3612))), come_pop_stackframe(), __exception_result_var_b425)==0&&(come_push_stackframe("14struct.c", 843, 3618),__exception_result_var_b426=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 843, 3614)), "14struct.c", 843, 3615))->mFields, "14struct.c", 843, 3616)), "14struct.c", 843, 3617))), come_pop_stackframe(), __exception_result_var_b426)>0,                _if_conditional383) {
                    klass2_327=(come_push_stackframe("14struct.c", 844, 3623),__exception_result_var_b427=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 844, 3619)), "14struct.c", 844, 3620))->classes, "14struct.c", 844, 3621)), "14struct.c", 844, 3622)),type_name_301,((void*)0)), come_pop_stackframe(), __exception_result_var_b427);
                    if(parent_class_302) {
                        __dec_obj87=((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_327, "14struct.c", 847, 3624)), "14struct.c", 847, 3625))->mParentClassName;
                        ((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_327, "14struct.c", 847, 3624)), "14struct.c", 847, 3625))->mParentClassName=(char*)come_increment_ref_count(((char*)(right_value329=(come_push_stackframe("14struct.c", 847, 3628),__exception_result_var_b428=string_clone(((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_class_302, "14struct.c", 847, 3626)), "14struct.c", 847, 3627))->mName), come_pop_stackframe(), __exception_result_var_b428))));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    (come_push_stackframe("14struct.c", 849, 3634),__exception_result_var_b430=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 849, 3629)), "14struct.c", 849, 3630))->classes, "14struct.c", 849, 3631)), "14struct.c", 849, 3632)),(char*)come_increment_ref_count(type_name_301),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value330=(come_push_stackframe("14struct.c", 849, 3633),__exception_result_var_b429=sClass_clone(klass2_327), come_pop_stackframe(), __exception_result_var_b429))))), come_pop_stackframe(), __exception_result_var_b430);
                    come_call_finalizer3(right_value330,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    for(                    o2_saved_328=(struct list$1sClassp*)come_increment_ref_count(((come_push_stackframe("14struct.c", 851, 3637),__exception_result_var_b431=((struct list$1sClassp*)(right_value331=list$1sClassp_reverse(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(parent_classes_304, "14struct.c", 851, 3635)), "14struct.c", 851, 3636))))), come_pop_stackframe(), __exception_result_var_b431))),parent_329=(come_push_stackframe("14struct.c", 851, 3640),__exception_result_var_b432=list$1sClassp_begin(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_328), "14struct.c", 851, 3638)), "14struct.c", 851, 3639))), come_pop_stackframe(), __exception_result_var_b432) ,                    come_call_finalizer3(right_value331,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                    0;                    !(come_push_stackframe("14struct.c", 851, 3643),__exception_result_var_b433=list$1sClassp_end(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_328), "14struct.c", 851, 3641)), "14struct.c", 851, 3642))), come_pop_stackframe(), __exception_result_var_b433);                    parent_329=(come_push_stackframe("14struct.c", 851, 3646),__exception_result_var_b434=list$1sClassp_next(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check((o2_saved_328), "14struct.c", 851, 3644)), "14struct.c", 851, 3645))), come_pop_stackframe(), __exception_result_var_b434)                    ){
                        for(                        o2_saved_330=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(parent_329, "14struct.c", 852, 3647)), "14struct.c", 852, 3648))->mFields)),it_331=(come_push_stackframe("14struct.c", 852, 3651),__exception_result_var_b435=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_330), "14struct.c", 852, 3649)), "14struct.c", 852, 3650))), come_pop_stackframe(), __exception_result_var_b435);                        !(come_push_stackframe("14struct.c", 852, 3654),__exception_result_var_b436=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_330), "14struct.c", 852, 3652)), "14struct.c", 852, 3653))), come_pop_stackframe(), __exception_result_var_b436);                        it_331=(come_push_stackframe("14struct.c", 852, 3657),__exception_result_var_b437=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_330), "14struct.c", 852, 3655)), "14struct.c", 852, 3656))), come_pop_stackframe(), __exception_result_var_b437)                        ){
                            (come_push_stackframe("14struct.c", 853, 3663),__exception_result_var_b439=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_327, "14struct.c", 853, 3658)), "14struct.c", 853, 3659))->mFields, "14struct.c", 853, 3660)), "14struct.c", 853, 3661)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value332=(come_push_stackframe("14struct.c", 853, 3662),__exception_result_var_b438=tuple2$2charphsTypephp_clone(it_331), come_pop_stackframe(), __exception_result_var_b438))))), come_pop_stackframe(), __exception_result_var_b439);
                            come_call_finalizer3(right_value332,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_330,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_328,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    for(                    o2_saved_332=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 856, 3664)), "14struct.c", 856, 3665))->mFields)),it_333=(come_push_stackframe("14struct.c", 856, 3668),__exception_result_var_b440=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_332), "14struct.c", 856, 3666)), "14struct.c", 856, 3667))), come_pop_stackframe(), __exception_result_var_b440);                    !(come_push_stackframe("14struct.c", 856, 3671),__exception_result_var_b441=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_332), "14struct.c", 856, 3669)), "14struct.c", 856, 3670))), come_pop_stackframe(), __exception_result_var_b441);                    it_333=(come_push_stackframe("14struct.c", 856, 3674),__exception_result_var_b442=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_332), "14struct.c", 856, 3672)), "14struct.c", 856, 3673))), come_pop_stackframe(), __exception_result_var_b442)                    ){
                        (come_push_stackframe("14struct.c", 857, 3680),__exception_result_var_b444=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass2_327, "14struct.c", 857, 3675)), "14struct.c", 857, 3676))->mFields, "14struct.c", 857, 3677)), "14struct.c", 857, 3678)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value333=(come_push_stackframe("14struct.c", 857, 3679),__exception_result_var_b443=tuple2$2charphsTypephp_clone(it_333), come_pop_stackframe(), __exception_result_var_b443))))), come_pop_stackframe(), __exception_result_var_b444);
                        come_call_finalizer3(right_value333,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_332,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (come_push_stackframe("14struct.c", 861, 3681),__exception_result_var_b445=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b445);
            head_334=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 863, 3682)), "14struct.c", 863, 3683))->p;
            p_saved_335=((void*)0);
            sline_saved_336=0;
            __dec_obj88=sname_saved_337;
            sname_saved_337=((void*)0);
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            methods_338=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("14struct.c", 869, 3685),__exception_result_var_b446=((struct list$1sNodeph*)(right_value335=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value334=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 869, "list$1sNodeph"))), "14struct.c", 869, 3684)))))), come_pop_stackframe(), __exception_result_var_b446));
            come_call_finalizer3(right_value334,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value335,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional45=(_Bool)1,            _while_condtional45) {
                if(p_saved_335) {
                    if(_if_conditional386=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 872, 3686)), "14struct.c", 872, 3687))->p, "14struct.c", 872, 3688))==0,                    _if_conditional386) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 873, 3689)), "14struct.c", 873, 3690))->p=p_saved_335;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 874, 3691)), "14struct.c", 874, 3692))->sline=sline_saved_336;
                        __dec_obj89=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 875, 3693)), "14struct.c", 875, 3694))->sname;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 875, 3693)), "14struct.c", 875, 3694))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 875, 3695),__exception_result_var_b447=((char*)(right_value336=__builtin_string(sname_saved_337))), come_pop_stackframe(), __exception_result_var_b447));
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        p_saved_335=((void*)0);
                        sline_saved_336=0;
                        __dec_obj90=sname_saved_337;
                        sname_saved_337=((void*)0);
                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj91=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 880, 3696)), "14struct.c", 880, 3697))->module_params;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 880, 3696)), "14struct.c", 880, 3697))->module_params=((void*)0);
                        come_call_finalizer3(__dec_obj91,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                (come_push_stackframe("14struct.c", 884,3728),parse_sharp_v5(info),come_pop_stackframe());
                include__343=(come_push_stackframe("14struct.c", 886, 3729),__exception_result_var_b448=parsecmp("include",info), come_pop_stackframe(), __exception_result_var_b448);
                multiple_declare_344=(_Bool)0;
                if(_if_conditional391=include__343==(_Bool)0,                _if_conditional391) {
                    p_345=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 891, 3730)), "14struct.c", 891, 3731))->p;
                    sline_346=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 892, 3732)), "14struct.c", 892, 3733))->sline;
                    if(_if_conditional392=(come_push_stackframe("14struct.c", 894, 3736),__exception_result_var_b449=memcmp(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 894, 3734)), "14struct.c", 894, 3735))->p,"new(",4), come_pop_stackframe(), __exception_result_var_b449)!=0,                    _if_conditional392) {
                        multiple_assign_var16=(come_push_stackframe("14struct.c", 895, 3737),__exception_result_var_b450=((struct tuple3$3sTypephcharphbool*)(right_value337=backtrace_parse_type((_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b450);
                        type_347=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_348=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_349=multiple_assign_var16->v3;
                        come_call_finalizer3(right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional393=err_349&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 897, 3738)), "14struct.c", 897, 3739))->p, "14struct.c", 897, 3740))==44,                        _if_conditional393) {
                            multiple_declare_344=(_Bool)1;
                        }
                        come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 902, 3741)), "14struct.c", 902, 3742))->p=p_345;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 903, 3743)), "14struct.c", 903, 3744))->sline=sline_346;
                }
                define_function_flag_350=(_Bool)0;
                if(_if_conditional394=include__343==(_Bool)0,                _if_conditional394) {
                    p_351=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 908, 3745)), "14struct.c", 908, 3746))->p;
                    sline_352=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 909, 3747)), "14struct.c", 909, 3748))->sline;
                    if(_if_conditional395=(come_push_stackframe("14struct.c", 911, 3751),__exception_result_var_b451=memcmp(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 911, 3749)), "14struct.c", 911, 3750))->p,"new(",4), come_pop_stackframe(), __exception_result_var_b451)==0,                    _if_conditional395) {
                        define_function_flag_350=(_Bool)1;
                    }
                    else {
                        invalid_type_353=(_Bool)0;
                        if(_if_conditional396=(come_push_stackframe("14struct.c", 916, 3755),__exception_result_var_b452=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 916, 3752)), "14struct.c", 916, 3753))->p, "14struct.c", 916, 3754))), come_pop_stackframe(), __exception_result_var_b452)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 916, 3756)), "14struct.c", 916, 3757))->p, "14struct.c", 916, 3758))==95,                        _if_conditional396) {
                            multiple_assign_var17=(come_push_stackframe("14struct.c", 917, 3759),__exception_result_var_b453=((struct tuple3$3sTypephcharphbool*)(right_value338=backtrace_parse_type((_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b453);
                            result_type_354=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_355=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_356=multiple_assign_var17->v3;
                            come_call_finalizer3(right_value338,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(result_type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_355 = come_decrement_ref_count2(fun_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        __dec_obj92=word_357;
                        word_357=((void*)0);
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(_if_conditional397=(come_push_stackframe("14struct.c", 921, 3763),__exception_result_var_b454=xisalnum(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 921, 3760)), "14struct.c", 921, 3761))->p, "14struct.c", 921, 3762))), come_pop_stackframe(), __exception_result_var_b454)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 921, 3764)), "14struct.c", 921, 3765))->p, "14struct.c", 921, 3766))==95,                        _if_conditional397) {
                            __dec_obj93=word_357;
                            word_357=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 922, 3767),__exception_result_var_b455=((char*)(right_value339=parse_word(info))), come_pop_stackframe(), __exception_result_var_b455));
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional398=(come_push_stackframe("14struct.c", 924, 3768),__exception_result_var_b456=string_operator_equals(word_357,"extern"), come_pop_stackframe(), __exception_result_var_b456),                            _if_conditional398) {
                                __dec_obj94=word_357;
                                word_357=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 925, 3769),__exception_result_var_b457=((char*)(right_value340=parse_word(info))), come_pop_stackframe(), __exception_result_var_b457));
                                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                        else {
                            __dec_obj95=word_357;
                            word_357=((void*)0);
                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 931, 3770)), "14struct.c", 931, 3771))->no_output_err=(_Bool)0;
                        if(word_357) {
                            if(_if_conditional400=(come_push_stackframe("14struct.c", 934, 3772),__exception_result_var_b458=is_type_name(word_357,info), come_pop_stackframe(), __exception_result_var_b458),                            _if_conditional400) {
                                while(_while_condtional47=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 935, 3773)), "14struct.c", 935, 3774))->p, "14struct.c", 935, 3775))==42,                                _while_condtional47) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 936, 3776)), "14struct.c", 936, 3777))->p++;
                                    (come_push_stackframe("14struct.c", 937,3778),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                if(_if_conditional401=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 939, 3779)), "14struct.c", 939, 3780))->p, "14struct.c", 939, 3781))==91&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 939, 3782)), "14struct.c", 939, 3783))->p+1), "14struct.c", 939, 3784))==93,                                _if_conditional401) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 940, 3785)), "14struct.c", 940, 3786))->p+=2;
                                    (come_push_stackframe("14struct.c", 941,3787),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                if(_if_conditional402=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 943, 3788)), "14struct.c", 943, 3789))->p, "14struct.c", 943, 3790))==58,                                _if_conditional402) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 944, 3791)), "14struct.c", 944, 3792))->p++;
                                    (come_push_stackframe("14struct.c", 945,3793),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                if(_if_conditional403=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 947, 3794)), "14struct.c", 947, 3795))->p, "14struct.c", 947, 3796))==58,                                _if_conditional403) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 948, 3797)), "14struct.c", 948, 3798))->p++;
                                    (come_push_stackframe("14struct.c", 949,3799),skip_spaces_and_lf(info),come_pop_stackframe());
                                }
                                if(_if_conditional404=(come_push_stackframe("14struct.c", 951, 3803),__exception_result_var_b459=xisalnum(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 951, 3800)), "14struct.c", 951, 3801))->p, "14struct.c", 951, 3802))), come_pop_stackframe(), __exception_result_var_b459)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 951, 3804)), "14struct.c", 951, 3805))->p, "14struct.c", 951, 3806))==95,                                _if_conditional404) {
                                    __dec_obj96=word_357;
                                    word_357=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 952, 3807),__exception_result_var_b460=((char*)(right_value341=parse_word(info))), come_pop_stackframe(), __exception_result_var_b460));
                                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            if(_if_conditional405=(come_push_stackframe("14struct.c", 957, 3808),__exception_result_var_b461=strlen(word_357), come_pop_stackframe(), __exception_result_var_b461)>0&&(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 957, 3809)), "14struct.c", 957, 3810))->p, "14struct.c", 957, 3811))==40||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 957, 3812)), "14struct.c", 957, 3813))->p, "14struct.c", 957, 3814))==58&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 957, 3815)), "14struct.c", 957, 3816))->p+1), "14struct.c", 957, 3817))==58)),                            _if_conditional405) {
                                define_function_flag_350=(_Bool)1;
                            }
                        }
                        word_357 = come_decrement_ref_count2(word_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 963, 3818)), "14struct.c", 963, 3819))->p=p_351;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 964, 3820)), "14struct.c", 964, 3821))->sline=sline_352;
                }
                if(define_function_flag_350) {
                    tail_358=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 968, 3822)), "14struct.c", 968, 3823))->p;
                    pointer_num_359=1;
                    __dec_obj97=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 972, 3824)), "14struct.c", 972, 3825))->impl_type;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 972, 3824)), "14struct.c", 972, 3825))->impl_type=(struct sType*)come_increment_ref_count((come_push_stackframe("14struct.c", 972, 3827),__exception_result_var_b462=((struct sType*)(right_value343=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 972, "sType"))), "14struct.c", 972, 3826))),type_name_301,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b462));
                    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 973, 3828)), "14struct.c", 973, 3829))->impl_type, "14struct.c", 973, 3830)), "14struct.c", 973, 3831))->mPointerNum=pointer_num_359;
                    (come_push_stackframe("14struct.c", 975,3832),output_struct_header(struct_class_312,info),come_pop_stackframe());
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 977, 3833)), "14struct.c", 977, 3834))->in_class=(_Bool)1;
                    method_360=(struct sNode*)come_increment_ref_count((come_push_stackframe("14struct.c", 979, 3835),__exception_result_var_b463=((struct sNode*)(right_value344=parse_function(info))), come_pop_stackframe(), __exception_result_var_b463));
                    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __dec_obj98=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 981, 3836)), "14struct.c", 981, 3837))->impl_type;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 981, 3836)), "14struct.c", 981, 3837))->impl_type=((void*)0);
                    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 982, 3838)), "14struct.c", 982, 3839))->in_class=(_Bool)0;
                    (come_push_stackframe("14struct.c", 984, 3886),__exception_result_var_b464=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(methods_338, "14struct.c", 984, 3840)), "14struct.c", 984, 3841)),(struct sNode*)come_increment_ref_count(method_360)), come_pop_stackframe(), __exception_result_var_b464);
                    if(method_360) { method_360 = come_decrement_ref_count2(method_360, ((struct sNode*)method_360)->finalize, ((struct sNode*)method_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(multiple_declare_344) {
                        multiple_assign_var18=(come_push_stackframe("14struct.c", 987, 3887),__exception_result_var_b465=((struct tuple3$3sTypephcharphbool*)(right_value348=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b465);
                        base_type_364=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_365=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_366=multiple_assign_var18->v3;
                        come_call_finalizer3(right_value348,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var19=(come_push_stackframe("14struct.c", 989, 3888),__exception_result_var_b466=((struct tuple2$2sTypephcharph*)(right_value349=parse_variable_name((struct sType*)come_increment_ref_count(base_type_364),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b466);
                        type2_367=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_368=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        come_call_finalizer3(right_value349,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("14struct.c", 991, 3893),__exception_result_var_b467=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 991, 3889)), "14struct.c", 991, 3890))->mFields, "14struct.c", 991, 3891)), "14struct.c", 991, 3892)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value351=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value350=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 991, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_368),(struct sType*)come_increment_ref_count(type2_367)))))), come_pop_stackframe(), __exception_result_var_b467);
                        come_call_finalizer3(right_value350,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value351,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(_while_condtional48=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 993, 3894)), "14struct.c", 993, 3895))->p, "14struct.c", 993, 3896))==44,                        _while_condtional48) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 994, 3897)), "14struct.c", 994, 3898))->p++;
                            (come_push_stackframe("14struct.c", 995,3899),skip_spaces_and_lf(info),come_pop_stackframe());
                            multiple_assign_var20=(come_push_stackframe("14struct.c", 997, 3900),__exception_result_var_b468=((struct tuple2$2sTypephcharph*)(right_value352=parse_variable_name((struct sType*)come_increment_ref_count(base_type_364),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b468);
                            type2_369=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_370=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            come_call_finalizer3(right_value352,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("14struct.c", 999, 3905),__exception_result_var_b469=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 999, 3901)), "14struct.c", 999, 3902))->mFields, "14struct.c", 999, 3903)), "14struct.c", 999, 3904)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value354=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value353=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 999, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_370),(struct sType*)come_increment_ref_count(type2_369)))))), come_pop_stackframe(), __exception_result_var_b469);
                            come_call_finalizer3(right_value353,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value354,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_370 = come_decrement_ref_count2(name2_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        (come_push_stackframe("14struct.c", 1001, 3906),__exception_result_var_b470=expected_next_character(59,info), come_pop_stackframe(), __exception_result_var_b470);
                        come_call_finalizer3(base_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_365 = come_decrement_ref_count2(name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_368 = come_decrement_ref_count2(name2_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional410=(come_push_stackframe("14struct.c", 1003, 3907),__exception_result_var_b471=parsecmp("include",info), come_pop_stackframe(), __exception_result_var_b471),                        _if_conditional410) {
                            (come_push_stackframe("14struct.c", 1004, 3908),__exception_result_var_b472=((char*)(right_value355=parse_word(info))), come_pop_stackframe(), __exception_result_var_b472);
                            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_371=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1006, 3909),__exception_result_var_b473=((char*)(right_value356=parse_word(info))), come_pop_stackframe(), __exception_result_var_b473));
                            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            params_372=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("14struct.c", 1008, 3911),__exception_result_var_b474=((struct list$1charph*)(right_value358=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value357=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1008, "list$1charph"))), "14struct.c", 1008, 3910)))))), come_pop_stackframe(), __exception_result_var_b474));
                            come_call_finalizer3(right_value357,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value358,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional411=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1010, 3912)), "14struct.c", 1010, 3913))->p, "14struct.c", 1010, 3914))==60,                            _if_conditional411) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1011, 3915)), "14struct.c", 1011, 3916))->p++;
                                (come_push_stackframe("14struct.c", 1012,3917),skip_spaces_and_lf(info),come_pop_stackframe());
                                while(_while_condtional49=(_Bool)1,                                _while_condtional49) {
                                    word_373=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1015, 3918),__exception_result_var_b475=((char*)(right_value359=parse_word(info))), come_pop_stackframe(), __exception_result_var_b475));
                                    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("14struct.c", 1017, 3921),__exception_result_var_b476=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(params_372, "14struct.c", 1017, 3919)), "14struct.c", 1017, 3920)),(char*)come_increment_ref_count(word_373)), come_pop_stackframe(), __exception_result_var_b476);
                                    if(_if_conditional412=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1019, 3922)), "14struct.c", 1019, 3923))->p, "14struct.c", 1019, 3924))==44,                                    _if_conditional412) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1020, 3925)), "14struct.c", 1020, 3926))->p++;
                                        (come_push_stackframe("14struct.c", 1021,3927),skip_spaces_and_lf(info),come_pop_stackframe());
                                    }
                                    else {
                                        if(_if_conditional413=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1023, 3928)), "14struct.c", 1023, 3929))->p, "14struct.c", 1023, 3930))==0,                                        _if_conditional413) {
                                            (come_push_stackframe("14struct.c", 1024,3931),err_msg(info,"invalid source end"),come_pop_stackframe());
                                            (come_push_stackframe("14struct.c", 1025,3932),exit(2),come_pop_stackframe());
                                        }
                                        else {
                                            if(_if_conditional414=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1027, 3933)), "14struct.c", 1027, 3934))->p, "14struct.c", 1027, 3935))==62,                                            _if_conditional414) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1028, 3936)), "14struct.c", 1028, 3937))->p++;
                                                (come_push_stackframe("14struct.c", 1029,3938),skip_spaces_and_lf(info),come_pop_stackframe());
                                                word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                (come_push_stackframe("14struct.c", 1033,3942),err_msg(info,"invalid charactor(%c)",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1033, 3939)), "14struct.c", 1033, 3940))->p, "14struct.c", 1033, 3941))),come_pop_stackframe());
                                                (come_push_stackframe("14struct.c", 1034,3943),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            if(_if_conditional415=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1039, 3944)), "14struct.c", 1039, 3945))->p, "14struct.c", 1039, 3946))==59,                            _if_conditional415) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1039, 3947)), "14struct.c", 1039, 3948))->p++;
                            }
                            (come_push_stackframe("14struct.c", 1041,3949),skip_spaces_and_lf(info),come_pop_stackframe());
                            p_saved_335=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1043, 3950)), "14struct.c", 1043, 3951))->p;
                            sline_saved_336=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1044, 3952)), "14struct.c", 1044, 3953))->sline;
                            __dec_obj102=sname_saved_337;
                            sname_saved_337=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1045, 3956),__exception_result_var_b477=((char*)(right_value360=__builtin_string(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1045, 3954)), "14struct.c", 1045, 3955))->sname))), come_pop_stackframe(), __exception_result_var_b477));
                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional424=(come_push_stackframe("14struct.c", 1047, 3995),__exception_result_var_b481=map$2charphsClassModulephp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1047, 3957)), "14struct.c", 1047, 3958))->modules,module_name_371), come_pop_stackframe(), __exception_result_var_b481)==((void*)0),                            _if_conditional424) {
                                (come_push_stackframe("14struct.c", 1048,3996),err_msg(info,"module not found"),come_pop_stackframe());
                                __result210__ = __result_obj__ = ((void*)0);
                                module_name_371 = come_decrement_ref_count2(module_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                return __result210__;
                            }
                            module_377=(come_push_stackframe("14struct.c", 1052, 4001),__exception_result_var_b482=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(((struct map$2charphsClassModuleph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1052, 3997)), "14struct.c", 1052, 3998))->modules, "14struct.c", 1052, 3999)),module_name_371), "14struct.c", 1052, 4000)), come_pop_stackframe(), __exception_result_var_b482);
                            if(_if_conditional426=(come_push_stackframe("14struct.c", 1054, 4008),__exception_result_var_b483=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(module_377, "14struct.c", 1054, 4002)), "14struct.c", 1054, 4003))->mParams, "14struct.c", 1054, 4004)), "14struct.c", 1054, 4005))), come_pop_stackframe(), __exception_result_var_b483)!=(come_push_stackframe("14struct.c", 1054, 4011),__exception_result_var_b484=list$1charph_length(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(params_372, "14struct.c", 1054, 4009)), "14struct.c", 1054, 4010))), come_pop_stackframe(), __exception_result_var_b484),                            _if_conditional426) {
                                (come_push_stackframe("14struct.c", 1055,4012),err_msg(info,"invalid parametor number"),come_pop_stackframe());
                                (come_push_stackframe("14struct.c", 1056,4013),exit(1),come_pop_stackframe());
                            }
                            __dec_obj104=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1059, 4014)), "14struct.c", 1059, 4015))->module_params;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1059, 4014)), "14struct.c", 1059, 4015))->module_params=(struct map$2charphcharph*)come_increment_ref_count((come_push_stackframe("14struct.c", 1059, 4068),__exception_result_var_b486=((struct map$2charphcharph*)(right_value367=map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)(right_value361=(struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1059, "map$2charphcharph"))), "14struct.c", 1059, 4016)))))), come_pop_stackframe(), __exception_result_var_b486));
                            come_call_finalizer3(__dec_obj104,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value361,map$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value367,map$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            i_381=0;
                            for(                            o2_saved_382=(struct list$1charph*)come_increment_ref_count((((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(module_377, "14struct.c", 1062, 4069)), "14struct.c", 1062, 4070))->mParams)),it_385=(come_push_stackframe("14struct.c", 1062, 4085),__exception_result_var_b489=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_382), "14struct.c", 1062, 4071)), "14struct.c", 1062, 4072))), come_pop_stackframe(), __exception_result_var_b489);                            !(come_push_stackframe("14struct.c", 1062, 4090),__exception_result_var_b490=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_382), "14struct.c", 1062, 4086)), "14struct.c", 1062, 4087))), come_pop_stackframe(), __exception_result_var_b490);                            it_385=(come_push_stackframe("14struct.c", 1062, 4109),__exception_result_var_b493=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_382), "14struct.c", 1062, 4091)), "14struct.c", 1062, 4092))), come_pop_stackframe(), __exception_result_var_b493)                            ){
                                (come_push_stackframe("14struct.c", 1063, 4345),__exception_result_var_b521=((char*)(right_value371=map$2charphcharphp_operator_store_element(((struct map$2charphcharph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1063, 4110)), "14struct.c", 1063, 4111))->module_params, "14struct.c", 1063, 4112)),it_385,(come_push_stackframe("14struct.c", 1063, 4124),__exception_result_var_b495=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(params_372, "14struct.c", 1063, 4113)),i_381), "14struct.c", 1063, 4123)), come_pop_stackframe(), __exception_result_var_b495)))), come_pop_stackframe(), __exception_result_var_b521);
                                right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            come_call_finalizer3(o2_saved_382,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1066, 4346)), "14struct.c", 1066, 4347))->p=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(module_377, "14struct.c", 1066, 4348)), "14struct.c", 1066, 4349))->mText;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1067, 4350)), "14struct.c", 1067, 4351))->sline=((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(module_377, "14struct.c", 1067, 4352)), "14struct.c", 1067, 4353))->mSLine;
                            __dec_obj105=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1068, 4354)), "14struct.c", 1068, 4355))->sname;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1068, 4354)), "14struct.c", 1068, 4355))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1068, 4358),__exception_result_var_b522=((char*)(right_value372=__builtin_string(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(module_377, "14struct.c", 1068, 4356)), "14struct.c", 1068, 4357))->mSName))), come_pop_stackframe(), __exception_result_var_b522));
                            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_371 = come_decrement_ref_count2(module_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            multiple_assign_var21=(come_push_stackframe("14struct.c", 1071, 4359),__exception_result_var_b523=((struct tuple3$3sTypephcharphbool*)(right_value373=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b523);
                            type2_412=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_413=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_414=multiple_assign_var21->v3;
                            come_call_finalizer3(right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional459=!err_414,                            _if_conditional459) {
                                (come_push_stackframe("14struct.c", 1073, 4364),__exception_result_var_b524=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1073, 4360)), "14struct.c", 1073, 4361))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1073, 4362)), "14struct.c", 1073, 4363))->sline), come_pop_stackframe(), __exception_result_var_b524);
                                (come_push_stackframe("14struct.c", 1074,4365),exit(2),come_pop_stackframe());
                            }
                            (come_push_stackframe("14struct.c", 1077, 4370),__exception_result_var_b525=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(struct_class_312, "14struct.c", 1077, 4366)), "14struct.c", 1077, 4367))->mFields, "14struct.c", 1077, 4368)), "14struct.c", 1077, 4369)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value375=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value374=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1077, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_413),(struct sType*)come_increment_ref_count(type2_412)))))), come_pop_stackframe(), __exception_result_var_b525);
                            come_call_finalizer3(right_value374,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value375,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional460=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1078, 4371)), "14struct.c", 1078, 4372))->p, "14struct.c", 1078, 4373))==59,                            _if_conditional460) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1079, 4374)), "14struct.c", 1079, 4375))->p++;
                                (come_push_stackframe("14struct.c", 1080,4376),skip_spaces_and_lf(info),come_pop_stackframe());
                            }
                            come_call_finalizer3(type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                (come_push_stackframe("14struct.c", 1085,4377),parse_sharp_v5(info),come_pop_stackframe());
                if(_if_conditional461=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1087, 4378)), "14struct.c", 1087, 4379))->p, "14struct.c", 1087, 4380))==125,                _if_conditional461) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1088, 4381)), "14struct.c", 1088, 4382))->p++;
                    (come_push_stackframe("14struct.c", 1089,4383),skip_spaces_and_lf(info),come_pop_stackframe());
                    break;
                }
                (come_push_stackframe("14struct.c", 1092,4384),parse_sharp_v5(info),come_pop_stackframe());
            }
            if(p_saved_335) {
                if(_if_conditional463=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1096, 4385)), "14struct.c", 1096, 4386))->p==0,                _if_conditional463) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1097, 4387)), "14struct.c", 1097, 4388))->p=p_saved_335;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1098, 4389)), "14struct.c", 1098, 4390))->sline=sline_saved_336;
                    __dec_obj106=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1099, 4391)), "14struct.c", 1099, 4392))->sname;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1099, 4391)), "14struct.c", 1099, 4392))->sname=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1099, 4393),__exception_result_var_b526=((char*)(right_value376=__builtin_string(sname_saved_337))), come_pop_stackframe(), __exception_result_var_b526));
                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value376 = come_decrement_ref_count2(right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    p_saved_335=((void*)0);
                    sline_saved_336=0;
                }
            }
            (come_push_stackframe("14struct.c", 1106, 4398),__exception_result_var_b527=list$1charph_reset(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1106, 4394)), "14struct.c", 1106, 4395))->generics_type_names, "14struct.c", 1106, 4396)), "14struct.c", 1106, 4397))), come_pop_stackframe(), __exception_result_var_b527);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1108, 4399)), "14struct.c", 1108, 4400))->defining_class=defining_class_313;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1110, "struct sNode");
            _inf_obj_value5=come_increment_ref_count((come_push_stackframe("14struct.c", 1110, 4404),__exception_result_var_b530=((struct sClassNode*)(right_value380=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)come_null_check(((struct sClassNode*)(right_value377=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1110, "sClassNode"))), "14struct.c", 1110, 4401))),(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1110, 4402),__exception_result_var_b528=((char*)(right_value378=__builtin_string(type_name_301))), come_pop_stackframe(), __exception_result_var_b528)),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value379=(come_push_stackframe("14struct.c", 1110, 4403),__exception_result_var_b529=sClass_clone(struct_class_312), come_pop_stackframe(), __exception_result_var_b529)))),(struct list$1sNodeph*)come_increment_ref_count(methods_338),output_311,info))), come_pop_stackframe(), __exception_result_var_b530));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result239__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value5));
            type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value377,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value380,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result239__;
            type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result240__ = __result_obj__ = (come_push_stackframe("14struct.c", 1113, 4457),__exception_result_var_b535=((struct sNode*)(right_value387=top_level_v97(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b535);
    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result240__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional322;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional322=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0, 2968)), "sStructNobodyNode_finalize", 0, 2969))->sname!=((void*)0),                _if_conditional322) {
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0, 2970)), "sStructNobodyNode_finalize", 0, 2971))->sname = come_decrement_ref_count2(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0, 2970)), "sStructNobodyNode_finalize", 0, 2971))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional323=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1, 2972)), "sStructNobodyNode_finalize", 1, 2973))->mName!=((void*)0),                _if_conditional323) {
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1, 2974)), "sStructNobodyNode_finalize", 1, 2975))->mName = come_decrement_ref_count2(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1, 2974)), "sStructNobodyNode_finalize", 1, 2975))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional324=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2, 2976)), "sStructNobodyNode_finalize", 2, 2977))->mClass!=((void*)0),                _if_conditional324) {
                    come_call_finalizer3(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2, 2978)), "sStructNobodyNode_finalize", 2, 2979))->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool _if_conditional325;
struct sStructNobodyNode* __result181__;
void* right_value249;
struct sStructNobodyNode* result_258;
_Bool _if_conditional326;
_Bool _if_conditional327;
char* __exception_result_var_b331;
void* right_value250;
char* __dec_obj69;
_Bool _if_conditional328;
char* __exception_result_var_b332;
void* right_value251;
char* __dec_obj70;
_Bool _if_conditional329;
struct sClass* __exception_result_var_b333;
void* right_value252;
struct sClass* __dec_obj71;
struct sStructNobodyNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
memset(&result_258, 0, sizeof(struct sStructNobodyNode*));
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
                if(_if_conditional325=self==(void*)0,                _if_conditional325) {
                    __result181__ = __result_obj__ = (void*)0;
                    return __result181__;
                }
                result_258=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value249=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"))));
                come_call_finalizer3(right_value249,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional326=self!=((void*)0),                _if_conditional326) {
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 4, 2980)), "sStructNobodyNode_clone", 4, 2981))->sline=((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 4, 2982)), "sStructNobodyNode_clone", 4, 2983))->sline;
                }
                if(_if_conditional327=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5, 2984)), "sStructNobodyNode_clone", 5, 2985))->sname!=((void*)0),                _if_conditional327) {
                    __dec_obj69=((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 5, 2986)), "sStructNobodyNode_clone", 5, 2987))->sname;
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 5, 2986)), "sStructNobodyNode_clone", 5, 2987))->sname=(char*)come_increment_ref_count(((char*)(right_value250=(come_push_stackframe("sStructNobodyNode_clone", 5, 2990),__exception_result_var_b331=string_clone(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5, 2988)), "sStructNobodyNode_clone", 5, 2989))->sname), come_pop_stackframe(), __exception_result_var_b331))));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional328=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 6, 2991)), "sStructNobodyNode_clone", 6, 2992))->mName!=((void*)0),                _if_conditional328) {
                    __dec_obj70=((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 6, 2993)), "sStructNobodyNode_clone", 6, 2994))->mName;
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 6, 2993)), "sStructNobodyNode_clone", 6, 2994))->mName=(char*)come_increment_ref_count(((char*)(right_value251=(come_push_stackframe("sStructNobodyNode_clone", 6, 2997),__exception_result_var_b332=string_clone(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 6, 2995)), "sStructNobodyNode_clone", 6, 2996))->mName), come_pop_stackframe(), __exception_result_var_b332))));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional329=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 7, 2998)), "sStructNobodyNode_clone", 7, 2999))->mClass!=((void*)0),                _if_conditional329) {
                    __dec_obj71=((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 7, 3000)), "sStructNobodyNode_clone", 7, 3001))->mClass;
                    ((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(result_258, "sStructNobodyNode_clone", 7, 3000)), "sStructNobodyNode_clone", 7, 3001))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value252=(come_push_stackframe("sStructNobodyNode_clone", 7, 3004),__exception_result_var_b333=sClass_clone(((struct sStructNobodyNode*)come_null_check(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 7, 3002)), "sStructNobodyNode_clone", 7, 3003))->mClass), come_pop_stackframe(), __exception_result_var_b333))));
                    come_call_finalizer3(__dec_obj71,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value252,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result182__ = __result_obj__ = result_258;
                come_call_finalizer3(result_258,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result182__;
                come_call_finalizer3(result_258,sStructNobodyNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_259;
_Bool _while_condtional37;
struct list_item$1charph* prev_it_260;
struct list$1charph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_259, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_260, 0, sizeof(struct list_item$1charph*));
                    it_259=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 426, 3012)), "./neo-c.h", 426, 3013))->head;
                    while(_while_condtional37=it_259!=((void*)0),                    _while_condtional37) {
                        prev_it_260=it_259;
                        it_259=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_259, "./neo-c.h", 429, 3014)), "./neo-c.h", 429, 3015))->next;
                        come_call_finalizer3(prev_it_260,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 433, 3016)), "./neo-c.h", 433, 3017))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 434, 3018)), "./neo-c.h", 434, 3019))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 436, 3020)), "./neo-c.h", 436, 3021))->len=0;
                    __result184__ = __result_obj__ = self;
                    return __result184__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional331;
void* right_value255;
struct list_item$1charph* litem_262;
char* __dec_obj72;
_Bool _if_conditional332;
void* right_value256;
struct list_item$1charph* litem_263;
char* __dec_obj73;
void* right_value257;
struct list_item$1charph* litem_264;
char* __dec_obj74;
struct list$1charph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
memset(&litem_262, 0, sizeof(struct list_item$1charph*));
right_value256 = (void*)0;
memset(&litem_263, 0, sizeof(struct list_item$1charph*));
right_value257 = (void*)0;
memset(&litem_264, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional331=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 3031)), "./neo-c.h", 222, 3032))->len==0,                        _if_conditional331) {
                            litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value255=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                            come_call_finalizer3(right_value255,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_262, "./neo-c.h", 225, 3033)), "./neo-c.h", 225, 3034))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_262, "./neo-c.h", 226, 3035)), "./neo-c.h", 226, 3036))->next=((void*)0);
                            __dec_obj72=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_262, "./neo-c.h", 227, 3037)), "./neo-c.h", 227, 3038))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_262, "./neo-c.h", 227, 3037)), "./neo-c.h", 227, 3038))->item=(char*)come_increment_ref_count(item);
                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 3039)), "./neo-c.h", 229, 3040))->tail=litem_262;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 3041)), "./neo-c.h", 230, 3042))->head=litem_262;
                        }
                        else {
                            if(_if_conditional332=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 3043)), "./neo-c.h", 232, 3044))->len==1,                            _if_conditional332) {
                                litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                                come_call_finalizer3(right_value256,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_263, "./neo-c.h", 235, 3045)), "./neo-c.h", 235, 3046))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 3047)), "./neo-c.h", 235, 3048))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_263, "./neo-c.h", 236, 3049)), "./neo-c.h", 236, 3050))->next=((void*)0);
                                __dec_obj73=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_263, "./neo-c.h", 237, 3051)), "./neo-c.h", 237, 3052))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_263, "./neo-c.h", 237, 3051)), "./neo-c.h", 237, 3052))->item=(char*)come_increment_ref_count(item);
                                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 3053)), "./neo-c.h", 239, 3054))->tail=litem_263;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 3055)), "./neo-c.h", 240, 3056))->head, "./neo-c.h", 240, 3057)), "./neo-c.h", 240, 3058))->next=litem_263;
                            }
                            else {
                                litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                                come_call_finalizer3(right_value257,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_264, "./neo-c.h", 245, 3059)), "./neo-c.h", 245, 3060))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 3061)), "./neo-c.h", 245, 3062))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_264, "./neo-c.h", 246, 3063)), "./neo-c.h", 246, 3064))->next=((void*)0);
                                __dec_obj74=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_264, "./neo-c.h", 247, 3065)), "./neo-c.h", 247, 3066))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_264, "./neo-c.h", 247, 3065)), "./neo-c.h", 247, 3066))->item=(char*)come_increment_ref_count(item);
                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 3067)), "./neo-c.h", 249, 3068))->tail, "./neo-c.h", 249, 3069)), "./neo-c.h", 249, 3070))->next=litem_264;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 3071)), "./neo-c.h", 250, 3072))->tail=litem_264;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 3073)), "./neo-c.h", 253, 3074))->len++;
                        __result185__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result185__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional342=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0, 3195)), "sGenericsStructNode_finalize", 0, 3196))->sname!=((void*)0),                    _if_conditional342) {
                        ((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0, 3197)), "sGenericsStructNode_finalize", 0, 3198))->sname = come_decrement_ref_count2(((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0, 3197)), "sGenericsStructNode_finalize", 0, 3198))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool _if_conditional343;
struct sGenericsStructNode* __result186__;
void* right_value276;
struct sGenericsStructNode* result_275;
_Bool _if_conditional344;
_Bool _if_conditional345;
char* __exception_result_var_b357;
void* right_value277;
char* __dec_obj77;
struct sGenericsStructNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
memset(&result_275, 0, sizeof(struct sGenericsStructNode*));
right_value277 = (void*)0;
                    if(_if_conditional343=self==(void*)0,                    _if_conditional343) {
                        __result186__ = __result_obj__ = (void*)0;
                        return __result186__;
                    }
                    result_275=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value276=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"))));
                    come_call_finalizer3(right_value276,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional344=self!=((void*)0),                    _if_conditional344) {
                        ((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(result_275, "sGenericsStructNode_clone", 4, 3199)), "sGenericsStructNode_clone", 4, 3200))->sline=((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 4, 3201)), "sGenericsStructNode_clone", 4, 3202))->sline;
                    }
                    if(_if_conditional345=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 5, 3203)), "sGenericsStructNode_clone", 5, 3204))->sname!=((void*)0),                    _if_conditional345) {
                        __dec_obj77=((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(result_275, "sGenericsStructNode_clone", 5, 3205)), "sGenericsStructNode_clone", 5, 3206))->sname;
                        ((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(result_275, "sGenericsStructNode_clone", 5, 3205)), "sGenericsStructNode_clone", 5, 3206))->sname=(char*)come_increment_ref_count(((char*)(right_value277=(come_push_stackframe("sGenericsStructNode_clone", 5, 3209),__exception_result_var_b357=string_clone(((struct sGenericsStructNode*)come_null_check(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 5, 3207)), "sGenericsStructNode_clone", 5, 3208))->sname), come_pop_stackframe(), __exception_result_var_b357))));
                        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result187__ = __result_obj__ = result_275;
                    come_call_finalizer3(result_275,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result187__;
                    come_call_finalizer3(result_275,sGenericsStructNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional358=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0, 3336)), "sStructNode_finalize", 0, 3337))->sname!=((void*)0),                    _if_conditional358) {
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0, 3338)), "sStructNode_finalize", 0, 3339))->sname = come_decrement_ref_count2(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0, 3338)), "sStructNode_finalize", 0, 3339))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional359=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1, 3340)), "sStructNode_finalize", 1, 3341))->mName!=((void*)0),                    _if_conditional359) {
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1, 3342)), "sStructNode_finalize", 1, 3343))->mName = come_decrement_ref_count2(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1, 3342)), "sStructNode_finalize", 1, 3343))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional360=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2, 3344)), "sStructNode_finalize", 2, 3345))->mClass!=((void*)0),                    _if_conditional360) {
                        come_call_finalizer3(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2, 3346)), "sStructNode_finalize", 2, 3347))->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sStructNode* __result190__;
void* right_value304;
struct sStructNode* result_299;
_Bool _if_conditional362;
_Bool _if_conditional363;
char* __exception_result_var_b388;
void* right_value305;
char* __dec_obj81;
_Bool _if_conditional364;
char* __exception_result_var_b389;
void* right_value306;
char* __dec_obj82;
_Bool _if_conditional365;
struct sClass* __exception_result_var_b390;
void* right_value307;
struct sClass* __dec_obj83;
_Bool _if_conditional366;
struct sStructNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
memset(&result_299, 0, sizeof(struct sStructNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
                    if(_if_conditional361=self==(void*)0,                    _if_conditional361) {
                        __result190__ = __result_obj__ = (void*)0;
                        return __result190__;
                    }
                    result_299=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value304=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"))));
                    come_call_finalizer3(right_value304,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional362=self!=((void*)0),                    _if_conditional362) {
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 4, 3348)), "sStructNode_clone", 4, 3349))->sline=((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 4, 3350)), "sStructNode_clone", 4, 3351))->sline;
                    }
                    if(_if_conditional363=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5, 3352)), "sStructNode_clone", 5, 3353))->sname!=((void*)0),                    _if_conditional363) {
                        __dec_obj81=((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 5, 3354)), "sStructNode_clone", 5, 3355))->sname;
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 5, 3354)), "sStructNode_clone", 5, 3355))->sname=(char*)come_increment_ref_count(((char*)(right_value305=(come_push_stackframe("sStructNode_clone", 5, 3358),__exception_result_var_b388=string_clone(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5, 3356)), "sStructNode_clone", 5, 3357))->sname), come_pop_stackframe(), __exception_result_var_b388))));
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional364=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 6, 3359)), "sStructNode_clone", 6, 3360))->mName!=((void*)0),                    _if_conditional364) {
                        __dec_obj82=((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 6, 3361)), "sStructNode_clone", 6, 3362))->mName;
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 6, 3361)), "sStructNode_clone", 6, 3362))->mName=(char*)come_increment_ref_count(((char*)(right_value306=(come_push_stackframe("sStructNode_clone", 6, 3365),__exception_result_var_b389=string_clone(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 6, 3363)), "sStructNode_clone", 6, 3364))->mName), come_pop_stackframe(), __exception_result_var_b389))));
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional365=self!=((void*)0)&&((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 7, 3366)), "sStructNode_clone", 7, 3367))->mClass!=((void*)0),                    _if_conditional365) {
                        __dec_obj83=((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 7, 3368)), "sStructNode_clone", 7, 3369))->mClass;
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 7, 3368)), "sStructNode_clone", 7, 3369))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value307=(come_push_stackframe("sStructNode_clone", 7, 3372),__exception_result_var_b390=sClass_clone(((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 7, 3370)), "sStructNode_clone", 7, 3371))->mClass), come_pop_stackframe(), __exception_result_var_b390))));
                        come_call_finalizer3(__dec_obj83,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value307,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional366=self!=((void*)0),                    _if_conditional366) {
                        ((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(result_299, "sStructNode_clone", 8, 3373)), "sStructNode_clone", 8, 3374))->mOutput=((struct sStructNode*)come_null_check(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 8, 3375)), "sStructNode_clone", 8, 3376))->mOutput;
                    }
                    __result191__ = __result_obj__ = result_299;
                    come_call_finalizer3(result_299,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result191__;
                    come_call_finalizer3(result_299,sStructNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__;
struct list$1sClassp* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
                ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 101, 3387)), "./neo-c.h", 101, 3388))->head=((void*)0);
                ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 102, 3389)), "./neo-c.h", 102, 3390))->tail=((void*)0);
                ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 103, 3391)), "./neo-c.h", 103, 3392))->len=0;
                __result194__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
                return __result194__;
                come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
void* __result_obj__;
struct list_item$1sClassp* it_305;
_Bool _while_condtional43;
struct list_item$1sClassp* prev_it_306;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1sClassp*));
memset(&prev_it_306, 0, sizeof(struct list_item$1sClassp*));
                    it_305=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 120, 3393)), "./neo-c.h", 120, 3394))->head;
                    while(_while_condtional43=it_305!=((void*)0),                    _while_condtional43) {
                        prev_it_306=it_305;
                        it_305=((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(it_305, "./neo-c.h", 123, 3395)), "./neo-c.h", 123, 3396))->next;
                        come_call_finalizer3(prev_it_306,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional370;
void* right_value314;
struct list_item$1sClassp* litem_308;
_Bool _if_conditional371;
void* right_value315;
struct list_item$1sClassp* litem_309;
void* right_value316;
struct list_item$1sClassp* litem_310;
struct list$1sClassp* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
memset(&litem_308, 0, sizeof(struct list_item$1sClassp*));
right_value315 = (void*)0;
memset(&litem_309, 0, sizeof(struct list_item$1sClassp*));
right_value316 = (void*)0;
memset(&litem_310, 0, sizeof(struct list_item$1sClassp*));
                    if(_if_conditional370=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 152, 3400)), "./neo-c.h", 152, 3401))->len==0,                    _if_conditional370) {
                        litem_308=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value314=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 153, "list_item$1sClassp"))));
                        come_call_finalizer3(right_value314,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_308, "./neo-c.h", 155, 3402)), "./neo-c.h", 155, 3403))->prev=((void*)0);
                        ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_308, "./neo-c.h", 156, 3404)), "./neo-c.h", 156, 3405))->next=((void*)0);
                        ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_308, "./neo-c.h", 157, 3406)), "./neo-c.h", 157, 3407))->item=item;
                        ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 159, 3408)), "./neo-c.h", 159, 3409))->tail=litem_308;
                        ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 160, 3410)), "./neo-c.h", 160, 3411))->head=litem_308;
                    }
                    else {
                        if(_if_conditional371=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 162, 3412)), "./neo-c.h", 162, 3413))->len==1,                        _if_conditional371) {
                            litem_309=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value315=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 163, "list_item$1sClassp"))));
                            come_call_finalizer3(right_value315,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_309, "./neo-c.h", 165, 3414)), "./neo-c.h", 165, 3415))->prev=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 165, 3416)), "./neo-c.h", 165, 3417))->head;
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_309, "./neo-c.h", 166, 3418)), "./neo-c.h", 166, 3419))->next=((void*)0);
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_309, "./neo-c.h", 167, 3420)), "./neo-c.h", 167, 3421))->item=item;
                            ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 169, 3422)), "./neo-c.h", 169, 3423))->tail=litem_309;
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 170, 3424)), "./neo-c.h", 170, 3425))->head, "./neo-c.h", 170, 3426)), "./neo-c.h", 170, 3427))->next=litem_309;
                        }
                        else {
                            litem_310=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value316=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 173, "list_item$1sClassp"))));
                            come_call_finalizer3(right_value316,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_310, "./neo-c.h", 175, 3428)), "./neo-c.h", 175, 3429))->prev=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 175, 3430)), "./neo-c.h", 175, 3431))->tail;
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_310, "./neo-c.h", 176, 3432)), "./neo-c.h", 176, 3433))->next=((void*)0);
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_310, "./neo-c.h", 177, 3434)), "./neo-c.h", 177, 3435))->item=item;
                            ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 179, 3436)), "./neo-c.h", 179, 3437))->tail, "./neo-c.h", 179, 3438)), "./neo-c.h", 179, 3439))->next=litem_310;
                            ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 180, 3440)), "./neo-c.h", 180, 3441))->tail=litem_310;
                        }
                    }
                    ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 183, 3442)), "./neo-c.h", 183, 3443))->len++;
                    __result195__ = __result_obj__ = self;
                    return __result195__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__;
void* right_value322;
void* right_value323;
struct list$1sClassp* __exception_result_var_b409;
struct list$1sClassp* result_314;
struct list_item$1sClassp* it_315;
_Bool _while_condtional44;
struct list$1sClassp* __exception_result_var_b410;
struct list$1sClassp* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&result_314, 0, sizeof(struct list$1sClassp*));
memset(&it_315, 0, sizeof(struct list_item$1sClassp*));
                    result_314=(struct list$1sClassp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 945, 3493),__exception_result_var_b409=((struct list$1sClassp*)(right_value323=list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)(right_value322=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./neo-c.h", 945, "list$1sClassp"))), "./neo-c.h", 945, 3492)))))), come_pop_stackframe(), __exception_result_var_b409));
                    come_call_finalizer3(right_value322,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value323,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_315=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 947, 3494)), "./neo-c.h", 947, 3495))->tail;
                    while(_while_condtional44=it_315!=((void*)0),                    _while_condtional44) {
                        (come_push_stackframe("./neo-c.h", 949, 3544),__exception_result_var_b410=list$1sClassp_push_back(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(result_314, "./neo-c.h", 949, 3496)), "./neo-c.h", 949, 3497)),((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(it_315, "./neo-c.h", 949, 3542)), "./neo-c.h", 949, 3543))->item), come_pop_stackframe(), __exception_result_var_b410);
                        it_315=((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(it_315, "./neo-c.h", 950, 3545)), "./neo-c.h", 950, 3546))->prev;
                    }
                    __result197__ = __result_obj__ = result_314;
                    come_call_finalizer3(result_314,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result197__;
                    come_call_finalizer3(result_314,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional377;
void* right_value324;
struct list_item$1sClassp* litem_316;
_Bool _if_conditional378;
void* right_value325;
struct list_item$1sClassp* litem_317;
void* right_value326;
struct list_item$1sClassp* litem_318;
struct list$1sClassp* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
memset(&litem_316, 0, sizeof(struct list_item$1sClassp*));
right_value325 = (void*)0;
memset(&litem_317, 0, sizeof(struct list_item$1sClassp*));
right_value326 = (void*)0;
memset(&litem_318, 0, sizeof(struct list_item$1sClassp*));
                            if(_if_conditional377=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 222, 3498)), "./neo-c.h", 222, 3499))->len==0,                            _if_conditional377) {
                                litem_316=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value324=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 223, "list_item$1sClassp"))));
                                come_call_finalizer3(right_value324,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_316, "./neo-c.h", 225, 3500)), "./neo-c.h", 225, 3501))->prev=((void*)0);
                                ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_316, "./neo-c.h", 226, 3502)), "./neo-c.h", 226, 3503))->next=((void*)0);
                                ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_316, "./neo-c.h", 227, 3504)), "./neo-c.h", 227, 3505))->item=item;
                                ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 229, 3506)), "./neo-c.h", 229, 3507))->tail=litem_316;
                                ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 230, 3508)), "./neo-c.h", 230, 3509))->head=litem_316;
                            }
                            else {
                                if(_if_conditional378=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 232, 3510)), "./neo-c.h", 232, 3511))->len==1,                                _if_conditional378) {
                                    litem_317=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value325=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 233, "list_item$1sClassp"))));
                                    come_call_finalizer3(right_value325,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_317, "./neo-c.h", 235, 3512)), "./neo-c.h", 235, 3513))->prev=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 235, 3514)), "./neo-c.h", 235, 3515))->head;
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_317, "./neo-c.h", 236, 3516)), "./neo-c.h", 236, 3517))->next=((void*)0);
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_317, "./neo-c.h", 237, 3518)), "./neo-c.h", 237, 3519))->item=item;
                                    ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 239, 3520)), "./neo-c.h", 239, 3521))->tail=litem_317;
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 240, 3522)), "./neo-c.h", 240, 3523))->head, "./neo-c.h", 240, 3524)), "./neo-c.h", 240, 3525))->next=litem_317;
                                }
                                else {
                                    litem_318=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(right_value326=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 243, "list_item$1sClassp"))));
                                    come_call_finalizer3(right_value326,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_318, "./neo-c.h", 245, 3526)), "./neo-c.h", 245, 3527))->prev=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 245, 3528)), "./neo-c.h", 245, 3529))->tail;
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_318, "./neo-c.h", 246, 3530)), "./neo-c.h", 246, 3531))->next=((void*)0);
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(litem_318, "./neo-c.h", 247, 3532)), "./neo-c.h", 247, 3533))->item=item;
                                    ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 249, 3534)), "./neo-c.h", 249, 3535))->tail, "./neo-c.h", 249, 3536)), "./neo-c.h", 249, 3537))->next=litem_318;
                                    ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 250, 3538)), "./neo-c.h", 250, 3539))->tail=litem_318;
                                }
                            }
                            ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 253, 3540)), "./neo-c.h", 253, 3541))->len++;
                            __result196__ = __result_obj__ = self;
                            return __result196__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional379;
struct sClass* result_320;
void* __exception_result_var_b412;
struct sClass* __result198__;
_Bool _if_conditional380;
struct sClass* __result199__;
struct sClass* result_321;
void* __exception_result_var_b413;
struct sClass* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sClass*));
memset(&result_321, 0, sizeof(struct sClass*));
                    if(_if_conditional379=self==((void*)0),                    _if_conditional379) {
                        (come_push_stackframe("./neo-c.h", 284, 3550),__exception_result_var_b412=memset(&result_320,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b412);
                        __result198__ = __result_obj__ = result_320;
                        return __result198__;
                    }
                    ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 287, 3551)), "./neo-c.h", 287, 3552))->it=((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 287, 3553)), "./neo-c.h", 287, 3554))->head;
                    if(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 289, 3555)), "./neo-c.h", 289, 3556))->it) {
                        __result199__ = __result_obj__ = ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 290, 3557)), "./neo-c.h", 290, 3558))->it, "./neo-c.h", 290, 3559)), "./neo-c.h", 290, 3560))->item;
                        return __result199__;
                    }
                    (come_push_stackframe("./neo-c.h", 294, 3561),__exception_result_var_b413=memset(&result_321,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b413);
                    __result200__ = __result_obj__ = result_321;
                    return __result200__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
void* __result_obj__;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result201__ = self==((void*)0)||((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 317, 3565)), "./neo-c.h", 317, 3566))->it==((void*)0);
                    return __result201__;
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__;
_Bool _if_conditional381;
struct sClass* result_323;
void* __exception_result_var_b416;
struct sClass* __result202__;
_Bool _if_conditional382;
struct sClass* __result203__;
struct sClass* result_324;
void* __exception_result_var_b417;
struct sClass* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_323, 0, sizeof(struct sClass*));
memset(&result_324, 0, sizeof(struct sClass*));
                    if(_if_conditional381=self==((void*)0)||((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 299, 3570)), "./neo-c.h", 299, 3571))->it==((void*)0),                    _if_conditional381) {
                        (come_push_stackframe("./neo-c.h", 301, 3572),__exception_result_var_b416=memset(&result_323,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b416);
                        __result202__ = __result_obj__ = result_323;
                        return __result202__;
                    }
                    ((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 305, 3573)), "./neo-c.h", 305, 3574))->it=((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 305, 3575)), "./neo-c.h", 305, 3576))->it, "./neo-c.h", 305, 3577)), "./neo-c.h", 305, 3578))->next;
                    if(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 307, 3579)), "./neo-c.h", 307, 3580))->it) {
                        __result203__ = __result_obj__ = ((struct list_item$1sClassp*)come_null_check(((struct list_item$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(((struct list$1sClassp*)come_null_check(self, "./neo-c.h", 308, 3581)), "./neo-c.h", 308, 3582))->it, "./neo-c.h", 308, 3583)), "./neo-c.h", 308, 3584))->item;
                        return __result203__;
                    }
                    (come_push_stackframe("./neo-c.h", 312, 3585),__exception_result_var_b417=memset(&result_324,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b417);
                    __result204__ = __result_obj__ = result_324;
                    return __result204__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_339;
_Bool _if_conditional387;
_Bool _if_conditional388;
int i_340;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_339, 0, sizeof(int));
memset(&i_340, 0, sizeof(int));
                            for(                            i_339=0;                            i_339<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1111, 3698)), "./neo-c.h", 1111, 3699))->size;                            i_339++                            ){
                                if(_if_conditional387=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1112, 3700)), "./neo-c.h", 1112, 3701))->item_existance, "./neo-c.h", 1112, 3702))[i_339],                                _if_conditional387) {
                                    if(_if_conditional388=1,                                    _if_conditional388) {
                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 3703)), "./neo-c.h", 1114, 3704))->items, "./neo-c.h", 1114, 3705))[i_339] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 3703)), "./neo-c.h", 1114, 3704))->items, "./neo-c.h", 1114, 3705))[i_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                            (come_push_stackframe("./neo-c.h", 1118,3708),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1118, 3706)), "./neo-c.h", 1118, 3707))->items),come_pop_stackframe());
                            for(                            i_340=0;                            i_340<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1120, 3709)), "./neo-c.h", 1120, 3710))->size;                            i_340++                            ){
                                if(_if_conditional389=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1121, 3711)), "./neo-c.h", 1121, 3712))->item_existance, "./neo-c.h", 1121, 3713))[i_340],                                _if_conditional389) {
                                    if(_if_conditional390=1,                                    _if_conditional390) {
                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 3714)), "./neo-c.h", 1123, 3715))->keys, "./neo-c.h", 1123, 3716))[i_340] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 3714)), "./neo-c.h", 1123, 3715))->keys, "./neo-c.h", 1123, 3716))[i_340], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                            (come_push_stackframe("./neo-c.h", 1127,3719),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1127, 3717)), "./neo-c.h", 1127, 3718))->keys),come_pop_stackframe());
                            come_call_finalizer3(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1129, 3720)), "./neo-c.h", 1129, 3721))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 3726)), "./neo-c.h", 1131, 3727))->item_existance = come_decrement_ref_count2(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 3726)), "./neo-c.h", 1131, 3727))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_341;
_Bool _while_condtional46;
struct list_item$1charp* prev_it_342;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_341, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_342, 0, sizeof(struct list_item$1charp*));
                                it_341=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 3722)), "./neo-c.h", 120, 3723))->head;
                                while(_while_condtional46=it_341!=((void*)0),                                _while_condtional46) {
                                    prev_it_342=it_341;
                                    it_341=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_341, "./neo-c.h", 123, 3724)), "./neo-c.h", 123, 3725))->next;
                                    come_call_finalizer3(prev_it_342,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional407;
void* right_value345;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj99;
_Bool _if_conditional408;
void* right_value346;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj100;
void* right_value347;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj101;
struct list$1sNodeph* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
memset(&litem_361, 0, sizeof(struct list_item$1sNodeph*));
right_value346 = (void*)0;
memset(&litem_362, 0, sizeof(struct list_item$1sNodeph*));
right_value347 = (void*)0;
memset(&litem_363, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional407=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 222, 3842)), "./neo-c.h", 222, 3843))->len==0,                        _if_conditional407) {
                            litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 223, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value345,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_361, "./neo-c.h", 225, 3844)), "./neo-c.h", 225, 3845))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_361, "./neo-c.h", 226, 3846)), "./neo-c.h", 226, 3847))->next=((void*)0);
                            __dec_obj99=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_361, "./neo-c.h", 227, 3848)), "./neo-c.h", 227, 3849))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_361, "./neo-c.h", 227, 3848)), "./neo-c.h", 227, 3849))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 229, 3850)), "./neo-c.h", 229, 3851))->tail=litem_361;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 230, 3852)), "./neo-c.h", 230, 3853))->head=litem_361;
                        }
                        else {
                            if(_if_conditional408=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 232, 3854)), "./neo-c.h", 232, 3855))->len==1,                            _if_conditional408) {
                                litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 233, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value346,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_362, "./neo-c.h", 235, 3856)), "./neo-c.h", 235, 3857))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 235, 3858)), "./neo-c.h", 235, 3859))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_362, "./neo-c.h", 236, 3860)), "./neo-c.h", 236, 3861))->next=((void*)0);
                                __dec_obj100=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_362, "./neo-c.h", 237, 3862)), "./neo-c.h", 237, 3863))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_362, "./neo-c.h", 237, 3862)), "./neo-c.h", 237, 3863))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 239, 3864)), "./neo-c.h", 239, 3865))->tail=litem_362;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 240, 3866)), "./neo-c.h", 240, 3867))->head, "./neo-c.h", 240, 3868)), "./neo-c.h", 240, 3869))->next=litem_362;
                            }
                            else {
                                litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 243, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value347,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_363, "./neo-c.h", 245, 3870)), "./neo-c.h", 245, 3871))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 245, 3872)), "./neo-c.h", 245, 3873))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_363, "./neo-c.h", 246, 3874)), "./neo-c.h", 246, 3875))->next=((void*)0);
                                __dec_obj101=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_363, "./neo-c.h", 247, 3876)), "./neo-c.h", 247, 3877))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_363, "./neo-c.h", 247, 3876)), "./neo-c.h", 247, 3877))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 249, 3878)), "./neo-c.h", 249, 3879))->tail, "./neo-c.h", 249, 3880)), "./neo-c.h", 249, 3881))->next=litem_363;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 250, 3882)), "./neo-c.h", 250, 3883))->tail=litem_363;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 253, 3884)), "./neo-c.h", 253, 3885))->len++;
                        __result205__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result205__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__;
struct sClassModule* default_value_374;
void* __exception_result_var_b478;
unsigned int __exception_result_var_b479;
unsigned int hash_375;
unsigned int it_376;
_Bool _while_condtional50;
_Bool _if_conditional416;
_Bool __exception_result_var_b480;
_Bool _if_conditional417;
struct sClassModule* __result206__;
_Bool _if_conditional422;
_Bool _if_conditional423;
struct sClassModule* __result207__;
struct sClassModule* __result208__;
struct sClassModule* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_374, 0, sizeof(struct sClassModule*));
memset(&hash_375, 0, sizeof(unsigned int));
memset(&it_376, 0, sizeof(unsigned int));
                                (come_push_stackframe("./neo-c.h", 1526, 3959),__exception_result_var_b478=memset(&default_value_374,0,sizeof(struct sClassModule*)), come_pop_stackframe(), __exception_result_var_b478);
                                hash_375=(come_push_stackframe("./neo-c.h", 1528, 3962),__exception_result_var_b479=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 3960)), "./neo-c.h", 1528, 3961))), come_pop_stackframe(), __exception_result_var_b479)%((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1528, 3963)), "./neo-c.h", 1528, 3964))->size;
                                it_376=hash_375;
                                while(_while_condtional50=(_Bool)1,                                _while_condtional50) {
                                    if(_if_conditional416=((_Bool*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1532, 3965)), "./neo-c.h", 1532, 3966))->item_existance, "./neo-c.h", 1532, 3967))[it_376],                                    _if_conditional416) {
                                        if(_if_conditional417=(come_push_stackframe("./neo-c.h", 1534, 3973),__exception_result_var_b480=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1534, 3968)), "./neo-c.h", 1534, 3969))->keys, "./neo-c.h", 1534, 3970))[it_376], "./neo-c.h", 1534, 3971)), "./neo-c.h", 1534, 3972)),key), come_pop_stackframe(), __exception_result_var_b480),                                        _if_conditional417) {
                                            __result206__ = __result_obj__ = ((struct sClassModule**)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1536, 3974)), "./neo-c.h", 1536, 3975))->items, "./neo-c.h", 1536, 3976))[it_376];
                                            come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result206__;
                                        }
                                        it_376++;
                                        if(_if_conditional422=it_376>=((struct map$2charphsClassModuleph*)come_null_check(((struct map$2charphsClassModuleph*)come_null_check(self, "./neo-c.h", 1541, 3993)), "./neo-c.h", 1541, 3994))->size,                                        _if_conditional422) {
                                            it_376=0;
                                        }
                                        else {
                                            if(_if_conditional423=it_376==hash_375,                                            _if_conditional423) {
                                                __result207__ = __result_obj__ = default_value_374;
                                                come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result207__;
                                            }
                                        }
                                    }
                                    else {
                                        __result208__ = __result_obj__ = default_value_374;
                                        come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result208__;
                                    }
                                }
                                __result209__ = __result_obj__ = default_value_374;
                                come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                                return __result209__;
                                come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
void* __result_obj__;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional418=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3977)), "sClassModule_finalize", 0, 3978))->mName!=((void*)0),                                                _if_conditional418) {
                                                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3979)), "sClassModule_finalize", 0, 3980))->mName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 0, 3979)), "sClassModule_finalize", 0, 3980))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional419=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3981)), "sClassModule_finalize", 1, 3982))->mText!=((void*)0),                                                _if_conditional419) {
                                                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3983)), "sClassModule_finalize", 1, 3984))->mText = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 1, 3983)), "sClassModule_finalize", 1, 3984))->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional420=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 3985)), "sClassModule_finalize", 2, 3986))->mParams!=((void*)0),                                                _if_conditional420) {
                                                    come_call_finalizer3(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 2, 3987)), "sClassModule_finalize", 2, 3988))->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional421=self!=((void*)0)&&((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3989)), "sClassModule_finalize", 3, 3990))->mSName!=((void*)0),                                                _if_conditional421) {
                                                    ((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3991)), "sClassModule_finalize", 3, 3992))->mSName = come_decrement_ref_count2(((struct sClassModule*)come_null_check(((struct sClassModule*)come_null_check(self, "sClassModule_finalize", 3, 3991)), "sClassModule_finalize", 3, 3992))->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional425;
int __result211__;
int __result212__;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional425=self==((void*)0),                                _if_conditional425) {
                                    __result211__ = 0;
                                    return __result211__;
                                }
                                __result212__ = ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 360, 4006)), "./neo-c.h", 360, 4007))->len;
                                return __result212__;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__;
void* right_value362;
void* right_value363;
void* right_value364;
int i_378;
void* right_value365;
void* right_value366;
struct list$1charp* __exception_result_var_b485;
struct list$1charp* __dec_obj103;
struct map$2charphcharph* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&i_378, 0, sizeof(int));
right_value365 = (void*)0;
right_value366 = (void*)0;
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1068, 4017)), "./neo-c.h", 1068, 4018))->keys=(char**)come_increment_ref_count(((char**)(right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1068, "char*%"))));
                                right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1069, 4019)), "./neo-c.h", 1069, 4020))->items=(char**)come_increment_ref_count(((char**)(right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1069, "char*%"))));
                                right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1070, 4021)), "./neo-c.h", 1070, 4022))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1070, "bool"))));
                                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_378=0;                                i_378<128;                                i_378++                                ){
                                    ((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1074, 4023)), "./neo-c.h", 1074, 4024))->item_existance, "./neo-c.h", 1074, 4025))[i_378]=(_Bool)0;
                                }
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1077, 4026)), "./neo-c.h", 1077, 4027))->size=128;
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1078, 4028)), "./neo-c.h", 1078, 4029))->len=0;
                                __dec_obj103=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1080, 4030)), "./neo-c.h", 1080, 4031))->key_list;
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1080, 4030)), "./neo-c.h", 1080, 4031))->key_list=(struct list$1charp*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 1080, 4039),__exception_result_var_b485=((struct list$1charp*)(right_value366=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)come_null_check(((struct list$1charp*)(right_value365=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1080, "list$1charp"))), "./neo-c.h", 1080, 4032)))))), come_pop_stackframe(), __exception_result_var_b485));
                                come_call_finalizer3(__dec_obj103,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value365,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value366,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1082, 4040)), "./neo-c.h", 1082, 4041))->it=0;
                                __result214__ = __result_obj__ = self;
                                come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result214__;
                                come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 101, 4033)), "./neo-c.h", 101, 4034))->head=((void*)0);
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 102, 4035)), "./neo-c.h", 102, 4036))->tail=((void*)0);
                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 103, 4037)), "./neo-c.h", 103, 4038))->len=0;
                                    __result213__ = __result_obj__ = self;
                                    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result213__;
                                    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
void* __result_obj__;
int i_379;
_Bool _if_conditional427;
_Bool _if_conditional428;
int i_380;
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_379, 0, sizeof(int));
memset(&i_380, 0, sizeof(int));
                                    for(                                    i_379=0;                                    i_379<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1111, 4042)), "./neo-c.h", 1111, 4043))->size;                                    i_379++                                    ){
                                        if(_if_conditional427=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1112, 4044)), "./neo-c.h", 1112, 4045))->item_existance, "./neo-c.h", 1112, 4046))[i_379],                                        _if_conditional427) {
                                            if(_if_conditional428=1,                                            _if_conditional428) {
                                                ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 4047)), "./neo-c.h", 1114, 4048))->items, "./neo-c.h", 1114, 4049))[i_379] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1114, 4047)), "./neo-c.h", 1114, 4048))->items, "./neo-c.h", 1114, 4049))[i_379], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                        }
                                    }
                                    (come_push_stackframe("./neo-c.h", 1118,4052),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1118, 4050)), "./neo-c.h", 1118, 4051))->items),come_pop_stackframe());
                                    for(                                    i_380=0;                                    i_380<((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1120, 4053)), "./neo-c.h", 1120, 4054))->size;                                    i_380++                                    ){
                                        if(_if_conditional429=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1121, 4055)), "./neo-c.h", 1121, 4056))->item_existance, "./neo-c.h", 1121, 4057))[i_380],                                        _if_conditional429) {
                                            if(_if_conditional430=1,                                            _if_conditional430) {
                                                ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 4058)), "./neo-c.h", 1123, 4059))->keys, "./neo-c.h", 1123, 4060))[i_380] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1123, 4058)), "./neo-c.h", 1123, 4059))->keys, "./neo-c.h", 1123, 4060))[i_380], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                        }
                                    }
                                    (come_push_stackframe("./neo-c.h", 1127,4063),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1127, 4061)), "./neo-c.h", 1127, 4062))->keys),come_pop_stackframe());
                                    come_call_finalizer3(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1129, 4064)), "./neo-c.h", 1129, 4065))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 4066)), "./neo-c.h", 1131, 4067))->item_existance = come_decrement_ref_count2(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1131, 4066)), "./neo-c.h", 1131, 4067))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional431;
char* result_383;
void* __exception_result_var_b487;
char* __result215__;
_Bool _if_conditional432;
char* __result216__;
char* result_384;
void* __exception_result_var_b488;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_383, 0, sizeof(char*));
memset(&result_384, 0, sizeof(char*));
                                if(_if_conditional431=self==((void*)0),                                _if_conditional431) {
                                    (come_push_stackframe("./neo-c.h", 284, 4073),__exception_result_var_b487=memset(&result_383,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b487);
                                    __result215__ = __result_obj__ = result_383;
                                    return __result215__;
                                }
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 4074)), "./neo-c.h", 287, 4075))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 4076)), "./neo-c.h", 287, 4077))->head;
                                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 4078)), "./neo-c.h", 289, 4079))->it) {
                                    __result216__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 4080)), "./neo-c.h", 290, 4081))->it, "./neo-c.h", 290, 4082)), "./neo-c.h", 290, 4083))->item;
                                    return __result216__;
                                }
                                (come_push_stackframe("./neo-c.h", 294, 4084),__exception_result_var_b488=memset(&result_384,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b488);
                                __result217__ = __result_obj__ = result_384;
                                return __result217__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result218__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 4088)), "./neo-c.h", 317, 4089))->it==((void*)0);
                                return __result218__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional433;
char* result_386;
void* __exception_result_var_b491;
char* __result219__;
_Bool _if_conditional434;
char* __result220__;
char* result_387;
void* __exception_result_var_b492;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_386, 0, sizeof(char*));
memset(&result_387, 0, sizeof(char*));
                                if(_if_conditional433=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 4093)), "./neo-c.h", 299, 4094))->it==((void*)0),                                _if_conditional433) {
                                    (come_push_stackframe("./neo-c.h", 301, 4095),__exception_result_var_b491=memset(&result_386,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b491);
                                    __result219__ = __result_obj__ = result_386;
                                    return __result219__;
                                }
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 4096)), "./neo-c.h", 305, 4097))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 4098)), "./neo-c.h", 305, 4099))->it, "./neo-c.h", 305, 4100)), "./neo-c.h", 305, 4101))->next;
                                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 4102)), "./neo-c.h", 307, 4103))->it) {
                                    __result220__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 4104)), "./neo-c.h", 308, 4105))->it, "./neo-c.h", 308, 4106)), "./neo-c.h", 308, 4107))->item;
                                    return __result220__;
                                }
                                (come_push_stackframe("./neo-c.h", 312, 4108),__exception_result_var_b492=memset(&result_387,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b492);
                                __result221__ = __result_obj__ = result_387;
                                return __result221__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional435;
struct list_item$1charph* it_388;
int i_389;
_Bool _while_condtional51;
_Bool _if_conditional436;
char* __result222__;
char* default_value_390;
void* __exception_result_var_b494;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_388, 0, sizeof(struct list_item$1charph*));
memset(&i_389, 0, sizeof(int));
memset(&default_value_390, 0, sizeof(char*));
                                    if(_if_conditional435=position<0,                                    _if_conditional435) {
                                        position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 676, 4114)), "./neo-c.h", 676, 4115))->len;
                                    }
                                    it_388=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 679, 4116)), "./neo-c.h", 679, 4117))->head;
                                    i_389=0;
                                    while(_while_condtional51=it_388!=((void*)0),                                    _while_condtional51) {
                                        if(_if_conditional436=position==i_389,                                        _if_conditional436) {
                                            __result222__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_388, "./neo-c.h", 683, 4118)), "./neo-c.h", 683, 4119))->item;
                                            return __result222__;
                                        }
                                        it_388=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_388, "./neo-c.h", 685, 4120)), "./neo-c.h", 685, 4121))->next;
                                        i_389++;
                                    }
                                    (come_push_stackframe("./neo-c.h", 690, 4122),__exception_result_var_b494=memset(&default_value_390,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b494);
                                    __result223__ = __result_obj__ = default_value_390;
                                    default_value_390 = come_decrement_ref_count2(default_value_390, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result223__;
                                    default_value_390 = come_decrement_ref_count2(default_value_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
struct map$2charphcharph* __exception_result_var_b520;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
                                    (come_push_stackframe("./neo-c.h", 1557, 4344),__exception_result_var_b520=map$2charphcharph_insert(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1557, 4125)), "./neo-c.h", 1557, 4126)),(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b520);
                                    __result236__ = __result_obj__ = item;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    return __result236__;
                                    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
_Bool _if_conditional437;
unsigned int __exception_result_var_b510;
unsigned int hash_408;
unsigned int it_409;
_Bool _while_condtional54;
_Bool _if_conditional449;
_Bool __exception_result_var_b511;
_Bool _if_conditional450;
_Bool _if_conditional451;
struct list$1charp* __exception_result_var_b512;
struct list$1charp* __exception_result_var_b513;
_Bool _if_conditional452;
_Bool _if_conditional453;
_Bool _if_conditional454;
int __exception_result_var_b514;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool same_key_exist_410;
char* __exception_result_var_b515;
char* it2_411;
_Bool __exception_result_var_b516;
char* __exception_result_var_b517;
_Bool __exception_result_var_b518;
_Bool _if_conditional457;
_Bool _if_conditional458;
struct list$1charp* __exception_result_var_b519;
struct map$2charphcharph* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_408, 0, sizeof(unsigned int));
memset(&it_409, 0, sizeof(unsigned int));
memset(&same_key_exist_410, 0, sizeof(_Bool));
memset(&it2_411, 0, sizeof(char*));
                                        if(_if_conditional437=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1371, 4127)), "./neo-c.h", 1371, 4128))->len*10>=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1371, 4129)), "./neo-c.h", 1371, 4130))->size,                                        _if_conditional437) {
                                            (come_push_stackframe("./neo-c.h", 1372,4250),map$2charphcharph_rehash(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1372, 4131)), "./neo-c.h", 1372, 4132))),come_pop_stackframe());
                                        }
                                        hash_408=(come_push_stackframe("./neo-c.h", 1374, 4253),__exception_result_var_b510=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 4251)), "./neo-c.h", 1374, 4252))), come_pop_stackframe(), __exception_result_var_b510)%((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1374, 4254)), "./neo-c.h", 1374, 4255))->size;
                                        it_409=hash_408;
                                        while(_while_condtional54=(_Bool)1,                                        _while_condtional54) {
                                            if(_if_conditional449=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1378, 4256)), "./neo-c.h", 1378, 4257))->item_existance, "./neo-c.h", 1378, 4258))[it_409],                                            _if_conditional449) {
                                                if(_if_conditional450=(come_push_stackframe("./neo-c.h", 1380, 4264),__exception_result_var_b511=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1380, 4259)), "./neo-c.h", 1380, 4260))->keys, "./neo-c.h", 1380, 4261))[it_409], "./neo-c.h", 1380, 4262)), "./neo-c.h", 1380, 4263)),key), come_pop_stackframe(), __exception_result_var_b511),                                                _if_conditional450) {
                                                    if(_if_conditional451=1,                                                    _if_conditional451) {
                                                        (come_push_stackframe("./neo-c.h", 1383, 4272),__exception_result_var_b512=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1383, 4265)), "./neo-c.h", 1383, 4266))->key_list, "./neo-c.h", 1383, 4267)), "./neo-c.h", 1383, 4268)),((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1383, 4269)), "./neo-c.h", 1383, 4270))->keys, "./neo-c.h", 1383, 4271))[it_409]), come_pop_stackframe(), __exception_result_var_b512);
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1384, 4273)), "./neo-c.h", 1384, 4274))->keys, "./neo-c.h", 1384, 4275))[it_409] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1384, 4273)), "./neo-c.h", 1384, 4274))->keys, "./neo-c.h", 1384, 4275))[it_409], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1385, 4276)), "./neo-c.h", 1385, 4277))->keys, "./neo-c.h", 1385, 4278))[it_409]=(char*)come_increment_ref_count(key);
                                                    }
                                                    else {
                                                        (come_push_stackframe("./neo-c.h", 1388, 4286),__exception_result_var_b513=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1388, 4279)), "./neo-c.h", 1388, 4280))->key_list, "./neo-c.h", 1388, 4281)), "./neo-c.h", 1388, 4282)),((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1388, 4283)), "./neo-c.h", 1388, 4284))->keys, "./neo-c.h", 1388, 4285))[it_409]), come_pop_stackframe(), __exception_result_var_b513);
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1389, 4287)), "./neo-c.h", 1389, 4288))->keys, "./neo-c.h", 1389, 4289))[it_409]=key;
                                                    }
                                                    if(_if_conditional452=1,                                                    _if_conditional452) {
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1392, 4290)), "./neo-c.h", 1392, 4291))->items, "./neo-c.h", 1392, 4292))[it_409] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1392, 4290)), "./neo-c.h", 1392, 4291))->items, "./neo-c.h", 1392, 4292))[it_409], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1393, 4293)), "./neo-c.h", 1393, 4294))->items, "./neo-c.h", 1393, 4295))[it_409]=(char*)come_increment_ref_count(item);
                                                    }
                                                    else {
                                                        ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1396, 4296)), "./neo-c.h", 1396, 4297))->items, "./neo-c.h", 1396, 4298))[it_409]=item;
                                                    }
                                                    break;
                                                }
                                                it_409++;
                                                if(_if_conditional453=it_409>=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1403, 4299)), "./neo-c.h", 1403, 4300))->size,                                                _if_conditional453) {
                                                    it_409=0;
                                                }
                                                else {
                                                    if(_if_conditional454=it_409==hash_408,                                                    _if_conditional454) {
                                                        (come_push_stackframe("./neo-c.h", 1407, 4301),__exception_result_var_b514=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b514);
                                                        (come_push_stackframe("./neo-c.h", 1408,4302),stackframe(),come_pop_stackframe());
                                                        (come_push_stackframe("./neo-c.h", 1409,4303),exit(2),come_pop_stackframe());
                                                    }
                                                }
                                            }
                                            else {
                                                ((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1413, 4304)), "./neo-c.h", 1413, 4305))->item_existance, "./neo-c.h", 1413, 4306))[it_409]=(_Bool)1;
                                                if(_if_conditional455=1,                                                _if_conditional455) {
                                                    ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1415, 4307)), "./neo-c.h", 1415, 4308))->keys, "./neo-c.h", 1415, 4309))[it_409]=(char*)come_increment_ref_count(key);
                                                }
                                                else {
                                                    ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1418, 4310)), "./neo-c.h", 1418, 4311))->keys, "./neo-c.h", 1418, 4312))[it_409]=key;
                                                }
                                                if(_if_conditional456=1,                                                _if_conditional456) {
                                                    ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1421, 4313)), "./neo-c.h", 1421, 4314))->items, "./neo-c.h", 1421, 4315))[it_409]=(char*)come_increment_ref_count(item);
                                                }
                                                else {
                                                    ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1424, 4316)), "./neo-c.h", 1424, 4317))->items, "./neo-c.h", 1424, 4318))[it_409]=item;
                                                }
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1427, 4319)), "./neo-c.h", 1427, 4320))->len++;
                                                break;
                                            }
                                        }
                                        same_key_exist_410=(_Bool)0;
                                        for(                                        it2_411=(come_push_stackframe("./neo-c.h", 1434, 4325),__exception_result_var_b515=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1434, 4321)), "./neo-c.h", 1434, 4322))->key_list, "./neo-c.h", 1434, 4323)), "./neo-c.h", 1434, 4324))), come_pop_stackframe(), __exception_result_var_b515);                                        !(come_push_stackframe("./neo-c.h", 1434, 4330),__exception_result_var_b516=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1434, 4326)), "./neo-c.h", 1434, 4327))->key_list, "./neo-c.h", 1434, 4328)), "./neo-c.h", 1434, 4329))), come_pop_stackframe(), __exception_result_var_b516);                                        it2_411=(come_push_stackframe("./neo-c.h", 1434, 4335),__exception_result_var_b517=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1434, 4331)), "./neo-c.h", 1434, 4332))->key_list, "./neo-c.h", 1434, 4333)), "./neo-c.h", 1434, 4334))), come_pop_stackframe(), __exception_result_var_b517)                                        ){
                                            if(_if_conditional457=(come_push_stackframe("./neo-c.h", 1436, 4338),__exception_result_var_b518=string_equals(((char*)come_null_check(((char*)come_null_check(it2_411, "./neo-c.h", 1436, 4336)), "./neo-c.h", 1436, 4337)),key), come_pop_stackframe(), __exception_result_var_b518),                                            _if_conditional457) {
                                                same_key_exist_410=(_Bool)1;
                                            }
                                        }
                                        if(_if_conditional458=!same_key_exist_410,                                        _if_conditional458) {
                                            (come_push_stackframe("./neo-c.h", 1442, 4343),__exception_result_var_b519=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1442, 4339)), "./neo-c.h", 1442, 4340))->key_list, "./neo-c.h", 1442, 4341)), "./neo-c.h", 1442, 4342)),key), come_pop_stackframe(), __exception_result_var_b519);
                                        }
                                        __result235__ = __result_obj__ = self;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        return __result235__;
                                        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
void* __result_obj__;
int size_391;
void* right_value368;
char** keys_392;
void* right_value369;
char** items_393;
void* right_value370;
_Bool* item_existance_394;
int len_395;
char* __exception_result_var_b498;
char* it_398;
_Bool __exception_result_var_b499;
char* __exception_result_var_b502;
char* default_value_401;
void* __exception_result_var_b503;
char* __exception_result_var_b506;
char* it2_402;
unsigned int __exception_result_var_b507;
unsigned int hash_405;
int n_406;
_Bool _while_condtional53;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
int __exception_result_var_b508;
char* default_value_407;
char* __exception_result_var_b509;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_391, 0, sizeof(int));
right_value368 = (void*)0;
memset(&keys_392, 0, sizeof(char**));
right_value369 = (void*)0;
memset(&items_393, 0, sizeof(char**));
right_value370 = (void*)0;
memset(&item_existance_394, 0, sizeof(_Bool*));
memset(&len_395, 0, sizeof(int));
memset(&it_398, 0, sizeof(char*));
memset(&default_value_401, 0, sizeof(char*));
memset(&it2_402, 0, sizeof(char*));
memset(&hash_405, 0, sizeof(unsigned int));
memset(&n_406, 0, sizeof(int));
memset(&default_value_407, 0, sizeof(char*));
                                                size_391=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1318, 4133)), "./neo-c.h", 1318, 4134))->size*10;
                                                keys_392=(char**)come_increment_ref_count(((char**)(right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(size_391)), "./neo-c.h", 1319, "char*%"))));
                                                right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                items_393=(char**)come_increment_ref_count(((char**)(right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(size_391)), "./neo-c.h", 1320, "char*%"))));
                                                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                item_existance_394=(_Bool*)come_increment_ref_count(((_Bool*)(right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_391)), "./neo-c.h", 1321, "bool"))));
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                len_395=0;
                                                for(                                                it_398=(come_push_stackframe("./neo-c.h", 1325, 4157),__exception_result_var_b498=map$2charphcharph_begin(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1325, 4135)), "./neo-c.h", 1325, 4136))), come_pop_stackframe(), __exception_result_var_b498);                                                !(come_push_stackframe("./neo-c.h", 1325, 4166),__exception_result_var_b499=map$2charphcharph_end(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1325, 4158)), "./neo-c.h", 1325, 4159))), come_pop_stackframe(), __exception_result_var_b499);                                                it_398=(come_push_stackframe("./neo-c.h", 1325, 4195),__exception_result_var_b502=map$2charphcharph_next(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1325, 4167)), "./neo-c.h", 1325, 4168))), come_pop_stackframe(), __exception_result_var_b502)                                                ){
                                                    (come_push_stackframe("./neo-c.h", 1327, 4196),__exception_result_var_b503=memset(&default_value_401,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b503);
                                                    it2_402=(come_push_stackframe("./neo-c.h", 1328, 4218),__exception_result_var_b506=map$2charphcharph_at(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1328, 4197)), "./neo-c.h", 1328, 4198)),it_398,default_value_401), come_pop_stackframe(), __exception_result_var_b506);
                                                    hash_405=(come_push_stackframe("./neo-c.h", 1329, 4221),__exception_result_var_b507=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_398, "./neo-c.h", 1329, 4219)), "./neo-c.h", 1329, 4220))), come_pop_stackframe(), __exception_result_var_b507)%size_391;
                                                    n_406=hash_405;
                                                    while(_while_condtional53=(_Bool)1,                                                    _while_condtional53) {
                                                        if(_if_conditional446=((_Bool*)come_null_check(item_existance_394, "./neo-c.h", 1333, 4222))[n_406],                                                        _if_conditional446) {
                                                            n_406++;
                                                            if(_if_conditional447=n_406>=size_391,                                                            _if_conditional447) {
                                                                n_406=0;
                                                            }
                                                            else {
                                                                if(_if_conditional448=n_406==hash_405,                                                                _if_conditional448) {
                                                                    (come_push_stackframe("./neo-c.h", 1341, 4223),__exception_result_var_b508=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b508);
                                                                    (come_push_stackframe("./neo-c.h", 1342,4224),stackframe(),come_pop_stackframe());
                                                                    (come_push_stackframe("./neo-c.h", 1343,4225),exit(2),come_pop_stackframe());
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            ((_Bool*)come_null_check(item_existance_394, "./neo-c.h", 1347, 4226))[n_406]=(_Bool)1;
                                                            ((char**)come_null_check(keys_392, "./neo-c.h", 1348, 4227))[n_406]=it_398;
                                                            ((char**)come_null_check(items_393, "./neo-c.h", 1350, 4228))[n_406]=(come_push_stackframe("./neo-c.h", 1350, 4231),__exception_result_var_b509=map$2charphcharph_at(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1350, 4229)), "./neo-c.h", 1350, 4230)),it_398,default_value_407), come_pop_stackframe(), __exception_result_var_b509);
                                                            len_395++;
                                                            break;
                                                        }
                                                    }
                                                }
                                                (come_push_stackframe("./neo-c.h", 1358,4234),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1358, 4232)), "./neo-c.h", 1358, 4233))->items),come_pop_stackframe());
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1359, 4235)), "./neo-c.h", 1359, 4236))->item_existance = come_decrement_ref_count2(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1359, 4235)), "./neo-c.h", 1359, 4236))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                (come_push_stackframe("./neo-c.h", 1360,4239),come_free((char*)((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1360, 4237)), "./neo-c.h", 1360, 4238))->keys),come_pop_stackframe());
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1362, 4240)), "./neo-c.h", 1362, 4241))->keys=keys_392;
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1363, 4242)), "./neo-c.h", 1363, 4243))->items=items_393;
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1364, 4244)), "./neo-c.h", 1364, 4245))->item_existance=item_existance_394;
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1366, 4246)), "./neo-c.h", 1366, 4247))->size=size_391;
                                                ((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1367, 4248)), "./neo-c.h", 1367, 4249))->len=len_395;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional438;
char* result_396;
void* __exception_result_var_b496;
char* __result224__;
_Bool _if_conditional439;
char* __result225__;
char* result_397;
void* __exception_result_var_b497;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_396, 0, sizeof(char*));
memset(&result_397, 0, sizeof(char*));
                                                    if(_if_conditional438=self==((void*)0),                                                    _if_conditional438) {
                                                        (come_push_stackframe("./neo-c.h", 1282, 4137),__exception_result_var_b496=memset(&result_396,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b496);
                                                        __result224__ = __result_obj__ = result_396;
                                                        return __result224__;
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1285, 4138)), "./neo-c.h", 1285, 4139))->key_list, "./neo-c.h", 1285, 4140)), "./neo-c.h", 1285, 4141))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1285, 4142)), "./neo-c.h", 1285, 4143))->key_list, "./neo-c.h", 1285, 4144)), "./neo-c.h", 1285, 4145))->head;
                                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1287, 4146)), "./neo-c.h", 1287, 4147))->key_list, "./neo-c.h", 1287, 4148)), "./neo-c.h", 1287, 4149))->it) {
                                                        __result225__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1288, 4150)), "./neo-c.h", 1288, 4151))->key_list, "./neo-c.h", 1288, 4152)), "./neo-c.h", 1288, 4153))->it, "./neo-c.h", 1288, 4154)), "./neo-c.h", 1288, 4155))->item;
                                                        return __result225__;
                                                    }
                                                    (come_push_stackframe("./neo-c.h", 1292, 4156),__exception_result_var_b497=memset(&result_397,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b497);
                                                    __result226__ = __result_obj__ = result_397;
                                                    return __result226__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
void* __result_obj__;
_Bool __result227__;
memset(&__result_obj__, 0, sizeof(void*));
                                                    __result227__ = self==((void*)0)||((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1314, 4160)), "./neo-c.h", 1314, 4161))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1314, 4162)), "./neo-c.h", 1314, 4163))->key_list, "./neo-c.h", 1314, 4164)), "./neo-c.h", 1314, 4165))->it==((void*)0);
                                                    return __result227__;
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__;
_Bool _if_conditional440;
char* result_399;
void* __exception_result_var_b500;
char* __result228__;
_Bool _if_conditional441;
char* __result229__;
char* result_400;
void* __exception_result_var_b501;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_399, 0, sizeof(char*));
memset(&result_400, 0, sizeof(char*));
                                                    if(_if_conditional440=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1297, 4169)), "./neo-c.h", 1297, 4170))->key_list, "./neo-c.h", 1297, 4171)), "./neo-c.h", 1297, 4172))->it==((void*)0),                                                    _if_conditional440) {
                                                        (come_push_stackframe("./neo-c.h", 1299, 4173),__exception_result_var_b500=memset(&result_399,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b500);
                                                        __result228__ = __result_obj__ = result_399;
                                                        return __result228__;
                                                    }
                                                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1302, 4174)), "./neo-c.h", 1302, 4175))->key_list, "./neo-c.h", 1302, 4176)), "./neo-c.h", 1302, 4177))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1302, 4178)), "./neo-c.h", 1302, 4179))->key_list, "./neo-c.h", 1302, 4180)), "./neo-c.h", 1302, 4181))->it, "./neo-c.h", 1302, 4182)), "./neo-c.h", 1302, 4183))->next;
                                                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1304, 4184)), "./neo-c.h", 1304, 4185))->key_list, "./neo-c.h", 1304, 4186)), "./neo-c.h", 1304, 4187))->it) {
                                                        __result229__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1305, 4188)), "./neo-c.h", 1305, 4189))->key_list, "./neo-c.h", 1305, 4190)), "./neo-c.h", 1305, 4191))->it, "./neo-c.h", 1305, 4192)), "./neo-c.h", 1305, 4193))->item;
                                                        return __result229__;
                                                    }
                                                    (come_push_stackframe("./neo-c.h", 1309, 4194),__exception_result_var_b501=memset(&result_400,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b501);
                                                    __result230__ = __result_obj__ = result_400;
                                                    return __result230__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b504;
unsigned int hash_403;
unsigned int it_404;
_Bool _while_condtional52;
_Bool _if_conditional442;
_Bool __exception_result_var_b505;
_Bool _if_conditional443;
char* __result231__;
_Bool _if_conditional444;
_Bool _if_conditional445;
char* __result232__;
char* __result233__;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_403, 0, sizeof(unsigned int));
memset(&it_404, 0, sizeof(unsigned int));
                                                        hash_403=(come_push_stackframe("./neo-c.h", 1207, 4201),__exception_result_var_b504=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 4199)), "./neo-c.h", 1207, 4200))), come_pop_stackframe(), __exception_result_var_b504)%((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1207, 4202)), "./neo-c.h", 1207, 4203))->size;
                                                        it_404=hash_403;
                                                        while(_while_condtional52=(_Bool)1,                                                        _while_condtional52) {
                                                            if(_if_conditional442=((_Bool*)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1211, 4204)), "./neo-c.h", 1211, 4205))->item_existance, "./neo-c.h", 1211, 4206))[it_404],                                                            _if_conditional442) {
                                                                if(_if_conditional443=(come_push_stackframe("./neo-c.h", 1213, 4212),__exception_result_var_b505=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1213, 4207)), "./neo-c.h", 1213, 4208))->keys, "./neo-c.h", 1213, 4209))[it_404], "./neo-c.h", 1213, 4210)), "./neo-c.h", 1213, 4211)),key), come_pop_stackframe(), __exception_result_var_b505),                                                                _if_conditional443) {
                                                                    __result231__ = __result_obj__ = ((char**)come_null_check(((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1215, 4213)), "./neo-c.h", 1215, 4214))->items, "./neo-c.h", 1215, 4215))[it_404];
                                                                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                    return __result231__;
                                                                }
                                                                it_404++;
                                                                if(_if_conditional444=it_404>=((struct map$2charphcharph*)come_null_check(((struct map$2charphcharph*)come_null_check(self, "./neo-c.h", 1220, 4216)), "./neo-c.h", 1220, 4217))->size,                                                                _if_conditional444) {
                                                                    it_404=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional445=it_404==hash_403,                                                                    _if_conditional445) {
                                                                        __result232__ = __result_obj__ = default_value;
                                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                        return __result232__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __result233__ = __result_obj__ = default_value;
                                                                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                                return __result233__;
                                                            }
                                                        }
                                                        __result234__ = __result_obj__ = default_value;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                        return __result234__;
                                                        default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void sClassNode_finalize(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
_Bool _if_conditional467;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional464=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 0, 4405)), "sClassNode_finalize", 0, 4406))->sname!=((void*)0),                _if_conditional464) {
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 0, 4407)), "sClassNode_finalize", 0, 4408))->sname = come_decrement_ref_count2(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 0, 4407)), "sClassNode_finalize", 0, 4408))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional465=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 1, 4409)), "sClassNode_finalize", 1, 4410))->mName!=((void*)0),                _if_conditional465) {
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 1, 4411)), "sClassNode_finalize", 1, 4412))->mName = come_decrement_ref_count2(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 1, 4411)), "sClassNode_finalize", 1, 4412))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional466=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 2, 4413)), "sClassNode_finalize", 2, 4414))->mClass!=((void*)0),                _if_conditional466) {
                    come_call_finalizer3(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 2, 4415)), "sClassNode_finalize", 2, 4416))->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional467=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 3, 4417)), "sClassNode_finalize", 3, 4418))->mMethods!=((void*)0),                _if_conditional467) {
                    come_call_finalizer3(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_finalize", 3, 4419)), "sClassNode_finalize", 3, 4420))->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
_Bool _if_conditional468;
struct sClassNode* __result237__;
void* right_value381;
struct sClassNode* result_415;
_Bool _if_conditional469;
_Bool _if_conditional470;
char* __exception_result_var_b531;
void* right_value382;
char* __dec_obj107;
_Bool _if_conditional471;
char* __exception_result_var_b532;
void* right_value383;
char* __dec_obj108;
_Bool _if_conditional472;
struct sClass* __exception_result_var_b533;
void* right_value384;
struct sClass* __dec_obj109;
_Bool _if_conditional473;
struct list$1sNodeph* __exception_result_var_b534;
void* right_value385;
struct list$1sNodeph* __dec_obj110;
_Bool _if_conditional474;
struct sClassNode* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value381 = (void*)0;
memset(&result_415, 0, sizeof(struct sClassNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
                if(_if_conditional468=self==(void*)0,                _if_conditional468) {
                    __result237__ = __result_obj__ = (void*)0;
                    return __result237__;
                }
                result_415=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(right_value381=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"))));
                come_call_finalizer3(right_value381,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional469=self!=((void*)0),                _if_conditional469) {
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 4, 4421)), "sClassNode_clone", 4, 4422))->sline=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 4, 4423)), "sClassNode_clone", 4, 4424))->sline;
                }
                if(_if_conditional470=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 5, 4425)), "sClassNode_clone", 5, 4426))->sname!=((void*)0),                _if_conditional470) {
                    __dec_obj107=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 5, 4427)), "sClassNode_clone", 5, 4428))->sname;
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 5, 4427)), "sClassNode_clone", 5, 4428))->sname=(char*)come_increment_ref_count(((char*)(right_value382=(come_push_stackframe("sClassNode_clone", 5, 4431),__exception_result_var_b531=string_clone(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 5, 4429)), "sClassNode_clone", 5, 4430))->sname), come_pop_stackframe(), __exception_result_var_b531))));
                    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional471=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 6, 4432)), "sClassNode_clone", 6, 4433))->mName!=((void*)0),                _if_conditional471) {
                    __dec_obj108=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 6, 4434)), "sClassNode_clone", 6, 4435))->mName;
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 6, 4434)), "sClassNode_clone", 6, 4435))->mName=(char*)come_increment_ref_count(((char*)(right_value383=(come_push_stackframe("sClassNode_clone", 6, 4438),__exception_result_var_b532=string_clone(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 6, 4436)), "sClassNode_clone", 6, 4437))->mName), come_pop_stackframe(), __exception_result_var_b532))));
                    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional472=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 7, 4439)), "sClassNode_clone", 7, 4440))->mClass!=((void*)0),                _if_conditional472) {
                    __dec_obj109=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 7, 4441)), "sClassNode_clone", 7, 4442))->mClass;
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 7, 4441)), "sClassNode_clone", 7, 4442))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value384=(come_push_stackframe("sClassNode_clone", 7, 4445),__exception_result_var_b533=sClass_clone(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 7, 4443)), "sClassNode_clone", 7, 4444))->mClass), come_pop_stackframe(), __exception_result_var_b533))));
                    come_call_finalizer3(__dec_obj109,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value384,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional473=self!=((void*)0)&&((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 8, 4446)), "sClassNode_clone", 8, 4447))->mMethods!=((void*)0),                _if_conditional473) {
                    __dec_obj110=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 8, 4448)), "sClassNode_clone", 8, 4449))->mMethods;
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 8, 4448)), "sClassNode_clone", 8, 4449))->mMethods=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value385=(come_push_stackframe("sClassNode_clone", 8, 4452),__exception_result_var_b534=list$1sNodephp_clone(((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 8, 4450)), "sClassNode_clone", 8, 4451))->mMethods), come_pop_stackframe(), __exception_result_var_b534))));
                    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value385,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional474=self!=((void*)0),                _if_conditional474) {
                    ((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(result_415, "sClassNode_clone", 9, 4453)), "sClassNode_clone", 9, 4454))->mOutput=((struct sClassNode*)come_null_check(((struct sClassNode*)come_null_check(self, "sClassNode_clone", 9, 4455)), "sClassNode_clone", 9, 4456))->mOutput;
                }
                __result238__ = __result_obj__ = result_415;
                come_call_finalizer3(result_415,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result238__;
                come_call_finalizer3(result_415,sClassNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_416;
char* p_417;
int sline_418;
_Bool __exception_result_var_b536;
_Bool _if_conditional475;
_Bool __exception_result_var_b537;
_Bool _if_conditional476;
void* right_value388;
char* __exception_result_var_b538;
char* type_name_419;
_Bool __exception_result_var_b539;
_Bool _if_conditional477;
void* right_value389;
char* __exception_result_var_b540;
void* right_value390;
char* __exception_result_var_b541;
_Bool _if_conditional478;
void* right_value391;
char* __exception_result_var_b542;
_Bool _if_conditional479;
_Bool _if_conditional480;
void* right_value392;
char* __exception_result_var_b543;
char* type_name_420;
void* right_value393;
struct sNode* __exception_result_var_b544;
struct sNode* __result241__;
void* right_value394;
struct sNode* __exception_result_var_b545;
struct sNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&define_struct_416, 0, sizeof(_Bool));
memset(&p_417, 0, sizeof(char*));
memset(&sline_418, 0, sizeof(int));
right_value388 = (void*)0;
memset(&type_name_419, 0, sizeof(char*));
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&type_name_420, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
    define_struct_416=(_Bool)0;
    {
        p_417=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1121, 4458)), "14struct.c", 1121, 4459))->p;
        sline_418=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1122, 4460)), "14struct.c", 1122, 4461))->sline;
        if(_if_conditional475=(come_push_stackframe("14struct.c", 1124, 4462),__exception_result_var_b536=charp_operator_equals(buf,"struct"), come_pop_stackframe(), __exception_result_var_b536),        _if_conditional475) {
            if(_if_conditional476=(come_push_stackframe("14struct.c", 1125, 4466),__exception_result_var_b537=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1125, 4463)), "14struct.c", 1125, 4464))->p, "14struct.c", 1125, 4465))), come_pop_stackframe(), __exception_result_var_b537)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1125, 4467)), "14struct.c", 1125, 4468))->p, "14struct.c", 1125, 4469))==95,            _if_conditional476) {
                type_name_419=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1126, 4470),__exception_result_var_b538=((char*)(right_value388=parse_word(info))), come_pop_stackframe(), __exception_result_var_b538));
                right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional477=(come_push_stackframe("14struct.c", 1128, 4471),__exception_result_var_b539=parsecmp("extends",info), come_pop_stackframe(), __exception_result_var_b539),                _if_conditional477) {
                    (come_push_stackframe("14struct.c", 1129, 4472),__exception_result_var_b540=((char*)(right_value389=parse_word(info))), come_pop_stackframe(), __exception_result_var_b540);
                    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("14struct.c", 1130, 4473),__exception_result_var_b541=((char*)(right_value390=parse_word(info))), come_pop_stackframe(), __exception_result_var_b541);
                    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional478=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1133, 4474)), "14struct.c", 1133, 4475))->p, "14struct.c", 1133, 4476))==123,                _if_conditional478) {
                    (come_push_stackframe("14struct.c", 1134, 4477),__exception_result_var_b542=((char*)(right_value391=skip_block(info))), come_pop_stackframe(), __exception_result_var_b542);
                    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional479=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1136, 4478)), "14struct.c", 1136, 4479))->p, "14struct.c", 1136, 4480))==59,                    _if_conditional479) {
                        define_struct_416=(_Bool)1;
                    }
                }
                type_name_419 = come_decrement_ref_count2(type_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1143, 4481)), "14struct.c", 1143, 4482))->p=p_417;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 1144, 4483)), "14struct.c", 1144, 4484))->sline=sline_418;
    }
    if(define_struct_416) {
        type_name_420=(char*)come_increment_ref_count((come_push_stackframe("14struct.c", 1148, 4485),__exception_result_var_b543=((char*)(right_value392=parse_word(info))), come_pop_stackframe(), __exception_result_var_b543));
        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result241__ = __result_obj__ = (come_push_stackframe("14struct.c", 1150, 4486),__exception_result_var_b544=((struct sNode*)(right_value393=parse_struct((char*)come_increment_ref_count(type_name_420),info))), come_pop_stackframe(), __exception_result_var_b544);
        type_name_420 = come_decrement_ref_count2(type_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result241__;
        type_name_420 = come_decrement_ref_count2(type_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result242__ = __result_obj__ = (come_push_stackframe("14struct.c", 1153, 4487),__exception_result_var_b545=((struct sNode*)(right_value394=string_node_v13(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b545);
    if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result242__;
}

