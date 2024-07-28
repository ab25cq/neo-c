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
struct sCurrentNode
{
    int sline;
    char* sname;
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
struct sMethodCallNode
{
    int sline;
    char* sname;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
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

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_kind(struct sCurrentNode* self);

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind(struct sMethodCallNode* self);

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
struct sCurrentNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
    (come_push_stackframe("20method.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "20method.c", 7, 573)), "20method.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = ((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "20method.c", 12, 584)), "20method.c", 12, 585))->sline;
    return __result53__;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value80;
char* __exception_result_var_b52;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
    __result54__ = __result_obj__ = (come_push_stackframe("20method.c", 17, 588),__exception_result_var_b52=((char*)(right_value80=__builtin_string(((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "20method.c", 17, 586)), "20method.c", 17, 587))->sname))), come_pop_stackframe(), __exception_result_var_b52);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__;
void* right_value81;
char* __exception_result_var_b53;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result55__ = __result_obj__ = (come_push_stackframe("20method.c", 22, 589),__exception_result_var_b53=((char*)(right_value81=__builtin_string("sCurrentNode"))), come_pop_stackframe(), __exception_result_var_b53);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
char* __exception_result_var_b54;
char* class_name_47;
void* right_value83;
void* right_value84;
struct sClass* __exception_result_var_b55;
struct sClass* current_stack_48;
struct sVarTable* vtable_57;
struct map$2charphsVarph* o2_saved_58;
char* __exception_result_var_b58;
char* it_61;
_Bool __exception_result_var_b59;
char* __exception_result_var_b62;
char* key_64;
struct sVar* __exception_result_var_b66;
struct sVar* value_65;
struct sType* __exception_result_var_b90;
void* right_value120;
struct sType* type2_69;
void* right_value121;
char* __exception_result_var_b91;
void* right_value122;
void* right_value123;
struct tuple2$2charphsTypeph* item_94;
_Bool _if_conditional135;
int __exception_result_var_b92;
_Bool _if_conditional136;
int __exception_result_var_b93;
_Bool _if_conditional137;
int __exception_result_var_b94;
_Bool _if_conditional138;
_Bool __exception_result_var_b95;
_Bool __exception_result_var_b96;
_Bool _if_conditional139;
int __exception_result_var_b97;
_Bool _if_conditional141;
struct sType* __exception_result_var_b98;
void* right_value124;
struct sType* type3_95;
struct list$1sNodeph* __exception_result_var_b99;
void* right_value125;
char* __exception_result_var_b100;
void* right_value126;
void* right_value127;
struct tuple2$2charphsTypeph* item2_98;
struct tuple2$2charphsTypeph* __exception_result_var_b103;
void* right_value134;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b104;
struct tuple2$2charphsTypeph* __exception_result_var_b105;
void* right_value135;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b106;
struct map$2charphsClassph* __exception_result_var_b138;
struct map$2charphsVarph* o2_saved_152;
char* __exception_result_var_b139;
char* it_153;
_Bool __exception_result_var_b140;
char* __exception_result_var_b141;
char* key_154;
struct sVar* __exception_result_var_b142;
struct sVar* value_155;
struct sType* __exception_result_var_b143;
void* right_value142;
struct sType* type2_156;
void* right_value143;
void* right_value144;
struct tuple2$2charphsTypeph* item_157;
_Bool _if_conditional206;
int __exception_result_var_b144;
_Bool _if_conditional207;
int __exception_result_var_b145;
_Bool _if_conditional208;
int __exception_result_var_b146;
_Bool _if_conditional209;
_Bool __exception_result_var_b147;
_Bool __exception_result_var_b148;
_Bool _if_conditional210;
_Bool __exception_result_var_b149;
_Bool _if_conditional211;
void* right_value145;
struct CVALUE* come_value_158;
void* right_value146;
char* __exception_result_var_b150;
char* __dec_obj42;
void* right_value147;
void* right_value148;
struct sType* __exception_result_var_b151;
struct sType* __dec_obj43;
struct list$1CVALUEph* __exception_result_var_b152;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&class_name_47, 0, sizeof(char*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&current_stack_48, 0, sizeof(struct sClass*));
memset(&vtable_57, 0, sizeof(struct sVarTable*));
memset(&o2_saved_58, 0, sizeof(struct map$2charphsVarph*));
memset(&it_61, 0, sizeof(char*));
memset(&key_64, 0, sizeof(char*));
memset(&value_65, 0, sizeof(struct sVar*));
right_value120 = (void*)0;
memset(&type2_69, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
memset(&item_94, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value124 = (void*)0;
memset(&type3_95, 0, sizeof(struct sType*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&item2_98, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&o2_saved_152, 0, sizeof(struct map$2charphsVarph*));
memset(&it_153, 0, sizeof(char*));
memset(&key_154, 0, sizeof(char*));
memset(&value_155, 0, sizeof(struct sVar*));
right_value142 = (void*)0;
memset(&type2_156, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
memset(&item_157, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value145 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 27, 590)), "20method.c", 27, 591))->current_stack_num++;
    class_name_47=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 28, 594),__exception_result_var_b54=((char*)(right_value82=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 28, 592)), "20method.c", 28, 593))->current_stack_num))), come_pop_stackframe(), __exception_result_var_b54));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    current_stack_48=(struct sClass*)come_increment_ref_count((come_push_stackframe("20method.c", 29, 596),__exception_result_var_b55=((struct sClass*)(right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)come_null_check(((struct sClass*)(right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 29, "sClass"))), "20method.c", 29, 595))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b55));
    come_call_finalizer3(right_value83,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value84,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    vtable_57=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 31, 709)), "20method.c", 31, 710))->lv_table;
    while(vtable_57) {
        for(        o2_saved_58=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 34, 711)), "20method.c", 34, 712))->mVars)),it_61=(come_push_stackframe("20method.c", 34, 735),__exception_result_var_b58=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_58), "20method.c", 34, 713)), "20method.c", 34, 714))), come_pop_stackframe(), __exception_result_var_b58);        !(come_push_stackframe("20method.c", 34, 744),__exception_result_var_b59=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_58), "20method.c", 34, 736)), "20method.c", 34, 737))), come_pop_stackframe(), __exception_result_var_b59);        it_61=(come_push_stackframe("20method.c", 34, 773),__exception_result_var_b62=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_58), "20method.c", 34, 745)), "20method.c", 34, 746))), come_pop_stackframe(), __exception_result_var_b62)        ){
            key_64=it_61;
            value_65=(come_push_stackframe("20method.c", 36, 814),__exception_result_var_b66=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 36, 774)), "20method.c", 36, 775))->mVars, "20method.c", 36, 776)),key_64), "20method.c", 36, 813)), come_pop_stackframe(), __exception_result_var_b66);
            type2_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=(come_push_stackframe("20method.c", 38, 1326),__exception_result_var_b90=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 38, 815)), "20method.c", 38, 816))->mType), come_pop_stackframe(), __exception_result_var_b90))));
            come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_69, "20method.c", 40, 1327)), "20method.c", 40, 1328))->mPointerNum++;
            item_94=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value123=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value122=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("20method.c", 42, 1331),__exception_result_var_b91=((char*)(right_value121=__builtin_string(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 42, 1329)), "20method.c", 42, 1330))->mCValueName))), come_pop_stackframe(), __exception_result_var_b91)),(struct sType*)come_increment_ref_count(type2_69)))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value123,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional135=((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 44, 1336)), "20method.c", 44, 1337))->mCValueName!=((void*)0),            _if_conditional135) {
                if(_if_conditional136=(come_push_stackframe("20method.c", 45, 1340),__exception_result_var_b92=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 45, 1338)), "20method.c", 45, 1339))->mCValueName,"__list_values"), come_pop_stackframe(), __exception_result_var_b92)==0,                _if_conditional136) {
                }
                else {
                    if(_if_conditional137=(come_push_stackframe("20method.c", 48, 1343),__exception_result_var_b93=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 48, 1341)), "20method.c", 48, 1342))->mCValueName,"__map_keys"), come_pop_stackframe(), __exception_result_var_b93)==0,                    _if_conditional137) {
                    }
                    else {
                        if(_if_conditional138=(come_push_stackframe("20method.c", 51, 1346),__exception_result_var_b94=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 51, 1344)), "20method.c", 51, 1345))->mCValueName,"__map_element"), come_pop_stackframe(), __exception_result_var_b94)==0,                        _if_conditional138) {
                        }
                        else {
                            if(_if_conditional139=(come_push_stackframe("20method.c", 54, 1353),__exception_result_var_b95=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 54, 1347)), "20method.c", 54, 1348))->mType, "20method.c", 54, 1349)), "20method.c", 54, 1350))->mClass, "20method.c", 54, 1351)), "20method.c", 54, 1352))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b95)||(come_push_stackframe("20method.c", 54, 1360),__exception_result_var_b96=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 54, 1354)), "20method.c", 54, 1355))->mType, "20method.c", 54, 1356)), "20method.c", 54, 1357))->mClass, "20method.c", 54, 1358)), "20method.c", 54, 1359))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b96),                            _if_conditional139) {
                            }
                            else {
                                if(_if_conditional141=(come_push_stackframe("20method.c", 57, 1367),__exception_result_var_b97=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_69, "20method.c", 57, 1361)), "20method.c", 57, 1362))->mArrayNum, "20method.c", 57, 1363)), "20method.c", 57, 1364))), come_pop_stackframe(), __exception_result_var_b97)==1,                                _if_conditional141) {
                                    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=(come_push_stackframe("20method.c", 58, 1368),__exception_result_var_b98=sType_clone(type2_69), come_pop_stackframe(), __exception_result_var_b98))));
                                    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("20method.c", 59, 1383),__exception_result_var_b99=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type3_95, "20method.c", 59, 1369)), "20method.c", 59, 1370))->mArrayNum, "20method.c", 59, 1371)), "20method.c", 59, 1372))), come_pop_stackframe(), __exception_result_var_b99);
                                    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_95, "20method.c", 60, 1384)), "20method.c", 60, 1385))->mPointerNum++;
                                    item2_98=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value127=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 61, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count((come_push_stackframe("20method.c", 61, 1388),__exception_result_var_b100=((char*)(right_value125=__builtin_string(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_65, "20method.c", 61, 1386)), "20method.c", 61, 1387))->mCValueName))), come_pop_stackframe(), __exception_result_var_b100)),(struct sType*)come_increment_ref_count(type3_95)))));
                                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value127,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("20method.c", 62, 1484),__exception_result_var_b104=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(current_stack_48, "20method.c", 62, 1389)), "20method.c", 62, 1390))->mFields, "20method.c", 62, 1391)), "20method.c", 62, 1392)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value134=(come_push_stackframe("20method.c", 62, 1483),__exception_result_var_b103=tuple2$2charphsTypephp_clone(item2_98), come_pop_stackframe(), __exception_result_var_b103))))), come_pop_stackframe(), __exception_result_var_b104);
                                    come_call_finalizer3(right_value134,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(type3_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(item2_98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    (come_push_stackframe("20method.c", 65, 1490),__exception_result_var_b106=list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(current_stack_48, "20method.c", 65, 1485)), "20method.c", 65, 1486))->mFields, "20method.c", 65, 1487)), "20method.c", 65, 1488)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value135=(come_push_stackframe("20method.c", 65, 1489),__exception_result_var_b105=tuple2$2charphsTypephp_clone(item_94), come_pop_stackframe(), __exception_result_var_b105))))), come_pop_stackframe(), __exception_result_var_b106);
                                    come_call_finalizer3(right_value135,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_69,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_94,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_58,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_57=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 70, 1521)), "20method.c", 70, 1522))->mParent;
    }
    (come_push_stackframe("20method.c", 73,1523),output_struct(current_stack_48,info),come_pop_stackframe());
    (come_push_stackframe("20method.c", 75, 1900),__exception_result_var_b138=map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 75, 1524)), "20method.c", 75, 1525))->classes, "20method.c", 75, 1526)), "20method.c", 75, 1527)),(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48)), come_pop_stackframe(), __exception_result_var_b138);
    static int num_current_stack_151=0;
    num_current_stack_151++;
    (come_push_stackframe("20method.c", 79,1901),add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_151),come_pop_stackframe());
    (come_push_stackframe("20method.c", 80,1902),add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_151,class_name_47),come_pop_stackframe());
    vtable_57=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 82, 1903)), "20method.c", 82, 1904))->lv_table;
    while(vtable_57) {
        for(        o2_saved_152=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 85, 1905)), "20method.c", 85, 1906))->mVars)),it_153=(come_push_stackframe("20method.c", 85, 1909),__exception_result_var_b139=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_152), "20method.c", 85, 1907)), "20method.c", 85, 1908))), come_pop_stackframe(), __exception_result_var_b139);        !(come_push_stackframe("20method.c", 85, 1912),__exception_result_var_b140=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_152), "20method.c", 85, 1910)), "20method.c", 85, 1911))), come_pop_stackframe(), __exception_result_var_b140);        it_153=(come_push_stackframe("20method.c", 85, 1915),__exception_result_var_b141=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check((o2_saved_152), "20method.c", 85, 1913)), "20method.c", 85, 1914))), come_pop_stackframe(), __exception_result_var_b141)        ){
            key_154=it_153;
            value_155=(come_push_stackframe("20method.c", 87, 1920),__exception_result_var_b142=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 87, 1916)), "20method.c", 87, 1917))->mVars, "20method.c", 87, 1918)),key_154), "20method.c", 87, 1919)), come_pop_stackframe(), __exception_result_var_b142);
            type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(come_push_stackframe("20method.c", 89, 1923),__exception_result_var_b143=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 89, 1921)), "20method.c", 89, 1922))->mType), come_pop_stackframe(), __exception_result_var_b143))));
            come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
            item_157=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value144=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value143=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 91, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 91, 1924)), "20method.c", 91, 1925))->mCValueName),(struct sType*)come_increment_ref_count(type2_156)))));
            come_call_finalizer3(right_value143,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value144,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional206=((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 93, 1926)), "20method.c", 93, 1927))->mCValueName!=((void*)0),            _if_conditional206) {
                if(_if_conditional207=(come_push_stackframe("20method.c", 94, 1930),__exception_result_var_b144=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 94, 1928)), "20method.c", 94, 1929))->mCValueName,"__list_values"), come_pop_stackframe(), __exception_result_var_b144)==0,                _if_conditional207) {
                }
                else {
                    if(_if_conditional208=(come_push_stackframe("20method.c", 97, 1933),__exception_result_var_b145=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 97, 1931)), "20method.c", 97, 1932))->mCValueName,"__map_keys"), come_pop_stackframe(), __exception_result_var_b145)==0,                    _if_conditional208) {
                    }
                    else {
                        if(_if_conditional209=(come_push_stackframe("20method.c", 100, 1936),__exception_result_var_b146=strcmp(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 100, 1934)), "20method.c", 100, 1935))->mCValueName,"__map_element"), come_pop_stackframe(), __exception_result_var_b146)==0,                        _if_conditional209) {
                        }
                        else {
                            if(_if_conditional210=(come_push_stackframe("20method.c", 103, 1943),__exception_result_var_b147=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 103, 1937)), "20method.c", 103, 1938))->mType, "20method.c", 103, 1939)), "20method.c", 103, 1940))->mClass, "20method.c", 103, 1941)), "20method.c", 103, 1942))->mName,"va_list"), come_pop_stackframe(), __exception_result_var_b147)||(come_push_stackframe("20method.c", 103, 1950),__exception_result_var_b148=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 103, 1944)), "20method.c", 103, 1945))->mType, "20method.c", 103, 1946)), "20method.c", 103, 1947))->mClass, "20method.c", 103, 1948)), "20method.c", 103, 1949))->mName,"__builtin_va_list"), come_pop_stackframe(), __exception_result_var_b148),                            _if_conditional210) {
                            }
                            else {
                                if(_if_conditional211=(come_push_stackframe("20method.c", 107, 1955),__exception_result_var_b149=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type2_156, "20method.c", 107, 1951)), "20method.c", 107, 1952))->mClass, "20method.c", 107, 1953)), "20method.c", 107, 1954))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b149),                                _if_conditional211) {
                                    (come_push_stackframe("20method.c", 108,1960),add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_151,((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 108, 1956)), "20method.c", 108, 1957))->mCValueName,((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 108, 1958)), "20method.c", 108, 1959))->mCValueName),come_pop_stackframe());
                                }
                                else {
                                    (come_push_stackframe("20method.c", 111,1965),add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_151,((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 111, 1961)), "20method.c", 111, 1962))->mCValueName,((struct sVar*)come_null_check(((struct sVar*)come_null_check(value_155, "20method.c", 111, 1963)), "20method.c", 111, 1964))->mCValueName),come_pop_stackframe());
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_157,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_152,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_57=((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(vtable_57, "20method.c", 117, 1966)), "20method.c", 117, 1967))->mParent;
    }
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 120, "CVALUE"))));
    come_call_finalizer3(right_value145,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj42=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 122, 1976)), "20method.c", 122, 1977))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 122, 1976)), "20method.c", 122, 1977))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 122, 1978),__exception_result_var_b150=((char*)(right_value146=xsprintf("&__current_stack%d__",num_current_stack_151))), come_pop_stackframe(), __exception_result_var_b150));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj43=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 123, 1979)), "20method.c", 123, 1980))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 123, 1979)), "20method.c", 123, 1980))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 123, 1982),__exception_result_var_b151=((struct sType*)(right_value148=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value147=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 123, "sType"))), "20method.c", 123, 1981))),class_name_47,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b151));
    come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value148,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 124, 1983)), "20method.c", 124, 1984))->var=((void*)0);
    (come_push_stackframe("20method.c", 126,1987),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_158, "20method.c", 126, 1985)), "20method.c", 126, 1986))->c_value),come_pop_stackframe());
    (come_push_stackframe("20method.c", 128, 2040),__exception_result_var_b152=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 128, 1988)), "20method.c", 128, 1989))->stack, "20method.c", 128, 1990)), "20method.c", 128, 1991)),(struct CVALUE*)come_increment_ref_count(come_value_158)), come_pop_stackframe(), __exception_result_var_b152);
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 130, 2041)), "20method.c", 130, 2042))->num_current_stack=num_current_stack_151;
    __result117__ = (_Bool)1;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result117__;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional43;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional21=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 597)), "sClass_finalize", 0, 598))->mName!=((void*)0),        _if_conditional21) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 599)), "sClass_finalize", 0, 600))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 599)), "sClass_finalize", 0, 600))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional22=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 601)), "sClass_finalize", 1, 602))->mFields!=((void*)0),        _if_conditional22) {
            come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 603)), "sClass_finalize", 1, 604))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional43=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 701)), "sClass_finalize", 2, 702))->mDeclareSName!=((void*)0),        _if_conditional43) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 703)), "sClass_finalize", 2, 704))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 703)), "sClass_finalize", 2, 704))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional44=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 705)), "sClass_finalize", 3, 706))->mParentClassName!=((void*)0),        _if_conditional44) {
            ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 707)), "sClass_finalize", 3, 708))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 707)), "sClass_finalize", 3, 708))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_49;
_Bool _while_condtional7;
struct list_item$1tuple2$2charphsTypephph* prev_it_50;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_49=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 605)), "./neo-c.h", 120, 606))->head;
                while(_while_condtional7=it_49!=((void*)0),                _while_condtional7) {
                    prev_it_50=it_49;
                    it_49=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_49, "./neo-c.h", 123, 607)), "./neo-c.h", 123, 608))->next;
                    come_call_finalizer3(prev_it_50,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional23=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 609)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 610))->item!=((void*)0),                        _if_conditional23) {
                            come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 611)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 612))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional26;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 621)), "sType_finalize", 0, 622))->mMultipleTypes!=((void*)0),                                        _if_conditional26) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 623)), "sType_finalize", 0, 624))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 633)), "sType_finalize", 1, 634))->mNoSolvedGenericsType!=((void*)0),                                        _if_conditional28) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 635)), "sType_finalize", 1, 636))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 641)), "sType_finalize", 2, 642))->mOriginalLoadVarType!=((void*)0),                                        _if_conditional30) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 643)), "sType_finalize", 2, 644))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 645)), "sType_finalize", 3, 646))->mGenericsName!=((void*)0),                                        _if_conditional31) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 647)), "sType_finalize", 3, 648))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 647)), "sType_finalize", 3, 648))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 649)), "sType_finalize", 4, 650))->mGenericsTypes!=((void*)0),                                        _if_conditional32) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 651)), "sType_finalize", 4, 652))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 653)), "sType_finalize", 5, 654))->mArrayNum!=((void*)0),                                        _if_conditional33) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 655)), "sType_finalize", 5, 656))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 665)), "sType_finalize", 6, 666))->mParamTypes!=((void*)0),                                        _if_conditional35) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 667)), "sType_finalize", 6, 668))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 669)), "sType_finalize", 7, 670))->mParamNames!=((void*)0),                                        _if_conditional36) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 671)), "sType_finalize", 7, 672))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 681)), "sType_finalize", 8, 682))->mResultType!=((void*)0),                                        _if_conditional38) {
                                            come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 683)), "sType_finalize", 8, 684))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 685)), "sType_finalize", 9, 686))->mAlignas!=((void*)0),                                        _if_conditional39) {
                                            if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 687)), "sType_finalize", 9, 688))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 687)), "sType_finalize", 9, 688))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 687)), "sType_finalize", 9, 688))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 687)), "sType_finalize", 9, 688))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 687)), "sType_finalize", 9, 688))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 689)), "sType_finalize", 10, 690))->mSizeNum!=((void*)0),                                        _if_conditional40) {
                                            if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 691)), "sType_finalize", 10, 692))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 691)), "sType_finalize", 10, 692))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 691)), "sType_finalize", 10, 692))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 691)), "sType_finalize", 10, 692))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 691)), "sType_finalize", 10, 692))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 693)), "sType_finalize", 11, 694))->mOriginalTypeName!=((void*)0),                                        _if_conditional41) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 695)), "sType_finalize", 11, 696))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 695)), "sType_finalize", 11, 696))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 697)), "sType_finalize", 12, 698))->mAsmName!=((void*)0),                                        _if_conditional42) {
                                            ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 699)), "sType_finalize", 12, 700))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 699)), "sType_finalize", 12, 700))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_51;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_51, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sTypeph*));
                                                it_51=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 625)), "./neo-c.h", 120, 626))->head;
                                                while(_while_condtional8=it_51!=((void*)0),                                                _while_condtional8) {
                                                    prev_it_52=it_51;
                                                    it_51=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_51, "./neo-c.h", 123, 627)), "./neo-c.h", 123, 628))->next;
                                                    come_call_finalizer3(prev_it_52,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional27=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 629)), "list_item$1sTypephp_finalize", 0, 630))->item!=((void*)0),                                                        _if_conditional27) {
                                                            come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 631)), "list_item$1sTypephp_finalize", 0, 632))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional29=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 637)), "tuple1$1sTypephp_finalize", 0, 638))->v1!=((void*)0),                                                _if_conditional29) {
                                                    come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 639)), "tuple1$1sTypephp_finalize", 0, 640))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_53;
_Bool _while_condtional9;
struct list_item$1sNodeph* prev_it_54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sNodeph*));
                                                it_53=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 657)), "./neo-c.h", 120, 658))->head;
                                                while(_while_condtional9=it_53!=((void*)0),                                                _while_condtional9) {
                                                    prev_it_54=it_53;
                                                    it_53=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_53, "./neo-c.h", 123, 659)), "./neo-c.h", 123, 660))->next;
                                                    come_call_finalizer3(prev_it_54,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional34=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 661)), "list_item$1sNodephp_finalize", 0, 662))->item!=((void*)0),                                                        _if_conditional34) {
                                                            if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 663)), "list_item$1sNodephp_finalize", 0, 664))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 663)), "list_item$1sNodephp_finalize", 0, 664))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 663)), "list_item$1sNodephp_finalize", 0, 664))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 663)), "list_item$1sNodephp_finalize", 0, 664))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 663)), "list_item$1sNodephp_finalize", 0, 664))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_55;
_Bool _while_condtional10;
struct list_item$1charph* prev_it_56;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1charph*));
                                                it_55=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 673)), "./neo-c.h", 120, 674))->head;
                                                while(_while_condtional10=it_55!=((void*)0),                                                _while_condtional10) {
                                                    prev_it_56=it_55;
                                                    it_55=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_55, "./neo-c.h", 123, 675)), "./neo-c.h", 123, 676))->next;
                                                    come_call_finalizer3(prev_it_56,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional37=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 677)), "list_item$1charphp_finalize", 0, 678))->item!=((void*)0),                                                        _if_conditional37) {
                                                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 679)), "list_item$1charphp_finalize", 0, 680))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 679)), "list_item$1charphp_finalize", 0, 680))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional45;
char* result_59;
void* __exception_result_var_b56;
char* __result56__;
_Bool _if_conditional46;
char* __result57__;
char* result_60;
void* __exception_result_var_b57;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
            if(_if_conditional45=self==((void*)0),            _if_conditional45) {
                (come_push_stackframe("./neo-c.h", 1282, 715),__exception_result_var_b56=memset(&result_59,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b56);
                __result56__ = __result_obj__ = result_59;
                return __result56__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 716)), "./neo-c.h", 1285, 717))->key_list, "./neo-c.h", 1285, 718)), "./neo-c.h", 1285, 719))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 720)), "./neo-c.h", 1285, 721))->key_list, "./neo-c.h", 1285, 722)), "./neo-c.h", 1285, 723))->head;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 724)), "./neo-c.h", 1287, 725))->key_list, "./neo-c.h", 1287, 726)), "./neo-c.h", 1287, 727))->it) {
                __result57__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 728)), "./neo-c.h", 1288, 729))->key_list, "./neo-c.h", 1288, 730)), "./neo-c.h", 1288, 731))->it, "./neo-c.h", 1288, 732)), "./neo-c.h", 1288, 733))->item;
                return __result57__;
            }
            (come_push_stackframe("./neo-c.h", 1292, 734),__exception_result_var_b57=memset(&result_60,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b57);
            __result58__ = __result_obj__ = result_60;
            return __result58__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
            __result59__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 738)), "./neo-c.h", 1314, 739))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 740)), "./neo-c.h", 1314, 741))->key_list, "./neo-c.h", 1314, 742)), "./neo-c.h", 1314, 743))->it==((void*)0);
            return __result59__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional47;
char* result_62;
void* __exception_result_var_b60;
char* __result60__;
_Bool _if_conditional48;
char* __result61__;
char* result_63;
void* __exception_result_var_b61;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
            if(_if_conditional47=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 747)), "./neo-c.h", 1297, 748))->key_list, "./neo-c.h", 1297, 749)), "./neo-c.h", 1297, 750))->it==((void*)0),            _if_conditional47) {
                (come_push_stackframe("./neo-c.h", 1299, 751),__exception_result_var_b60=memset(&result_62,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b60);
                __result60__ = __result_obj__ = result_62;
                return __result60__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 752)), "./neo-c.h", 1302, 753))->key_list, "./neo-c.h", 1302, 754)), "./neo-c.h", 1302, 755))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 756)), "./neo-c.h", 1302, 757))->key_list, "./neo-c.h", 1302, 758)), "./neo-c.h", 1302, 759))->it, "./neo-c.h", 1302, 760)), "./neo-c.h", 1302, 761))->next;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 762)), "./neo-c.h", 1304, 763))->key_list, "./neo-c.h", 1304, 764)), "./neo-c.h", 1304, 765))->it) {
                __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 766)), "./neo-c.h", 1305, 767))->key_list, "./neo-c.h", 1305, 768)), "./neo-c.h", 1305, 769))->it, "./neo-c.h", 1305, 770)), "./neo-c.h", 1305, 771))->item;
                return __result61__;
            }
            (come_push_stackframe("./neo-c.h", 1309, 772),__exception_result_var_b61=memset(&result_63,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b61);
            __result62__ = __result_obj__ = result_63;
            return __result62__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_66;
void* __exception_result_var_b63;
unsigned int __exception_result_var_b64;
unsigned int hash_67;
unsigned int it_68;
_Bool _while_condtional11;
_Bool _if_conditional49;
_Bool __exception_result_var_b65;
_Bool _if_conditional50;
struct sVar* __result63__;
_Bool _if_conditional55;
_Bool _if_conditional56;
struct sVar* __result64__;
struct sVar* __result65__;
struct sVar* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_66, 0, sizeof(struct sVar*));
memset(&hash_67, 0, sizeof(unsigned int));
memset(&it_68, 0, sizeof(unsigned int));
                (come_push_stackframe("./neo-c.h", 1526, 777),__exception_result_var_b63=memset(&default_value_66,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b63);
                hash_67=(come_push_stackframe("./neo-c.h", 1528, 780),__exception_result_var_b64=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 778)), "./neo-c.h", 1528, 779))), come_pop_stackframe(), __exception_result_var_b64)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1528, 781)), "./neo-c.h", 1528, 782))->size;
                it_68=hash_67;
                while(_while_condtional11=(_Bool)1,                _while_condtional11) {
                    if(_if_conditional49=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1532, 783)), "./neo-c.h", 1532, 784))->item_existance, "./neo-c.h", 1532, 785))[it_68],                    _if_conditional49) {
                        if(_if_conditional50=(come_push_stackframe("./neo-c.h", 1534, 791),__exception_result_var_b65=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1534, 786)), "./neo-c.h", 1534, 787))->keys, "./neo-c.h", 1534, 788))[it_68], "./neo-c.h", 1534, 789)), "./neo-c.h", 1534, 790)),key), come_pop_stackframe(), __exception_result_var_b65),                        _if_conditional50) {
                            __result63__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1536, 792)), "./neo-c.h", 1536, 793))->items, "./neo-c.h", 1536, 794))[it_68];
                            come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 0, 0, (void*)0);
                            return __result63__;
                        }
                        it_68++;
                        if(_if_conditional55=it_68>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1541, 811)), "./neo-c.h", 1541, 812))->size,                        _if_conditional55) {
                            it_68=0;
                        }
                        else {
                            if(_if_conditional56=it_68==hash_67,                            _if_conditional56) {
                                __result64__ = __result_obj__ = default_value_66;
                                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result64__;
                            }
                        }
                    }
                    else {
                        __result65__ = __result_obj__ = default_value_66;
                        come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result65__;
                    }
                }
                __result66__ = __result_obj__ = default_value_66;
                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result66__;
                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional51=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 795)), "sVar_finalize", 0, 796))->mName!=((void*)0),                                _if_conditional51) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 797)), "sVar_finalize", 0, 798))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 797)), "sVar_finalize", 0, 798))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional52=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 799)), "sVar_finalize", 1, 800))->mCValueName!=((void*)0),                                _if_conditional52) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 801)), "sVar_finalize", 1, 802))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 801)), "sVar_finalize", 1, 802))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional53=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 803)), "sVar_finalize", 2, 804))->mType!=((void*)0),                                _if_conditional53) {
                                    come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 805)), "sVar_finalize", 2, 806))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional54=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 807)), "sVar_finalize", 3, 808))->mFunName!=((void*)0),                                _if_conditional54) {
                                    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 809)), "sVar_finalize", 3, 810))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 809)), "sVar_finalize", 3, 810))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sType* __result67__;
void* right_value85;
struct sType* result_70;
_Bool _if_conditional58;
_Bool _if_conditional59;
struct list$1sTypeph* __exception_result_var_b70;
void* right_value92;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional63;
struct tuple1$1sTypeph* __exception_result_var_b72;
void* right_value95;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional67;
struct tuple1$1sTypeph* __exception_result_var_b73;
void* right_value96;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional68;
char* __exception_result_var_b74;
void* right_value97;
char* __dec_obj19;
_Bool _if_conditional69;
struct list$1sTypeph* __exception_result_var_b75;
void* right_value98;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional70;
struct list$1sNodeph* __exception_result_var_b79;
void* right_value106;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct list$1sTypeph* __exception_result_var_b80;
void* right_value107;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional85;
struct list$1charph* __exception_result_var_b84;
void* right_value114;
struct list$1charph* __dec_obj29;
_Bool _if_conditional89;
struct tuple1$1sTypeph* __exception_result_var_b85;
void* right_value115;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional90;
_Bool _if_conditional91;
struct sNode* __exception_result_var_b86;
void* right_value116;
struct sNode* __dec_obj31;
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
struct sNode* __exception_result_var_b87;
void* right_value117;
struct sNode* __dec_obj32;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
char* __exception_result_var_b88;
void* right_value118;
char* __dec_obj33;
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
char* __exception_result_var_b89;
void* right_value119;
char* __dec_obj34;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct sType* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&result_70, 0, sizeof(struct sType*));
right_value92 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value98 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value119 = (void*)0;
                if(_if_conditional57=self==(void*)0,                _if_conditional57) {
                    __result67__ = __result_obj__ = (void*)0;
                    return __result67__;
                }
                result_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional58=self!=((void*)0),                _if_conditional58) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 4, 817)), "sType_clone", 4, 818))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 819)), "sType_clone", 4, 820))->mClass;
                }
                if(_if_conditional59=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 821)), "sType_clone", 5, 822))->mMultipleTypes!=((void*)0),                _if_conditional59) {
                    __dec_obj15=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 5, 823)), "sType_clone", 5, 824))->mMultipleTypes;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 5, 823)), "sType_clone", 5, 824))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=(come_push_stackframe("sType_clone", 5, 890),__exception_result_var_b70=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 825)), "sType_clone", 5, 826))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b70))));
                    come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional63=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 895)), "sType_clone", 6, 896))->mNoSolvedGenericsType!=((void*)0),                _if_conditional63) {
                    __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 6, 897)), "sType_clone", 6, 898))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 6, 897)), "sType_clone", 6, 898))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value95=(come_push_stackframe("sType_clone", 6, 912),__exception_result_var_b72=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 899)), "sType_clone", 6, 900))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b72))));
                    come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value95,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional67=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 913)), "sType_clone", 7, 914))->mOriginalLoadVarType!=((void*)0),                _if_conditional67) {
                    __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 7, 915)), "sType_clone", 7, 916))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 7, 915)), "sType_clone", 7, 916))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value96=(come_push_stackframe("sType_clone", 7, 919),__exception_result_var_b73=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 917)), "sType_clone", 7, 918))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b73))));
                    come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value96,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 920)), "sType_clone", 8, 921))->mGenericsName!=((void*)0),                _if_conditional68) {
                    __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 8, 922)), "sType_clone", 8, 923))->mGenericsName;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 8, 922)), "sType_clone", 8, 923))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value97=(come_push_stackframe("sType_clone", 8, 926),__exception_result_var_b74=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 924)), "sType_clone", 8, 925))->mGenericsName), come_pop_stackframe(), __exception_result_var_b74))));
                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 927)), "sType_clone", 9, 928))->mGenericsTypes!=((void*)0),                _if_conditional69) {
                    __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 9, 929)), "sType_clone", 9, 930))->mGenericsTypes;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 9, 929)), "sType_clone", 9, 930))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value98=(come_push_stackframe("sType_clone", 9, 933),__exception_result_var_b75=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 931)), "sType_clone", 9, 932))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b75))));
                    come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value98,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 934)), "sType_clone", 10, 935))->mArrayNum!=((void*)0),                _if_conditional70) {
                    __dec_obj24=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 10, 936)), "sType_clone", 10, 937))->mArrayNum;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 10, 936)), "sType_clone", 10, 937))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value106=(come_push_stackframe("sType_clone", 10, 1037),__exception_result_var_b79=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 938)), "sType_clone", 10, 939))->mArrayNum), come_pop_stackframe(), __exception_result_var_b79))));
                    come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value106,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional83=self!=((void*)0),                _if_conditional83) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 11, 1042)), "sType_clone", 11, 1043))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1044)), "sType_clone", 11, 1045))->mOmitArrayNum;
                }
                if(_if_conditional84=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1046)), "sType_clone", 12, 1047))->mParamTypes!=((void*)0),                _if_conditional84) {
                    __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 12, 1048)), "sType_clone", 12, 1049))->mParamTypes;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 12, 1048)), "sType_clone", 12, 1049))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(come_push_stackframe("sType_clone", 12, 1052),__exception_result_var_b80=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1050)), "sType_clone", 12, 1051))->mParamTypes), come_pop_stackframe(), __exception_result_var_b80))));
                    come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value107,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1053)), "sType_clone", 13, 1054))->mParamNames!=((void*)0),                _if_conditional85) {
                    __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 13, 1055)), "sType_clone", 13, 1056))->mParamNames;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 13, 1055)), "sType_clone", 13, 1056))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value114=(come_push_stackframe("sType_clone", 13, 1122),__exception_result_var_b84=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1057)), "sType_clone", 13, 1058))->mParamNames), come_pop_stackframe(), __exception_result_var_b84))));
                    come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value114,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional89=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1127)), "sType_clone", 14, 1128))->mResultType!=((void*)0),                _if_conditional89) {
                    __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 14, 1129)), "sType_clone", 14, 1130))->mResultType;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 14, 1129)), "sType_clone", 14, 1130))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value115=(come_push_stackframe("sType_clone", 14, 1133),__exception_result_var_b85=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1131)), "sType_clone", 14, 1132))->mResultType), come_pop_stackframe(), __exception_result_var_b85))));
                    come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value115,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional90=self!=((void*)0),                _if_conditional90) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 15, 1134)), "sType_clone", 15, 1135))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1136)), "sType_clone", 15, 1137))->mVarArgs;
                }
                if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1138)), "sType_clone", 16, 1139))->mAlignas!=((void*)0),                _if_conditional91) {
                    __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 16, 1140)), "sType_clone", 16, 1141))->mAlignas;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 16, 1140)), "sType_clone", 16, 1141))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=(come_push_stackframe("sType_clone", 16, 1144),__exception_result_var_b86=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1142)), "sType_clone", 16, 1143))->mAlignas), come_pop_stackframe(), __exception_result_var_b86))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional92=self!=((void*)0),                _if_conditional92) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 17, 1145)), "sType_clone", 17, 1146))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1147)), "sType_clone", 17, 1148))->mUnsigned;
                }
                if(_if_conditional93=self!=((void*)0),                _if_conditional93) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 18, 1149)), "sType_clone", 18, 1150))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1151)), "sType_clone", 18, 1152))->mShort;
                }
                if(_if_conditional94=self!=((void*)0),                _if_conditional94) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 19, 1153)), "sType_clone", 19, 1154))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1155)), "sType_clone", 19, 1156))->mLong;
                }
                if(_if_conditional95=self!=((void*)0),                _if_conditional95) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 20, 1157)), "sType_clone", 20, 1158))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1159)), "sType_clone", 20, 1160))->mLongLong;
                }
                if(_if_conditional96=self!=((void*)0),                _if_conditional96) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 21, 1161)), "sType_clone", 21, 1162))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1163)), "sType_clone", 21, 1164))->mConstant;
                }
                if(_if_conditional97=self!=((void*)0),                _if_conditional97) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 22, 1165)), "sType_clone", 22, 1166))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1167)), "sType_clone", 22, 1168))->mRegister;
                }
                if(_if_conditional98=self!=((void*)0),                _if_conditional98) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 23, 1169)), "sType_clone", 23, 1170))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1171)), "sType_clone", 23, 1172))->mVolatile;
                }
                if(_if_conditional99=self!=((void*)0),                _if_conditional99) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 24, 1173)), "sType_clone", 24, 1174))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1175)), "sType_clone", 24, 1176))->mStatic;
                }
                if(_if_conditional100=self!=((void*)0),                _if_conditional100) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 25, 1177)), "sType_clone", 25, 1178))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1179)), "sType_clone", 25, 1180))->mUniq;
                }
                if(_if_conditional101=self!=((void*)0),                _if_conditional101) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 26, 1181)), "sType_clone", 26, 1182))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1183)), "sType_clone", 26, 1184))->mRecord;
                }
                if(_if_conditional102=self!=((void*)0),                _if_conditional102) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 27, 1185)), "sType_clone", 27, 1186))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1187)), "sType_clone", 27, 1188))->mExtern;
                }
                if(_if_conditional103=self!=((void*)0),                _if_conditional103) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 28, 1189)), "sType_clone", 28, 1190))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1191)), "sType_clone", 28, 1192))->mRestrict;
                }
                if(_if_conditional104=self!=((void*)0),                _if_conditional104) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 29, 1193)), "sType_clone", 29, 1194))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1195)), "sType_clone", 29, 1196))->mImmutable;
                }
                if(_if_conditional105=self!=((void*)0),                _if_conditional105) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 30, 1197)), "sType_clone", 30, 1198))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1199)), "sType_clone", 30, 1200))->mHeap;
                }
                if(_if_conditional106=self!=((void*)0),                _if_conditional106) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 31, 1201)), "sType_clone", 31, 1202))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1203)), "sType_clone", 31, 1204))->mDummyHeap;
                }
                if(_if_conditional107=self!=((void*)0),                _if_conditional107) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 32, 1205)), "sType_clone", 32, 1206))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1207)), "sType_clone", 32, 1208))->mDelegate;
                }
                if(_if_conditional108=self!=((void*)0),                _if_conditional108) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 33, 1209)), "sType_clone", 33, 1210))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1211)), "sType_clone", 33, 1212))->mShare;
                }
                if(_if_conditional109=self!=((void*)0),                _if_conditional109) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 34, 1213)), "sType_clone", 34, 1214))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1215)), "sType_clone", 34, 1216))->mClone;
                }
                if(_if_conditional110=self!=((void*)0),                _if_conditional110) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 35, 1217)), "sType_clone", 35, 1218))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1219)), "sType_clone", 35, 1220))->mNoHeap;
                }
                if(_if_conditional111=self!=((void*)0),                _if_conditional111) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 36, 1221)), "sType_clone", 36, 1222))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1223)), "sType_clone", 36, 1224))->mNoCallingDestructor;
                }
                if(_if_conditional112=self!=((void*)0),                _if_conditional112) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 37, 1225)), "sType_clone", 37, 1226))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1227)), "sType_clone", 37, 1228))->mRefference;
                }
                if(_if_conditional113=self!=((void*)0),                _if_conditional113) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 38, 1229)), "sType_clone", 38, 1230))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1231)), "sType_clone", 38, 1232))->mException;
                }
                if(_if_conditional114=self!=((void*)0),                _if_conditional114) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 39, 1233)), "sType_clone", 39, 1234))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1235)), "sType_clone", 39, 1236))->mPointerNum;
                }
                if(_if_conditional115=self!=((void*)0),                _if_conditional115) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 40, 1237)), "sType_clone", 40, 1238))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1239)), "sType_clone", 40, 1240))->mOriginalTypeNamePointerNum;
                }
                if(_if_conditional116=self!=((void*)0),                _if_conditional116) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 41, 1241)), "sType_clone", 41, 1242))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1243)), "sType_clone", 41, 1244))->mNoArrayPointerNum;
                }
                if(_if_conditional117=self!=((void*)0),                _if_conditional117) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 42, 1245)), "sType_clone", 42, 1246))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1247)), "sType_clone", 42, 1248))->mTypedefOriginalPointerNum;
                }
                if(_if_conditional118=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1249)), "sType_clone", 43, 1250))->mSizeNum!=((void*)0),                _if_conditional118) {
                    __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 43, 1251)), "sType_clone", 43, 1252))->mSizeNum;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 43, 1251)), "sType_clone", 43, 1252))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=(come_push_stackframe("sType_clone", 43, 1255),__exception_result_var_b87=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1253)), "sType_clone", 43, 1254))->mSizeNum), come_pop_stackframe(), __exception_result_var_b87))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value117) { right_value117 = come_decrement_ref_count2(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional119=self!=((void*)0),                _if_conditional119) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 44, 1256)), "sType_clone", 44, 1257))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1258)), "sType_clone", 44, 1259))->mDynamicArrayNum;
                }
                if(_if_conditional120=self!=((void*)0),                _if_conditional120) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 45, 1260)), "sType_clone", 45, 1261))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1262)), "sType_clone", 45, 1263))->mTypeOfExpression;
                }
                if(_if_conditional121=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1264)), "sType_clone", 46, 1265))->mOriginalTypeName!=((void*)0),                _if_conditional121) {
                    __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 46, 1266)), "sType_clone", 46, 1267))->mOriginalTypeName;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 46, 1266)), "sType_clone", 46, 1267))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value118=(come_push_stackframe("sType_clone", 46, 1270),__exception_result_var_b88=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1268)), "sType_clone", 46, 1269))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b88))));
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional122=self!=((void*)0),                _if_conditional122) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 47, 1271)), "sType_clone", 47, 1272))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1273)), "sType_clone", 47, 1274))->mOriginalPointerNum;
                }
                if(_if_conditional123=self!=((void*)0),                _if_conditional123) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 48, 1275)), "sType_clone", 48, 1276))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1277)), "sType_clone", 48, 1278))->mFunctionParam;
                }
                if(_if_conditional124=self!=((void*)0),                _if_conditional124) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 49, 1279)), "sType_clone", 49, 1280))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1281)), "sType_clone", 49, 1282))->mAllocaValue;
                }
                if(_if_conditional125=self!=((void*)0),                _if_conditional125) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 50, 1283)), "sType_clone", 50, 1284))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1285)), "sType_clone", 50, 1286))->mGenericsStruct;
                }
                if(_if_conditional126=self!=((void*)0),                _if_conditional126) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 51, 1287)), "sType_clone", 51, 1288))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1289)), "sType_clone", 51, 1290))->mSolvedGenericsName;
                }
                if(_if_conditional127=self!=((void*)0),                _if_conditional127) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 52, 1291)), "sType_clone", 52, 1292))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1293)), "sType_clone", 52, 1294))->mComeMemCore;
                }
                if(_if_conditional128=self!=((void*)0),                _if_conditional128) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 53, 1295)), "sType_clone", 53, 1296))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1297)), "sType_clone", 53, 1298))->mInline;
                }
                if(_if_conditional129=self!=((void*)0),                _if_conditional129) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 54, 1299)), "sType_clone", 54, 1300))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1301)), "sType_clone", 54, 1302))->mNullValue;
                }
                if(_if_conditional130=self!=((void*)0),                _if_conditional130) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 55, 1303)), "sType_clone", 55, 1304))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1305)), "sType_clone", 55, 1306))->mGuardValue;
                }
                if(_if_conditional131=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1307)), "sType_clone", 56, 1308))->mAsmName!=((void*)0),                _if_conditional131) {
                    __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 56, 1309)), "sType_clone", 56, 1310))->mAsmName;
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 56, 1309)), "sType_clone", 56, 1310))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value119=(come_push_stackframe("sType_clone", 56, 1313),__exception_result_var_b89=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1311)), "sType_clone", 56, 1312))->mAsmName), come_pop_stackframe(), __exception_result_var_b89))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional132=self!=((void*)0),                _if_conditional132) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 57, 1314)), "sType_clone", 57, 1315))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1316)), "sType_clone", 57, 1317))->mArrayPointerType;
                }
                if(_if_conditional133=self!=((void*)0),                _if_conditional133) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 58, 1318)), "sType_clone", 58, 1319))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1320)), "sType_clone", 58, 1321))->mLambdaArray;
                }
                if(_if_conditional134=self!=((void*)0),                _if_conditional134) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_70, "sType_clone", 59, 1322)), "sType_clone", 59, 1323))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1324)), "sType_clone", 59, 1325))->mNoNumberArray;
                }
                __result84__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result84__;
                come_call_finalizer3(result_70,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional60;
struct list$1sTypeph* __result68__;
void* right_value86;
void* right_value87;
struct list$1sTypeph* __exception_result_var_b67;
struct list$1sTypeph* result_71;
struct list_item$1sTypeph* it_72;
_Bool _while_condtional12;
struct sType* __exception_result_var_b68;
void* right_value91;
struct list$1sTypeph* __exception_result_var_b69;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
right_value87 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct list_item$1sTypeph*));
right_value91 = (void*)0;
                        if(_if_conditional60=self==((void*)0),                        _if_conditional60) {
                            __result68__ = __result_obj__ = ((void*)0);
                            return __result68__;
                        }
                        result_71=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 835),__exception_result_var_b67=((struct list$1sTypeph*)(right_value87=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value86=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 827)), "./neo-c.h", 139, 828)))))), come_pop_stackframe(), __exception_result_var_b67));
                        come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value87,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_72=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 836)), "./neo-c.h", 141, 837))->head;
                        while(_while_condtional12=it_72!=((void*)0),                        _while_condtional12) {
                            (come_push_stackframe("./neo-c.h", 143, 887),__exception_result_var_b69=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_71, "./neo-c.h", 143, 838)), "./neo-c.h", 143, 839)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(come_push_stackframe("./neo-c.h", 143, 886),__exception_result_var_b68=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_72, "./neo-c.h", 143, 884)), "./neo-c.h", 143, 885))->item), come_pop_stackframe(), __exception_result_var_b68))))), come_pop_stackframe(), __exception_result_var_b69);
                            come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            it_72=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_72, "./neo-c.h", 145, 888)), "./neo-c.h", 145, 889))->next;
                        }
                        __result71__ = __result_obj__ = result_71;
                        come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result71__;
                        come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 829)), "./neo-c.h", 101, 830))->head=((void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 831)), "./neo-c.h", 102, 832))->tail=((void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 833)), "./neo-c.h", 103, 834))->len=0;
                            __result69__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result69__;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional61;
void* right_value88;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj12;
_Bool _if_conditional62;
void* right_value89;
struct list_item$1sTypeph* litem_74;
struct sType* __dec_obj13;
void* right_value90;
struct list_item$1sTypeph* litem_75;
struct sType* __dec_obj14;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value88 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sTypeph*));
right_value90 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional61=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 840)), "./neo-c.h", 152, 841))->len==0,                                _if_conditional61) {
                                    litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_73, "./neo-c.h", 155, 842)), "./neo-c.h", 155, 843))->prev=((void*)0);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_73, "./neo-c.h", 156, 844)), "./neo-c.h", 156, 845))->next=((void*)0);
                                    __dec_obj12=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_73, "./neo-c.h", 157, 846)), "./neo-c.h", 157, 847))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_73, "./neo-c.h", 157, 846)), "./neo-c.h", 157, 847))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 848)), "./neo-c.h", 159, 849))->tail=litem_73;
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 850)), "./neo-c.h", 160, 851))->head=litem_73;
                                }
                                else {
                                    if(_if_conditional62=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 852)), "./neo-c.h", 162, 853))->len==1,                                    _if_conditional62) {
                                        litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_74, "./neo-c.h", 165, 854)), "./neo-c.h", 165, 855))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 856)), "./neo-c.h", 165, 857))->head;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_74, "./neo-c.h", 166, 858)), "./neo-c.h", 166, 859))->next=((void*)0);
                                        __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_74, "./neo-c.h", 167, 860)), "./neo-c.h", 167, 861))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_74, "./neo-c.h", 167, 860)), "./neo-c.h", 167, 861))->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 862)), "./neo-c.h", 169, 863))->tail=litem_74;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 864)), "./neo-c.h", 170, 865))->head, "./neo-c.h", 170, 866)), "./neo-c.h", 170, 867))->next=litem_74;
                                    }
                                    else {
                                        litem_75=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                        come_call_finalizer3(right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_75, "./neo-c.h", 175, 868)), "./neo-c.h", 175, 869))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 870)), "./neo-c.h", 175, 871))->tail;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_75, "./neo-c.h", 176, 872)), "./neo-c.h", 176, 873))->next=((void*)0);
                                        __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_75, "./neo-c.h", 177, 874)), "./neo-c.h", 177, 875))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_75, "./neo-c.h", 177, 874)), "./neo-c.h", 177, 875))->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 876)), "./neo-c.h", 179, 877))->tail, "./neo-c.h", 179, 878)), "./neo-c.h", 179, 879))->next=litem_75;
                                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 880)), "./neo-c.h", 180, 881))->tail=litem_75;
                                    }
                                }
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 882)), "./neo-c.h", 183, 883))->len++;
                                __result70__ = __result_obj__ = self;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result70__;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_76;
_Bool _while_condtional13;
struct list_item$1sTypeph* prev_it_77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_76, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1sTypeph*));
                        it_76=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 891)), "./neo-c.h", 120, 892))->head;
                        while(_while_condtional13=it_76!=((void*)0),                        _while_condtional13) {
                            prev_it_77=it_76;
                            it_76=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_76, "./neo-c.h", 123, 893)), "./neo-c.h", 123, 894))->next;
                            come_call_finalizer3(prev_it_77,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional64;
struct tuple1$1sTypeph* __result72__;
void* right_value93;
struct tuple1$1sTypeph* result_78;
_Bool _if_conditional66;
struct sType* __exception_result_var_b71;
void* right_value94;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple1$1sTypeph*));
right_value94 = (void*)0;
                        if(_if_conditional64=self==(void*)0,                        _if_conditional64) {
                            __result72__ = __result_obj__ = (void*)0;
                            return __result72__;
                        }
                        result_78=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        come_call_finalizer3(right_value93,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional66=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 905)), "tuple1$1sTypephp_clone", 4, 906))->v1!=((void*)0),                        _if_conditional66) {
                            __dec_obj16=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_78, "tuple1$1sTypephp_clone", 4, 907)), "tuple1$1sTypephp_clone", 4, 908))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_78, "tuple1$1sTypephp_clone", 4, 907)), "tuple1$1sTypephp_clone", 4, 908))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 911),__exception_result_var_b71=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 909)), "tuple1$1sTypephp_clone", 4, 910))->v1), come_pop_stackframe(), __exception_result_var_b71))));
                            come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value94,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        __result73__ = __result_obj__ = result_78;
                        come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result73__;
                        come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional65;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional65=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 901)), "tuple1$1sTypeph_finalize", 0, 902))->v1!=((void*)0),                            _if_conditional65) {
                                come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 903)), "tuple1$1sTypeph_finalize", 0, 904))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional71;
struct list$1sNodeph* __result74__;
void* right_value99;
void* right_value100;
struct list$1sNodeph* __exception_result_var_b76;
struct list$1sNodeph* result_79;
struct list_item$1sNodeph* it_80;
_Bool _while_condtional14;
struct sNode* __exception_result_var_b77;
void* right_value105;
struct list$1sNodeph* __exception_result_var_b78;
struct list$1sNodeph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
right_value100 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1sNodeph*));
memset(&it_80, 0, sizeof(struct list_item$1sNodeph*));
right_value105 = (void*)0;
                        if(_if_conditional71=self==((void*)0),                        _if_conditional71) {
                            __result74__ = __result_obj__ = ((void*)0);
                            return __result74__;
                        }
                        result_79=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 948),__exception_result_var_b76=((struct list$1sNodeph*)(right_value100=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value99=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 940)), "./neo-c.h", 139, 941)))))), come_pop_stackframe(), __exception_result_var_b76));
                        come_call_finalizer3(right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_80=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 949)), "./neo-c.h", 141, 950))->head;
                        while(_while_condtional14=it_80!=((void*)0),                        _while_condtional14) {
                            (come_push_stackframe("./neo-c.h", 143, 1034),__exception_result_var_b78=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_79, "./neo-c.h", 143, 951)), "./neo-c.h", 143, 952)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=(come_push_stackframe("./neo-c.h", 143, 1033),__exception_result_var_b77=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_80, "./neo-c.h", 143, 997)), "./neo-c.h", 143, 998))->item), come_pop_stackframe(), __exception_result_var_b77))))), come_pop_stackframe(), __exception_result_var_b78);
                            if(right_value105) { right_value105 = come_decrement_ref_count2(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_80=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_80, "./neo-c.h", 145, 1035)), "./neo-c.h", 145, 1036))->next;
                        }
                        __result79__ = __result_obj__ = result_79;
                        come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                        come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 942)), "./neo-c.h", 101, 943))->head=((void*)0);
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 944)), "./neo-c.h", 102, 945))->tail=((void*)0);
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 946)), "./neo-c.h", 103, 947))->len=0;
                            __result75__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result75__;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional72;
void* right_value101;
struct list_item$1sNodeph* litem_81;
struct sNode* __dec_obj21;
_Bool _if_conditional73;
void* right_value102;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj22;
void* right_value103;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional72=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 953)), "./neo-c.h", 152, 954))->len==0,                                _if_conditional72) {
                                    litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_81, "./neo-c.h", 155, 955)), "./neo-c.h", 155, 956))->prev=((void*)0);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_81, "./neo-c.h", 156, 957)), "./neo-c.h", 156, 958))->next=((void*)0);
                                    __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_81, "./neo-c.h", 157, 959)), "./neo-c.h", 157, 960))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_81, "./neo-c.h", 157, 959)), "./neo-c.h", 157, 960))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 961)), "./neo-c.h", 159, 962))->tail=litem_81;
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 963)), "./neo-c.h", 160, 964))->head=litem_81;
                                }
                                else {
                                    if(_if_conditional73=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 965)), "./neo-c.h", 162, 966))->len==1,                                    _if_conditional73) {
                                        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_82, "./neo-c.h", 165, 967)), "./neo-c.h", 165, 968))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 969)), "./neo-c.h", 165, 970))->head;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_82, "./neo-c.h", 166, 971)), "./neo-c.h", 166, 972))->next=((void*)0);
                                        __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_82, "./neo-c.h", 167, 973)), "./neo-c.h", 167, 974))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_82, "./neo-c.h", 167, 973)), "./neo-c.h", 167, 974))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 975)), "./neo-c.h", 169, 976))->tail=litem_82;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 977)), "./neo-c.h", 170, 978))->head, "./neo-c.h", 170, 979)), "./neo-c.h", 170, 980))->next=litem_82;
                                    }
                                    else {
                                        litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                        come_call_finalizer3(right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_83, "./neo-c.h", 175, 981)), "./neo-c.h", 175, 982))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 983)), "./neo-c.h", 175, 984))->tail;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_83, "./neo-c.h", 176, 985)), "./neo-c.h", 176, 986))->next=((void*)0);
                                        __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_83, "./neo-c.h", 177, 987)), "./neo-c.h", 177, 988))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_83, "./neo-c.h", 177, 987)), "./neo-c.h", 177, 988))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 989)), "./neo-c.h", 179, 990))->tail, "./neo-c.h", 179, 991)), "./neo-c.h", 179, 992))->next=litem_83;
                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 993)), "./neo-c.h", 180, 994))->tail=litem_83;
                                    }
                                }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 995)), "./neo-c.h", 183, 996))->len++;
                                __result76__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result76__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional74;
struct sNode* __result77__;
void* right_value104;
struct sNode* result_84;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
struct sNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&result_84, 0, sizeof(struct sNode*));
                                if(_if_conditional74=self==(void*)0,                                _if_conditional74) {
                                    __result77__ = __result_obj__ = (void*)0;
                                    return __result77__;
                                }
                                result_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(_if_conditional75=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 999)), "sNode_clone", 4, 1000))->clone!=((void*)0),                                _if_conditional75) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 4, 1001)), "sNode_clone", 4, 1002))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1003)), "sNode_clone", 4, 1004))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 1003)), "sNode_clone", 4, 1004))->_protocol_obj);
                                }
                                if(_if_conditional76=self!=((void*)0),                                _if_conditional76) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 5, 1005)), "sNode_clone", 5, 1006))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 1007)), "sNode_clone", 5, 1008))->finalize;
                                }
                                if(_if_conditional77=self!=((void*)0),                                _if_conditional77) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 6, 1009)), "sNode_clone", 6, 1010))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 1011)), "sNode_clone", 6, 1012))->clone;
                                }
                                if(_if_conditional78=self!=((void*)0),                                _if_conditional78) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 7, 1013)), "sNode_clone", 7, 1014))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 1015)), "sNode_clone", 7, 1016))->compile;
                                }
                                if(_if_conditional79=self!=((void*)0),                                _if_conditional79) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 8, 1017)), "sNode_clone", 8, 1018))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 1019)), "sNode_clone", 8, 1020))->sline;
                                }
                                if(_if_conditional80=self!=((void*)0),                                _if_conditional80) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 9, 1021)), "sNode_clone", 9, 1022))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 1023)), "sNode_clone", 9, 1024))->sname;
                                }
                                if(_if_conditional81=self!=((void*)0),                                _if_conditional81) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 10, 1025)), "sNode_clone", 10, 1026))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 1027)), "sNode_clone", 10, 1028))->terminated;
                                }
                                if(_if_conditional82=self!=((void*)0),                                _if_conditional82) {
                                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_84, "sNode_clone", 11, 1029)), "sNode_clone", 11, 1030))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 1031)), "sNode_clone", 11, 1032))->kind;
                                }
                                __result78__ = __result_obj__ = result_84;
                                if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result78__;
                                if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_85;
_Bool _while_condtional15;
struct list_item$1sNodeph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1sNodeph*));
                        it_85=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 1038)), "./neo-c.h", 120, 1039))->head;
                        while(_while_condtional15=it_85!=((void*)0),                        _while_condtional15) {
                            prev_it_86=it_85;
                            it_85=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_85, "./neo-c.h", 123, 1040)), "./neo-c.h", 123, 1041))->next;
                            come_call_finalizer3(prev_it_86,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional86;
struct list$1charph* __result80__;
void* right_value108;
void* right_value109;
struct list$1charph* __exception_result_var_b81;
struct list$1charph* result_87;
struct list_item$1charph* it_88;
_Bool _while_condtional16;
char* __exception_result_var_b82;
void* right_value113;
struct list$1charph* __exception_result_var_b83;
struct list$1charph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
memset(&result_87, 0, sizeof(struct list$1charph*));
memset(&it_88, 0, sizeof(struct list_item$1charph*));
right_value113 = (void*)0;
                        if(_if_conditional86=self==((void*)0),                        _if_conditional86) {
                            __result80__ = __result_obj__ = ((void*)0);
                            return __result80__;
                        }
                        result_87=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1067),__exception_result_var_b81=((struct list$1charph*)(right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1059)), "./neo-c.h", 139, 1060)))))), come_pop_stackframe(), __exception_result_var_b81));
                        come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_88=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1068)), "./neo-c.h", 141, 1069))->head;
                        while(_while_condtional16=it_88!=((void*)0),                        _while_condtional16) {
                            (come_push_stackframe("./neo-c.h", 143, 1119),__exception_result_var_b83=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_87, "./neo-c.h", 143, 1070)), "./neo-c.h", 143, 1071)),(char*)come_increment_ref_count(((char*)(right_value113=(come_push_stackframe("./neo-c.h", 143, 1118),__exception_result_var_b82=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_88, "./neo-c.h", 143, 1116)), "./neo-c.h", 143, 1117))->item), come_pop_stackframe(), __exception_result_var_b82))))), come_pop_stackframe(), __exception_result_var_b83);
                            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_88=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_88, "./neo-c.h", 145, 1120)), "./neo-c.h", 145, 1121))->next;
                        }
                        __result83__ = __result_obj__ = result_87;
                        come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result83__;
                        come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1061)), "./neo-c.h", 101, 1062))->head=((void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1063)), "./neo-c.h", 102, 1064))->tail=((void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1065)), "./neo-c.h", 103, 1066))->len=0;
                            __result81__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result81__;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional87;
void* right_value110;
struct list_item$1charph* litem_89;
char* __dec_obj26;
_Bool _if_conditional88;
void* right_value111;
struct list_item$1charph* litem_90;
char* __dec_obj27;
void* right_value112;
struct list_item$1charph* litem_91;
char* __dec_obj28;
struct list$1charph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
right_value112 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional87=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1072)), "./neo-c.h", 152, 1073))->len==0,                                _if_conditional87) {
                                    litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                    come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_89, "./neo-c.h", 155, 1074)), "./neo-c.h", 155, 1075))->prev=((void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_89, "./neo-c.h", 156, 1076)), "./neo-c.h", 156, 1077))->next=((void*)0);
                                    __dec_obj26=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_89, "./neo-c.h", 157, 1078)), "./neo-c.h", 157, 1079))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_89, "./neo-c.h", 157, 1078)), "./neo-c.h", 157, 1079))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1080)), "./neo-c.h", 159, 1081))->tail=litem_89;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1082)), "./neo-c.h", 160, 1083))->head=litem_89;
                                }
                                else {
                                    if(_if_conditional88=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1084)), "./neo-c.h", 162, 1085))->len==1,                                    _if_conditional88) {
                                        litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                        come_call_finalizer3(right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_90, "./neo-c.h", 165, 1086)), "./neo-c.h", 165, 1087))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1088)), "./neo-c.h", 165, 1089))->head;
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_90, "./neo-c.h", 166, 1090)), "./neo-c.h", 166, 1091))->next=((void*)0);
                                        __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_90, "./neo-c.h", 167, 1092)), "./neo-c.h", 167, 1093))->item;
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_90, "./neo-c.h", 167, 1092)), "./neo-c.h", 167, 1093))->item=(char*)come_increment_ref_count(item);
                                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1094)), "./neo-c.h", 169, 1095))->tail=litem_90;
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1096)), "./neo-c.h", 170, 1097))->head, "./neo-c.h", 170, 1098)), "./neo-c.h", 170, 1099))->next=litem_90;
                                    }
                                    else {
                                        litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                        come_call_finalizer3(right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_91, "./neo-c.h", 175, 1100)), "./neo-c.h", 175, 1101))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1102)), "./neo-c.h", 175, 1103))->tail;
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_91, "./neo-c.h", 176, 1104)), "./neo-c.h", 176, 1105))->next=((void*)0);
                                        __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_91, "./neo-c.h", 177, 1106)), "./neo-c.h", 177, 1107))->item;
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_91, "./neo-c.h", 177, 1106)), "./neo-c.h", 177, 1107))->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1108)), "./neo-c.h", 179, 1109))->tail, "./neo-c.h", 179, 1110)), "./neo-c.h", 179, 1111))->next=litem_91;
                                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1112)), "./neo-c.h", 180, 1113))->tail=litem_91;
                                    }
                                }
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1114)), "./neo-c.h", 183, 1115))->len++;
                                __result82__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result82__;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_92;
_Bool _while_condtional17;
struct list_item$1charph* prev_it_93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_92, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_93, 0, sizeof(struct list_item$1charph*));
                        it_92=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1123)), "./neo-c.h", 120, 1124))->head;
                        while(_while_condtional17=it_92!=((void*)0),                        _while_condtional17) {
                            prev_it_93=it_92;
                            it_92=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_92, "./neo-c.h", 123, 1125)), "./neo-c.h", 123, 1126))->next;
                            come_call_finalizer3(prev_it_93,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj35;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj35=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1332)), "./neo-c.h", 1744, 1333))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 1332)), "./neo-c.h", 1744, 1333))->v1=(char*)come_increment_ref_count(v1);
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj36=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1334)), "./neo-c.h", 1745, 1335))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 1334)), "./neo-c.h", 1745, 1335))->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                __result85__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional140;
int __result86__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional140=self==((void*)0),                                    _if_conditional140) {
                                        __result86__ = 0;
                                        return __result86__;
                                    }
                                    __result87__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 1365)), "./neo-c.h", 360, 1366))->len;
                                    return __result87__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_96;
_Bool _while_condtional18;
struct list_item$1sNodeph* prev_it_97;
struct list$1sNodeph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sNodeph*));
                                        it_96=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 426, 1373)), "./neo-c.h", 426, 1374))->head;
                                        while(_while_condtional18=it_96!=((void*)0),                                        _while_condtional18) {
                                            prev_it_97=it_96;
                                            it_96=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_96, "./neo-c.h", 429, 1375)), "./neo-c.h", 429, 1376))->next;
                                            come_call_finalizer3(prev_it_97,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 433, 1377)), "./neo-c.h", 433, 1378))->head=((void*)0);
                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 434, 1379)), "./neo-c.h", 434, 1380))->tail=((void*)0);
                                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 436, 1381)), "./neo-c.h", 436, 1382))->len=0;
                                        __result88__ = __result_obj__ = self;
                                        return __result88__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional142;
void* right_value128;
struct list_item$1tuple2$2charphsTypephph* litem_99;
struct tuple2$2charphsTypeph* __dec_obj37;
_Bool _if_conditional145;
void* right_value129;
struct list_item$1tuple2$2charphsTypephph* litem_100;
struct tuple2$2charphsTypeph* __dec_obj38;
void* right_value130;
struct list_item$1tuple2$2charphsTypephph* litem_101;
struct tuple2$2charphsTypeph* __dec_obj39;
struct list$1tuple2$2charphsTypephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value129 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value130 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        if(_if_conditional142=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 222, 1393)), "./neo-c.h", 222, 1394))->len==0,                                        _if_conditional142) {
                                            litem_99=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value128=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsTypephph"))));
                                            come_call_finalizer3(right_value128,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_99, "./neo-c.h", 225, 1395)), "./neo-c.h", 225, 1396))->prev=((void*)0);
                                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_99, "./neo-c.h", 226, 1397)), "./neo-c.h", 226, 1398))->next=((void*)0);
                                            __dec_obj37=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_99, "./neo-c.h", 227, 1399)), "./neo-c.h", 227, 1400))->item;
                                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_99, "./neo-c.h", 227, 1399)), "./neo-c.h", 227, 1400))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                            come_call_finalizer3(__dec_obj37,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 229, 1409)), "./neo-c.h", 229, 1410))->tail=litem_99;
                                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 230, 1411)), "./neo-c.h", 230, 1412))->head=litem_99;
                                        }
                                        else {
                                            if(_if_conditional145=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 232, 1413)), "./neo-c.h", 232, 1414))->len==1,                                            _if_conditional145) {
                                                litem_100=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value129=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value129,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_100, "./neo-c.h", 235, 1415)), "./neo-c.h", 235, 1416))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 235, 1417)), "./neo-c.h", 235, 1418))->head;
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_100, "./neo-c.h", 236, 1419)), "./neo-c.h", 236, 1420))->next=((void*)0);
                                                __dec_obj38=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_100, "./neo-c.h", 237, 1421)), "./neo-c.h", 237, 1422))->item;
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_100, "./neo-c.h", 237, 1421)), "./neo-c.h", 237, 1422))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 239, 1431)), "./neo-c.h", 239, 1432))->tail=litem_100;
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 240, 1433)), "./neo-c.h", 240, 1434))->head, "./neo-c.h", 240, 1435)), "./neo-c.h", 240, 1436))->next=litem_100;
                                            }
                                            else {
                                                litem_101=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value130=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(right_value130,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_101, "./neo-c.h", 245, 1437)), "./neo-c.h", 245, 1438))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 245, 1439)), "./neo-c.h", 245, 1440))->tail;
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_101, "./neo-c.h", 246, 1441)), "./neo-c.h", 246, 1442))->next=((void*)0);
                                                __dec_obj39=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_101, "./neo-c.h", 247, 1443)), "./neo-c.h", 247, 1444))->item;
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_101, "./neo-c.h", 247, 1443)), "./neo-c.h", 247, 1444))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 249, 1453)), "./neo-c.h", 249, 1454))->tail, "./neo-c.h", 249, 1455)), "./neo-c.h", 249, 1456))->next=litem_101;
                                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 250, 1457)), "./neo-c.h", 250, 1458))->tail=litem_101;
                                            }
                                        }
                                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 253, 1459)), "./neo-c.h", 253, 1460))->len++;
                                        __result89__ = __result_obj__ = self;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result89__;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional148=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1445)), "tuple2$2charphsTypephp_finalize", 0, 1446))->v1!=((void*)0),                                                    _if_conditional148) {
                                                        ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1447)), "tuple2$2charphsTypephp_finalize", 0, 1448))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 1447)), "tuple2$2charphsTypephp_finalize", 0, 1448))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional149=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1449)), "tuple2$2charphsTypephp_finalize", 1, 1450))->v2!=((void*)0),                                                    _if_conditional149) {
                                                        come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 1451)), "tuple2$2charphsTypephp_finalize", 1, 1452))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional150;
struct tuple2$2charphsTypeph* __result90__;
void* right_value131;
struct tuple2$2charphsTypeph* result_102;
_Bool _if_conditional153;
char* __exception_result_var_b101;
void* right_value132;
char* __dec_obj40;
_Bool _if_conditional154;
struct sType* __exception_result_var_b102;
void* right_value133;
struct sType* __dec_obj41;
struct tuple2$2charphsTypeph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
memset(&result_102, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value132 = (void*)0;
right_value133 = (void*)0;
                                        if(_if_conditional150=self==(void*)0,                                        _if_conditional150) {
                                            __result90__ = __result_obj__ = (void*)0;
                                            return __result90__;
                                        }
                                        result_102=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value131=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                                        come_call_finalizer3(right_value131,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional153=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 1469)), "tuple2$2charphsTypephp_clone", 4, 1470))->v1!=((void*)0),                                        _if_conditional153) {
                                            __dec_obj40=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_102, "tuple2$2charphsTypephp_clone", 4, 1471)), "tuple2$2charphsTypephp_clone", 4, 1472))->v1;
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_102, "tuple2$2charphsTypephp_clone", 4, 1471)), "tuple2$2charphsTypephp_clone", 4, 1472))->v1=(char*)come_increment_ref_count(((char*)(right_value132=(come_push_stackframe("tuple2$2charphsTypephp_clone", 4, 1475),__exception_result_var_b101=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4, 1473)), "tuple2$2charphsTypephp_clone", 4, 1474))->v1), come_pop_stackframe(), __exception_result_var_b101))));
                                            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional154=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 1476)), "tuple2$2charphsTypephp_clone", 5, 1477))->v2!=((void*)0),                                        _if_conditional154) {
                                            __dec_obj41=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_102, "tuple2$2charphsTypephp_clone", 5, 1478)), "tuple2$2charphsTypephp_clone", 5, 1479))->v2;
                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(result_102, "tuple2$2charphsTypephp_clone", 5, 1478)), "tuple2$2charphsTypephp_clone", 5, 1479))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=(come_push_stackframe("tuple2$2charphsTypephp_clone", 5, 1482),__exception_result_var_b102=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5, 1480)), "tuple2$2charphsTypephp_clone", 5, 1481))->v2), come_pop_stackframe(), __exception_result_var_b102))));
                                            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        }
                                        __result91__ = __result_obj__ = result_102;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result91__;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional151;
_Bool _if_conditional152;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional151=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1461)), "tuple2$2charphsTypeph_finalize", 0, 1462))->v1!=((void*)0),                                            _if_conditional151) {
                                                ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1463)), "tuple2$2charphsTypeph_finalize", 0, 1464))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0, 1463)), "tuple2$2charphsTypeph_finalize", 0, 1464))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional152=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 1465)), "tuple2$2charphsTypeph_finalize", 1, 1466))->v2!=((void*)0),                                            _if_conditional152) {
                                                come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1, 1467)), "tuple2$2charphsTypeph_finalize", 1, 1468))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
int i_103;
_Bool _if_conditional155;
_Bool _if_conditional156;
int i_104;
_Bool _if_conditional157;
_Bool _if_conditional158;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
            for(            i_103=0;            i_103<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1111, 1491)), "./neo-c.h", 1111, 1492))->size;            i_103++            ){
                if(_if_conditional155=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1112, 1493)), "./neo-c.h", 1112, 1494))->item_existance, "./neo-c.h", 1112, 1495))[i_103],                _if_conditional155) {
                    if(_if_conditional156=1,                    _if_conditional156) {
                        come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1114, 1496)), "./neo-c.h", 1114, 1497))->items, "./neo-c.h", 1114, 1498))[i_103],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1118,1501),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1118, 1499)), "./neo-c.h", 1118, 1500))->items),come_pop_stackframe());
            for(            i_104=0;            i_104<((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1120, 1502)), "./neo-c.h", 1120, 1503))->size;            i_104++            ){
                if(_if_conditional157=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1121, 1504)), "./neo-c.h", 1121, 1505))->item_existance, "./neo-c.h", 1121, 1506))[i_104],                _if_conditional157) {
                    if(_if_conditional158=1,                    _if_conditional158) {
                        ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1507)), "./neo-c.h", 1123, 1508))->keys, "./neo-c.h", 1123, 1509))[i_104] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1123, 1507)), "./neo-c.h", 1123, 1508))->keys, "./neo-c.h", 1123, 1509))[i_104], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            (come_push_stackframe("./neo-c.h", 1127,1512),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1127, 1510)), "./neo-c.h", 1127, 1511))->keys),come_pop_stackframe());
            come_call_finalizer3(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1129, 1513)), "./neo-c.h", 1129, 1514))->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1519)), "./neo-c.h", 1131, 1520))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1131, 1519)), "./neo-c.h", 1131, 1520))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_105;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_105, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                it_105=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 120, 1515)), "./neo-c.h", 120, 1516))->head;
                while(_while_condtional19=it_105!=((void*)0),                _while_condtional19) {
                    prev_it_106=it_105;
                    it_105=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_105, "./neo-c.h", 123, 1517)), "./neo-c.h", 123, 1518))->next;
                    come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool _if_conditional159;
unsigned int __exception_result_var_b121;
unsigned int hash_124;
unsigned int it_125;
_Bool _while_condtional22;
_Bool _if_conditional171;
_Bool __exception_result_var_b122;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct list$1charp* __exception_result_var_b126;
struct list$1charp* __exception_result_var_b127;
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
int __exception_result_var_b128;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool same_key_exist_142;
char* __exception_result_var_b131;
char* it2_145;
_Bool __exception_result_var_b132;
char* __exception_result_var_b135;
_Bool __exception_result_var_b136;
_Bool _if_conditional202;
_Bool _if_conditional203;
struct list$1charp* __exception_result_var_b137;
struct map$2charphsClassph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_124, 0, sizeof(unsigned int));
memset(&it_125, 0, sizeof(unsigned int));
memset(&same_key_exist_142, 0, sizeof(_Bool));
memset(&it2_145, 0, sizeof(char*));
        if(_if_conditional159=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1528)), "./neo-c.h", 1371, 1529))->len*10>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1371, 1530)), "./neo-c.h", 1371, 1531))->size,        _if_conditional159) {
            (come_push_stackframe("./neo-c.h", 1372,1651),map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1372, 1532)), "./neo-c.h", 1372, 1533))),come_pop_stackframe());
        }
        hash_124=(come_push_stackframe("./neo-c.h", 1374, 1654),__exception_result_var_b121=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 1652)), "./neo-c.h", 1374, 1653))), come_pop_stackframe(), __exception_result_var_b121)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1374, 1655)), "./neo-c.h", 1374, 1656))->size;
        it_125=hash_124;
        while(_while_condtional22=(_Bool)1,        _while_condtional22) {
            if(_if_conditional171=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1378, 1657)), "./neo-c.h", 1378, 1658))->item_existance, "./neo-c.h", 1378, 1659))[it_125],            _if_conditional171) {
                if(_if_conditional172=(come_push_stackframe("./neo-c.h", 1380, 1665),__exception_result_var_b122=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1380, 1660)), "./neo-c.h", 1380, 1661))->keys, "./neo-c.h", 1380, 1662))[it_125], "./neo-c.h", 1380, 1663)), "./neo-c.h", 1380, 1664)),key), come_pop_stackframe(), __exception_result_var_b122),                _if_conditional172) {
                    if(_if_conditional173=1,                    _if_conditional173) {
                        (come_push_stackframe("./neo-c.h", 1383, 1754),__exception_result_var_b126=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1666)), "./neo-c.h", 1383, 1667))->key_list, "./neo-c.h", 1383, 1668)), "./neo-c.h", 1383, 1669)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1383, 1751)), "./neo-c.h", 1383, 1752))->keys, "./neo-c.h", 1383, 1753))[it_125]), come_pop_stackframe(), __exception_result_var_b126);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1755)), "./neo-c.h", 1384, 1756))->keys, "./neo-c.h", 1384, 1757))[it_125] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1384, 1755)), "./neo-c.h", 1384, 1756))->keys, "./neo-c.h", 1384, 1757))[it_125], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1385, 1758)), "./neo-c.h", 1385, 1759))->keys, "./neo-c.h", 1385, 1760))[it_125]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        (come_push_stackframe("./neo-c.h", 1388, 1768),__exception_result_var_b127=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1761)), "./neo-c.h", 1388, 1762))->key_list, "./neo-c.h", 1388, 1763)), "./neo-c.h", 1388, 1764)),((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1388, 1765)), "./neo-c.h", 1388, 1766))->keys, "./neo-c.h", 1388, 1767))[it_125]), come_pop_stackframe(), __exception_result_var_b127);
                        ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1389, 1769)), "./neo-c.h", 1389, 1770))->keys, "./neo-c.h", 1389, 1771))[it_125]=key;
                    }
                    if(_if_conditional193=1,                    _if_conditional193) {
                        come_call_finalizer3(((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1392, 1772)), "./neo-c.h", 1392, 1773))->items, "./neo-c.h", 1392, 1774))[it_125],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1393, 1775)), "./neo-c.h", 1393, 1776))->items, "./neo-c.h", 1393, 1777))[it_125]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1396, 1778)), "./neo-c.h", 1396, 1779))->items, "./neo-c.h", 1396, 1780))[it_125]=item;
                    }
                    break;
                }
                it_125++;
                if(_if_conditional194=it_125>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1403, 1781)), "./neo-c.h", 1403, 1782))->size,                _if_conditional194) {
                    it_125=0;
                }
                else {
                    if(_if_conditional195=it_125==hash_124,                    _if_conditional195) {
                        (come_push_stackframe("./neo-c.h", 1407, 1783),__exception_result_var_b128=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b128);
                        (come_push_stackframe("./neo-c.h", 1408,1784),stackframe(),come_pop_stackframe());
                        (come_push_stackframe("./neo-c.h", 1409,1785),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                ((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1413, 1786)), "./neo-c.h", 1413, 1787))->item_existance, "./neo-c.h", 1413, 1788))[it_125]=(_Bool)1;
                if(_if_conditional196=1,                _if_conditional196) {
                    ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1415, 1789)), "./neo-c.h", 1415, 1790))->keys, "./neo-c.h", 1415, 1791))[it_125]=(char*)come_increment_ref_count(key);
                }
                else {
                    ((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1418, 1792)), "./neo-c.h", 1418, 1793))->keys, "./neo-c.h", 1418, 1794))[it_125]=key;
                }
                if(_if_conditional197=1,                _if_conditional197) {
                    ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1421, 1795)), "./neo-c.h", 1421, 1796))->items, "./neo-c.h", 1421, 1797))[it_125]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1424, 1798)), "./neo-c.h", 1424, 1799))->items, "./neo-c.h", 1424, 1800))[it_125]=item;
                }
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1427, 1801)), "./neo-c.h", 1427, 1802))->len++;
                break;
            }
        }
        same_key_exist_142=(_Bool)0;
        for(        it2_145=(come_push_stackframe("./neo-c.h", 1434, 1819),__exception_result_var_b131=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1803)), "./neo-c.h", 1434, 1804))->key_list, "./neo-c.h", 1434, 1805)), "./neo-c.h", 1434, 1806))), come_pop_stackframe(), __exception_result_var_b131);        !(come_push_stackframe("./neo-c.h", 1434, 1826),__exception_result_var_b132=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1820)), "./neo-c.h", 1434, 1821))->key_list, "./neo-c.h", 1434, 1822)), "./neo-c.h", 1434, 1823))), come_pop_stackframe(), __exception_result_var_b132);        it2_145=(come_push_stackframe("./neo-c.h", 1434, 1847),__exception_result_var_b135=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1434, 1827)), "./neo-c.h", 1434, 1828))->key_list, "./neo-c.h", 1434, 1829)), "./neo-c.h", 1434, 1830))), come_pop_stackframe(), __exception_result_var_b135)        ){
            if(_if_conditional202=(come_push_stackframe("./neo-c.h", 1436, 1850),__exception_result_var_b136=string_equals(((char*)come_null_check(((char*)come_null_check(it2_145, "./neo-c.h", 1436, 1848)), "./neo-c.h", 1436, 1849)),key), come_pop_stackframe(), __exception_result_var_b136),            _if_conditional202) {
                same_key_exist_142=(_Bool)1;
            }
        }
        if(_if_conditional203=!same_key_exist_142,        _if_conditional203) {
            (come_push_stackframe("./neo-c.h", 1442, 1899),__exception_result_var_b137=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1442, 1851)), "./neo-c.h", 1442, 1852))->key_list, "./neo-c.h", 1442, 1853)), "./neo-c.h", 1442, 1854)),key), come_pop_stackframe(), __exception_result_var_b137);
        }
        __result115__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result115__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
int size_107;
void* right_value136;
char** keys_108;
void* right_value137;
struct sClass** items_109;
void* right_value138;
_Bool* item_existance_110;
int len_111;
char* __exception_result_var_b109;
char* it_114;
_Bool __exception_result_var_b110;
char* __exception_result_var_b113;
struct sClass* default_value_117;
void* __exception_result_var_b114;
struct sClass* __exception_result_var_b117;
struct sClass* it2_118;
unsigned int __exception_result_var_b118;
unsigned int hash_121;
int n_122;
_Bool _while_condtional21;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
int __exception_result_var_b119;
struct sClass* default_value_123;
struct sClass* __exception_result_var_b120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_107, 0, sizeof(int));
right_value136 = (void*)0;
memset(&keys_108, 0, sizeof(char**));
right_value137 = (void*)0;
memset(&items_109, 0, sizeof(struct sClass**));
right_value138 = (void*)0;
memset(&item_existance_110, 0, sizeof(_Bool*));
memset(&len_111, 0, sizeof(int));
memset(&it_114, 0, sizeof(char*));
memset(&default_value_117, 0, sizeof(struct sClass*));
memset(&it2_118, 0, sizeof(struct sClass*));
memset(&hash_121, 0, sizeof(unsigned int));
memset(&n_122, 0, sizeof(int));
memset(&default_value_123, 0, sizeof(struct sClass*));
                size_107=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1318, 1534)), "./neo-c.h", 1318, 1535))->size*10;
                keys_108=(char**)come_increment_ref_count(((char**)(right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "./neo-c.h", 1319, "char*%"))));
                right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "./neo-c.h", 1320, "sClass*%"))));
                come_call_finalizer3(right_value137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_110=(_Bool*)come_increment_ref_count(((_Bool*)(right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "./neo-c.h", 1321, "bool"))));
                right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_111=0;
                for(                it_114=(come_push_stackframe("./neo-c.h", 1325, 1558),__exception_result_var_b109=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1536)), "./neo-c.h", 1325, 1537))), come_pop_stackframe(), __exception_result_var_b109);                !(come_push_stackframe("./neo-c.h", 1325, 1567),__exception_result_var_b110=map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1559)), "./neo-c.h", 1325, 1560))), come_pop_stackframe(), __exception_result_var_b110);                it_114=(come_push_stackframe("./neo-c.h", 1325, 1596),__exception_result_var_b113=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1325, 1568)), "./neo-c.h", 1325, 1569))), come_pop_stackframe(), __exception_result_var_b113)                ){
                    (come_push_stackframe("./neo-c.h", 1327, 1597),__exception_result_var_b114=memset(&default_value_117,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b114);
                    it2_118=(come_push_stackframe("./neo-c.h", 1328, 1619),__exception_result_var_b117=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1328, 1598)), "./neo-c.h", 1328, 1599)),it_114,default_value_117), come_pop_stackframe(), __exception_result_var_b117);
                    hash_121=(come_push_stackframe("./neo-c.h", 1329, 1622),__exception_result_var_b118=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_114, "./neo-c.h", 1329, 1620)), "./neo-c.h", 1329, 1621))), come_pop_stackframe(), __exception_result_var_b118)%size_107;
                    n_122=hash_121;
                    while(_while_condtional21=(_Bool)1,                    _while_condtional21) {
                        if(_if_conditional168=((_Bool*)come_null_check(item_existance_110, "./neo-c.h", 1333, 1623))[n_122],                        _if_conditional168) {
                            n_122++;
                            if(_if_conditional169=n_122>=size_107,                            _if_conditional169) {
                                n_122=0;
                            }
                            else {
                                if(_if_conditional170=n_122==hash_121,                                _if_conditional170) {
                                    (come_push_stackframe("./neo-c.h", 1341, 1624),__exception_result_var_b119=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b119);
                                    (come_push_stackframe("./neo-c.h", 1342,1625),stackframe(),come_pop_stackframe());
                                    (come_push_stackframe("./neo-c.h", 1343,1626),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            ((_Bool*)come_null_check(item_existance_110, "./neo-c.h", 1347, 1627))[n_122]=(_Bool)1;
                            ((char**)come_null_check(keys_108, "./neo-c.h", 1348, 1628))[n_122]=it_114;
                            ((struct sClass**)come_null_check(items_109, "./neo-c.h", 1350, 1629))[n_122]=(come_push_stackframe("./neo-c.h", 1350, 1632),__exception_result_var_b120=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1350, 1630)), "./neo-c.h", 1350, 1631)),it_114,default_value_123), come_pop_stackframe(), __exception_result_var_b120);
                            len_111++;
                            break;
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1358,1635),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1358, 1633)), "./neo-c.h", 1358, 1634))->items),come_pop_stackframe());
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1636)), "./neo-c.h", 1359, 1637))->item_existance = come_decrement_ref_count2(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1359, 1636)), "./neo-c.h", 1359, 1637))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (come_push_stackframe("./neo-c.h", 1360,1640),come_free((char*)((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1360, 1638)), "./neo-c.h", 1360, 1639))->keys),come_pop_stackframe());
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1362, 1641)), "./neo-c.h", 1362, 1642))->keys=keys_108;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1363, 1643)), "./neo-c.h", 1363, 1644))->items=items_109;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1364, 1645)), "./neo-c.h", 1364, 1646))->item_existance=item_existance_110;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1366, 1647)), "./neo-c.h", 1366, 1648))->size=size_107;
                ((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1367, 1649)), "./neo-c.h", 1367, 1650))->len=len_111;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional160;
char* result_112;
void* __exception_result_var_b107;
char* __result92__;
_Bool _if_conditional161;
char* __result93__;
char* result_113;
void* __exception_result_var_b108;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                    if(_if_conditional160=self==((void*)0),                    _if_conditional160) {
                        (come_push_stackframe("./neo-c.h", 1282, 1538),__exception_result_var_b107=memset(&result_112,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b107);
                        __result92__ = __result_obj__ = result_112;
                        return __result92__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1539)), "./neo-c.h", 1285, 1540))->key_list, "./neo-c.h", 1285, 1541)), "./neo-c.h", 1285, 1542))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1285, 1543)), "./neo-c.h", 1285, 1544))->key_list, "./neo-c.h", 1285, 1545)), "./neo-c.h", 1285, 1546))->head;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1287, 1547)), "./neo-c.h", 1287, 1548))->key_list, "./neo-c.h", 1287, 1549)), "./neo-c.h", 1287, 1550))->it) {
                        __result93__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1288, 1551)), "./neo-c.h", 1288, 1552))->key_list, "./neo-c.h", 1288, 1553)), "./neo-c.h", 1288, 1554))->it, "./neo-c.h", 1288, 1555)), "./neo-c.h", 1288, 1556))->item;
                        return __result93__;
                    }
                    (come_push_stackframe("./neo-c.h", 1292, 1557),__exception_result_var_b108=memset(&result_113,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b108);
                    __result94__ = __result_obj__ = result_113;
                    return __result94__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result95__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1561)), "./neo-c.h", 1314, 1562))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1314, 1563)), "./neo-c.h", 1314, 1564))->key_list, "./neo-c.h", 1314, 1565)), "./neo-c.h", 1314, 1566))->it==((void*)0);
                    return __result95__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool _if_conditional162;
char* result_115;
void* __exception_result_var_b111;
char* __result96__;
_Bool _if_conditional163;
char* __result97__;
char* result_116;
void* __exception_result_var_b112;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                    if(_if_conditional162=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1297, 1570)), "./neo-c.h", 1297, 1571))->key_list, "./neo-c.h", 1297, 1572)), "./neo-c.h", 1297, 1573))->it==((void*)0),                    _if_conditional162) {
                        (come_push_stackframe("./neo-c.h", 1299, 1574),__exception_result_var_b111=memset(&result_115,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b111);
                        __result96__ = __result_obj__ = result_115;
                        return __result96__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1575)), "./neo-c.h", 1302, 1576))->key_list, "./neo-c.h", 1302, 1577)), "./neo-c.h", 1302, 1578))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1302, 1579)), "./neo-c.h", 1302, 1580))->key_list, "./neo-c.h", 1302, 1581)), "./neo-c.h", 1302, 1582))->it, "./neo-c.h", 1302, 1583)), "./neo-c.h", 1302, 1584))->next;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1304, 1585)), "./neo-c.h", 1304, 1586))->key_list, "./neo-c.h", 1304, 1587)), "./neo-c.h", 1304, 1588))->it) {
                        __result97__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1305, 1589)), "./neo-c.h", 1305, 1590))->key_list, "./neo-c.h", 1305, 1591)), "./neo-c.h", 1305, 1592))->it, "./neo-c.h", 1305, 1593)), "./neo-c.h", 1305, 1594))->item;
                        return __result97__;
                    }
                    (come_push_stackframe("./neo-c.h", 1309, 1595),__exception_result_var_b112=memset(&result_116,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b112);
                    __result98__ = __result_obj__ = result_116;
                    return __result98__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b115;
unsigned int hash_119;
unsigned int it_120;
_Bool _while_condtional20;
_Bool _if_conditional164;
_Bool __exception_result_var_b116;
_Bool _if_conditional165;
struct sClass* __result99__;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct sClass* __result100__;
struct sClass* __result101__;
struct sClass* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_119, 0, sizeof(unsigned int));
memset(&it_120, 0, sizeof(unsigned int));
                        hash_119=(come_push_stackframe("./neo-c.h", 1207, 1602),__exception_result_var_b115=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1600)), "./neo-c.h", 1207, 1601))), come_pop_stackframe(), __exception_result_var_b115)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1207, 1603)), "./neo-c.h", 1207, 1604))->size;
                        it_120=hash_119;
                        while(_while_condtional20=(_Bool)1,                        _while_condtional20) {
                            if(_if_conditional164=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1211, 1605)), "./neo-c.h", 1211, 1606))->item_existance, "./neo-c.h", 1211, 1607))[it_120],                            _if_conditional164) {
                                if(_if_conditional165=(come_push_stackframe("./neo-c.h", 1213, 1613),__exception_result_var_b116=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1213, 1608)), "./neo-c.h", 1213, 1609))->keys, "./neo-c.h", 1213, 1610))[it_120], "./neo-c.h", 1213, 1611)), "./neo-c.h", 1213, 1612)),key), come_pop_stackframe(), __exception_result_var_b116),                                _if_conditional165) {
                                    __result99__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1215, 1614)), "./neo-c.h", 1215, 1615))->items, "./neo-c.h", 1215, 1616))[it_120];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result99__;
                                }
                                it_120++;
                                if(_if_conditional166=it_120>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1220, 1617)), "./neo-c.h", 1220, 1618))->size,                                _if_conditional166) {
                                    it_120=0;
                                }
                                else {
                                    if(_if_conditional167=it_120==hash_119,                                    _if_conditional167) {
                                        __result100__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result100__;
                                    }
                                }
                            }
                            else {
                                __result101__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result101__;
                            }
                        }
                        __result102__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_126;
struct list_item$1charp* it_127;
_Bool _while_condtional23;
_Bool __exception_result_var_b123;
_Bool _if_conditional174;
struct list$1charp* __exception_result_var_b125;
struct list$1charp* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_126, 0, sizeof(int));
memset(&it_127, 0, sizeof(struct list_item$1charp*));
                            it2_126=0;
                            it_127=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 1670)), "./neo-c.h", 442, 1671))->head;
                            while(_while_condtional23=it_127!=((void*)0),                            _while_condtional23) {
                                if(_if_conditional174=(come_push_stackframe("./neo-c.h", 444, 1676),__exception_result_var_b123=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_127, "./neo-c.h", 444, 1672)), "./neo-c.h", 444, 1673))->item, "./neo-c.h", 444, 1674)), "./neo-c.h", 444, 1675)),item), come_pop_stackframe(), __exception_result_var_b123),                                _if_conditional174) {
                                    (come_push_stackframe("./neo-c.h", 445, 1748),__exception_result_var_b125=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 1677)), "./neo-c.h", 445, 1678)),it2_126,it2_126+1), come_pop_stackframe(), __exception_result_var_b125);
                                    break;
                                }
                                it2_126++;
                                it_127=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_127, "./neo-c.h", 450, 1749)), "./neo-c.h", 450, 1750))->next;
                            }
                            __result106__ = __result_obj__ = self;
                            return __result106__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
int tmp_128;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
struct list$1charp* __result103__;
_Bool _if_conditional181;
struct list$1charp* __exception_result_var_b124;
_Bool _if_conditional182;
struct list_item$1charp* it_131;
int i_132;
_Bool _while_condtional25;
_Bool _if_conditional183;
struct list_item$1charp* prev_it_133;
_Bool _if_conditional184;
_Bool _if_conditional185;
struct list_item$1charp* it_134;
int i_135;
_Bool _while_condtional26;
_Bool _if_conditional186;
_Bool _if_conditional187;
struct list_item$1charp* prev_it_136;
struct list_item$1charp* it_137;
struct list_item$1charp* head_prev_it_138;
struct list_item$1charp* tail_it_139;
int i_140;
_Bool _while_condtional27;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
struct list_item$1charp* prev_it_141;
_Bool _if_conditional191;
_Bool _if_conditional192;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_128, 0, sizeof(int));
memset(&it_131, 0, sizeof(struct list_item$1charp*));
memset(&i_132, 0, sizeof(int));
memset(&prev_it_133, 0, sizeof(struct list_item$1charp*));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
memset(&i_135, 0, sizeof(int));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_138, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_139, 0, sizeof(struct list_item$1charp*));
memset(&i_140, 0, sizeof(int));
memset(&prev_it_141, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional175=head<0,                                        _if_conditional175) {
                                            head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 1679)), "./neo-c.h", 458, 1680))->len;
                                        }
                                        if(_if_conditional176=tail<0,                                        _if_conditional176) {
                                            tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 1681)), "./neo-c.h", 461, 1682))->len+1;
                                        }
                                        if(_if_conditional177=head>tail,                                        _if_conditional177) {
                                            tmp_128=tail;
                                            tail=head;
                                            head=tmp_128;
                                        }
                                        if(_if_conditional178=head<0,                                        _if_conditional178) {
                                            head=0;
                                        }
                                        if(_if_conditional179=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 1683)), "./neo-c.h", 474, 1684))->len,                                        _if_conditional179) {
                                            tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 1685)), "./neo-c.h", 475, 1686))->len;
                                        }
                                        if(_if_conditional180=head==tail,                                        _if_conditional180) {
                                            __result103__ = __result_obj__ = self;
                                            return __result103__;
                                        }
                                        if(_if_conditional181=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 1687)), "./neo-c.h", 482, 1688))->len,                                        _if_conditional181) {
                                            (come_push_stackframe("./neo-c.h", 484, 1701),__exception_result_var_b124=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 1689)), "./neo-c.h", 484, 1690))), come_pop_stackframe(), __exception_result_var_b124);
                                        }
                                        else {
                                            if(_if_conditional182=head==0,                                            _if_conditional182) {
                                                it_131=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 1702)), "./neo-c.h", 487, 1703))->head;
                                                i_132=0;
                                                while(_while_condtional25=it_131!=((void*)0),                                                _while_condtional25) {
                                                    if(_if_conditional183=i_132<tail,                                                    _if_conditional183) {
                                                        prev_it_133=it_131;
                                                        it_131=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_131, "./neo-c.h", 493, 1704)), "./neo-c.h", 493, 1705))->next;
                                                        i_132++;
                                                        come_call_finalizer3(prev_it_133,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 1706)), "./neo-c.h", 498, 1707))->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional184=i_132==tail,                                                        _if_conditional184) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 1708)), "./neo-c.h", 501, 1709))->head=it_131;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 1710)), "./neo-c.h", 502, 1711))->head, "./neo-c.h", 502, 1712)), "./neo-c.h", 502, 1713))->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_131=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_131, "./neo-c.h", 506, 1714)), "./neo-c.h", 506, 1715))->next;
                                                            i_132++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional185=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 1716)), "./neo-c.h", 511, 1717))->len,                                                _if_conditional185) {
                                                    it_134=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 1718)), "./neo-c.h", 512, 1719))->head;
                                                    i_135=0;
                                                    while(_while_condtional26=it_134!=((void*)0),                                                    _while_condtional26) {
                                                        if(_if_conditional186=i_135==head,                                                        _if_conditional186) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 1720)), "./neo-c.h", 516, 1721))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_134, "./neo-c.h", 516, 1722)), "./neo-c.h", 516, 1723))->prev;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 1724)), "./neo-c.h", 517, 1725))->tail, "./neo-c.h", 517, 1726)), "./neo-c.h", 517, 1727))->next=((void*)0);
                                                        }
                                                        if(_if_conditional187=i_135>=head,                                                        _if_conditional187) {
                                                            prev_it_136=it_134;
                                                            it_134=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_134, "./neo-c.h", 523, 1728)), "./neo-c.h", 523, 1729))->next;
                                                            i_135++;
                                                            come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 1730)), "./neo-c.h", 528, 1731))->len--;
                                                        }
                                                        else {
                                                            it_134=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_134, "./neo-c.h", 531, 1732)), "./neo-c.h", 531, 1733))->next;
                                                            i_135++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_137=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 1734)), "./neo-c.h", 537, 1735))->head;
                                                    head_prev_it_138=((void*)0);
                                                    tail_it_139=((void*)0);
                                                    i_140=0;
                                                    while(_while_condtional27=it_137!=((void*)0),                                                    _while_condtional27) {
                                                        if(_if_conditional188=i_140==head,                                                        _if_conditional188) {
                                                            head_prev_it_138=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_137, "./neo-c.h", 546, 1736)), "./neo-c.h", 546, 1737))->prev;
                                                        }
                                                        if(_if_conditional189=i_140==tail,                                                        _if_conditional189) {
                                                            tail_it_139=it_137;
                                                        }
                                                        if(_if_conditional190=i_140>=head&&i_140<tail,                                                        _if_conditional190) {
                                                            prev_it_141=it_137;
                                                            it_137=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_137, "./neo-c.h", 556, 1738)), "./neo-c.h", 556, 1739))->next;
                                                            i_140++;
                                                            come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 1740)), "./neo-c.h", 561, 1741))->len--;
                                                        }
                                                        else {
                                                            it_137=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_137, "./neo-c.h", 564, 1742)), "./neo-c.h", 564, 1743))->next;
                                                            i_140++;
                                                        }
                                                    }
                                                    if(_if_conditional191=head_prev_it_138!=((void*)0),                                                    _if_conditional191) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_138, "./neo-c.h", 570, 1744)), "./neo-c.h", 570, 1745))->next=tail_it_139;
                                                    }
                                                    if(_if_conditional192=tail_it_139!=((void*)0),                                                    _if_conditional192) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_139, "./neo-c.h", 573, 1746)), "./neo-c.h", 573, 1747))->prev=head_prev_it_138;
                                                    }
                                                }
                                            }
                                        }
                                        __result105__ = __result_obj__ = self;
                                        return __result105__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_129;
_Bool _while_condtional24;
struct list_item$1charp* prev_it_130;
struct list$1charp* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_129, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_130, 0, sizeof(struct list_item$1charp*));
                                                it_129=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 1691)), "./neo-c.h", 426, 1692))->head;
                                                while(_while_condtional24=it_129!=((void*)0),                                                _while_condtional24) {
                                                    prev_it_130=it_129;
                                                    it_129=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_129, "./neo-c.h", 429, 1693)), "./neo-c.h", 429, 1694))->next;
                                                    come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 1695)), "./neo-c.h", 433, 1696))->head=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 1697)), "./neo-c.h", 434, 1698))->tail=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 1699)), "./neo-c.h", 436, 1700))->len=0;
                                                __result104__ = __result_obj__ = self;
                                                return __result104__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional198;
char* result_143;
void* __exception_result_var_b129;
char* __result107__;
_Bool _if_conditional199;
char* __result108__;
char* result_144;
void* __exception_result_var_b130;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
            if(_if_conditional198=self==((void*)0),            _if_conditional198) {
                (come_push_stackframe("./neo-c.h", 284, 1807),__exception_result_var_b129=memset(&result_143,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b129);
                __result107__ = __result_obj__ = result_143;
                return __result107__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1808)), "./neo-c.h", 287, 1809))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 1810)), "./neo-c.h", 287, 1811))->head;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 1812)), "./neo-c.h", 289, 1813))->it) {
                __result108__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 1814)), "./neo-c.h", 290, 1815))->it, "./neo-c.h", 290, 1816)), "./neo-c.h", 290, 1817))->item;
                return __result108__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1818),__exception_result_var_b130=memset(&result_144,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b130);
            __result109__ = __result_obj__ = result_144;
            return __result109__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
            __result110__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 1824)), "./neo-c.h", 317, 1825))->it==((void*)0);
            return __result110__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional200;
char* result_146;
void* __exception_result_var_b133;
char* __result111__;
_Bool _if_conditional201;
char* __result112__;
char* result_147;
void* __exception_result_var_b134;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
            if(_if_conditional200=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 1831)), "./neo-c.h", 299, 1832))->it==((void*)0),            _if_conditional200) {
                (come_push_stackframe("./neo-c.h", 301, 1833),__exception_result_var_b133=memset(&result_146,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b133);
                __result111__ = __result_obj__ = result_146;
                return __result111__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1834)), "./neo-c.h", 305, 1835))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 1836)), "./neo-c.h", 305, 1837))->it, "./neo-c.h", 305, 1838)), "./neo-c.h", 305, 1839))->next;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 1840)), "./neo-c.h", 307, 1841))->it) {
                __result112__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 1842)), "./neo-c.h", 308, 1843))->it, "./neo-c.h", 308, 1844)), "./neo-c.h", 308, 1845))->item;
                return __result112__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1846),__exception_result_var_b134=memset(&result_147,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b134);
            __result113__ = __result_obj__ = result_147;
            return __result113__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional204;
void* right_value139;
struct list_item$1charp* litem_148;
_Bool _if_conditional205;
void* right_value140;
struct list_item$1charp* litem_149;
void* right_value141;
struct list_item$1charp* litem_150;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charp*));
right_value140 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charp*));
right_value141 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional204=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 1855)), "./neo-c.h", 222, 1856))->len==0,                _if_conditional204) {
                    litem_148=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                    come_call_finalizer3(right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_148, "./neo-c.h", 225, 1857)), "./neo-c.h", 225, 1858))->prev=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_148, "./neo-c.h", 226, 1859)), "./neo-c.h", 226, 1860))->next=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_148, "./neo-c.h", 227, 1861)), "./neo-c.h", 227, 1862))->item=item;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 1863)), "./neo-c.h", 229, 1864))->tail=litem_148;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 1865)), "./neo-c.h", 230, 1866))->head=litem_148;
                }
                else {
                    if(_if_conditional205=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 1867)), "./neo-c.h", 232, 1868))->len==1,                    _if_conditional205) {
                        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                        come_call_finalizer3(right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_149, "./neo-c.h", 235, 1869)), "./neo-c.h", 235, 1870))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 1871)), "./neo-c.h", 235, 1872))->head;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_149, "./neo-c.h", 236, 1873)), "./neo-c.h", 236, 1874))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_149, "./neo-c.h", 237, 1875)), "./neo-c.h", 237, 1876))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 1877)), "./neo-c.h", 239, 1878))->tail=litem_149;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 1879)), "./neo-c.h", 240, 1880))->head, "./neo-c.h", 240, 1881)), "./neo-c.h", 240, 1882))->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                        come_call_finalizer3(right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_150, "./neo-c.h", 245, 1883)), "./neo-c.h", 245, 1884))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 1885)), "./neo-c.h", 245, 1886))->tail;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_150, "./neo-c.h", 246, 1887)), "./neo-c.h", 246, 1888))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_150, "./neo-c.h", 247, 1889)), "./neo-c.h", 247, 1890))->item=item;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 1891)), "./neo-c.h", 249, 1892))->tail, "./neo-c.h", 249, 1893)), "./neo-c.h", 249, 1894))->next=litem_150;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 1895)), "./neo-c.h", 250, 1896))->tail=litem_150;
                    }
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 1897)), "./neo-c.h", 253, 1898))->len++;
                __result114__ = __result_obj__ = self;
                return __result114__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional212;
_Bool _if_conditional213;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional212=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1968)), "CVALUE_finalize", 0, 1969))->c_value!=((void*)0),        _if_conditional212) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1970)), "CVALUE_finalize", 0, 1971))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1970)), "CVALUE_finalize", 0, 1971))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional213=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1972)), "CVALUE_finalize", 1, 1973))->type!=((void*)0),        _if_conditional213) {
            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1974)), "CVALUE_finalize", 1, 1975))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional214;
void* right_value149;
struct list_item$1CVALUEph* litem_159;
struct CVALUE* __dec_obj44;
_Bool _if_conditional216;
void* right_value150;
struct list_item$1CVALUEph* litem_160;
struct CVALUE* __dec_obj45;
void* right_value151;
struct list_item$1CVALUEph* litem_161;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1CVALUEph*));
right_value151 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional214=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1992)), "./neo-c.h", 222, 1993))->len==0,        _if_conditional214) {
            litem_159=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_159, "./neo-c.h", 225, 1998)), "./neo-c.h", 225, 1999))->prev=((void*)0);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_159, "./neo-c.h", 226, 2000)), "./neo-c.h", 226, 2001))->next=((void*)0);
            __dec_obj44=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_159, "./neo-c.h", 227, 2002)), "./neo-c.h", 227, 2003))->item;
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_159, "./neo-c.h", 227, 2002)), "./neo-c.h", 227, 2003))->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 2004)), "./neo-c.h", 229, 2005))->tail=litem_159;
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 2006)), "./neo-c.h", 230, 2007))->head=litem_159;
        }
        else {
            if(_if_conditional216=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 2008)), "./neo-c.h", 232, 2009))->len==1,            _if_conditional216) {
                litem_160=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_160, "./neo-c.h", 235, 2010)), "./neo-c.h", 235, 2011))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 2012)), "./neo-c.h", 235, 2013))->head;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_160, "./neo-c.h", 236, 2014)), "./neo-c.h", 236, 2015))->next=((void*)0);
                __dec_obj45=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_160, "./neo-c.h", 237, 2016)), "./neo-c.h", 237, 2017))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_160, "./neo-c.h", 237, 2016)), "./neo-c.h", 237, 2017))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 2018)), "./neo-c.h", 239, 2019))->tail=litem_160;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 2020)), "./neo-c.h", 240, 2021))->head, "./neo-c.h", 240, 2022)), "./neo-c.h", 240, 2023))->next=litem_160;
            }
            else {
                litem_161=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value151=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value151,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_161, "./neo-c.h", 245, 2024)), "./neo-c.h", 245, 2025))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 2026)), "./neo-c.h", 245, 2027))->tail;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_161, "./neo-c.h", 246, 2028)), "./neo-c.h", 246, 2029))->next=((void*)0);
                __dec_obj46=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_161, "./neo-c.h", 247, 2030)), "./neo-c.h", 247, 2031))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_161, "./neo-c.h", 247, 2030)), "./neo-c.h", 247, 2031))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 2032)), "./neo-c.h", 249, 2033))->tail, "./neo-c.h", 249, 2034)), "./neo-c.h", 249, 2035))->next=litem_161;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 2036)), "./neo-c.h", 250, 2037))->tail=litem_161;
            }
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 2038)), "./neo-c.h", 253, 2039))->len++;
        __result116__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional215=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1994)), "list_item$1CVALUEphp_finalize", 0, 1995))->item!=((void*)0),                _if_conditional215) {
                    come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1996)), "list_item$1CVALUEphp_finalize", 0, 1997))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value152;
char* __exception_result_var_b153;
char* none_generics_name_162;
void* right_value153;
char* __exception_result_var_b154;
char* fun_name2_163;
void* right_value154;
char* __exception_result_var_b155;
char* fun_name3_164;
struct sGenericsFun* __exception_result_var_b158;
struct sGenericsFun* generics_fun_165;
_Bool _if_conditional231;
void* right_value155;
char* __exception_result_var_b159;
_Bool __exception_result_var_b160;
_Bool _if_conditional232;
void* right_value156;
char* __exception_result_var_b161;
char* __result122__;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&none_generics_name_162, 0, sizeof(char*));
right_value153 = (void*)0;
memset(&fun_name2_163, 0, sizeof(char*));
right_value154 = (void*)0;
memset(&fun_name3_164, 0, sizeof(char*));
memset(&generics_fun_165, 0, sizeof(struct sGenericsFun*));
right_value155 = (void*)0;
right_value156 = (void*)0;
    none_generics_name_162=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 142, 2047),__exception_result_var_b153=((char*)(right_value152=get_none_generics_name(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "20method.c", 142, 2043)), "20method.c", 142, 2044))->mClass, "20method.c", 142, 2045)), "20method.c", 142, 2046))->mName))), come_pop_stackframe(), __exception_result_var_b153));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name2_163=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 143, 2048),__exception_result_var_b154=((char*)(right_value153=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))), come_pop_stackframe(), __exception_result_var_b154));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_name3_164=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 144, 2049),__exception_result_var_b155=((char*)(right_value154=xsprintf("%s_%s",none_generics_name_162,fun_name))), come_pop_stackframe(), __exception_result_var_b155));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    generics_fun_165=(come_push_stackframe("20method.c", 146, 2113),__exception_result_var_b158=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 146, 2050)), "20method.c", 146, 2051))->generics_funcs, "20method.c", 146, 2052)), "20method.c", 146, 2053)),fun_name3_164,((void*)0)), come_pop_stackframe(), __exception_result_var_b158);
    if(generics_fun_165) {
        if(_if_conditional232=!(come_push_stackframe("20method.c", 149, 2115),__exception_result_var_b160=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("20method.c", 149, 2114),__exception_result_var_b159=((char*)(right_value155=__builtin_string(fun_name2_163))), come_pop_stackframe(), __exception_result_var_b159)),generics_fun_165,type,info), come_pop_stackframe(), __exception_result_var_b160),        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional232) {
            (come_push_stackframe("20method.c", 150,2116),err_msg(info,"%s not found",fun_name3_164),come_pop_stackframe());
            __result122__ = __result_obj__ = (come_push_stackframe("20method.c", 151, 2117),__exception_result_var_b161=((char*)(right_value156=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b161);
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result122__;
        }
    }
    __result123__ = __result_obj__ = fun_name2_163;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result123__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b156;
unsigned int hash_166;
unsigned int it_167;
_Bool _while_condtional28;
_Bool _if_conditional217;
_Bool __exception_result_var_b157;
_Bool _if_conditional218;
struct sGenericsFun* __result118__;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct sGenericsFun* __result119__;
struct sGenericsFun* __result120__;
struct sGenericsFun* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&it_167, 0, sizeof(unsigned int));
        hash_166=(come_push_stackframe("./neo-c.h", 1207, 2056),__exception_result_var_b156=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2054)), "./neo-c.h", 1207, 2055))), come_pop_stackframe(), __exception_result_var_b156)%((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1207, 2057)), "./neo-c.h", 1207, 2058))->size;
        it_167=hash_166;
        while(_while_condtional28=(_Bool)1,        _while_condtional28) {
            if(_if_conditional217=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1211, 2059)), "./neo-c.h", 1211, 2060))->item_existance, "./neo-c.h", 1211, 2061))[it_167],            _if_conditional217) {
                if(_if_conditional218=(come_push_stackframe("./neo-c.h", 1213, 2067),__exception_result_var_b157=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1213, 2062)), "./neo-c.h", 1213, 2063))->keys, "./neo-c.h", 1213, 2064))[it_167], "./neo-c.h", 1213, 2065)), "./neo-c.h", 1213, 2066)),key), come_pop_stackframe(), __exception_result_var_b157),                _if_conditional218) {
                    __result118__ = __result_obj__ = ((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1215, 2068)), "./neo-c.h", 1215, 2069))->items, "./neo-c.h", 1215, 2070))[it_167];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result118__;
                }
                it_167++;
                if(_if_conditional229=it_167>=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1220, 2111)), "./neo-c.h", 1220, 2112))->size,                _if_conditional229) {
                    it_167=0;
                }
                else {
                    if(_if_conditional230=it_167==hash_166,                    _if_conditional230) {
                        __result119__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result119__;
                    }
                }
            }
            else {
                __result120__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result120__;
            }
        }
        __result121__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result121__;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional219=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 2071)), "sGenericsFun_finalize", 0, 2072))->mImplType!=((void*)0),                        _if_conditional219) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 2073)), "sGenericsFun_finalize", 0, 2074))->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional220=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 2075)), "sGenericsFun_finalize", 1, 2076))->mGenericsTypeNames!=((void*)0),                        _if_conditional220) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 2077)), "sGenericsFun_finalize", 1, 2078))->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional221=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2079)), "sGenericsFun_finalize", 2, 2080))->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional221) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 2081)), "sGenericsFun_finalize", 2, 2082))->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional222=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2083)), "sGenericsFun_finalize", 3, 2084))->mName!=((void*)0),                        _if_conditional222) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2085)), "sGenericsFun_finalize", 3, 2086))->mName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 2085)), "sGenericsFun_finalize", 3, 2086))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional223=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2087)), "sGenericsFun_finalize", 4, 2088))->mResultType!=((void*)0),                        _if_conditional223) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 2089)), "sGenericsFun_finalize", 4, 2090))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional224=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2091)), "sGenericsFun_finalize", 5, 2092))->mParamTypes!=((void*)0),                        _if_conditional224) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 2093)), "sGenericsFun_finalize", 5, 2094))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional225=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2095)), "sGenericsFun_finalize", 6, 2096))->mParamNames!=((void*)0),                        _if_conditional225) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 2097)), "sGenericsFun_finalize", 6, 2098))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional226=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2099)), "sGenericsFun_finalize", 7, 2100))->mParamDefaultParametors!=((void*)0),                        _if_conditional226) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 2101)), "sGenericsFun_finalize", 7, 2102))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional227=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2103)), "sGenericsFun_finalize", 8, 2104))->mBlock!=((void*)0),                        _if_conditional227) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2105)), "sGenericsFun_finalize", 8, 2106))->mBlock = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 2105)), "sGenericsFun_finalize", 8, 2106))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional228=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2107)), "sGenericsFun_finalize", 9, 2108))->mGenericsSName!=((void*)0),                        _if_conditional228) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2109)), "sGenericsFun_finalize", 9, 2110))->mGenericsSName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 2109)), "sGenericsFun_finalize", 9, 2110))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value157;
struct sNodeBase* __exception_result_var_b162;
struct sNode* __exception_result_var_b163;
void* right_value158;
struct sNode* __dec_obj47;
void* right_value159;
char* __exception_result_var_b164;
char* __dec_obj48;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b170;
void* right_value169;
struct list$1tuple2$2charphsNodephph* __dec_obj54;
struct buffer* __exception_result_var_b171;
void* right_value170;
struct buffer* __dec_obj55;
struct list$1sTypeph* __exception_result_var_b172;
void* right_value171;
struct list$1sTypeph* __dec_obj56;
struct sMethodCallNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
    (come_push_stackframe("20method.c", 162, 2120),__exception_result_var_b162=((struct sNodeBase*)(right_value157=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 162, 2118)), "20method.c", 162, 2119))),info))), come_pop_stackframe(), __exception_result_var_b162);
    come_call_finalizer3(right_value157,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=((struct sMethodCallNode*)come_null_check(self, "20method.c", 164, 2121))->obj;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 164, 2121))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=(come_push_stackframe("20method.c", 164, 2122),__exception_result_var_b163=sNode_clone(obj), come_pop_stackframe(), __exception_result_var_b163))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value158) { right_value158 = come_decrement_ref_count2(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj48=((struct sMethodCallNode*)come_null_check(self, "20method.c", 165, 2123))->fun_name;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 165, 2123))->fun_name=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 165, 2124),__exception_result_var_b164=((char*)(right_value159=__builtin_string(fun_name))), come_pop_stackframe(), __exception_result_var_b164));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=((struct sMethodCallNode*)come_null_check(self, "20method.c", 166, 2125))->params;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 166, 2125))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value169=(come_push_stackframe("20method.c", 166, 2251),__exception_result_var_b170=list$1tuple2$2charphsNodephphp_clone(params), come_pop_stackframe(), __exception_result_var_b170))));
    come_call_finalizer3(__dec_obj54,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=((struct sMethodCallNode*)come_null_check(self, "20method.c", 167, 2256))->method_block;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 167, 2256))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(come_push_stackframe("20method.c", 167, 2257),__exception_result_var_b171=buffer_clone(method_block), come_pop_stackframe(), __exception_result_var_b171))));
    come_call_finalizer3(__dec_obj55,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 168, 2258))->method_block_sline=method_block_sline;
    __dec_obj56=((struct sMethodCallNode*)come_null_check(self, "20method.c", 169, 2259))->method_generics_types;
    ((struct sMethodCallNode*)come_null_check(self, "20method.c", 169, 2259))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value171=(come_push_stackframe("20method.c", 169, 2260),__exception_result_var_b172=list$1sTypephp_clone(method_generics_types), come_pop_stackframe(), __exception_result_var_b172))));
    come_call_finalizer3(__dec_obj56,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value171,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result130__ = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool __result131__;
_Bool __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    if(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 174, 2285)), "20method.c", 174, 2286))->method_block) {
        __result131__ = (_Bool)1;
        return __result131__;
    }
    else {
        __result132__ = (_Bool)0;
        return __result132__;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__;
void* right_value172;
char* __exception_result_var_b173;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result133__ = __result_obj__ = (come_push_stackframe("20method.c", 184, 2287),__exception_result_var_b173=((char*)(right_value172=__builtin_string("sMethodCallNode"))), come_pop_stackframe(), __exception_result_var_b173);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_178;
struct list$1tuple2$2charphsNodephph* params_179;
struct sNode* obj_180;
struct buffer* method_block_181;
int method_block_sline_182;
struct list$1sTypeph* method_generics_types_183;
struct list$1sTypeph* __exception_result_var_b174;
void* right_value173;
struct list$1sTypeph* __dec_obj57;
_Bool __exception_result_var_b175;
_Bool _if_conditional257;
_Bool __result134__;
void* right_value174;
struct CVALUE* __exception_result_var_b176;
struct CVALUE* obj_value_184;
_Bool _if_conditional258;
void* right_value175;
char* __exception_result_var_b177;
void* right_value176;
char* __exception_result_var_b178;
char* __dec_obj58;
struct sType* __exception_result_var_b179;
void* right_value177;
struct sType* obj_type_185;
struct sClass* klass_186;
_Bool calling_dynamic_method_187;
struct sType* lambda_type_188;
struct list$1tuple2$2charphsTypephph* o2_saved_189;
struct tuple2$2charphsTypeph* __exception_result_var_b182;
struct tuple2$2charphsTypeph* it_192;
_Bool __exception_result_var_b183;
struct tuple2$2charphsTypeph* __exception_result_var_b186;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_195;
struct sType* field_type_196;
_Bool __exception_result_var_b187;
_Bool __exception_result_var_b188;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct sType* __exception_result_var_b189;
void* right_value178;
struct sType* result_type_197;
void* right_value179;
void* right_value180;
struct list$1CVALUEph* __exception_result_var_b190;
struct list$1CVALUEph* come_params_198;
int i_201;
struct list$1tuple2$2charphsNodephph* o2_saved_202;
struct tuple2$2charphsNodeph* __exception_result_var_b193;
struct tuple2$2charphsNodeph* it_205;
_Bool __exception_result_var_b194;
struct tuple2$2charphsNodeph* __exception_result_var_b197;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_208;
struct sNode* node_209;
_Bool _if_conditional269;
struct list$1CVALUEph* __exception_result_var_b198;
_Bool __exception_result_var_b199;
_Bool _if_conditional270;
_Bool __result150__;
void* right_value181;
struct CVALUE* __exception_result_var_b200;
struct CVALUE* come_value_210;
void* right_value182;
void* right_value183;
void* right_value184;
struct sType* __exception_result_var_b202;
_Bool __exception_result_var_b203;
struct sType* __exception_result_var_b204;
_Bool _if_conditional273;
struct sType* __exception_result_var_b205;
struct list$1CVALUEph* __exception_result_var_b206;
void* right_value185;
void* right_value186;
struct buffer* __exception_result_var_b207;
struct buffer* buf_214;
void* right_value187;
char* __exception_result_var_b208;
struct buffer* __exception_result_var_b209;
struct buffer* __exception_result_var_b210;
int j_215;
struct list$1CVALUEph* o2_saved_216;
struct CVALUE* __exception_result_var_b213;
struct CVALUE* it_219;
_Bool __exception_result_var_b214;
struct CVALUE* __exception_result_var_b217;
_Bool _if_conditional278;
void* right_value188;
char* __exception_result_var_b218;
char* __dec_obj59;
struct buffer* __exception_result_var_b219;
int __exception_result_var_b220;
_Bool _if_conditional280;
struct buffer* __exception_result_var_b221;
struct buffer* __exception_result_var_b222;
void* right_value189;
struct CVALUE* come_value2_222;
void* right_value190;
char* __exception_result_var_b223;
char* __dec_obj60;
void* right_value191;
struct sType* __exception_result_var_b224;
struct sType* result_type2_223;
_Bool _if_conditional281;
void* right_value192;
char* __exception_result_var_b225;
void* right_value193;
char* __exception_result_var_b226;
char* __dec_obj61;
struct sType* __exception_result_var_b227;
void* right_value194;
struct sType* __dec_obj62;
struct list$1CVALUEph* __exception_result_var_b228;
char* generics_fun_name_224;
struct sFun* fun_225;
_Bool __exception_result_var_b229;
_Bool _if_conditional282;
void* right_value195;
char* __exception_result_var_b230;
struct sClass* klass_226;
struct sClass* __exception_result_var_b234;
_Bool _while_condtional35;
struct sClass* __exception_result_var_b235;
void* right_value196;
char* __exception_result_var_b236;
char* __dec_obj63;
struct sFun* __exception_result_var_b239;
_Bool _if_conditional306;
void* right_value197;
char* __exception_result_var_b240;
void* right_value198;
char* __exception_result_var_b241;
void* right_value199;
char* __exception_result_var_b242;
char* __dec_obj64;
int i_232;
void* right_value200;
char* __exception_result_var_b243;
char* new_fun_name_233;
struct sFun* __exception_result_var_b247;
_Bool _if_conditional311;
void* right_value201;
char* __exception_result_var_b248;
char* __dec_obj65;
_Bool _if_conditional312;
struct sType* obj_array_type_237;
int __exception_result_var_b249;
_Bool _if_conditional313;
void* right_value202;
char* __exception_result_var_b250;
char* array_method_name_238;
struct sFun* __exception_result_var_b251;
_Bool _if_conditional314;
void* right_value203;
char* __exception_result_var_b252;
char* __dec_obj66;
struct sFun* __exception_result_var_b253;
_Bool _if_conditional315;
void* right_value204;
char* __exception_result_var_b254;
void* right_value205;
char* __exception_result_var_b255;
char* __dec_obj67;
struct sFun* __exception_result_var_b256;
_Bool _if_conditional316;
_Bool __result174__;
struct sFun* __exception_result_var_b257;
_Bool _if_conditional317;
void* right_value206;
char* __exception_result_var_b258;
void* right_value207;
char* __exception_result_var_b259;
char* __dec_obj68;
struct sFun* __exception_result_var_b260;
_Bool _if_conditional318;
struct sClass* klass_239;
struct sClass* __exception_result_var_b261;
_Bool _while_condtional38;
struct sClass* __exception_result_var_b262;
void* right_value208;
char* __exception_result_var_b263;
char* __dec_obj69;
struct sFun* __exception_result_var_b264;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool __result175__;
_Bool _if_conditional321;
_Bool __result176__;
int __exception_result_var_b265;
_Bool _if_conditional323;
_Bool __result179__;
struct sType* __exception_result_var_b266;
void* right_value209;
struct sType* result_type_240;
void* right_value210;
struct sType* __exception_result_var_b267;
struct sType* result_type2_241;
void* right_value211;
void* right_value212;
struct list$1sTypeph* __exception_result_var_b268;
struct list$1sTypeph* param_types_242;
struct list$1sTypeph* o2_saved_243;
struct sType* __exception_result_var_b271;
struct sType* it_246;
_Bool __exception_result_var_b272;
struct sType* __exception_result_var_b275;
_Bool _if_conditional328;
struct list$1sTypeph* __exception_result_var_b276;
void* right_value216;
struct sType* __exception_result_var_b277;
struct sType* it2_252;
struct sType* __exception_result_var_b278;
void* right_value217;
struct list$1sTypeph* __exception_result_var_b279;
void* right_value218;
void* right_value219;
struct list$1CVALUEph* __exception_result_var_b280;
struct list$1CVALUEph* come_params_253;
int i_254;
int __exception_result_var_b281;
struct list$1CVALUEph* __exception_result_var_b282;
_Bool first_param_258;
struct list$1tuple2$2charphsNodephph* o2_saved_259;
struct tuple2$2charphsNodeph* __exception_result_var_b283;
struct tuple2$2charphsNodeph* it_260;
_Bool __exception_result_var_b284;
struct tuple2$2charphsNodeph* __exception_result_var_b285;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_261;
struct sNode* node_262;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool __exception_result_var_b286;
_Bool _if_conditional335;
_Bool __result189__;
void* right_value223;
struct CVALUE* __exception_result_var_b287;
struct CVALUE* come_value_263;
int n_264;
struct list$1charph* o2_saved_265;
char* __exception_result_var_b290;
char* it_268;
_Bool __exception_result_var_b291;
char* __exception_result_var_b294;
_Bool __exception_result_var_b295;
_Bool _if_conditional340;
struct sType* __exception_result_var_b296;
_Bool _if_conditional341;
void* right_value224;
void* right_value225;
void* right_value226;
struct sType* __exception_result_var_b297;
_Bool __exception_result_var_b298;
struct sType* __exception_result_var_b299;
struct sType* __exception_result_var_b300;
_Bool _if_conditional342;
struct sType* __exception_result_var_b301;
struct list$1CVALUEph* __exception_result_var_b303;
int i_273;
struct list$1tuple2$2charphsNodephph* o2_saved_274;
struct tuple2$2charphsNodeph* __exception_result_var_b304;
struct tuple2$2charphsNodeph* it_275;
_Bool __exception_result_var_b305;
struct tuple2$2charphsNodeph* __exception_result_var_b306;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_276;
struct sNode* node_277;
_Bool _if_conditional346;
void* right_value227;
void* right_value228;
void* right_value229;
struct sType* __exception_result_var_b307;
_Bool __exception_result_var_b308;
struct sType* __exception_result_var_b309;
_Bool _if_conditional347;
struct sType* __exception_result_var_b310;
struct sType* __exception_result_var_b311;
_Bool _if_conditional348;
char* __exception_result_var_b313;
struct list$1CVALUEph* __exception_result_var_b314;
_Bool _if_conditional351;
_Bool __exception_result_var_b315;
_Bool _if_conditional352;
_Bool __result201__;
void* right_value230;
struct CVALUE* __exception_result_var_b316;
struct CVALUE* come_value_281;
_Bool _while_condtional41;
struct CVALUE* __exception_result_var_b318;
_Bool _if_conditional355;
struct sType* __exception_result_var_b319;
_Bool _if_conditional356;
void* right_value231;
void* right_value232;
void* right_value233;
struct sType* __exception_result_var_b320;
_Bool __exception_result_var_b321;
struct sType* __exception_result_var_b322;
struct sType* __exception_result_var_b323;
_Bool _if_conditional357;
struct sType* __exception_result_var_b324;
struct list$1CVALUEph* __exception_result_var_b325;
_Bool _while_condtional43;
struct CVALUE* __exception_result_var_b326;
_Bool _if_conditional358;
struct sType* obj_array_type_285;
int __exception_result_var_b327;
_Bool _if_conditional359;
void* right_value234;
char* __exception_result_var_b328;
char* array_method_name_286;
_Bool __exception_result_var_b329;
_Bool _if_conditional360;
_Bool __exception_result_var_b330;
_Bool _if_conditional361;
void* right_value235;
void* right_value236;
struct buffer* __exception_result_var_b331;
struct buffer* buf_287;
int i_288;
struct list$1sNodeph* o2_saved_289;
struct sNode* __exception_result_var_b334;
struct sNode* it_292;
_Bool __exception_result_var_b335;
struct sNode* __exception_result_var_b338;
_Bool __exception_result_var_b339;
_Bool _if_conditional366;
void* right_value237;
struct CVALUE* __exception_result_var_b340;
struct CVALUE* come_value_295;
void* right_value238;
char* __exception_result_var_b341;
struct buffer* __exception_result_var_b342;
int __exception_result_var_b343;
_Bool _if_conditional367;
struct buffer* __exception_result_var_b344;
void* right_value239;
struct CVALUE* come_value_296;
void* right_value240;
char* __exception_result_var_b345;
char* __dec_obj77;
void* right_value241;
void* right_value242;
struct sType* __exception_result_var_b346;
struct sType* __dec_obj78;
struct list$1CVALUEph* __exception_result_var_b347;
void* right_value246;
void* right_value247;
void* right_value248;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b348;
_Bool __exception_result_var_b349;
_Bool _if_conditional371;
void* right_value249;
void* right_value250;
struct buffer* __exception_result_var_b350;
struct buffer* buf_300;
int i_301;
struct list$1sNodeph* o2_saved_302;
struct sNode* __exception_result_var_b351;
struct sNode* it_303;
_Bool __exception_result_var_b352;
struct sNode* __exception_result_var_b353;
_Bool __exception_result_var_b354;
_Bool _if_conditional372;
void* right_value251;
struct CVALUE* __exception_result_var_b355;
struct CVALUE* come_value_304;
void* right_value252;
char* __exception_result_var_b356;
struct buffer* __exception_result_var_b357;
int __exception_result_var_b358;
_Bool _if_conditional373;
struct buffer* __exception_result_var_b359;
void* right_value253;
struct CVALUE* come_value_305;
void* right_value254;
char* __exception_result_var_b360;
char* __dec_obj83;
void* right_value255;
void* right_value256;
struct sType* __exception_result_var_b361;
struct sType* __dec_obj84;
struct list$1CVALUEph* __exception_result_var_b362;
void* right_value257;
void* right_value258;
void* right_value259;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b363;
_Bool __exception_result_var_b364;
_Bool _if_conditional374;
void* right_value260;
void* right_value261;
struct buffer* __exception_result_var_b365;
struct buffer* buf_306;
int i_307;
struct list$1sNodeph* o2_saved_308;
struct sNode* __exception_result_var_b366;
struct sNode* it_309;
_Bool __exception_result_var_b367;
struct sNode* __exception_result_var_b368;
_Bool __exception_result_var_b369;
_Bool _if_conditional375;
void* right_value262;
struct CVALUE* __exception_result_var_b370;
struct CVALUE* come_value_310;
void* right_value263;
char* __exception_result_var_b371;
struct buffer* __exception_result_var_b372;
int __exception_result_var_b373;
_Bool _if_conditional376;
struct buffer* __exception_result_var_b374;
void* right_value264;
struct CVALUE* come_value_311;
void* right_value265;
char* __exception_result_var_b375;
char* __dec_obj85;
void* right_value266;
void* right_value267;
struct sType* __exception_result_var_b376;
struct sType* __dec_obj86;
struct list$1CVALUEph* __exception_result_var_b377;
void* right_value268;
void* right_value269;
void* right_value270;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b378;
_Bool __exception_result_var_b379;
_Bool _if_conditional377;
void* right_value271;
void* right_value272;
struct buffer* __exception_result_var_b380;
struct buffer* buf_312;
int i_313;
struct list$1sNodeph* o2_saved_314;
struct sNode* __exception_result_var_b381;
struct sNode* it_315;
_Bool __exception_result_var_b382;
struct sNode* __exception_result_var_b383;
_Bool __exception_result_var_b384;
_Bool _if_conditional378;
void* right_value273;
struct CVALUE* __exception_result_var_b385;
struct CVALUE* come_value_316;
void* right_value274;
char* __exception_result_var_b386;
struct buffer* __exception_result_var_b387;
int __exception_result_var_b388;
_Bool _if_conditional379;
struct buffer* __exception_result_var_b389;
void* right_value275;
struct CVALUE* come_value_317;
void* right_value276;
char* __exception_result_var_b390;
char* __dec_obj87;
void* right_value277;
void* right_value278;
struct sType* __exception_result_var_b391;
struct sType* __dec_obj88;
struct list$1CVALUEph* __exception_result_var_b392;
void* right_value279;
void* right_value280;
void* right_value281;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b393;
int __exception_result_var_b394;
int __exception_result_var_b395;
_Bool _if_conditional381;
int __exception_result_var_b396;
char* __exception_result_var_b397;
char* __exception_result_var_b398;
void* right_value282;
char* default_param_318;
char* __exception_result_var_b399;
char* param_name_319;
_Bool __exception_result_var_b400;
struct CVALUE* __exception_result_var_b401;
_Bool _if_conditional382;
struct buffer* source_320;
char* p_321;
char* head_322;
int sline_323;
void* right_value283;
struct buffer* __exception_result_var_b402;
struct buffer* __dec_obj89;
void* right_value284;
struct sNode* __exception_result_var_b403;
struct sNode* node_324;
_Bool __exception_result_var_b404;
_Bool _if_conditional383;
_Bool __result215__;
struct buffer* __dec_obj90;
void* right_value285;
struct CVALUE* __exception_result_var_b405;
struct CVALUE* come_value_325;
struct sType* __exception_result_var_b406;
_Bool _if_conditional384;
void* right_value286;
void* right_value287;
void* right_value288;
struct sType* __exception_result_var_b407;
_Bool __exception_result_var_b408;
struct sType* __exception_result_var_b409;
struct sType* __exception_result_var_b410;
_Bool _if_conditional385;
struct sType* __exception_result_var_b411;
struct list$1CVALUEph* __exception_result_var_b412;
struct CVALUE* __exception_result_var_b413;
_Bool _if_conditional386;
_Bool __result216__;
_Bool _if_conditional387;
void* right_value289;
void* right_value290;
struct sCurrentNode* __exception_result_var_b414;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value293;
struct sNode* current_stack_frame_node_326;
_Bool __exception_result_var_b416;
_Bool _if_conditional392;
_Bool __result219__;
void* right_value294;
struct CVALUE* __exception_result_var_b417;
struct CVALUE* come_value_328;
struct list$1CVALUEph* __exception_result_var_b418;
void* right_value295;
void* right_value296;
struct buffer* __exception_result_var_b419;
struct buffer* method_block2_329;
struct sType* __exception_result_var_b420;
struct sType* __exception_result_var_b421;
void* right_value297;
struct sType* method_block_type_330;
void* right_value298;
char* __exception_result_var_b422;
char* class_name_331;
struct sType* __exception_result_var_b423;
struct sClass* __exception_result_var_b424;
struct sClass* current_stack_frame_struct_332;
struct sClass* __exception_result_var_b425;
_Bool __exception_result_var_b426;
_Bool _if_conditional393;
_Bool __result220__;
struct sType* __exception_result_var_b427;
void* right_value299;
struct sType* result_type_333;
struct list$1sTypeph* param_types_334;
struct list$1charph* param_names_335;
void* right_value300;
void* right_value301;
struct buffer* __exception_result_var_b428;
struct buffer* all_alhabet_sname_336;
char* p_337;
_Bool _while_condtional44;
_Bool __exception_result_var_b429;
_Bool _if_conditional394;
struct buffer* __exception_result_var_b430;
void* right_value302;
char* __exception_result_var_b431;
void* right_value303;
char* __exception_result_var_b432;
void* right_value304;
char* __exception_result_var_b433;
struct buffer* __exception_result_var_b434;
int i_338;
struct list$1sTypeph* o2_saved_339;
struct sType* __exception_result_var_b435;
struct sType* it_340;
_Bool __exception_result_var_b436;
struct sType* __exception_result_var_b437;
struct sType* param_type_341;
_Bool _if_conditional395;
void* right_value305;
char* __exception_result_var_b438;
char* param_name_342;
void* right_value306;
char* __exception_result_var_b439;
void* right_value307;
char* __exception_result_var_b440;
struct buffer* __exception_result_var_b441;
_Bool _if_conditional396;
void* right_value308;
char* __exception_result_var_b442;
char* param_name_343;
void* right_value309;
char* __exception_result_var_b443;
void* right_value310;
char* __exception_result_var_b444;
struct buffer* __exception_result_var_b445;
void* right_value311;
char* __exception_result_var_b446;
char* param_name_344;
void* right_value312;
char* __exception_result_var_b447;
void* right_value313;
char* __exception_result_var_b448;
struct buffer* __exception_result_var_b449;
int __exception_result_var_b450;
_Bool _if_conditional397;
struct buffer* __exception_result_var_b451;
struct buffer* __exception_result_var_b452;
void* right_value314;
char* __exception_result_var_b453;
struct buffer* __exception_result_var_b454;
struct buffer* source3_345;
char* p_346;
char* head_347;
int sline_348;
struct buffer* __dec_obj92;
void* right_value315;
struct sNode* __exception_result_var_b455;
struct sNode* node_349;
_Bool __exception_result_var_b456;
_Bool _if_conditional398;
_Bool __result221__;
void* right_value316;
char* __exception_result_var_b457;
void* right_value317;
char* __exception_result_var_b458;
char* method_block_name_350;
void* right_value318;
struct CVALUE* come_value2_351;
struct sFun* __exception_result_var_b459;
struct sFun* fun2_352;
_Bool _if_conditional399;
_Bool __result222__;
struct sType* method_block_type2_353;
void* right_value319;
char* __exception_result_var_b460;
char* __dec_obj93;
struct sType* __exception_result_var_b461;
void* right_value320;
struct sType* __dec_obj94;
struct list$1CVALUEph* __exception_result_var_b462;
struct buffer* __dec_obj95;
void* right_value321;
void* right_value322;
struct buffer* __exception_result_var_b463;
struct buffer* buf_354;
struct buffer* __exception_result_var_b464;
struct buffer* __exception_result_var_b465;
int j_355;
struct list$1CVALUEph* o2_saved_356;
struct CVALUE* __exception_result_var_b466;
struct CVALUE* it_357;
_Bool __exception_result_var_b467;
struct CVALUE* __exception_result_var_b468;
struct buffer* __exception_result_var_b469;
int __exception_result_var_b470;
_Bool _if_conditional400;
struct buffer* __exception_result_var_b471;
struct buffer* __exception_result_var_b472;
void* right_value323;
struct CVALUE* come_value2_358;
void* right_value324;
char* __exception_result_var_b473;
char* __dec_obj96;
struct sType* __exception_result_var_b474;
void* right_value325;
struct sType* __dec_obj97;
_Bool _if_conditional401;
void* right_value326;
char* __exception_result_var_b475;
char* __dec_obj98;
void* right_value327;
char* __exception_result_var_b476;
char* __dec_obj99;
struct list$1CVALUEph* __exception_result_var_b477;
_Bool _if_conditional402;
void* right_value328;
char* __exception_result_var_b478;
char* var_name_359;
struct sType* __exception_result_var_b479;
void* right_value329;
struct sType* result_type_360;
void* right_value330;
struct sType* __exception_result_var_b480;
struct sType* result_type2_361;
struct sType* result_type3_362;
_Bool _if_conditional403;
struct list$1sTypeph* __dec_obj100;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&params_179, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_180, 0, sizeof(struct sNode*));
memset(&method_block_181, 0, sizeof(struct buffer*));
memset(&method_block_sline_182, 0, sizeof(int));
memset(&method_generics_types_183, 0, sizeof(struct list$1sTypeph*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&obj_value_184, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&obj_type_185, 0, sizeof(struct sType*));
memset(&klass_186, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_187, 0, sizeof(_Bool));
memset(&lambda_type_188, 0, sizeof(struct sType*));
memset(&o2_saved_189, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value178 = (void*)0;
memset(&result_type_197, 0, sizeof(struct sType*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&come_params_198, 0, sizeof(struct list$1CVALUEph*));
memset(&i_201, 0, sizeof(int));
memset(&o2_saved_202, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_205, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value181 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&buf_214, 0, sizeof(struct buffer*));
right_value187 = (void*)0;
memset(&j_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&it_219, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&come_value2_222, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&result_type2_223, 0, sizeof(struct sType*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&generics_fun_name_224, 0, sizeof(char*));
memset(&fun_225, 0, sizeof(struct sFun*));
right_value195 = (void*)0;
memset(&klass_226, 0, sizeof(struct sClass*));
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&i_232, 0, sizeof(int));
right_value200 = (void*)0;
memset(&new_fun_name_233, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&obj_array_type_237, 0, sizeof(struct sType*));
right_value202 = (void*)0;
memset(&array_method_name_238, 0, sizeof(char*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&klass_239, 0, sizeof(struct sClass*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_type_240, 0, sizeof(struct sType*));
right_value210 = (void*)0;
memset(&result_type2_241, 0, sizeof(struct sType*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&param_types_242, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_243, 0, sizeof(struct list$1sTypeph*));
memset(&it_246, 0, sizeof(struct sType*));
right_value216 = (void*)0;
memset(&it2_252, 0, sizeof(struct sType*));
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&come_params_253, 0, sizeof(struct list$1CVALUEph*));
memset(&i_254, 0, sizeof(int));
memset(&first_param_258, 0, sizeof(_Bool));
memset(&o2_saved_259, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_260, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value223 = (void*)0;
memset(&come_value_263, 0, sizeof(struct CVALUE*));
memset(&n_264, 0, sizeof(int));
memset(&o2_saved_265, 0, sizeof(struct list$1charph*));
memset(&it_268, 0, sizeof(char*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&i_273, 0, sizeof(int));
memset(&o2_saved_274, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_275, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&come_value_281, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&obj_array_type_285, 0, sizeof(struct sType*));
right_value234 = (void*)0;
memset(&array_method_name_286, 0, sizeof(char*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&buf_287, 0, sizeof(struct buffer*));
memset(&i_288, 0, sizeof(int));
memset(&o2_saved_289, 0, sizeof(struct list$1sNodeph*));
memset(&it_292, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&come_value_296, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&buf_300, 0, sizeof(struct buffer*));
memset(&i_301, 0, sizeof(int));
memset(&o2_saved_302, 0, sizeof(struct list$1sNodeph*));
memset(&it_303, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&come_value_305, 0, sizeof(struct CVALUE*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&buf_306, 0, sizeof(struct buffer*));
memset(&i_307, 0, sizeof(int));
memset(&o2_saved_308, 0, sizeof(struct list$1sNodeph*));
memset(&it_309, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
memset(&come_value_310, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&come_value_311, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&buf_312, 0, sizeof(struct buffer*));
memset(&i_313, 0, sizeof(int));
memset(&o2_saved_314, 0, sizeof(struct list$1sNodeph*));
memset(&it_315, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
memset(&come_value_316, 0, sizeof(struct CVALUE*));
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&come_value_317, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&default_param_318, 0, sizeof(char*));
memset(&param_name_319, 0, sizeof(char*));
memset(&source_320, 0, sizeof(struct buffer*));
memset(&p_321, 0, sizeof(char*));
memset(&head_322, 0, sizeof(char*));
memset(&sline_323, 0, sizeof(int));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&node_324, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&come_value_325, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value293 = (void*)0;
memset(&current_stack_frame_node_326, 0, sizeof(struct sNode*));
right_value294 = (void*)0;
memset(&come_value_328, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
right_value296 = (void*)0;
memset(&method_block2_329, 0, sizeof(struct buffer*));
right_value297 = (void*)0;
memset(&method_block_type_330, 0, sizeof(struct sType*));
right_value298 = (void*)0;
memset(&class_name_331, 0, sizeof(char*));
memset(&current_stack_frame_struct_332, 0, sizeof(struct sClass*));
right_value299 = (void*)0;
memset(&result_type_333, 0, sizeof(struct sType*));
memset(&param_types_334, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_335, 0, sizeof(struct list$1charph*));
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&all_alhabet_sname_336, 0, sizeof(struct buffer*));
memset(&p_337, 0, sizeof(char*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&i_338, 0, sizeof(int));
memset(&o2_saved_339, 0, sizeof(struct list$1sTypeph*));
memset(&it_340, 0, sizeof(struct sType*));
memset(&param_type_341, 0, sizeof(struct sType*));
right_value305 = (void*)0;
memset(&param_name_342, 0, sizeof(char*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&param_name_343, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&param_name_344, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&source3_345, 0, sizeof(struct buffer*));
memset(&p_346, 0, sizeof(char*));
memset(&head_347, 0, sizeof(char*));
memset(&sline_348, 0, sizeof(int));
right_value315 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&method_block_name_350, 0, sizeof(char*));
right_value318 = (void*)0;
memset(&come_value2_351, 0, sizeof(struct CVALUE*));
memset(&fun2_352, 0, sizeof(struct sFun*));
memset(&method_block_type2_353, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
memset(&buf_354, 0, sizeof(struct buffer*));
memset(&j_355, 0, sizeof(int));
memset(&o2_saved_356, 0, sizeof(struct list$1CVALUEph*));
memset(&it_357, 0, sizeof(struct CVALUE*));
right_value323 = (void*)0;
memset(&come_value2_358, 0, sizeof(struct CVALUE*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&var_name_359, 0, sizeof(char*));
right_value329 = (void*)0;
memset(&result_type_360, 0, sizeof(struct sType*));
right_value330 = (void*)0;
memset(&result_type2_361, 0, sizeof(struct sType*));
memset(&result_type3_362, 0, sizeof(struct sType*));
    fun_name_178=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 189, 2288)), "20method.c", 189, 2289))->fun_name;
    params_179=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 190, 2290)), "20method.c", 190, 2291))->params;
    obj_180=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 191, 2292)), "20method.c", 191, 2293))->obj;
    method_block_181=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 192, 2294)), "20method.c", 192, 2295))->method_block;
    method_block_sline_182=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 193, 2296)), "20method.c", 193, 2297))->method_block_sline;
    method_generics_types_183=(struct list$1sTypeph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 196, 2298)), "20method.c", 196, 2299))->method_generics_types);
    __dec_obj57=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 197, 2300)), "20method.c", 197, 2301))->method_generics_types;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 197, 2300)), "20method.c", 197, 2301))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value173=(come_push_stackframe("20method.c", 197, 2304),__exception_result_var_b174=list$1sTypephp_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "20method.c", 197, 2302)), "20method.c", 197, 2303))->method_generics_types), come_pop_stackframe(), __exception_result_var_b174))));
    come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value173,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional257=!(come_push_stackframe("20method.c", 199, 2305),__exception_result_var_b175=node_compile(obj_180,info), come_pop_stackframe(), __exception_result_var_b175),    _if_conditional257) {
        __result134__ = (_Bool)0;
        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result134__;
    }
    obj_value_184=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 203, 2306),__exception_result_var_b176=((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b176));
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("20method.c", 204,2307),dec_stack_ptr(1,info),come_pop_stackframe());
    if(_if_conditional258=gComeDebug&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 206, 2308)), "20method.c", 206, 2309))->type, "20method.c", 206, 2310)), "20method.c", 206, 2311))->mPointerNum>0,    _if_conditional258) {
        __dec_obj58=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 207, 2312)), "20method.c", 207, 2313))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 207, 2312)), "20method.c", 207, 2313))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 207, 2324),__exception_result_var_b178=((char*)(right_value176=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("20method.c", 207, 2316),__exception_result_var_b177=((char*)(right_value175=make_type_name_string(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 207, 2314)), "20method.c", 207, 2315))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b177), "20method.c", 207, 2317)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 207, 2318)), "20method.c", 207, 2319))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 207, 2320)), "20method.c", 207, 2321))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 207, 2322)), "20method.c", 207, 2323))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b178));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    obj_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=(come_push_stackframe("20method.c", 213, 2327),__exception_result_var_b179=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 213, 2325)), "20method.c", 213, 2326))->type), come_pop_stackframe(), __exception_result_var_b179))));
    come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_186=((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_185, "20method.c", 215, 2328)), "20method.c", 215, 2329))->mClass;
    calling_dynamic_method_187=(_Bool)0;
    lambda_type_188=((void*)0);
    for(    o2_saved_189=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_186, "20method.c", 219, 2330)), "20method.c", 219, 2331))->mFields)),it_192=(come_push_stackframe("20method.c", 219, 2346),__exception_result_var_b182=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "20method.c", 219, 2332)), "20method.c", 219, 2333))), come_pop_stackframe(), __exception_result_var_b182);    !(come_push_stackframe("20method.c", 219, 2351),__exception_result_var_b183=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "20method.c", 219, 2347)), "20method.c", 219, 2348))), come_pop_stackframe(), __exception_result_var_b183);    it_192=(come_push_stackframe("20method.c", 219, 2370),__exception_result_var_b186=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_189), "20method.c", 219, 2352)), "20method.c", 219, 2353))), come_pop_stackframe(), __exception_result_var_b186)    ){
        multiple_assign_var1=it_192;
        field_name_195=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_196=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(_if_conditional263=(come_push_stackframe("20method.c", 222, 2371),__exception_result_var_b187=string_operator_equals(field_name_195,fun_name_178), come_pop_stackframe(), __exception_result_var_b187)&&(come_push_stackframe("20method.c", 222, 2376),__exception_result_var_b188=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(field_type_196, "20method.c", 222, 2372)), "20method.c", 222, 2373))->mClass, "20method.c", 222, 2374)), "20method.c", 222, 2375))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b188),        _if_conditional263) {
            calling_dynamic_method_187=(_Bool)1;
            lambda_type_188=field_type_196;
            field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_189,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_187) {
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(come_push_stackframe("20method.c", 230, 2381),__exception_result_var_b189=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_188, "20method.c", 230, 2377)), "20method.c", 230, 2378))->mResultType, "20method.c", 230, 2379)), "20method.c", 230, 2380))->v1), come_pop_stackframe(), __exception_result_var_b189))));
        come_call_finalizer3(right_value178,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_197, "20method.c", 231, 2382)), "20method.c", 231, 2383))->mStatic=(_Bool)0;
        come_params_198=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("20method.c", 233, 2395),__exception_result_var_b190=((struct list$1CVALUEph*)(right_value180=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value179=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 233, "list$1CVALUEph"))), "20method.c", 233, 2384)))))), come_pop_stackframe(), __exception_result_var_b190));
        come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        i_201=0;
        for(        o2_saved_202=(params_179),it_205=(come_push_stackframe("20method.c", 236, 2410),__exception_result_var_b193=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_202), "20method.c", 236, 2396)), "20method.c", 236, 2397))), come_pop_stackframe(), __exception_result_var_b193);        !(come_push_stackframe("20method.c", 236, 2415),__exception_result_var_b194=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_202), "20method.c", 236, 2411)), "20method.c", 236, 2412))), come_pop_stackframe(), __exception_result_var_b194);        it_205=(come_push_stackframe("20method.c", 236, 2434),__exception_result_var_b197=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_202), "20method.c", 236, 2416)), "20method.c", 236, 2417))), come_pop_stackframe(), __exception_result_var_b197)        ){
            multiple_assign_var2=it_205;
            label_208=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(_if_conditional269=i_201==0,            _if_conditional269) {
                (come_push_stackframe("20method.c", 240, 2437),__exception_result_var_b198=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 240, 2435)), "20method.c", 240, 2436)),(struct CVALUE*)come_increment_ref_count(obj_value_184)), come_pop_stackframe(), __exception_result_var_b198);
                i_201++;
            }
            else {
                if(_if_conditional270=!(come_push_stackframe("20method.c", 244, 2438),__exception_result_var_b199=node_compile(node_209,info), come_pop_stackframe(), __exception_result_var_b199),                _if_conditional270) {
                    __result150__ = (_Bool)0;
                    label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_198,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result150__;
                }
                come_value_210=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 248, 2439),__exception_result_var_b200=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b200));
                come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("20method.c", 250, 2456),__exception_result_var_b203=check_assign_type(((char*)(right_value184=xsprintf("\%s param num \%s is assinged to",((char*)(right_value182=charp_to_string(fun_name_178))),((char*)(right_value183=int_to_string(i_201)))))),(come_push_stackframe("20method.c", 250, 2453),__exception_result_var_b202=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_188, "20method.c", 250, 2440)), "20method.c", 250, 2441))->mParamTypes, "20method.c", 250, 2442)),i_201-1), "20method.c", 250, 2452)), come_pop_stackframe(), __exception_result_var_b202),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_210, "20method.c", 250, 2454)), "20method.c", 250, 2455))->type,come_value_210,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b203);
                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional273=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 251, 2461),__exception_result_var_b204=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_188, "20method.c", 251, 2457)), "20method.c", 251, 2458))->mParamTypes, "20method.c", 251, 2459)),i_201-1), "20method.c", 251, 2460)), come_pop_stackframe(), __exception_result_var_b204), "20method.c", 251, 2462)), "20method.c", 251, 2463))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_210, "20method.c", 251, 2464)), "20method.c", 251, 2465))->type, "20method.c", 251, 2466)), "20method.c", 251, 2467))->mHeap,                _if_conditional273) {
                    (come_push_stackframe("20method.c", 253,2475),std_move((come_push_stackframe("20method.c", 253, 2472),__exception_result_var_b205=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_188, "20method.c", 253, 2468)), "20method.c", 253, 2469))->mParamTypes, "20method.c", 253, 2470)),i_201-1), "20method.c", 253, 2471)), come_pop_stackframe(), __exception_result_var_b205),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_210, "20method.c", 253, 2473)), "20method.c", 253, 2474))->type,come_value_210,info),come_pop_stackframe());
                }
                (come_push_stackframe("20method.c", 256, 2478),__exception_result_var_b206=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 256, 2476)), "20method.c", 256, 2477)),(struct CVALUE*)come_increment_ref_count(come_value_210)), come_pop_stackframe(), __exception_result_var_b206);
                i_201++;
                (come_push_stackframe("20method.c", 259,2479),dec_stack_ptr(1,info),come_pop_stackframe());
                come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_214=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 263, 2481),__exception_result_var_b207=((struct buffer*)(right_value186=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value185=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 263, "buffer"))), "20method.c", 263, 2480)))))), come_pop_stackframe(), __exception_result_var_b207));
        come_call_finalizer3(right_value185,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value186,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("20method.c", 265, 2487),__exception_result_var_b209=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 265, 2482)), "20method.c", 265, 2483)),(come_push_stackframe("20method.c", 265, 2486),__exception_result_var_b208=((char*)(right_value187=xsprintf("%s->%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 265, 2484)), "20method.c", 265, 2485))->c_value,fun_name_178))), come_pop_stackframe(), __exception_result_var_b208)), come_pop_stackframe(), __exception_result_var_b209);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("20method.c", 266, 2490),__exception_result_var_b210=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 266, 2488)), "20method.c", 266, 2489)),"("), come_pop_stackframe(), __exception_result_var_b210);
        j_215=0;
        for(        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((come_params_198)),it_219=(come_push_stackframe("20method.c", 269, 2505),__exception_result_var_b213=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "20method.c", 269, 2491)), "20method.c", 269, 2492))), come_pop_stackframe(), __exception_result_var_b213);        !(come_push_stackframe("20method.c", 269, 2510),__exception_result_var_b214=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "20method.c", 269, 2506)), "20method.c", 269, 2507))), come_pop_stackframe(), __exception_result_var_b214);        it_219=(come_push_stackframe("20method.c", 269, 2529),__exception_result_var_b217=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_216), "20method.c", 269, 2511)), "20method.c", 269, 2512))), come_pop_stackframe(), __exception_result_var_b217)        ){
            if(_if_conditional278=j_215==0,            _if_conditional278) {
                __dec_obj59=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_219, "20method.c", 271, 2530)), "20method.c", 271, 2531))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_219, "20method.c", 271, 2530)), "20method.c", 271, 2531))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 271, 2534),__exception_result_var_b218=((char*)(right_value188=xsprintf("%s->_protocol_obj",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_219, "20method.c", 271, 2532)), "20method.c", 271, 2533))->c_value))), come_pop_stackframe(), __exception_result_var_b218));
                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            (come_push_stackframe("20method.c", 273, 2539),__exception_result_var_b219=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 273, 2535)), "20method.c", 273, 2536)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_219, "20method.c", 273, 2537)), "20method.c", 273, 2538))->c_value), come_pop_stackframe(), __exception_result_var_b219);
            if(_if_conditional280=j_215!=(come_push_stackframe("20method.c", 275, 2544),__exception_result_var_b220=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_198, "20method.c", 275, 2540)), "20method.c", 275, 2541))), come_pop_stackframe(), __exception_result_var_b220)-1,            _if_conditional280) {
                (come_push_stackframe("20method.c", 276, 2547),__exception_result_var_b221=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 276, 2545)), "20method.c", 276, 2546)),","), come_pop_stackframe(), __exception_result_var_b221);
            }
            j_215++;
        }
        come_call_finalizer3(o2_saved_216,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("20method.c", 281, 2550),__exception_result_var_b222=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 281, 2548)), "20method.c", 281, 2549)),")"), come_pop_stackframe(), __exception_result_var_b222);
        come_value2_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 283, "CVALUE"))));
        come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj60=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 285, 2551)), "20method.c", 285, 2552))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 285, 2551)), "20method.c", 285, 2552))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 285, 2555),__exception_result_var_b223=((char*)(right_value190=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 285, 2553)), "20method.c", 285, 2554))))), come_pop_stackframe(), __exception_result_var_b223));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        result_type2_223=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 287, 2558),__exception_result_var_b224=((struct sType*)(right_value191=solve_generics(result_type_197,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 287, 2556)), "20method.c", 287, 2557))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b224));
        come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_223, "20method.c", 289, 2559)), "20method.c", 289, 2560))->mHeap) {
            __dec_obj61=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 290, 2561)), "20method.c", 290, 2562))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 290, 2561)), "20method.c", 290, 2562))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 290, 2566),__exception_result_var_b226=((char*)(right_value193=append_object_to_right_values((come_push_stackframe("20method.c", 290, 2565),__exception_result_var_b225=((char*)(right_value192=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_214, "20method.c", 290, 2563)), "20method.c", 290, 2564))))), come_pop_stackframe(), __exception_result_var_b225),(struct sType*)come_increment_ref_count(result_type2_223),info))), come_pop_stackframe(), __exception_result_var_b226));
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj62=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 293, 2567)), "20method.c", 293, 2568))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 293, 2567)), "20method.c", 293, 2568))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=(come_push_stackframe("20method.c", 293, 2569),__exception_result_var_b227=sType_clone(result_type2_223), come_pop_stackframe(), __exception_result_var_b227))));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value194,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 294, 2570)), "20method.c", 294, 2571))->type, "20method.c", 294, 2572)), "20method.c", 294, 2573))->mStatic=(_Bool)0;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 295, 2574)), "20method.c", 295, 2575))->var=((void*)0);
        (come_push_stackframe("20method.c", 297,2578),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_222, "20method.c", 297, 2576)), "20method.c", 297, 2577))->c_value),come_pop_stackframe());
        (come_push_stackframe("20method.c", 299, 2583),__exception_result_var_b228=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 299, 2579)), "20method.c", 299, 2580))->stack, "20method.c", 299, 2581)), "20method.c", 299, 2582)),(struct CVALUE*)come_increment_ref_count(come_value2_222)), come_pop_stackframe(), __exception_result_var_b228);
        come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_198,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        fun_225=((void*)0);
        if(_if_conditional282=(come_push_stackframe("20method.c", 304, 2584),__exception_result_var_b229=charp_operator_equals(fun_name_178,"super"), come_pop_stackframe(), __exception_result_var_b229),        _if_conditional282) {
            fun_name_178=(come_push_stackframe("20method.c", 305, 2589),__exception_result_var_b230=((char*)(right_value195=create_non_method_name(obj_type_185,(_Bool)0,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 305, 2585)), "20method.c", 305, 2586))->come_fun, "20method.c", 305, 2587)), "20method.c", 305, 2588))->mName,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b230);
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            klass_226=((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_185, "20method.c", 307, 2590)), "20method.c", 307, 2591))->mClass;
            while(_while_condtional35=(come_push_stackframe("20method.c", 308, 2616),__exception_result_var_b234=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 308, 2592)), "20method.c", 308, 2593))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_226, "20method.c", 308, 2594)), "20method.c", 308, 2595))->mParentClassName), come_pop_stackframe(), __exception_result_var_b234),            _while_condtional35) {
                klass_226=(come_push_stackframe("20method.c", 309, 2621),__exception_result_var_b235=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 309, 2617)), "20method.c", 309, 2618))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_226, "20method.c", 309, 2619)), "20method.c", 309, 2620))->mParentClassName), come_pop_stackframe(), __exception_result_var_b235);
                __dec_obj63=generics_fun_name_224;
                generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 310, 2622),__exception_result_var_b236=((char*)(right_value196=create_method_name_using_class(klass_226,(_Bool)0,fun_name_178,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b236));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_225=(come_push_stackframe("20method.c", 312, 2706),__exception_result_var_b239=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 312, 2623)), "20method.c", 312, 2624))->funcs, "20method.c", 312, 2625)), "20method.c", 312, 2626)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b239);
                if(fun_225) {
                    break;
                }
            }
        }
        else {
            __dec_obj64=generics_fun_name_224;
            generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 321, 2711),__exception_result_var_b242=((char*)(right_value199=string_to_string(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("20method.c", 321, 2708),__exception_result_var_b241=((char*)(right_value198=make_generics_function(obj_type_185,(char*)come_increment_ref_count((come_push_stackframe("20method.c", 321, 2707),__exception_result_var_b240=((char*)(right_value197=__builtin_string(fun_name_178))), come_pop_stackframe(), __exception_result_var_b240)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b241), "20method.c", 321, 2709)), "20method.c", 321, 2710))))), come_pop_stackframe(), __exception_result_var_b242));
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_232=128;            i_232>=1;            i_232--            ){
                new_fun_name_233=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 324, 2712),__exception_result_var_b243=((char*)(right_value200=xsprintf("%s_v%d",generics_fun_name_224,i_232))), come_pop_stackframe(), __exception_result_var_b243));
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_225=(come_push_stackframe("20method.c", 326, 2735),__exception_result_var_b247=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 326, 2713)), "20method.c", 326, 2714))->funcs,new_fun_name_233), come_pop_stackframe(), __exception_result_var_b247);
                if(_if_conditional311=fun_225!=((void*)0),                _if_conditional311) {
                    __dec_obj65=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 329, 2736),__exception_result_var_b248=((char*)(right_value201=__builtin_string(new_fun_name_233))), come_pop_stackframe(), __exception_result_var_b248));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional312=fun_225==((void*)0),            _if_conditional312) {
                obj_array_type_237=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_185, "20method.c", 335, 2737)), "20method.c", 335, 2738))->mOriginalLoadVarType, "20method.c", 335, 2739)), "20method.c", 335, 2740))->v1;
                if(_if_conditional313=obj_array_type_237&&(come_push_stackframe("20method.c", 337, 2745),__exception_result_var_b249=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_237, "20method.c", 337, 2741)), "20method.c", 337, 2742))->mArrayNum, "20method.c", 337, 2743)), "20method.c", 337, 2744))), come_pop_stackframe(), __exception_result_var_b249)>0,                _if_conditional313) {
                    array_method_name_238=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 338, 2746),__exception_result_var_b250=((char*)(right_value202=create_method_name(obj_array_type_237,(_Bool)0,fun_name_178,info,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b250));
                    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    fun_225=(come_push_stackframe("20method.c", 340, 2751),__exception_result_var_b251=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 340, 2747)), "20method.c", 340, 2748))->funcs, "20method.c", 340, 2749)), "20method.c", 340, 2750)),array_method_name_238,((void*)0)), come_pop_stackframe(), __exception_result_var_b251);
                    if(fun_225) {
                        __dec_obj66=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 343, 2752),__exception_result_var_b252=((char*)(right_value203=__builtin_string(array_method_name_238))), come_pop_stackframe(), __exception_result_var_b252));
                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun_225=(come_push_stackframe("20method.c", 346, 2757),__exception_result_var_b253=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 346, 2753)), "20method.c", 346, 2754))->funcs, "20method.c", 346, 2755)), "20method.c", 346, 2756)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b253);
                        if(_if_conditional315=fun_225==((void*)0),                        _if_conditional315) {
                            __dec_obj67=generics_fun_name_224;
                            generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 349, 2759),__exception_result_var_b255=((char*)(right_value205=create_method_name(obj_type_185,(_Bool)0,(come_push_stackframe("20method.c", 349, 2758),__exception_result_var_b254=((char*)(right_value204=__builtin_string(fun_name_178))), come_pop_stackframe(), __exception_result_var_b254),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b255));
                            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            fun_225=(come_push_stackframe("20method.c", 350, 2764),__exception_result_var_b256=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 350, 2760)), "20method.c", 350, 2761))->funcs, "20method.c", 350, 2762)), "20method.c", 350, 2763)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b256);
                            if(_if_conditional316=fun_225==((void*)0),                            _if_conditional316) {
                                (come_push_stackframe("20method.c", 352,2769),err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_224,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 352, 2765)), "20method.c", 352, 2766))->come_fun, "20method.c", 352, 2767)), "20method.c", 352, 2768))->mName),come_pop_stackframe());
                                __result174__ = (_Bool)1;
                                array_method_name_238 = come_decrement_ref_count2(array_method_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result174__;
                            }
                        }
                    }
                    array_method_name_238 = come_decrement_ref_count2(array_method_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_225=(come_push_stackframe("20method.c", 359, 2774),__exception_result_var_b257=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 359, 2770)), "20method.c", 359, 2771))->funcs, "20method.c", 359, 2772)), "20method.c", 359, 2773)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b257);
                    if(_if_conditional317=fun_225==((void*)0),                    _if_conditional317) {
                        __dec_obj68=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 362, 2776),__exception_result_var_b259=((char*)(right_value207=create_method_name(obj_type_185,(_Bool)0,(come_push_stackframe("20method.c", 362, 2775),__exception_result_var_b258=((char*)(right_value206=__builtin_string(fun_name_178))), come_pop_stackframe(), __exception_result_var_b258),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b259));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        fun_225=(come_push_stackframe("20method.c", 364, 2781),__exception_result_var_b260=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 364, 2777)), "20method.c", 364, 2778))->funcs, "20method.c", 364, 2779)), "20method.c", 364, 2780)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b260);
                        if(_if_conditional318=fun_225==((void*)0),                        _if_conditional318) {
                            klass_239=((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_185, "20method.c", 367, 2782)), "20method.c", 367, 2783))->mClass;
                            while(_while_condtional38=(come_push_stackframe("20method.c", 368, 2788),__exception_result_var_b261=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 368, 2784)), "20method.c", 368, 2785))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_239, "20method.c", 368, 2786)), "20method.c", 368, 2787))->mParentClassName), come_pop_stackframe(), __exception_result_var_b261),                            _while_condtional38) {
                                klass_239=(come_push_stackframe("20method.c", 369, 2793),__exception_result_var_b262=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 369, 2789)), "20method.c", 369, 2790))->classes,((struct sClass*)come_null_check(((struct sClass*)come_null_check(klass_239, "20method.c", 369, 2791)), "20method.c", 369, 2792))->mParentClassName), come_pop_stackframe(), __exception_result_var_b262);
                                __dec_obj69=generics_fun_name_224;
                                generics_fun_name_224=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 370, 2794),__exception_result_var_b263=((char*)(right_value208=create_method_name_using_class(klass_239,(_Bool)0,fun_name_178,info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b263));
                                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                fun_225=(come_push_stackframe("20method.c", 372, 2799),__exception_result_var_b264=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 372, 2795)), "20method.c", 372, 2796))->funcs, "20method.c", 372, 2797)), "20method.c", 372, 2798)),generics_fun_name_224,((void*)0)), come_pop_stackframe(), __exception_result_var_b264);
                                if(fun_225) {
                                    break;
                                }
                            }
                        }
                        if(_if_conditional320=fun_225==((void*)0),                        _if_conditional320) {
                            (come_push_stackframe("20method.c", 381,2804),err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_224,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 381, 2800)), "20method.c", 381, 2801))->come_fun, "20method.c", 381, 2802)), "20method.c", 381, 2803))->mName),come_pop_stackframe());
                            __result175__ = (_Bool)1;
                            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result175__;
                        }
                    }
                }
            }
        }
        if(_if_conditional321=fun_225==((void*)0),        _if_conditional321) {
            (come_push_stackframe("20method.c", 389,2809),err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_224,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 389, 2805)), "20method.c", 389, 2806))->come_fun, "20method.c", 389, 2807)), "20method.c", 389, 2808))->mName),come_pop_stackframe());
            __result176__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result176__;
        }
        if(_if_conditional323=(come_push_stackframe("20method.c", 393, 2816),__exception_result_var_b265=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 393, 2810)), "20method.c", 393, 2811))->mParamTypes, "20method.c", 393, 2812)), "20method.c", 393, 2813))), come_pop_stackframe(), __exception_result_var_b265)==0,        _if_conditional323) {
            (come_push_stackframe("20method.c", 394,2817),err_msg(info,"Method require function parametor"),come_pop_stackframe());
            __result179__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result179__;
        }
        result_type_240=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(come_push_stackframe("20method.c", 398, 2820),__exception_result_var_b266=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 398, 2818)), "20method.c", 398, 2819))->mResultType), come_pop_stackframe(), __exception_result_var_b266))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_240, "20method.c", 399, 2821)), "20method.c", 399, 2822))->mStatic=(_Bool)0;
        result_type2_241=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 401, 2825),__exception_result_var_b267=((struct sType*)(right_value210=solve_generics(result_type_240,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 401, 2823)), "20method.c", 401, 2824))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b267));
        come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_types_242=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("20method.c", 403, 2827),__exception_result_var_b268=((struct list$1sTypeph*)(right_value212=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value211=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 403, "list$1sTypeph"))), "20method.c", 403, 2826)))))), come_pop_stackframe(), __exception_result_var_b268));
        come_call_finalizer3(right_value211,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value212,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_243=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 404, 2828)), "20method.c", 404, 2829))->mParamTypes)),it_246=(come_push_stackframe("20method.c", 404, 2844),__exception_result_var_b271=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_243), "20method.c", 404, 2830)), "20method.c", 404, 2831))), come_pop_stackframe(), __exception_result_var_b271);        !(come_push_stackframe("20method.c", 404, 2849),__exception_result_var_b272=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_243), "20method.c", 404, 2845)), "20method.c", 404, 2846))), come_pop_stackframe(), __exception_result_var_b272);        it_246=(come_push_stackframe("20method.c", 404, 2868),__exception_result_var_b275=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_243), "20method.c", 404, 2850)), "20method.c", 404, 2851))), come_pop_stackframe(), __exception_result_var_b275)        ){
            if(_if_conditional328=it_246==((void*)0),            _if_conditional328) {
                (come_push_stackframe("20method.c", 406, 2915),__exception_result_var_b276=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 406, 2869)), "20method.c", 406, 2870)),it_246), come_pop_stackframe(), __exception_result_var_b276);
            }
            else {
                it2_252=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 409, 2918),__exception_result_var_b277=((struct sType*)(right_value216=solve_generics(it_246,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 409, 2916)), "20method.c", 409, 2917))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b277));
                come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("20method.c", 411, 2922),__exception_result_var_b279=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 411, 2919)), "20method.c", 411, 2920)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(come_push_stackframe("20method.c", 411, 2921),__exception_result_var_b278=sType_clone(it2_252), come_pop_stackframe(), __exception_result_var_b278))))), come_pop_stackframe(), __exception_result_var_b279);
                come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(it2_252,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_253=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("20method.c", 415, 2924),__exception_result_var_b280=((struct list$1CVALUEph*)(right_value219=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value218=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 415, "list$1CVALUEph"))), "20method.c", 415, 2923)))))), come_pop_stackframe(), __exception_result_var_b280));
        come_call_finalizer3(right_value218,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value219,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        i_254=0;        i_254<(come_push_stackframe("20method.c", 417, 2929),__exception_result_var_b281=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 417, 2925)), "20method.c", 417, 2926))->mParamTypes, "20method.c", 417, 2927)), "20method.c", 417, 2928))), come_pop_stackframe(), __exception_result_var_b281)-(method_block_181?2:0);        i_254++        ){
            (come_push_stackframe("20method.c", 418, 2976),__exception_result_var_b282=list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 418, 2930)), "20method.c", 418, 2931)),((void*)0)), come_pop_stackframe(), __exception_result_var_b282);
        }
        first_param_258=(_Bool)1;
        for(        o2_saved_259=(params_179),it_260=(come_push_stackframe("20method.c", 422, 2979),__exception_result_var_b283=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_259), "20method.c", 422, 2977)), "20method.c", 422, 2978))), come_pop_stackframe(), __exception_result_var_b283);        !(come_push_stackframe("20method.c", 422, 2982),__exception_result_var_b284=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_259), "20method.c", 422, 2980)), "20method.c", 422, 2981))), come_pop_stackframe(), __exception_result_var_b284);        it_260=(come_push_stackframe("20method.c", 422, 2985),__exception_result_var_b285=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_259), "20method.c", 422, 2983)), "20method.c", 422, 2984))), come_pop_stackframe(), __exception_result_var_b285)        ){
            multiple_assign_var3=it_260;
            label_261=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_262=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(first_param_258) {
                first_param_258=(_Bool)0;
            }
            else {
                if(label_261) {
                    if(_if_conditional335=!(come_push_stackframe("20method.c", 429, 2986),__exception_result_var_b286=node_compile(node_262,info), come_pop_stackframe(), __exception_result_var_b286),                    _if_conditional335) {
                        __result189__ = (_Bool)0;
                        label_261 = come_decrement_ref_count2(label_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result189__;
                    }
                    come_value_263=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 433, 2987),__exception_result_var_b287=((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b287));
                    come_call_finalizer3(right_value223,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("20method.c", 434,2988),dec_stack_ptr(1,info),come_pop_stackframe());
                    n_264=0;
                    for(                    o2_saved_265=(struct list$1charph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 437, 2989)), "20method.c", 437, 2990))->mParamNames)),it_268=(come_push_stackframe("20method.c", 437, 3005),__exception_result_var_b290=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_265), "20method.c", 437, 2991)), "20method.c", 437, 2992))), come_pop_stackframe(), __exception_result_var_b290);                    !(come_push_stackframe("20method.c", 437, 3010),__exception_result_var_b291=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_265), "20method.c", 437, 3006)), "20method.c", 437, 3007))), come_pop_stackframe(), __exception_result_var_b291);                    it_268=(come_push_stackframe("20method.c", 437, 3029),__exception_result_var_b294=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_265), "20method.c", 437, 3011)), "20method.c", 437, 3012))), come_pop_stackframe(), __exception_result_var_b294)                    ){
                        if(_if_conditional340=(come_push_stackframe("20method.c", 438, 3030),__exception_result_var_b295=string_operator_equals(label_261,it_268), come_pop_stackframe(), __exception_result_var_b295),                        _if_conditional340) {
                            break;
                        }
                        n_264++;
                    }
                    come_call_finalizer3(o2_saved_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional341=(come_push_stackframe("20method.c", 445, 3031),__exception_result_var_b296=list$1sTypephp_operator_load_element(param_types_242,n_264), come_pop_stackframe(), __exception_result_var_b296),                    _if_conditional341) {
                        (come_push_stackframe("20method.c", 446, 3037),__exception_result_var_b298=check_assign_type(((char*)(right_value226=xsprintf("\%s param num \%s is assinged to",((char*)(right_value224=charp_to_string(fun_name_178))),((char*)(right_value225=int_to_string(n_264)))))),(come_push_stackframe("20method.c", 446, 3034),__exception_result_var_b297=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 446, 3032)),n_264), "20method.c", 446, 3033)), come_pop_stackframe(), __exception_result_var_b297),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_263, "20method.c", 446, 3035)), "20method.c", 446, 3036))->type,come_value_263,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b298);
                        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional342=(come_push_stackframe("20method.c", 448, 3038),__exception_result_var_b299=list$1sTypephp_operator_load_element(param_types_242,n_264), come_pop_stackframe(), __exception_result_var_b299)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 448, 3041),__exception_result_var_b300=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 448, 3039)),n_264), "20method.c", 448, 3040)), come_pop_stackframe(), __exception_result_var_b300), "20method.c", 448, 3042)), "20method.c", 448, 3043))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_263, "20method.c", 448, 3044)), "20method.c", 448, 3045))->type, "20method.c", 448, 3046)), "20method.c", 448, 3047))->mHeap,                    _if_conditional342) {
                        (come_push_stackframe("20method.c", 449,3053),std_move((come_push_stackframe("20method.c", 449, 3050),__exception_result_var_b301=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 449, 3048)),n_264), "20method.c", 449, 3049)), come_pop_stackframe(), __exception_result_var_b301),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_263, "20method.c", 449, 3051)), "20method.c", 449, 3052))->type,come_value_263,info),come_pop_stackframe());
                    }
                    (come_push_stackframe("20method.c", 452, 3069),__exception_result_var_b303=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 452, 3054)), "20method.c", 452, 3055)),n_264,(struct CVALUE*)come_increment_ref_count(come_value_263)), come_pop_stackframe(), __exception_result_var_b303);
                    come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_261 = come_decrement_ref_count2(label_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        i_273=0;
        for(        o2_saved_274=(params_179),it_275=(come_push_stackframe("20method.c", 457, 3072),__exception_result_var_b304=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_274), "20method.c", 457, 3070)), "20method.c", 457, 3071))), come_pop_stackframe(), __exception_result_var_b304);        !(come_push_stackframe("20method.c", 457, 3075),__exception_result_var_b305=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_274), "20method.c", 457, 3073)), "20method.c", 457, 3074))), come_pop_stackframe(), __exception_result_var_b305);        it_275=(come_push_stackframe("20method.c", 457, 3078),__exception_result_var_b306=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_274), "20method.c", 457, 3076)), "20method.c", 457, 3077))), come_pop_stackframe(), __exception_result_var_b306)        ){
            multiple_assign_var4=it_275;
            label_276=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_277=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(_if_conditional346=i_273==0,            _if_conditional346) {
                (come_push_stackframe("20method.c", 461, 3084),__exception_result_var_b308=check_assign_type(((char*)(right_value229=xsprintf("\%s param num \%s is assinged to",((char*)(right_value227=charp_to_string(fun_name_178))),((char*)(right_value228=int_to_string(i_273)))))),(come_push_stackframe("20method.c", 461, 3081),__exception_result_var_b307=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 461, 3079)),i_273), "20method.c", 461, 3080)), come_pop_stackframe(), __exception_result_var_b307),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 461, 3082)), "20method.c", 461, 3083))->type,obj_value_184,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b308);
                right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional347=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 462, 3087),__exception_result_var_b309=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 462, 3085)),i_273), "20method.c", 462, 3086)), come_pop_stackframe(), __exception_result_var_b309), "20method.c", 462, 3088)), "20method.c", 462, 3089))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 462, 3090)), "20method.c", 462, 3091))->type, "20method.c", 462, 3092)), "20method.c", 462, 3093))->mHeap,                _if_conditional347) {
                    (come_push_stackframe("20method.c", 463,3099),std_move((come_push_stackframe("20method.c", 463, 3096),__exception_result_var_b310=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 463, 3094)),i_273), "20method.c", 463, 3095)), come_pop_stackframe(), __exception_result_var_b310),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 463, 3097)), "20method.c", 463, 3098))->type,obj_value_184,info),come_pop_stackframe());
                }
                else {
                    if(_if_conditional348=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 465, 3102),__exception_result_var_b311=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 465, 3100)),i_273), "20method.c", 465, 3101)), come_pop_stackframe(), __exception_result_var_b311), "20method.c", 465, 3103)), "20method.c", 465, 3104))->mHeap&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_184, "20method.c", 465, 3105)), "20method.c", 465, 3106))->type, "20method.c", 465, 3107)), "20method.c", 465, 3108))->mHeap&&!gComeGC,                    _if_conditional348) {
                        (come_push_stackframe("20method.c", 466,3123),err_msg(info,"require heap parametor(%s)",(come_push_stackframe("20method.c", 466, 3122),__exception_result_var_b313=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 466, 3109)), "20method.c", 466, 3110))->mParamNames, "20method.c", 466, 3111)),i_273), "20method.c", 466, 3121)), come_pop_stackframe(), __exception_result_var_b313)),come_pop_stackframe());
                        (come_push_stackframe("20method.c", 467,3124),exit(2),come_pop_stackframe());
                    }
                }
                (come_push_stackframe("20method.c", 469, 3127),__exception_result_var_b314=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 469, 3125)), "20method.c", 469, 3126)),i_273,(struct CVALUE*)come_increment_ref_count(obj_value_184)), come_pop_stackframe(), __exception_result_var_b314);
                i_273++;
            }
            else {
                if(label_276) {
                }
                else {
                    if(_if_conditional352=!(come_push_stackframe("20method.c", 476, 3128),__exception_result_var_b315=node_compile(node_277,info), come_pop_stackframe(), __exception_result_var_b315),                    _if_conditional352) {
                        __result201__ = (_Bool)0;
                        label_276 = come_decrement_ref_count2(label_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result201__;
                    }
                    come_value_281=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 480, 3129),__exception_result_var_b316=((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b316));
                    come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("20method.c", 481,3130),dec_stack_ptr(1,info),come_pop_stackframe());
                    while(_while_condtional41=(_Bool)1,                    _while_condtional41) {
                        if(_if_conditional355=(come_push_stackframe("20method.c", 484, 3140),__exception_result_var_b318=list$1CVALUEphp_operator_load_element(come_params_253,i_273), come_pop_stackframe(), __exception_result_var_b318)==((void*)0),                        _if_conditional355) {
                            break;
                        }
                        else {
                            i_273++;
                        }
                    }
                    if(_if_conditional356=(come_push_stackframe("20method.c", 492, 3143),__exception_result_var_b319=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 492, 3141)),i_273), "20method.c", 492, 3142)), come_pop_stackframe(), __exception_result_var_b319),                    _if_conditional356) {
                        (come_push_stackframe("20method.c", 493, 3149),__exception_result_var_b321=check_assign_type(((char*)(right_value233=xsprintf("\%s param num \%s is assinged to",((char*)(right_value231=charp_to_string(fun_name_178))),((char*)(right_value232=int_to_string(i_273)))))),(come_push_stackframe("20method.c", 493, 3146),__exception_result_var_b320=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 493, 3144)),i_273), "20method.c", 493, 3145)), come_pop_stackframe(), __exception_result_var_b320),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_281, "20method.c", 493, 3147)), "20method.c", 493, 3148))->type,come_value_281,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b321);
                        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional357=(come_push_stackframe("20method.c", 495, 3152),__exception_result_var_b322=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 495, 3150)),i_273), "20method.c", 495, 3151)), come_pop_stackframe(), __exception_result_var_b322)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 495, 3155),__exception_result_var_b323=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 495, 3153)),i_273), "20method.c", 495, 3154)), come_pop_stackframe(), __exception_result_var_b323), "20method.c", 495, 3156)), "20method.c", 495, 3157))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_281, "20method.c", 495, 3158)), "20method.c", 495, 3159))->type, "20method.c", 495, 3160)), "20method.c", 495, 3161))->mHeap,                    _if_conditional357) {
                        (come_push_stackframe("20method.c", 496,3167),std_move((come_push_stackframe("20method.c", 496, 3164),__exception_result_var_b324=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 496, 3162)),i_273), "20method.c", 496, 3163)), come_pop_stackframe(), __exception_result_var_b324),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_281, "20method.c", 496, 3165)), "20method.c", 496, 3166))->type,come_value_281,info),come_pop_stackframe());
                    }
                    (come_push_stackframe("20method.c", 499, 3170),__exception_result_var_b325=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 499, 3168)), "20method.c", 499, 3169)),i_273,(struct CVALUE*)come_increment_ref_count(come_value_281)), come_pop_stackframe(), __exception_result_var_b325);
                    i_273++;
                    come_call_finalizer3(come_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_276 = come_decrement_ref_count2(label_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        while(_while_condtional43=(_Bool)1,        _while_condtional43) {
            if(_if_conditional358=(come_push_stackframe("20method.c", 505, 3171),__exception_result_var_b326=list$1CVALUEphp_operator_load_element(come_params_253,i_273), come_pop_stackframe(), __exception_result_var_b326)==((void*)0),            _if_conditional358) {
                break;
            }
            else {
                i_273++;
            }
        }
        obj_array_type_285=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_185, "20method.c", 513, 3172)), "20method.c", 513, 3173))->mOriginalLoadVarType, "20method.c", 513, 3174)), "20method.c", 513, 3175))->v1;
        if(_if_conditional359=obj_array_type_285&&(come_push_stackframe("20method.c", 514, 3180),__exception_result_var_b327=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 514, 3176)), "20method.c", 514, 3177))->mArrayNum, "20method.c", 514, 3178)), "20method.c", 514, 3179))), come_pop_stackframe(), __exception_result_var_b327)>0,        _if_conditional359) {
            array_method_name_286=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 515, 3181),__exception_result_var_b328=((char*)(right_value234=create_method_name(obj_array_type_285,(_Bool)0,fun_name_178,info,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b328));
            right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional360=(come_push_stackframe("20method.c", 516, 3182),__exception_result_var_b329=string_operator_equals(generics_fun_name_224,array_method_name_286), come_pop_stackframe(), __exception_result_var_b329),            _if_conditional360) {
                if(_if_conditional361=(come_push_stackframe("20method.c", 517, 3183),__exception_result_var_b330=charp_operator_equals(fun_name_178,"to_pointer"), come_pop_stackframe(), __exception_result_var_b330),                _if_conditional361) {
                    buf_287=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 518, 3185),__exception_result_var_b331=((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 518, "buffer"))), "20method.c", 518, 3184)))))), come_pop_stackframe(), __exception_result_var_b331));
                    come_call_finalizer3(right_value235,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value236,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    i_288=0;
                    for(                    o2_saved_289=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 521, 3186)), "20method.c", 521, 3187))->mArrayNum)),it_292=(come_push_stackframe("20method.c", 521, 3202),__exception_result_var_b334=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_289), "20method.c", 521, 3188)), "20method.c", 521, 3189))), come_pop_stackframe(), __exception_result_var_b334);                    !(come_push_stackframe("20method.c", 521, 3207),__exception_result_var_b335=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_289), "20method.c", 521, 3203)), "20method.c", 521, 3204))), come_pop_stackframe(), __exception_result_var_b335);                    it_292=(come_push_stackframe("20method.c", 521, 3226),__exception_result_var_b338=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_289), "20method.c", 521, 3208)), "20method.c", 521, 3209))), come_pop_stackframe(), __exception_result_var_b338)                    ){
                        if(_if_conditional366=!(come_push_stackframe("20method.c", 522, 3227),__exception_result_var_b339=node_compile(it_292,info), come_pop_stackframe(), __exception_result_var_b339),                        _if_conditional366) {
                            (come_push_stackframe("20method.c", 523,3228),err_msg(info,"invalid array num"),come_pop_stackframe());
                            (come_push_stackframe("20method.c", 524,3229),exit(1),come_pop_stackframe());
                        }
                        come_value_295=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 527, 3230),__exception_result_var_b340=((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b340));
                        come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("20method.c", 528,3231),dec_stack_ptr(1,info),come_pop_stackframe());
                        (come_push_stackframe("20method.c", 530, 3237),__exception_result_var_b342=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_287, "20method.c", 530, 3232)), "20method.c", 530, 3233)),(come_push_stackframe("20method.c", 530, 3236),__exception_result_var_b341=((char*)(right_value238=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_295, "20method.c", 530, 3234)), "20method.c", 530, 3235))->c_value))), come_pop_stackframe(), __exception_result_var_b341)), come_pop_stackframe(), __exception_result_var_b342);
                        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(_if_conditional367=i_288!=(come_push_stackframe("20method.c", 531, 3242),__exception_result_var_b343=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 531, 3238)), "20method.c", 531, 3239))->mArrayNum, "20method.c", 531, 3240)), "20method.c", 531, 3241))), come_pop_stackframe(), __exception_result_var_b343)-1,                        _if_conditional367) {
                            (come_push_stackframe("20method.c", 532, 3245),__exception_result_var_b344=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_287, "20method.c", 532, 3243)), "20method.c", 532, 3244)),"*"), come_pop_stackframe(), __exception_result_var_b344);
                        }
                        i_288++;
                        come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_289,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 537, "CVALUE"))));
                    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj77=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_296, "20method.c", 539, 3246)), "20method.c", 539, 3247))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_296, "20method.c", 539, 3246)), "20method.c", 539, 3247))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 539, 3250),__exception_result_var_b345=((char*)(right_value240=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_287, "20method.c", 539, 3248)), "20method.c", 539, 3249))))), come_pop_stackframe(), __exception_result_var_b345));
                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_296, "20method.c", 540, 3251)), "20method.c", 540, 3252))->var=((void*)0);
                    __dec_obj78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_296, "20method.c", 541, 3253)), "20method.c", 541, 3254))->type;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_296, "20method.c", 541, 3253)), "20method.c", 541, 3254))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 541, 3256),__exception_result_var_b346=((struct sType*)(right_value242=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value241=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 541, "sType"))), "20method.c", 541, 3255))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b346));
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("20method.c", 543, 3259),__exception_result_var_b347=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 543, 3257)), "20method.c", 543, 3258)),1,(struct CVALUE*)come_increment_ref_count(come_value_296)), come_pop_stackframe(), __exception_result_var_b347);
                    (come_push_stackframe("20method.c", 544, 3314),__exception_result_var_b348=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_179, "20method.c", 544, 3260)), "20method.c", 544, 3261)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value248=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value247=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 544, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("len")))),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b348);
                    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value248,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(buf_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional371=(come_push_stackframe("20method.c", 546, 3315),__exception_result_var_b349=charp_operator_equals(fun_name_178,"length"), come_pop_stackframe(), __exception_result_var_b349),                    _if_conditional371) {
                        buf_300=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 547, 3317),__exception_result_var_b350=((struct buffer*)(right_value250=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value249=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 547, "buffer"))), "20method.c", 547, 3316)))))), come_pop_stackframe(), __exception_result_var_b350));
                        come_call_finalizer3(right_value249,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value250,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                        i_301=0;
                        for(                        o2_saved_302=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 550, 3318)), "20method.c", 550, 3319))->mArrayNum)),it_303=(come_push_stackframe("20method.c", 550, 3322),__exception_result_var_b351=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_302), "20method.c", 550, 3320)), "20method.c", 550, 3321))), come_pop_stackframe(), __exception_result_var_b351);                        !(come_push_stackframe("20method.c", 550, 3325),__exception_result_var_b352=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_302), "20method.c", 550, 3323)), "20method.c", 550, 3324))), come_pop_stackframe(), __exception_result_var_b352);                        it_303=(come_push_stackframe("20method.c", 550, 3328),__exception_result_var_b353=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_302), "20method.c", 550, 3326)), "20method.c", 550, 3327))), come_pop_stackframe(), __exception_result_var_b353)                        ){
                            if(_if_conditional372=!(come_push_stackframe("20method.c", 551, 3329),__exception_result_var_b354=node_compile(it_303,info), come_pop_stackframe(), __exception_result_var_b354),                            _if_conditional372) {
                                (come_push_stackframe("20method.c", 552,3330),err_msg(info,"invalid array num"),come_pop_stackframe());
                                (come_push_stackframe("20method.c", 553,3331),exit(1),come_pop_stackframe());
                            }
                            come_value_304=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 556, 3332),__exception_result_var_b355=((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b355));
                            come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("20method.c", 557,3333),dec_stack_ptr(1,info),come_pop_stackframe());
                            (come_push_stackframe("20method.c", 559, 3339),__exception_result_var_b357=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_300, "20method.c", 559, 3334)), "20method.c", 559, 3335)),(come_push_stackframe("20method.c", 559, 3338),__exception_result_var_b356=((char*)(right_value252=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_304, "20method.c", 559, 3336)), "20method.c", 559, 3337))->c_value))), come_pop_stackframe(), __exception_result_var_b356)), come_pop_stackframe(), __exception_result_var_b357);
                            right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional373=i_301!=(come_push_stackframe("20method.c", 560, 3344),__exception_result_var_b358=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 560, 3340)), "20method.c", 560, 3341))->mArrayNum, "20method.c", 560, 3342)), "20method.c", 560, 3343))), come_pop_stackframe(), __exception_result_var_b358)-1,                            _if_conditional373) {
                                (come_push_stackframe("20method.c", 561, 3347),__exception_result_var_b359=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_300, "20method.c", 561, 3345)), "20method.c", 561, 3346)),"*"), come_pop_stackframe(), __exception_result_var_b359);
                            }
                            i_301++;
                            come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 566, "CVALUE"))));
                        come_call_finalizer3(right_value253,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_305, "20method.c", 568, 3348)), "20method.c", 568, 3349))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_305, "20method.c", 568, 3348)), "20method.c", 568, 3349))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 568, 3352),__exception_result_var_b360=((char*)(right_value254=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_300, "20method.c", 568, 3350)), "20method.c", 568, 3351))))), come_pop_stackframe(), __exception_result_var_b360));
                        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_305, "20method.c", 569, 3353)), "20method.c", 569, 3354))->var=((void*)0);
                        __dec_obj84=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_305, "20method.c", 570, 3355)), "20method.c", 570, 3356))->type;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_305, "20method.c", 570, 3355)), "20method.c", 570, 3356))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 570, 3358),__exception_result_var_b361=((struct sType*)(right_value256=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value255=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 570, "sType"))), "20method.c", 570, 3357))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b361));
                        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value255,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("20method.c", 572, 3361),__exception_result_var_b362=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 572, 3359)), "20method.c", 572, 3360)),1,(struct CVALUE*)come_increment_ref_count(come_value_305)), come_pop_stackframe(), __exception_result_var_b362);
                        (come_push_stackframe("20method.c", 573, 3364),__exception_result_var_b363=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_179, "20method.c", 573, 3362)), "20method.c", 573, 3363)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value259=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value258=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 573, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("len")))),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b363);
                        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value259,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(buf_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional374=(come_push_stackframe("20method.c", 575, 3365),__exception_result_var_b364=charp_operator_equals(fun_name_178,"to_buffer"), come_pop_stackframe(), __exception_result_var_b364),                        _if_conditional374) {
                            buf_306=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 576, 3367),__exception_result_var_b365=((struct buffer*)(right_value261=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value260=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 576, "buffer"))), "20method.c", 576, 3366)))))), come_pop_stackframe(), __exception_result_var_b365));
                            come_call_finalizer3(right_value260,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value261,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            i_307=0;
                            for(                            o2_saved_308=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 579, 3368)), "20method.c", 579, 3369))->mArrayNum)),it_309=(come_push_stackframe("20method.c", 579, 3372),__exception_result_var_b366=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_308), "20method.c", 579, 3370)), "20method.c", 579, 3371))), come_pop_stackframe(), __exception_result_var_b366);                            !(come_push_stackframe("20method.c", 579, 3375),__exception_result_var_b367=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_308), "20method.c", 579, 3373)), "20method.c", 579, 3374))), come_pop_stackframe(), __exception_result_var_b367);                            it_309=(come_push_stackframe("20method.c", 579, 3378),__exception_result_var_b368=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_308), "20method.c", 579, 3376)), "20method.c", 579, 3377))), come_pop_stackframe(), __exception_result_var_b368)                            ){
                                if(_if_conditional375=!(come_push_stackframe("20method.c", 580, 3379),__exception_result_var_b369=node_compile(it_309,info), come_pop_stackframe(), __exception_result_var_b369),                                _if_conditional375) {
                                    (come_push_stackframe("20method.c", 581,3380),err_msg(info,"invalid array num"),come_pop_stackframe());
                                    (come_push_stackframe("20method.c", 582,3381),exit(1),come_pop_stackframe());
                                }
                                come_value_310=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 585, 3382),__exception_result_var_b370=((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b370));
                                come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("20method.c", 586,3383),dec_stack_ptr(1,info),come_pop_stackframe());
                                (come_push_stackframe("20method.c", 588, 3389),__exception_result_var_b372=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_306, "20method.c", 588, 3384)), "20method.c", 588, 3385)),(come_push_stackframe("20method.c", 588, 3388),__exception_result_var_b371=((char*)(right_value263=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_310, "20method.c", 588, 3386)), "20method.c", 588, 3387))->c_value))), come_pop_stackframe(), __exception_result_var_b371)), come_pop_stackframe(), __exception_result_var_b372);
                                right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional376=i_307!=(come_push_stackframe("20method.c", 589, 3394),__exception_result_var_b373=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 589, 3390)), "20method.c", 589, 3391))->mArrayNum, "20method.c", 589, 3392)), "20method.c", 589, 3393))), come_pop_stackframe(), __exception_result_var_b373)-1,                                _if_conditional376) {
                                    (come_push_stackframe("20method.c", 590, 3397),__exception_result_var_b374=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_306, "20method.c", 590, 3395)), "20method.c", 590, 3396)),"*"), come_pop_stackframe(), __exception_result_var_b374);
                                }
                                i_307++;
                                come_call_finalizer3(come_value_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_308,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_311=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 595, "CVALUE"))));
                            come_call_finalizer3(right_value264,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj85=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_311, "20method.c", 597, 3398)), "20method.c", 597, 3399))->c_value;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_311, "20method.c", 597, 3398)), "20method.c", 597, 3399))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 597, 3402),__exception_result_var_b375=((char*)(right_value265=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_306, "20method.c", 597, 3400)), "20method.c", 597, 3401))))), come_pop_stackframe(), __exception_result_var_b375));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_311, "20method.c", 598, 3403)), "20method.c", 598, 3404))->var=((void*)0);
                            __dec_obj86=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_311, "20method.c", 599, 3405)), "20method.c", 599, 3406))->type;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_311, "20method.c", 599, 3405)), "20method.c", 599, 3406))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 599, 3408),__exception_result_var_b376=((struct sType*)(right_value267=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value266=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 599, "sType"))), "20method.c", 599, 3407))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b376));
                            come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("20method.c", 601, 3411),__exception_result_var_b377=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 601, 3409)), "20method.c", 601, 3410)),1,(struct CVALUE*)come_increment_ref_count(come_value_311)), come_pop_stackframe(), __exception_result_var_b377);
                            (come_push_stackframe("20method.c", 602, 3414),__exception_result_var_b378=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_179, "20method.c", 602, 3412)), "20method.c", 602, 3413)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value270=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value269=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 602, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("len")))),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b378);
                            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value270,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(buf_306,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional377=(come_push_stackframe("20method.c", 604, 3415),__exception_result_var_b379=charp_operator_equals(fun_name_178,"to_list"), come_pop_stackframe(), __exception_result_var_b379),                            _if_conditional377) {
                                buf_312=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 605, 3417),__exception_result_var_b380=((struct buffer*)(right_value272=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 605, "buffer"))), "20method.c", 605, 3416)))))), come_pop_stackframe(), __exception_result_var_b380));
                                come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value272,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                i_313=0;
                                for(                                o2_saved_314=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 608, 3418)), "20method.c", 608, 3419))->mArrayNum)),it_315=(come_push_stackframe("20method.c", 608, 3422),__exception_result_var_b381=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_314), "20method.c", 608, 3420)), "20method.c", 608, 3421))), come_pop_stackframe(), __exception_result_var_b381);                                !(come_push_stackframe("20method.c", 608, 3425),__exception_result_var_b382=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_314), "20method.c", 608, 3423)), "20method.c", 608, 3424))), come_pop_stackframe(), __exception_result_var_b382);                                it_315=(come_push_stackframe("20method.c", 608, 3428),__exception_result_var_b383=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_314), "20method.c", 608, 3426)), "20method.c", 608, 3427))), come_pop_stackframe(), __exception_result_var_b383)                                ){
                                    if(_if_conditional378=!(come_push_stackframe("20method.c", 609, 3429),__exception_result_var_b384=node_compile(it_315,info), come_pop_stackframe(), __exception_result_var_b384),                                    _if_conditional378) {
                                        (come_push_stackframe("20method.c", 610,3430),err_msg(info,"invalid array num"),come_pop_stackframe());
                                        (come_push_stackframe("20method.c", 611,3431),exit(1),come_pop_stackframe());
                                    }
                                    come_value_316=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 614, 3432),__exception_result_var_b385=((struct CVALUE*)(right_value273=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b385));
                                    come_call_finalizer3(right_value273,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("20method.c", 615,3433),dec_stack_ptr(1,info),come_pop_stackframe());
                                    (come_push_stackframe("20method.c", 617, 3439),__exception_result_var_b387=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_312, "20method.c", 617, 3434)), "20method.c", 617, 3435)),(come_push_stackframe("20method.c", 617, 3438),__exception_result_var_b386=((char*)(right_value274=xsprintf("%s",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_316, "20method.c", 617, 3436)), "20method.c", 617, 3437))->c_value))), come_pop_stackframe(), __exception_result_var_b386)), come_pop_stackframe(), __exception_result_var_b387);
                                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional379=i_313!=(come_push_stackframe("20method.c", 618, 3444),__exception_result_var_b388=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_array_type_285, "20method.c", 618, 3440)), "20method.c", 618, 3441))->mArrayNum, "20method.c", 618, 3442)), "20method.c", 618, 3443))), come_pop_stackframe(), __exception_result_var_b388)-1,                                    _if_conditional379) {
                                        (come_push_stackframe("20method.c", 619, 3447),__exception_result_var_b389=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_312, "20method.c", 619, 3445)), "20method.c", 619, 3446)),"*"), come_pop_stackframe(), __exception_result_var_b389);
                                    }
                                    i_313++;
                                    come_call_finalizer3(come_value_316,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_317=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 624, "CVALUE"))));
                                come_call_finalizer3(right_value275,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                __dec_obj87=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_317, "20method.c", 626, 3448)), "20method.c", 626, 3449))->c_value;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_317, "20method.c", 626, 3448)), "20method.c", 626, 3449))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 626, 3452),__exception_result_var_b390=((char*)(right_value276=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_312, "20method.c", 626, 3450)), "20method.c", 626, 3451))))), come_pop_stackframe(), __exception_result_var_b390));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_317, "20method.c", 627, 3453)), "20method.c", 627, 3454))->var=((void*)0);
                                __dec_obj88=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_317, "20method.c", 628, 3455)), "20method.c", 628, 3456))->type;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_317, "20method.c", 628, 3455)), "20method.c", 628, 3456))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 628, 3458),__exception_result_var_b391=((struct sType*)(right_value278=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value277=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 628, "sType"))), "20method.c", 628, 3457))),"long",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b391));
                                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value277,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("20method.c", 630, 3461),__exception_result_var_b392=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 630, 3459)), "20method.c", 630, 3460)),1,(struct CVALUE*)come_increment_ref_count(come_value_317)), come_pop_stackframe(), __exception_result_var_b392);
                                (come_push_stackframe("20method.c", 631, 3464),__exception_result_var_b393=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_179, "20method.c", 631, 3462)), "20method.c", 631, 3463)),(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value281=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(right_value280=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 631, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("len")))),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b393);
                                right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value281,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            array_method_name_286 = come_decrement_ref_count2(array_method_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional381=(come_push_stackframe("20method.c", 636, 3469),__exception_result_var_b394=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_179, "20method.c", 636, 3465)), "20method.c", 636, 3466))), come_pop_stackframe(), __exception_result_var_b394)<(come_push_stackframe("20method.c", 636, 3474),__exception_result_var_b395=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 636, 3470)), "20method.c", 636, 3471))->mParamTypes, "20method.c", 636, 3472)), "20method.c", 636, 3473))), come_pop_stackframe(), __exception_result_var_b395)+(method_block_181?-2:0),        _if_conditional381) {
            for(            ;            i_273<(come_push_stackframe("20method.c", 638, 3479),__exception_result_var_b396=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 638, 3475)), "20method.c", 638, 3476))->mParamTypes, "20method.c", 638, 3477)), "20method.c", 638, 3478))), come_pop_stackframe(), __exception_result_var_b396)+(method_block_181?-2:0);            i_273++            ){
                default_param_318=(char*)come_increment_ref_count(((char*)(right_value282=(come_push_stackframe("20method.c", 639, 3483),__exception_result_var_b398=string_clone((come_push_stackframe("20method.c", 639, 3482),__exception_result_var_b397=list$1charphp_operator_load_element(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 639, 3480)), "20method.c", 639, 3481))->mParamDefaultParametors,i_273), come_pop_stackframe(), __exception_result_var_b397)), come_pop_stackframe(), __exception_result_var_b398))));
                right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_319=(come_push_stackframe("20method.c", 640, 3488),__exception_result_var_b399=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 640, 3484)), "20method.c", 640, 3485))->mParamNames, "20method.c", 640, 3486)),i_273), "20method.c", 640, 3487)), come_pop_stackframe(), __exception_result_var_b399);
                if(_if_conditional382=default_param_318&&(come_push_stackframe("20method.c", 642, 3489),__exception_result_var_b400=string_operator_not_equals(default_param_318,""), come_pop_stackframe(), __exception_result_var_b400)&&(come_push_stackframe("20method.c", 642, 3490),__exception_result_var_b401=list$1CVALUEphp_operator_load_element(come_params_253,i_273), come_pop_stackframe(), __exception_result_var_b401)==((void*)0),                _if_conditional382) {
                    source_320=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 643, 3491)), "20method.c", 643, 3492))->source);
                    p_321=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 644, 3493)), "20method.c", 644, 3494))->p;
                    head_322=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 645, 3495)), "20method.c", 645, 3496))->head;
                    sline_323=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 646, 3497)), "20method.c", 646, 3498))->sline;
                    __dec_obj89=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 648, 3499)), "20method.c", 648, 3500))->source;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 648, 3499)), "20method.c", 648, 3500))->source=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 648, 3503),__exception_result_var_b402=((struct buffer*)(right_value283=string_to_buffer(((char*)come_null_check(((char*)come_null_check(default_param_318, "20method.c", 648, 3501)), "20method.c", 648, 3502))))), come_pop_stackframe(), __exception_result_var_b402));
                    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value283,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 649, 3504)), "20method.c", 649, 3505))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 649, 3506)), "20method.c", 649, 3507))->source, "20method.c", 649, 3508)), "20method.c", 649, 3509))->buf;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 650, 3510)), "20method.c", 650, 3511))->head=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 650, 3512)), "20method.c", 650, 3513))->source, "20method.c", 650, 3514)), "20method.c", 650, 3515))->buf;
                    node_324=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 652, 3516),__exception_result_var_b403=((struct sNode*)(right_value284=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b403));
                    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional383=!(come_push_stackframe("20method.c", 654, 3517),__exception_result_var_b404=node_compile(node_324,info), come_pop_stackframe(), __exception_result_var_b404),                    _if_conditional383) {
                        __result215__ = (_Bool)0;
                        come_call_finalizer3(source_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result215__;
                    }
                    __dec_obj90=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 658, 3518)), "20method.c", 658, 3519))->source;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 658, 3518)), "20method.c", 658, 3519))->source=(struct buffer*)come_increment_ref_count(source_320);
                    come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 659, 3520)), "20method.c", 659, 3521))->p=p_321;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 660, 3522)), "20method.c", 660, 3523))->head=head_322;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 661, 3524)), "20method.c", 661, 3525))->sline=sline_323;
                    come_value_325=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 663, 3526),__exception_result_var_b405=((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b405));
                    come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional384=(come_push_stackframe("20method.c", 664, 3529),__exception_result_var_b406=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 664, 3527)),i_273), "20method.c", 664, 3528)), come_pop_stackframe(), __exception_result_var_b406),                    _if_conditional384) {
                        (come_push_stackframe("20method.c", 665, 3535),__exception_result_var_b408=check_assign_type(((char*)(right_value288=xsprintf("\%s param num \%s is assinged to",((char*)(right_value286=charp_to_string(fun_name_178))),((char*)(right_value287=int_to_string(i_273)))))),(come_push_stackframe("20method.c", 665, 3532),__exception_result_var_b407=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 665, 3530)),i_273), "20method.c", 665, 3531)), come_pop_stackframe(), __exception_result_var_b407),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_325, "20method.c", 665, 3533)), "20method.c", 665, 3534))->type,come_value_325,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b408);
                        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional385=(come_push_stackframe("20method.c", 667, 3538),__exception_result_var_b409=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 667, 3536)),i_273), "20method.c", 667, 3537)), come_pop_stackframe(), __exception_result_var_b409)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 667, 3541),__exception_result_var_b410=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 667, 3539)),i_273), "20method.c", 667, 3540)), come_pop_stackframe(), __exception_result_var_b410), "20method.c", 667, 3542)), "20method.c", 667, 3543))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_325, "20method.c", 667, 3544)), "20method.c", 667, 3545))->type, "20method.c", 667, 3546)), "20method.c", 667, 3547))->mHeap,                    _if_conditional385) {
                        (come_push_stackframe("20method.c", 668,3553),std_move((come_push_stackframe("20method.c", 668, 3550),__exception_result_var_b411=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_242, "20method.c", 668, 3548)),i_273), "20method.c", 668, 3549)), come_pop_stackframe(), __exception_result_var_b411),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_325, "20method.c", 668, 3551)), "20method.c", 668, 3552))->type,come_value_325,info),come_pop_stackframe());
                    }
                    (come_push_stackframe("20method.c", 670, 3556),__exception_result_var_b412=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 670, 3554)), "20method.c", 670, 3555)),i_273,(struct CVALUE*)come_increment_ref_count(come_value_325)), come_pop_stackframe(), __exception_result_var_b412);
                    (come_push_stackframe("20method.c", 671,3557),dec_stack_ptr(1,info),come_pop_stackframe());
                    come_call_finalizer3(source_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional386=(come_push_stackframe("20method.c", 674, 3558),__exception_result_var_b413=list$1CVALUEphp_operator_load_element(come_params_253,i_273), come_pop_stackframe(), __exception_result_var_b413)==((void*)0),                    _if_conditional386) {
                        (come_push_stackframe("20method.c", 675,3561),err_msg(info,"require parametor(%s) %d",((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 675, 3559)), "20method.c", 675, 3560))->mName,i_273),come_pop_stackframe());
                        __result216__ = (_Bool)0;
                        default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result216__;
                    }
                }
                default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(method_block_181) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 683, "struct sNode");
            _inf_obj_value1=come_increment_ref_count((come_push_stackframe("20method.c", 683, 3563),__exception_result_var_b414=((struct sCurrentNode*)(right_value290=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)(right_value289=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 683, "sCurrentNode"))), "20method.c", 683, 3562))),info))), come_pop_stackframe(), __exception_result_var_b414));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=_inf_value1)));
            come_call_finalizer3(right_value289,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value290,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional392=!(come_push_stackframe("20method.c", 685, 3579),__exception_result_var_b416=node_compile(current_stack_frame_node_326,info), come_pop_stackframe(), __exception_result_var_b416),            _if_conditional392) {
                __result219__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result219__;
            }
            come_value_328=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("20method.c", 689, 3580),__exception_result_var_b417=((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b417));
            come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("20method.c", 690, 3583),__exception_result_var_b418=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 690, 3581)), "20method.c", 690, 3582)),(struct CVALUE*)come_increment_ref_count(come_value_328)), come_pop_stackframe(), __exception_result_var_b418);
            (come_push_stackframe("20method.c", 691,3584),dec_stack_ptr(1,info),come_pop_stackframe());
            method_block2_329=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 693, 3586),__exception_result_var_b419=((struct buffer*)(right_value296=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value295=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 693, "buffer"))), "20method.c", 693, 3585)))))), come_pop_stackframe(), __exception_result_var_b419));
            come_call_finalizer3(right_value295,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value296,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            method_block_type_330=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=(come_push_stackframe("20method.c", 694, 3592),__exception_result_var_b421=sType_clone((come_push_stackframe("20method.c", 694, 3591),__exception_result_var_b420=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_225, "20method.c", 694, 3587)), "20method.c", 694, 3588))->mParamTypes, "20method.c", 694, 3589)),-1), "20method.c", 694, 3590)), come_pop_stackframe(), __exception_result_var_b420)), come_pop_stackframe(), __exception_result_var_b421))));
            come_call_finalizer3(right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
            class_name_331=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 696, 3595),__exception_result_var_b422=((char*)(right_value298=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 696, 3593)), "20method.c", 696, 3594))->current_stack_num))), come_pop_stackframe(), __exception_result_var_b422));
            right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("20method.c", 698, 3600),__exception_result_var_b423=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(method_block_type_330, "20method.c", 698, 3596)), "20method.c", 698, 3597))->mParamTypes, "20method.c", 698, 3598)),0), "20method.c", 698, 3599)), come_pop_stackframe(), __exception_result_var_b423), "20method.c", 698, 3601)), "20method.c", 698, 3602))->mClass=(come_push_stackframe("20method.c", 698, 3605),__exception_result_var_b424=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 698, 3603)), "20method.c", 698, 3604))->classes,class_name_331), come_pop_stackframe(), __exception_result_var_b424);
            current_stack_frame_struct_332=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 699, 3606)), "20method.c", 699, 3607))->current_stack_frame_struct;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 700, 3608)), "20method.c", 700, 3609))->current_stack_frame_struct=(come_push_stackframe("20method.c", 700, 3612),__exception_result_var_b425=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 700, 3610)), "20method.c", 700, 3611))->classes,class_name_331), come_pop_stackframe(), __exception_result_var_b425);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 702, 3613)), "20method.c", 702, 3614))->num_method_block++;
            if(_if_conditional393=(come_push_stackframe("20method.c", 704, 3619),__exception_result_var_b426=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(method_block_type_330, "20method.c", 704, 3615)), "20method.c", 704, 3616))->mClass, "20method.c", 704, 3617)), "20method.c", 704, 3618))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b426),            _if_conditional393) {
                (come_push_stackframe("20method.c", 705,3620),err_msg(info,"This function does not have method block(%s)",fun_name_178),come_pop_stackframe());
                __result220__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result220__;
            }
            result_type_333=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(come_push_stackframe("20method.c", 709, 3625),__exception_result_var_b427=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(method_block_type_330, "20method.c", 709, 3621)), "20method.c", 709, 3622))->mResultType, "20method.c", 709, 3623)), "20method.c", 709, 3624))->v1), come_pop_stackframe(), __exception_result_var_b427))));
            come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_333, "20method.c", 710, 3626)), "20method.c", 710, 3627))->mStatic=(_Bool)0;
            param_types_334=((struct sType*)come_null_check(((struct sType*)come_null_check(method_block_type_330, "20method.c", 711, 3628)), "20method.c", 711, 3629))->mParamTypes;
            param_names_335=((struct sType*)come_null_check(((struct sType*)come_null_check(method_block_type_330, "20method.c", 712, 3630)), "20method.c", 712, 3631))->mParamNames;
            all_alhabet_sname_336=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 714, 3633),__exception_result_var_b428=((struct buffer*)(right_value301=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value300=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 714, "buffer"))), "20method.c", 714, 3632)))))), come_pop_stackframe(), __exception_result_var_b428));
            come_call_finalizer3(right_value300,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value301,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            {
                p_337=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 716, 3634)), "20method.c", 716, 3635))->sname;
                while(_while_condtional44=*((char*)come_null_check(p_337, "20method.c", 717, 3636)),                _while_condtional44) {
                    if(_if_conditional394=(come_push_stackframe("20method.c", 718, 3638),__exception_result_var_b429=xisalnum(*((char*)come_null_check(p_337, "20method.c", 718, 3637))), come_pop_stackframe(), __exception_result_var_b429),                    _if_conditional394) {
                        (come_push_stackframe("20method.c", 719, 3642),__exception_result_var_b430=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(all_alhabet_sname_336, "20method.c", 719, 3639)), "20method.c", 719, 3640)),*((char*)come_null_check(p_337++, "20method.c", 719, 3641))), come_pop_stackframe(), __exception_result_var_b430);
                    }
                    else {
                        p_337++;
                    }
                }
            }
            (come_push_stackframe("20method.c", 727, 3652),__exception_result_var_b434=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 727, 3643)), "20method.c", 727, 3644)),(come_push_stackframe("20method.c", 727, 3651),__exception_result_var_b433=((char*)(right_value304=xsprintf("%s method_block%d_%s(",(come_push_stackframe("20method.c", 727, 3645),__exception_result_var_b431=((char*)(right_value302=make_type_name_string(result_type_333,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b431),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 727, 3646)), "20method.c", 727, 3647))->num_method_block,(come_push_stackframe("20method.c", 727, 3650),__exception_result_var_b432=((char*)(right_value303=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(all_alhabet_sname_336, "20method.c", 727, 3648)), "20method.c", 727, 3649))))), come_pop_stackframe(), __exception_result_var_b432)))), come_pop_stackframe(), __exception_result_var_b433)), come_pop_stackframe(), __exception_result_var_b434);
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_338=0;
            for(            o2_saved_339=(param_types_334),it_340=(come_push_stackframe("20method.c", 730, 3655),__exception_result_var_b435=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_339), "20method.c", 730, 3653)), "20method.c", 730, 3654))), come_pop_stackframe(), __exception_result_var_b435);            !(come_push_stackframe("20method.c", 730, 3658),__exception_result_var_b436=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_339), "20method.c", 730, 3656)), "20method.c", 730, 3657))), come_pop_stackframe(), __exception_result_var_b436);            it_340=(come_push_stackframe("20method.c", 730, 3661),__exception_result_var_b437=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_339), "20method.c", 730, 3659)), "20method.c", 730, 3660))), come_pop_stackframe(), __exception_result_var_b437)            ){
                param_type_341=it_340;
                if(_if_conditional395=i_338==0,                _if_conditional395) {
                    param_name_342=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 733, 3662),__exception_result_var_b438=((char*)(right_value305=xsprintf("parent"))), come_pop_stackframe(), __exception_result_var_b438));
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("20method.c", 735, 3667),__exception_result_var_b441=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 735, 3663)), "20method.c", 735, 3664)),(come_push_stackframe("20method.c", 735, 3666),__exception_result_var_b440=((char*)(right_value307=xsprintf("%s",(come_push_stackframe("20method.c", 735, 3665),__exception_result_var_b439=((char*)(right_value306=make_define_var(param_type_341,param_name_342,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b439)))), come_pop_stackframe(), __exception_result_var_b440)), come_pop_stackframe(), __exception_result_var_b441);
                    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional396=i_338==1,                    _if_conditional396) {
                        param_name_343=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 738, 3668),__exception_result_var_b442=((char*)(right_value308=xsprintf("it"))), come_pop_stackframe(), __exception_result_var_b442));
                        right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("20method.c", 740, 3673),__exception_result_var_b445=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 740, 3669)), "20method.c", 740, 3670)),(come_push_stackframe("20method.c", 740, 3672),__exception_result_var_b444=((char*)(right_value310=xsprintf("%s",(come_push_stackframe("20method.c", 740, 3671),__exception_result_var_b443=((char*)(right_value309=make_define_var(param_type_341,param_name_343,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b443)))), come_pop_stackframe(), __exception_result_var_b444)), come_pop_stackframe(), __exception_result_var_b445);
                        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_344=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 743, 3674),__exception_result_var_b446=((char*)(right_value311=xsprintf("it%d",i_338))), come_pop_stackframe(), __exception_result_var_b446));
                        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("20method.c", 745, 3679),__exception_result_var_b449=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 745, 3675)), "20method.c", 745, 3676)),(come_push_stackframe("20method.c", 745, 3678),__exception_result_var_b448=((char*)(right_value313=xsprintf("%s",(come_push_stackframe("20method.c", 745, 3677),__exception_result_var_b447=((char*)(right_value312=make_define_var(param_type_341,param_name_344,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b447)))), come_pop_stackframe(), __exception_result_var_b448)), come_pop_stackframe(), __exception_result_var_b449);
                        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_344 = come_decrement_ref_count2(param_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional397=i_338!=(come_push_stackframe("20method.c", 748, 3682),__exception_result_var_b450=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(param_types_334, "20method.c", 748, 3680)), "20method.c", 748, 3681))), come_pop_stackframe(), __exception_result_var_b450)-1,                _if_conditional397) {
                    (come_push_stackframe("20method.c", 749, 3685),__exception_result_var_b451=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 749, 3683)), "20method.c", 749, 3684)),","), come_pop_stackframe(), __exception_result_var_b451);
                }
                i_338++;
            }
            (come_push_stackframe("20method.c", 754, 3688),__exception_result_var_b452=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 754, 3686)), "20method.c", 754, 3687)),")\n"), come_pop_stackframe(), __exception_result_var_b452);
            (come_push_stackframe("20method.c", 756, 3694),__exception_result_var_b454=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block2_329, "20method.c", 756, 3689)), "20method.c", 756, 3690)),(come_push_stackframe("20method.c", 756, 3693),__exception_result_var_b453=((char*)(right_value314=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block_181, "20method.c", 756, 3691)), "20method.c", 756, 3692))))), come_pop_stackframe(), __exception_result_var_b453)), come_pop_stackframe(), __exception_result_var_b454);
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            source3_345=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 758, 3695)), "20method.c", 758, 3696))->source);
            p_346=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 759, 3697)), "20method.c", 759, 3698))->p;
            head_347=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 760, 3699)), "20method.c", 760, 3700))->head;
            sline_348=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 761, 3701)), "20method.c", 761, 3702))->sline;
            __dec_obj92=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 764, 3703)), "20method.c", 764, 3704))->source;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 764, 3703)), "20method.c", 764, 3704))->source=(struct buffer*)come_increment_ref_count(method_block2_329);
            come_call_finalizer3(__dec_obj92,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 765, 3705)), "20method.c", 765, 3706))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 765, 3707)), "20method.c", 765, 3708))->source, "20method.c", 765, 3709)), "20method.c", 765, 3710))->buf;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 766, 3711)), "20method.c", 766, 3712))->head=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 766, 3713)), "20method.c", 766, 3714))->source, "20method.c", 766, 3715)), "20method.c", 766, 3716))->buf;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 767, 3717)), "20method.c", 767, 3718))->sline=method_block_sline_182;
            node_349=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 770, 3719),__exception_result_var_b455=((struct sNode*)(right_value315=parse_function(info))), come_pop_stackframe(), __exception_result_var_b455));
            if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(_if_conditional398=!(come_push_stackframe("20method.c", 772, 3720),__exception_result_var_b456=node_compile(node_349,info), come_pop_stackframe(), __exception_result_var_b456),            _if_conditional398) {
                __result221__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result221__;
            }
            method_block_name_350=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 776, 3726),__exception_result_var_b458=((char*)(right_value317=xsprintf("method_block%d_%s",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 776, 3721)), "20method.c", 776, 3722))->num_method_block,(come_push_stackframe("20method.c", 776, 3725),__exception_result_var_b457=((char*)(right_value316=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(all_alhabet_sname_336, "20method.c", 776, 3723)), "20method.c", 776, 3724))))), come_pop_stackframe(), __exception_result_var_b457)))), come_pop_stackframe(), __exception_result_var_b458));
            right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_value2_351=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 778, "CVALUE"))));
            come_call_finalizer3(right_value318,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            fun2_352=(come_push_stackframe("20method.c", 780, 3731),__exception_result_var_b459=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 780, 3727)), "20method.c", 780, 3728))->funcs, "20method.c", 780, 3729)), "20method.c", 780, 3730)),method_block_name_350,((void*)0)), come_pop_stackframe(), __exception_result_var_b459);
            if(_if_conditional399=fun2_352==((void*)0),            _if_conditional399) {
                (come_push_stackframe("20method.c", 783,3732),err_msg(info,"method block function not found(%s)",method_block_name_350),come_pop_stackframe());
                __result222__ = (_Bool)1;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_350 = come_decrement_ref_count2(method_block_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value2_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result222__;
            }
            method_block_type2_353=((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun2_352, "20method.c", 787, 3733)), "20method.c", 787, 3734))->mLambdaType;
            __dec_obj93=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_351, "20method.c", 789, 3735)), "20method.c", 789, 3736))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_351, "20method.c", 789, 3735)), "20method.c", 789, 3736))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 789, 3737),__exception_result_var_b460=((char*)(right_value319=xsprintf("(void*)%s",method_block_name_350))), come_pop_stackframe(), __exception_result_var_b460));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj94=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_351, "20method.c", 790, 3738)), "20method.c", 790, 3739))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_351, "20method.c", 790, 3738)), "20method.c", 790, 3739))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=(come_push_stackframe("20method.c", 790, 3740),__exception_result_var_b461=sType_clone(method_block_type2_353), come_pop_stackframe(), __exception_result_var_b461))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value320,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_351, "20method.c", 791, 3741)), "20method.c", 791, 3742))->var=((void*)0);
            (come_push_stackframe("20method.c", 793, 3745),__exception_result_var_b462=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 793, 3743)), "20method.c", 793, 3744)),(struct CVALUE*)come_increment_ref_count(come_value2_351)), come_pop_stackframe(), __exception_result_var_b462);
            __dec_obj95=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 795, 3746)), "20method.c", 795, 3747))->source;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 795, 3746)), "20method.c", 795, 3747))->source=(struct buffer*)come_increment_ref_count(source3_345);
            come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 796, 3748)), "20method.c", 796, 3749))->p=p_346;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 797, 3750)), "20method.c", 797, 3751))->head=head_347;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 798, 3752)), "20method.c", 798, 3753))->sline=sline_348;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 800, 3754)), "20method.c", 800, 3755))->current_stack_frame_struct=current_stack_frame_struct_332;
            if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_350 = come_decrement_ref_count2(method_block_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_354=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 803, 3757),__exception_result_var_b463=((struct buffer*)(right_value322=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value321=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 803, "buffer"))), "20method.c", 803, 3756)))))), come_pop_stackframe(), __exception_result_var_b463));
        come_call_finalizer3(right_value321,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value322,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("20method.c", 805, 3760),__exception_result_var_b464=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 805, 3758)), "20method.c", 805, 3759)),generics_fun_name_224), come_pop_stackframe(), __exception_result_var_b464);
        (come_push_stackframe("20method.c", 806, 3763),__exception_result_var_b465=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 806, 3761)), "20method.c", 806, 3762)),"("), come_pop_stackframe(), __exception_result_var_b465);
        j_355=0;
        for(        o2_saved_356=(struct list$1CVALUEph*)come_increment_ref_count((come_params_253)),it_357=(come_push_stackframe("20method.c", 810, 3766),__exception_result_var_b466=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_356), "20method.c", 810, 3764)), "20method.c", 810, 3765))), come_pop_stackframe(), __exception_result_var_b466);        !(come_push_stackframe("20method.c", 810, 3769),__exception_result_var_b467=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_356), "20method.c", 810, 3767)), "20method.c", 810, 3768))), come_pop_stackframe(), __exception_result_var_b467);        it_357=(come_push_stackframe("20method.c", 810, 3772),__exception_result_var_b468=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_356), "20method.c", 810, 3770)), "20method.c", 810, 3771))), come_pop_stackframe(), __exception_result_var_b468)        ){
            (come_push_stackframe("20method.c", 811, 3777),__exception_result_var_b469=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 811, 3773)), "20method.c", 811, 3774)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_357, "20method.c", 811, 3775)), "20method.c", 811, 3776))->c_value), come_pop_stackframe(), __exception_result_var_b469);
            if(_if_conditional400=j_355!=(come_push_stackframe("20method.c", 813, 3780),__exception_result_var_b470=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_253, "20method.c", 813, 3778)), "20method.c", 813, 3779))), come_pop_stackframe(), __exception_result_var_b470)-1,            _if_conditional400) {
                (come_push_stackframe("20method.c", 814, 3783),__exception_result_var_b471=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 814, 3781)), "20method.c", 814, 3782)),","), come_pop_stackframe(), __exception_result_var_b471);
            }
            j_355++;
        }
        come_call_finalizer3(o2_saved_356,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("20method.c", 819, 3786),__exception_result_var_b472=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 819, 3784)), "20method.c", 819, 3785)),")"), come_pop_stackframe(), __exception_result_var_b472);
        come_value2_358=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 822, "CVALUE"))));
        come_call_finalizer3(right_value323,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj96=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 824, 3787)), "20method.c", 824, 3788))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 824, 3787)), "20method.c", 824, 3788))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 824, 3791),__exception_result_var_b473=((char*)(right_value324=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_354, "20method.c", 824, 3789)), "20method.c", 824, 3790))))), come_pop_stackframe(), __exception_result_var_b473));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj97=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 825, 3792)), "20method.c", 825, 3793))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 825, 3792)), "20method.c", 825, 3793))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(come_push_stackframe("20method.c", 825, 3794),__exception_result_var_b474=sType_clone(result_type2_241), come_pop_stackframe(), __exception_result_var_b474))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 826, 3795)), "20method.c", 826, 3796))->type, "20method.c", 826, 3797)), "20method.c", 826, 3798))->mStatic=(_Bool)0;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 827, 3799)), "20method.c", 827, 3800))->var=((void*)0);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_241, "20method.c", 829, 3801)), "20method.c", 829, 3802))->mHeap) {
            __dec_obj98=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 830, 3803)), "20method.c", 830, 3804))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 830, 3803)), "20method.c", 830, 3804))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 830, 3807),__exception_result_var_b475=((char*)(right_value326=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 830, 3805)), "20method.c", 830, 3806))->c_value,(struct sType*)come_increment_ref_count(result_type2_241),info))), come_pop_stackframe(), __exception_result_var_b475));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj99=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 833, 3808)), "20method.c", 833, 3809))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 833, 3808)), "20method.c", 833, 3809))->c_value=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 833, 3814),__exception_result_var_b476=((char*)(right_value327=append_stackframe(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 833, 3810)), "20method.c", 833, 3811))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 833, 3812)), "20method.c", 833, 3813))->type,info))), come_pop_stackframe(), __exception_result_var_b476));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("20method.c", 835,3817),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_358, "20method.c", 835, 3815)), "20method.c", 835, 3816))->c_value),come_pop_stackframe());
        (come_push_stackframe("20method.c", 837, 3822),__exception_result_var_b477=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 837, 3818)), "20method.c", 837, 3819))->stack, "20method.c", 837, 3820)), "20method.c", 837, 3821)),(struct CVALUE*)come_increment_ref_count(come_value2_358)), come_pop_stackframe(), __exception_result_var_b477);
        if(method_block_181) {
            var_name_359=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 840, 3825),__exception_result_var_b478=((char*)(right_value328=xsprintf("__current_stack%d__",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 840, 3823)), "20method.c", 840, 3824))->num_current_stack))), come_pop_stackframe(), __exception_result_var_b478));
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            result_type_360=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=(come_push_stackframe("20method.c", 842, 3830),__exception_result_var_b479=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 842, 3826)), "20method.c", 842, 3827))->come_fun, "20method.c", 842, 3828)), "20method.c", 842, 3829))->mResultType), come_pop_stackframe(), __exception_result_var_b479))));
            come_call_finalizer3(right_value329,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type2_361=(struct sType*)come_increment_ref_count((come_push_stackframe("20method.c", 844, 3833),__exception_result_var_b480=((struct sType*)(right_value330=solve_generics(result_type_360,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 844, 3831)), "20method.c", 844, 3832))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b480));
            come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type3_362=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_361, "20method.c", 846, 3834)), "20method.c", 846, 3835))->mNoSolvedGenericsType, "20method.c", 846, 3836)), "20method.c", 846, 3837))->v1;
            if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_361, "20method.c", 847, 3838)), "20method.c", 847, 3839))->mNoSolvedGenericsType, "20method.c", 847, 3840)), "20method.c", 847, 3841))->v1) {
                result_type3_362=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_361, "20method.c", 848, 3842)), "20method.c", 848, 3843))->mNoSolvedGenericsType, "20method.c", 848, 3844)), "20method.c", 848, 3845))->v1;
            }
            else {
                result_type3_362=result_type2_361;
            }
            var_name_359 = come_decrement_ref_count2(var_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 856, 3846)), "20method.c", 856, 3847))->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj100=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 857, 3848)), "20method.c", 857, 3849))->method_generics_types;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 857, 3848)), "20method.c", 857, 3849))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_183);
    come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result223__ = (_Bool)1;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result223__;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional233;
struct list$1tuple2$2charphsNodephph* __result124__;
void* right_value160;
void* right_value161;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b165;
struct list$1tuple2$2charphsNodephph* result_170;
struct list_item$1tuple2$2charphsNodephph* it_171;
_Bool _while_condtional30;
struct tuple2$2charphsNodeph* __exception_result_var_b168;
void* right_value168;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b169;
struct list$1tuple2$2charphsNodephph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_171, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value168 = (void*)0;
        if(_if_conditional233=self==((void*)0),        _if_conditional233) {
            __result124__ = __result_obj__ = ((void*)0);
            return __result124__;
        }
        result_170=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 2150),__exception_result_var_b165=((struct list$1tuple2$2charphsNodephph*)(right_value161=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value160=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsNodephph"))), "./neo-c.h", 139, 2126)), "./neo-c.h", 139, 2127)))))), come_pop_stackframe(), __exception_result_var_b165));
        come_call_finalizer3(right_value160,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value161,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_171=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 141, 2151)), "./neo-c.h", 141, 2152))->head;
        while(_while_condtional30=it_171!=((void*)0),        _while_condtional30) {
            (come_push_stackframe("./neo-c.h", 143, 2248),__exception_result_var_b169=list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_170, "./neo-c.h", 143, 2153)), "./neo-c.h", 143, 2154)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value168=(come_push_stackframe("./neo-c.h", 143, 2247),__exception_result_var_b168=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_171, "./neo-c.h", 143, 2223)), "./neo-c.h", 143, 2224))->item), come_pop_stackframe(), __exception_result_var_b168))))), come_pop_stackframe(), __exception_result_var_b169);
            come_call_finalizer3(right_value168,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_171=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_171, "./neo-c.h", 145, 2249)), "./neo-c.h", 145, 2250))->next;
        }
        __result129__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result129__;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 101, 2128)), "./neo-c.h", 101, 2129))->head=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 102, 2130)), "./neo-c.h", 102, 2131))->tail=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 103, 2132)), "./neo-c.h", 103, 2133))->len=0;
            __result125__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result125__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_168;
_Bool _while_condtional29;
struct list_item$1tuple2$2charphsNodephph* prev_it_169;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_168=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 2134)), "./neo-c.h", 120, 2135))->head;
                while(_while_condtional29=it_168!=((void*)0),                _while_condtional29) {
                    prev_it_169=it_168;
                    it_168=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_168, "./neo-c.h", 123, 2136)), "./neo-c.h", 123, 2137))->next;
                    come_call_finalizer3(prev_it_169,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional234=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 2138)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 2139))->item!=((void*)0),                        _if_conditional234) {
                            come_call_finalizer3(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 2140)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 2141))->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional237;
void* right_value162;
struct list_item$1tuple2$2charphsNodephph* litem_172;
struct tuple2$2charphsNodeph* __dec_obj49;
_Bool _if_conditional240;
void* right_value163;
struct list_item$1tuple2$2charphsNodephph* litem_173;
struct tuple2$2charphsNodeph* __dec_obj50;
void* right_value164;
struct list_item$1tuple2$2charphsNodephph* litem_174;
struct tuple2$2charphsNodeph* __dec_obj51;
struct list$1tuple2$2charphsNodephph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value163 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value164 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional237=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 152, 2155)), "./neo-c.h", 152, 2156))->len==0,                _if_conditional237) {
                    litem_172=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value162=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value162,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_172, "./neo-c.h", 155, 2157)), "./neo-c.h", 155, 2158))->prev=((void*)0);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_172, "./neo-c.h", 156, 2159)), "./neo-c.h", 156, 2160))->next=((void*)0);
                    __dec_obj49=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_172, "./neo-c.h", 157, 2161)), "./neo-c.h", 157, 2162))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_172, "./neo-c.h", 157, 2161)), "./neo-c.h", 157, 2162))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 159, 2171)), "./neo-c.h", 159, 2172))->tail=litem_172;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 160, 2173)), "./neo-c.h", 160, 2174))->head=litem_172;
                }
                else {
                    if(_if_conditional240=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 162, 2175)), "./neo-c.h", 162, 2176))->len==1,                    _if_conditional240) {
                        litem_173=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value163=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value163,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_173, "./neo-c.h", 165, 2177)), "./neo-c.h", 165, 2178))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 165, 2179)), "./neo-c.h", 165, 2180))->head;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_173, "./neo-c.h", 166, 2181)), "./neo-c.h", 166, 2182))->next=((void*)0);
                        __dec_obj50=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_173, "./neo-c.h", 167, 2183)), "./neo-c.h", 167, 2184))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_173, "./neo-c.h", 167, 2183)), "./neo-c.h", 167, 2184))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj50,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 169, 2193)), "./neo-c.h", 169, 2194))->tail=litem_173;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 170, 2195)), "./neo-c.h", 170, 2196))->head, "./neo-c.h", 170, 2197)), "./neo-c.h", 170, 2198))->next=litem_173;
                    }
                    else {
                        litem_174=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value164=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value164,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_174, "./neo-c.h", 175, 2199)), "./neo-c.h", 175, 2200))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 175, 2201)), "./neo-c.h", 175, 2202))->tail;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_174, "./neo-c.h", 176, 2203)), "./neo-c.h", 176, 2204))->next=((void*)0);
                        __dec_obj51=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_174, "./neo-c.h", 177, 2205)), "./neo-c.h", 177, 2206))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_174, "./neo-c.h", 177, 2205)), "./neo-c.h", 177, 2206))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 179, 2215)), "./neo-c.h", 179, 2216))->tail, "./neo-c.h", 179, 2217)), "./neo-c.h", 179, 2218))->next=litem_174;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 180, 2219)), "./neo-c.h", 180, 2220))->tail=litem_174;
                    }
                }
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 183, 2221)), "./neo-c.h", 183, 2222))->len++;
                __result126__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result126__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional243;
_Bool _if_conditional244;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional243=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 2207)), "tuple2$2charphsNodephp_finalize", 0, 2208))->v1!=((void*)0),                            _if_conditional243) {
                                ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 2209)), "tuple2$2charphsNodephp_finalize", 0, 2210))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 2209)), "tuple2$2charphsNodephp_finalize", 0, 2210))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional244=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2211)), "tuple2$2charphsNodephp_finalize", 1, 2212))->v2!=((void*)0),                            _if_conditional244) {
                                if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2213)), "tuple2$2charphsNodephp_finalize", 1, 2214))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2213)), "tuple2$2charphsNodephp_finalize", 1, 2214))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2213)), "tuple2$2charphsNodephp_finalize", 1, 2214))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2213)), "tuple2$2charphsNodephp_finalize", 1, 2214))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 2213)), "tuple2$2charphsNodephp_finalize", 1, 2214))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional245;
struct tuple2$2charphsNodeph* __result127__;
void* right_value165;
struct tuple2$2charphsNodeph* result_175;
_Bool _if_conditional248;
char* __exception_result_var_b166;
void* right_value166;
char* __dec_obj52;
_Bool _if_conditional249;
struct sNode* __exception_result_var_b167;
void* right_value167;
struct sNode* __dec_obj53;
struct tuple2$2charphsNodeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
memset(&result_175, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value166 = (void*)0;
right_value167 = (void*)0;
                if(_if_conditional245=self==(void*)0,                _if_conditional245) {
                    __result127__ = __result_obj__ = (void*)0;
                    return __result127__;
                }
                result_175=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value165=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value165,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional248=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 2233)), "tuple2$2charphsNodephp_clone", 4, 2234))->v1!=((void*)0),                _if_conditional248) {
                    __dec_obj52=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_175, "tuple2$2charphsNodephp_clone", 4, 2235)), "tuple2$2charphsNodephp_clone", 4, 2236))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_175, "tuple2$2charphsNodephp_clone", 4, 2235)), "tuple2$2charphsNodephp_clone", 4, 2236))->v1=(char*)come_increment_ref_count(((char*)(right_value166=(come_push_stackframe("tuple2$2charphsNodephp_clone", 4, 2239),__exception_result_var_b166=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 2237)), "tuple2$2charphsNodephp_clone", 4, 2238))->v1), come_pop_stackframe(), __exception_result_var_b166))));
                    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional249=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 2240)), "tuple2$2charphsNodephp_clone", 5, 2241))->v2!=((void*)0),                _if_conditional249) {
                    __dec_obj53=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_175, "tuple2$2charphsNodephp_clone", 5, 2242)), "tuple2$2charphsNodephp_clone", 5, 2243))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_175, "tuple2$2charphsNodephp_clone", 5, 2242)), "tuple2$2charphsNodephp_clone", 5, 2243))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=(come_push_stackframe("tuple2$2charphsNodephp_clone", 5, 2246),__exception_result_var_b167=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 2244)), "tuple2$2charphsNodephp_clone", 5, 2245))->v2), come_pop_stackframe(), __exception_result_var_b167))));
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result128__ = __result_obj__ = result_175;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result128__;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional246=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 2225)), "tuple2$2charphsNodeph_finalize", 0, 2226))->v1!=((void*)0),                    _if_conditional246) {
                        ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 2227)), "tuple2$2charphsNodeph_finalize", 0, 2228))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 2227)), "tuple2$2charphsNodeph_finalize", 0, 2228))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional247=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2229)), "tuple2$2charphsNodeph_finalize", 1, 2230))->v2!=((void*)0),                    _if_conditional247) {
                        if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2231)), "tuple2$2charphsNodeph_finalize", 1, 2232))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2231)), "tuple2$2charphsNodeph_finalize", 1, 2232))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2231)), "tuple2$2charphsNodeph_finalize", 1, 2232))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2231)), "tuple2$2charphsNodeph_finalize", 1, 2232))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 2231)), "tuple2$2charphsNodeph_finalize", 1, 2232))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_176;
_Bool _while_condtional31;
struct list_item$1tuple2$2charphsNodephph* prev_it_177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_176, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_177, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_176=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 2252)), "./neo-c.h", 120, 2253))->head;
        while(_while_condtional31=it_176!=((void*)0),        _while_condtional31) {
            prev_it_177=it_176;
            it_176=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_176, "./neo-c.h", 123, 2254)), "./neo-c.h", 123, 2255))->next;
            come_call_finalizer3(prev_it_177,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional259;
struct tuple2$2charphsTypeph* result_190;
void* __exception_result_var_b180;
struct tuple2$2charphsTypeph* __result135__;
_Bool _if_conditional260;
struct tuple2$2charphsTypeph* __result136__;
struct tuple2$2charphsTypeph* result_191;
void* __exception_result_var_b181;
struct tuple2$2charphsTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional259=self==((void*)0),        _if_conditional259) {
            (come_push_stackframe("./neo-c.h", 284, 2334),__exception_result_var_b180=memset(&result_190,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b180);
            __result135__ = __result_obj__ = result_190;
            return __result135__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 2335)), "./neo-c.h", 287, 2336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 287, 2337)), "./neo-c.h", 287, 2338))->head;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 289, 2339)), "./neo-c.h", 289, 2340))->it) {
            __result136__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 290, 2341)), "./neo-c.h", 290, 2342))->it, "./neo-c.h", 290, 2343)), "./neo-c.h", 290, 2344))->item;
            return __result136__;
        }
        (come_push_stackframe("./neo-c.h", 294, 2345),__exception_result_var_b181=memset(&result_191,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b181);
        __result137__ = __result_obj__ = result_191;
        return __result137__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
        __result138__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 317, 2349)), "./neo-c.h", 317, 2350))->it==((void*)0);
        return __result138__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional261;
struct tuple2$2charphsTypeph* result_193;
void* __exception_result_var_b184;
struct tuple2$2charphsTypeph* __result139__;
_Bool _if_conditional262;
struct tuple2$2charphsTypeph* __result140__;
struct tuple2$2charphsTypeph* result_194;
void* __exception_result_var_b185;
struct tuple2$2charphsTypeph* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_194, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional261=self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 299, 2354)), "./neo-c.h", 299, 2355))->it==((void*)0),        _if_conditional261) {
            (come_push_stackframe("./neo-c.h", 301, 2356),__exception_result_var_b184=memset(&result_193,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b184);
            __result139__ = __result_obj__ = result_193;
            return __result139__;
        }
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 2357)), "./neo-c.h", 305, 2358))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 305, 2359)), "./neo-c.h", 305, 2360))->it, "./neo-c.h", 305, 2361)), "./neo-c.h", 305, 2362))->next;
        if(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 307, 2363)), "./neo-c.h", 307, 2364))->it) {
            __result140__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 308, 2365)), "./neo-c.h", 308, 2366))->it, "./neo-c.h", 308, 2367)), "./neo-c.h", 308, 2368))->item;
            return __result140__;
        }
        (come_push_stackframe("./neo-c.h", 312, 2369),__exception_result_var_b185=memset(&result_194,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b185);
        __result141__ = __result_obj__ = result_194;
        return __result141__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 101, 2385)), "./neo-c.h", 101, 2386))->head=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 102, 2387)), "./neo-c.h", 102, 2388))->tail=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 103, 2389)), "./neo-c.h", 103, 2390))->len=0;
            __result142__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result142__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_199;
_Bool _while_condtional32;
struct list_item$1CVALUEph* prev_it_200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_199, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_200, 0, sizeof(struct list_item$1CVALUEph*));
                it_199=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 2391)), "./neo-c.h", 120, 2392))->head;
                while(_while_condtional32=it_199!=((void*)0),                _while_condtional32) {
                    prev_it_200=it_199;
                    it_199=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_199, "./neo-c.h", 123, 2393)), "./neo-c.h", 123, 2394))->next;
                    come_call_finalizer3(prev_it_200,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional265;
struct tuple2$2charphsNodeph* result_203;
void* __exception_result_var_b191;
struct tuple2$2charphsNodeph* __result143__;
_Bool _if_conditional266;
struct tuple2$2charphsNodeph* __result144__;
struct tuple2$2charphsNodeph* result_204;
void* __exception_result_var_b192;
struct tuple2$2charphsNodeph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_204, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional265=self==((void*)0),            _if_conditional265) {
                (come_push_stackframe("./neo-c.h", 284, 2398),__exception_result_var_b191=memset(&result_203,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b191);
                __result143__ = __result_obj__ = result_203;
                return __result143__;
            }
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 2399)), "./neo-c.h", 287, 2400))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 2401)), "./neo-c.h", 287, 2402))->head;
            if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 289, 2403)), "./neo-c.h", 289, 2404))->it) {
                __result144__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 290, 2405)), "./neo-c.h", 290, 2406))->it, "./neo-c.h", 290, 2407)), "./neo-c.h", 290, 2408))->item;
                return __result144__;
            }
            (come_push_stackframe("./neo-c.h", 294, 2409),__exception_result_var_b192=memset(&result_204,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b192);
            __result145__ = __result_obj__ = result_204;
            return __result145__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
            __result146__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 317, 2413)), "./neo-c.h", 317, 2414))->it==((void*)0);
            return __result146__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional267;
struct tuple2$2charphsNodeph* result_206;
void* __exception_result_var_b195;
struct tuple2$2charphsNodeph* __result147__;
_Bool _if_conditional268;
struct tuple2$2charphsNodeph* __result148__;
struct tuple2$2charphsNodeph* result_207;
void* __exception_result_var_b196;
struct tuple2$2charphsNodeph* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_207, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional267=self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 299, 2418)), "./neo-c.h", 299, 2419))->it==((void*)0),            _if_conditional267) {
                (come_push_stackframe("./neo-c.h", 301, 2420),__exception_result_var_b195=memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b195);
                __result147__ = __result_obj__ = result_206;
                return __result147__;
            }
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 2421)), "./neo-c.h", 305, 2422))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 2423)), "./neo-c.h", 305, 2424))->it, "./neo-c.h", 305, 2425)), "./neo-c.h", 305, 2426))->next;
            if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 307, 2427)), "./neo-c.h", 307, 2428))->it) {
                __result148__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 308, 2429)), "./neo-c.h", 308, 2430))->it, "./neo-c.h", 308, 2431)), "./neo-c.h", 308, 2432))->item;
                return __result148__;
            }
            (come_push_stackframe("./neo-c.h", 312, 2433),__exception_result_var_b196=memset(&result_207,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b196);
            __result149__ = __result_obj__ = result_207;
            return __result149__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional271;
struct list_item$1sTypeph* it_211;
int i_212;
_Bool _while_condtional33;
_Bool _if_conditional272;
struct sType* __result151__;
struct sType* default_value_213;
void* __exception_result_var_b201;
struct sType* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_212, 0, sizeof(int));
memset(&default_value_213, 0, sizeof(struct sType*));
                    if(_if_conditional271=position<0,                    _if_conditional271) {
                        position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 2443)), "./neo-c.h", 676, 2444))->len;
                    }
                    it_211=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 2445)), "./neo-c.h", 679, 2446))->head;
                    i_212=0;
                    while(_while_condtional33=it_211!=((void*)0),                    _while_condtional33) {
                        if(_if_conditional272=position==i_212,                        _if_conditional272) {
                            __result151__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_211, "./neo-c.h", 683, 2447)), "./neo-c.h", 683, 2448))->item;
                            return __result151__;
                        }
                        it_211=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_211, "./neo-c.h", 685, 2449)), "./neo-c.h", 685, 2450))->next;
                        i_212++;
                    }
                    (come_push_stackframe("./neo-c.h", 690, 2451),__exception_result_var_b201=memset(&default_value_213,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b201);
                    __result152__ = __result_obj__ = default_value_213;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result152__;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional274;
struct CVALUE* result_217;
void* __exception_result_var_b211;
struct CVALUE* __result153__;
_Bool _if_conditional275;
struct CVALUE* __result154__;
struct CVALUE* result_218;
void* __exception_result_var_b212;
struct CVALUE* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct CVALUE*));
memset(&result_218, 0, sizeof(struct CVALUE*));
            if(_if_conditional274=self==((void*)0),            _if_conditional274) {
                (come_push_stackframe("./neo-c.h", 284, 2493),__exception_result_var_b211=memset(&result_217,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b211);
                __result153__ = __result_obj__ = result_217;
                return __result153__;
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 2494)), "./neo-c.h", 287, 2495))->it=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 2496)), "./neo-c.h", 287, 2497))->head;
            if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 289, 2498)), "./neo-c.h", 289, 2499))->it) {
                __result154__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 290, 2500)), "./neo-c.h", 290, 2501))->it, "./neo-c.h", 290, 2502)), "./neo-c.h", 290, 2503))->item;
                return __result154__;
            }
            (come_push_stackframe("./neo-c.h", 294, 2504),__exception_result_var_b212=memset(&result_218,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b212);
            __result155__ = __result_obj__ = result_218;
            return __result155__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
            __result156__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 317, 2508)), "./neo-c.h", 317, 2509))->it==((void*)0);
            return __result156__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional276;
struct CVALUE* result_220;
void* __exception_result_var_b215;
struct CVALUE* __result157__;
_Bool _if_conditional277;
struct CVALUE* __result158__;
struct CVALUE* result_221;
void* __exception_result_var_b216;
struct CVALUE* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct CVALUE*));
memset(&result_221, 0, sizeof(struct CVALUE*));
            if(_if_conditional276=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 299, 2513)), "./neo-c.h", 299, 2514))->it==((void*)0),            _if_conditional276) {
                (come_push_stackframe("./neo-c.h", 301, 2515),__exception_result_var_b215=memset(&result_220,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b215);
                __result157__ = __result_obj__ = result_220;
                return __result157__;
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 2516)), "./neo-c.h", 305, 2517))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 2518)), "./neo-c.h", 305, 2519))->it, "./neo-c.h", 305, 2520)), "./neo-c.h", 305, 2521))->next;
            if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 307, 2522)), "./neo-c.h", 307, 2523))->it) {
                __result158__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 308, 2524)), "./neo-c.h", 308, 2525))->it, "./neo-c.h", 308, 2526)), "./neo-c.h", 308, 2527))->item;
                return __result158__;
            }
            (come_push_stackframe("./neo-c.h", 312, 2528),__exception_result_var_b216=memset(&result_221,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b216);
            __result159__ = __result_obj__ = result_221;
            return __result159__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional279;
int __result160__;
int __result161__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional279=self==((void*)0),                _if_conditional279) {
                    __result160__ = 0;
                    return __result160__;
                }
                __result161__ = ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 360, 2542)), "./neo-c.h", 360, 2543))->len;
                return __result161__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_227;
void* __exception_result_var_b231;
unsigned int __exception_result_var_b232;
unsigned int hash_228;
unsigned int it_229;
_Bool _while_condtional34;
_Bool _if_conditional283;
_Bool __exception_result_var_b233;
_Bool _if_conditional284;
struct sClass* __result162__;
_Bool _if_conditional285;
_Bool _if_conditional286;
struct sClass* __result163__;
struct sClass* __result164__;
struct sClass* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_227, 0, sizeof(struct sClass*));
memset(&hash_228, 0, sizeof(unsigned int));
memset(&it_229, 0, sizeof(unsigned int));
                (come_push_stackframe("./neo-c.h", 1526, 2596),__exception_result_var_b231=memset(&default_value_227,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b231);
                hash_228=(come_push_stackframe("./neo-c.h", 1528, 2599),__exception_result_var_b232=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2597)), "./neo-c.h", 1528, 2598))), come_pop_stackframe(), __exception_result_var_b232)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 2600)), "./neo-c.h", 1528, 2601))->size;
                it_229=hash_228;
                while(_while_condtional34=(_Bool)1,                _while_condtional34) {
                    if(_if_conditional283=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 2602)), "./neo-c.h", 1532, 2603))->item_existance, "./neo-c.h", 1532, 2604))[it_229],                    _if_conditional283) {
                        if(_if_conditional284=(come_push_stackframe("./neo-c.h", 1534, 2610),__exception_result_var_b233=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 2605)), "./neo-c.h", 1534, 2606))->keys, "./neo-c.h", 1534, 2607))[it_229], "./neo-c.h", 1534, 2608)), "./neo-c.h", 1534, 2609)),key), come_pop_stackframe(), __exception_result_var_b233),                        _if_conditional284) {
                            __result162__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 2611)), "./neo-c.h", 1536, 2612))->items, "./neo-c.h", 1536, 2613))[it_229];
                            come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 0, 0, (void*)0);
                            return __result162__;
                        }
                        it_229++;
                        if(_if_conditional285=it_229>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 2614)), "./neo-c.h", 1541, 2615))->size,                        _if_conditional285) {
                            it_229=0;
                        }
                        else {
                            if(_if_conditional286=it_229==hash_228,                            _if_conditional286) {
                                __result163__ = __result_obj__ = default_value_227;
                                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result163__;
                            }
                        }
                    }
                    else {
                        __result164__ = __result_obj__ = default_value_227;
                        come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result164__;
                    }
                }
                __result165__ = __result_obj__ = default_value_227;
                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result165__;
                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b237;
unsigned int hash_230;
unsigned int it_231;
_Bool _while_condtional36;
_Bool _if_conditional287;
_Bool __exception_result_var_b238;
_Bool _if_conditional288;
struct sFun* __result166__;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct sFun* __result167__;
struct sFun* __result168__;
struct sFun* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_230, 0, sizeof(unsigned int));
memset(&it_231, 0, sizeof(unsigned int));
                    hash_230=(come_push_stackframe("./neo-c.h", 1207, 2629),__exception_result_var_b237=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2627)), "./neo-c.h", 1207, 2628))), come_pop_stackframe(), __exception_result_var_b237)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1207, 2630)), "./neo-c.h", 1207, 2631))->size;
                    it_231=hash_230;
                    while(_while_condtional36=(_Bool)1,                    _while_condtional36) {
                        if(_if_conditional287=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1211, 2632)), "./neo-c.h", 1211, 2633))->item_existance, "./neo-c.h", 1211, 2634))[it_231],                        _if_conditional287) {
                            if(_if_conditional288=(come_push_stackframe("./neo-c.h", 1213, 2640),__exception_result_var_b238=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1213, 2635)), "./neo-c.h", 1213, 2636))->keys, "./neo-c.h", 1213, 2637))[it_231], "./neo-c.h", 1213, 2638)), "./neo-c.h", 1213, 2639)),key), come_pop_stackframe(), __exception_result_var_b238),                            _if_conditional288) {
                                __result166__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1215, 2641)), "./neo-c.h", 1215, 2642))->items, "./neo-c.h", 1215, 2643))[it_231];
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result166__;
                            }
                            it_231++;
                            if(_if_conditional304=it_231>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1220, 2704)), "./neo-c.h", 1220, 2705))->size,                            _if_conditional304) {
                                it_231=0;
                            }
                            else {
                                if(_if_conditional305=it_231==hash_230,                                _if_conditional305) {
                                    __result167__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result167__;
                                }
                            }
                        }
                        else {
                            __result168__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result168__;
                        }
                    }
                    __result169__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result169__;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional289;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
_Bool _if_conditional303;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional289=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2644)), "sFun_finalize", 0, 2645))->mName!=((void*)0),                                    _if_conditional289) {
                                        ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2646)), "sFun_finalize", 0, 2647))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2646)), "sFun_finalize", 0, 2647))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional290=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2648)), "sFun_finalize", 1, 2649))->mResultType!=((void*)0),                                    _if_conditional290) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2650)), "sFun_finalize", 1, 2651))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional291=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2652)), "sFun_finalize", 2, 2653))->mParamTypes!=((void*)0),                                    _if_conditional291) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2654)), "sFun_finalize", 2, 2655))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional292=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2656)), "sFun_finalize", 3, 2657))->mParamNames!=((void*)0),                                    _if_conditional292) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2658)), "sFun_finalize", 3, 2659))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional293=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2660)), "sFun_finalize", 4, 2661))->mParamDefaultParametors!=((void*)0),                                    _if_conditional293) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2662)), "sFun_finalize", 4, 2663))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional294=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2664)), "sFun_finalize", 5, 2665))->mLambdaType!=((void*)0),                                    _if_conditional294) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2666)), "sFun_finalize", 5, 2667))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional295=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2668)), "sFun_finalize", 6, 2669))->mBlock!=((void*)0),                                    _if_conditional295) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2670)), "sFun_finalize", 6, 2671))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional298=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2680)), "sFun_finalize", 7, 2681))->mSource!=((void*)0),                                    _if_conditional298) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2682)), "sFun_finalize", 7, 2683))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional299=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2684)), "sFun_finalize", 8, 2685))->mSourceHead!=((void*)0),                                    _if_conditional299) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2686)), "sFun_finalize", 8, 2687))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional300=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2688)), "sFun_finalize", 9, 2689))->mSourceHead2!=((void*)0),                                    _if_conditional300) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2690)), "sFun_finalize", 9, 2691))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional301=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2692)), "sFun_finalize", 10, 2693))->mSourceDefer!=((void*)0),                                    _if_conditional301) {
                                        come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2694)), "sFun_finalize", 10, 2695))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional302=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2696)), "sFun_finalize", 11, 2697))->mComeHeader!=((void*)0),                                    _if_conditional302) {
                                        ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2698)), "sFun_finalize", 11, 2699))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2698)), "sFun_finalize", 11, 2699))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional303=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2700)), "sFun_finalize", 12, 2701))->mDeclareSName!=((void*)0),                                    _if_conditional303) {
                                        ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2702)), "sFun_finalize", 12, 2703))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2702)), "sFun_finalize", 12, 2703))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional296;
_Bool _if_conditional297;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional296=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2672)), "sBlock_finalize", 0, 2673))->mNodes!=((void*)0),                                            _if_conditional296) {
                                                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2674)), "sBlock_finalize", 0, 2675))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional297=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2676)), "sBlock_finalize", 1, 2677))->mVarTable!=((void*)0),                                            _if_conditional297) {
                                                come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2678)), "sBlock_finalize", 1, 2679))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_234;
void* __exception_result_var_b244;
unsigned int __exception_result_var_b245;
unsigned int hash_235;
unsigned int it_236;
_Bool _while_condtional37;
_Bool _if_conditional307;
_Bool __exception_result_var_b246;
_Bool _if_conditional308;
struct sFun* __result170__;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct sFun* __result171__;
struct sFun* __result172__;
struct sFun* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_234, 0, sizeof(struct sFun*));
memset(&hash_235, 0, sizeof(unsigned int));
memset(&it_236, 0, sizeof(unsigned int));
                    (come_push_stackframe("./neo-c.h", 1526, 2715),__exception_result_var_b244=memset(&default_value_234,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b244);
                    hash_235=(come_push_stackframe("./neo-c.h", 1528, 2718),__exception_result_var_b245=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2716)), "./neo-c.h", 1528, 2717))), come_pop_stackframe(), __exception_result_var_b245)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 2719)), "./neo-c.h", 1528, 2720))->size;
                    it_236=hash_235;
                    while(_while_condtional37=(_Bool)1,                    _while_condtional37) {
                        if(_if_conditional307=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 2721)), "./neo-c.h", 1532, 2722))->item_existance, "./neo-c.h", 1532, 2723))[it_236],                        _if_conditional307) {
                            if(_if_conditional308=(come_push_stackframe("./neo-c.h", 1534, 2729),__exception_result_var_b246=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 2724)), "./neo-c.h", 1534, 2725))->keys, "./neo-c.h", 1534, 2726))[it_236], "./neo-c.h", 1534, 2727)), "./neo-c.h", 1534, 2728)),key), come_pop_stackframe(), __exception_result_var_b246),                            _if_conditional308) {
                                __result170__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 2730)), "./neo-c.h", 1536, 2731))->items, "./neo-c.h", 1536, 2732))[it_236];
                                come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result170__;
                            }
                            it_236++;
                            if(_if_conditional309=it_236>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 2733)), "./neo-c.h", 1541, 2734))->size,                            _if_conditional309) {
                                it_236=0;
                            }
                            else {
                                if(_if_conditional310=it_236==hash_235,                                _if_conditional310) {
                                    __result171__ = __result_obj__ = default_value_234;
                                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result171__;
                                }
                            }
                        }
                        else {
                            __result172__ = __result_obj__ = default_value_234;
                            come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result172__;
                        }
                    }
                    __result173__ = __result_obj__ = default_value_234;
                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result173__;
                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional322;
int __result177__;
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional322=self==((void*)0),            _if_conditional322) {
                __result177__ = 0;
                return __result177__;
            }
            __result178__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 2814)), "./neo-c.h", 360, 2815))->len;
            return __result178__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional324;
struct sType* result_244;
void* __exception_result_var_b269;
struct sType* __result180__;
_Bool _if_conditional325;
struct sType* __result181__;
struct sType* result_245;
void* __exception_result_var_b270;
struct sType* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct sType*));
memset(&result_245, 0, sizeof(struct sType*));
            if(_if_conditional324=self==((void*)0),            _if_conditional324) {
                (come_push_stackframe("./neo-c.h", 284, 2832),__exception_result_var_b269=memset(&result_244,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b269);
                __result180__ = __result_obj__ = result_244;
                return __result180__;
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2833)), "./neo-c.h", 287, 2834))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2835)), "./neo-c.h", 287, 2836))->head;
            if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 2837)), "./neo-c.h", 289, 2838))->it) {
                __result181__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 2839)), "./neo-c.h", 290, 2840))->it, "./neo-c.h", 290, 2841)), "./neo-c.h", 290, 2842))->item;
                return __result181__;
            }
            (come_push_stackframe("./neo-c.h", 294, 2843),__exception_result_var_b270=memset(&result_245,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b270);
            __result182__ = __result_obj__ = result_245;
            return __result182__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
            __result183__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 2847)), "./neo-c.h", 317, 2848))->it==((void*)0);
            return __result183__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional326;
struct sType* result_247;
void* __exception_result_var_b273;
struct sType* __result184__;
_Bool _if_conditional327;
struct sType* __result185__;
struct sType* result_248;
void* __exception_result_var_b274;
struct sType* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sType*));
memset(&result_248, 0, sizeof(struct sType*));
            if(_if_conditional326=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 2852)), "./neo-c.h", 299, 2853))->it==((void*)0),            _if_conditional326) {
                (come_push_stackframe("./neo-c.h", 301, 2854),__exception_result_var_b273=memset(&result_247,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b273);
                __result184__ = __result_obj__ = result_247;
                return __result184__;
            }
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2855)), "./neo-c.h", 305, 2856))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2857)), "./neo-c.h", 305, 2858))->it, "./neo-c.h", 305, 2859)), "./neo-c.h", 305, 2860))->next;
            if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 2861)), "./neo-c.h", 307, 2862))->it) {
                __result185__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 2863)), "./neo-c.h", 308, 2864))->it, "./neo-c.h", 308, 2865)), "./neo-c.h", 308, 2866))->item;
                return __result185__;
            }
            (come_push_stackframe("./neo-c.h", 312, 2867),__exception_result_var_b274=memset(&result_248,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b274);
            __result186__ = __result_obj__ = result_248;
            return __result186__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional329;
void* right_value213;
struct list_item$1sTypeph* litem_249;
struct sType* __dec_obj70;
_Bool _if_conditional330;
void* right_value214;
struct list_item$1sTypeph* litem_250;
struct sType* __dec_obj71;
void* right_value215;
struct list_item$1sTypeph* litem_251;
struct sType* __dec_obj72;
struct list$1sTypeph* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
memset(&litem_249, 0, sizeof(struct list_item$1sTypeph*));
right_value214 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1sTypeph*));
right_value215 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional329=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 2871)), "./neo-c.h", 222, 2872))->len==0,                    _if_conditional329) {
                        litem_249=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value213=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value213,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_249, "./neo-c.h", 225, 2873)), "./neo-c.h", 225, 2874))->prev=((void*)0);
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_249, "./neo-c.h", 226, 2875)), "./neo-c.h", 226, 2876))->next=((void*)0);
                        __dec_obj70=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_249, "./neo-c.h", 227, 2877)), "./neo-c.h", 227, 2878))->item;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_249, "./neo-c.h", 227, 2877)), "./neo-c.h", 227, 2878))->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 2879)), "./neo-c.h", 229, 2880))->tail=litem_249;
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 2881)), "./neo-c.h", 230, 2882))->head=litem_249;
                    }
                    else {
                        if(_if_conditional330=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 2883)), "./neo-c.h", 232, 2884))->len==1,                        _if_conditional330) {
                            litem_250=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value214=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value214,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_250, "./neo-c.h", 235, 2885)), "./neo-c.h", 235, 2886))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 2887)), "./neo-c.h", 235, 2888))->head;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_250, "./neo-c.h", 236, 2889)), "./neo-c.h", 236, 2890))->next=((void*)0);
                            __dec_obj71=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_250, "./neo-c.h", 237, 2891)), "./neo-c.h", 237, 2892))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_250, "./neo-c.h", 237, 2891)), "./neo-c.h", 237, 2892))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 2893)), "./neo-c.h", 239, 2894))->tail=litem_250;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 2895)), "./neo-c.h", 240, 2896))->head, "./neo-c.h", 240, 2897)), "./neo-c.h", 240, 2898))->next=litem_250;
                        }
                        else {
                            litem_251=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value215=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value215,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_251, "./neo-c.h", 245, 2899)), "./neo-c.h", 245, 2900))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 2901)), "./neo-c.h", 245, 2902))->tail;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_251, "./neo-c.h", 246, 2903)), "./neo-c.h", 246, 2904))->next=((void*)0);
                            __dec_obj72=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_251, "./neo-c.h", 247, 2905)), "./neo-c.h", 247, 2906))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_251, "./neo-c.h", 247, 2905)), "./neo-c.h", 247, 2906))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 2907)), "./neo-c.h", 249, 2908))->tail, "./neo-c.h", 249, 2909)), "./neo-c.h", 249, 2910))->next=litem_251;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 2911)), "./neo-c.h", 250, 2912))->tail=litem_251;
                        }
                    }
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 2913)), "./neo-c.h", 253, 2914))->len++;
                    __result187__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result187__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional331;
void* right_value220;
struct list_item$1CVALUEph* litem_255;
struct CVALUE* __dec_obj73;
_Bool _if_conditional332;
void* right_value221;
struct list_item$1CVALUEph* litem_256;
struct CVALUE* __dec_obj74;
void* right_value222;
struct list_item$1CVALUEph* litem_257;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1CVALUEph*));
right_value221 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1CVALUEph*));
right_value222 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1CVALUEph*));
                if(_if_conditional331=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 152, 2932)), "./neo-c.h", 152, 2933))->len==0,                _if_conditional331) {
                    litem_255=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value220=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 153, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value220,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_255, "./neo-c.h", 155, 2934)), "./neo-c.h", 155, 2935))->prev=((void*)0);
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_255, "./neo-c.h", 156, 2936)), "./neo-c.h", 156, 2937))->next=((void*)0);
                    __dec_obj73=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_255, "./neo-c.h", 157, 2938)), "./neo-c.h", 157, 2939))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_255, "./neo-c.h", 157, 2938)), "./neo-c.h", 157, 2939))->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 159, 2940)), "./neo-c.h", 159, 2941))->tail=litem_255;
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 160, 2942)), "./neo-c.h", 160, 2943))->head=litem_255;
                }
                else {
                    if(_if_conditional332=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 162, 2944)), "./neo-c.h", 162, 2945))->len==1,                    _if_conditional332) {
                        litem_256=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value221=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 163, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value221,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_256, "./neo-c.h", 165, 2946)), "./neo-c.h", 165, 2947))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 165, 2948)), "./neo-c.h", 165, 2949))->head;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_256, "./neo-c.h", 166, 2950)), "./neo-c.h", 166, 2951))->next=((void*)0);
                        __dec_obj74=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_256, "./neo-c.h", 167, 2952)), "./neo-c.h", 167, 2953))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_256, "./neo-c.h", 167, 2952)), "./neo-c.h", 167, 2953))->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj74,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 169, 2954)), "./neo-c.h", 169, 2955))->tail=litem_256;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 170, 2956)), "./neo-c.h", 170, 2957))->head, "./neo-c.h", 170, 2958)), "./neo-c.h", 170, 2959))->next=litem_256;
                    }
                    else {
                        litem_257=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value222=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 173, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value222,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_257, "./neo-c.h", 175, 2960)), "./neo-c.h", 175, 2961))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 175, 2962)), "./neo-c.h", 175, 2963))->tail;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_257, "./neo-c.h", 176, 2964)), "./neo-c.h", 176, 2965))->next=((void*)0);
                        __dec_obj75=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_257, "./neo-c.h", 177, 2966)), "./neo-c.h", 177, 2967))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_257, "./neo-c.h", 177, 2966)), "./neo-c.h", 177, 2967))->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 179, 2968)), "./neo-c.h", 179, 2969))->tail, "./neo-c.h", 179, 2970)), "./neo-c.h", 179, 2971))->next=litem_257;
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 180, 2972)), "./neo-c.h", 180, 2973))->tail=litem_257;
                    }
                }
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 183, 2974)), "./neo-c.h", 183, 2975))->len++;
                __result188__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result188__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional336;
char* result_266;
void* __exception_result_var_b288;
char* __result190__;
_Bool _if_conditional337;
char* __result191__;
char* result_267;
void* __exception_result_var_b289;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_266, 0, sizeof(char*));
memset(&result_267, 0, sizeof(char*));
                        if(_if_conditional336=self==((void*)0),                        _if_conditional336) {
                            (come_push_stackframe("./neo-c.h", 284, 2993),__exception_result_var_b288=memset(&result_266,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b288);
                            __result190__ = __result_obj__ = result_266;
                            return __result190__;
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2994)), "./neo-c.h", 287, 2995))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2996)), "./neo-c.h", 287, 2997))->head;
                        if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 2998)), "./neo-c.h", 289, 2999))->it) {
                            __result191__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 3000)), "./neo-c.h", 290, 3001))->it, "./neo-c.h", 290, 3002)), "./neo-c.h", 290, 3003))->item;
                            return __result191__;
                        }
                        (come_push_stackframe("./neo-c.h", 294, 3004),__exception_result_var_b289=memset(&result_267,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b289);
                        __result192__ = __result_obj__ = result_267;
                        return __result192__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result193__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 3008)), "./neo-c.h", 317, 3009))->it==((void*)0);
                        return __result193__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional338;
char* result_269;
void* __exception_result_var_b292;
char* __result194__;
_Bool _if_conditional339;
char* __result195__;
char* result_270;
void* __exception_result_var_b293;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_269, 0, sizeof(char*));
memset(&result_270, 0, sizeof(char*));
                        if(_if_conditional338=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 3013)), "./neo-c.h", 299, 3014))->it==((void*)0),                        _if_conditional338) {
                            (come_push_stackframe("./neo-c.h", 301, 3015),__exception_result_var_b292=memset(&result_269,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b292);
                            __result194__ = __result_obj__ = result_269;
                            return __result194__;
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 3016)), "./neo-c.h", 305, 3017))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 3018)), "./neo-c.h", 305, 3019))->it, "./neo-c.h", 305, 3020)), "./neo-c.h", 305, 3021))->next;
                        if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 3022)), "./neo-c.h", 307, 3023))->it) {
                            __result195__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 3024)), "./neo-c.h", 308, 3025))->it, "./neo-c.h", 308, 3026)), "./neo-c.h", 308, 3027))->item;
                            return __result195__;
                        }
                        (come_push_stackframe("./neo-c.h", 312, 3028),__exception_result_var_b293=memset(&result_270,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b293);
                        __result196__ = __result_obj__ = result_270;
                        return __result196__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
struct list$1CVALUEph* __exception_result_var_b302;
struct list$1CVALUEph* __result197__;
struct list_item$1CVALUEph* it_271;
int i_272;
_Bool _while_condtional39;
_Bool _if_conditional345;
struct CVALUE* __dec_obj76;
struct list$1CVALUEph* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_272, 0, sizeof(int));
                        if(_if_conditional343=position<0,                        _if_conditional343) {
                            position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 582, 3056)), "./neo-c.h", 582, 3057))->len;
                        }
                        if(_if_conditional344=position>=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 585, 3058)), "./neo-c.h", 585, 3059))->len,                        _if_conditional344) {
                            (come_push_stackframe("./neo-c.h", 586, 3062),__exception_result_var_b302=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 586, 3060)), "./neo-c.h", 586, 3061)),(struct CVALUE*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b302);
                            __result197__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result197__;
                        }
                        it_271=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 590, 3063)), "./neo-c.h", 590, 3064))->head;
                        i_272=0;
                        while(_while_condtional39=it_271!=((void*)0),                        _while_condtional39) {
                            if(_if_conditional345=position==i_272,                            _if_conditional345) {
                                __dec_obj76=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_271, "./neo-c.h", 594, 3065)), "./neo-c.h", 594, 3066))->item;
                                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_271, "./neo-c.h", 594, 3065)), "./neo-c.h", 594, 3066))->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_271=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_271, "./neo-c.h", 597, 3067)), "./neo-c.h", 597, 3068))->next;
                            i_272++;
                        }
                        __result198__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result198__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional349;
struct list_item$1charph* it_278;
int i_279;
_Bool _while_condtional40;
_Bool _if_conditional350;
char* __result199__;
char* default_value_280;
void* __exception_result_var_b312;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_278, 0, sizeof(struct list_item$1charph*));
memset(&i_279, 0, sizeof(int));
memset(&default_value_280, 0, sizeof(char*));
                            if(_if_conditional349=position<0,                            _if_conditional349) {
                                position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 676, 3112)), "./neo-c.h", 676, 3113))->len;
                            }
                            it_278=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 679, 3114)), "./neo-c.h", 679, 3115))->head;
                            i_279=0;
                            while(_while_condtional40=it_278!=((void*)0),                            _while_condtional40) {
                                if(_if_conditional350=position==i_279,                                _if_conditional350) {
                                    __result199__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_278, "./neo-c.h", 683, 3116)), "./neo-c.h", 683, 3117))->item;
                                    return __result199__;
                                }
                                it_278=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_278, "./neo-c.h", 685, 3118)), "./neo-c.h", 685, 3119))->next;
                                i_279++;
                            }
                            (come_push_stackframe("./neo-c.h", 690, 3120),__exception_result_var_b312=memset(&default_value_280,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b312);
                            __result200__ = __result_obj__ = default_value_280;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result200__;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional353;
struct list_item$1CVALUEph* it_282;
int i_283;
_Bool _while_condtional42;
_Bool _if_conditional354;
struct CVALUE* __result202__;
struct CVALUE* default_value_284;
void* __exception_result_var_b317;
struct CVALUE* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_282, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_283, 0, sizeof(int));
memset(&default_value_284, 0, sizeof(struct CVALUE*));
                            if(_if_conditional353=position<0,                            _if_conditional353) {
                                position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 676, 3131)), "./neo-c.h", 676, 3132))->len;
                            }
                            it_282=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 679, 3133)), "./neo-c.h", 679, 3134))->head;
                            i_283=0;
                            while(_while_condtional42=it_282!=((void*)0),                            _while_condtional42) {
                                if(_if_conditional354=position==i_283,                                _if_conditional354) {
                                    __result202__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_282, "./neo-c.h", 683, 3135)), "./neo-c.h", 683, 3136))->item;
                                    return __result202__;
                                }
                                it_282=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_282, "./neo-c.h", 685, 3137)), "./neo-c.h", 685, 3138))->next;
                                i_283++;
                            }
                            (come_push_stackframe("./neo-c.h", 690, 3139),__exception_result_var_b317=memset(&default_value_284,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b317);
                            __result203__ = __result_obj__ = default_value_284;
                            come_call_finalizer3(default_value_284,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result203__;
                            come_call_finalizer3(default_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional362;
struct sNode* result_290;
void* __exception_result_var_b332;
struct sNode* __result204__;
_Bool _if_conditional363;
struct sNode* __result205__;
struct sNode* result_291;
void* __exception_result_var_b333;
struct sNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct sNode*));
memset(&result_291, 0, sizeof(struct sNode*));
                        if(_if_conditional362=self==((void*)0),                        _if_conditional362) {
                            (come_push_stackframe("./neo-c.h", 284, 3190),__exception_result_var_b332=memset(&result_290,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b332);
                            __result204__ = __result_obj__ = result_290;
                            return __result204__;
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 3191)), "./neo-c.h", 287, 3192))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 3193)), "./neo-c.h", 287, 3194))->head;
                        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 3195)), "./neo-c.h", 289, 3196))->it) {
                            __result205__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 3197)), "./neo-c.h", 290, 3198))->it, "./neo-c.h", 290, 3199)), "./neo-c.h", 290, 3200))->item;
                            return __result205__;
                        }
                        (come_push_stackframe("./neo-c.h", 294, 3201),__exception_result_var_b333=memset(&result_291,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b333);
                        __result206__ = __result_obj__ = result_291;
                        return __result206__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result207__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 3205)), "./neo-c.h", 317, 3206))->it==((void*)0);
                        return __result207__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional364;
struct sNode* result_293;
void* __exception_result_var_b336;
struct sNode* __result208__;
_Bool _if_conditional365;
struct sNode* __result209__;
struct sNode* result_294;
void* __exception_result_var_b337;
struct sNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_293, 0, sizeof(struct sNode*));
memset(&result_294, 0, sizeof(struct sNode*));
                        if(_if_conditional364=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 3210)), "./neo-c.h", 299, 3211))->it==((void*)0),                        _if_conditional364) {
                            (come_push_stackframe("./neo-c.h", 301, 3212),__exception_result_var_b336=memset(&result_293,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b336);
                            __result208__ = __result_obj__ = result_293;
                            return __result208__;
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 3213)), "./neo-c.h", 305, 3214))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 3215)), "./neo-c.h", 305, 3216))->it, "./neo-c.h", 305, 3217)), "./neo-c.h", 305, 3218))->next;
                        if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 3219)), "./neo-c.h", 307, 3220))->it) {
                            __result209__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 3221)), "./neo-c.h", 308, 3222))->it, "./neo-c.h", 308, 3223)), "./neo-c.h", 308, 3224))->item;
                            return __result209__;
                        }
                        (come_push_stackframe("./neo-c.h", 312, 3225),__exception_result_var_b337=memset(&result_294,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b337);
                        __result210__ = __result_obj__ = result_294;
                        return __result210__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional368;
void* right_value243;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj79;
_Bool _if_conditional369;
void* right_value244;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj80;
void* right_value245;
struct list_item$1tuple2$2charphsNodephph* litem_299;
struct tuple2$2charphsNodeph* __dec_obj81;
struct list$1tuple2$2charphsNodephph* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value244 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value245 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                        if(_if_conditional368=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 222, 3262)), "./neo-c.h", 222, 3263))->len==0,                        _if_conditional368) {
                            litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value243=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(right_value243,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_297, "./neo-c.h", 225, 3264)), "./neo-c.h", 225, 3265))->prev=((void*)0);
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_297, "./neo-c.h", 226, 3266)), "./neo-c.h", 226, 3267))->next=((void*)0);
                            __dec_obj79=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_297, "./neo-c.h", 227, 3268)), "./neo-c.h", 227, 3269))->item;
                            ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_297, "./neo-c.h", 227, 3268)), "./neo-c.h", 227, 3269))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 229, 3270)), "./neo-c.h", 229, 3271))->tail=litem_297;
                            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 230, 3272)), "./neo-c.h", 230, 3273))->head=litem_297;
                        }
                        else {
                            if(_if_conditional369=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 232, 3274)), "./neo-c.h", 232, 3275))->len==1,                            _if_conditional369) {
                                litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value244=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value244,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_298, "./neo-c.h", 235, 3276)), "./neo-c.h", 235, 3277))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 235, 3278)), "./neo-c.h", 235, 3279))->head;
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_298, "./neo-c.h", 236, 3280)), "./neo-c.h", 236, 3281))->next=((void*)0);
                                __dec_obj80=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_298, "./neo-c.h", 237, 3282)), "./neo-c.h", 237, 3283))->item;
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_298, "./neo-c.h", 237, 3282)), "./neo-c.h", 237, 3283))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj80,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 239, 3284)), "./neo-c.h", 239, 3285))->tail=litem_298;
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 240, 3286)), "./neo-c.h", 240, 3287))->head, "./neo-c.h", 240, 3288)), "./neo-c.h", 240, 3289))->next=litem_298;
                            }
                            else {
                                litem_299=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value245=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(right_value245,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_299, "./neo-c.h", 245, 3290)), "./neo-c.h", 245, 3291))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 245, 3292)), "./neo-c.h", 245, 3293))->tail;
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_299, "./neo-c.h", 246, 3294)), "./neo-c.h", 246, 3295))->next=((void*)0);
                                __dec_obj81=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_299, "./neo-c.h", 247, 3296)), "./neo-c.h", 247, 3297))->item;
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_299, "./neo-c.h", 247, 3296)), "./neo-c.h", 247, 3297))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj81,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 249, 3298)), "./neo-c.h", 249, 3299))->tail, "./neo-c.h", 249, 3300)), "./neo-c.h", 249, 3301))->next=litem_299;
                                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 250, 3302)), "./neo-c.h", 250, 3303))->tail=litem_299;
                            }
                        }
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 253, 3304)), "./neo-c.h", 253, 3305))->len++;
                        __result211__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result211__;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj82;
struct tuple2$2charphvoidp* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj82=((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1744, 3306)), "./neo-c.h", 1744, 3307))->v1;
                        ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1744, 3306)), "./neo-c.h", 1744, 3307))->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "./neo-c.h", 1745, 3308)), "./neo-c.h", 1745, 3309))->v2=v2;
                        __result212__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result212__;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
void* __result_obj__;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional370=self!=((void*)0)&&((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 3310)), "tuple2$2charphvoidpp_finalize", 0, 3311))->v1!=((void*)0),                            _if_conditional370) {
                                ((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 3312)), "tuple2$2charphvoidpp_finalize", 0, 3313))->v1 = come_decrement_ref_count2(((struct tuple2$2charphvoidp*)come_null_check(((struct tuple2$2charphvoidp*)come_null_check(self, "tuple2$2charphvoidpp_finalize", 0, 3312)), "tuple2$2charphvoidpp_finalize", 0, 3313))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional380;
int __result213__;
int __result214__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional380=self==((void*)0),            _if_conditional380) {
                __result213__ = 0;
                return __result213__;
            }
            __result214__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 360, 3467)), "./neo-c.h", 360, 3468))->len;
            return __result214__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value331;
void* right_value332;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b481;
struct list$1tuple2$2charphsNodephph* params_363;
struct sNode* __exception_result_var_b482;
void* right_value333;
void* right_value334;
void* right_value335;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b483;
_Bool _if_conditional404;
_Bool parse_method_generics_type_364;
char* p_365;
int sline_366;
_Bool _if_conditional405;
_Bool __exception_result_var_b484;
_Bool _if_conditional406;
void* right_value336;
char* __exception_result_var_b485;
char* word_367;
_Bool __exception_result_var_b486;
_Bool _if_conditional407;
void* right_value337;
void* right_value338;
struct list$1sTypeph* __exception_result_var_b487;
struct list$1sTypeph* method_generics_types_368;
_Bool _if_conditional408;
_Bool _while_condtional45;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value339;
struct tuple3$3sTypephcharphbool* __exception_result_var_b488;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_369;
char* name_370;
_Bool err_371;
_Bool _if_conditional414;
struct sType* __exception_result_var_b489;
void* right_value340;
struct list$1sTypeph* __exception_result_var_b490;
_Bool _if_conditional415;
int __exception_result_var_b491;
_Bool _while_condtional46;
_Bool _if_conditional416;
char* p_372;
int sline_373;
_Bool err_flag_374;
void* right_value341;
char* __exception_result_var_b492;
char* label_375;
_Bool __exception_result_var_b493;
_Bool _if_conditional417;
void* right_value342;
char* __exception_result_var_b494;
char* __dec_obj103;
_Bool _if_conditional418;
char* __dec_obj104;
_Bool no_comma_376;
void* right_value343;
struct sNode* __exception_result_var_b495;
struct sNode* node_377;
void* right_value344;
struct sNode* __exception_result_var_b496;
struct sNode* __dec_obj105;
void* right_value345;
void* right_value346;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b497;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct buffer* __dec_obj106;
struct buffer* method_block_378;
int method_block_sline_379;
_Bool _if_conditional421;
char* head_380;
void* right_value347;
char* __exception_result_var_b498;
char* tail_381;
void* right_value348;
void* right_value349;
struct buffer* __exception_result_var_b499;
struct buffer* __dec_obj107;
int len_382;
void* right_value350;
char* mem_383;
void* __exception_result_var_b500;
struct buffer* __exception_result_var_b501;
struct buffer* __exception_result_var_b502;
_Bool _if_conditional422;
void* right_value351;
struct sNode* __exception_result_var_b503;
void* right_value352;
void* right_value353;
struct sMethodCallNode* __exception_result_var_b504;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value361;
struct sNode* node_384;
void* right_value362;
struct sNode* __exception_result_var_b511;
struct sNode* __dec_obj114;
struct sNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&params_363, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&parse_method_generics_type_364, 0, sizeof(_Bool));
memset(&p_365, 0, sizeof(char*));
memset(&sline_366, 0, sizeof(int));
right_value336 = (void*)0;
memset(&word_367, 0, sizeof(char*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&method_generics_types_368, 0, sizeof(struct list$1sTypeph*));
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&p_372, 0, sizeof(char*));
memset(&sline_373, 0, sizeof(int));
memset(&err_flag_374, 0, sizeof(_Bool));
right_value341 = (void*)0;
memset(&label_375, 0, sizeof(char*));
right_value342 = (void*)0;
memset(&no_comma_376, 0, sizeof(_Bool));
right_value343 = (void*)0;
memset(&node_377, 0, sizeof(struct sNode*));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&method_block_378, 0, sizeof(struct buffer*));
memset(&method_block_sline_379, 0, sizeof(int));
memset(&head_380, 0, sizeof(char*));
right_value347 = (void*)0;
memset(&tail_381, 0, sizeof(char*));
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&len_382, 0, sizeof(int));
right_value350 = (void*)0;
memset(&mem_383, 0, sizeof(char*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value361 = (void*)0;
memset(&node_384, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
    params_363=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("20method.c", 865, 3851),__exception_result_var_b481=((struct list$1tuple2$2charphsNodephph*)(right_value332=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value331=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 865, "list$1tuple2$2charphsNodephph"))), "20method.c", 865, 3850)))))), come_pop_stackframe(), __exception_result_var_b481));
    come_call_finalizer3(right_value331,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value332,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("20method.c", 866, 3859),__exception_result_var_b483=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_363, "20method.c", 866, 3852)), "20method.c", 866, 3853)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value335=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value334=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 866, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=(come_push_stackframe("20method.c", 866, 3854),__exception_result_var_b482=sNode_clone(obj), come_pop_stackframe(), __exception_result_var_b482))))))))), come_pop_stackframe(), __exception_result_var_b483);
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value334,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value335,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional404=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 868, 3860)), "20method.c", 868, 3861))->p, "20method.c", 868, 3862))==45&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 868, 3863)), "20method.c", 868, 3864))->p+1), "20method.c", 868, 3865))==62,    _if_conditional404) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 869, 3866)), "20method.c", 869, 3867))->p+=2;
        (come_push_stackframe("20method.c", 870,3868),skip_spaces_and_lf(info),come_pop_stackframe());
    }
    parse_method_generics_type_364=(_Bool)0;
    {
        p_365=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 876, 3869)), "20method.c", 876, 3870))->p;
        sline_366=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 877, 3871)), "20method.c", 877, 3872))->sline;
        if(_if_conditional405=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 879, 3873)), "20method.c", 879, 3874))->p, "20method.c", 879, 3875))==60,        _if_conditional405) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 880, 3876)), "20method.c", 880, 3877))->p++;
            (come_push_stackframe("20method.c", 881,3878),skip_spaces_and_lf(info),come_pop_stackframe());
            if(_if_conditional406=(come_push_stackframe("20method.c", 883, 3882),__exception_result_var_b484=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 883, 3879)), "20method.c", 883, 3880))->p, "20method.c", 883, 3881))), come_pop_stackframe(), __exception_result_var_b484)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 883, 3883)), "20method.c", 883, 3884))->p, "20method.c", 883, 3885))==95,            _if_conditional406) {
                word_367=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 884, 3886),__exception_result_var_b485=((char*)(right_value336=parse_word(info))), come_pop_stackframe(), __exception_result_var_b485));
                right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional407=(come_push_stackframe("20method.c", 886, 3887),__exception_result_var_b486=is_type_name(word_367,info), come_pop_stackframe(), __exception_result_var_b486),                _if_conditional407) {
                    parse_method_generics_type_364=(_Bool)1;
                }
                word_367 = come_decrement_ref_count2(word_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 892, 3888)), "20method.c", 892, 3889))->p=p_365;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 893, 3890)), "20method.c", 893, 3891))->sline=sline_366;
    }
    method_generics_types_368=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("20method.c", 896, 3893),__exception_result_var_b487=((struct list$1sTypeph*)(right_value338=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value337=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 896, "list$1sTypeph"))), "20method.c", 896, 3892)))))), come_pop_stackframe(), __exception_result_var_b487));
    come_call_finalizer3(right_value337,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value338,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional408=parse_method_generics_type_364&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 897, 3894)), "20method.c", 897, 3895))->p, "20method.c", 897, 3896))==60,    _if_conditional408) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 898, 3897)), "20method.c", 898, 3898))->p++;
        (come_push_stackframe("20method.c", 899,3899),skip_spaces_and_lf(info),come_pop_stackframe());
        while(_while_condtional45=(_Bool)1,        _while_condtional45) {
            if(_if_conditional409=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 902, 3900)), "20method.c", 902, 3901))->p, "20method.c", 902, 3902))==0,            _if_conditional409) {
                (come_push_stackframe("20method.c", 903,3903),err_msg(info,"unexpected source end"),come_pop_stackframe());
                (come_push_stackframe("20method.c", 904,3904),exit(2),come_pop_stackframe());
            }
            else {
                if(_if_conditional410=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 906, 3905)), "20method.c", 906, 3906))->p, "20method.c", 906, 3907))==62,                _if_conditional410) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 907, 3908)), "20method.c", 907, 3909))->p++;
                    (come_push_stackframe("20method.c", 908,3910),skip_spaces_and_lf(info),come_pop_stackframe());
                    break;
                }
                else {
                    if(_if_conditional411=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 911, 3911)), "20method.c", 911, 3912))->p, "20method.c", 911, 3913))==44,                    _if_conditional411) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 912, 3914)), "20method.c", 912, 3915))->p++;
                        (come_push_stackframe("20method.c", 913,3916),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    else {
                        multiple_assign_var5=(come_push_stackframe("20method.c", 916, 3917),__exception_result_var_b488=((struct tuple3$3sTypephcharphbool*)(right_value339=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b488);
                        type_369=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_370=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_371=multiple_assign_var5->v3;
                        come_call_finalizer3(right_value339,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional414=!err_371,                        _if_conditional414) {
                            (come_push_stackframe("20method.c", 919,3926),err_msg(info,"invalid method generics paramtor type"),come_pop_stackframe());
                            (come_push_stackframe("20method.c", 920,3927),exit(2),come_pop_stackframe());
                        }
                        (come_push_stackframe("20method.c", 923, 3931),__exception_result_var_b490=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(method_generics_types_368, "20method.c", 923, 3928)), "20method.c", 923, 3929)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=(come_push_stackframe("20method.c", 923, 3930),__exception_result_var_b489=sType_clone(type_369), come_pop_stackframe(), __exception_result_var_b489))))), come_pop_stackframe(), __exception_result_var_b490);
                        come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_370 = come_decrement_ref_count2(name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(_if_conditional415=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 928, 3932)), "20method.c", 928, 3933))->p, "20method.c", 928, 3934))!=123,    _if_conditional415) {
        (come_push_stackframe("20method.c", 929, 3935),__exception_result_var_b491=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b491);
        while(_while_condtional46=(_Bool)1,        _while_condtional46) {
            if(_if_conditional416=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 932, 3936)), "20method.c", 932, 3937))->p, "20method.c", 932, 3938))==41,            _if_conditional416) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 933, 3939)), "20method.c", 933, 3940))->p++;
                (come_push_stackframe("20method.c", 934,3941),skip_spaces_and_lf(info),come_pop_stackframe());
                break;
            }
            p_372=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 938, 3942)), "20method.c", 938, 3943))->p;
            sline_373=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 939, 3944)), "20method.c", 939, 3945))->sline;
            err_flag_374=(_Bool)0;
            label_375=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 942, 3946),__exception_result_var_b492=((char*)(right_value341=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b492));
            right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional417=(come_push_stackframe("20method.c", 943, 3950),__exception_result_var_b493=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 943, 3947)), "20method.c", 943, 3948))->p, "20method.c", 943, 3949))), come_pop_stackframe(), __exception_result_var_b493)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 943, 3951)), "20method.c", 943, 3952))->p, "20method.c", 943, 3953))==95,            _if_conditional417) {
                __dec_obj103=label_375;
                label_375=(char*)come_increment_ref_count((come_push_stackframe("20method.c", 944, 3954),__exception_result_var_b494=((char*)(right_value342=parse_word(info))), come_pop_stackframe(), __exception_result_var_b494));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_374=(_Bool)1;
            }
            if(_if_conditional418=err_flag_374==(_Bool)1&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 948, 3955)), "20method.c", 948, 3956))->p, "20method.c", 948, 3957))==58,            _if_conditional418) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 949, 3958)), "20method.c", 949, 3959))->p++;
                (come_push_stackframe("20method.c", 950,3960),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                __dec_obj104=label_375;
                label_375=((void*)0);
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 955, 3961)), "20method.c", 955, 3962))->p=p_372;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 956, 3963)), "20method.c", 956, 3964))->sline=sline_373;
            }
            no_comma_376=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 959, 3965)), "20method.c", 959, 3966))->no_comma;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 960, 3967)), "20method.c", 960, 3968))->no_comma=(_Bool)1;
            node_377=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 962, 3969),__exception_result_var_b495=((struct sNode*)(right_value343=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b495));
            if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj105=node_377;
            node_377=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 964, 3970),__exception_result_var_b496=((struct sNode*)(right_value344=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_377),info))), come_pop_stackframe(), __exception_result_var_b496));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 966, 3971)), "20method.c", 966, 3972))->no_comma=no_comma_376;
            (come_push_stackframe("20method.c", 968, 3975),__exception_result_var_b497=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_363, "20method.c", 968, 3973)), "20method.c", 968, 3974)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value346=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value345=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 968, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_375),(struct sNode*)come_increment_ref_count(node_377)))))), come_pop_stackframe(), __exception_result_var_b497);
            come_call_finalizer3(right_value345,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value346,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional419=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 970, 3976)), "20method.c", 970, 3977))->p, "20method.c", 970, 3978))==44,            _if_conditional419) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 971, 3979)), "20method.c", 971, 3980))->p++;
                (come_push_stackframe("20method.c", 972,3981),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                if(_if_conditional420=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 974, 3982)), "20method.c", 974, 3983))->p, "20method.c", 974, 3984))==41,                _if_conditional420) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 975, 3985)), "20method.c", 975, 3986))->p++;
                    (come_push_stackframe("20method.c", 976,3987),skip_spaces_and_lf(info),come_pop_stackframe());
                    label_375 = come_decrement_ref_count2(label_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_375 = come_decrement_ref_count2(label_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_377) { node_377 = come_decrement_ref_count2(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __dec_obj106=method_block_378;
    method_block_378=((void*)0);
    come_call_finalizer3(__dec_obj106,buffer_finalize, 0, 0, 0, 0, (void*)0);
    method_block_sline_379=0;
    if(_if_conditional421=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 984, 3988)), "20method.c", 984, 3989))->p, "20method.c", 984, 3990))==123,    _if_conditional421) {
        head_380=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 985, 3991)), "20method.c", 985, 3992))->p;
        method_block_sline_379=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 986, 3993)), "20method.c", 986, 3994))->sline;
        (come_push_stackframe("20method.c", 988, 3995),__exception_result_var_b498=((char*)(right_value347=skip_block(info))), come_pop_stackframe(), __exception_result_var_b498);
        right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_381=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 990, 3996)), "20method.c", 990, 3997))->p;
        __dec_obj107=method_block_378;
        method_block_378=(struct buffer*)come_increment_ref_count((come_push_stackframe("20method.c", 992, 3999),__exception_result_var_b499=((struct buffer*)(right_value349=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value348=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 992, "buffer"))), "20method.c", 992, 3998)))))), come_pop_stackframe(), __exception_result_var_b499));
        come_call_finalizer3(__dec_obj107,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value348,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value349,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        len_382=tail_381-head_380;
        mem_383=(char*)come_increment_ref_count(((char*)(right_value350=(char*)come_calloc(1, sizeof(char)*(1*(len_382+1)), "20method.c", 995, "char"))));
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("20method.c", 996, 4000),__exception_result_var_b500=memcpy(mem_383,head_380,len_382), come_pop_stackframe(), __exception_result_var_b500);
        ((char*)come_null_check(mem_383, "20method.c", 997, 4001))[len_382]=0;
        (come_push_stackframe("20method.c", 999, 4004),__exception_result_var_b501=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block_378, "20method.c", 999, 4002)), "20method.c", 999, 4003)),mem_383), come_pop_stackframe(), __exception_result_var_b501);
        (come_push_stackframe("20method.c", 1000, 4007),__exception_result_var_b502=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(method_block_378, "20method.c", 1000, 4005)), "20method.c", 1000, 4006)),"\n"), come_pop_stackframe(), __exception_result_var_b502);
        mem_383 = come_decrement_ref_count2(mem_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("20method.c", 1003,4008),parse_sharp_v5(info),come_pop_stackframe());
    if(_if_conditional422=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "20method.c", 1005, 4009)), "20method.c", 1005, 4010))->p, "20method.c", 1005, 4011))==60,    _if_conditional422) {
    }
    (come_push_stackframe("20method.c", 1008,4012),parse_sharp_v5(info),come_pop_stackframe());
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1010, "struct sNode");
    _inf_obj_value2=come_increment_ref_count((come_push_stackframe("20method.c", 1010, 4015),__exception_result_var_b504=((struct sMethodCallNode*)(right_value353=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)(right_value351=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1010, "sMethodCallNode"))), "20method.c", 1010, 4013))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=(come_push_stackframe("20method.c", 1010, 4014),__exception_result_var_b503=sNode_clone(obj), come_pop_stackframe(), __exception_result_var_b503)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_363),method_block_378,method_block_sline_379,method_generics_types_368,info))), come_pop_stackframe(), __exception_result_var_b504));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_384=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=_inf_value2)));
    come_call_finalizer3(right_value351,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(right_value353,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=node_384;
    node_384=(struct sNode*)come_increment_ref_count((come_push_stackframe("20method.c", 1012, 4090),__exception_result_var_b511=((struct sNode*)(right_value362=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_384),info))), come_pop_stackframe(), __exception_result_var_b511));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result227__ = __result_obj__ = node_384;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_363,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result227__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_363,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_378,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj101;
struct sNode* __dec_obj102;
struct tuple2$2charphsNodeph* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj101=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 3855)), "./neo-c.h", 1744, 3856))->v1;
        ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 3855)), "./neo-c.h", 1744, 3856))->v1=(char*)come_increment_ref_count(v1);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj102=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 3857)), "./neo-c.h", 1745, 3858))->v2;
        ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 3857)), "./neo-c.h", 1745, 3858))->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
        __result224__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result224__;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional412;
_Bool _if_conditional413;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional412=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3918)), "tuple3$3sTypephcharphboolp_finalize", 0, 3919))->v1!=((void*)0),                            _if_conditional412) {
                                come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3920)), "tuple3$3sTypephcharphboolp_finalize", 0, 3921))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional413=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3922)), "tuple3$3sTypephcharphboolp_finalize", 1, 3923))->v2!=((void*)0),                            _if_conditional413) {
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3924)), "tuple3$3sTypephcharphboolp_finalize", 1, 3925))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3924)), "tuple3$3sTypephcharphboolp_finalize", 1, 3925))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional423=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0, 4016)), "sMethodCallNode_finalize", 0, 4017))->sname!=((void*)0),        _if_conditional423) {
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0, 4018)), "sMethodCallNode_finalize", 0, 4019))->sname = come_decrement_ref_count2(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 0, 4018)), "sMethodCallNode_finalize", 0, 4019))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional424=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4020)), "sMethodCallNode_finalize", 1, 4021))->obj!=((void*)0),        _if_conditional424) {
            if(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4022)), "sMethodCallNode_finalize", 1, 4023))->obj) { ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4022)), "sMethodCallNode_finalize", 1, 4023))->obj = come_decrement_ref_count2(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4022)), "sMethodCallNode_finalize", 1, 4023))->obj, ((struct sNode*)((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4022)), "sMethodCallNode_finalize", 1, 4023))->obj)->finalize, ((struct sNode*)((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 1, 4022)), "sMethodCallNode_finalize", 1, 4023))->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(_if_conditional425=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2, 4024)), "sMethodCallNode_finalize", 2, 4025))->fun_name!=((void*)0),        _if_conditional425) {
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2, 4026)), "sMethodCallNode_finalize", 2, 4027))->fun_name = come_decrement_ref_count2(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 2, 4026)), "sMethodCallNode_finalize", 2, 4027))->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional426=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3, 4028)), "sMethodCallNode_finalize", 3, 4029))->params!=((void*)0),        _if_conditional426) {
            come_call_finalizer3(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 3, 4030)), "sMethodCallNode_finalize", 3, 4031))->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional427=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4, 4032)), "sMethodCallNode_finalize", 4, 4033))->method_block!=((void*)0),        _if_conditional427) {
            come_call_finalizer3(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 4, 4034)), "sMethodCallNode_finalize", 4, 4035))->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional428=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 5, 4036)), "sMethodCallNode_finalize", 5, 4037))->method_generics_types!=((void*)0),        _if_conditional428) {
            come_call_finalizer3(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_finalize", 5, 4038)), "sMethodCallNode_finalize", 5, 4039))->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
_Bool _if_conditional429;
struct sMethodCallNode* __result225__;
void* right_value354;
struct sMethodCallNode* result_385;
_Bool _if_conditional430;
_Bool _if_conditional431;
char* __exception_result_var_b505;
void* right_value355;
char* __dec_obj108;
_Bool _if_conditional432;
struct sNode* __exception_result_var_b506;
void* right_value356;
struct sNode* __dec_obj109;
_Bool _if_conditional433;
char* __exception_result_var_b507;
void* right_value357;
char* __dec_obj110;
_Bool _if_conditional434;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b508;
void* right_value358;
struct list$1tuple2$2charphsNodephph* __dec_obj111;
_Bool _if_conditional435;
struct buffer* __exception_result_var_b509;
void* right_value359;
struct buffer* __dec_obj112;
_Bool _if_conditional436;
_Bool _if_conditional437;
struct list$1sTypeph* __exception_result_var_b510;
void* right_value360;
struct list$1sTypeph* __dec_obj113;
struct sMethodCallNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
memset(&result_385, 0, sizeof(struct sMethodCallNode*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
        if(_if_conditional429=self==(void*)0,        _if_conditional429) {
            __result225__ = __result_obj__ = (void*)0;
            return __result225__;
        }
        result_385=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value354=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        come_call_finalizer3(right_value354,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional430=self!=((void*)0),        _if_conditional430) {
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 4, 4040)), "sMethodCallNode_clone", 4, 4041))->sline=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 4, 4042)), "sMethodCallNode_clone", 4, 4043))->sline;
        }
        if(_if_conditional431=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5, 4044)), "sMethodCallNode_clone", 5, 4045))->sname!=((void*)0),        _if_conditional431) {
            __dec_obj108=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 5, 4046)), "sMethodCallNode_clone", 5, 4047))->sname;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 5, 4046)), "sMethodCallNode_clone", 5, 4047))->sname=(char*)come_increment_ref_count(((char*)(right_value355=(come_push_stackframe("sMethodCallNode_clone", 5, 4050),__exception_result_var_b505=string_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 5, 4048)), "sMethodCallNode_clone", 5, 4049))->sname), come_pop_stackframe(), __exception_result_var_b505))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional432=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6, 4051)), "sMethodCallNode_clone", 6, 4052))->obj!=((void*)0),        _if_conditional432) {
            __dec_obj109=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 6, 4053)), "sMethodCallNode_clone", 6, 4054))->obj;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 6, 4053)), "sMethodCallNode_clone", 6, 4054))->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=(come_push_stackframe("sMethodCallNode_clone", 6, 4057),__exception_result_var_b506=sNode_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 6, 4055)), "sMethodCallNode_clone", 6, 4056))->obj), come_pop_stackframe(), __exception_result_var_b506))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional433=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7, 4058)), "sMethodCallNode_clone", 7, 4059))->fun_name!=((void*)0),        _if_conditional433) {
            __dec_obj110=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 7, 4060)), "sMethodCallNode_clone", 7, 4061))->fun_name;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 7, 4060)), "sMethodCallNode_clone", 7, 4061))->fun_name=(char*)come_increment_ref_count(((char*)(right_value357=(come_push_stackframe("sMethodCallNode_clone", 7, 4064),__exception_result_var_b507=string_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 7, 4062)), "sMethodCallNode_clone", 7, 4063))->fun_name), come_pop_stackframe(), __exception_result_var_b507))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional434=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8, 4065)), "sMethodCallNode_clone", 8, 4066))->params!=((void*)0),        _if_conditional434) {
            __dec_obj111=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 8, 4067)), "sMethodCallNode_clone", 8, 4068))->params;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 8, 4067)), "sMethodCallNode_clone", 8, 4068))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value358=(come_push_stackframe("sMethodCallNode_clone", 8, 4071),__exception_result_var_b508=list$1tuple2$2charphsNodephphp_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 8, 4069)), "sMethodCallNode_clone", 8, 4070))->params), come_pop_stackframe(), __exception_result_var_b508))));
            come_call_finalizer3(__dec_obj111,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value358,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional435=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9, 4072)), "sMethodCallNode_clone", 9, 4073))->method_block!=((void*)0),        _if_conditional435) {
            __dec_obj112=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 9, 4074)), "sMethodCallNode_clone", 9, 4075))->method_block;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 9, 4074)), "sMethodCallNode_clone", 9, 4075))->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value359=(come_push_stackframe("sMethodCallNode_clone", 9, 4078),__exception_result_var_b509=buffer_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 9, 4076)), "sMethodCallNode_clone", 9, 4077))->method_block), come_pop_stackframe(), __exception_result_var_b509))));
            come_call_finalizer3(__dec_obj112,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value359,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional436=self!=((void*)0),        _if_conditional436) {
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 10, 4079)), "sMethodCallNode_clone", 10, 4080))->method_block_sline=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 10, 4081)), "sMethodCallNode_clone", 10, 4082))->method_block_sline;
        }
        if(_if_conditional437=self!=((void*)0)&&((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 11, 4083)), "sMethodCallNode_clone", 11, 4084))->method_generics_types!=((void*)0),        _if_conditional437) {
            __dec_obj113=((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 11, 4085)), "sMethodCallNode_clone", 11, 4086))->method_generics_types;
            ((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(result_385, "sMethodCallNode_clone", 11, 4085)), "sMethodCallNode_clone", 11, 4086))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value360=(come_push_stackframe("sMethodCallNode_clone", 11, 4089),__exception_result_var_b510=list$1sTypephp_clone(((struct sMethodCallNode*)come_null_check(((struct sMethodCallNode*)come_null_check(self, "sMethodCallNode_clone", 11, 4087)), "sMethodCallNode_clone", 11, 4088))->method_generics_types), come_pop_stackframe(), __exception_result_var_b510))));
            come_call_finalizer3(__dec_obj113,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value360,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result226__ = __result_obj__ = result_385;
        come_call_finalizer3(result_385,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result226__;
        come_call_finalizer3(result_385,sMethodCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b512;
_Bool _if_conditional438;
void* right_value363;
void* right_value364;
struct sCurrentNode* __exception_result_var_b513;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value367;
struct sNode* __result230__;
void* right_value368;
struct sNode* __exception_result_var_b515;
struct sNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
    if(_if_conditional438=(come_push_stackframe("20method.c", 1019, 4091),__exception_result_var_b512=charp_operator_equals(buf,"__current__"), come_pop_stackframe(), __exception_result_var_b512),    _if_conditional438) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1020, "struct sNode");
        _inf_obj_value3=come_increment_ref_count((come_push_stackframe("20method.c", 1020, 4093),__exception_result_var_b513=((struct sCurrentNode*)(right_value364=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)(right_value363=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1020, "sCurrentNode"))), "20method.c", 1020, 4092))),info))), come_pop_stackframe(), __exception_result_var_b513));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result230__ = __result_obj__ = ((struct sNode*)(right_value367=_inf_value3));
        come_call_finalizer3(right_value363,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value364,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result230__;
    }
    __result231__ = __result_obj__ = (come_push_stackframe("20method.c", 1023, 4109),__exception_result_var_b515=((struct sNode*)(right_value368=string_node_v17(buf,head,head_sline,info))), come_pop_stackframe(), __exception_result_var_b515);
    if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result231__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional439;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional439=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0, 4094)), "sCurrentNode_finalize", 0, 4095))->sname!=((void*)0),            _if_conditional439) {
                ((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0, 4096)), "sCurrentNode_finalize", 0, 4097))->sname = come_decrement_ref_count2(((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_finalize", 0, 4096)), "sCurrentNode_finalize", 0, 4097))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
_Bool _if_conditional440;
struct sCurrentNode* __result228__;
void* right_value365;
struct sCurrentNode* result_386;
_Bool _if_conditional441;
_Bool _if_conditional442;
char* __exception_result_var_b514;
void* right_value366;
char* __dec_obj115;
struct sCurrentNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
memset(&result_386, 0, sizeof(struct sCurrentNode*));
right_value366 = (void*)0;
            if(_if_conditional440=self==(void*)0,            _if_conditional440) {
                __result228__ = __result_obj__ = (void*)0;
                return __result228__;
            }
            result_386=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value365=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            come_call_finalizer3(right_value365,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional441=self!=((void*)0),            _if_conditional441) {
                ((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(result_386, "sCurrentNode_clone", 4, 4098)), "sCurrentNode_clone", 4, 4099))->sline=((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 4, 4100)), "sCurrentNode_clone", 4, 4101))->sline;
            }
            if(_if_conditional442=self!=((void*)0)&&((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5, 4102)), "sCurrentNode_clone", 5, 4103))->sname!=((void*)0),            _if_conditional442) {
                __dec_obj115=((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(result_386, "sCurrentNode_clone", 5, 4104)), "sCurrentNode_clone", 5, 4105))->sname;
                ((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(result_386, "sCurrentNode_clone", 5, 4104)), "sCurrentNode_clone", 5, 4105))->sname=(char*)come_increment_ref_count(((char*)(right_value366=(come_push_stackframe("sCurrentNode_clone", 5, 4108),__exception_result_var_b514=string_clone(((struct sCurrentNode*)come_null_check(((struct sCurrentNode*)come_null_check(self, "sCurrentNode_clone", 5, 4106)), "sCurrentNode_clone", 5, 4107))->sname), come_pop_stackframe(), __exception_result_var_b514))));
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result229__ = __result_obj__ = result_386;
            come_call_finalizer3(result_386,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result229__;
            come_call_finalizer3(result_386,sCurrentNode_finalize, 0, 0, 0, 0, (void*)0);
}

