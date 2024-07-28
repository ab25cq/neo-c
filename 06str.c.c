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
    _Bool quote;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

char* sStrNode_kind(struct sStrNode* self);

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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

char* sCharNode_kind(struct sCharNode* self);

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);

char* sWCharNode_kind(struct sWCharNode* self);

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

char* sWStringNode_kind(struct sWStringNode* self);

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

char* sRegexNode_kind(struct sRegexNode* self);

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

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

char* sTupleNode_kind(struct sTupleNode* self);

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
void* right_value80;
char* __exception_result_var_b52;
char* __dec_obj12;
struct sStrNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    (come_push_stackframe("06str.c", 8, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "06str.c", 8, 573)), "06str.c", 8, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sStrNode*)come_null_check(self, "06str.c", 10, 580))->value;
    ((struct sStrNode*)come_null_check(self, "06str.c", 10, 580))->value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 10, 581),__exception_result_var_b52=((char*)(right_value80=__builtin_string(value))), come_pop_stackframe(), __exception_result_var_b52));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__;
void* right_value81;
char* __exception_result_var_b53;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result53__ = __result_obj__ = (come_push_stackframe("06str.c", 15, 590),__exception_result_var_b53=((char*)(right_value81=__builtin_string("sStrNode"))), come_pop_stackframe(), __exception_result_var_b53);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value82;
struct CVALUE* come_value_47;
void* right_value83;
char* __exception_result_var_b54;
char* __dec_obj13;
void* right_value84;
void* right_value85;
struct sType* __exception_result_var_b55;
struct sType* __dec_obj14;
struct list$1CVALUEph* __exception_result_var_b56;
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 20, "CVALUE"))));
    come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj13=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 22, 679)), "06str.c", 22, 680))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 22, 679)), "06str.c", 22, 680))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 22, 683),__exception_result_var_b54=((char*)(right_value83=xsprintf("\"%s\"",((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "06str.c", 22, 681)), "06str.c", 22, 682))->value))), come_pop_stackframe(), __exception_result_var_b54));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj14=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 23, 684)), "06str.c", 23, 685))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 23, 684)), "06str.c", 23, 685))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 23, 687),__exception_result_var_b55=((struct sType*)(right_value85=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value84=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 23, "sType"))), "06str.c", 23, 686))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b55));
    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value84,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 25, 688)), "06str.c", 25, 689))->var=((void*)0);
    (come_push_stackframe("06str.c", 27, 742),__exception_result_var_b56=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 27, 690)), "06str.c", 27, 691))->stack, "06str.c", 27, 692)), "06str.c", 27, 693)),(struct CVALUE*)come_increment_ref_count(come_value_47)), come_pop_stackframe(), __exception_result_var_b56);
    (come_push_stackframe("06str.c", 29,745),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_47, "06str.c", 29, 743)), "06str.c", 29, 744))->c_value),come_pop_stackframe());
    __result55__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional22=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 591)), "CVALUE_finalize", 0, 592))->c_value!=((void*)0),        _if_conditional22) {
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 593)), "CVALUE_finalize", 0, 594))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 593)), "CVALUE_finalize", 0, 594))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional23=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 595)), "CVALUE_finalize", 1, 596))->type!=((void*)0),        _if_conditional23) {
            come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 597)), "CVALUE_finalize", 1, 598))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
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
                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 599)), "sType_finalize", 0, 600))->mMultipleTypes!=((void*)0),                _if_conditional24) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 601)), "sType_finalize", 0, 602))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 611)), "sType_finalize", 1, 612))->mNoSolvedGenericsType!=((void*)0),                _if_conditional26) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 613)), "sType_finalize", 1, 614))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 619)), "sType_finalize", 2, 620))->mOriginalLoadVarType!=((void*)0),                _if_conditional28) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 621)), "sType_finalize", 2, 622))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 623)), "sType_finalize", 3, 624))->mGenericsName!=((void*)0),                _if_conditional29) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 625)), "sType_finalize", 3, 626))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 625)), "sType_finalize", 3, 626))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 627)), "sType_finalize", 4, 628))->mGenericsTypes!=((void*)0),                _if_conditional30) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 629)), "sType_finalize", 4, 630))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 631)), "sType_finalize", 5, 632))->mArrayNum!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 633)), "sType_finalize", 5, 634))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 643)), "sType_finalize", 6, 644))->mParamTypes!=((void*)0),                _if_conditional33) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 645)), "sType_finalize", 6, 646))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 647)), "sType_finalize", 7, 648))->mParamNames!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 649)), "sType_finalize", 7, 650))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 659)), "sType_finalize", 8, 660))->mResultType!=((void*)0),                _if_conditional36) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 661)), "sType_finalize", 8, 662))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 663)), "sType_finalize", 9, 664))->mAlignas!=((void*)0),                _if_conditional37) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 665)), "sType_finalize", 9, 666))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 665)), "sType_finalize", 9, 666))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 665)), "sType_finalize", 9, 666))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 665)), "sType_finalize", 9, 666))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 665)), "sType_finalize", 9, 666))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 667)), "sType_finalize", 10, 668))->mSizeNum!=((void*)0),                _if_conditional38) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 669)), "sType_finalize", 10, 670))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 669)), "sType_finalize", 10, 670))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 669)), "sType_finalize", 10, 670))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 669)), "sType_finalize", 10, 670))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 669)), "sType_finalize", 10, 670))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 671)), "sType_finalize", 11, 672))->mOriginalTypeName!=((void*)0),                _if_conditional39) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 673)), "sType_finalize", 11, 674))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 673)), "sType_finalize", 11, 674))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 675)), "sType_finalize", 12, 676))->mAsmName!=((void*)0),                _if_conditional40) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 677)), "sType_finalize", 12, 678))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 677)), "sType_finalize", 12, 678))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                        it_48=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 603)), "./neo-c.h", 120, 604))->head;
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            prev_it_49=it_48;
                            it_48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_48, "./neo-c.h", 123, 605)), "./neo-c.h", 123, 606))->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional25=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 607)), "list_item$1sTypephp_finalize", 0, 608))->item!=((void*)0),                                _if_conditional25) {
                                    come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 609)), "list_item$1sTypephp_finalize", 0, 610))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional27=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 615)), "tuple1$1sTypephp_finalize", 0, 616))->v1!=((void*)0),                        _if_conditional27) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 617)), "tuple1$1sTypephp_finalize", 0, 618))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        it_50=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 635)), "./neo-c.h", 120, 636))->head;
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            prev_it_51=it_50;
                            it_50=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_50, "./neo-c.h", 123, 637)), "./neo-c.h", 123, 638))->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional32=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 639)), "list_item$1sNodephp_finalize", 0, 640))->item!=((void*)0),                                _if_conditional32) {
                                    if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 641)), "list_item$1sNodephp_finalize", 0, 642))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 641)), "list_item$1sNodephp_finalize", 0, 642))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 641)), "list_item$1sNodephp_finalize", 0, 642))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 641)), "list_item$1sNodephp_finalize", 0, 642))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 641)), "list_item$1sNodephp_finalize", 0, 642))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                        it_52=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 651)), "./neo-c.h", 120, 652))->head;
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            prev_it_53=it_52;
                            it_52=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_52, "./neo-c.h", 123, 653)), "./neo-c.h", 123, 654))->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional35=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 655)), "list_item$1charphp_finalize", 0, 656))->item!=((void*)0),                                _if_conditional35) {
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 657)), "list_item$1charphp_finalize", 0, 658))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 657)), "list_item$1charphp_finalize", 0, 658))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value86;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj15;
_Bool _if_conditional43;
void* right_value87;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj16;
void* right_value88;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
right_value88 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional41=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 694)), "./neo-c.h", 222, 695))->len==0,        _if_conditional41) {
            litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value86,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_54, "./neo-c.h", 225, 700)), "./neo-c.h", 225, 701))->prev=((void*)0);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_54, "./neo-c.h", 226, 702)), "./neo-c.h", 226, 703))->next=((void*)0);
            __dec_obj15=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_54, "./neo-c.h", 227, 704)), "./neo-c.h", 227, 705))->item;
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_54, "./neo-c.h", 227, 704)), "./neo-c.h", 227, 705))->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 706)), "./neo-c.h", 229, 707))->tail=litem_54;
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 708)), "./neo-c.h", 230, 709))->head=litem_54;
        }
        else {
            if(_if_conditional43=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 710)), "./neo-c.h", 232, 711))->len==1,            _if_conditional43) {
                litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_55, "./neo-c.h", 235, 712)), "./neo-c.h", 235, 713))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 714)), "./neo-c.h", 235, 715))->head;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_55, "./neo-c.h", 236, 716)), "./neo-c.h", 236, 717))->next=((void*)0);
                __dec_obj16=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_55, "./neo-c.h", 237, 718)), "./neo-c.h", 237, 719))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_55, "./neo-c.h", 237, 718)), "./neo-c.h", 237, 719))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 720)), "./neo-c.h", 239, 721))->tail=litem_55;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 722)), "./neo-c.h", 240, 723))->head, "./neo-c.h", 240, 724)), "./neo-c.h", 240, 725))->next=litem_55;
            }
            else {
                litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value88,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_56, "./neo-c.h", 245, 726)), "./neo-c.h", 245, 727))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 728)), "./neo-c.h", 245, 729))->tail;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_56, "./neo-c.h", 246, 730)), "./neo-c.h", 246, 731))->next=((void*)0);
                __dec_obj17=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_56, "./neo-c.h", 247, 732)), "./neo-c.h", 247, 733))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_56, "./neo-c.h", 247, 732)), "./neo-c.h", 247, 733))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 734)), "./neo-c.h", 249, 735))->tail, "./neo-c.h", 249, 736)), "./neo-c.h", 249, 737))->next=litem_56;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 738)), "./neo-c.h", 250, 739))->tail=litem_56;
            }
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 740)), "./neo-c.h", 253, 741))->len++;
        __result54__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional42;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional42=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 696)), "list_item$1CVALUEphp_finalize", 0, 697))->item!=((void*)0),                _if_conditional42) {
                    come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 698)), "list_item$1CVALUEphp_finalize", 0, 699))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value89;
struct sNodeBase* __exception_result_var_b57;
void* right_value90;
char* __exception_result_var_b58;
char* __dec_obj18;
struct list$1sNodeph* __exception_result_var_b62;
void* right_value98;
struct list$1sNodeph* __dec_obj22;
struct sSStringNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value98 = (void*)0;
    (come_push_stackframe("06str.c", 39, 748),__exception_result_var_b57=((struct sNodeBase*)(right_value89=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 39, 746)), "06str.c", 39, 747))),info))), come_pop_stackframe(), __exception_result_var_b57);
    come_call_finalizer3(right_value89,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj18=((struct sSStringNode*)come_null_check(self, "06str.c", 41, 749))->value;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 41, 749))->value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 41, 750),__exception_result_var_b58=((char*)(right_value90=__builtin_string(value))), come_pop_stackframe(), __exception_result_var_b58));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj22=((struct sSStringNode*)come_null_check(self, "06str.c", 42, 751))->exps;
    ((struct sSStringNode*)come_null_check(self, "06str.c", 42, 751))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=(come_push_stackframe("06str.c", 42, 849),__exception_result_var_b62=list$1sNodephp_clone(exps), come_pop_stackframe(), __exception_result_var_b62))));
    come_call_finalizer3(__dec_obj22,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result62__ = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result62__;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__;
void* right_value99;
char* __exception_result_var_b63;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result63__ = __result_obj__ = (come_push_stackframe("06str.c", 47, 866),__exception_result_var_b63=((char*)(right_value99=__builtin_string("sSStringNode"))), come_pop_stackframe(), __exception_result_var_b63);
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result63__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
struct CVALUE* come_value_65;
void* right_value101;
void* right_value102;
struct buffer* __exception_result_var_b64;
struct buffer* buf_66;
struct buffer* __exception_result_var_b65;
struct buffer* __exception_result_var_b66;
struct buffer* __exception_result_var_b67;
int __exception_result_var_b68;
_Bool _if_conditional60;
struct list$1sNodeph* o2_saved_67;
struct sNode* __exception_result_var_b71;
struct sNode* it_70;
_Bool __exception_result_var_b72;
struct sNode* __exception_result_var_b75;
_Bool __exception_result_var_b76;
_Bool _if_conditional65;
_Bool __result73__;
void* right_value103;
struct CVALUE* __exception_result_var_b77;
struct CVALUE* come_value_73;
void* right_value104;
char* __exception_result_var_b78;
char* method_name_74;
struct sFun* __exception_result_var_b81;
_Bool _if_conditional85;
struct sType* obj_type_77;
int __exception_result_var_b82;
_Bool _if_conditional87;
struct sType* obj_type2_78;
void* right_value105;
char* __exception_result_var_b83;
void* right_value106;
char* __exception_result_var_b84;
char* __dec_obj23;
void* right_value107;
void* right_value108;
struct buffer* __exception_result_var_b85;
struct buffer* buf2_79;
struct buffer* __exception_result_var_b86;
struct buffer* __exception_result_var_b87;
struct buffer* __exception_result_var_b88;
struct buffer* __exception_result_var_b89;
void* right_value109;
void* right_value110;
struct sType* __exception_result_var_b90;
struct sType* type_80;
void* right_value111;
char* __exception_result_var_b91;
void* right_value112;
char* __exception_result_var_b92;
char* c_value_81;
struct buffer* __exception_result_var_b93;
struct buffer* __exception_result_var_b94;
struct buffer* __exception_result_var_b95;
void* right_value113;
void* right_value114;
struct sType* __exception_result_var_b96;
struct sType* type2_82;
void* right_value115;
char* __exception_result_var_b97;
char* __dec_obj24;
void* right_value116;
char* __exception_result_var_b98;
char* __dec_obj25;
struct sType* __exception_result_var_b119;
void* right_value145;
struct sType* __dec_obj46;
struct list$1CVALUEph* __exception_result_var_b120;
_Bool __result92__;
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
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 52, "CVALUE"))));
    come_call_finalizer3(right_value100,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    buf_66=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 54, 868),__exception_result_var_b64=((struct buffer*)(right_value102=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value101=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 54, "buffer"))), "06str.c", 54, 867)))))), come_pop_stackframe(), __exception_result_var_b64));
    come_call_finalizer3(right_value101,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value102,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 56, 871),__exception_result_var_b65=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 56, 869)), "06str.c", 56, 870)),"xsprintf(\""), come_pop_stackframe(), __exception_result_var_b65);
    (come_push_stackframe("06str.c", 57, 876),__exception_result_var_b66=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 57, 872)), "06str.c", 57, 873)),((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 57, 874)), "06str.c", 57, 875))->value), come_pop_stackframe(), __exception_result_var_b66);
    (come_push_stackframe("06str.c", 58, 879),__exception_result_var_b67=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 58, 877)), "06str.c", 58, 878)),"\""), come_pop_stackframe(), __exception_result_var_b67);
    if(_if_conditional60=(come_push_stackframe("06str.c", 60, 886),__exception_result_var_b68=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 60, 880)), "06str.c", 60, 881))->exps, "06str.c", 60, 882)), "06str.c", 60, 883))), come_pop_stackframe(), __exception_result_var_b68)>0,    _if_conditional60) {
        for(        o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "06str.c", 61, 887)), "06str.c", 61, 888))->exps)),it_70=(come_push_stackframe("06str.c", 61, 903),__exception_result_var_b71=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_67), "06str.c", 61, 889)), "06str.c", 61, 890))), come_pop_stackframe(), __exception_result_var_b71);        !(come_push_stackframe("06str.c", 61, 908),__exception_result_var_b72=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_67), "06str.c", 61, 904)), "06str.c", 61, 905))), come_pop_stackframe(), __exception_result_var_b72);        it_70=(come_push_stackframe("06str.c", 61, 927),__exception_result_var_b75=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_67), "06str.c", 61, 909)), "06str.c", 61, 910))), come_pop_stackframe(), __exception_result_var_b75)        ){
            if(_if_conditional65=!(come_push_stackframe("06str.c", 62, 928),__exception_result_var_b76=node_compile(it_70,info), come_pop_stackframe(), __exception_result_var_b76),            _if_conditional65) {
                __result73__ = (_Bool)0;
                come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result73__;
            }
            come_value_73=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 66, 929),__exception_result_var_b77=((struct CVALUE*)(right_value103=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b77));
            come_call_finalizer3(right_value103,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("06str.c", 67,930),dec_stack_ptr(1,info),come_pop_stackframe());
            method_name_74=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 69, 933),__exception_result_var_b78=((char*)(right_value104=create_method_name(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "06str.c", 69, 931)), "06str.c", 69, 932))->type,(_Bool)0,"to_string",info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b78));
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional85=(come_push_stackframe("06str.c", 71, 1017),__exception_result_var_b81=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 71, 934)), "06str.c", 71, 935))->funcs, "06str.c", 71, 936)), "06str.c", 71, 937)),method_name_74,((void*)0)), come_pop_stackframe(), __exception_result_var_b81)==((void*)0),            _if_conditional85) {
                obj_type_77=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "06str.c", 72, 1018)), "06str.c", 72, 1019))->type, "06str.c", 72, 1020)), "06str.c", 72, 1021))->mNoSolvedGenericsType, "06str.c", 72, 1022)), "06str.c", 72, 1023))->v1;
                if(_if_conditional87=obj_type_77&&(come_push_stackframe("06str.c", 73, 1030),__exception_result_var_b82=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type_77, "06str.c", 73, 1024)), "06str.c", 73, 1025))->mGenericsTypes, "06str.c", 73, 1026)), "06str.c", 73, 1027))), come_pop_stackframe(), __exception_result_var_b82)>0,                _if_conditional87) {
                    obj_type2_78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "06str.c", 74, 1031)), "06str.c", 74, 1032))->type;
                    __dec_obj23=method_name_74;
                    method_name_74=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 75, 1034),__exception_result_var_b84=((char*)(right_value106=make_generics_function(obj_type2_78,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 75, 1033),__exception_result_var_b83=((char*)(right_value105=__builtin_string("to_string"))), come_pop_stackframe(), __exception_result_var_b83)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b84));
                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    (come_push_stackframe("06str.c", 78,1041),err_msg(info,"require to_string implementation(%s)",((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "06str.c", 78, 1035)), "06str.c", 78, 1036))->type, "06str.c", 78, 1037)), "06str.c", 78, 1038))->mClass, "06str.c", 78, 1039)), "06str.c", 78, 1040))->mName),come_pop_stackframe());
                    (come_push_stackframe("06str.c", 79,1042),exit(1),come_pop_stackframe());
                }
            }
            buf2_79=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 83, 1044),__exception_result_var_b85=((struct buffer*)(right_value108=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value107=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 83, "buffer"))), "06str.c", 83, 1043)))))), come_pop_stackframe(), __exception_result_var_b85));
            come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value108,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("06str.c", 85, 1047),__exception_result_var_b86=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_79, "06str.c", 85, 1045)), "06str.c", 85, 1046)),method_name_74), come_pop_stackframe(), __exception_result_var_b86);
            (come_push_stackframe("06str.c", 86, 1050),__exception_result_var_b87=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_79, "06str.c", 86, 1048)), "06str.c", 86, 1049)),"("), come_pop_stackframe(), __exception_result_var_b87);
            (come_push_stackframe("06str.c", 87, 1055),__exception_result_var_b88=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_79, "06str.c", 87, 1051)), "06str.c", 87, 1052)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_73, "06str.c", 87, 1053)), "06str.c", 87, 1054))->c_value), come_pop_stackframe(), __exception_result_var_b88);
            (come_push_stackframe("06str.c", 88, 1058),__exception_result_var_b89=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_79, "06str.c", 88, 1056)), "06str.c", 88, 1057)),")"), come_pop_stackframe(), __exception_result_var_b89);
            type_80=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 90, 1060),__exception_result_var_b90=((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 90, "sType"))), "06str.c", 90, 1059))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b90));
            come_call_finalizer3(right_value109,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value110,sType_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct sType*)come_null_check(((struct sType*)come_null_check(type_80, "06str.c", 91, 1061)), "06str.c", 91, 1062))->mHeap=(_Bool)1;
            c_value_81=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 93, 1066),__exception_result_var_b92=((char*)(right_value112=append_object_to_right_values((come_push_stackframe("06str.c", 93, 1065),__exception_result_var_b91=((char*)(right_value111=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf2_79, "06str.c", 93, 1063)), "06str.c", 93, 1064))))), come_pop_stackframe(), __exception_result_var_b91),(struct sType*)come_increment_ref_count(type_80),info))), come_pop_stackframe(), __exception_result_var_b92));
            right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("06str.c", 95, 1069),__exception_result_var_b93=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 95, 1067)), "06str.c", 95, 1068)),","), come_pop_stackframe(), __exception_result_var_b93);
            (come_push_stackframe("06str.c", 96, 1072),__exception_result_var_b94=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 96, 1070)), "06str.c", 96, 1071)),c_value_81), come_pop_stackframe(), __exception_result_var_b94);
            come_call_finalizer3(come_value_73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            method_name_74 = come_decrement_ref_count2(method_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_80,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_81 = come_decrement_ref_count2(c_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("06str.c", 100, 1075),__exception_result_var_b95=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 100, 1073)), "06str.c", 100, 1074)),")"), come_pop_stackframe(), __exception_result_var_b95);
    type2_82=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 102, 1077),__exception_result_var_b96=((struct sType*)(right_value114=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value113=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 102, "sType"))), "06str.c", 102, 1076))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b96));
    come_call_finalizer3(right_value113,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_82, "06str.c", 103, 1078)), "06str.c", 103, 1079))->mHeap=(_Bool)1;
    __dec_obj24=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 105, 1080)), "06str.c", 105, 1081))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 105, 1080)), "06str.c", 105, 1081))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 105, 1084),__exception_result_var_b97=((char*)(right_value115=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_66, "06str.c", 105, 1082)), "06str.c", 105, 1083))))), come_pop_stackframe(), __exception_result_var_b97));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj25=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 106, 1085)), "06str.c", 106, 1086))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 106, 1085)), "06str.c", 106, 1086))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 106, 1089),__exception_result_var_b98=((char*)(right_value116=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 106, 1087)), "06str.c", 106, 1088))->c_value,(struct sType*)come_increment_ref_count(type2_82),info))), come_pop_stackframe(), __exception_result_var_b98));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 107, 1090)), "06str.c", 107, 1091))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 107, 1090)), "06str.c", 107, 1091))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=(come_push_stackframe("06str.c", 107, 1500),__exception_result_var_b119=sType_clone(type2_82), come_pop_stackframe(), __exception_result_var_b119))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value145,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 108, 1501)), "06str.c", 108, 1502))->var=((void*)0);
    (come_push_stackframe("06str.c", 110, 1507),__exception_result_var_b120=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 110, 1503)), "06str.c", 110, 1504))->stack, "06str.c", 110, 1505)), "06str.c", 110, 1506)),(struct CVALUE*)come_increment_ref_count(come_value_65)), come_pop_stackframe(), __exception_result_var_b120);
    (come_push_stackframe("06str.c", 112,1510),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "06str.c", 112, 1508)), "06str.c", 112, 1509))->c_value),come_pop_stackframe());
    __result92__ = (_Bool)1;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sNodeph* __result56__;
void* right_value91;
void* right_value92;
struct list$1sNodeph* __exception_result_var_b59;
struct list$1sNodeph* result_57;
struct list_item$1sNodeph* it_58;
_Bool _while_condtional10;
struct sNode* __exception_result_var_b60;
void* right_value97;
struct list$1sNodeph* __exception_result_var_b61;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&result_57, 0, sizeof(struct list$1sNodeph*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
        if(_if_conditional44=self==((void*)0),        _if_conditional44) {
            __result56__ = __result_obj__ = ((void*)0);
            return __result56__;
        }
        result_57=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 760),__exception_result_var_b59=((struct list$1sNodeph*)(right_value92=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value91=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 752)), "./neo-c.h", 139, 753)))))), come_pop_stackframe(), __exception_result_var_b59));
        come_call_finalizer3(right_value91,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value92,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        it_58=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 761)), "./neo-c.h", 141, 762))->head;
        while(_while_condtional10=it_58!=((void*)0),        _while_condtional10) {
            (come_push_stackframe("./neo-c.h", 143, 846),__exception_result_var_b61=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_57, "./neo-c.h", 143, 763)), "./neo-c.h", 143, 764)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=(come_push_stackframe("./neo-c.h", 143, 845),__exception_result_var_b60=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_58, "./neo-c.h", 143, 809)), "./neo-c.h", 143, 810))->item), come_pop_stackframe(), __exception_result_var_b60))))), come_pop_stackframe(), __exception_result_var_b61);
            if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            it_58=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_58, "./neo-c.h", 145, 847)), "./neo-c.h", 145, 848))->next;
        }
        __result61__ = __result_obj__ = result_57;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result61__;
        come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 754)), "./neo-c.h", 101, 755))->head=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 756)), "./neo-c.h", 102, 757))->tail=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 758)), "./neo-c.h", 103, 759))->len=0;
            __result57__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result57__;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value93;
struct list_item$1sNodeph* litem_59;
struct sNode* __dec_obj19;
_Bool _if_conditional46;
void* right_value94;
struct list_item$1sNodeph* litem_60;
struct sNode* __dec_obj20;
void* right_value95;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sNodeph*));
right_value94 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sNodeph*));
right_value95 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional45=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 765)), "./neo-c.h", 152, 766))->len==0,                _if_conditional45) {
                    litem_59=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value93=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value93,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_59, "./neo-c.h", 155, 767)), "./neo-c.h", 155, 768))->prev=((void*)0);
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_59, "./neo-c.h", 156, 769)), "./neo-c.h", 156, 770))->next=((void*)0);
                    __dec_obj19=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_59, "./neo-c.h", 157, 771)), "./neo-c.h", 157, 772))->item;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_59, "./neo-c.h", 157, 771)), "./neo-c.h", 157, 772))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 773)), "./neo-c.h", 159, 774))->tail=litem_59;
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 775)), "./neo-c.h", 160, 776))->head=litem_59;
                }
                else {
                    if(_if_conditional46=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 777)), "./neo-c.h", 162, 778))->len==1,                    _if_conditional46) {
                        litem_60=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value94=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value94,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_60, "./neo-c.h", 165, 779)), "./neo-c.h", 165, 780))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 781)), "./neo-c.h", 165, 782))->head;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_60, "./neo-c.h", 166, 783)), "./neo-c.h", 166, 784))->next=((void*)0);
                        __dec_obj20=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_60, "./neo-c.h", 167, 785)), "./neo-c.h", 167, 786))->item;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_60, "./neo-c.h", 167, 785)), "./neo-c.h", 167, 786))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 787)), "./neo-c.h", 169, 788))->tail=litem_60;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 789)), "./neo-c.h", 170, 790))->head, "./neo-c.h", 170, 791)), "./neo-c.h", 170, 792))->next=litem_60;
                    }
                    else {
                        litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_61, "./neo-c.h", 175, 793)), "./neo-c.h", 175, 794))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 795)), "./neo-c.h", 175, 796))->tail;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_61, "./neo-c.h", 176, 797)), "./neo-c.h", 176, 798))->next=((void*)0);
                        __dec_obj21=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_61, "./neo-c.h", 177, 799)), "./neo-c.h", 177, 800))->item;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_61, "./neo-c.h", 177, 799)), "./neo-c.h", 177, 800))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 801)), "./neo-c.h", 179, 802))->tail, "./neo-c.h", 179, 803)), "./neo-c.h", 179, 804))->next=litem_61;
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 805)), "./neo-c.h", 180, 806))->tail=litem_61;
                    }
                }
                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 807)), "./neo-c.h", 183, 808))->len++;
                __result58__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result58__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional47;
struct sNode* __result59__;
void* right_value96;
struct sNode* result_62;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct sNode*));
                if(_if_conditional47=self==(void*)0,                _if_conditional47) {
                    __result59__ = __result_obj__ = (void*)0;
                    return __result59__;
                }
                result_62=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value96) { right_value96 = come_decrement_ref_count2(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(_if_conditional48=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 811)), "sNode_clone", 4, 812))->clone!=((void*)0),                _if_conditional48) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 4, 813)), "sNode_clone", 4, 814))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 815)), "sNode_clone", 4, 816))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 815)), "sNode_clone", 4, 816))->_protocol_obj);
                }
                if(_if_conditional49=self!=((void*)0),                _if_conditional49) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 5, 817)), "sNode_clone", 5, 818))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 819)), "sNode_clone", 5, 820))->finalize;
                }
                if(_if_conditional50=self!=((void*)0),                _if_conditional50) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 6, 821)), "sNode_clone", 6, 822))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 823)), "sNode_clone", 6, 824))->clone;
                }
                if(_if_conditional51=self!=((void*)0),                _if_conditional51) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 7, 825)), "sNode_clone", 7, 826))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 827)), "sNode_clone", 7, 828))->compile;
                }
                if(_if_conditional52=self!=((void*)0),                _if_conditional52) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 8, 829)), "sNode_clone", 8, 830))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 831)), "sNode_clone", 8, 832))->sline;
                }
                if(_if_conditional53=self!=((void*)0),                _if_conditional53) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 9, 833)), "sNode_clone", 9, 834))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 835)), "sNode_clone", 9, 836))->sname;
                }
                if(_if_conditional54=self!=((void*)0),                _if_conditional54) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 10, 837)), "sNode_clone", 10, 838))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 839)), "sNode_clone", 10, 840))->terminated;
                }
                if(_if_conditional55=self!=((void*)0),                _if_conditional55) {
                    ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_62, "sNode_clone", 11, 841)), "sNode_clone", 11, 842))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 843)), "sNode_clone", 11, 844))->kind;
                }
                __result60__ = __result_obj__ = result_62;
                if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result60__;
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
        it_63=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 850)), "./neo-c.h", 120, 851))->head;
        while(_while_condtional11=it_63!=((void*)0),        _while_condtional11) {
            prev_it_64=it_63;
            it_63=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 123, 852)), "./neo-c.h", 123, 853))->next;
            come_call_finalizer3(prev_it_64,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional59;
int __result64__;
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional59=self==((void*)0),        _if_conditional59) {
            __result64__ = 0;
            return __result64__;
        }
        __result65__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 884)), "./neo-c.h", 360, 885))->len;
        return __result65__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional61;
struct sNode* result_68;
void* __exception_result_var_b69;
struct sNode* __result66__;
_Bool _if_conditional62;
struct sNode* __result67__;
struct sNode* result_69;
void* __exception_result_var_b70;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
            if(_if_conditional61=self==((void*)0),            _if_conditional61) {
                (come_push_stackframe("./neo-c.h", 284, 891),__exception_result_var_b69=memset(&result_68,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b69);
                __result66__ = __result_obj__ = result_68;
                return __result66__;
            }
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 892)), "./neo-c.h", 287, 893))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 894)), "./neo-c.h", 287, 895))->head;
            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 896)), "./neo-c.h", 289, 897))->it) {
                __result67__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 898)), "./neo-c.h", 290, 899))->it, "./neo-c.h", 290, 900)), "./neo-c.h", 290, 901))->item;
                return __result67__;
            }
            (come_push_stackframe("./neo-c.h", 294, 902),__exception_result_var_b70=memset(&result_69,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b70);
            __result68__ = __result_obj__ = result_69;
            return __result68__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
            __result69__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 906)), "./neo-c.h", 317, 907))->it==((void*)0);
            return __result69__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional63;
struct sNode* result_71;
void* __exception_result_var_b73;
struct sNode* __result70__;
_Bool _if_conditional64;
struct sNode* __result71__;
struct sNode* result_72;
void* __exception_result_var_b74;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
            if(_if_conditional63=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 911)), "./neo-c.h", 299, 912))->it==((void*)0),            _if_conditional63) {
                (come_push_stackframe("./neo-c.h", 301, 913),__exception_result_var_b73=memset(&result_71,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b73);
                __result70__ = __result_obj__ = result_71;
                return __result70__;
            }
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 914)), "./neo-c.h", 305, 915))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 916)), "./neo-c.h", 305, 917))->it, "./neo-c.h", 305, 918)), "./neo-c.h", 305, 919))->next;
            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 920)), "./neo-c.h", 307, 921))->it) {
                __result71__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 922)), "./neo-c.h", 308, 923))->it, "./neo-c.h", 308, 924)), "./neo-c.h", 308, 925))->item;
                return __result71__;
            }
            (come_push_stackframe("./neo-c.h", 312, 926),__exception_result_var_b74=memset(&result_72,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b74);
            __result72__ = __result_obj__ = result_72;
            return __result72__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b79;
unsigned int hash_75;
unsigned int it_76;
_Bool _while_condtional12;
_Bool _if_conditional66;
_Bool __exception_result_var_b80;
_Bool _if_conditional67;
struct sFun* __result74__;
_Bool _if_conditional83;
_Bool _if_conditional84;
struct sFun* __result75__;
struct sFun* __result76__;
struct sFun* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&it_76, 0, sizeof(unsigned int));
                hash_75=(come_push_stackframe("./neo-c.h", 1207, 940),__exception_result_var_b79=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 938)), "./neo-c.h", 1207, 939))), come_pop_stackframe(), __exception_result_var_b79)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1207, 941)), "./neo-c.h", 1207, 942))->size;
                it_76=hash_75;
                while(_while_condtional12=(_Bool)1,                _while_condtional12) {
                    if(_if_conditional66=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1211, 943)), "./neo-c.h", 1211, 944))->item_existance, "./neo-c.h", 1211, 945))[it_76],                    _if_conditional66) {
                        if(_if_conditional67=(come_push_stackframe("./neo-c.h", 1213, 951),__exception_result_var_b80=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1213, 946)), "./neo-c.h", 1213, 947))->keys, "./neo-c.h", 1213, 948))[it_76], "./neo-c.h", 1213, 949)), "./neo-c.h", 1213, 950)),key), come_pop_stackframe(), __exception_result_var_b80),                        _if_conditional67) {
                            __result74__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1215, 952)), "./neo-c.h", 1215, 953))->items, "./neo-c.h", 1215, 954))[it_76];
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result74__;
                        }
                        it_76++;
                        if(_if_conditional83=it_76>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1220, 1015)), "./neo-c.h", 1220, 1016))->size,                        _if_conditional83) {
                            it_76=0;
                        }
                        else {
                            if(_if_conditional84=it_76==hash_75,                            _if_conditional84) {
                                __result75__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result75__;
                            }
                        }
                    }
                    else {
                        __result76__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result76__;
                    }
                }
                __result77__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result77__;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional68=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 955)), "sFun_finalize", 0, 956))->mName!=((void*)0),                                _if_conditional68) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 957)), "sFun_finalize", 0, 958))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 957)), "sFun_finalize", 0, 958))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional69=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 959)), "sFun_finalize", 1, 960))->mResultType!=((void*)0),                                _if_conditional69) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 961)), "sFun_finalize", 1, 962))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional70=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 963)), "sFun_finalize", 2, 964))->mParamTypes!=((void*)0),                                _if_conditional70) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 965)), "sFun_finalize", 2, 966))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional71=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 967)), "sFun_finalize", 3, 968))->mParamNames!=((void*)0),                                _if_conditional71) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 969)), "sFun_finalize", 3, 970))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional72=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 971)), "sFun_finalize", 4, 972))->mParamDefaultParametors!=((void*)0),                                _if_conditional72) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 973)), "sFun_finalize", 4, 974))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional73=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 975)), "sFun_finalize", 5, 976))->mLambdaType!=((void*)0),                                _if_conditional73) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 977)), "sFun_finalize", 5, 978))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional74=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 979)), "sFun_finalize", 6, 980))->mBlock!=((void*)0),                                _if_conditional74) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 981)), "sFun_finalize", 6, 982))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional77=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 991)), "sFun_finalize", 7, 992))->mSource!=((void*)0),                                _if_conditional77) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 993)), "sFun_finalize", 7, 994))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional78=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 995)), "sFun_finalize", 8, 996))->mSourceHead!=((void*)0),                                _if_conditional78) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 997)), "sFun_finalize", 8, 998))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional79=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 999)), "sFun_finalize", 9, 1000))->mSourceHead2!=((void*)0),                                _if_conditional79) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 1001)), "sFun_finalize", 9, 1002))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional80=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1003)), "sFun_finalize", 10, 1004))->mSourceDefer!=((void*)0),                                _if_conditional80) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 1005)), "sFun_finalize", 10, 1006))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional81=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1007)), "sFun_finalize", 11, 1008))->mComeHeader!=((void*)0),                                _if_conditional81) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1009)), "sFun_finalize", 11, 1010))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 1009)), "sFun_finalize", 11, 1010))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional82=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1011)), "sFun_finalize", 12, 1012))->mDeclareSName!=((void*)0),                                _if_conditional82) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1013)), "sFun_finalize", 12, 1014))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 1013)), "sFun_finalize", 12, 1014))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional75;
_Bool _if_conditional76;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional75=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 983)), "sBlock_finalize", 0, 984))->mNodes!=((void*)0),                                        _if_conditional75) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 985)), "sBlock_finalize", 0, 986))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional76=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 987)), "sBlock_finalize", 1, 988))->mVarTable!=((void*)0),                                        _if_conditional76) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 989)), "sBlock_finalize", 1, 990))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional86;
int __result78__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional86=self==((void*)0),                    _if_conditional86) {
                        __result78__ = 0;
                        return __result78__;
                    }
                    __result79__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 1028)), "./neo-c.h", 360, 1029))->len;
                    return __result79__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional88;
struct sType* __result80__;
void* right_value117;
struct sType* result_83;
_Bool _if_conditional89;
_Bool _if_conditional90;
struct list$1sTypeph* __exception_result_var_b102;
void* right_value124;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional94;
struct tuple1$1sTypeph* __exception_result_var_b104;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional98;
struct tuple1$1sTypeph* __exception_result_var_b105;
void* right_value128;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional99;
char* __exception_result_var_b106;
void* right_value129;
char* __dec_obj33;
_Bool _if_conditional100;
struct list$1sTypeph* __exception_result_var_b107;
void* right_value130;
struct list$1sTypeph* __dec_obj34;
_Bool _if_conditional101;
struct list$1sNodeph* __exception_result_var_b108;
void* right_value131;
struct list$1sNodeph* __dec_obj35;
_Bool _if_conditional102;
_Bool _if_conditional103;
struct list$1sTypeph* __exception_result_var_b109;
void* right_value132;
struct list$1sTypeph* __dec_obj36;
_Bool _if_conditional104;
struct list$1charph* __exception_result_var_b113;
void* right_value139;
struct list$1charph* __dec_obj40;
_Bool _if_conditional108;
struct tuple1$1sTypeph* __exception_result_var_b114;
void* right_value140;
struct tuple1$1sTypeph* __dec_obj41;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sNode* __exception_result_var_b115;
void* right_value141;
struct sNode* __dec_obj42;
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
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
struct sNode* __exception_result_var_b116;
void* right_value142;
struct sNode* __dec_obj43;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
char* __exception_result_var_b117;
void* right_value143;
char* __dec_obj44;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
char* __exception_result_var_b118;
void* right_value144;
char* __dec_obj45;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct sType* __result91__;
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
        if(_if_conditional88=self==(void*)0,        _if_conditional88) {
            __result80__ = __result_obj__ = (void*)0;
            return __result80__;
        }
        result_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 4, 1092)), "sType_clone", 4, 1093))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 1094)), "sType_clone", 4, 1095))->mClass;
        }
        if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1096)), "sType_clone", 5, 1097))->mMultipleTypes!=((void*)0),        _if_conditional90) {
            __dec_obj29=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 5, 1098)), "sType_clone", 5, 1099))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 5, 1098)), "sType_clone", 5, 1099))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value124=(come_push_stackframe("sType_clone", 5, 1165),__exception_result_var_b102=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 1100)), "sType_clone", 5, 1101))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b102))));
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value124,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional94=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1170)), "sType_clone", 6, 1171))->mNoSolvedGenericsType!=((void*)0),        _if_conditional94) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 6, 1172)), "sType_clone", 6, 1173))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 6, 1172)), "sType_clone", 6, 1173))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=(come_push_stackframe("sType_clone", 6, 1187),__exception_result_var_b104=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 1174)), "sType_clone", 6, 1175))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b104))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value127,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional98=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1188)), "sType_clone", 7, 1189))->mOriginalLoadVarType!=((void*)0),        _if_conditional98) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 7, 1190)), "sType_clone", 7, 1191))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 7, 1190)), "sType_clone", 7, 1191))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value128=(come_push_stackframe("sType_clone", 7, 1194),__exception_result_var_b105=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 1192)), "sType_clone", 7, 1193))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b105))));
            come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional99=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1195)), "sType_clone", 8, 1196))->mGenericsName!=((void*)0),        _if_conditional99) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 8, 1197)), "sType_clone", 8, 1198))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 8, 1197)), "sType_clone", 8, 1198))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value129=(come_push_stackframe("sType_clone", 8, 1201),__exception_result_var_b106=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 1199)), "sType_clone", 8, 1200))->mGenericsName), come_pop_stackframe(), __exception_result_var_b106))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1202)), "sType_clone", 9, 1203))->mGenericsTypes!=((void*)0),        _if_conditional100) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 9, 1204)), "sType_clone", 9, 1205))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 9, 1204)), "sType_clone", 9, 1205))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value130=(come_push_stackframe("sType_clone", 9, 1208),__exception_result_var_b107=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 1206)), "sType_clone", 9, 1207))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b107))));
            come_call_finalizer3(__dec_obj34,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1209)), "sType_clone", 10, 1210))->mArrayNum!=((void*)0),        _if_conditional101) {
            __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 10, 1211)), "sType_clone", 10, 1212))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 10, 1211)), "sType_clone", 10, 1212))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value131=(come_push_stackframe("sType_clone", 10, 1215),__exception_result_var_b108=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 1213)), "sType_clone", 10, 1214))->mArrayNum), come_pop_stackframe(), __exception_result_var_b108))));
            come_call_finalizer3(__dec_obj35,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value131,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 11, 1216)), "sType_clone", 11, 1217))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 1218)), "sType_clone", 11, 1219))->mOmitArrayNum;
        }
        if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1220)), "sType_clone", 12, 1221))->mParamTypes!=((void*)0),        _if_conditional103) {
            __dec_obj36=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 12, 1222)), "sType_clone", 12, 1223))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 12, 1222)), "sType_clone", 12, 1223))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=(come_push_stackframe("sType_clone", 12, 1226),__exception_result_var_b109=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 1224)), "sType_clone", 12, 1225))->mParamTypes), come_pop_stackframe(), __exception_result_var_b109))));
            come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional104=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1227)), "sType_clone", 13, 1228))->mParamNames!=((void*)0),        _if_conditional104) {
            __dec_obj40=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 13, 1229)), "sType_clone", 13, 1230))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 13, 1229)), "sType_clone", 13, 1230))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value139=(come_push_stackframe("sType_clone", 13, 1296),__exception_result_var_b113=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 1231)), "sType_clone", 13, 1232))->mParamNames), come_pop_stackframe(), __exception_result_var_b113))));
            come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value139,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional108=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1301)), "sType_clone", 14, 1302))->mResultType!=((void*)0),        _if_conditional108) {
            __dec_obj41=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 14, 1303)), "sType_clone", 14, 1304))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 14, 1303)), "sType_clone", 14, 1304))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value140=(come_push_stackframe("sType_clone", 14, 1307),__exception_result_var_b114=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 1305)), "sType_clone", 14, 1306))->mResultType), come_pop_stackframe(), __exception_result_var_b114))));
            come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value140,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 15, 1308)), "sType_clone", 15, 1309))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1310)), "sType_clone", 15, 1311))->mVarArgs;
        }
        if(_if_conditional110=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1312)), "sType_clone", 16, 1313))->mAlignas!=((void*)0),        _if_conditional110) {
            __dec_obj42=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 16, 1314)), "sType_clone", 16, 1315))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 16, 1314)), "sType_clone", 16, 1315))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=(come_push_stackframe("sType_clone", 16, 1318),__exception_result_var_b115=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1316)), "sType_clone", 16, 1317))->mAlignas), come_pop_stackframe(), __exception_result_var_b115))));
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value141) { right_value141 = come_decrement_ref_count2(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 17, 1319)), "sType_clone", 17, 1320))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1321)), "sType_clone", 17, 1322))->mUnsigned;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 18, 1323)), "sType_clone", 18, 1324))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1325)), "sType_clone", 18, 1326))->mShort;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 19, 1327)), "sType_clone", 19, 1328))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1329)), "sType_clone", 19, 1330))->mLong;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 20, 1331)), "sType_clone", 20, 1332))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1333)), "sType_clone", 20, 1334))->mLongLong;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 21, 1335)), "sType_clone", 21, 1336))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1337)), "sType_clone", 21, 1338))->mConstant;
        }
        if(_if_conditional116=self!=((void*)0),        _if_conditional116) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 22, 1339)), "sType_clone", 22, 1340))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1341)), "sType_clone", 22, 1342))->mRegister;
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 23, 1343)), "sType_clone", 23, 1344))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1345)), "sType_clone", 23, 1346))->mVolatile;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 24, 1347)), "sType_clone", 24, 1348))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1349)), "sType_clone", 24, 1350))->mStatic;
        }
        if(_if_conditional119=self!=((void*)0),        _if_conditional119) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 25, 1351)), "sType_clone", 25, 1352))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1353)), "sType_clone", 25, 1354))->mUniq;
        }
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 26, 1355)), "sType_clone", 26, 1356))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1357)), "sType_clone", 26, 1358))->mRecord;
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 27, 1359)), "sType_clone", 27, 1360))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1361)), "sType_clone", 27, 1362))->mExtern;
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 28, 1363)), "sType_clone", 28, 1364))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1365)), "sType_clone", 28, 1366))->mRestrict;
        }
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 29, 1367)), "sType_clone", 29, 1368))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1369)), "sType_clone", 29, 1370))->mImmutable;
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 30, 1371)), "sType_clone", 30, 1372))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1373)), "sType_clone", 30, 1374))->mHeap;
        }
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 31, 1375)), "sType_clone", 31, 1376))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1377)), "sType_clone", 31, 1378))->mDummyHeap;
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 32, 1379)), "sType_clone", 32, 1380))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1381)), "sType_clone", 32, 1382))->mDelegate;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 33, 1383)), "sType_clone", 33, 1384))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1385)), "sType_clone", 33, 1386))->mShare;
        }
        if(_if_conditional128=self!=((void*)0),        _if_conditional128) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 34, 1387)), "sType_clone", 34, 1388))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1389)), "sType_clone", 34, 1390))->mClone;
        }
        if(_if_conditional129=self!=((void*)0),        _if_conditional129) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 35, 1391)), "sType_clone", 35, 1392))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1393)), "sType_clone", 35, 1394))->mNoHeap;
        }
        if(_if_conditional130=self!=((void*)0),        _if_conditional130) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 36, 1395)), "sType_clone", 36, 1396))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1397)), "sType_clone", 36, 1398))->mNoCallingDestructor;
        }
        if(_if_conditional131=self!=((void*)0),        _if_conditional131) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 37, 1399)), "sType_clone", 37, 1400))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1401)), "sType_clone", 37, 1402))->mRefference;
        }
        if(_if_conditional132=self!=((void*)0),        _if_conditional132) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 38, 1403)), "sType_clone", 38, 1404))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1405)), "sType_clone", 38, 1406))->mException;
        }
        if(_if_conditional133=self!=((void*)0),        _if_conditional133) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 39, 1407)), "sType_clone", 39, 1408))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1409)), "sType_clone", 39, 1410))->mPointerNum;
        }
        if(_if_conditional134=self!=((void*)0),        _if_conditional134) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 40, 1411)), "sType_clone", 40, 1412))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1413)), "sType_clone", 40, 1414))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional135=self!=((void*)0),        _if_conditional135) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 41, 1415)), "sType_clone", 41, 1416))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1417)), "sType_clone", 41, 1418))->mNoArrayPointerNum;
        }
        if(_if_conditional136=self!=((void*)0),        _if_conditional136) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 42, 1419)), "sType_clone", 42, 1420))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1421)), "sType_clone", 42, 1422))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional137=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1423)), "sType_clone", 43, 1424))->mSizeNum!=((void*)0),        _if_conditional137) {
            __dec_obj43=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 43, 1425)), "sType_clone", 43, 1426))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 43, 1425)), "sType_clone", 43, 1426))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=(come_push_stackframe("sType_clone", 43, 1429),__exception_result_var_b116=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1427)), "sType_clone", 43, 1428))->mSizeNum), come_pop_stackframe(), __exception_result_var_b116))));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional138=self!=((void*)0),        _if_conditional138) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 44, 1430)), "sType_clone", 44, 1431))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1432)), "sType_clone", 44, 1433))->mDynamicArrayNum;
        }
        if(_if_conditional139=self!=((void*)0),        _if_conditional139) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 45, 1434)), "sType_clone", 45, 1435))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1436)), "sType_clone", 45, 1437))->mTypeOfExpression;
        }
        if(_if_conditional140=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1438)), "sType_clone", 46, 1439))->mOriginalTypeName!=((void*)0),        _if_conditional140) {
            __dec_obj44=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 46, 1440)), "sType_clone", 46, 1441))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 46, 1440)), "sType_clone", 46, 1441))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value143=(come_push_stackframe("sType_clone", 46, 1444),__exception_result_var_b117=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1442)), "sType_clone", 46, 1443))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b117))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional141=self!=((void*)0),        _if_conditional141) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 47, 1445)), "sType_clone", 47, 1446))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1447)), "sType_clone", 47, 1448))->mOriginalPointerNum;
        }
        if(_if_conditional142=self!=((void*)0),        _if_conditional142) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 48, 1449)), "sType_clone", 48, 1450))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1451)), "sType_clone", 48, 1452))->mFunctionParam;
        }
        if(_if_conditional143=self!=((void*)0),        _if_conditional143) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 49, 1453)), "sType_clone", 49, 1454))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1455)), "sType_clone", 49, 1456))->mAllocaValue;
        }
        if(_if_conditional144=self!=((void*)0),        _if_conditional144) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 50, 1457)), "sType_clone", 50, 1458))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1459)), "sType_clone", 50, 1460))->mGenericsStruct;
        }
        if(_if_conditional145=self!=((void*)0),        _if_conditional145) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 51, 1461)), "sType_clone", 51, 1462))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1463)), "sType_clone", 51, 1464))->mSolvedGenericsName;
        }
        if(_if_conditional146=self!=((void*)0),        _if_conditional146) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 52, 1465)), "sType_clone", 52, 1466))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1467)), "sType_clone", 52, 1468))->mComeMemCore;
        }
        if(_if_conditional147=self!=((void*)0),        _if_conditional147) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 53, 1469)), "sType_clone", 53, 1470))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1471)), "sType_clone", 53, 1472))->mInline;
        }
        if(_if_conditional148=self!=((void*)0),        _if_conditional148) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 54, 1473)), "sType_clone", 54, 1474))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1475)), "sType_clone", 54, 1476))->mNullValue;
        }
        if(_if_conditional149=self!=((void*)0),        _if_conditional149) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 55, 1477)), "sType_clone", 55, 1478))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1479)), "sType_clone", 55, 1480))->mGuardValue;
        }
        if(_if_conditional150=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1481)), "sType_clone", 56, 1482))->mAsmName!=((void*)0),        _if_conditional150) {
            __dec_obj45=((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 56, 1483)), "sType_clone", 56, 1484))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 56, 1483)), "sType_clone", 56, 1484))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value144=(come_push_stackframe("sType_clone", 56, 1487),__exception_result_var_b118=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1485)), "sType_clone", 56, 1486))->mAsmName), come_pop_stackframe(), __exception_result_var_b118))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional151=self!=((void*)0),        _if_conditional151) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 57, 1488)), "sType_clone", 57, 1489))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1490)), "sType_clone", 57, 1491))->mArrayPointerType;
        }
        if(_if_conditional152=self!=((void*)0),        _if_conditional152) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 58, 1492)), "sType_clone", 58, 1493))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1494)), "sType_clone", 58, 1495))->mLambdaArray;
        }
        if(_if_conditional153=self!=((void*)0),        _if_conditional153) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_83, "sType_clone", 59, 1496)), "sType_clone", 59, 1497))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1498)), "sType_clone", 59, 1499))->mNoNumberArray;
        }
        __result91__ = __result_obj__ = result_83;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result91__;
        come_call_finalizer3(result_83,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional91;
struct list$1sTypeph* __result81__;
void* right_value118;
void* right_value119;
struct list$1sTypeph* __exception_result_var_b99;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
_Bool _while_condtional13;
struct sType* __exception_result_var_b100;
void* right_value123;
struct list$1sTypeph* __exception_result_var_b101;
struct list$1sTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_84, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
right_value123 = (void*)0;
                if(_if_conditional91=self==((void*)0),                _if_conditional91) {
                    __result81__ = __result_obj__ = ((void*)0);
                    return __result81__;
                }
                result_84=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1110),__exception_result_var_b99=((struct list$1sTypeph*)(right_value119=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value118=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 1102)), "./neo-c.h", 139, 1103)))))), come_pop_stackframe(), __exception_result_var_b99));
                come_call_finalizer3(right_value118,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value119,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_85=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 1111)), "./neo-c.h", 141, 1112))->head;
                while(_while_condtional13=it_85!=((void*)0),                _while_condtional13) {
                    (come_push_stackframe("./neo-c.h", 143, 1162),__exception_result_var_b101=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_84, "./neo-c.h", 143, 1113)), "./neo-c.h", 143, 1114)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=(come_push_stackframe("./neo-c.h", 143, 1161),__exception_result_var_b100=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_85, "./neo-c.h", 143, 1159)), "./neo-c.h", 143, 1160))->item), come_pop_stackframe(), __exception_result_var_b100))))), come_pop_stackframe(), __exception_result_var_b101);
                    come_call_finalizer3(right_value123,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_85=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_85, "./neo-c.h", 145, 1163)), "./neo-c.h", 145, 1164))->next;
                }
                __result84__ = __result_obj__ = result_84;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result84__;
                come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 1104)), "./neo-c.h", 101, 1105))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 1106)), "./neo-c.h", 102, 1107))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 1108)), "./neo-c.h", 103, 1109))->len=0;
                    __result82__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result82__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional92;
void* right_value120;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj26;
_Bool _if_conditional93;
void* right_value121;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj27;
void* right_value122;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj28;
struct list$1sTypeph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
right_value121 = (void*)0;
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
right_value122 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional92=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 1115)), "./neo-c.h", 152, 1116))->len==0,                        _if_conditional92) {
                            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value120=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value120,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_86, "./neo-c.h", 155, 1117)), "./neo-c.h", 155, 1118))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_86, "./neo-c.h", 156, 1119)), "./neo-c.h", 156, 1120))->next=((void*)0);
                            __dec_obj26=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_86, "./neo-c.h", 157, 1121)), "./neo-c.h", 157, 1122))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_86, "./neo-c.h", 157, 1121)), "./neo-c.h", 157, 1122))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 1123)), "./neo-c.h", 159, 1124))->tail=litem_86;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 1125)), "./neo-c.h", 160, 1126))->head=litem_86;
                        }
                        else {
                            if(_if_conditional93=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 1127)), "./neo-c.h", 162, 1128))->len==1,                            _if_conditional93) {
                                litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value121,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 165, 1129)), "./neo-c.h", 165, 1130))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 1131)), "./neo-c.h", 165, 1132))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 166, 1133)), "./neo-c.h", 166, 1134))->next=((void*)0);
                                __dec_obj27=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 167, 1135)), "./neo-c.h", 167, 1136))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_87, "./neo-c.h", 167, 1135)), "./neo-c.h", 167, 1136))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 1137)), "./neo-c.h", 169, 1138))->tail=litem_87;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 1139)), "./neo-c.h", 170, 1140))->head, "./neo-c.h", 170, 1141)), "./neo-c.h", 170, 1142))->next=litem_87;
                            }
                            else {
                                litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value122,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 175, 1143)), "./neo-c.h", 175, 1144))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 1145)), "./neo-c.h", 175, 1146))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 176, 1147)), "./neo-c.h", 176, 1148))->next=((void*)0);
                                __dec_obj28=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 177, 1149)), "./neo-c.h", 177, 1150))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_88, "./neo-c.h", 177, 1149)), "./neo-c.h", 177, 1150))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 1151)), "./neo-c.h", 179, 1152))->tail, "./neo-c.h", 179, 1153)), "./neo-c.h", 179, 1154))->next=litem_88;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 1155)), "./neo-c.h", 180, 1156))->tail=litem_88;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 1157)), "./neo-c.h", 183, 1158))->len++;
                        __result83__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result83__;
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
                it_89=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 1166)), "./neo-c.h", 120, 1167))->head;
                while(_while_condtional14=it_89!=((void*)0),                _while_condtional14) {
                    prev_it_90=it_89;
                    it_89=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_89, "./neo-c.h", 123, 1168)), "./neo-c.h", 123, 1169))->next;
                    come_call_finalizer3(prev_it_90,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional95;
struct tuple1$1sTypeph* __result85__;
void* right_value125;
struct tuple1$1sTypeph* result_91;
_Bool _if_conditional97;
struct sType* __exception_result_var_b103;
void* right_value126;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
memset(&result_91, 0, sizeof(struct tuple1$1sTypeph*));
right_value126 = (void*)0;
                if(_if_conditional95=self==(void*)0,                _if_conditional95) {
                    __result85__ = __result_obj__ = (void*)0;
                    return __result85__;
                }
                result_91=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value125=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value125,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional97=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1180)), "tuple1$1sTypephp_clone", 4, 1181))->v1!=((void*)0),                _if_conditional97) {
                    __dec_obj30=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_91, "tuple1$1sTypephp_clone", 4, 1182)), "tuple1$1sTypephp_clone", 4, 1183))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_91, "tuple1$1sTypephp_clone", 4, 1182)), "tuple1$1sTypephp_clone", 4, 1183))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 1186),__exception_result_var_b103=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 1184)), "tuple1$1sTypephp_clone", 4, 1185))->v1), come_pop_stackframe(), __exception_result_var_b103))));
                    come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result86__ = __result_obj__ = result_91;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result86__;
                come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional96;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional96=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1176)), "tuple1$1sTypeph_finalize", 0, 1177))->v1!=((void*)0),                    _if_conditional96) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 1178)), "tuple1$1sTypeph_finalize", 0, 1179))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional105;
struct list$1charph* __result87__;
void* right_value133;
void* right_value134;
struct list$1charph* __exception_result_var_b110;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
_Bool _while_condtional15;
char* __exception_result_var_b111;
void* right_value138;
struct list$1charph* __exception_result_var_b112;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&it_93, 0, sizeof(struct list_item$1charph*));
right_value138 = (void*)0;
                if(_if_conditional105=self==((void*)0),                _if_conditional105) {
                    __result87__ = __result_obj__ = ((void*)0);
                    return __result87__;
                }
                result_92=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1241),__exception_result_var_b110=((struct list$1charph*)(right_value134=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value133=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 1233)), "./neo-c.h", 139, 1234)))))), come_pop_stackframe(), __exception_result_var_b110));
                come_call_finalizer3(right_value133,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_93=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 1242)), "./neo-c.h", 141, 1243))->head;
                while(_while_condtional15=it_93!=((void*)0),                _while_condtional15) {
                    (come_push_stackframe("./neo-c.h", 143, 1293),__exception_result_var_b112=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_92, "./neo-c.h", 143, 1244)), "./neo-c.h", 143, 1245)),(char*)come_increment_ref_count(((char*)(right_value138=(come_push_stackframe("./neo-c.h", 143, 1292),__exception_result_var_b111=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_93, "./neo-c.h", 143, 1290)), "./neo-c.h", 143, 1291))->item), come_pop_stackframe(), __exception_result_var_b111))))), come_pop_stackframe(), __exception_result_var_b112);
                    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_93=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_93, "./neo-c.h", 145, 1294)), "./neo-c.h", 145, 1295))->next;
                }
                __result90__ = __result_obj__ = result_92;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result90__;
                come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 1235)), "./neo-c.h", 101, 1236))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 1237)), "./neo-c.h", 102, 1238))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 1239)), "./neo-c.h", 103, 1240))->len=0;
                    __result88__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result88__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional106;
void* right_value135;
struct list_item$1charph* litem_94;
char* __dec_obj37;
_Bool _if_conditional107;
void* right_value136;
struct list_item$1charph* litem_95;
char* __dec_obj38;
void* right_value137;
struct list_item$1charph* litem_96;
char* __dec_obj39;
struct list$1charph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
right_value136 = (void*)0;
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
right_value137 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional106=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 1246)), "./neo-c.h", 152, 1247))->len==0,                        _if_conditional106) {
                            litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value135,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_94, "./neo-c.h", 155, 1248)), "./neo-c.h", 155, 1249))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_94, "./neo-c.h", 156, 1250)), "./neo-c.h", 156, 1251))->next=((void*)0);
                            __dec_obj37=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_94, "./neo-c.h", 157, 1252)), "./neo-c.h", 157, 1253))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_94, "./neo-c.h", 157, 1252)), "./neo-c.h", 157, 1253))->item=(char*)come_increment_ref_count(item);
                            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 1254)), "./neo-c.h", 159, 1255))->tail=litem_94;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 1256)), "./neo-c.h", 160, 1257))->head=litem_94;
                        }
                        else {
                            if(_if_conditional107=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 1258)), "./neo-c.h", 162, 1259))->len==1,                            _if_conditional107) {
                                litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value136,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_95, "./neo-c.h", 165, 1260)), "./neo-c.h", 165, 1261))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 1262)), "./neo-c.h", 165, 1263))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_95, "./neo-c.h", 166, 1264)), "./neo-c.h", 166, 1265))->next=((void*)0);
                                __dec_obj38=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_95, "./neo-c.h", 167, 1266)), "./neo-c.h", 167, 1267))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_95, "./neo-c.h", 167, 1266)), "./neo-c.h", 167, 1267))->item=(char*)come_increment_ref_count(item);
                                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 1268)), "./neo-c.h", 169, 1269))->tail=litem_95;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 1270)), "./neo-c.h", 170, 1271))->head, "./neo-c.h", 170, 1272)), "./neo-c.h", 170, 1273))->next=litem_95;
                            }
                            else {
                                litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value137,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_96, "./neo-c.h", 175, 1274)), "./neo-c.h", 175, 1275))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 1276)), "./neo-c.h", 175, 1277))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_96, "./neo-c.h", 176, 1278)), "./neo-c.h", 176, 1279))->next=((void*)0);
                                __dec_obj39=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_96, "./neo-c.h", 177, 1280)), "./neo-c.h", 177, 1281))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_96, "./neo-c.h", 177, 1280)), "./neo-c.h", 177, 1281))->item=(char*)come_increment_ref_count(item);
                                __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 1282)), "./neo-c.h", 179, 1283))->tail, "./neo-c.h", 179, 1284)), "./neo-c.h", 179, 1285))->next=litem_96;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 1286)), "./neo-c.h", 180, 1287))->tail=litem_96;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 1288)), "./neo-c.h", 183, 1289))->len++;
                        __result89__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result89__;
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
                it_97=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 1297)), "./neo-c.h", 120, 1298))->head;
                while(_while_condtional16=it_97!=((void*)0),                _while_condtional16) {
                    prev_it_98=it_97;
                    it_97=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_97, "./neo-c.h", 123, 1299)), "./neo-c.h", 123, 1300))->next;
                    come_call_finalizer3(prev_it_98,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value146;
struct sNodeBase* __exception_result_var_b121;
struct sCharNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    (come_push_stackframe("06str.c", 122, 1513),__exception_result_var_b121=((struct sNodeBase*)(right_value146=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "06str.c", 122, 1511)), "06str.c", 122, 1512))),info))), come_pop_stackframe(), __exception_result_var_b121);
    come_call_finalizer3(right_value146,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sCharNode*)come_null_check(self, "06str.c", 124, 1514))->value=value;
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__;
void* right_value147;
char* __exception_result_var_b122;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    __result94__ = __result_obj__ = (come_push_stackframe("06str.c", 129, 1519),__exception_result_var_b122=((char*)(right_value147=__builtin_string("sCharNode"))), come_pop_stackframe(), __exception_result_var_b122);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct CVALUE* come_value_99;
void* right_value149;
char* __exception_result_var_b123;
char* __dec_obj47;
void* right_value150;
void* right_value151;
struct sType* __exception_result_var_b124;
struct sType* __dec_obj48;
struct list$1CVALUEph* __exception_result_var_b125;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 134, "CVALUE"))));
    come_call_finalizer3(right_value148,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 136, 1520)), "06str.c", 136, 1521))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 136, 1520)), "06str.c", 136, 1521))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 136, 1524),__exception_result_var_b123=((char*)(right_value149=xsprintf("%d",((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "06str.c", 136, 1522)), "06str.c", 136, 1523))->value))), come_pop_stackframe(), __exception_result_var_b123));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj48=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 137, 1525)), "06str.c", 137, 1526))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 137, 1525)), "06str.c", 137, 1526))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 137, 1528),__exception_result_var_b124=((struct sType*)(right_value151=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value150=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 137, "sType"))), "06str.c", 137, 1527))),"char",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b124));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value151,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 138, 1529)), "06str.c", 138, 1530))->var=((void*)0);
    (come_push_stackframe("06str.c", 140, 1535),__exception_result_var_b125=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 140, 1531)), "06str.c", 140, 1532))->stack, "06str.c", 140, 1533)), "06str.c", 140, 1534)),(struct CVALUE*)come_increment_ref_count(come_value_99)), come_pop_stackframe(), __exception_result_var_b125);
    (come_push_stackframe("06str.c", 142,1538),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_99, "06str.c", 142, 1536)), "06str.c", 142, 1537))->c_value),come_pop_stackframe());
    __result95__ = (_Bool)1;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result95__;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value152;
struct sNodeBase* __exception_result_var_b126;
struct sWCharNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    (come_push_stackframe("06str.c", 152, 1541),__exception_result_var_b126=((struct sNodeBase*)(right_value152=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "06str.c", 152, 1539)), "06str.c", 152, 1540))),info))), come_pop_stackframe(), __exception_result_var_b126);
    come_call_finalizer3(right_value152,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sWCharNode*)come_null_check(self, "06str.c", 154, 1542))->value=value;
    ((struct sWCharNode*)come_null_check(self, "06str.c", 155, 1543))->quote=quote;
    __result96__ = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__;
void* right_value153;
char* __exception_result_var_b127;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    __result97__ = __result_obj__ = (come_push_stackframe("06str.c", 160, 1548),__exception_result_var_b127=((char*)(right_value153=__builtin_string("sWCharNode"))), come_pop_stackframe(), __exception_result_var_b127);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value154;
struct CVALUE* come_value_100;
_Bool _if_conditional156;
void* right_value155;
char* __exception_result_var_b128;
char* __dec_obj49;
void* right_value156;
char* __exception_result_var_b129;
char* __dec_obj50;
void* right_value157;
void* right_value158;
struct sType* __exception_result_var_b130;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b131;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 165, "CVALUE"))));
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "06str.c", 167, 1549)), "06str.c", 167, 1550))->quote) {
        __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 168, 1551)), "06str.c", 168, 1552))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 168, 1551)), "06str.c", 168, 1552))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 168, 1555),__exception_result_var_b128=((char*)(right_value155=xsprintf("L'\\%o'",((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "06str.c", 168, 1553)), "06str.c", 168, 1554))->value))), come_pop_stackframe(), __exception_result_var_b128));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 171, 1556)), "06str.c", 171, 1557))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 171, 1556)), "06str.c", 171, 1557))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 171, 1560),__exception_result_var_b129=((char*)(right_value156=xsprintf("L'%lc'",((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "06str.c", 171, 1558)), "06str.c", 171, 1559))->value))), come_pop_stackframe(), __exception_result_var_b129));
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj51=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 173, 1561)), "06str.c", 173, 1562))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 173, 1561)), "06str.c", 173, 1562))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 173, 1564),__exception_result_var_b130=((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 173, "sType"))), "06str.c", 173, 1563))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b130));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 174, 1565)), "06str.c", 174, 1566))->var=((void*)0);
    (come_push_stackframe("06str.c", 176, 1571),__exception_result_var_b131=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 176, 1567)), "06str.c", 176, 1568))->stack, "06str.c", 176, 1569)), "06str.c", 176, 1570)),(struct CVALUE*)come_increment_ref_count(come_value_100)), come_pop_stackframe(), __exception_result_var_b131);
    (come_push_stackframe("06str.c", 178,1574),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_100, "06str.c", 178, 1572)), "06str.c", 178, 1573))->c_value),come_pop_stackframe());
    __result98__ = (_Bool)1;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct sNodeBase* __exception_result_var_b132;
unsigned int* __dec_obj52;
struct sWStringNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    (come_push_stackframe("06str.c", 188, 1577),__exception_result_var_b132=((struct sNodeBase*)(right_value159=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "06str.c", 188, 1575)), "06str.c", 188, 1576))),info))), come_pop_stackframe(), __exception_result_var_b132);
    come_call_finalizer3(right_value159,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=((struct sWStringNode*)come_null_check(self, "06str.c", 190, 1578))->value;
    ((struct sWStringNode*)come_null_check(self, "06str.c", 190, 1578))->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result99__;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__;
void* right_value160;
char* __exception_result_var_b133;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result100__ = __result_obj__ = (come_push_stackframe("06str.c", 195, 1587),__exception_result_var_b133=((char*)(right_value160=__builtin_string("sWStringNode"))), come_pop_stackframe(), __exception_result_var_b133);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct CVALUE* come_value_101;
void* right_value162;
char* __exception_result_var_b134;
char* __dec_obj53;
void* right_value163;
void* right_value164;
struct sType* __exception_result_var_b135;
struct sType* __dec_obj54;
struct list$1CVALUEph* __exception_result_var_b136;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 200, "CVALUE"))));
    come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 202, 1588)), "06str.c", 202, 1589))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 202, 1588)), "06str.c", 202, 1589))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 202, 1592),__exception_result_var_b134=((char*)(right_value162=xsprintf("L\"%ls\"",((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "06str.c", 202, 1590)), "06str.c", 202, 1591))->value))), come_pop_stackframe(), __exception_result_var_b134));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 203, 1593)), "06str.c", 203, 1594))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 203, 1593)), "06str.c", 203, 1594))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 203, 1596),__exception_result_var_b135=((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 203, "sType"))), "06str.c", 203, 1595))),"int*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b135));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 204, 1597)), "06str.c", 204, 1598))->var=((void*)0);
    (come_push_stackframe("06str.c", 206, 1603),__exception_result_var_b136=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 206, 1599)), "06str.c", 206, 1600))->stack, "06str.c", 206, 1601)), "06str.c", 206, 1602)),(struct CVALUE*)come_increment_ref_count(come_value_101)), come_pop_stackframe(), __exception_result_var_b136);
    (come_push_stackframe("06str.c", 208,1606),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "06str.c", 208, 1604)), "06str.c", 208, 1605))->c_value),come_pop_stackframe());
    __result101__ = (_Bool)1;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value165;
struct sNodeBase* __exception_result_var_b137;
void* right_value166;
char* __exception_result_var_b138;
char* __dec_obj55;
struct sRegexNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
    (come_push_stackframe("06str.c", 218, 1609),__exception_result_var_b137=((struct sNodeBase*)(right_value165=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "06str.c", 218, 1607)), "06str.c", 218, 1608))),info))), come_pop_stackframe(), __exception_result_var_b137);
    come_call_finalizer3(right_value165,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=((struct sRegexNode*)come_null_check(self, "06str.c", 220, 1610))->str;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 220, 1610))->str=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 220, 1611),__exception_result_var_b138=((char*)(right_value166=__builtin_string(str))), come_pop_stackframe(), __exception_result_var_b138));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sRegexNode*)come_null_check(self, "06str.c", 221, 1612))->global=global;
    ((struct sRegexNode*)come_null_check(self, "06str.c", 222, 1613))->ignore_case=ignore_case;
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result102__;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__;
void* right_value167;
char* __exception_result_var_b139;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    __result103__ = __result_obj__ = (come_push_stackframe("06str.c", 227, 1622),__exception_result_var_b139=((char*)(right_value167=__builtin_string("sRegexNode"))), come_pop_stackframe(), __exception_result_var_b139);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value168;
struct CVALUE* come_value_102;
void* right_value169;
char* __exception_result_var_b140;
void* right_value170;
char* __exception_result_var_b141;
void* right_value171;
char* __exception_result_var_b142;
void* right_value172;
char* __exception_result_var_b143;
void* right_value173;
char* __exception_result_var_b144;
char* __dec_obj56;
void* right_value174;
void* right_value175;
struct sType* __exception_result_var_b145;
struct sType* __dec_obj57;
struct list$1CVALUEph* __exception_result_var_b146;
void* right_value176;
char* __exception_result_var_b147;
char* __dec_obj58;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value168 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 232, "CVALUE"))));
    come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 234, 1623)), "06str.c", 234, 1624))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 234, 1623)), "06str.c", 234, 1624))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 234, 1635),__exception_result_var_b144=((char*)(right_value173=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "06str.c", 234, 1625)), "06str.c", 234, 1626))->str,((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "06str.c", 234, 1627)), "06str.c", 234, 1628))->ignore_case?(come_push_stackframe("06str.c", 234, 1629),__exception_result_var_b140=((char*)(right_value169=__builtin_string("1"))), come_pop_stackframe(), __exception_result_var_b140):(come_push_stackframe("06str.c", 234, 1630),__exception_result_var_b141=((char*)(right_value170=__builtin_string("0"))), come_pop_stackframe(), __exception_result_var_b141),((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "06str.c", 234, 1631)), "06str.c", 234, 1632))->global?(come_push_stackframe("06str.c", 234, 1633),__exception_result_var_b142=((char*)(right_value171=__builtin_string("1"))), come_pop_stackframe(), __exception_result_var_b142):(come_push_stackframe("06str.c", 234, 1634),__exception_result_var_b143=((char*)(right_value172=__builtin_string("0"))), come_pop_stackframe(), __exception_result_var_b143)))), come_pop_stackframe(), __exception_result_var_b144));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj57=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 235, 1636)), "06str.c", 235, 1637))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 235, 1636)), "06str.c", 235, 1637))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 235, 1639),__exception_result_var_b145=((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 235, "sType"))), "06str.c", 235, 1638))),"come_regex",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b145));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 236, 1640)), "06str.c", 236, 1641))->type, "06str.c", 236, 1642)), "06str.c", 236, 1643))->mPointerNum=1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 237, 1644)), "06str.c", 237, 1645))->type, "06str.c", 237, 1646)), "06str.c", 237, 1647))->mHeap=(_Bool)1;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 238, 1648)), "06str.c", 238, 1649))->var=((void*)0);
    (come_push_stackframe("06str.c", 240, 1654),__exception_result_var_b146=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 240, 1650)), "06str.c", 240, 1651))->stack, "06str.c", 240, 1652)), "06str.c", 240, 1653)),(struct CVALUE*)come_increment_ref_count(come_value_102)), come_pop_stackframe(), __exception_result_var_b146);
    (come_push_stackframe("06str.c", 242,1657),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 242, 1655)), "06str.c", 242, 1656))->c_value),come_pop_stackframe());
    __dec_obj58=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 244, 1658)), "06str.c", 244, 1659))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 244, 1658)), "06str.c", 244, 1659))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 244, 1664),__exception_result_var_b147=((char*)(right_value176=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 244, 1660)), "06str.c", 244, 1661))->c_value,(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "06str.c", 244, 1662)), "06str.c", 244, 1663))->type),info))), come_pop_stackframe(), __exception_result_var_b147));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result104__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
void* right_value177;
struct sNodeBase* __exception_result_var_b148;
struct list$1sNodeph* __dec_obj59;
struct sListNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    (come_push_stackframe("06str.c", 254, 1667),__exception_result_var_b148=((struct sNodeBase*)(right_value177=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "06str.c", 254, 1665)), "06str.c", 254, 1666))),info))), come_pop_stackframe(), __exception_result_var_b148);
    come_call_finalizer3(right_value177,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=((struct sListNode*)come_null_check(self, "06str.c", 256, 1668))->list_elements;
    ((struct sListNode*)come_null_check(self, "06str.c", 256, 1668))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__;
void* right_value178;
char* __exception_result_var_b149;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    __result106__ = __result_obj__ = (come_push_stackframe("06str.c", 261, 1677),__exception_result_var_b149=((char*)(right_value178=__builtin_string("sListNode"))), come_pop_stackframe(), __exception_result_var_b149);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* list_elements_103;
void* right_value179;
void* right_value180;
struct list$1CVALUEph* __exception_result_var_b150;
struct list$1CVALUEph* params_104;
struct sType* __dec_obj60;
struct sType* list_element_type_107;
struct list$1sNodeph* o2_saved_108;
struct sNode* __exception_result_var_b151;
struct sNode* it_109;
_Bool __exception_result_var_b152;
struct sNode* __exception_result_var_b153;
_Bool __exception_result_var_b154;
_Bool _if_conditional163;
_Bool __result108__;
void* right_value181;
struct CVALUE* __exception_result_var_b155;
struct CVALUE* come_value_110;
_Bool _if_conditional164;
void* right_value182;
_Bool __exception_result_var_b156;
struct list$1CVALUEph* __exception_result_var_b157;
struct sType* __exception_result_var_b158;
void* right_value183;
struct sType* __dec_obj61;
struct sType* __exception_result_var_b159;
void* right_value184;
struct sType* type_values_111;
int __exception_result_var_b160;
void* right_value188;
struct sNode* __exception_result_var_b161;
struct list$1sNodeph* __exception_result_var_b162;
void* right_value189;
char* __exception_result_var_b163;
char* var_name_116;
struct sType* __exception_result_var_b164;
void* right_value190;
struct sVar* __exception_result_var_b165;
struct sVar* var__117;
void* right_value191;
char* __exception_result_var_b166;
void* right_value192;
void* right_value193;
struct buffer* __exception_result_var_b167;
struct buffer* source_118;
struct buffer* __exception_result_var_b168;
int i_119;
struct list$1CVALUEph* o2_saved_120;
struct CVALUE* __exception_result_var_b171;
struct CVALUE* it_123;
_Bool __exception_result_var_b172;
struct CVALUE* __exception_result_var_b175;
_Bool _if_conditional172;
struct CVALUE* __exception_result_var_b177;
void* right_value194;
char* __exception_result_var_b178;
struct buffer* __exception_result_var_b179;
struct CVALUE* __exception_result_var_b180;
void* right_value195;
char* __exception_result_var_b181;
struct buffer* __exception_result_var_b182;
struct buffer* __exception_result_var_b183;
void* right_value196;
char* __exception_result_var_b184;
void* right_value197;
void* right_value198;
struct sType* __exception_result_var_b185;
struct sType* list_type_129;
struct sType* __exception_result_var_b186;
void* right_value202;
struct list$1sTypeph* __exception_result_var_b187;
struct sType* __exception_result_var_b188;
void* right_value203;
struct sType* obj_type_133;
char* fun_name_134;
void* right_value204;
char* __exception_result_var_b189;
void* right_value205;
char* __exception_result_var_b190;
void* right_value206;
char* __exception_result_var_b191;
char* generics_fun_name_135;
struct sFun* __exception_result_var_b192;
struct sFun* fun_136;
_Bool _if_conditional177;
void* right_value207;
char* __exception_result_var_b193;
void* right_value208;
char* __exception_result_var_b194;
char* __dec_obj68;
struct sFun* __exception_result_var_b195;
_Bool _if_conditional178;
_Bool __result122__;
struct sType* __exception_result_var_b196;
void* right_value209;
struct sType* result_type_137;
struct sType* type_138;
void* right_value210;
struct CVALUE* obj_value_139;
void* right_value211;
void* right_value212;
struct buffer* __exception_result_var_b197;
struct buffer* num_string_140;
struct buffer* __exception_result_var_b198;
void* right_value213;
struct sType* __exception_result_var_b199;
struct sType* type2_141;
void* right_value214;
char* __exception_result_var_b200;
char* type_name_142;
void* right_value215;
char* __exception_result_var_b201;
void* right_value216;
char* __exception_result_var_b202;
char* __dec_obj69;
struct sType* __exception_result_var_b203;
void* right_value217;
struct sType* type3_143;
struct sType* __exception_result_var_b204;
void* right_value218;
struct sType* __dec_obj70;
void* right_value219;
char* __exception_result_var_b205;
char* __dec_obj71;
void* right_value220;
void* right_value221;
struct list$1CVALUEph* __exception_result_var_b206;
struct list$1CVALUEph* come_params_144;
struct sType* __exception_result_var_b208;
_Bool _if_conditional181;
struct sType* __exception_result_var_b209;
struct list$1CVALUEph* __exception_result_var_b210;
void* right_value222;
struct CVALUE* come_value2_148;
int __exception_result_var_b211;
void* right_value223;
char* __exception_result_var_b212;
char* __dec_obj72;
struct sType* __dec_obj73;
struct list$1CVALUEph* __exception_result_var_b213;
void* right_value224;
struct CVALUE* come_value3_149;
void* right_value225;
char* __exception_result_var_b214;
char* __dec_obj74;
struct sType* __dec_obj75;
struct list$1CVALUEph* __exception_result_var_b215;
void* right_value226;
void* right_value227;
struct buffer* __exception_result_var_b216;
struct buffer* buf_150;
struct buffer* __exception_result_var_b217;
struct buffer* __exception_result_var_b218;
int j_151;
struct list$1CVALUEph* o2_saved_152;
struct CVALUE* __exception_result_var_b219;
struct CVALUE* it_153;
_Bool __exception_result_var_b220;
struct CVALUE* __exception_result_var_b221;
struct buffer* __exception_result_var_b222;
int __exception_result_var_b223;
_Bool _if_conditional182;
struct buffer* __exception_result_var_b224;
struct buffer* __exception_result_var_b225;
void* right_value228;
struct CVALUE* come_value4_154;
void* right_value229;
char* __exception_result_var_b226;
char* __dec_obj76;
_Bool _if_conditional183;
void* right_value230;
char* __exception_result_var_b227;
void* right_value231;
char* __exception_result_var_b228;
char* __dec_obj77;
struct sType* __exception_result_var_b229;
void* right_value232;
struct sType* __dec_obj78;
void* right_value233;
char* __exception_result_var_b230;
struct list$1CVALUEph* __exception_result_var_b231;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&list_elements_103, 0, sizeof(struct list$1sNodeph*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&params_104, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_107, 0, sizeof(struct sType*));
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_109, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&come_value_110, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&type_values_111, 0, sizeof(struct sType*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&var_name_116, 0, sizeof(char*));
right_value190 = (void*)0;
memset(&var__117, 0, sizeof(struct sVar*));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&source_118, 0, sizeof(struct buffer*));
memset(&i_119, 0, sizeof(int));
memset(&o2_saved_120, 0, sizeof(struct list$1CVALUEph*));
memset(&it_123, 0, sizeof(struct CVALUE*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&list_type_129, 0, sizeof(struct sType*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&obj_type_133, 0, sizeof(struct sType*));
memset(&fun_name_134, 0, sizeof(char*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&generics_fun_name_135, 0, sizeof(char*));
memset(&fun_136, 0, sizeof(struct sFun*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&type_138, 0, sizeof(struct sType*));
right_value210 = (void*)0;
memset(&obj_value_139, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&num_string_140, 0, sizeof(struct buffer*));
right_value213 = (void*)0;
memset(&type2_141, 0, sizeof(struct sType*));
right_value214 = (void*)0;
memset(&type_name_142, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&type3_143, 0, sizeof(struct sType*));
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&come_params_144, 0, sizeof(struct list$1CVALUEph*));
right_value222 = (void*)0;
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&come_value3_149, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&buf_150, 0, sizeof(struct buffer*));
memset(&j_151, 0, sizeof(int));
memset(&o2_saved_152, 0, sizeof(struct list$1CVALUEph*));
memset(&it_153, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
memset(&come_value4_154, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    list_elements_103=((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "06str.c", 266, 1678)), "06str.c", 266, 1679))->list_elements;
    params_104=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 268, 1691),__exception_result_var_b150=((struct list$1CVALUEph*)(right_value180=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value179=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 268, "list$1CVALUEph"))), "06str.c", 268, 1680)))))), come_pop_stackframe(), __exception_result_var_b150));
    come_call_finalizer3(right_value179,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=list_element_type_107;
    list_element_type_107=((void*)0);
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_108=(list_elements_103),it_109=(come_push_stackframe("06str.c", 271, 1694),__exception_result_var_b151=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_108), "06str.c", 271, 1692)), "06str.c", 271, 1693))), come_pop_stackframe(), __exception_result_var_b151);    !(come_push_stackframe("06str.c", 271, 1697),__exception_result_var_b152=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_108), "06str.c", 271, 1695)), "06str.c", 271, 1696))), come_pop_stackframe(), __exception_result_var_b152);    it_109=(come_push_stackframe("06str.c", 271, 1700),__exception_result_var_b153=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_108), "06str.c", 271, 1698)), "06str.c", 271, 1699))), come_pop_stackframe(), __exception_result_var_b153)    ){
        if(_if_conditional163=!(come_push_stackframe("06str.c", 272, 1701),__exception_result_var_b154=node_compile(it_109,info), come_pop_stackframe(), __exception_result_var_b154),        _if_conditional163) {
            __result108__ = (_Bool)0;
            come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result108__;
        }
        come_value_110=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 276, 1702),__exception_result_var_b155=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b155));
        come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("06str.c", 277,1703),dec_stack_ptr(1,info),come_pop_stackframe());
        if(list_element_type_107) {
            (come_push_stackframe("06str.c", 280, 1706),__exception_result_var_b156=check_assign_type(((char*)(right_value182=xsprintf("invalid list element type"))),list_element_type_107,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "06str.c", 280, 1704)), "06str.c", 280, 1705))->type,come_value_110,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b156);
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("06str.c", 283, 1709),__exception_result_var_b157=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(params_104, "06str.c", 283, 1707)), "06str.c", 283, 1708)),(struct CVALUE*)come_increment_ref_count(come_value_110)), come_pop_stackframe(), __exception_result_var_b157);
        __dec_obj61=list_element_type_107;
        list_element_type_107=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(come_push_stackframe("06str.c", 285, 1712),__exception_result_var_b158=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "06str.c", 285, 1710)), "06str.c", 285, 1711))->type), come_pop_stackframe(), __exception_result_var_b158))));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(come_push_stackframe("06str.c", 288, 1713),__exception_result_var_b159=sType_clone(list_element_type_107), come_pop_stackframe(), __exception_result_var_b159))));
    come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 289, 1768),__exception_result_var_b162=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_values_111, "06str.c", 289, 1714)), "06str.c", 289, 1715))->mArrayNum, "06str.c", 289, 1716)), "06str.c", 289, 1717)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 289, 1767),__exception_result_var_b161=((struct sNode*)(right_value188=create_int_node((come_push_stackframe("06str.c", 289, 1766),__exception_result_var_b160=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(params_104, "06str.c", 289, 1762)), "06str.c", 289, 1763))), come_pop_stackframe(), __exception_result_var_b160),info))), come_pop_stackframe(), __exception_result_var_b161))), come_pop_stackframe(), __exception_result_var_b162);
    if(right_value188) { right_value188 = come_decrement_ref_count2(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type_values_111, "06str.c", 290, 1769)), "06str.c", 290, 1770))->mHeap=(_Bool)0;
    static int list_value_num_115=0;
    var_name_116=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 293, 1771),__exception_result_var_b163=((char*)(right_value189=xsprintf("__list_values%d__",++list_value_num_115))), come_pop_stackframe(), __exception_result_var_b163));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 295,1773),add_variable_to_table(var_name_116,(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(come_push_stackframe("06str.c", 295, 1772),__exception_result_var_b164=sType_clone(type_values_111), come_pop_stackframe(), __exception_result_var_b164)))),info),come_pop_stackframe());
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var__117=(come_push_stackframe("06str.c", 297, 1776),__exception_result_var_b165=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 297, 1774)), "06str.c", 297, 1775))->lv_table,var_name_116), come_pop_stackframe(), __exception_result_var_b165);
    (come_push_stackframe("06str.c", 299,1780),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 299, 1779),__exception_result_var_b166=((char*)(right_value191=make_define_var(type_values_111,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__117, "06str.c", 299, 1777)), "06str.c", 299, 1778))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b166)),come_pop_stackframe());
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_118=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 301, 1782),__exception_result_var_b167=((struct buffer*)(right_value193=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value192=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 301, "buffer"))), "06str.c", 301, 1781)))))), come_pop_stackframe(), __exception_result_var_b167));
    come_call_finalizer3(right_value192,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value193,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 303, 1785),__exception_result_var_b168=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_118, "06str.c", 303, 1783)), "06str.c", 303, 1784)),"{"), come_pop_stackframe(), __exception_result_var_b168);
    i_119=0;
    for(    o2_saved_120=(struct list$1CVALUEph*)come_increment_ref_count((params_104)),it_123=(come_push_stackframe("06str.c", 306, 1800),__exception_result_var_b171=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_120), "06str.c", 306, 1786)), "06str.c", 306, 1787))), come_pop_stackframe(), __exception_result_var_b171);    !(come_push_stackframe("06str.c", 306, 1805),__exception_result_var_b172=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_120), "06str.c", 306, 1801)), "06str.c", 306, 1802))), come_pop_stackframe(), __exception_result_var_b172);    it_123=(come_push_stackframe("06str.c", 306, 1824),__exception_result_var_b175=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_120), "06str.c", 306, 1806)), "06str.c", 306, 1807))), come_pop_stackframe(), __exception_result_var_b175)    ){
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(list_element_type_107, "06str.c", 307, 1825)), "06str.c", 307, 1826))->mHeap) {
            (come_push_stackframe("06str.c", 308, 1846),__exception_result_var_b179=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_118, "06str.c", 308, 1827)), "06str.c", 308, 1828)),(come_push_stackframe("06str.c", 308, 1845),__exception_result_var_b178=((char*)(right_value194=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__117, "06str.c", 308, 1829)), "06str.c", 308, 1830))->mCValueName,i_119,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check((come_push_stackframe("06str.c", 308, 1842),__exception_result_var_b177=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(params_104, "06str.c", 308, 1831)),i_119), "06str.c", 308, 1841)), come_pop_stackframe(), __exception_result_var_b177), "06str.c", 308, 1843)), "06str.c", 308, 1844))->c_value))), come_pop_stackframe(), __exception_result_var_b178)), come_pop_stackframe(), __exception_result_var_b179);
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            (come_push_stackframe("06str.c", 311, 1857),__exception_result_var_b182=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_118, "06str.c", 311, 1847)), "06str.c", 311, 1848)),(come_push_stackframe("06str.c", 311, 1856),__exception_result_var_b181=((char*)(right_value195=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__117, "06str.c", 311, 1849)), "06str.c", 311, 1850))->mCValueName,i_119,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check((come_push_stackframe("06str.c", 311, 1853),__exception_result_var_b180=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(params_104, "06str.c", 311, 1851)),i_119), "06str.c", 311, 1852)), come_pop_stackframe(), __exception_result_var_b180), "06str.c", 311, 1854)), "06str.c", 311, 1855))->c_value))), come_pop_stackframe(), __exception_result_var_b181)), come_pop_stackframe(), __exception_result_var_b182);
            right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        i_119++;
    }
    come_call_finalizer3(o2_saved_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("06str.c", 316, 1860),__exception_result_var_b183=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_118, "06str.c", 316, 1858)), "06str.c", 316, 1859)),"}"), come_pop_stackframe(), __exception_result_var_b183);
    (come_push_stackframe("06str.c", 318,1864),add_come_code(info,"%s",(come_push_stackframe("06str.c", 318, 1863),__exception_result_var_b184=((char*)(right_value196=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_118, "06str.c", 318, 1861)), "06str.c", 318, 1862))))), come_pop_stackframe(), __exception_result_var_b184)),come_pop_stackframe());
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    list_type_129=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 320, 1866),__exception_result_var_b185=((struct sType*)(right_value198=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value197=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320, "sType"))), "06str.c", 320, 1865))),"list",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b185));
    come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 321, 1916),__exception_result_var_b187=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(list_type_129, "06str.c", 321, 1867)), "06str.c", 321, 1868))->mGenericsTypes, "06str.c", 321, 1869)), "06str.c", 321, 1870)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(come_push_stackframe("06str.c", 321, 1915),__exception_result_var_b186=sType_clone(list_element_type_107), come_pop_stackframe(), __exception_result_var_b186))))), come_pop_stackframe(), __exception_result_var_b187);
    come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
    obj_type_133=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(come_push_stackframe("06str.c", 323, 1917),__exception_result_var_b188=sType_clone(list_type_129), come_pop_stackframe(), __exception_result_var_b188))));
    come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_134="initialize_with_values";
    generics_fun_name_135=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 326, 1922),__exception_result_var_b191=((char*)(right_value206=string_to_string(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("06str.c", 326, 1919),__exception_result_var_b190=((char*)(right_value205=make_generics_function(obj_type_133,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 326, 1918),__exception_result_var_b189=((char*)(right_value204=__builtin_string(fun_name_134))), come_pop_stackframe(), __exception_result_var_b189)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b190), "06str.c", 326, 1920)), "06str.c", 326, 1921))))), come_pop_stackframe(), __exception_result_var_b191));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_136=(come_push_stackframe("06str.c", 328, 1927),__exception_result_var_b192=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 328, 1923)), "06str.c", 328, 1924))->funcs, "06str.c", 328, 1925)), "06str.c", 328, 1926)),generics_fun_name_135,((void*)0)), come_pop_stackframe(), __exception_result_var_b192);
    if(_if_conditional177=fun_136==((void*)0),    _if_conditional177) {
        __dec_obj68=generics_fun_name_135;
        generics_fun_name_135=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 331, 1929),__exception_result_var_b194=((char*)(right_value208=create_method_name(obj_type_133,(_Bool)0,(come_push_stackframe("06str.c", 331, 1928),__exception_result_var_b193=((char*)(right_value207=__builtin_string(fun_name_134))), come_pop_stackframe(), __exception_result_var_b193),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b194));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_136=(come_push_stackframe("06str.c", 333, 1934),__exception_result_var_b195=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 333, 1930)), "06str.c", 333, 1931))->funcs, "06str.c", 333, 1932)), "06str.c", 333, 1933)),generics_fun_name_135,((void*)0)), come_pop_stackframe(), __exception_result_var_b195);
        if(_if_conditional178=fun_136==((void*)0),        _if_conditional178) {
            (come_push_stackframe("06str.c", 336,1939),err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_135,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 336, 1935)), "06str.c", 336, 1936))->come_fun, "06str.c", 336, 1937)), "06str.c", 336, 1938))->mName),come_pop_stackframe());
            __result122__ = (_Bool)1;
            come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result122__;
        }
    }
    result_type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(come_push_stackframe("06str.c", 341, 1942),__exception_result_var_b196=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_136, "06str.c", 341, 1940)), "06str.c", 341, 1941))->mResultType), come_pop_stackframe(), __exception_result_var_b196))));
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_137, "06str.c", 342, 1943)), "06str.c", 342, 1944))->mStatic=(_Bool)0;
    type_138=list_type_129;
    obj_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 346, "CVALUE"))));
    come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_140=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 348, 1946),__exception_result_var_b197=((struct buffer*)(right_value212=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value211=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 348, "buffer"))), "06str.c", 348, 1945)))))), come_pop_stackframe(), __exception_result_var_b197));
    come_call_finalizer3(right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 350, 1949),__exception_result_var_b198=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_140, "06str.c", 350, 1947)), "06str.c", 350, 1948)),"1"), come_pop_stackframe(), __exception_result_var_b198);
    type2_141=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 352, 1950),__exception_result_var_b199=((struct sType*)(right_value213=solve_generics(type_138,type_138,info))), come_pop_stackframe(), __exception_result_var_b199));
    come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_142=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 354, 1951),__exception_result_var_b200=((char*)(right_value214=make_type_name_string(type2_141,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b200));
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj69=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 356, 1952)), "06str.c", 356, 1953))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 356, 1952)), "06str.c", 356, 1953))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 356, 1961),__exception_result_var_b202=((char*)(right_value216=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_142,type_name_142,(come_push_stackframe("06str.c", 356, 1956),__exception_result_var_b201=((char*)(right_value215=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_140, "06str.c", 356, 1954)), "06str.c", 356, 1955))))), come_pop_stackframe(), __exception_result_var_b201),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 356, 1957)), "06str.c", 356, 1958))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 356, 1959)), "06str.c", 356, 1960))->sline,type_name_142))), come_pop_stackframe(), __exception_result_var_b202));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(come_push_stackframe("06str.c", 358, 1962),__exception_result_var_b203=sType_clone(type2_141), come_pop_stackframe(), __exception_result_var_b203))));
    come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_143, "06str.c", 359, 1963)), "06str.c", 359, 1964))->mPointerNum++;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_143, "06str.c", 360, 1965)), "06str.c", 360, 1966))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_141, "06str.c", 361, 1967)), "06str.c", 361, 1968))->mHeap=(_Bool)1;
    __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 362, 1969)), "06str.c", 362, 1970))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 362, 1969)), "06str.c", 362, 1970))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=(come_push_stackframe("06str.c", 362, 1971),__exception_result_var_b204=sType_clone(type2_141), come_pop_stackframe(), __exception_result_var_b204))));
    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj71=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 363, 1972)), "06str.c", 363, 1973))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 363, 1972)), "06str.c", 363, 1973))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 363, 1976),__exception_result_var_b205=((char*)(right_value219=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 363, 1974)), "06str.c", 363, 1975))->c_value,(struct sType*)come_increment_ref_count(type3_143),info))), come_pop_stackframe(), __exception_result_var_b205));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 364, 1977)), "06str.c", 364, 1978))->type, "06str.c", 364, 1979)), "06str.c", 364, 1980))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 365, 1981)), "06str.c", 365, 1982))->var=((void*)0);
    come_params_144=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 367, 1984),__exception_result_var_b206=((struct list$1CVALUEph*)(right_value221=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value220=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 367, "list$1CVALUEph"))), "06str.c", 367, 1983)))))), come_pop_stackframe(), __exception_result_var_b206));
    come_call_finalizer3(right_value220,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value221,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional181=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("06str.c", 369, 1998),__exception_result_var_b208=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_136, "06str.c", 369, 1985)), "06str.c", 369, 1986))->mParamTypes, "06str.c", 369, 1987)),0), "06str.c", 369, 1997)), come_pop_stackframe(), __exception_result_var_b208), "06str.c", 369, 1999)), "06str.c", 369, 2000))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 369, 2001)), "06str.c", 369, 2002))->type, "06str.c", 369, 2003)), "06str.c", 369, 2004))->mHeap,    _if_conditional181) {
        (come_push_stackframe("06str.c", 370,2012),std_move((come_push_stackframe("06str.c", 370, 2009),__exception_result_var_b209=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_136, "06str.c", 370, 2005)), "06str.c", 370, 2006))->mParamTypes, "06str.c", 370, 2007)),0), "06str.c", 370, 2008)), come_pop_stackframe(), __exception_result_var_b209),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_139, "06str.c", 370, 2010)), "06str.c", 370, 2011))->type,obj_value_139,info),come_pop_stackframe());
    }
    (come_push_stackframe("06str.c", 372, 2015),__exception_result_var_b210=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_144, "06str.c", 372, 2013)), "06str.c", 372, 2014)),(struct CVALUE*)come_increment_ref_count(obj_value_139)), come_pop_stackframe(), __exception_result_var_b210);
    come_value2_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "CVALUE"))));
    come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj72=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "06str.c", 376, 2016)), "06str.c", 376, 2017))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "06str.c", 376, 2016)), "06str.c", 376, 2017))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 376, 2021),__exception_result_var_b212=((char*)(right_value223=xsprintf("%d",(come_push_stackframe("06str.c", 376, 2020),__exception_result_var_b211=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(params_104, "06str.c", 376, 2018)), "06str.c", 376, 2019))), come_pop_stackframe(), __exception_result_var_b211)))), come_pop_stackframe(), __exception_result_var_b212));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj73=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "06str.c", 377, 2022)), "06str.c", 377, 2023))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "06str.c", 377, 2022)), "06str.c", 377, 2023))->type=((void*)0);
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_148, "06str.c", 378, 2024)), "06str.c", 378, 2025))->var=((void*)0);
    (come_push_stackframe("06str.c", 380, 2028),__exception_result_var_b213=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_144, "06str.c", 380, 2026)), "06str.c", 380, 2027)),(struct CVALUE*)come_increment_ref_count(come_value2_148)), come_pop_stackframe(), __exception_result_var_b213);
    come_value3_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 382, "CVALUE"))));
    come_call_finalizer3(right_value224,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj74=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_149, "06str.c", 384, 2029)), "06str.c", 384, 2030))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_149, "06str.c", 384, 2029)), "06str.c", 384, 2030))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 384, 2033),__exception_result_var_b214=((char*)(right_value225=xsprintf("%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__117, "06str.c", 384, 2031)), "06str.c", 384, 2032))->mCValueName))), come_pop_stackframe(), __exception_result_var_b214));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj75=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_149, "06str.c", 385, 2034)), "06str.c", 385, 2035))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_149, "06str.c", 385, 2034)), "06str.c", 385, 2035))->type=((void*)0);
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_149, "06str.c", 386, 2036)), "06str.c", 386, 2037))->var=((void*)0);
    (come_push_stackframe("06str.c", 388, 2040),__exception_result_var_b215=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_144, "06str.c", 388, 2038)), "06str.c", 388, 2039)),(struct CVALUE*)come_increment_ref_count(come_value3_149)), come_pop_stackframe(), __exception_result_var_b215);
    buf_150=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 390, 2042),__exception_result_var_b216=((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 390, "buffer"))), "06str.c", 390, 2041)))))), come_pop_stackframe(), __exception_result_var_b216));
    come_call_finalizer3(right_value226,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 392, 2045),__exception_result_var_b217=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 392, 2043)), "06str.c", 392, 2044)),generics_fun_name_135), come_pop_stackframe(), __exception_result_var_b217);
    (come_push_stackframe("06str.c", 393, 2048),__exception_result_var_b218=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 393, 2046)), "06str.c", 393, 2047)),"("), come_pop_stackframe(), __exception_result_var_b218);
    j_151=0;
    for(    o2_saved_152=(struct list$1CVALUEph*)come_increment_ref_count((come_params_144)),it_153=(come_push_stackframe("06str.c", 396, 2051),__exception_result_var_b219=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_152), "06str.c", 396, 2049)), "06str.c", 396, 2050))), come_pop_stackframe(), __exception_result_var_b219);    !(come_push_stackframe("06str.c", 396, 2054),__exception_result_var_b220=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_152), "06str.c", 396, 2052)), "06str.c", 396, 2053))), come_pop_stackframe(), __exception_result_var_b220);    it_153=(come_push_stackframe("06str.c", 396, 2057),__exception_result_var_b221=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_152), "06str.c", 396, 2055)), "06str.c", 396, 2056))), come_pop_stackframe(), __exception_result_var_b221)    ){
        (come_push_stackframe("06str.c", 397, 2062),__exception_result_var_b222=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 397, 2058)), "06str.c", 397, 2059)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_153, "06str.c", 397, 2060)), "06str.c", 397, 2061))->c_value), come_pop_stackframe(), __exception_result_var_b222);
        if(_if_conditional182=j_151!=(come_push_stackframe("06str.c", 399, 2065),__exception_result_var_b223=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_144, "06str.c", 399, 2063)), "06str.c", 399, 2064))), come_pop_stackframe(), __exception_result_var_b223)-1,        _if_conditional182) {
            (come_push_stackframe("06str.c", 400, 2068),__exception_result_var_b224=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 400, 2066)), "06str.c", 400, 2067)),","), come_pop_stackframe(), __exception_result_var_b224);
        }
        j_151++;
    }
    come_call_finalizer3(o2_saved_152,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("06str.c", 405, 2071),__exception_result_var_b225=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 405, 2069)), "06str.c", 405, 2070)),")"), come_pop_stackframe(), __exception_result_var_b225);
    come_value4_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 407, "CVALUE"))));
    come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 409, 2072)), "06str.c", 409, 2073))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 409, 2072)), "06str.c", 409, 2073))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 409, 2076),__exception_result_var_b226=((char*)(right_value229=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 409, 2074)), "06str.c", 409, 2075))))), come_pop_stackframe(), __exception_result_var_b226));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_137, "06str.c", 411, 2077)), "06str.c", 411, 2078))->mHeap) {
        __dec_obj77=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 412, 2079)), "06str.c", 412, 2080))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 412, 2079)), "06str.c", 412, 2080))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 412, 2084),__exception_result_var_b228=((char*)(right_value231=append_object_to_right_values((come_push_stackframe("06str.c", 412, 2083),__exception_result_var_b227=((char*)(right_value230=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 412, 2081)), "06str.c", 412, 2082))))), come_pop_stackframe(), __exception_result_var_b227),(struct sType*)come_increment_ref_count(result_type_137),info))), come_pop_stackframe(), __exception_result_var_b228));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 415, 2085)), "06str.c", 415, 2086))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 415, 2085)), "06str.c", 415, 2086))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=(come_push_stackframe("06str.c", 415, 2087),__exception_result_var_b229=sType_clone(result_type_137), come_pop_stackframe(), __exception_result_var_b229))));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 416, 2088)), "06str.c", 416, 2089))->type, "06str.c", 416, 2090)), "06str.c", 416, 2091))->mStatic=(_Bool)0;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_154, "06str.c", 417, 2092)), "06str.c", 417, 2093))->var=((void*)0);
    (come_push_stackframe("06str.c", 419,2097),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 419, 2096),__exception_result_var_b230=((char*)(right_value233=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_150, "06str.c", 419, 2094)), "06str.c", 419, 2095))))), come_pop_stackframe(), __exception_result_var_b230)),come_pop_stackframe());
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 421, 2102),__exception_result_var_b231=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 421, 2098)), "06str.c", 421, 2099))->stack, "06str.c", 421, 2100)), "06str.c", 421, 2101)),(struct CVALUE*)come_increment_ref_count(come_value4_154)), come_pop_stackframe(), __exception_result_var_b231);
    __result125__ = (_Bool)1;
    come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
    return __result125__;
    come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1CVALUEph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 101, 1681)), "./neo-c.h", 101, 1682))->head=((void*)0);
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 102, 1683)), "./neo-c.h", 102, 1684))->tail=((void*)0);
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 103, 1685)), "./neo-c.h", 103, 1686))->len=0;
        __result107__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result107__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_105;
_Bool _while_condtional17;
struct list_item$1CVALUEph* prev_it_106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_105, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_106, 0, sizeof(struct list_item$1CVALUEph*));
            it_105=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 1687)), "./neo-c.h", 120, 1688))->head;
            while(_while_condtional17=it_105!=((void*)0),            _while_condtional17) {
                prev_it_106=it_105;
                it_105=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_105, "./neo-c.h", 123, 1689)), "./neo-c.h", 123, 1690))->next;
                come_call_finalizer3(prev_it_106,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value185;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj62;
_Bool _if_conditional166;
void* right_value186;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj63;
void* right_value187;
struct list_item$1sNodeph* litem_114;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1sNodeph*));
right_value186 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1sNodeph*));
right_value187 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional165=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 222, 1718)), "./neo-c.h", 222, 1719))->len==0,        _if_conditional165) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value185=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 223, "list_item$1sNodeph"))));
            come_call_finalizer3(right_value185,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_112, "./neo-c.h", 225, 1720)), "./neo-c.h", 225, 1721))->prev=((void*)0);
            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_112, "./neo-c.h", 226, 1722)), "./neo-c.h", 226, 1723))->next=((void*)0);
            __dec_obj62=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_112, "./neo-c.h", 227, 1724)), "./neo-c.h", 227, 1725))->item;
            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_112, "./neo-c.h", 227, 1724)), "./neo-c.h", 227, 1725))->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 229, 1726)), "./neo-c.h", 229, 1727))->tail=litem_112;
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 230, 1728)), "./neo-c.h", 230, 1729))->head=litem_112;
        }
        else {
            if(_if_conditional166=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 232, 1730)), "./neo-c.h", 232, 1731))->len==1,            _if_conditional166) {
                litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value186=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 233, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value186,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_113, "./neo-c.h", 235, 1732)), "./neo-c.h", 235, 1733))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 235, 1734)), "./neo-c.h", 235, 1735))->head;
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_113, "./neo-c.h", 236, 1736)), "./neo-c.h", 236, 1737))->next=((void*)0);
                __dec_obj63=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_113, "./neo-c.h", 237, 1738)), "./neo-c.h", 237, 1739))->item;
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_113, "./neo-c.h", 237, 1738)), "./neo-c.h", 237, 1739))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 239, 1740)), "./neo-c.h", 239, 1741))->tail=litem_113;
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 240, 1742)), "./neo-c.h", 240, 1743))->head, "./neo-c.h", 240, 1744)), "./neo-c.h", 240, 1745))->next=litem_113;
            }
            else {
                litem_114=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 243, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value187,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_114, "./neo-c.h", 245, 1746)), "./neo-c.h", 245, 1747))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 245, 1748)), "./neo-c.h", 245, 1749))->tail;
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_114, "./neo-c.h", 246, 1750)), "./neo-c.h", 246, 1751))->next=((void*)0);
                __dec_obj64=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_114, "./neo-c.h", 247, 1752)), "./neo-c.h", 247, 1753))->item;
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_114, "./neo-c.h", 247, 1752)), "./neo-c.h", 247, 1753))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 249, 1754)), "./neo-c.h", 249, 1755))->tail, "./neo-c.h", 249, 1756)), "./neo-c.h", 249, 1757))->next=litem_114;
                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 250, 1758)), "./neo-c.h", 250, 1759))->tail=litem_114;
            }
        }
        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 253, 1760)), "./neo-c.h", 253, 1761))->len++;
        __result109__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result109__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional167;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional167=self==((void*)0),        _if_conditional167) {
            __result110__ = 0;
            return __result110__;
        }
        __result111__ = ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 360, 1764)), "./neo-c.h", 360, 1765))->len;
        return __result111__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional168;
struct CVALUE* result_121;
void* __exception_result_var_b169;
struct CVALUE* __result112__;
_Bool _if_conditional169;
struct CVALUE* __result113__;
struct CVALUE* result_122;
void* __exception_result_var_b170;
struct CVALUE* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct CVALUE*));
memset(&result_122, 0, sizeof(struct CVALUE*));
        if(_if_conditional168=self==((void*)0),        _if_conditional168) {
            (come_push_stackframe("./neo-c.h", 284, 1788),__exception_result_var_b169=memset(&result_121,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b169);
            __result112__ = __result_obj__ = result_121;
            return __result112__;
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 1789)), "./neo-c.h", 287, 1790))->it=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 1791)), "./neo-c.h", 287, 1792))->head;
        if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 289, 1793)), "./neo-c.h", 289, 1794))->it) {
            __result113__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 290, 1795)), "./neo-c.h", 290, 1796))->it, "./neo-c.h", 290, 1797)), "./neo-c.h", 290, 1798))->item;
            return __result113__;
        }
        (come_push_stackframe("./neo-c.h", 294, 1799),__exception_result_var_b170=memset(&result_122,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b170);
        __result114__ = __result_obj__ = result_122;
        return __result114__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
        __result115__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 317, 1803)), "./neo-c.h", 317, 1804))->it==((void*)0);
        return __result115__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional170;
struct CVALUE* result_124;
void* __exception_result_var_b173;
struct CVALUE* __result116__;
_Bool _if_conditional171;
struct CVALUE* __result117__;
struct CVALUE* result_125;
void* __exception_result_var_b174;
struct CVALUE* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct CVALUE*));
memset(&result_125, 0, sizeof(struct CVALUE*));
        if(_if_conditional170=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 299, 1808)), "./neo-c.h", 299, 1809))->it==((void*)0),        _if_conditional170) {
            (come_push_stackframe("./neo-c.h", 301, 1810),__exception_result_var_b173=memset(&result_124,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b173);
            __result116__ = __result_obj__ = result_124;
            return __result116__;
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 1811)), "./neo-c.h", 305, 1812))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 1813)), "./neo-c.h", 305, 1814))->it, "./neo-c.h", 305, 1815)), "./neo-c.h", 305, 1816))->next;
        if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 307, 1817)), "./neo-c.h", 307, 1818))->it) {
            __result117__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 308, 1819)), "./neo-c.h", 308, 1820))->it, "./neo-c.h", 308, 1821)), "./neo-c.h", 308, 1822))->item;
            return __result117__;
        }
        (come_push_stackframe("./neo-c.h", 312, 1823),__exception_result_var_b174=memset(&result_125,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b174);
        __result118__ = __result_obj__ = result_125;
        return __result118__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional173;
struct list_item$1CVALUEph* it_126;
int i_127;
_Bool _while_condtional18;
_Bool _if_conditional174;
struct CVALUE* __result119__;
struct CVALUE* default_value_128;
void* __exception_result_var_b176;
struct CVALUE* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_127, 0, sizeof(int));
memset(&default_value_128, 0, sizeof(struct CVALUE*));
                if(_if_conditional173=position<0,                _if_conditional173) {
                    position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 676, 1832)), "./neo-c.h", 676, 1833))->len;
                }
                it_126=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 679, 1834)), "./neo-c.h", 679, 1835))->head;
                i_127=0;
                while(_while_condtional18=it_126!=((void*)0),                _while_condtional18) {
                    if(_if_conditional174=position==i_127,                    _if_conditional174) {
                        __result119__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_126, "./neo-c.h", 683, 1836)), "./neo-c.h", 683, 1837))->item;
                        return __result119__;
                    }
                    it_126=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_126, "./neo-c.h", 685, 1838)), "./neo-c.h", 685, 1839))->next;
                    i_127++;
                }
                (come_push_stackframe("./neo-c.h", 690, 1840),__exception_result_var_b176=memset(&default_value_128,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b176);
                __result120__ = __result_obj__ = default_value_128;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result120__;
                come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional175;
void* right_value199;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj65;
_Bool _if_conditional176;
void* right_value200;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj66;
void* right_value201;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj67;
struct list$1sTypeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
right_value200 = (void*)0;
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
right_value201 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional175=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 1871)), "./neo-c.h", 222, 1872))->len==0,        _if_conditional175) {
            litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value199=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value199,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 225, 1873)), "./neo-c.h", 225, 1874))->prev=((void*)0);
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 226, 1875)), "./neo-c.h", 226, 1876))->next=((void*)0);
            __dec_obj65=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 227, 1877)), "./neo-c.h", 227, 1878))->item;
            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_130, "./neo-c.h", 227, 1877)), "./neo-c.h", 227, 1878))->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 1879)), "./neo-c.h", 229, 1880))->tail=litem_130;
            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 1881)), "./neo-c.h", 230, 1882))->head=litem_130;
        }
        else {
            if(_if_conditional176=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 1883)), "./neo-c.h", 232, 1884))->len==1,            _if_conditional176) {
                litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value200=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value200,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 235, 1885)), "./neo-c.h", 235, 1886))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 1887)), "./neo-c.h", 235, 1888))->head;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 236, 1889)), "./neo-c.h", 236, 1890))->next=((void*)0);
                __dec_obj66=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 237, 1891)), "./neo-c.h", 237, 1892))->item;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_131, "./neo-c.h", 237, 1891)), "./neo-c.h", 237, 1892))->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 1893)), "./neo-c.h", 239, 1894))->tail=litem_131;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 1895)), "./neo-c.h", 240, 1896))->head, "./neo-c.h", 240, 1897)), "./neo-c.h", 240, 1898))->next=litem_131;
            }
            else {
                litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value201=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value201,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 245, 1899)), "./neo-c.h", 245, 1900))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 1901)), "./neo-c.h", 245, 1902))->tail;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 246, 1903)), "./neo-c.h", 246, 1904))->next=((void*)0);
                __dec_obj67=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 247, 1905)), "./neo-c.h", 247, 1906))->item;
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_132, "./neo-c.h", 247, 1905)), "./neo-c.h", 247, 1906))->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 1907)), "./neo-c.h", 249, 1908))->tail, "./neo-c.h", 249, 1909)), "./neo-c.h", 249, 1910))->next=litem_132;
                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 1911)), "./neo-c.h", 250, 1912))->tail=litem_132;
            }
        }
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 1913)), "./neo-c.h", 253, 1914))->len++;
        __result121__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result121__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional179;
struct list_item$1sTypeph* it_145;
int i_146;
_Bool _while_condtional19;
_Bool _if_conditional180;
struct sType* __result123__;
struct sType* default_value_147;
void* __exception_result_var_b207;
struct sType* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_146, 0, sizeof(int));
memset(&default_value_147, 0, sizeof(struct sType*));
        if(_if_conditional179=position<0,        _if_conditional179) {
            position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1988)), "./neo-c.h", 676, 1989))->len;
        }
        it_145=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1990)), "./neo-c.h", 679, 1991))->head;
        i_146=0;
        while(_while_condtional19=it_145!=((void*)0),        _while_condtional19) {
            if(_if_conditional180=position==i_146,            _if_conditional180) {
                __result123__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_145, "./neo-c.h", 683, 1992)), "./neo-c.h", 683, 1993))->item;
                return __result123__;
            }
            it_145=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_145, "./neo-c.h", 685, 1994)), "./neo-c.h", 685, 1995))->next;
            i_146++;
        }
        (come_push_stackframe("./neo-c.h", 690, 1996),__exception_result_var_b207=memset(&default_value_147,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b207);
        __result124__ = __result_obj__ = default_value_147;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result124__;
        come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
void* right_value234;
struct sNodeBase* __exception_result_var_b232;
struct list$1sNodeph* __dec_obj79;
struct sTupleNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    (come_push_stackframe("06str.c", 431, 2105),__exception_result_var_b232=((struct sNodeBase*)(right_value234=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "06str.c", 431, 2103)), "06str.c", 431, 2104))),info))), come_pop_stackframe(), __exception_result_var_b232);
    come_call_finalizer3(right_value234,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=((struct sTupleNode*)come_null_check(self, "06str.c", 433, 2106))->tuple_elements;
    ((struct sTupleNode*)come_null_check(self, "06str.c", 433, 2106))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result126__ = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result126__;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__;
void* right_value235;
char* __exception_result_var_b233;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result127__ = __result_obj__ = (come_push_stackframe("06str.c", 438, 2115),__exception_result_var_b233=((char*)(right_value235=__builtin_string("sTupleNode"))), come_pop_stackframe(), __exception_result_var_b233);
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* tuple_elements_155;
void* right_value236;
void* right_value237;
struct list$1sTypeph* __exception_result_var_b234;
struct list$1sTypeph* tuple_types_156;
void* right_value238;
void* right_value239;
struct list$1CVALUEph* __exception_result_var_b235;
struct list$1CVALUEph* tuple_values_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* __exception_result_var_b236;
struct sNode* it_159;
_Bool __exception_result_var_b237;
struct sNode* __exception_result_var_b238;
_Bool __exception_result_var_b239;
_Bool _if_conditional186;
_Bool __result128__;
void* right_value240;
struct CVALUE* __exception_result_var_b240;
struct CVALUE* come_value_160;
struct CVALUE* __exception_result_var_b243;
void* right_value244;
struct list$1CVALUEph* __exception_result_var_b244;
struct sType* __exception_result_var_b245;
void* right_value245;
struct list$1sTypeph* __exception_result_var_b246;
void* right_value246;
int __exception_result_var_b247;
void* right_value247;
char* __exception_result_var_b248;
void* right_value248;
struct sType* __exception_result_var_b249;
struct sType* type_162;
struct list$1sTypeph* o2_saved_163;
struct sType* __exception_result_var_b252;
struct sType* it_166;
_Bool __exception_result_var_b253;
struct sType* __exception_result_var_b256;
struct sType* __exception_result_var_b257;
void* right_value249;
struct list$1sTypeph* __exception_result_var_b258;
void* right_value250;
struct CVALUE* obj_value_169;
void* right_value251;
void* right_value252;
struct buffer* __exception_result_var_b259;
struct buffer* num_string_170;
struct buffer* __exception_result_var_b260;
void* right_value253;
struct sType* __exception_result_var_b261;
struct sType* type2_171;
void* right_value254;
char* __exception_result_var_b262;
char* type_name_172;
void* right_value255;
char* __exception_result_var_b263;
void* right_value256;
char* __exception_result_var_b264;
char* __dec_obj82;
struct sType* __exception_result_var_b265;
void* right_value257;
struct sType* type3_173;
struct sType* __exception_result_var_b266;
void* right_value258;
struct sType* __dec_obj83;
void* right_value259;
char* __exception_result_var_b267;
char* __dec_obj84;
struct sType* __exception_result_var_b268;
void* right_value260;
struct sType* obj_type_174;
char* fun_name_175;
void* right_value261;
char* __exception_result_var_b269;
void* right_value262;
char* __exception_result_var_b270;
void* right_value263;
char* __exception_result_var_b271;
char* generics_fun_name_176;
struct sFun* __exception_result_var_b272;
struct sFun* fun_177;
_Bool _if_conditional195;
void* right_value264;
char* __exception_result_var_b273;
void* right_value265;
char* __exception_result_var_b274;
char* __dec_obj85;
struct sFun* __exception_result_var_b275;
_Bool _if_conditional196;
_Bool __result138__;
struct sType* __exception_result_var_b276;
void* right_value266;
struct sType* result_type_178;
void* right_value267;
void* right_value268;
struct list$1CVALUEph* __exception_result_var_b277;
struct list$1CVALUEph* come_params_179;
struct sType* __exception_result_var_b278;
_Bool _if_conditional197;
struct sType* __exception_result_var_b279;
struct list$1CVALUEph* __exception_result_var_b280;
int i_180;
struct list$1CVALUEph* o2_saved_181;
struct CVALUE* __exception_result_var_b281;
struct CVALUE* it_182;
_Bool __exception_result_var_b282;
struct CVALUE* __exception_result_var_b283;
struct CVALUE* __exception_result_var_b284;
void* right_value269;
struct CVALUE* come_value_183;
struct sType* __exception_result_var_b285;
struct sType* __exception_result_var_b286;
_Bool _if_conditional198;
struct sType* __exception_result_var_b287;
struct list$1CVALUEph* __exception_result_var_b288;
void* right_value270;
void* right_value271;
struct buffer* __exception_result_var_b289;
struct buffer* buf_184;
struct buffer* __exception_result_var_b290;
struct buffer* __exception_result_var_b291;
int j_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* __exception_result_var_b292;
struct CVALUE* it_187;
_Bool __exception_result_var_b293;
struct CVALUE* __exception_result_var_b294;
struct buffer* __exception_result_var_b295;
int __exception_result_var_b296;
_Bool _if_conditional199;
struct buffer* __exception_result_var_b297;
struct buffer* __exception_result_var_b298;
void* right_value272;
struct CVALUE* come_value2_188;
void* right_value273;
char* __exception_result_var_b299;
char* __dec_obj86;
_Bool _if_conditional200;
void* right_value274;
char* __exception_result_var_b300;
void* right_value275;
char* __exception_result_var_b301;
char* __dec_obj87;
struct sType* __exception_result_var_b302;
void* right_value276;
struct sType* __dec_obj88;
void* right_value277;
char* __exception_result_var_b303;
struct list$1CVALUEph* __exception_result_var_b304;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_155, 0, sizeof(struct list$1sNodeph*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&tuple_types_156, 0, sizeof(struct list$1sTypeph*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&tuple_values_157, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_158, 0, sizeof(struct list$1sNodeph*));
memset(&it_159, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&come_value_160, 0, sizeof(struct CVALUE*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
memset(&type_162, 0, sizeof(struct sType*));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_166, 0, sizeof(struct sType*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&obj_value_169, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&num_string_170, 0, sizeof(struct buffer*));
right_value253 = (void*)0;
memset(&type2_171, 0, sizeof(struct sType*));
right_value254 = (void*)0;
memset(&type_name_172, 0, sizeof(char*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&type3_173, 0, sizeof(struct sType*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
memset(&obj_type_174, 0, sizeof(struct sType*));
memset(&fun_name_175, 0, sizeof(char*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&generics_fun_name_176, 0, sizeof(char*));
memset(&fun_177, 0, sizeof(struct sFun*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&result_type_178, 0, sizeof(struct sType*));
right_value267 = (void*)0;
right_value268 = (void*)0;
memset(&come_params_179, 0, sizeof(struct list$1CVALUEph*));
memset(&i_180, 0, sizeof(int));
memset(&o2_saved_181, 0, sizeof(struct list$1CVALUEph*));
memset(&it_182, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&j_185, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_187, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
memset(&come_value2_188, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
    tuple_elements_155=((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "06str.c", 443, 2116)), "06str.c", 443, 2117))->tuple_elements;
    tuple_types_156=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("06str.c", 444, 2119),__exception_result_var_b234=((struct list$1sTypeph*)(right_value237=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value236=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 444, "list$1sTypeph"))), "06str.c", 444, 2118)))))), come_pop_stackframe(), __exception_result_var_b234));
    come_call_finalizer3(right_value236,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value237,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    tuple_values_157=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 445, 2121),__exception_result_var_b235=((struct list$1CVALUEph*)(right_value239=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value238=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 445, "list$1CVALUEph"))), "06str.c", 445, 2120)))))), come_pop_stackframe(), __exception_result_var_b235));
    come_call_finalizer3(right_value238,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value239,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_158=(tuple_elements_155),it_159=(come_push_stackframe("06str.c", 447, 2124),__exception_result_var_b236=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_158), "06str.c", 447, 2122)), "06str.c", 447, 2123))), come_pop_stackframe(), __exception_result_var_b236);    !(come_push_stackframe("06str.c", 447, 2127),__exception_result_var_b237=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_158), "06str.c", 447, 2125)), "06str.c", 447, 2126))), come_pop_stackframe(), __exception_result_var_b237);    it_159=(come_push_stackframe("06str.c", 447, 2130),__exception_result_var_b238=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_158), "06str.c", 447, 2128)), "06str.c", 447, 2129))), come_pop_stackframe(), __exception_result_var_b238)    ){
        if(_if_conditional186=!(come_push_stackframe("06str.c", 448, 2131),__exception_result_var_b239=node_compile(it_159,info), come_pop_stackframe(), __exception_result_var_b239),        _if_conditional186) {
            __result128__ = (_Bool)0;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result128__;
        }
        come_value_160=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 452, 2132),__exception_result_var_b240=((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b240));
        come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("06str.c", 453,2133),dec_stack_ptr(1,info),come_pop_stackframe());
        (come_push_stackframe("06str.c", 455, 2155),__exception_result_var_b244=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(tuple_values_157, "06str.c", 455, 2134)), "06str.c", 455, 2135)),(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=(come_push_stackframe("06str.c", 455, 2154),__exception_result_var_b243=CVALUE_clone(come_value_160), come_pop_stackframe(), __exception_result_var_b243))))), come_pop_stackframe(), __exception_result_var_b244);
        come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("06str.c", 456, 2161),__exception_result_var_b246=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(tuple_types_156, "06str.c", 456, 2156)), "06str.c", 456, 2157)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=(come_push_stackframe("06str.c", 456, 2160),__exception_result_var_b245=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_160, "06str.c", 456, 2158)), "06str.c", 456, 2159))->type), come_pop_stackframe(), __exception_result_var_b245))))), come_pop_stackframe(), __exception_result_var_b246);
        come_call_finalizer3(right_value245,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_162=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 459, 2167),__exception_result_var_b249=((struct sType*)(right_value248=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 459, "sType"))), "06str.c", 459, 2162))),(come_push_stackframe("06str.c", 459, 2166),__exception_result_var_b248=((char*)(right_value247=xsprintf("tuple%d",(come_push_stackframe("06str.c", 459, 2165),__exception_result_var_b247=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(tuple_types_156, "06str.c", 459, 2163)), "06str.c", 459, 2164))), come_pop_stackframe(), __exception_result_var_b247)))), come_pop_stackframe(), __exception_result_var_b248),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b249));
    come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, __result_obj__);
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value248,sType_finalize, 0, 1, 0, 0, __result_obj__);
    for(    o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_156)),it_166=(come_push_stackframe("06str.c", 461, 2182),__exception_result_var_b252=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_163), "06str.c", 461, 2168)), "06str.c", 461, 2169))), come_pop_stackframe(), __exception_result_var_b252);    !(come_push_stackframe("06str.c", 461, 2187),__exception_result_var_b253=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_163), "06str.c", 461, 2183)), "06str.c", 461, 2184))), come_pop_stackframe(), __exception_result_var_b253);    it_166=(come_push_stackframe("06str.c", 461, 2206),__exception_result_var_b256=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_163), "06str.c", 461, 2188)), "06str.c", 461, 2189))), come_pop_stackframe(), __exception_result_var_b256)    ){
        (come_push_stackframe("06str.c", 462, 2212),__exception_result_var_b258=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_162, "06str.c", 462, 2207)), "06str.c", 462, 2208))->mGenericsTypes, "06str.c", 462, 2209)), "06str.c", 462, 2210)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=(come_push_stackframe("06str.c", 462, 2211),__exception_result_var_b257=sType_clone(it_166), come_pop_stackframe(), __exception_result_var_b257))))), come_pop_stackframe(), __exception_result_var_b258);
        come_call_finalizer3(right_value249,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    come_call_finalizer3(o2_saved_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 465, "CVALUE"))));
    come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_170=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 467, 2214),__exception_result_var_b259=((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 467, "buffer"))), "06str.c", 467, 2213)))))), come_pop_stackframe(), __exception_result_var_b259));
    come_call_finalizer3(right_value251,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 469, 2217),__exception_result_var_b260=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_170, "06str.c", 469, 2215)), "06str.c", 469, 2216)),"1"), come_pop_stackframe(), __exception_result_var_b260);
    type2_171=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 471, 2218),__exception_result_var_b261=((struct sType*)(right_value253=solve_generics(type_162,type_162,info))), come_pop_stackframe(), __exception_result_var_b261));
    come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_172=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 473, 2219),__exception_result_var_b262=((char*)(right_value254=make_type_name_string(type2_171,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b262));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 475, 2220)), "06str.c", 475, 2221))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 475, 2220)), "06str.c", 475, 2221))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 475, 2229),__exception_result_var_b264=((char*)(right_value256=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,(come_push_stackframe("06str.c", 475, 2224),__exception_result_var_b263=((char*)(right_value255=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_170, "06str.c", 475, 2222)), "06str.c", 475, 2223))))), come_pop_stackframe(), __exception_result_var_b263),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 475, 2225)), "06str.c", 475, 2226))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 475, 2227)), "06str.c", 475, 2228))->sline,type_name_172))), come_pop_stackframe(), __exception_result_var_b264));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_173=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(come_push_stackframe("06str.c", 477, 2230),__exception_result_var_b265=sType_clone(type2_171), come_pop_stackframe(), __exception_result_var_b265))));
    come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_173, "06str.c", 478, 2231)), "06str.c", 478, 2232))->mPointerNum++;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_173, "06str.c", 479, 2233)), "06str.c", 479, 2234))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_171, "06str.c", 480, 2235)), "06str.c", 480, 2236))->mHeap=(_Bool)1;
    __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 481, 2237)), "06str.c", 481, 2238))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 481, 2237)), "06str.c", 481, 2238))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=(come_push_stackframe("06str.c", 481, 2239),__exception_result_var_b266=sType_clone(type2_171), come_pop_stackframe(), __exception_result_var_b266))));
    come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value258,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 482, 2240)), "06str.c", 482, 2241))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 482, 2240)), "06str.c", 482, 2241))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 482, 2244),__exception_result_var_b267=((char*)(right_value259=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 482, 2242)), "06str.c", 482, 2243))->c_value,(struct sType*)come_increment_ref_count(type3_173),info))), come_pop_stackframe(), __exception_result_var_b267));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 483, 2245)), "06str.c", 483, 2246))->type, "06str.c", 483, 2247)), "06str.c", 483, 2248))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 484, 2249)), "06str.c", 484, 2250))->var=((void*)0);
    obj_type_174=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(come_push_stackframe("06str.c", 486, 2251),__exception_result_var_b268=sType_clone(type2_171), come_pop_stackframe(), __exception_result_var_b268))));
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_175="initialize";
    generics_fun_name_176=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 489, 2256),__exception_result_var_b271=((char*)(right_value263=string_to_string(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("06str.c", 489, 2253),__exception_result_var_b270=((char*)(right_value262=make_generics_function(obj_type_174,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 489, 2252),__exception_result_var_b269=((char*)(right_value261=__builtin_string(fun_name_175))), come_pop_stackframe(), __exception_result_var_b269)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b270), "06str.c", 489, 2254)), "06str.c", 489, 2255))))), come_pop_stackframe(), __exception_result_var_b271));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_177=(come_push_stackframe("06str.c", 491, 2261),__exception_result_var_b272=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 491, 2257)), "06str.c", 491, 2258))->funcs, "06str.c", 491, 2259)), "06str.c", 491, 2260)),generics_fun_name_176,((void*)0)), come_pop_stackframe(), __exception_result_var_b272);
    if(_if_conditional195=fun_177==((void*)0),    _if_conditional195) {
        __dec_obj85=generics_fun_name_176;
        generics_fun_name_176=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 494, 2263),__exception_result_var_b274=((char*)(right_value265=create_method_name(obj_type_174,(_Bool)0,(come_push_stackframe("06str.c", 494, 2262),__exception_result_var_b273=((char*)(right_value264=__builtin_string(fun_name_175))), come_pop_stackframe(), __exception_result_var_b273),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b274));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_177=(come_push_stackframe("06str.c", 496, 2268),__exception_result_var_b275=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 496, 2264)), "06str.c", 496, 2265))->funcs, "06str.c", 496, 2266)), "06str.c", 496, 2267)),generics_fun_name_176,((void*)0)), come_pop_stackframe(), __exception_result_var_b275);
        if(_if_conditional196=fun_177==((void*)0),        _if_conditional196) {
            (come_push_stackframe("06str.c", 499,2273),err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_176,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 499, 2269)), "06str.c", 499, 2270))->come_fun, "06str.c", 499, 2271)), "06str.c", 499, 2272))->mName),come_pop_stackframe());
            __result138__ = (_Bool)1;
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
            return __result138__;
        }
    }
    result_type_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=(come_push_stackframe("06str.c", 504, 2276),__exception_result_var_b276=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 504, 2274)), "06str.c", 504, 2275))->mResultType), come_pop_stackframe(), __exception_result_var_b276))));
    come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_178, "06str.c", 505, 2277)), "06str.c", 505, 2278))->mStatic=(_Bool)0;
    come_params_179=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 507, 2280),__exception_result_var_b277=((struct list$1CVALUEph*)(right_value268=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value267=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 507, "list$1CVALUEph"))), "06str.c", 507, 2279)))))), come_pop_stackframe(), __exception_result_var_b277));
    come_call_finalizer3(right_value267,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional197=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("06str.c", 509, 2285),__exception_result_var_b278=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 509, 2281)), "06str.c", 509, 2282))->mParamTypes, "06str.c", 509, 2283)),0), "06str.c", 509, 2284)), come_pop_stackframe(), __exception_result_var_b278), "06str.c", 509, 2286)), "06str.c", 509, 2287))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 509, 2288)), "06str.c", 509, 2289))->type, "06str.c", 509, 2290)), "06str.c", 509, 2291))->mHeap,    _if_conditional197) {
        (come_push_stackframe("06str.c", 510,2299),std_move((come_push_stackframe("06str.c", 510, 2296),__exception_result_var_b279=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 510, 2292)), "06str.c", 510, 2293))->mParamTypes, "06str.c", 510, 2294)),0), "06str.c", 510, 2295)), come_pop_stackframe(), __exception_result_var_b279),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_169, "06str.c", 510, 2297)), "06str.c", 510, 2298))->type,obj_value_169,info),come_pop_stackframe());
    }
    (come_push_stackframe("06str.c", 512, 2302),__exception_result_var_b280=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_179, "06str.c", 512, 2300)), "06str.c", 512, 2301)),(struct CVALUE*)come_increment_ref_count(obj_value_169)), come_pop_stackframe(), __exception_result_var_b280);
    i_180=1;
    for(    o2_saved_181=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_157)),it_182=(come_push_stackframe("06str.c", 515, 2305),__exception_result_var_b281=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_181), "06str.c", 515, 2303)), "06str.c", 515, 2304))), come_pop_stackframe(), __exception_result_var_b281);    !(come_push_stackframe("06str.c", 515, 2308),__exception_result_var_b282=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_181), "06str.c", 515, 2306)), "06str.c", 515, 2307))), come_pop_stackframe(), __exception_result_var_b282);    it_182=(come_push_stackframe("06str.c", 515, 2311),__exception_result_var_b283=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_181), "06str.c", 515, 2309)), "06str.c", 515, 2310))), come_pop_stackframe(), __exception_result_var_b283)    ){
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(come_push_stackframe("06str.c", 516, 2312),__exception_result_var_b284=CVALUE_clone(it_182), come_pop_stackframe(), __exception_result_var_b284))));
        come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional198=(come_push_stackframe("06str.c", 518, 2317),__exception_result_var_b285=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 518, 2313)), "06str.c", 518, 2314))->mParamTypes, "06str.c", 518, 2315)),i_180), "06str.c", 518, 2316)), come_pop_stackframe(), __exception_result_var_b285)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("06str.c", 518, 2322),__exception_result_var_b286=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 518, 2318)), "06str.c", 518, 2319))->mParamTypes, "06str.c", 518, 2320)),i_180), "06str.c", 518, 2321)), come_pop_stackframe(), __exception_result_var_b286), "06str.c", 518, 2323)), "06str.c", 518, 2324))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "06str.c", 518, 2325)), "06str.c", 518, 2326))->type, "06str.c", 518, 2327)), "06str.c", 518, 2328))->mHeap,        _if_conditional198) {
            (come_push_stackframe("06str.c", 519,2336),std_move((come_push_stackframe("06str.c", 519, 2333),__exception_result_var_b287=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_177, "06str.c", 519, 2329)), "06str.c", 519, 2330))->mParamTypes, "06str.c", 519, 2331)),i_180), "06str.c", 519, 2332)), come_pop_stackframe(), __exception_result_var_b287),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "06str.c", 519, 2334)), "06str.c", 519, 2335))->type,come_value_183,info),come_pop_stackframe());
        }
        (come_push_stackframe("06str.c", 521, 2339),__exception_result_var_b288=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_179, "06str.c", 521, 2337)), "06str.c", 521, 2338)),(struct CVALUE*)come_increment_ref_count(come_value_183)), come_pop_stackframe(), __exception_result_var_b288);
        i_180++;
        come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_184=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 526, 2341),__exception_result_var_b289=((struct buffer*)(right_value271=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value270=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 526, "buffer"))), "06str.c", 526, 2340)))))), come_pop_stackframe(), __exception_result_var_b289));
    come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 528, 2344),__exception_result_var_b290=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 528, 2342)), "06str.c", 528, 2343)),generics_fun_name_176), come_pop_stackframe(), __exception_result_var_b290);
    (come_push_stackframe("06str.c", 529, 2347),__exception_result_var_b291=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 529, 2345)), "06str.c", 529, 2346)),"("), come_pop_stackframe(), __exception_result_var_b291);
    j_185=0;
    for(    o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((come_params_179)),it_187=(come_push_stackframe("06str.c", 532, 2350),__exception_result_var_b292=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "06str.c", 532, 2348)), "06str.c", 532, 2349))), come_pop_stackframe(), __exception_result_var_b292);    !(come_push_stackframe("06str.c", 532, 2353),__exception_result_var_b293=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "06str.c", 532, 2351)), "06str.c", 532, 2352))), come_pop_stackframe(), __exception_result_var_b293);    it_187=(come_push_stackframe("06str.c", 532, 2356),__exception_result_var_b294=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_186), "06str.c", 532, 2354)), "06str.c", 532, 2355))), come_pop_stackframe(), __exception_result_var_b294)    ){
        (come_push_stackframe("06str.c", 533, 2361),__exception_result_var_b295=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 533, 2357)), "06str.c", 533, 2358)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_187, "06str.c", 533, 2359)), "06str.c", 533, 2360))->c_value), come_pop_stackframe(), __exception_result_var_b295);
        if(_if_conditional199=j_185!=(come_push_stackframe("06str.c", 535, 2364),__exception_result_var_b296=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_179, "06str.c", 535, 2362)), "06str.c", 535, 2363))), come_pop_stackframe(), __exception_result_var_b296)-1,        _if_conditional199) {
            (come_push_stackframe("06str.c", 536, 2367),__exception_result_var_b297=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 536, 2365)), "06str.c", 536, 2366)),","), come_pop_stackframe(), __exception_result_var_b297);
        }
        j_185++;
    }
    come_call_finalizer3(o2_saved_186,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("06str.c", 541, 2370),__exception_result_var_b298=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 541, 2368)), "06str.c", 541, 2369)),")"), come_pop_stackframe(), __exception_result_var_b298);
    come_value2_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 543, "CVALUE"))));
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 545, 2371)), "06str.c", 545, 2372))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 545, 2371)), "06str.c", 545, 2372))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 545, 2375),__exception_result_var_b299=((char*)(right_value273=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 545, 2373)), "06str.c", 545, 2374))))), come_pop_stackframe(), __exception_result_var_b299));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_178, "06str.c", 547, 2376)), "06str.c", 547, 2377))->mHeap) {
        __dec_obj87=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 548, 2378)), "06str.c", 548, 2379))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 548, 2378)), "06str.c", 548, 2379))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 548, 2383),__exception_result_var_b301=((char*)(right_value275=append_object_to_right_values((come_push_stackframe("06str.c", 548, 2382),__exception_result_var_b300=((char*)(right_value274=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 548, 2380)), "06str.c", 548, 2381))))), come_pop_stackframe(), __exception_result_var_b300),(struct sType*)come_increment_ref_count(result_type_178),info))), come_pop_stackframe(), __exception_result_var_b301));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj88=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 551, 2384)), "06str.c", 551, 2385))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 551, 2384)), "06str.c", 551, 2385))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=(come_push_stackframe("06str.c", 551, 2386),__exception_result_var_b302=sType_clone(result_type_178), come_pop_stackframe(), __exception_result_var_b302))));
    come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value276,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 552, 2387)), "06str.c", 552, 2388))->type, "06str.c", 552, 2389)), "06str.c", 552, 2390))->mStatic=(_Bool)0;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_188, "06str.c", 553, 2391)), "06str.c", 553, 2392))->var=((void*)0);
    (come_push_stackframe("06str.c", 555,2396),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 555, 2395),__exception_result_var_b303=((char*)(right_value277=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_184, "06str.c", 555, 2393)), "06str.c", 555, 2394))))), come_pop_stackframe(), __exception_result_var_b303)),come_pop_stackframe());
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 557, 2401),__exception_result_var_b304=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 557, 2397)), "06str.c", 557, 2398))->stack, "06str.c", 557, 2399)), "06str.c", 557, 2400)),(struct CVALUE*)come_increment_ref_count(come_value2_188)), come_pop_stackframe(), __exception_result_var_b304);
    __result139__ = (_Bool)1;
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
    return __result139__;
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
_Bool _if_conditional187;
struct CVALUE* __result129__;
void* right_value241;
struct CVALUE* result_161;
_Bool _if_conditional188;
char* __exception_result_var_b241;
void* right_value242;
char* __dec_obj80;
_Bool _if_conditional189;
struct sType* __exception_result_var_b242;
void* right_value243;
struct sType* __dec_obj81;
_Bool _if_conditional190;
struct CVALUE* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
memset(&result_161, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
            if(_if_conditional187=self==(void*)0,            _if_conditional187) {
                __result129__ = __result_obj__ = (void*)0;
                return __result129__;
            }
            result_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value241,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 2136)), "CVALUE_clone", 4, 2137))->c_value!=((void*)0),            _if_conditional188) {
                __dec_obj80=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_161, "CVALUE_clone", 4, 2138)), "CVALUE_clone", 4, 2139))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_161, "CVALUE_clone", 4, 2138)), "CVALUE_clone", 4, 2139))->c_value=(char*)come_increment_ref_count(((char*)(right_value242=(come_push_stackframe("CVALUE_clone", 4, 2142),__exception_result_var_b241=string_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4, 2140)), "CVALUE_clone", 4, 2141))->c_value), come_pop_stackframe(), __exception_result_var_b241))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional189=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 2143)), "CVALUE_clone", 5, 2144))->type!=((void*)0),            _if_conditional189) {
                __dec_obj81=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_161, "CVALUE_clone", 5, 2145)), "CVALUE_clone", 5, 2146))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_161, "CVALUE_clone", 5, 2145)), "CVALUE_clone", 5, 2146))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=(come_push_stackframe("CVALUE_clone", 5, 2149),__exception_result_var_b242=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5, 2147)), "CVALUE_clone", 5, 2148))->type), come_pop_stackframe(), __exception_result_var_b242))));
                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional190=self!=((void*)0),            _if_conditional190) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(result_161, "CVALUE_clone", 6, 2150)), "CVALUE_clone", 6, 2151))->var=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6, 2152)), "CVALUE_clone", 6, 2153))->var;
            }
            __result130__ = __result_obj__ = result_161;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional191;
struct sType* result_164;
void* __exception_result_var_b250;
struct sType* __result131__;
_Bool _if_conditional192;
struct sType* __result132__;
struct sType* result_165;
void* __exception_result_var_b251;
struct sType* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sType*));
memset(&result_165, 0, sizeof(struct sType*));
        if(_if_conditional191=self==((void*)0),        _if_conditional191) {
            (come_push_stackframe("./neo-c.h", 284, 2170),__exception_result_var_b250=memset(&result_164,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b250);
            __result131__ = __result_obj__ = result_164;
            return __result131__;
        }
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2171)), "./neo-c.h", 287, 2172))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2173)), "./neo-c.h", 287, 2174))->head;
        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 2175)), "./neo-c.h", 289, 2176))->it) {
            __result132__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 2177)), "./neo-c.h", 290, 2178))->it, "./neo-c.h", 290, 2179)), "./neo-c.h", 290, 2180))->item;
            return __result132__;
        }
        (come_push_stackframe("./neo-c.h", 294, 2181),__exception_result_var_b251=memset(&result_165,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b251);
        __result133__ = __result_obj__ = result_165;
        return __result133__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
        __result134__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 2185)), "./neo-c.h", 317, 2186))->it==((void*)0);
        return __result134__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional193;
struct sType* result_167;
void* __exception_result_var_b254;
struct sType* __result135__;
_Bool _if_conditional194;
struct sType* __result136__;
struct sType* result_168;
void* __exception_result_var_b255;
struct sType* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sType*));
memset(&result_168, 0, sizeof(struct sType*));
        if(_if_conditional193=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 2190)), "./neo-c.h", 299, 2191))->it==((void*)0),        _if_conditional193) {
            (come_push_stackframe("./neo-c.h", 301, 2192),__exception_result_var_b254=memset(&result_167,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b254);
            __result135__ = __result_obj__ = result_167;
            return __result135__;
        }
        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2193)), "./neo-c.h", 305, 2194))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2195)), "./neo-c.h", 305, 2196))->it, "./neo-c.h", 305, 2197)), "./neo-c.h", 305, 2198))->next;
        if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 2199)), "./neo-c.h", 307, 2200))->it) {
            __result136__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 2201)), "./neo-c.h", 308, 2202))->it, "./neo-c.h", 308, 2203)), "./neo-c.h", 308, 2204))->item;
            return __result136__;
        }
        (come_push_stackframe("./neo-c.h", 312, 2205),__exception_result_var_b255=memset(&result_168,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b255);
        __result137__ = __result_obj__ = result_168;
        return __result137__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sNodeBase* __exception_result_var_b305;
struct list$1sNodeph* __dec_obj89;
struct list$1sNodeph* __dec_obj90;
struct sMapNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    (come_push_stackframe("06str.c", 567, 2404),__exception_result_var_b305=((struct sNodeBase*)(right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "06str.c", 567, 2402)), "06str.c", 567, 2403))),info))), come_pop_stackframe(), __exception_result_var_b305);
    come_call_finalizer3(right_value278,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=((struct sMapNode*)come_null_check(self, "06str.c", 569, 2405))->map_key_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 569, 2405))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj89,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj90=((struct sMapNode*)come_null_check(self, "06str.c", 570, 2406))->map_elements;
    ((struct sMapNode*)come_null_check(self, "06str.c", 570, 2406))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result140__ = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__;
void* right_value279;
char* __exception_result_var_b306;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
    __result141__ = __result_obj__ = (come_push_stackframe("06str.c", 575, 2419),__exception_result_var_b306=((char*)(right_value279=__builtin_string("sMapNode"))), come_pop_stackframe(), __exception_result_var_b306);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* map_key_elements_189;
struct list$1sNodeph* map_elements_190;
void* right_value280;
void* right_value281;
struct list$1CVALUEph* __exception_result_var_b307;
struct list$1CVALUEph* key_params_191;
void* right_value282;
void* right_value283;
struct list$1CVALUEph* __exception_result_var_b308;
struct list$1CVALUEph* element_params_192;
struct sType* __dec_obj91;
struct sType* map_key_type_193;
struct sType* __dec_obj92;
struct sType* map_element_type_194;
int i_195;
int __exception_result_var_b309;
struct sNode* __exception_result_var_b311;
struct sNode* key_elements_196;
struct sNode* __exception_result_var_b312;
struct sNode* elements_200;
_Bool __exception_result_var_b313;
_Bool _if_conditional206;
_Bool __result144__;
void* right_value284;
struct CVALUE* __exception_result_var_b314;
struct CVALUE* come_value_201;
_Bool _if_conditional207;
void* right_value285;
_Bool __exception_result_var_b315;
struct list$1CVALUEph* __exception_result_var_b316;
_Bool __exception_result_var_b317;
_Bool _if_conditional208;
_Bool __result145__;
void* right_value286;
struct CVALUE* __exception_result_var_b318;
struct CVALUE* come_value2_202;
_Bool _if_conditional209;
void* right_value287;
_Bool __exception_result_var_b319;
struct list$1CVALUEph* __exception_result_var_b320;
struct sType* __exception_result_var_b321;
void* right_value288;
struct sType* __dec_obj93;
struct sType* __exception_result_var_b322;
void* right_value289;
struct sType* __dec_obj94;
struct sType* __exception_result_var_b323;
void* right_value290;
struct sType* key_type_values_204;
int __exception_result_var_b324;
void* right_value291;
struct sNode* __exception_result_var_b325;
struct list$1sNodeph* __exception_result_var_b326;
void* right_value292;
char* __exception_result_var_b327;
char* var_name_205;
struct sType* __exception_result_var_b328;
void* right_value293;
struct sVar* __exception_result_var_b329;
struct sVar* var__206;
void* right_value294;
char* __exception_result_var_b330;
struct sType* __exception_result_var_b331;
void* right_value295;
struct sType* element_type_values_207;
int __exception_result_var_b332;
void* right_value296;
struct sNode* __exception_result_var_b333;
struct list$1sNodeph* __exception_result_var_b334;
void* right_value297;
char* __exception_result_var_b335;
char* var_name2_208;
struct sType* __exception_result_var_b336;
void* right_value298;
struct sVar* __exception_result_var_b337;
struct sVar* var2__209;
void* right_value299;
char* __exception_result_var_b338;
void* right_value300;
void* right_value301;
struct buffer* __exception_result_var_b339;
struct buffer* source_210;
struct buffer* __exception_result_var_b340;
int i_211;
int __exception_result_var_b341;
struct CVALUE* __exception_result_var_b342;
struct CVALUE* key_param_212;
struct CVALUE* __exception_result_var_b343;
struct CVALUE* element_param_213;
_Bool _if_conditional210;
void* right_value302;
char* __exception_result_var_b344;
struct buffer* __exception_result_var_b345;
void* right_value303;
char* __exception_result_var_b346;
struct buffer* __exception_result_var_b347;
_Bool _if_conditional211;
void* right_value304;
char* __exception_result_var_b348;
struct buffer* __exception_result_var_b349;
void* right_value305;
char* __exception_result_var_b350;
struct buffer* __exception_result_var_b351;
struct buffer* __exception_result_var_b352;
void* right_value306;
char* __exception_result_var_b353;
void* right_value307;
void* right_value308;
struct sType* __exception_result_var_b354;
struct sType* map_type_214;
struct sType* __exception_result_var_b355;
void* right_value309;
struct list$1sTypeph* __exception_result_var_b356;
struct sType* __exception_result_var_b357;
void* right_value310;
struct list$1sTypeph* __exception_result_var_b358;
struct sType* __exception_result_var_b359;
void* right_value311;
struct sType* obj_type_215;
char* fun_name_216;
void* right_value312;
char* __exception_result_var_b360;
void* right_value313;
char* __exception_result_var_b361;
void* right_value314;
char* __exception_result_var_b362;
char* generics_fun_name_217;
struct sFun* __exception_result_var_b363;
struct sFun* fun_218;
_Bool _if_conditional212;
void* right_value315;
char* __exception_result_var_b364;
void* right_value316;
char* __exception_result_var_b365;
char* __dec_obj95;
struct sFun* __exception_result_var_b366;
_Bool _if_conditional213;
_Bool __result146__;
struct sType* __exception_result_var_b367;
void* right_value317;
struct sType* result_type_219;
struct sType* type_220;
void* right_value318;
struct CVALUE* obj_value_221;
void* right_value319;
void* right_value320;
struct buffer* __exception_result_var_b368;
struct buffer* num_string_222;
struct buffer* __exception_result_var_b369;
void* right_value321;
struct sType* __exception_result_var_b370;
struct sType* type2_223;
void* right_value322;
char* __exception_result_var_b371;
char* type_name_224;
void* right_value323;
char* __exception_result_var_b372;
void* right_value324;
char* __exception_result_var_b373;
char* __dec_obj96;
struct sType* __exception_result_var_b374;
void* right_value325;
struct sType* type3_225;
struct sType* __exception_result_var_b375;
void* right_value326;
struct sType* __dec_obj97;
void* right_value327;
char* __exception_result_var_b376;
char* __dec_obj98;
void* right_value328;
void* right_value329;
struct list$1CVALUEph* __exception_result_var_b377;
struct list$1CVALUEph* come_params_226;
struct sType* __exception_result_var_b378;
_Bool _if_conditional214;
struct sType* __exception_result_var_b379;
struct list$1CVALUEph* __exception_result_var_b380;
void* right_value330;
struct CVALUE* come_value2_227;
int __exception_result_var_b381;
void* right_value331;
char* __exception_result_var_b382;
char* __dec_obj99;
struct sType* __dec_obj100;
struct list$1CVALUEph* __exception_result_var_b383;
void* right_value332;
struct CVALUE* come_value3_228;
void* right_value333;
char* __exception_result_var_b384;
char* __dec_obj101;
struct sType* __dec_obj102;
struct list$1CVALUEph* __exception_result_var_b385;
void* right_value334;
struct CVALUE* come_value4_229;
void* right_value335;
char* __exception_result_var_b386;
char* __dec_obj103;
struct sType* __dec_obj104;
struct list$1CVALUEph* __exception_result_var_b387;
void* right_value336;
void* right_value337;
struct buffer* __exception_result_var_b388;
struct buffer* buf_230;
struct buffer* __exception_result_var_b389;
struct buffer* __exception_result_var_b390;
int j_231;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* __exception_result_var_b391;
struct CVALUE* it_233;
_Bool __exception_result_var_b392;
struct CVALUE* __exception_result_var_b393;
struct buffer* __exception_result_var_b394;
int __exception_result_var_b395;
_Bool _if_conditional215;
struct buffer* __exception_result_var_b396;
struct buffer* __exception_result_var_b397;
void* right_value338;
struct CVALUE* come_value5_234;
void* right_value339;
char* __exception_result_var_b398;
char* __dec_obj105;
_Bool _if_conditional216;
void* right_value340;
char* __exception_result_var_b399;
void* right_value341;
char* __exception_result_var_b400;
char* __dec_obj106;
struct sType* __exception_result_var_b401;
void* right_value342;
struct sType* __dec_obj107;
void* right_value343;
char* __exception_result_var_b402;
struct list$1CVALUEph* __exception_result_var_b403;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&map_key_elements_189, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_190, 0, sizeof(struct list$1sNodeph*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&key_params_191, 0, sizeof(struct list$1CVALUEph*));
right_value282 = (void*)0;
right_value283 = (void*)0;
memset(&element_params_192, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_193, 0, sizeof(struct sType*));
memset(&map_element_type_194, 0, sizeof(struct sType*));
memset(&i_195, 0, sizeof(int));
memset(&key_elements_196, 0, sizeof(struct sNode*));
memset(&elements_200, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
memset(&come_value_201, 0, sizeof(struct CVALUE*));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_value2_202, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&key_type_values_204, 0, sizeof(struct sType*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&var_name_205, 0, sizeof(char*));
right_value293 = (void*)0;
memset(&var__206, 0, sizeof(struct sVar*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&element_type_values_207, 0, sizeof(struct sType*));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&var_name2_208, 0, sizeof(char*));
right_value298 = (void*)0;
memset(&var2__209, 0, sizeof(struct sVar*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&source_210, 0, sizeof(struct buffer*));
memset(&i_211, 0, sizeof(int));
memset(&key_param_212, 0, sizeof(struct CVALUE*));
memset(&element_param_213, 0, sizeof(struct CVALUE*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&map_type_214, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&obj_type_215, 0, sizeof(struct sType*));
memset(&fun_name_216, 0, sizeof(char*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&generics_fun_name_217, 0, sizeof(char*));
memset(&fun_218, 0, sizeof(struct sFun*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&type_220, 0, sizeof(struct sType*));
right_value318 = (void*)0;
memset(&obj_value_221, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&num_string_222, 0, sizeof(struct buffer*));
right_value321 = (void*)0;
memset(&type2_223, 0, sizeof(struct sType*));
right_value322 = (void*)0;
memset(&type_name_224, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&type3_225, 0, sizeof(struct sType*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
memset(&come_params_226, 0, sizeof(struct list$1CVALUEph*));
right_value330 = (void*)0;
memset(&come_value2_227, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&come_value3_228, 0, sizeof(struct CVALUE*));
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&come_value4_229, 0, sizeof(struct CVALUE*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&buf_230, 0, sizeof(struct buffer*));
memset(&j_231, 0, sizeof(int));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
right_value338 = (void*)0;
memset(&come_value5_234, 0, sizeof(struct CVALUE*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
    map_key_elements_189=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "06str.c", 580, 2420)), "06str.c", 580, 2421))->map_key_elements;
    map_elements_190=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "06str.c", 581, 2422)), "06str.c", 581, 2423))->map_elements;
    key_params_191=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 583, 2425),__exception_result_var_b307=((struct list$1CVALUEph*)(right_value281=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value280=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 583, "list$1CVALUEph"))), "06str.c", 583, 2424)))))), come_pop_stackframe(), __exception_result_var_b307));
    come_call_finalizer3(right_value280,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    element_params_192=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 584, 2427),__exception_result_var_b308=((struct list$1CVALUEph*)(right_value283=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value282=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 584, "list$1CVALUEph"))), "06str.c", 584, 2426)))))), come_pop_stackframe(), __exception_result_var_b308));
    come_call_finalizer3(right_value282,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value283,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj91=map_key_type_193;
    map_key_type_193=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=map_element_type_194;
    map_element_type_194=((void*)0);
    come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    i_195=0;    i_195<(come_push_stackframe("06str.c", 588, 2430),__exception_result_var_b309=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(map_key_elements_189, "06str.c", 588, 2428)), "06str.c", 588, 2429))), come_pop_stackframe(), __exception_result_var_b309);    i_195++    ){
        key_elements_196=(come_push_stackframe("06str.c", 589, 2442),__exception_result_var_b311=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(((struct list$1sNodeph*)come_null_check(map_key_elements_189, "06str.c", 589, 2431)),i_195), "06str.c", 589, 2441)), come_pop_stackframe(), __exception_result_var_b311);
        elements_200=(come_push_stackframe("06str.c", 590, 2445),__exception_result_var_b312=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(((struct list$1sNodeph*)come_null_check(map_elements_190, "06str.c", 590, 2443)),i_195), "06str.c", 590, 2444)), come_pop_stackframe(), __exception_result_var_b312);
        if(_if_conditional206=!(come_push_stackframe("06str.c", 592, 2446),__exception_result_var_b313=node_compile(key_elements_196,info), come_pop_stackframe(), __exception_result_var_b313),        _if_conditional206) {
            __result144__ = (_Bool)0;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result144__;
        }
        come_value_201=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 596, 2447),__exception_result_var_b314=((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b314));
        come_call_finalizer3(right_value284,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("06str.c", 597,2448),dec_stack_ptr(1,info),come_pop_stackframe());
        if(map_key_type_193) {
            (come_push_stackframe("06str.c", 600, 2451),__exception_result_var_b315=check_assign_type(((char*)(right_value285=xsprintf("invalid map key type"))),map_key_type_193,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_201, "06str.c", 600, 2449)), "06str.c", 600, 2450))->type,come_value_201,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b315);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("06str.c", 603, 2454),__exception_result_var_b316=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(key_params_191, "06str.c", 603, 2452)), "06str.c", 603, 2453)),(struct CVALUE*)come_increment_ref_count(come_value_201)), come_pop_stackframe(), __exception_result_var_b316);
        if(_if_conditional208=!(come_push_stackframe("06str.c", 605, 2455),__exception_result_var_b317=node_compile(elements_200,info), come_pop_stackframe(), __exception_result_var_b317),        _if_conditional208) {
            __result145__ = (_Bool)0;
            come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result145__;
        }
        come_value2_202=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("06str.c", 609, 2456),__exception_result_var_b318=((struct CVALUE*)(right_value286=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b318));
        come_call_finalizer3(right_value286,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("06str.c", 610,2457),dec_stack_ptr(1,info),come_pop_stackframe());
        if(map_element_type_194) {
            (come_push_stackframe("06str.c", 613, 2460),__exception_result_var_b319=check_assign_type(((char*)(right_value287=xsprintf("invalid map element type"))),map_element_type_194,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_202, "06str.c", 613, 2458)), "06str.c", 613, 2459))->type,come_value2_202,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b319);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("06str.c", 616, 2463),__exception_result_var_b320=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(element_params_192, "06str.c", 616, 2461)), "06str.c", 616, 2462)),(struct CVALUE*)come_increment_ref_count(come_value2_202)), come_pop_stackframe(), __exception_result_var_b320);
        __dec_obj93=map_key_type_193;
        map_key_type_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=(come_push_stackframe("06str.c", 618, 2466),__exception_result_var_b321=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_201, "06str.c", 618, 2464)), "06str.c", 618, 2465))->type), come_pop_stackframe(), __exception_result_var_b321))));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj94=map_element_type_194;
        map_element_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=(come_push_stackframe("06str.c", 619, 2469),__exception_result_var_b322=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_202, "06str.c", 619, 2467)), "06str.c", 619, 2468))->type), come_pop_stackframe(), __exception_result_var_b322))));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value289,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    static int map_value_num_203=0;
    key_type_values_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(come_push_stackframe("06str.c", 624, 2470),__exception_result_var_b323=sType_clone(map_key_type_193), come_pop_stackframe(), __exception_result_var_b323))));
    come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 625, 2479),__exception_result_var_b326=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(key_type_values_204, "06str.c", 625, 2471)), "06str.c", 625, 2472))->mArrayNum, "06str.c", 625, 2473)), "06str.c", 625, 2474)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 625, 2478),__exception_result_var_b325=((struct sNode*)(right_value291=create_int_node((come_push_stackframe("06str.c", 625, 2477),__exception_result_var_b324=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(key_params_191, "06str.c", 625, 2475)), "06str.c", 625, 2476))), come_pop_stackframe(), __exception_result_var_b324),info))), come_pop_stackframe(), __exception_result_var_b325))), come_pop_stackframe(), __exception_result_var_b326);
    if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sType*)come_null_check(((struct sType*)come_null_check(key_type_values_204, "06str.c", 626, 2480)), "06str.c", 626, 2481))->mHeap=(_Bool)0;
    var_name_205=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 628, 2482),__exception_result_var_b327=((char*)(right_value292=xsprintf("__map_keys%d__",++map_value_num_203))), come_pop_stackframe(), __exception_result_var_b327));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 630,2484),add_variable_to_table(var_name_205,(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=(come_push_stackframe("06str.c", 630, 2483),__exception_result_var_b328=sType_clone(key_type_values_204), come_pop_stackframe(), __exception_result_var_b328)))),info),come_pop_stackframe());
    come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var__206=(come_push_stackframe("06str.c", 632, 2487),__exception_result_var_b329=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 632, 2485)), "06str.c", 632, 2486))->lv_table,var_name_205), come_pop_stackframe(), __exception_result_var_b329);
    (come_push_stackframe("06str.c", 634,2491),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 634, 2490),__exception_result_var_b330=((char*)(right_value294=make_define_var(key_type_values_204,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__206, "06str.c", 634, 2488)), "06str.c", 634, 2489))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b330)),come_pop_stackframe());
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    element_type_values_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=(come_push_stackframe("06str.c", 636, 2492),__exception_result_var_b331=sType_clone(map_element_type_194), come_pop_stackframe(), __exception_result_var_b331))));
    come_call_finalizer3(right_value295,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 637, 2501),__exception_result_var_b334=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(element_type_values_207, "06str.c", 637, 2493)), "06str.c", 637, 2494))->mArrayNum, "06str.c", 637, 2495)), "06str.c", 637, 2496)),(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 637, 2500),__exception_result_var_b333=((struct sNode*)(right_value296=create_int_node((come_push_stackframe("06str.c", 637, 2499),__exception_result_var_b332=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(element_params_192, "06str.c", 637, 2497)), "06str.c", 637, 2498))), come_pop_stackframe(), __exception_result_var_b332),info))), come_pop_stackframe(), __exception_result_var_b333))), come_pop_stackframe(), __exception_result_var_b334);
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sType*)come_null_check(((struct sType*)come_null_check(element_type_values_207, "06str.c", 638, 2502)), "06str.c", 638, 2503))->mHeap=(_Bool)0;
    var_name2_208=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 640, 2504),__exception_result_var_b335=((char*)(right_value297=xsprintf("__map_element%d__",map_value_num_203))), come_pop_stackframe(), __exception_result_var_b335));
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 642,2506),add_variable_to_table(var_name2_208,(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=(come_push_stackframe("06str.c", 642, 2505),__exception_result_var_b336=sType_clone(element_type_values_207), come_pop_stackframe(), __exception_result_var_b336)))),info),come_pop_stackframe());
    come_call_finalizer3(right_value298,sType_finalize, 0, 1, 0, 0, __result_obj__);
    var2__209=(come_push_stackframe("06str.c", 644, 2509),__exception_result_var_b337=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 644, 2507)), "06str.c", 644, 2508))->lv_table,var_name2_208), come_pop_stackframe(), __exception_result_var_b337);
    (come_push_stackframe("06str.c", 646,2513),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("06str.c", 646, 2512),__exception_result_var_b338=((char*)(right_value299=make_define_var(element_type_values_207,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var2__209, "06str.c", 646, 2510)), "06str.c", 646, 2511))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b338)),come_pop_stackframe());
    right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    source_210=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 648, 2515),__exception_result_var_b339=((struct buffer*)(right_value301=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value300=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 648, "buffer"))), "06str.c", 648, 2514)))))), come_pop_stackframe(), __exception_result_var_b339));
    come_call_finalizer3(right_value300,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 650, 2518),__exception_result_var_b340=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 650, 2516)), "06str.c", 650, 2517)),"{"), come_pop_stackframe(), __exception_result_var_b340);
    for(    i_211=0;    i_211<(come_push_stackframe("06str.c", 652, 2521),__exception_result_var_b341=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(key_params_191, "06str.c", 652, 2519)), "06str.c", 652, 2520))), come_pop_stackframe(), __exception_result_var_b341);    i_211++    ){
        key_param_212=(come_push_stackframe("06str.c", 653, 2524),__exception_result_var_b342=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(key_params_191, "06str.c", 653, 2522)),i_211), "06str.c", 653, 2523)), come_pop_stackframe(), __exception_result_var_b342);
        element_param_213=(come_push_stackframe("06str.c", 654, 2527),__exception_result_var_b343=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(((struct list$1CVALUEph*)come_null_check(element_params_192, "06str.c", 654, 2525)),i_211), "06str.c", 654, 2526)), come_pop_stackframe(), __exception_result_var_b343);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(map_key_type_193, "06str.c", 656, 2528)), "06str.c", 656, 2529))->mHeap) {
            (come_push_stackframe("06str.c", 657, 2537),__exception_result_var_b345=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 657, 2530)), "06str.c", 657, 2531)),(come_push_stackframe("06str.c", 657, 2536),__exception_result_var_b344=((char*)(right_value302=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__206, "06str.c", 657, 2532)), "06str.c", 657, 2533))->mCValueName,i_211,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(key_param_212, "06str.c", 657, 2534)), "06str.c", 657, 2535))->c_value))), come_pop_stackframe(), __exception_result_var_b344)), come_pop_stackframe(), __exception_result_var_b345);
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            (come_push_stackframe("06str.c", 660, 2545),__exception_result_var_b347=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 660, 2538)), "06str.c", 660, 2539)),(come_push_stackframe("06str.c", 660, 2544),__exception_result_var_b346=((char*)(right_value303=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__206, "06str.c", 660, 2540)), "06str.c", 660, 2541))->mCValueName,i_211,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(key_param_212, "06str.c", 660, 2542)), "06str.c", 660, 2543))->c_value))), come_pop_stackframe(), __exception_result_var_b346)), come_pop_stackframe(), __exception_result_var_b347);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(map_element_type_194, "06str.c", 663, 2546)), "06str.c", 663, 2547))->mHeap) {
            (come_push_stackframe("06str.c", 664, 2555),__exception_result_var_b349=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 664, 2548)), "06str.c", 664, 2549)),(come_push_stackframe("06str.c", 664, 2554),__exception_result_var_b348=((char*)(right_value304=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var2__209, "06str.c", 664, 2550)), "06str.c", 664, 2551))->mCValueName,i_211,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(element_param_213, "06str.c", 664, 2552)), "06str.c", 664, 2553))->c_value))), come_pop_stackframe(), __exception_result_var_b348)), come_pop_stackframe(), __exception_result_var_b349);
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            (come_push_stackframe("06str.c", 667, 2563),__exception_result_var_b351=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 667, 2556)), "06str.c", 667, 2557)),(come_push_stackframe("06str.c", 667, 2562),__exception_result_var_b350=((char*)(right_value305=xsprintf("%s[%d]=%s;\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var2__209, "06str.c", 667, 2558)), "06str.c", 667, 2559))->mCValueName,i_211,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(element_param_213, "06str.c", 667, 2560)), "06str.c", 667, 2561))->c_value))), come_pop_stackframe(), __exception_result_var_b350)), come_pop_stackframe(), __exception_result_var_b351);
            right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    (come_push_stackframe("06str.c", 671, 2566),__exception_result_var_b352=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 671, 2564)), "06str.c", 671, 2565)),"}"), come_pop_stackframe(), __exception_result_var_b352);
    (come_push_stackframe("06str.c", 673,2570),add_come_code(info,"%s",(come_push_stackframe("06str.c", 673, 2569),__exception_result_var_b353=((char*)(right_value306=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(source_210, "06str.c", 673, 2567)), "06str.c", 673, 2568))))), come_pop_stackframe(), __exception_result_var_b353)),come_pop_stackframe());
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    map_type_214=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 675, 2572),__exception_result_var_b354=((struct sType*)(right_value308=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value307=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 675, "sType"))), "06str.c", 675, 2571))),"map",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b354));
    come_call_finalizer3(right_value307,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 676, 2578),__exception_result_var_b356=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(map_type_214, "06str.c", 676, 2573)), "06str.c", 676, 2574))->mGenericsTypes, "06str.c", 676, 2575)), "06str.c", 676, 2576)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value309=(come_push_stackframe("06str.c", 676, 2577),__exception_result_var_b355=sType_clone(map_key_type_193), come_pop_stackframe(), __exception_result_var_b355))))), come_pop_stackframe(), __exception_result_var_b356);
    come_call_finalizer3(right_value309,sType_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 677, 2584),__exception_result_var_b358=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(map_type_214, "06str.c", 677, 2579)), "06str.c", 677, 2580))->mGenericsTypes, "06str.c", 677, 2581)), "06str.c", 677, 2582)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=(come_push_stackframe("06str.c", 677, 2583),__exception_result_var_b357=sType_clone(map_element_type_194), come_pop_stackframe(), __exception_result_var_b357))))), come_pop_stackframe(), __exception_result_var_b358);
    come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
    obj_type_215=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=(come_push_stackframe("06str.c", 679, 2585),__exception_result_var_b359=sType_clone(map_type_214), come_pop_stackframe(), __exception_result_var_b359))));
    come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, __result_obj__);
    fun_name_216="initialize_with_values";
    generics_fun_name_217=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 682, 2590),__exception_result_var_b362=((char*)(right_value314=string_to_string(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("06str.c", 682, 2587),__exception_result_var_b361=((char*)(right_value313=make_generics_function(obj_type_215,(char*)come_increment_ref_count((come_push_stackframe("06str.c", 682, 2586),__exception_result_var_b360=((char*)(right_value312=__builtin_string(fun_name_216))), come_pop_stackframe(), __exception_result_var_b360)),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b361), "06str.c", 682, 2588)), "06str.c", 682, 2589))))), come_pop_stackframe(), __exception_result_var_b362));
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    fun_218=(come_push_stackframe("06str.c", 684, 2595),__exception_result_var_b363=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 684, 2591)), "06str.c", 684, 2592))->funcs, "06str.c", 684, 2593)), "06str.c", 684, 2594)),generics_fun_name_217,((void*)0)), come_pop_stackframe(), __exception_result_var_b363);
    if(_if_conditional212=fun_218==((void*)0),    _if_conditional212) {
        __dec_obj95=generics_fun_name_217;
        generics_fun_name_217=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 687, 2597),__exception_result_var_b365=((char*)(right_value316=create_method_name(obj_type_215,(_Bool)0,(come_push_stackframe("06str.c", 687, 2596),__exception_result_var_b364=((char*)(right_value315=__builtin_string(fun_name_216))), come_pop_stackframe(), __exception_result_var_b364),info,(_Bool)1))), come_pop_stackframe(), __exception_result_var_b365));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_218=(come_push_stackframe("06str.c", 689, 2602),__exception_result_var_b366=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 689, 2598)), "06str.c", 689, 2599))->funcs, "06str.c", 689, 2600)), "06str.c", 689, 2601)),generics_fun_name_217,((void*)0)), come_pop_stackframe(), __exception_result_var_b366);
        if(_if_conditional213=fun_218==((void*)0),        _if_conditional213) {
            (come_push_stackframe("06str.c", 692,2607),err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_217,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 692, 2603)), "06str.c", 692, 2604))->come_fun, "06str.c", 692, 2605)), "06str.c", 692, 2606))->mName),come_pop_stackframe());
            __result146__ = (_Bool)1;
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
            return __result146__;
        }
    }
    result_type_219=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=(come_push_stackframe("06str.c", 697, 2610),__exception_result_var_b367=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_218, "06str.c", 697, 2608)), "06str.c", 697, 2609))->mResultType), come_pop_stackframe(), __exception_result_var_b367))));
    come_call_finalizer3(right_value317,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_219, "06str.c", 698, 2611)), "06str.c", 698, 2612))->mStatic=(_Bool)0;
    type_220=map_type_214;
    obj_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 702, "CVALUE"))));
    come_call_finalizer3(right_value318,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    num_string_222=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 704, 2614),__exception_result_var_b368=((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 704, "buffer"))), "06str.c", 704, 2613)))))), come_pop_stackframe(), __exception_result_var_b368));
    come_call_finalizer3(right_value319,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value320,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 706, 2617),__exception_result_var_b369=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_222, "06str.c", 706, 2615)), "06str.c", 706, 2616)),"1"), come_pop_stackframe(), __exception_result_var_b369);
    type2_223=(struct sType*)come_increment_ref_count((come_push_stackframe("06str.c", 708, 2618),__exception_result_var_b370=((struct sType*)(right_value321=solve_generics(type_220,type_220,info))), come_pop_stackframe(), __exception_result_var_b370));
    come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, __result_obj__);
    type_name_224=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 710, 2619),__exception_result_var_b371=((char*)(right_value322=make_type_name_string(type2_223,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b371));
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj96=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 712, 2620)), "06str.c", 712, 2621))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 712, 2620)), "06str.c", 712, 2621))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 712, 2629),__exception_result_var_b373=((char*)(right_value324=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_224,type_name_224,(come_push_stackframe("06str.c", 712, 2624),__exception_result_var_b372=((char*)(right_value323=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(num_string_222, "06str.c", 712, 2622)), "06str.c", 712, 2623))))), come_pop_stackframe(), __exception_result_var_b372),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 712, 2625)), "06str.c", 712, 2626))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 712, 2627)), "06str.c", 712, 2628))->sline,type_name_224))), come_pop_stackframe(), __exception_result_var_b373));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=(come_push_stackframe("06str.c", 714, 2630),__exception_result_var_b374=sType_clone(type2_223), come_pop_stackframe(), __exception_result_var_b374))));
    come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_225, "06str.c", 715, 2631)), "06str.c", 715, 2632))->mPointerNum++;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type3_225, "06str.c", 716, 2633)), "06str.c", 716, 2634))->mHeap=(_Bool)1;
    ((struct sType*)come_null_check(((struct sType*)come_null_check(type2_223, "06str.c", 717, 2635)), "06str.c", 717, 2636))->mHeap=(_Bool)1;
    __dec_obj97=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 718, 2637)), "06str.c", 718, 2638))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 718, 2637)), "06str.c", 718, 2638))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=(come_push_stackframe("06str.c", 718, 2639),__exception_result_var_b375=sType_clone(type2_223), come_pop_stackframe(), __exception_result_var_b375))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 719, 2640)), "06str.c", 719, 2641))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 719, 2640)), "06str.c", 719, 2641))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 719, 2644),__exception_result_var_b376=((char*)(right_value327=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 719, 2642)), "06str.c", 719, 2643))->c_value,(struct sType*)come_increment_ref_count(type3_225),info))), come_pop_stackframe(), __exception_result_var_b376));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 720, 2645)), "06str.c", 720, 2646))->type, "06str.c", 720, 2647)), "06str.c", 720, 2648))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 721, 2649)), "06str.c", 721, 2650))->var=((void*)0);
    come_params_226=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("06str.c", 723, 2652),__exception_result_var_b377=((struct list$1CVALUEph*)(right_value329=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value328=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 723, "list$1CVALUEph"))), "06str.c", 723, 2651)))))), come_pop_stackframe(), __exception_result_var_b377));
    come_call_finalizer3(right_value328,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value329,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional214=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("06str.c", 725, 2657),__exception_result_var_b378=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_218, "06str.c", 725, 2653)), "06str.c", 725, 2654))->mParamTypes, "06str.c", 725, 2655)),0), "06str.c", 725, 2656)), come_pop_stackframe(), __exception_result_var_b378), "06str.c", 725, 2658)), "06str.c", 725, 2659))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 725, 2660)), "06str.c", 725, 2661))->type, "06str.c", 725, 2662)), "06str.c", 725, 2663))->mHeap,    _if_conditional214) {
        (come_push_stackframe("06str.c", 726,2671),std_move((come_push_stackframe("06str.c", 726, 2668),__exception_result_var_b379=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_218, "06str.c", 726, 2664)), "06str.c", 726, 2665))->mParamTypes, "06str.c", 726, 2666)),0), "06str.c", 726, 2667)), come_pop_stackframe(), __exception_result_var_b379),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(obj_value_221, "06str.c", 726, 2669)), "06str.c", 726, 2670))->type,obj_value_221,info),come_pop_stackframe());
    }
    (come_push_stackframe("06str.c", 728, 2674),__exception_result_var_b380=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_226, "06str.c", 728, 2672)), "06str.c", 728, 2673)),(struct CVALUE*)come_increment_ref_count(obj_value_221)), come_pop_stackframe(), __exception_result_var_b380);
    come_value2_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 730, "CVALUE"))));
    come_call_finalizer3(right_value330,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_227, "06str.c", 732, 2675)), "06str.c", 732, 2676))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_227, "06str.c", 732, 2675)), "06str.c", 732, 2676))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 732, 2680),__exception_result_var_b382=((char*)(right_value331=xsprintf("%d",(come_push_stackframe("06str.c", 732, 2679),__exception_result_var_b381=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(key_params_191, "06str.c", 732, 2677)), "06str.c", 732, 2678))), come_pop_stackframe(), __exception_result_var_b381)))), come_pop_stackframe(), __exception_result_var_b382));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj100=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_227, "06str.c", 733, 2681)), "06str.c", 733, 2682))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_227, "06str.c", 733, 2681)), "06str.c", 733, 2682))->type=((void*)0);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_227, "06str.c", 734, 2683)), "06str.c", 734, 2684))->var=((void*)0);
    (come_push_stackframe("06str.c", 736, 2687),__exception_result_var_b383=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_226, "06str.c", 736, 2685)), "06str.c", 736, 2686)),(struct CVALUE*)come_increment_ref_count(come_value2_227)), come_pop_stackframe(), __exception_result_var_b383);
    come_value3_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 738, "CVALUE"))));
    come_call_finalizer3(right_value332,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj101=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_228, "06str.c", 740, 2688)), "06str.c", 740, 2689))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_228, "06str.c", 740, 2688)), "06str.c", 740, 2689))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 740, 2692),__exception_result_var_b384=((char*)(right_value333=xsprintf("%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__206, "06str.c", 740, 2690)), "06str.c", 740, 2691))->mCValueName))), come_pop_stackframe(), __exception_result_var_b384));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj102=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_228, "06str.c", 741, 2693)), "06str.c", 741, 2694))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_228, "06str.c", 741, 2693)), "06str.c", 741, 2694))->type=((void*)0);
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value3_228, "06str.c", 742, 2695)), "06str.c", 742, 2696))->var=((void*)0);
    (come_push_stackframe("06str.c", 744, 2699),__exception_result_var_b385=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_226, "06str.c", 744, 2697)), "06str.c", 744, 2698)),(struct CVALUE*)come_increment_ref_count(come_value3_228)), come_pop_stackframe(), __exception_result_var_b385);
    come_value4_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 746, "CVALUE"))));
    come_call_finalizer3(right_value334,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_229, "06str.c", 748, 2700)), "06str.c", 748, 2701))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_229, "06str.c", 748, 2700)), "06str.c", 748, 2701))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 748, 2704),__exception_result_var_b386=((char*)(right_value335=xsprintf("%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var2__209, "06str.c", 748, 2702)), "06str.c", 748, 2703))->mCValueName))), come_pop_stackframe(), __exception_result_var_b386));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj104=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_229, "06str.c", 749, 2705)), "06str.c", 749, 2706))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_229, "06str.c", 749, 2705)), "06str.c", 749, 2706))->type=((void*)0);
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value4_229, "06str.c", 750, 2707)), "06str.c", 750, 2708))->var=((void*)0);
    (come_push_stackframe("06str.c", 752, 2711),__exception_result_var_b387=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_226, "06str.c", 752, 2709)), "06str.c", 752, 2710)),(struct CVALUE*)come_increment_ref_count(come_value4_229)), come_pop_stackframe(), __exception_result_var_b387);
    buf_230=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 754, 2713),__exception_result_var_b388=((struct buffer*)(right_value337=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value336=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 754, "buffer"))), "06str.c", 754, 2712)))))), come_pop_stackframe(), __exception_result_var_b388));
    come_call_finalizer3(right_value336,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value337,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 756, 2716),__exception_result_var_b389=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 756, 2714)), "06str.c", 756, 2715)),generics_fun_name_217), come_pop_stackframe(), __exception_result_var_b389);
    (come_push_stackframe("06str.c", 757, 2719),__exception_result_var_b390=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 757, 2717)), "06str.c", 757, 2718)),"("), come_pop_stackframe(), __exception_result_var_b390);
    j_231=0;
    for(    o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((come_params_226)),it_233=(come_push_stackframe("06str.c", 760, 2722),__exception_result_var_b391=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "06str.c", 760, 2720)), "06str.c", 760, 2721))), come_pop_stackframe(), __exception_result_var_b391);    !(come_push_stackframe("06str.c", 760, 2725),__exception_result_var_b392=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "06str.c", 760, 2723)), "06str.c", 760, 2724))), come_pop_stackframe(), __exception_result_var_b392);    it_233=(come_push_stackframe("06str.c", 760, 2728),__exception_result_var_b393=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "06str.c", 760, 2726)), "06str.c", 760, 2727))), come_pop_stackframe(), __exception_result_var_b393)    ){
        (come_push_stackframe("06str.c", 761, 2733),__exception_result_var_b394=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 761, 2729)), "06str.c", 761, 2730)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_233, "06str.c", 761, 2731)), "06str.c", 761, 2732))->c_value), come_pop_stackframe(), __exception_result_var_b394);
        if(_if_conditional215=j_231!=(come_push_stackframe("06str.c", 763, 2736),__exception_result_var_b395=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_226, "06str.c", 763, 2734)), "06str.c", 763, 2735))), come_pop_stackframe(), __exception_result_var_b395)-1,        _if_conditional215) {
            (come_push_stackframe("06str.c", 764, 2739),__exception_result_var_b396=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 764, 2737)), "06str.c", 764, 2738)),","), come_pop_stackframe(), __exception_result_var_b396);
        }
        j_231++;
    }
    come_call_finalizer3(o2_saved_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("06str.c", 769, 2742),__exception_result_var_b397=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 769, 2740)), "06str.c", 769, 2741)),")"), come_pop_stackframe(), __exception_result_var_b397);
    come_value5_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 771, "CVALUE"))));
    come_call_finalizer3(right_value338,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 773, 2743)), "06str.c", 773, 2744))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 773, 2743)), "06str.c", 773, 2744))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 773, 2747),__exception_result_var_b398=((char*)(right_value339=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 773, 2745)), "06str.c", 773, 2746))))), come_pop_stackframe(), __exception_result_var_b398));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_219, "06str.c", 775, 2748)), "06str.c", 775, 2749))->mHeap) {
        __dec_obj106=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 776, 2750)), "06str.c", 776, 2751))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 776, 2750)), "06str.c", 776, 2751))->c_value=(char*)come_increment_ref_count((come_push_stackframe("06str.c", 776, 2755),__exception_result_var_b400=((char*)(right_value341=append_object_to_right_values((come_push_stackframe("06str.c", 776, 2754),__exception_result_var_b399=((char*)(right_value340=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 776, 2752)), "06str.c", 776, 2753))))), come_pop_stackframe(), __exception_result_var_b399),(struct sType*)come_increment_ref_count(result_type_219),info))), come_pop_stackframe(), __exception_result_var_b400));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj107=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 779, 2756)), "06str.c", 779, 2757))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 779, 2756)), "06str.c", 779, 2757))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=(come_push_stackframe("06str.c", 779, 2758),__exception_result_var_b401=sType_clone(result_type_219), come_pop_stackframe(), __exception_result_var_b401))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 780, 2759)), "06str.c", 780, 2760))->type, "06str.c", 780, 2761)), "06str.c", 780, 2762))->mStatic=(_Bool)0;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value5_234, "06str.c", 781, 2763)), "06str.c", 781, 2764))->var=((void*)0);
    (come_push_stackframe("06str.c", 783,2768),add_come_last_code(info,"%s;\n",(come_push_stackframe("06str.c", 783, 2767),__exception_result_var_b402=((char*)(right_value343=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_230, "06str.c", 783, 2765)), "06str.c", 783, 2766))))), come_pop_stackframe(), __exception_result_var_b402)),come_pop_stackframe());
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("06str.c", 785, 2773),__exception_result_var_b403=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 785, 2769)), "06str.c", 785, 2770))->stack, "06str.c", 785, 2771)), "06str.c", 785, 2772)),(struct CVALUE*)come_increment_ref_count(come_value5_234)), come_pop_stackframe(), __exception_result_var_b403);
    __result147__ = (_Bool)1;
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
    return __result147__;
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
_Bool _if_conditional204;
struct list_item$1sNodeph* it_197;
int i_198;
_Bool _while_condtional20;
_Bool _if_conditional205;
struct sNode* __result142__;
struct sNode* default_value_199;
void* __exception_result_var_b310;
struct sNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_197, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_198, 0, sizeof(int));
memset(&default_value_199, 0, sizeof(struct sNode*));
            if(_if_conditional204=position<0,            _if_conditional204) {
                position+=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 676, 2432)), "./neo-c.h", 676, 2433))->len;
            }
            it_197=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 679, 2434)), "./neo-c.h", 679, 2435))->head;
            i_198=0;
            while(_while_condtional20=it_197!=((void*)0),            _while_condtional20) {
                if(_if_conditional205=position==i_198,                _if_conditional205) {
                    __result142__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_197, "./neo-c.h", 683, 2436)), "./neo-c.h", 683, 2437))->item;
                    return __result142__;
                }
                it_197=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_197, "./neo-c.h", 685, 2438)), "./neo-c.h", 685, 2439))->next;
                i_198++;
            }
            (come_push_stackframe("./neo-c.h", 690, 2440),__exception_result_var_b310=memset(&default_value_199,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b310);
            __result143__ = __result_obj__ = default_value_199;
            if(default_value_199) { default_value_199 = come_decrement_ref_count2(default_value_199, ((struct sNode*)default_value_199)->finalize, ((struct sNode*)default_value_199)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result143__;
            if(default_value_199) { default_value_199 = come_decrement_ref_count2(default_value_199, ((struct sNode*)default_value_199)->finalize, ((struct sNode*)default_value_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional217;
int sline_235;
void* right_value344;
void* right_value345;
struct list$1sNodeph* __exception_result_var_b404;
struct list$1sNodeph* exps_236;
void* right_value346;
void* right_value347;
struct buffer* __exception_result_var_b405;
struct buffer* value_237;
char* head_of_last_line_238;
_Bool _while_condtional21;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct buffer* __exception_result_var_b406;
struct buffer* __exception_result_var_b407;
_Bool _if_conditional221;
struct buffer* __exception_result_var_b408;
struct buffer* __exception_result_var_b409;
_Bool _if_conditional222;
struct buffer* __exception_result_var_b410;
_Bool __exception_result_var_b411;
_Bool _if_conditional223;
int len_239;
_Bool __exception_result_var_b412;
_Bool _while_condtional22;
struct buffer* __exception_result_var_b413;
_Bool _if_conditional224;
struct buffer* __exception_result_var_b414;
_Bool _while_condtional23;
struct buffer* __exception_result_var_b415;
_Bool _if_conditional225;
void* right_value348;
struct sNode* __exception_result_var_b416;
struct sNode* exp_240;
struct list$1sNodeph* __exception_result_var_b417;
_Bool _if_conditional226;
struct buffer* __exception_result_var_b418;
struct buffer* __exception_result_var_b419;
struct buffer* __exception_result_var_b420;
struct buffer* __exception_result_var_b421;
struct buffer* __exception_result_var_b422;
struct buffer* __exception_result_var_b423;
struct buffer* __exception_result_var_b424;
struct buffer* __exception_result_var_b425;
struct buffer* __exception_result_var_b426;
struct buffer* __exception_result_var_b427;
struct buffer* __exception_result_var_b428;
_Bool _if_conditional227;
int sline2_241;
_Bool _if_conditional228;
struct buffer* __exception_result_var_b429;
struct buffer* __exception_result_var_b430;
struct buffer* __exception_result_var_b431;
void* right_value349;
void* right_value350;
char* __exception_result_var_b432;
void* right_value351;
struct sSStringNode* __exception_result_var_b433;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value356;
struct sNode* __result150__;
_Bool _if_conditional237;
int sline_243;
void* right_value357;
void* right_value358;
struct buffer* __exception_result_var_b437;
struct buffer* value_244;
_Bool _while_condtional24;
_Bool _if_conditional238;
char* p_245;
int sline_246;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct buffer* __exception_result_var_b438;
_Bool _if_conditional241;
struct buffer* __exception_result_var_b439;
struct buffer* __exception_result_var_b440;
_Bool _if_conditional242;
int sline2_247;
_Bool _if_conditional243;
struct buffer* __exception_result_var_b441;
void* right_value359;
void* right_value360;
char* __exception_result_var_b442;
void* right_value361;
struct sStrNode* __exception_result_var_b443;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value365;
struct sNode* __result153__;
_Bool _if_conditional250;
int sline_249;
void* right_value366;
void* right_value367;
struct buffer* __exception_result_var_b446;
struct buffer* buf_250;
_Bool _while_condtional25;
_Bool _if_conditional251;
struct buffer* __exception_result_var_b447;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct buffer* __exception_result_var_b448;
_Bool global_251;
_Bool ignore_case_252;
_Bool _while_condtional26;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value368;
void* right_value369;
char* __exception_result_var_b449;
void* right_value370;
struct sRegexNode* __exception_result_var_b450;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value374;
struct sNode* __result156__;
_Bool _if_conditional264;
int c_254;
_Bool _if_conditional265;
_Bool __exception_result_var_b453;
_Bool _if_conditional266;
int n_255;
_Bool __exception_result_var_b454;
_Bool _while_condtional27;
_Bool __exception_result_var_b455;
_Bool _if_conditional267;
int n_256;
_Bool __exception_result_var_b456;
_Bool _while_condtional28;
char* __exception_result_var_b457;
_Bool _while_condtional29;
char* __exception_result_var_b458;
long long __exception_result_var_b459;
unsigned long long int n_259;
_Bool _if_conditional268;
void* right_value375;
void* right_value376;
struct sCharNode* __exception_result_var_b460;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value379;
struct sNode* __result159__;
_Bool _if_conditional274;
unsigned int c_261;
_Bool quote_262;
_Bool _if_conditional275;
_Bool __exception_result_var_b462;
_Bool _if_conditional276;
int n_263;
_Bool __exception_result_var_b463;
_Bool _while_condtional30;
_Bool __exception_result_var_b464;
_Bool _if_conditional277;
int n_264;
_Bool __exception_result_var_b465;
_Bool _while_condtional31;
char* __exception_result_var_b466;
_Bool _while_condtional32;
char* __exception_result_var_b467;
long long __exception_result_var_b468;
unsigned long long int n_267;
unsigned char p2_268;
_Bool _if_conditional278;
int size_269;
_Bool _if_conditional279;
void* __exception_result_var_b469;
int __exception_result_var_b470;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value380;
void* right_value381;
struct sWCharNode* __exception_result_var_b471;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value384;
struct sNode* __result162__;
_Bool _if_conditional288;
int sline_272;
void* right_value385;
void* right_value386;
struct buffer* __exception_result_var_b473;
struct buffer* value_273;
_Bool _while_condtional33;
_Bool _if_conditional289;
char* p_274;
int sline_275;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool __exception_result_var_b474;
_Bool _if_conditional292;
int len_276;
int n_277;
_Bool __exception_result_var_b475;
_Bool _while_condtional34;
struct buffer* __exception_result_var_b476;
_Bool _if_conditional293;
char* __exception_result_var_b477;
_Bool _while_condtional35;
char* __exception_result_var_b478;
unsigned long int lont_280;
long long __exception_result_var_b479;
int n_281;
struct buffer* __exception_result_var_b480;
struct buffer* __exception_result_var_b481;
struct buffer* __exception_result_var_b482;
struct buffer* __exception_result_var_b483;
struct buffer* __exception_result_var_b484;
struct buffer* __exception_result_var_b485;
struct buffer* __exception_result_var_b486;
struct buffer* __exception_result_var_b487;
struct buffer* __exception_result_var_b488;
struct buffer* __exception_result_var_b489;
struct buffer* __exception_result_var_b490;
_Bool _if_conditional294;
int sline2_282;
_Bool _if_conditional295;
struct buffer* __exception_result_var_b491;
int len_283;
void* right_value387;
unsigned int* wstr_284;
char* str_285;
unsigned long int __exception_result_var_b492;
_Bool _if_conditional296;
void* right_value388;
void* right_value389;
struct sWStringNode* __exception_result_var_b493;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value393;
struct sNode* __result165__;
_Bool _if_conditional303;
int sline_287;
void* right_value394;
void* right_value395;
struct list$1sNodeph* __exception_result_var_b496;
struct list$1sNodeph* exps_288;
void* right_value396;
void* right_value397;
struct buffer* __exception_result_var_b497;
struct buffer* value_289;
_Bool _while_condtional36;
_Bool _if_conditional304;
char* p_290;
int sline_291;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct buffer* __exception_result_var_b498;
struct buffer* __exception_result_var_b499;
_Bool _if_conditional307;
void* right_value398;
struct sNode* __exception_result_var_b500;
struct sNode* exp_292;
struct list$1sNodeph* __exception_result_var_b501;
struct buffer* __exception_result_var_b502;
char* p_293;
_Bool _while_condtional37;
_Bool _if_conditional308;
struct buffer* __exception_result_var_b503;
_Bool __exception_result_var_b504;
_Bool _if_conditional309;
int len_294;
_Bool __exception_result_var_b505;
_Bool _while_condtional38;
struct buffer* __exception_result_var_b506;
_Bool _if_conditional310;
struct buffer* __exception_result_var_b507;
_Bool _while_condtional39;
struct buffer* __exception_result_var_b508;
_Bool _if_conditional311;
void* right_value399;
struct sNode* __exception_result_var_b509;
struct sNode* exp_295;
struct list$1sNodeph* __exception_result_var_b510;
_Bool _if_conditional312;
struct buffer* __exception_result_var_b511;
struct buffer* __exception_result_var_b512;
struct buffer* __exception_result_var_b513;
struct buffer* __exception_result_var_b514;
struct buffer* __exception_result_var_b515;
struct buffer* __exception_result_var_b516;
struct buffer* __exception_result_var_b517;
struct buffer* __exception_result_var_b518;
struct buffer* __exception_result_var_b519;
struct buffer* __exception_result_var_b520;
struct buffer* __exception_result_var_b521;
_Bool _if_conditional313;
int sline2_296;
_Bool _if_conditional314;
struct buffer* __exception_result_var_b522;
void* right_value400;
void* right_value401;
char* __exception_result_var_b523;
void* right_value402;
struct sSStringNode* __exception_result_var_b524;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value407;
struct sNode* __result168__;
_Bool _if_conditional323;
char* p_298;
_Bool no_comma_299;
void* right_value408;
struct sNode* __exception_result_var_b528;
struct sNode* node_300;
char* p2_301;
void* right_value409;
void* right_value410;
struct buffer* __exception_result_var_b529;
struct buffer* first_element_source_302;
struct buffer* __exception_result_var_b530;
struct buffer* __exception_result_var_b531;
void* right_value411;
void* right_value412;
struct list$1sNodeph* __exception_result_var_b532;
struct list$1sNodeph* list_elements_303;
void* right_value413;
void* right_value414;
struct list$1sNodeph* __exception_result_var_b533;
struct list$1sNodeph* map_keys_304;
void* right_value415;
void* right_value416;
struct list$1sNodeph* __exception_result_var_b534;
struct list$1sNodeph* map_elements_305;
_Bool _if_conditional324;
struct list$1sNodeph* __exception_result_var_b535;
_Bool no_comma_306;
void* right_value417;
struct sNode* __exception_result_var_b536;
struct sNode* node2_307;
struct list$1sNodeph* __exception_result_var_b537;
_Bool _if_conditional325;
void* right_value418;
void* right_value419;
struct sMapNode* __exception_result_var_b538;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value424;
struct sNode* __result171__;
int __exception_result_var_b542;
_Bool _while_condtional40;
_Bool no_comma_309;
void* right_value425;
struct sNode* __exception_result_var_b543;
struct sNode* node2_310;
struct list$1sNodeph* __exception_result_var_b544;
int __exception_result_var_b545;
void* right_value426;
struct sNode* __exception_result_var_b546;
struct sNode* node3_311;
struct list$1sNodeph* __exception_result_var_b547;
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
void* right_value427;
void* right_value428;
struct sMapNode* __exception_result_var_b548;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value433;
struct sNode* __result174__;
_Bool _if_conditional345;
struct list$1sNodeph* __exception_result_var_b552;
_Bool _if_conditional346;
struct list$1sNodeph* __exception_result_var_b553;
_Bool _while_condtional41;
_Bool no_comma_313;
void* right_value434;
struct sNode* __exception_result_var_b554;
struct sNode* node2_314;
struct list$1sNodeph* __exception_result_var_b555;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
int __exception_result_var_b556;
_Bool _if_conditional350;
void* right_value435;
void* right_value436;
struct sListNode* __exception_result_var_b557;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value440;
struct sNode* __result177__;
void* right_value441;
struct sNode* __exception_result_var_b560;
struct sNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_235, 0, sizeof(int));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&exps_236, 0, sizeof(struct list$1sNodeph*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&value_237, 0, sizeof(struct buffer*));
memset(&head_of_last_line_238, 0, sizeof(char*));
memset(&len_239, 0, sizeof(int));
right_value348 = (void*)0;
memset(&exp_240, 0, sizeof(struct sNode*));
memset(&sline2_241, 0, sizeof(int));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value356 = (void*)0;
memset(&sline_243, 0, sizeof(int));
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&value_244, 0, sizeof(struct buffer*));
memset(&p_245, 0, sizeof(char*));
memset(&sline_246, 0, sizeof(int));
memset(&sline2_247, 0, sizeof(int));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
right_value365 = (void*)0;
memset(&sline_249, 0, sizeof(int));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&buf_250, 0, sizeof(struct buffer*));
memset(&global_251, 0, sizeof(_Bool));
memset(&ignore_case_252, 0, sizeof(_Bool));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value374 = (void*)0;
memset(&c_254, 0, sizeof(int));
memset(&n_255, 0, sizeof(int));
memset(&n_256, 0, sizeof(int));
memset(&n_259, 0, sizeof(unsigned long long int));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value379 = (void*)0;
memset(&c_261, 0, sizeof(unsigned int));
memset(&quote_262, 0, sizeof(_Bool));
memset(&n_263, 0, sizeof(int));
memset(&n_264, 0, sizeof(int));
memset(&n_267, 0, sizeof(unsigned long long int));
memset(&p2_268, 0, sizeof(unsigned char));
memset(&size_269, 0, sizeof(int));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value384 = (void*)0;
memset(&sline_272, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&value_273, 0, sizeof(struct buffer*));
memset(&p_274, 0, sizeof(char*));
memset(&sline_275, 0, sizeof(int));
memset(&len_276, 0, sizeof(int));
memset(&n_277, 0, sizeof(int));
memset(&lont_280, 0, sizeof(unsigned long int));
memset(&n_281, 0, sizeof(int));
memset(&sline2_282, 0, sizeof(int));
memset(&len_283, 0, sizeof(int));
right_value387 = (void*)0;
memset(&wstr_284, 0, sizeof(unsigned int*));
memset(&str_285, 0, sizeof(char*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value393 = (void*)0;
memset(&sline_287, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&exps_288, 0, sizeof(struct list$1sNodeph*));
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&value_289, 0, sizeof(struct buffer*));
memset(&p_290, 0, sizeof(char*));
memset(&sline_291, 0, sizeof(int));
right_value398 = (void*)0;
memset(&exp_292, 0, sizeof(struct sNode*));
memset(&p_293, 0, sizeof(char*));
memset(&len_294, 0, sizeof(int));
right_value399 = (void*)0;
memset(&exp_295, 0, sizeof(struct sNode*));
memset(&sline2_296, 0, sizeof(int));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value407 = (void*)0;
memset(&p_298, 0, sizeof(char*));
memset(&no_comma_299, 0, sizeof(_Bool));
right_value408 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
memset(&p2_301, 0, sizeof(char*));
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&first_element_source_302, 0, sizeof(struct buffer*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&list_elements_303, 0, sizeof(struct list$1sNodeph*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&map_keys_304, 0, sizeof(struct list$1sNodeph*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&map_elements_305, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_306, 0, sizeof(_Bool));
right_value417 = (void*)0;
memset(&node2_307, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value424 = (void*)0;
memset(&no_comma_309, 0, sizeof(_Bool));
right_value425 = (void*)0;
memset(&node2_310, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
memset(&node3_311, 0, sizeof(struct sNode*));
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value433 = (void*)0;
memset(&no_comma_313, 0, sizeof(_Bool));
right_value434 = (void*)0;
memset(&node2_314, 0, sizeof(struct sNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
    if(_if_conditional217=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 794, 2774)), "06str.c", 794, 2775))->p, "06str.c", 794, 2776))==34&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 794, 2777)), "06str.c", 794, 2778))->p+1), "06str.c", 794, 2779))==34&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 794, 2780)), "06str.c", 794, 2781))->p+2), "06str.c", 794, 2782))==34&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 794, 2783)), "06str.c", 794, 2784))->p+3), "06str.c", 794, 2785))==10,    _if_conditional217) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 795, 2786)), "06str.c", 795, 2787))->p+=4;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 796, 2788)), "06str.c", 796, 2789))->sline++;
        sline_235=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 798, 2790)), "06str.c", 798, 2791))->sline;
        exps_236=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 800, 2793),__exception_result_var_b404=((struct list$1sNodeph*)(right_value345=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value344=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 800, "list$1sNodeph"))), "06str.c", 800, 2792)))))), come_pop_stackframe(), __exception_result_var_b404));
        come_call_finalizer3(right_value344,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value345,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        value_237=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 801, 2795),__exception_result_var_b405=((struct buffer*)(right_value347=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value346=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 801, "buffer"))), "06str.c", 801, 2794)))))), come_pop_stackframe(), __exception_result_var_b405));
        come_call_finalizer3(right_value346,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value347,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_238=((void*)0);
        while(_while_condtional21=1,        _while_condtional21) {
            if(_if_conditional218=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 807, 2796)), "06str.c", 807, 2797))->p, "06str.c", 807, 2798))==34&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 807, 2799)), "06str.c", 807, 2800))->p+1), "06str.c", 807, 2801))==34&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 807, 2802)), "06str.c", 807, 2803))->p+2), "06str.c", 807, 2804))==34,            _if_conditional218) {
                if(head_of_last_line_238) {
                    (come_push_stackframe("06str.c", 809,2809),buffer_trim(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 809, 2805)), "06str.c", 809, 2806)),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 809, 2807)), "06str.c", 809, 2808))->p-head_of_last_line_238),come_pop_stackframe());
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 812, 2810)), "06str.c", 812, 2811))->p+=3;
                (come_push_stackframe("06str.c", 814,2812),skip_spaces_and_lf(info),come_pop_stackframe());
                break;
            }
            else {
                if(_if_conditional220=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 817, 2813)), "06str.c", 817, 2814))->p, "06str.c", 817, 2815))==37,                _if_conditional220) {
                    (come_push_stackframe("06str.c", 818, 2818),__exception_result_var_b406=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 818, 2816)), "06str.c", 818, 2817)),37), come_pop_stackframe(), __exception_result_var_b406);
                    (come_push_stackframe("06str.c", 819, 2821),__exception_result_var_b407=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 819, 2819)), "06str.c", 819, 2820)),37), come_pop_stackframe(), __exception_result_var_b407);
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 820, 2822)), "06str.c", 820, 2823))->p++;
                }
                else {
                    if(_if_conditional221=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 822, 2824)), "06str.c", 822, 2825))->p, "06str.c", 822, 2826))==34,                    _if_conditional221) {
                        (come_push_stackframe("06str.c", 823, 2829),__exception_result_var_b408=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 823, 2827)), "06str.c", 823, 2828)),92), come_pop_stackframe(), __exception_result_var_b408);
                        (come_push_stackframe("06str.c", 824, 2832),__exception_result_var_b409=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 824, 2830)), "06str.c", 824, 2831)),34), come_pop_stackframe(), __exception_result_var_b409);
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 825, 2833)), "06str.c", 825, 2834))->p++;
                    }
                    else {
                        if(_if_conditional222=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 838, 2835)), "06str.c", 838, 2836))->p, "06str.c", 838, 2837))==92,                        _if_conditional222) {
                            (come_push_stackframe("06str.c", 839, 2840),__exception_result_var_b410=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 839, 2838)), "06str.c", 839, 2839)),92), come_pop_stackframe(), __exception_result_var_b410);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 840, 2841)), "06str.c", 840, 2842))->p++;
                            if(_if_conditional223=(come_push_stackframe("06str.c", 842, 2846),__exception_result_var_b411=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 842, 2843)), "06str.c", 842, 2844))->p, "06str.c", 842, 2845))), come_pop_stackframe(), __exception_result_var_b411),                            _if_conditional223) {
                                len_239=0;
                                while(_while_condtional22=(come_push_stackframe("06str.c", 844, 2850),__exception_result_var_b412=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 844, 2847)), "06str.c", 844, 2848))->p, "06str.c", 844, 2849))), come_pop_stackframe(), __exception_result_var_b412)&&len_239<3,                                _while_condtional22) {
                                    (come_push_stackframe("06str.c", 845, 2856),__exception_result_var_b413=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 845, 2851)), "06str.c", 845, 2852)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 845, 2853)), "06str.c", 845, 2854))->p, "06str.c", 845, 2855))), come_pop_stackframe(), __exception_result_var_b413);
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 846, 2857)), "06str.c", 846, 2858))->p++;
                                    len_239++;
                                }
                            }
                            else {
                                if(_if_conditional224=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 850, 2859)), "06str.c", 850, 2860))->p, "06str.c", 850, 2861))==120||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 850, 2862)), "06str.c", 850, 2863))->p, "06str.c", 850, 2864))==88,                                _if_conditional224) {
                                    (come_push_stackframe("06str.c", 851, 2870),__exception_result_var_b414=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 851, 2865)), "06str.c", 851, 2866)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 851, 2867)), "06str.c", 851, 2868))->p, "06str.c", 851, 2869))), come_pop_stackframe(), __exception_result_var_b414);
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 852, 2871)), "06str.c", 852, 2872))->p++;
                                    while(_while_condtional23=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2873)), "06str.c", 854, 2874))->p, "06str.c", 854, 2875))>=48&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2876)), "06str.c", 854, 2877))->p, "06str.c", 854, 2878))<=57||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2879)), "06str.c", 854, 2880))->p, "06str.c", 854, 2881))>=97&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2882)), "06str.c", 854, 2883))->p, "06str.c", 854, 2884))<=102||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2885)), "06str.c", 854, 2886))->p, "06str.c", 854, 2887))>=65&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 854, 2888)), "06str.c", 854, 2889))->p, "06str.c", 854, 2890))<=70,                                    _while_condtional23) {
                                        (come_push_stackframe("06str.c", 855, 2896),__exception_result_var_b415=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 855, 2891)), "06str.c", 855, 2892)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 855, 2893)), "06str.c", 855, 2894))->p, "06str.c", 855, 2895))), come_pop_stackframe(), __exception_result_var_b415);
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 856, 2897)), "06str.c", 856, 2898))->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional225=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 859, 2899)), "06str.c", 859, 2900))->p, "06str.c", 859, 2901))==123,                                    _if_conditional225) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 860, 2902)), "06str.c", 860, 2903))->p++;
                                        exp_240=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 862, 2904),__exception_result_var_b416=((struct sNode*)(right_value348=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b416));
                                        if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        (come_push_stackframe("06str.c", 864, 2907),__exception_result_var_b417=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(exps_236, "06str.c", 864, 2905)), "06str.c", 864, 2906)),(struct sNode*)come_increment_ref_count(exp_240)), come_pop_stackframe(), __exception_result_var_b417);
                                        if(_if_conditional226=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 866, 2908)), "06str.c", 866, 2909))->p, "06str.c", 866, 2910))==125,                                        _if_conditional226) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 867, 2911)), "06str.c", 867, 2912))->p++;
                                        }
                                        (come_push_stackframe("06str.c", 870, 2915),__exception_result_var_b418=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 870, 2913)), "06str.c", 870, 2914)),"%s"), come_pop_stackframe(), __exception_result_var_b418);
                                        if(exp_240) { exp_240 = come_decrement_ref_count2(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 873, 2916)), "06str.c", 873, 2917))->p, "06str.c", 873, 2918))) {
                                            case 48:
                                            (come_push_stackframe("06str.c", 875, 2924),__exception_result_var_b419=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 875, 2919)), "06str.c", 875, 2920)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 875, 2921)), "06str.c", 875, 2922))->p, "06str.c", 875, 2923))), come_pop_stackframe(), __exception_result_var_b419);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 876, 2925)), "06str.c", 876, 2926))->p++;
                                            break;
                                            case 110:
                                            (come_push_stackframe("06str.c", 880, 2932),__exception_result_var_b420=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 880, 2927)), "06str.c", 880, 2928)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 880, 2929)), "06str.c", 880, 2930))->p, "06str.c", 880, 2931))), come_pop_stackframe(), __exception_result_var_b420);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 881, 2933)), "06str.c", 881, 2934))->p++;
                                            break;
                                            case 116:
                                            (come_push_stackframe("06str.c", 885, 2940),__exception_result_var_b421=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 885, 2935)), "06str.c", 885, 2936)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 885, 2937)), "06str.c", 885, 2938))->p, "06str.c", 885, 2939))), come_pop_stackframe(), __exception_result_var_b421);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 886, 2941)), "06str.c", 886, 2942))->p++;
                                            break;
                                            case 114:
                                            (come_push_stackframe("06str.c", 890, 2948),__exception_result_var_b422=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 890, 2943)), "06str.c", 890, 2944)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 890, 2945)), "06str.c", 890, 2946))->p, "06str.c", 890, 2947))), come_pop_stackframe(), __exception_result_var_b422);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 891, 2949)), "06str.c", 891, 2950))->p++;
                                            break;
                                            case 118:
                                            (come_push_stackframe("06str.c", 895, 2956),__exception_result_var_b423=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 895, 2951)), "06str.c", 895, 2952)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 895, 2953)), "06str.c", 895, 2954))->p, "06str.c", 895, 2955))), come_pop_stackframe(), __exception_result_var_b423);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 896, 2957)), "06str.c", 896, 2958))->p++;
                                            break;
                                            case 102:
                                            (come_push_stackframe("06str.c", 900, 2964),__exception_result_var_b424=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 900, 2959)), "06str.c", 900, 2960)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 900, 2961)), "06str.c", 900, 2962))->p, "06str.c", 900, 2963))), come_pop_stackframe(), __exception_result_var_b424);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 901, 2965)), "06str.c", 901, 2966))->p++;
                                            break;
                                            case 97:
                                            (come_push_stackframe("06str.c", 905, 2972),__exception_result_var_b425=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 905, 2967)), "06str.c", 905, 2968)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 905, 2969)), "06str.c", 905, 2970))->p, "06str.c", 905, 2971))), come_pop_stackframe(), __exception_result_var_b425);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 906, 2973)), "06str.c", 906, 2974))->p++;
                                            break;
                                            case 98:
                                            (come_push_stackframe("06str.c", 910, 2980),__exception_result_var_b426=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 910, 2975)), "06str.c", 910, 2976)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 910, 2977)), "06str.c", 910, 2978))->p, "06str.c", 910, 2979))), come_pop_stackframe(), __exception_result_var_b426);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 911, 2981)), "06str.c", 911, 2982))->p++;
                                            break;
                                            case 92:
                                            (come_push_stackframe("06str.c", 915, 2988),__exception_result_var_b427=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 915, 2983)), "06str.c", 915, 2984)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 915, 2985)), "06str.c", 915, 2986))->p, "06str.c", 915, 2987))), come_pop_stackframe(), __exception_result_var_b427);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 916, 2989)), "06str.c", 916, 2990))->p++;
                                            break;
                                            default:
                                            (come_push_stackframe("06str.c", 920, 2996),__exception_result_var_b428=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 920, 2991)), "06str.c", 920, 2992)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 920, 2993)), "06str.c", 920, 2994))->p, "06str.c", 920, 2995))), come_pop_stackframe(), __exception_result_var_b428);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 921, 2997)), "06str.c", 921, 2998))->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional227=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 926, 2999)), "06str.c", 926, 3000))->p, "06str.c", 926, 3001))==0,                            _if_conditional227) {
                                sline2_241=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 927, 3002)), "06str.c", 927, 3003))->sline;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 928, 3004)), "06str.c", 928, 3005))->sline=sline_235;
                                (come_push_stackframe("06str.c", 929,3006),err_msg(info,"close \" to make embbeded string value"),come_pop_stackframe());
                                (come_push_stackframe("06str.c", 930,3007),exit(2),come_pop_stackframe());
                            }
                            else {
                                if(_if_conditional228=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 933, 3008)), "06str.c", 933, 3009))->p, "06str.c", 933, 3010))==10,                                _if_conditional228) {
                                    (come_push_stackframe("06str.c", 934, 3013),__exception_result_var_b429=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 934, 3011)), "06str.c", 934, 3012)),92), come_pop_stackframe(), __exception_result_var_b429);
                                    (come_push_stackframe("06str.c", 935, 3016),__exception_result_var_b430=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 935, 3014)), "06str.c", 935, 3015)),110), come_pop_stackframe(), __exception_result_var_b430);
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 936, 3017)), "06str.c", 936, 3018))->p++;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 937, 3019)), "06str.c", 937, 3020))->sline++;
                                    head_of_last_line_238=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 939, 3021)), "06str.c", 939, 3022))->p;
                                }
                                else {
                                    (come_push_stackframe("06str.c", 942, 3028),__exception_result_var_b431=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 942, 3023)), "06str.c", 942, 3024)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 942, 3025)), "06str.c", 942, 3026))->p, "06str.c", 942, 3027))), come_pop_stackframe(), __exception_result_var_b431);
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 943, 3029)), "06str.c", 943, 3030))->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        (come_push_stackframe("06str.c", 948,3031),skip_spaces_and_lf(info),come_pop_stackframe());
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 950, "struct sNode");
        _inf_obj_value1=come_increment_ref_count((come_push_stackframe("06str.c", 950, 3036),__exception_result_var_b433=((struct sSStringNode*)(right_value351=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)come_null_check(((struct sSStringNode*)(right_value349=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 950, "sSStringNode"))), "06str.c", 950, 3032))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 950, 3035),__exception_result_var_b432=((char*)(right_value350=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_237, "06str.c", 950, 3033)), "06str.c", 950, 3034))))), come_pop_stackframe(), __exception_result_var_b432)),(struct list$1sNodeph*)come_increment_ref_count(exps_236),sline_235,info))), come_pop_stackframe(), __exception_result_var_b433));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result150__ = __result_obj__ = ((struct sNode*)(right_value356=_inf_value1));
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value349,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value351,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result150__;
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional237=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 952, 3074)), "06str.c", 952, 3075))->p, "06str.c", 952, 3076))==34,        _if_conditional237) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 954, 3077)), "06str.c", 954, 3078))->p++;
            sline_243=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 956, 3079)), "06str.c", 956, 3080))->sline;
            value_244=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 958, 3082),__exception_result_var_b437=((struct buffer*)(right_value358=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value357=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 958, "buffer"))), "06str.c", 958, 3081)))))), come_pop_stackframe(), __exception_result_var_b437));
            come_call_finalizer3(right_value357,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value358,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            while(_while_condtional24=1,            _while_condtional24) {
                if(_if_conditional238=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 961, 3083)), "06str.c", 961, 3084))->p, "06str.c", 961, 3085))==34,                _if_conditional238) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 962, 3086)), "06str.c", 962, 3087))->p++;
                    p_245=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 964, 3088)), "06str.c", 964, 3089))->p;
                    sline_246=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 965, 3090)), "06str.c", 965, 3091))->sline;
                    (come_push_stackframe("06str.c", 967,3092),skip_spaces_and_lf(info),come_pop_stackframe());
                    (come_push_stackframe("06str.c", 971,3093),parse_sharp_v5(info),come_pop_stackframe());
                    if(_if_conditional239=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 971, 3094)), "06str.c", 971, 3095))->p, "06str.c", 971, 3096))==34,                    _if_conditional239) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 972, 3097)), "06str.c", 972, 3098))->p++;
                    }
                    else {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 975, 3099)), "06str.c", 975, 3100))->p=p_245;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 976, 3101)), "06str.c", 976, 3102))->sline=sline_246;
                        break;
                    }
                }
                else {
                    if(_if_conditional240=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 980, 3103)), "06str.c", 980, 3104))->p, "06str.c", 980, 3105))==92,                    _if_conditional240) {
                        (come_push_stackframe("06str.c", 981, 3108),__exception_result_var_b438=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_244, "06str.c", 981, 3106)), "06str.c", 981, 3107)),92), come_pop_stackframe(), __exception_result_var_b438);
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 982, 3109)), "06str.c", 982, 3110))->p++;
                        if(_if_conditional241=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 984, 3111)), "06str.c", 984, 3112))->p, "06str.c", 984, 3113))==34,                        _if_conditional241) {
                            (come_push_stackframe("06str.c", 985, 3116),__exception_result_var_b439=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_244, "06str.c", 985, 3114)), "06str.c", 985, 3115)),34), come_pop_stackframe(), __exception_result_var_b439);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 986, 3117)), "06str.c", 986, 3118))->p++;
                        }
                        else {
                            (come_push_stackframe("06str.c", 989, 3124),__exception_result_var_b440=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_244, "06str.c", 989, 3119)), "06str.c", 989, 3120)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 989, 3121)), "06str.c", 989, 3122))->p, "06str.c", 989, 3123))), come_pop_stackframe(), __exception_result_var_b440);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 990, 3125)), "06str.c", 990, 3126))->p++;
                        }
                    }
                    else {
                        if(_if_conditional242=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 993, 3127)), "06str.c", 993, 3128))->p, "06str.c", 993, 3129))==0,                        _if_conditional242) {
                            sline2_247=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 994, 3130)), "06str.c", 994, 3131))->sline;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 995, 3132)), "06str.c", 995, 3133))->sline=sline_243;
                            (come_push_stackframe("06str.c", 996,3134),err_msg(info,"close \" to make c string value"),come_pop_stackframe());
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 997, 3135)), "06str.c", 997, 3136))->sline=sline2_247;
                            (come_push_stackframe("06str.c", 998,3137),exit(2),come_pop_stackframe());
                        }
                        else {
                            if(_if_conditional243=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1001, 3138)), "06str.c", 1001, 3139))->p, "06str.c", 1001, 3140))==10,                            _if_conditional243) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1001, 3141)), "06str.c", 1001, 3142))->sline++;
                            }
                            (come_push_stackframe("06str.c", 1003, 3148),__exception_result_var_b441=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_244, "06str.c", 1003, 3143)), "06str.c", 1003, 3144)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1003, 3145)), "06str.c", 1003, 3146))->p, "06str.c", 1003, 3147))), come_pop_stackframe(), __exception_result_var_b441);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1004, 3149)), "06str.c", 1004, 3150))->p++;
                        }
                    }
                }
            }
            (come_push_stackframe("06str.c", 1008,3151),skip_spaces_and_lf(info),come_pop_stackframe());
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1010, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("06str.c", 1010, 3156),__exception_result_var_b443=((struct sStrNode*)(right_value361=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)come_null_check(((struct sStrNode*)(right_value359=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1010, "sStrNode"))), "06str.c", 1010, 3152))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1010, 3155),__exception_result_var_b442=((char*)(right_value360=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_244, "06str.c", 1010, 3153)), "06str.c", 1010, 3154))))), come_pop_stackframe(), __exception_result_var_b442)),sline_243,info))), come_pop_stackframe(), __exception_result_var_b443));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result153__ = __result_obj__ = ((struct sNode*)(right_value365=_inf_value2));
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value359,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value361,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result153__;
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional250=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1012, 3183)), "06str.c", 1012, 3184))->p, "06str.c", 1012, 3185))==47,            _if_conditional250) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1013, 3186)), "06str.c", 1013, 3187))->p++;
                sline_249=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1015, 3188)), "06str.c", 1015, 3189))->sline;
                buf_250=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1017, 3191),__exception_result_var_b446=((struct buffer*)(right_value367=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1017, "buffer"))), "06str.c", 1017, 3190)))))), come_pop_stackframe(), __exception_result_var_b446));
                come_call_finalizer3(right_value366,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value367,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                while(_while_condtional25=(_Bool)1,                _while_condtional25) {
                    if(_if_conditional251=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1019, 3192)), "06str.c", 1019, 3193))->p, "06str.c", 1019, 3194))==92&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1019, 3195)), "06str.c", 1019, 3196))->p+1), "06str.c", 1019, 3197))==47,                    _if_conditional251) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1020, 3198)), "06str.c", 1020, 3199))->p++;
                        (come_push_stackframe("06str.c", 1021, 3205),__exception_result_var_b447=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_250, "06str.c", 1021, 3200)), "06str.c", 1021, 3201)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1021, 3202)), "06str.c", 1021, 3203))->p, "06str.c", 1021, 3204))), come_pop_stackframe(), __exception_result_var_b447);
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1022, 3206)), "06str.c", 1022, 3207))->p++;
                    }
                    else {
                        if(_if_conditional252=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1024, 3208)), "06str.c", 1024, 3209))->p, "06str.c", 1024, 3210))==47,                        _if_conditional252) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1025, 3211)), "06str.c", 1025, 3212))->p++;
                            break;
                        }
                        else {
                            if(_if_conditional253=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1028, 3213)), "06str.c", 1028, 3214))->p, "06str.c", 1028, 3215))==0,                            _if_conditional253) {
                                (come_push_stackframe("06str.c", 1029,3216),err_msg(info,"require closing / for regex"),come_pop_stackframe());
                                (come_push_stackframe("06str.c", 1030,3217),exit(5),come_pop_stackframe());
                            }
                            else {
                                (come_push_stackframe("06str.c", 1033, 3223),__exception_result_var_b448=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_250, "06str.c", 1033, 3218)), "06str.c", 1033, 3219)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1033, 3220)), "06str.c", 1033, 3221))->p, "06str.c", 1033, 3222))), come_pop_stackframe(), __exception_result_var_b448);
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1034, 3224)), "06str.c", 1034, 3225))->p++;
                            }
                        }
                    }
                }
                global_251=(_Bool)0;
                ignore_case_252=(_Bool)0;
                while(_while_condtional26=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1040, 3226)), "06str.c", 1040, 3227))->p, "06str.c", 1040, 3228))==103||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1040, 3229)), "06str.c", 1040, 3230))->p, "06str.c", 1040, 3231))==105,                _while_condtional26) {
                    if(_if_conditional254=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1041, 3232)), "06str.c", 1041, 3233))->p, "06str.c", 1041, 3234))==103,                    _if_conditional254) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1042, 3235)), "06str.c", 1042, 3236))->p++;
                        global_251=(_Bool)1;
                    }
                    else {
                        if(_if_conditional255=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1045, 3237)), "06str.c", 1045, 3238))->p, "06str.c", 1045, 3239))==105,                        _if_conditional255) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1046, 3240)), "06str.c", 1046, 3241))->p++;
                            ignore_case_252=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                (come_push_stackframe("06str.c", 1054,3242),skip_spaces_and_lf(info),come_pop_stackframe());
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1056, "struct sNode");
                _inf_obj_value3=come_increment_ref_count((come_push_stackframe("06str.c", 1056, 3247),__exception_result_var_b450=((struct sRegexNode*)(right_value370=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)come_null_check(((struct sRegexNode*)(right_value368=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1056, "sRegexNode"))), "06str.c", 1056, 3243))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1056, 3246),__exception_result_var_b449=((char*)(right_value369=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_250, "06str.c", 1056, 3244)), "06str.c", 1056, 3245))))), come_pop_stackframe(), __exception_result_var_b449)),global_251,ignore_case_252,sline_249,info))), come_pop_stackframe(), __exception_result_var_b450));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result156__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value3));
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value368,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value370,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result156__;
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional264=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1058, 3282)), "06str.c", 1058, 3283))->p, "06str.c", 1058, 3284))==39,                _if_conditional264) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1059, 3285)), "06str.c", 1059, 3286))->p++;
                    if(_if_conditional265=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1063, 3287)), "06str.c", 1063, 3288))->p, "06str.c", 1063, 3289))==92,                    _if_conditional265) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1064, 3290)), "06str.c", 1064, 3291))->p++;
                        if(_if_conditional266=(come_push_stackframe("06str.c", 1066, 3295),__exception_result_var_b453=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1066, 3292)), "06str.c", 1066, 3293))->p, "06str.c", 1066, 3294))), come_pop_stackframe(), __exception_result_var_b453),                        _if_conditional266) {
                            n_255=0;
                            while(_while_condtional27=(come_push_stackframe("06str.c", 1068, 3299),__exception_result_var_b454=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1068, 3296)), "06str.c", 1068, 3297))->p, "06str.c", 1068, 3298))), come_pop_stackframe(), __exception_result_var_b454),                            _while_condtional27) {
                                n_255=n_255*8+*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1069, 3300)), "06str.c", 1069, 3301))->p, "06str.c", 1069, 3302))-48;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1070, 3303)), "06str.c", 1070, 3304))->p++;
                            }
                            c_254=n_255;
                        }
                        else {
                            switch (*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1076, 3305)), "06str.c", 1076, 3306))->p, "06str.c", 1076, 3307))) {
                                case 110:
                                c_254=10;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1079, 3308)), "06str.c", 1079, 3309))->p++;
                                break;
                                case 116:
                                c_254=9;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1084, 3310)), "06str.c", 1084, 3311))->p++;
                                break;
                                case 114:
                                c_254=13;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1089, 3312)), "06str.c", 1089, 3313))->p++;
                                break;
                                case 97:
                                c_254=7;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1094, 3314)), "06str.c", 1094, 3315))->p++;
                                break;
                                case 102:
                                c_254=12;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1099, 3316)), "06str.c", 1099, 3317))->p++;
                                break;
                                case 118:
                                c_254=11;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1104, 3318)), "06str.c", 1104, 3319))->p++;
                                break;
                                case 98:
                                c_254=8;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1109, 3320)), "06str.c", 1109, 3321))->p++;
                                break;
                                case 92:
                                c_254=92;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1114, 3322)), "06str.c", 1114, 3323))->p++;
                                break;
                                case 48:
                                c_254=0;
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1119, 3324)), "06str.c", 1119, 3325))->p++;
                                if(_if_conditional267=(come_push_stackframe("06str.c", 1121, 3329),__exception_result_var_b455=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1121, 3326)), "06str.c", 1121, 3327))->p, "06str.c", 1121, 3328))), come_pop_stackframe(), __exception_result_var_b455),                                _if_conditional267) {
                                    n_256=0;
                                    while(_while_condtional28=(come_push_stackframe("06str.c", 1123, 3333),__exception_result_var_b456=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1123, 3330)), "06str.c", 1123, 3331))->p, "06str.c", 1123, 3332))), come_pop_stackframe(), __exception_result_var_b456),                                    _while_condtional28) {
                                        n_256=n_256*8+*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1124, 3334)), "06str.c", 1124, 3335))->p, "06str.c", 1124, 3336))-48;
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1125, 3337)), "06str.c", 1125, 3338))->p++;
                                        (come_push_stackframe("06str.c", 1126,3339),skip_spaces_and_lf(info),come_pop_stackframe());
                                    }
                                    c_254=n_256;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1135, 3340)), "06str.c", 1135, 3341))->p++;
                                    char buf_257[128];
                                    memset(&buf_257, 0, sizeof(char)                                    *(128)                                    );
                                    (come_push_stackframe("06str.c", 1138, 3342),__exception_result_var_b457=strncpy(buf_257,"0x",128), come_pop_stackframe(), __exception_result_var_b457);
                                    while(_while_condtional29=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3343)), "06str.c", 1139, 3344))->p, "06str.c", 1139, 3345))>=48&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3346)), "06str.c", 1139, 3347))->p, "06str.c", 1139, 3348))<=57||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3349)), "06str.c", 1139, 3350))->p, "06str.c", 1139, 3351))>=97&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3352)), "06str.c", 1139, 3353))->p, "06str.c", 1139, 3354))<=102||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3355)), "06str.c", 1139, 3356))->p, "06str.c", 1139, 3357))>=65&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1139, 3358)), "06str.c", 1139, 3359))->p, "06str.c", 1139, 3360))<=70,                                    _while_condtional29) {
                                        char buf2_258[2];
                                        memset(&buf2_258, 0, sizeof(char)                                        *(2)                                        );
                                        (come_range_check(&((char*)come_null_check(buf2_258, "06str.c", 1141, 3361))[0],((char*)come_null_check(buf2_258, "06str.c", 1141, 3361)),((char*)come_null_check(buf2_258, "06str.c", 1141, 3361))+(2), "06str.c", 1141), ((char*)come_null_check(buf2_258, "06str.c", 1141, 3361))[0]=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1141, 3362)), "06str.c", 1141, 3363))->p, "06str.c", 1141, 3364)));
                                        (come_range_check(&((char*)come_null_check(buf2_258, "06str.c", 1142, 3365))[1],((char*)come_null_check(buf2_258, "06str.c", 1142, 3365)),((char*)come_null_check(buf2_258, "06str.c", 1142, 3365))+(2), "06str.c", 1142), ((char*)come_null_check(buf2_258, "06str.c", 1142, 3365))[1]=0);
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1143, 3366)), "06str.c", 1143, 3367))->p++;
                                        (come_push_stackframe("06str.c", 1144, 3368),__exception_result_var_b458=strncat(buf_257,buf2_258,128), come_pop_stackframe(), __exception_result_var_b458);
                                    }
                                    n_259=(come_push_stackframe("06str.c", 1147, 3369),__exception_result_var_b459=strtoll(buf_257,((void*)0),0), come_pop_stackframe(), __exception_result_var_b459);
                                    c_254=n_259;
                                }
                                break;
                                default:
                                c_254=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1154, 3370)), "06str.c", 1154, 3371))->p, "06str.c", 1154, 3372));
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1155, 3373)), "06str.c", 1155, 3374))->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_254=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1161, 3375)), "06str.c", 1161, 3376))->p, "06str.c", 1161, 3377));
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1162, 3378)), "06str.c", 1162, 3379))->p++;
                    }
                    if(_if_conditional268=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1165, 3380)), "06str.c", 1165, 3381))->p, "06str.c", 1165, 3382))!=39,                    _if_conditional268) {
                        (come_push_stackframe("06str.c", 1166,3383),err_msg(info,"close \' to make character value"),come_pop_stackframe());
                    }
                    else {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1169, 3384)), "06str.c", 1169, 3385))->p++;
                        (come_push_stackframe("06str.c", 1171,3386),skip_spaces_and_lf(info),come_pop_stackframe());
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1173, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count((come_push_stackframe("06str.c", 1173, 3388),__exception_result_var_b460=((struct sCharNode*)(right_value376=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)come_null_check(((struct sCharNode*)(right_value375=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1173, "sCharNode"))), "06str.c", 1173, 3387))),c_254,info))), come_pop_stackframe(), __exception_result_var_b460));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result159__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value4));
                        come_call_finalizer3(right_value375,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value376,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result159__;
                    }
                }
                else {
                    if(_if_conditional274=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1177, 3408)), "06str.c", 1177, 3409))->p, "06str.c", 1177, 3410))==76&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1177, 3411)), "06str.c", 1177, 3412))->p+1), "06str.c", 1177, 3413))==39,                    _if_conditional274) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1178, 3414)), "06str.c", 1178, 3415))->p+=2;
                        if(_if_conditional275=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1183, 3416)), "06str.c", 1183, 3417))->p, "06str.c", 1183, 3418))==92,                        _if_conditional275) {
                            quote_262=(_Bool)1;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1185, 3419)), "06str.c", 1185, 3420))->p++;
                            if(_if_conditional276=(come_push_stackframe("06str.c", 1187, 3424),__exception_result_var_b462=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1187, 3421)), "06str.c", 1187, 3422))->p, "06str.c", 1187, 3423))), come_pop_stackframe(), __exception_result_var_b462),                            _if_conditional276) {
                                n_263=0;
                                while(_while_condtional30=(come_push_stackframe("06str.c", 1189, 3428),__exception_result_var_b463=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1189, 3425)), "06str.c", 1189, 3426))->p, "06str.c", 1189, 3427))), come_pop_stackframe(), __exception_result_var_b463),                                _while_condtional30) {
                                    n_263=n_263*8+*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1190, 3429)), "06str.c", 1190, 3430))->p, "06str.c", 1190, 3431))-48;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1191, 3432)), "06str.c", 1191, 3433))->p++;
                                }
                                c_261=n_263;
                            }
                            else {
                                switch (*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1197, 3434)), "06str.c", 1197, 3435))->p, "06str.c", 1197, 3436))) {
                                    case 110:
                                    c_261=10;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1200, 3437)), "06str.c", 1200, 3438))->p++;
                                    break;
                                    case 116:
                                    c_261=9;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1205, 3439)), "06str.c", 1205, 3440))->p++;
                                    break;
                                    case 114:
                                    c_261=13;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1210, 3441)), "06str.c", 1210, 3442))->p++;
                                    break;
                                    case 97:
                                    c_261=7;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1215, 3443)), "06str.c", 1215, 3444))->p++;
                                    break;
                                    case 92:
                                    c_261=92;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1220, 3445)), "06str.c", 1220, 3446))->p++;
                                    break;
                                    case 48:
                                    c_261=0;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1226, 3447)), "06str.c", 1226, 3448))->p++;
                                    if(_if_conditional277=(come_push_stackframe("06str.c", 1228, 3452),__exception_result_var_b464=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1228, 3449)), "06str.c", 1228, 3450))->p, "06str.c", 1228, 3451))), come_pop_stackframe(), __exception_result_var_b464),                                    _if_conditional277) {
                                        n_264=0;
                                        while(_while_condtional31=(come_push_stackframe("06str.c", 1230, 3456),__exception_result_var_b465=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1230, 3453)), "06str.c", 1230, 3454))->p, "06str.c", 1230, 3455))), come_pop_stackframe(), __exception_result_var_b465),                                        _while_condtional31) {
                                            n_264=n_264*8+*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1231, 3457)), "06str.c", 1231, 3458))->p, "06str.c", 1231, 3459))-48;
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1232, 3460)), "06str.c", 1232, 3461))->p++;
                                            (come_push_stackframe("06str.c", 1233,3462),skip_spaces_and_lf(info),come_pop_stackframe());
                                        }
                                        c_261=n_264;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1242, 3463)), "06str.c", 1242, 3464))->p++;
                                        char buf_265[128];
                                        memset(&buf_265, 0, sizeof(char)                                        *(128)                                        );
                                        (come_push_stackframe("06str.c", 1245, 3465),__exception_result_var_b466=strncpy(buf_265,"0x",128), come_pop_stackframe(), __exception_result_var_b466);
                                        while(_while_condtional32=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3466)), "06str.c", 1246, 3467))->p, "06str.c", 1246, 3468))>=48&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3469)), "06str.c", 1246, 3470))->p, "06str.c", 1246, 3471))<=57||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3472)), "06str.c", 1246, 3473))->p, "06str.c", 1246, 3474))>=97&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3475)), "06str.c", 1246, 3476))->p, "06str.c", 1246, 3477))<=102||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3478)), "06str.c", 1246, 3479))->p, "06str.c", 1246, 3480))>=65&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1246, 3481)), "06str.c", 1246, 3482))->p, "06str.c", 1246, 3483))<=70,                                        _while_condtional32) {
                                            char buf2_266[2];
                                            memset(&buf2_266, 0, sizeof(char)                                            *(2)                                            );
                                            (come_range_check(&((char*)come_null_check(buf2_266, "06str.c", 1248, 3484))[0],((char*)come_null_check(buf2_266, "06str.c", 1248, 3484)),((char*)come_null_check(buf2_266, "06str.c", 1248, 3484))+(2), "06str.c", 1248), ((char*)come_null_check(buf2_266, "06str.c", 1248, 3484))[0]=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1248, 3485)), "06str.c", 1248, 3486))->p, "06str.c", 1248, 3487)));
                                            (come_range_check(&((char*)come_null_check(buf2_266, "06str.c", 1249, 3488))[1],((char*)come_null_check(buf2_266, "06str.c", 1249, 3488)),((char*)come_null_check(buf2_266, "06str.c", 1249, 3488))+(2), "06str.c", 1249), ((char*)come_null_check(buf2_266, "06str.c", 1249, 3488))[1]=0);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1250, 3489)), "06str.c", 1250, 3490))->p++;
                                            (come_push_stackframe("06str.c", 1251, 3491),__exception_result_var_b467=strncat(buf_265,buf2_266,128), come_pop_stackframe(), __exception_result_var_b467);
                                        }
                                        n_267=(come_push_stackframe("06str.c", 1254, 3492),__exception_result_var_b468=strtoll(buf_265,((void*)0),0), come_pop_stackframe(), __exception_result_var_b468);
                                        c_261=n_267;
                                    }
                                    break;
                                    default:
                                    c_261=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1261, 3493)), "06str.c", 1261, 3494))->p, "06str.c", 1261, 3495));
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1262, 3496)), "06str.c", 1262, 3497))->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            quote_262=(_Bool)0;
                            p2_268=*((unsigned char*)come_null_check((unsigned char*)((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1269, 3498)), "06str.c", 1269, 3499))->p, "06str.c", 1269, 3500));
                            if(_if_conditional278=p2_268>127,                            _if_conditional278) {
                                char str_270[4+1];
                                memset(&str_270, 0, sizeof(char)                                *(4+1)                                );
                                size_269=((p2_268&128)>>7)+((p2_268&64)>>6)+((p2_268&32)>>5)+((p2_268&16)>>4);
                                if(_if_conditional279=size_269>4,                                _if_conditional279) {
                                    (come_push_stackframe("06str.c", 1279,3501),err_msg(info,"invalid utf-8 character. MB_LEN_MAX"),come_pop_stackframe());
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1280, 3502)), "06str.c", 1280, 3503))->err_num++;
                                }
                                else {
                                    (come_push_stackframe("06str.c", 1283, 3506),__exception_result_var_b469=memcpy(str_270,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1283, 3504)), "06str.c", 1283, 3505))->p,size_269), come_pop_stackframe(), __exception_result_var_b469);
                                    (come_range_check(&((char*)come_null_check(str_270, "06str.c", 1284, 3507))[size_269],((char*)come_null_check(str_270, "06str.c", 1284, 3507)),((char*)come_null_check(str_270, "06str.c", 1284, 3507))+(4+1), "06str.c", 1284), ((char*)come_null_check(str_270, "06str.c", 1284, 3507))[size_269]=0);
                                    if(_if_conditional280=(come_push_stackframe("06str.c", 1286, 3508),__exception_result_var_b470=mbtowc(&c_261,str_270,size_269), come_pop_stackframe(), __exception_result_var_b470)<0,                                    _if_conditional280) {
                                        (come_push_stackframe("06str.c", 1287,3509),perror("mbtowc"),come_pop_stackframe());
                                        (come_push_stackframe("06str.c", 1288,3510),err_msg(info,"invalid utf-8 character. mbtowc"),come_pop_stackframe());
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1289, 3511)), "06str.c", 1289, 3512))->err_num++;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1292, 3513)), "06str.c", 1292, 3514))->p+=size_269;
                                    }
                                }
                            }
                            else {
                                c_261=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1298, 3515)), "06str.c", 1298, 3516))->p, "06str.c", 1298, 3517));
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1299, 3518)), "06str.c", 1299, 3519))->p++;
                            }
                        }
                        if(_if_conditional281=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1303, 3520)), "06str.c", 1303, 3521))->p, "06str.c", 1303, 3522))!=39,                        _if_conditional281) {
                            (come_push_stackframe("06str.c", 1304,3523),err_msg(info,"close \' to make character value"),come_pop_stackframe());
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1305, 3524)), "06str.c", 1305, 3525))->err_num++;
                        }
                        else {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1308, 3526)), "06str.c", 1308, 3527))->p++;
                            (come_push_stackframe("06str.c", 1310,3528),skip_spaces_and_lf(info),come_pop_stackframe());
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1312, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count((come_push_stackframe("06str.c", 1312, 3530),__exception_result_var_b471=((struct sWCharNode*)(right_value381=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)come_null_check(((struct sWCharNode*)(right_value380=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1312, "sWCharNode"))), "06str.c", 1312, 3529))),c_261,quote_262,info))), come_pop_stackframe(), __exception_result_var_b471));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result162__ = __result_obj__ = ((struct sNode*)(right_value384=_inf_value5));
                            come_call_finalizer3(right_value380,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value381,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result162__;
                        }
                    }
                    else {
                        if(_if_conditional288=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1316, 3554)), "06str.c", 1316, 3555))->p, "06str.c", 1316, 3556))==76&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1316, 3557)), "06str.c", 1316, 3558))->p+1), "06str.c", 1316, 3559))==34,                        _if_conditional288) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1317, 3560)), "06str.c", 1317, 3561))->p+=2;
                            sline_272=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1319, 3562)), "06str.c", 1319, 3563))->sline;
                            value_273=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1321, 3565),__exception_result_var_b473=((struct buffer*)(right_value386=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value385=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1321, "buffer"))), "06str.c", 1321, 3564)))))), come_pop_stackframe(), __exception_result_var_b473));
                            come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value386,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            while(_while_condtional33=1,                            _while_condtional33) {
                                if(_if_conditional289=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1324, 3566)), "06str.c", 1324, 3567))->p, "06str.c", 1324, 3568))==34,                                _if_conditional289) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1325, 3569)), "06str.c", 1325, 3570))->p++;
                                    p_274=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1327, 3571)), "06str.c", 1327, 3572))->p;
                                    sline_275=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1328, 3573)), "06str.c", 1328, 3574))->sline;
                                    (come_push_stackframe("06str.c", 1330,3575),skip_spaces_and_lf(info),come_pop_stackframe());
                                    if(_if_conditional290=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1332, 3576)), "06str.c", 1332, 3577))->p, "06str.c", 1332, 3578))==34,                                    _if_conditional290) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1333, 3579)), "06str.c", 1333, 3580))->p++;
                                    }
                                    else {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1336, 3581)), "06str.c", 1336, 3582))->p=p_274;
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1337, 3583)), "06str.c", 1337, 3584))->sline=sline_275;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional291=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1341, 3585)), "06str.c", 1341, 3586))->p, "06str.c", 1341, 3587))==92,                                    _if_conditional291) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1342, 3588)), "06str.c", 1342, 3589))->p++;
                                        if(_if_conditional292=(come_push_stackframe("06str.c", 1344, 3593),__exception_result_var_b474=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1344, 3590)), "06str.c", 1344, 3591))->p, "06str.c", 1344, 3592))), come_pop_stackframe(), __exception_result_var_b474),                                        _if_conditional292) {
                                            len_276=0;
                                            n_277=0;
                                            while(_while_condtional34=(come_push_stackframe("06str.c", 1347, 3597),__exception_result_var_b475=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1347, 3594)), "06str.c", 1347, 3595))->p, "06str.c", 1347, 3596))), come_pop_stackframe(), __exception_result_var_b475)&&len_276<3,                                            _while_condtional34) {
                                                n_277=n_277*8+*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1348, 3598)), "06str.c", 1348, 3599))->p, "06str.c", 1348, 3600))-48;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1349, 3601)), "06str.c", 1349, 3602))->p++;
                                                len_276++;
                                            }
                                            (come_push_stackframe("06str.c", 1353, 3605),__exception_result_var_b476=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1353, 3603)), "06str.c", 1353, 3604)),n_277), come_pop_stackframe(), __exception_result_var_b476);
                                        }
                                        else {
                                            if(_if_conditional293=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1355, 3606)), "06str.c", 1355, 3607))->p, "06str.c", 1355, 3608))==120||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1355, 3609)), "06str.c", 1355, 3610))->p, "06str.c", 1355, 3611))==88,                                            _if_conditional293) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1356, 3612)), "06str.c", 1356, 3613))->p++;
                                                char buf_278[128];
                                                memset(&buf_278, 0, sizeof(char)                                                *(128)                                                );
                                                (come_push_stackframe("06str.c", 1359, 3614),__exception_result_var_b477=strncpy(buf_278,"0x",128), come_pop_stackframe(), __exception_result_var_b477);
                                                while(_while_condtional35=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3615)), "06str.c", 1360, 3616))->p, "06str.c", 1360, 3617))>=48&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3618)), "06str.c", 1360, 3619))->p, "06str.c", 1360, 3620))<=57||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3621)), "06str.c", 1360, 3622))->p, "06str.c", 1360, 3623))>=97&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3624)), "06str.c", 1360, 3625))->p, "06str.c", 1360, 3626))<=102||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3627)), "06str.c", 1360, 3628))->p, "06str.c", 1360, 3629))>=65&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1360, 3630)), "06str.c", 1360, 3631))->p, "06str.c", 1360, 3632))<=70,                                                _while_condtional35) {
                                                    char buf2_279[2];
                                                    memset(&buf2_279, 0, sizeof(char)                                                    *(2)                                                    );
                                                    (come_range_check(&((char*)come_null_check(buf2_279, "06str.c", 1362, 3633))[0],((char*)come_null_check(buf2_279, "06str.c", 1362, 3633)),((char*)come_null_check(buf2_279, "06str.c", 1362, 3633))+(2), "06str.c", 1362), ((char*)come_null_check(buf2_279, "06str.c", 1362, 3633))[0]=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1362, 3634)), "06str.c", 1362, 3635))->p, "06str.c", 1362, 3636)));
                                                    (come_range_check(&((char*)come_null_check(buf2_279, "06str.c", 1363, 3637))[1],((char*)come_null_check(buf2_279, "06str.c", 1363, 3637)),((char*)come_null_check(buf2_279, "06str.c", 1363, 3637))+(2), "06str.c", 1363), ((char*)come_null_check(buf2_279, "06str.c", 1363, 3637))[1]=0);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1364, 3638)), "06str.c", 1364, 3639))->p++;
                                                    (come_push_stackframe("06str.c", 1365, 3640),__exception_result_var_b478=strncat(buf_278,buf2_279,128), come_pop_stackframe(), __exception_result_var_b478);
                                                }
                                                n_281=(come_push_stackframe("06str.c", 1368, 3641),__exception_result_var_b479=strtoll(buf_278,((void*)0),0), come_pop_stackframe(), __exception_result_var_b479);
                                                (come_push_stackframe("06str.c", 1370, 3644),__exception_result_var_b480=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1370, 3642)), "06str.c", 1370, 3643)),(char)n_281), come_pop_stackframe(), __exception_result_var_b480);
                                            }
                                            else {
                                                switch (*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1373, 3645)), "06str.c", 1373, 3646))->p, "06str.c", 1373, 3647))) {
                                                    case 48:
                                                    (come_push_stackframe("06str.c", 1375, 3650),__exception_result_var_b481=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1375, 3648)), "06str.c", 1375, 3649)),0), come_pop_stackframe(), __exception_result_var_b481);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1376, 3651)), "06str.c", 1376, 3652))->p++;
                                                    break;
                                                    case 110:
                                                    (come_push_stackframe("06str.c", 1380, 3655),__exception_result_var_b482=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1380, 3653)), "06str.c", 1380, 3654)),10), come_pop_stackframe(), __exception_result_var_b482);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1381, 3656)), "06str.c", 1381, 3657))->p++;
                                                    break;
                                                    case 116:
                                                    (come_push_stackframe("06str.c", 1385, 3660),__exception_result_var_b483=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1385, 3658)), "06str.c", 1385, 3659)),9), come_pop_stackframe(), __exception_result_var_b483);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1386, 3661)), "06str.c", 1386, 3662))->p++;
                                                    break;
                                                    case 114:
                                                    (come_push_stackframe("06str.c", 1390, 3665),__exception_result_var_b484=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1390, 3663)), "06str.c", 1390, 3664)),13), come_pop_stackframe(), __exception_result_var_b484);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1391, 3666)), "06str.c", 1391, 3667))->p++;
                                                    break;
                                                    case 118:
                                                    (come_push_stackframe("06str.c", 1395, 3670),__exception_result_var_b485=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1395, 3668)), "06str.c", 1395, 3669)),11), come_pop_stackframe(), __exception_result_var_b485);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1396, 3671)), "06str.c", 1396, 3672))->p++;
                                                    break;
                                                    case 102:
                                                    (come_push_stackframe("06str.c", 1400, 3675),__exception_result_var_b486=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1400, 3673)), "06str.c", 1400, 3674)),12), come_pop_stackframe(), __exception_result_var_b486);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1401, 3676)), "06str.c", 1401, 3677))->p++;
                                                    break;
                                                    case 97:
                                                    (come_push_stackframe("06str.c", 1405, 3680),__exception_result_var_b487=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1405, 3678)), "06str.c", 1405, 3679)),7), come_pop_stackframe(), __exception_result_var_b487);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1406, 3681)), "06str.c", 1406, 3682))->p++;
                                                    break;
                                                    case 98:
                                                    (come_push_stackframe("06str.c", 1410, 3685),__exception_result_var_b488=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1410, 3683)), "06str.c", 1410, 3684)),8), come_pop_stackframe(), __exception_result_var_b488);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1411, 3686)), "06str.c", 1411, 3687))->p++;
                                                    break;
                                                    case 92:
                                                    (come_push_stackframe("06str.c", 1415, 3690),__exception_result_var_b489=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1415, 3688)), "06str.c", 1415, 3689)),92), come_pop_stackframe(), __exception_result_var_b489);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1416, 3691)), "06str.c", 1416, 3692))->p++;
                                                    break;
                                                    default:
                                                    (come_push_stackframe("06str.c", 1420, 3698),__exception_result_var_b490=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1420, 3693)), "06str.c", 1420, 3694)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1420, 3695)), "06str.c", 1420, 3696))->p, "06str.c", 1420, 3697))), come_pop_stackframe(), __exception_result_var_b490);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1421, 3699)), "06str.c", 1421, 3700))->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional294=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1426, 3701)), "06str.c", 1426, 3702))->p, "06str.c", 1426, 3703))==0,                                        _if_conditional294) {
                                            sline2_282=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1427, 3704)), "06str.c", 1427, 3705))->sline;
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1428, 3706)), "06str.c", 1428, 3707))->sline=sline_272;
                                            (come_push_stackframe("06str.c", 1429,3708),err_msg(info,"close \" to make c string value"),come_pop_stackframe());
                                            (come_push_stackframe("06str.c", 1430,3709),exit(2),come_pop_stackframe());
                                        }
                                        else {
                                            if(_if_conditional295=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1433, 3710)), "06str.c", 1433, 3711))->p, "06str.c", 1433, 3712))==10,                                            _if_conditional295) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1433, 3713)), "06str.c", 1433, 3714))->sline++;
                                            }
                                            (come_push_stackframe("06str.c", 1435, 3720),__exception_result_var_b491=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1435, 3715)), "06str.c", 1435, 3716)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1435, 3717)), "06str.c", 1435, 3718))->p, "06str.c", 1435, 3719))), come_pop_stackframe(), __exception_result_var_b491);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1436, 3721)), "06str.c", 1436, 3722))->p++;
                                        }
                                    }
                                }
                            }
                            (come_push_stackframe("06str.c", 1440,3723),skip_spaces_and_lf(info),come_pop_stackframe());
                            len_283=((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1442, 3724)), "06str.c", 1442, 3725))->len;
                            wstr_284=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value387=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_283+1)), "06str.c", 1444, "int"))));
                            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            str_285=((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_273, "06str.c", 1446, 3726)), "06str.c", 1446, 3727))->buf;
                            if(_if_conditional296=(come_push_stackframe("06str.c", 1448, 3728),__exception_result_var_b492=mbstowcs(wstr_284,str_285,len_283+1), come_pop_stackframe(), __exception_result_var_b492)<0,                            _if_conditional296) {
                                (come_push_stackframe("06str.c", 1449,3729),perror("mbstowcs"),come_pop_stackframe());
                                (come_push_stackframe("06str.c", 1450,3730),exit(1),come_pop_stackframe());
                            }
                            ((unsigned int*)come_null_check(wstr_284, "06str.c", 1453, 3731))[len_283]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1455, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count((come_push_stackframe("06str.c", 1455, 3733),__exception_result_var_b493=((struct sWStringNode*)(right_value389=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)come_null_check(((struct sWStringNode*)(right_value388=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1455, "sWStringNode"))), "06str.c", 1455, 3732))),(unsigned int*)come_increment_ref_count(wstr_284),sline_272,info))), come_pop_stackframe(), __exception_result_var_b493));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result165__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value6));
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value388,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value389,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result165__;
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional303=(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1458, 3760)), "06str.c", 1458, 3761))->p, "06str.c", 1458, 3762))==115||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1458, 3763)), "06str.c", 1458, 3764))->p, "06str.c", 1458, 3765))==83)&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1458, 3766)), "06str.c", 1458, 3767))->p+1), "06str.c", 1458, 3768))==34,                            _if_conditional303) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1459, 3769)), "06str.c", 1459, 3770))->p+=2;
                                sline_287=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1461, 3771)), "06str.c", 1461, 3772))->sline;
                                exps_288=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1463, 3774),__exception_result_var_b496=((struct list$1sNodeph*)(right_value395=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value394=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1463, "list$1sNodeph"))), "06str.c", 1463, 3773)))))), come_pop_stackframe(), __exception_result_var_b496));
                                come_call_finalizer3(right_value394,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value395,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                value_289=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1464, 3776),__exception_result_var_b497=((struct buffer*)(right_value397=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value396=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1464, "buffer"))), "06str.c", 1464, 3775)))))), come_pop_stackframe(), __exception_result_var_b497));
                                come_call_finalizer3(right_value396,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value397,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                while(_while_condtional36=1,                                _while_condtional36) {
                                    if(_if_conditional304=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1467, 3777)), "06str.c", 1467, 3778))->p, "06str.c", 1467, 3779))==34,                                    _if_conditional304) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1468, 3780)), "06str.c", 1468, 3781))->p++;
                                        p_290=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1470, 3782)), "06str.c", 1470, 3783))->p;
                                        sline_291=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1471, 3784)), "06str.c", 1471, 3785))->sline;
                                        (come_push_stackframe("06str.c", 1473,3786),skip_spaces_and_lf(info),come_pop_stackframe());
                                        if(_if_conditional305=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1475, 3787)), "06str.c", 1475, 3788))->p, "06str.c", 1475, 3789))==34,                                        _if_conditional305) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1476, 3790)), "06str.c", 1476, 3791))->p++;
                                        }
                                        else {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1479, 3792)), "06str.c", 1479, 3793))->p=p_290;
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1480, 3794)), "06str.c", 1480, 3795))->sline=sline_291;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional306=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1484, 3796)), "06str.c", 1484, 3797))->p, "06str.c", 1484, 3798))==37,                                        _if_conditional306) {
                                            (come_push_stackframe("06str.c", 1485, 3801),__exception_result_var_b498=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1485, 3799)), "06str.c", 1485, 3800)),37), come_pop_stackframe(), __exception_result_var_b498);
                                            (come_push_stackframe("06str.c", 1486, 3804),__exception_result_var_b499=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1486, 3802)), "06str.c", 1486, 3803)),37), come_pop_stackframe(), __exception_result_var_b499);
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1487, 3805)), "06str.c", 1487, 3806))->p++;
                                        }
                                        else {
                                            if(_if_conditional307=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1489, 3807)), "06str.c", 1489, 3808))->p, "06str.c", 1489, 3809))==36,                                            _if_conditional307) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1490, 3810)), "06str.c", 1490, 3811))->p++;
                                                exp_292=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1492, 3812),__exception_result_var_b500=((struct sNode*)(right_value398=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b500));
                                                if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                (come_push_stackframe("06str.c", 1494, 3815),__exception_result_var_b501=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(exps_288, "06str.c", 1494, 3813)), "06str.c", 1494, 3814)),(struct sNode*)come_increment_ref_count(exp_292)), come_pop_stackframe(), __exception_result_var_b501);
                                                (come_push_stackframe("06str.c", 1496, 3818),__exception_result_var_b502=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1496, 3816)), "06str.c", 1496, 3817)),"%s"), come_pop_stackframe(), __exception_result_var_b502);
                                                p_293=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1498, 3819)), "06str.c", 1498, 3820))->p-1;
                                                while(_while_condtional37=*((char*)come_null_check(p_293, "06str.c", 1499, 3821))==32||*((char*)come_null_check(p_293, "06str.c", 1499, 3822))==9,                                                _while_condtional37) {
                                                    p_293--;
                                                }
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1503, 3823)), "06str.c", 1503, 3824))->p=p_293+1;
                                                if(exp_292) { exp_292 = come_decrement_ref_count2(exp_292, ((struct sNode*)exp_292)->finalize, ((struct sNode*)exp_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional308=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1505, 3825)), "06str.c", 1505, 3826))->p, "06str.c", 1505, 3827))==92,                                                _if_conditional308) {
                                                    (come_push_stackframe("06str.c", 1506, 3830),__exception_result_var_b503=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1506, 3828)), "06str.c", 1506, 3829)),92), come_pop_stackframe(), __exception_result_var_b503);
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1507, 3831)), "06str.c", 1507, 3832))->p++;
                                                    if(_if_conditional309=(come_push_stackframe("06str.c", 1509, 3836),__exception_result_var_b504=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1509, 3833)), "06str.c", 1509, 3834))->p, "06str.c", 1509, 3835))), come_pop_stackframe(), __exception_result_var_b504),                                                    _if_conditional309) {
                                                        len_294=0;
                                                        while(_while_condtional38=(come_push_stackframe("06str.c", 1511, 3840),__exception_result_var_b505=xisdigit(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1511, 3837)), "06str.c", 1511, 3838))->p, "06str.c", 1511, 3839))), come_pop_stackframe(), __exception_result_var_b505)&&len_294<3,                                                        _while_condtional38) {
                                                            (come_push_stackframe("06str.c", 1512, 3846),__exception_result_var_b506=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1512, 3841)), "06str.c", 1512, 3842)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1512, 3843)), "06str.c", 1512, 3844))->p, "06str.c", 1512, 3845))), come_pop_stackframe(), __exception_result_var_b506);
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1513, 3847)), "06str.c", 1513, 3848))->p++;
                                                            len_294++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional310=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1517, 3849)), "06str.c", 1517, 3850))->p, "06str.c", 1517, 3851))==120||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1517, 3852)), "06str.c", 1517, 3853))->p, "06str.c", 1517, 3854))==88,                                                        _if_conditional310) {
                                                            (come_push_stackframe("06str.c", 1518, 3860),__exception_result_var_b507=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1518, 3855)), "06str.c", 1518, 3856)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1518, 3857)), "06str.c", 1518, 3858))->p, "06str.c", 1518, 3859))), come_pop_stackframe(), __exception_result_var_b507);
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1519, 3861)), "06str.c", 1519, 3862))->p++;
                                                            while(_while_condtional39=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3863)), "06str.c", 1521, 3864))->p, "06str.c", 1521, 3865))>=48&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3866)), "06str.c", 1521, 3867))->p, "06str.c", 1521, 3868))<=57||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3869)), "06str.c", 1521, 3870))->p, "06str.c", 1521, 3871))>=97&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3872)), "06str.c", 1521, 3873))->p, "06str.c", 1521, 3874))<=102||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3875)), "06str.c", 1521, 3876))->p, "06str.c", 1521, 3877))>=65&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1521, 3878)), "06str.c", 1521, 3879))->p, "06str.c", 1521, 3880))<=70,                                                            _while_condtional39) {
                                                                (come_push_stackframe("06str.c", 1522, 3886),__exception_result_var_b508=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1522, 3881)), "06str.c", 1522, 3882)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1522, 3883)), "06str.c", 1522, 3884))->p, "06str.c", 1522, 3885))), come_pop_stackframe(), __exception_result_var_b508);
                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1523, 3887)), "06str.c", 1523, 3888))->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional311=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1526, 3889)), "06str.c", 1526, 3890))->p, "06str.c", 1526, 3891))==123,                                                            _if_conditional311) {
                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1527, 3892)), "06str.c", 1527, 3893))->p++;
                                                                exp_295=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1529, 3894),__exception_result_var_b509=((struct sNode*)(right_value399=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b509));
                                                                if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                (come_push_stackframe("06str.c", 1531, 3897),__exception_result_var_b510=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(exps_288, "06str.c", 1531, 3895)), "06str.c", 1531, 3896)),(struct sNode*)come_increment_ref_count(exp_295)), come_pop_stackframe(), __exception_result_var_b510);
                                                                if(_if_conditional312=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1533, 3898)), "06str.c", 1533, 3899))->p, "06str.c", 1533, 3900))==125,                                                                _if_conditional312) {
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1534, 3901)), "06str.c", 1534, 3902))->p++;
                                                                }
                                                                (come_push_stackframe("06str.c", 1537, 3905),__exception_result_var_b511=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1537, 3903)), "06str.c", 1537, 3904)),"%s"), come_pop_stackframe(), __exception_result_var_b511);
                                                                if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1540, 3906)), "06str.c", 1540, 3907))->p, "06str.c", 1540, 3908))) {
                                                                    case 48:
                                                                    (come_push_stackframe("06str.c", 1542, 3914),__exception_result_var_b512=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1542, 3909)), "06str.c", 1542, 3910)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1542, 3911)), "06str.c", 1542, 3912))->p, "06str.c", 1542, 3913))), come_pop_stackframe(), __exception_result_var_b512);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1543, 3915)), "06str.c", 1543, 3916))->p++;
                                                                    break;
                                                                    case 110:
                                                                    (come_push_stackframe("06str.c", 1547, 3922),__exception_result_var_b513=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1547, 3917)), "06str.c", 1547, 3918)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1547, 3919)), "06str.c", 1547, 3920))->p, "06str.c", 1547, 3921))), come_pop_stackframe(), __exception_result_var_b513);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1548, 3923)), "06str.c", 1548, 3924))->p++;
                                                                    break;
                                                                    case 116:
                                                                    (come_push_stackframe("06str.c", 1552, 3930),__exception_result_var_b514=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1552, 3925)), "06str.c", 1552, 3926)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1552, 3927)), "06str.c", 1552, 3928))->p, "06str.c", 1552, 3929))), come_pop_stackframe(), __exception_result_var_b514);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1553, 3931)), "06str.c", 1553, 3932))->p++;
                                                                    break;
                                                                    case 114:
                                                                    (come_push_stackframe("06str.c", 1557, 3938),__exception_result_var_b515=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1557, 3933)), "06str.c", 1557, 3934)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1557, 3935)), "06str.c", 1557, 3936))->p, "06str.c", 1557, 3937))), come_pop_stackframe(), __exception_result_var_b515);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1558, 3939)), "06str.c", 1558, 3940))->p++;
                                                                    break;
                                                                    case 118:
                                                                    (come_push_stackframe("06str.c", 1562, 3946),__exception_result_var_b516=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1562, 3941)), "06str.c", 1562, 3942)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1562, 3943)), "06str.c", 1562, 3944))->p, "06str.c", 1562, 3945))), come_pop_stackframe(), __exception_result_var_b516);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1563, 3947)), "06str.c", 1563, 3948))->p++;
                                                                    break;
                                                                    case 102:
                                                                    (come_push_stackframe("06str.c", 1567, 3954),__exception_result_var_b517=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1567, 3949)), "06str.c", 1567, 3950)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1567, 3951)), "06str.c", 1567, 3952))->p, "06str.c", 1567, 3953))), come_pop_stackframe(), __exception_result_var_b517);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1568, 3955)), "06str.c", 1568, 3956))->p++;
                                                                    break;
                                                                    case 97:
                                                                    (come_push_stackframe("06str.c", 1572, 3962),__exception_result_var_b518=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1572, 3957)), "06str.c", 1572, 3958)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1572, 3959)), "06str.c", 1572, 3960))->p, "06str.c", 1572, 3961))), come_pop_stackframe(), __exception_result_var_b518);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1573, 3963)), "06str.c", 1573, 3964))->p++;
                                                                    break;
                                                                    case 98:
                                                                    (come_push_stackframe("06str.c", 1577, 3970),__exception_result_var_b519=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1577, 3965)), "06str.c", 1577, 3966)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1577, 3967)), "06str.c", 1577, 3968))->p, "06str.c", 1577, 3969))), come_pop_stackframe(), __exception_result_var_b519);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1578, 3971)), "06str.c", 1578, 3972))->p++;
                                                                    break;
                                                                    case 92:
                                                                    (come_push_stackframe("06str.c", 1582, 3978),__exception_result_var_b520=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1582, 3973)), "06str.c", 1582, 3974)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1582, 3975)), "06str.c", 1582, 3976))->p, "06str.c", 1582, 3977))), come_pop_stackframe(), __exception_result_var_b520);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1583, 3979)), "06str.c", 1583, 3980))->p++;
                                                                    break;
                                                                    default:
                                                                    (come_push_stackframe("06str.c", 1587, 3986),__exception_result_var_b521=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1587, 3981)), "06str.c", 1587, 3982)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1587, 3983)), "06str.c", 1587, 3984))->p, "06str.c", 1587, 3985))), come_pop_stackframe(), __exception_result_var_b521);
                                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1588, 3987)), "06str.c", 1588, 3988))->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional313=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1593, 3989)), "06str.c", 1593, 3990))->p, "06str.c", 1593, 3991))==0,                                                    _if_conditional313) {
                                                        sline2_296=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1594, 3992)), "06str.c", 1594, 3993))->sline;
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1595, 3994)), "06str.c", 1595, 3995))->sline=sline_287;
                                                        (come_push_stackframe("06str.c", 1596,3996),err_msg(info,"close \" to make embbeded string value"),come_pop_stackframe());
                                                        (come_push_stackframe("06str.c", 1597,3997),exit(2),come_pop_stackframe());
                                                    }
                                                    else {
                                                        if(_if_conditional314=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1600, 3998)), "06str.c", 1600, 3999))->p, "06str.c", 1600, 4000))==10,                                                        _if_conditional314) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1600, 4001)), "06str.c", 1600, 4002))->sline++;
                                                        }
                                                        (come_push_stackframe("06str.c", 1602, 4008),__exception_result_var_b522=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1602, 4003)), "06str.c", 1602, 4004)),*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1602, 4005)), "06str.c", 1602, 4006))->p, "06str.c", 1602, 4007))), come_pop_stackframe(), __exception_result_var_b522);
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1603, 4009)), "06str.c", 1603, 4010))->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                (come_push_stackframe("06str.c", 1607,4011),skip_spaces_and_lf(info),come_pop_stackframe());
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1609, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count((come_push_stackframe("06str.c", 1609, 4016),__exception_result_var_b524=((struct sSStringNode*)(right_value402=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)come_null_check(((struct sSStringNode*)(right_value400=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1609, "sSStringNode"))), "06str.c", 1609, 4012))),(char*)come_increment_ref_count((come_push_stackframe("06str.c", 1609, 4015),__exception_result_var_b523=((char*)(right_value401=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(value_289, "06str.c", 1609, 4013)), "06str.c", 1609, 4014))))), come_pop_stackframe(), __exception_result_var_b523)),(struct list$1sNodeph*)come_increment_ref_count(exps_288),sline_287,info))), come_pop_stackframe(), __exception_result_var_b524));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result168__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value7));
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value400,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value402,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result168__;
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(_if_conditional323=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1611, 4054)), "06str.c", 1611, 4055))->p, "06str.c", 1611, 4056))==91,                                _if_conditional323) {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1612, 4057)), "06str.c", 1612, 4058))->p++;
                                    (come_push_stackframe("06str.c", 1613,4059),skip_spaces_and_lf(info),come_pop_stackframe());
                                    p_298=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1615, 4060)), "06str.c", 1615, 4061))->p;
                                    no_comma_299=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1617, 4062)), "06str.c", 1617, 4063))->no_comma;
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1618, 4064)), "06str.c", 1618, 4065))->no_comma=(_Bool)1;
                                    node_300=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1620, 4066),__exception_result_var_b528=((struct sNode*)(right_value408=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b528));
                                    if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1622, 4067)), "06str.c", 1622, 4068))->no_comma=no_comma_299;
                                    p2_301=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1624, 4069)), "06str.c", 1624, 4070))->p;
                                    first_element_source_302=(struct buffer*)come_increment_ref_count((come_push_stackframe("06str.c", 1626, 4072),__exception_result_var_b529=((struct buffer*)(right_value410=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value409=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1626, "buffer"))), "06str.c", 1626, 4071)))))), come_pop_stackframe(), __exception_result_var_b529));
                                    come_call_finalizer3(right_value409,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value410,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("06str.c", 1628, 4075),__exception_result_var_b530=buffer_append(((struct buffer*)come_null_check(((struct buffer*)come_null_check(first_element_source_302, "06str.c", 1628, 4073)), "06str.c", 1628, 4074)),p_298,p2_301-p_298), come_pop_stackframe(), __exception_result_var_b530);
                                    (come_push_stackframe("06str.c", 1629, 4078),__exception_result_var_b531=buffer_append_char(((struct buffer*)come_null_check(((struct buffer*)come_null_check(first_element_source_302, "06str.c", 1629, 4076)), "06str.c", 1629, 4077)),0), come_pop_stackframe(), __exception_result_var_b531);
                                    list_elements_303=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1631, 4080),__exception_result_var_b532=((struct list$1sNodeph*)(right_value412=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value411=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1631, "list$1sNodeph"))), "06str.c", 1631, 4079)))))), come_pop_stackframe(), __exception_result_var_b532));
                                    come_call_finalizer3(right_value411,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value412,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_keys_304=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1633, 4082),__exception_result_var_b533=((struct list$1sNodeph*)(right_value414=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value413=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1633, "list$1sNodeph"))), "06str.c", 1633, 4081)))))), come_pop_stackframe(), __exception_result_var_b533));
                                    come_call_finalizer3(right_value413,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value414,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_elements_305=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1634, 4084),__exception_result_var_b534=((struct list$1sNodeph*)(right_value416=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value415=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1634, "list$1sNodeph"))), "06str.c", 1634, 4083)))))), come_pop_stackframe(), __exception_result_var_b534));
                                    come_call_finalizer3(right_value415,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value416,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional324=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1637, 4085)), "06str.c", 1637, 4086))->p, "06str.c", 1637, 4087))==58,                                    _if_conditional324) {
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1638, 4088)), "06str.c", 1638, 4089))->p++;
                                        (come_push_stackframe("06str.c", 1639,4090),skip_spaces_and_lf(info),come_pop_stackframe());
                                        (come_push_stackframe("06str.c", 1641, 4093),__exception_result_var_b535=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(map_keys_304, "06str.c", 1641, 4091)), "06str.c", 1641, 4092)),(struct sNode*)come_increment_ref_count(node_300)), come_pop_stackframe(), __exception_result_var_b535);
                                        no_comma_306=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1643, 4094)), "06str.c", 1643, 4095))->no_comma;
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1644, 4096)), "06str.c", 1644, 4097))->no_comma=(_Bool)1;
                                        node2_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1646, 4098),__exception_result_var_b536=((struct sNode*)(right_value417=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b536));
                                        if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1648, 4099)), "06str.c", 1648, 4100))->no_comma=no_comma_306;
                                        (come_push_stackframe("06str.c", 1650, 4103),__exception_result_var_b537=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(map_elements_305, "06str.c", 1650, 4101)), "06str.c", 1650, 4102)),(struct sNode*)come_increment_ref_count(node2_307)), come_pop_stackframe(), __exception_result_var_b537);
                                        if(_if_conditional325=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1652, 4104)), "06str.c", 1652, 4105))->p, "06str.c", 1652, 4106))==93,                                        _if_conditional325) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1653, 4107)), "06str.c", 1653, 4108))->p++;
                                            (come_push_stackframe("06str.c", 1654,4109),skip_spaces_and_lf(info),come_pop_stackframe());
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1656, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count((come_push_stackframe("06str.c", 1656, 4111),__exception_result_var_b538=((struct sMapNode*)(right_value419=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)come_null_check(((struct sMapNode*)(right_value418=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1656, "sMapNode"))), "06str.c", 1656, 4110))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))), come_pop_stackframe(), __exception_result_var_b538));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result171__ = __result_obj__ = ((struct sNode*)(right_value424=_inf_value8));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value418,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value419,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result171__;
                                        }
                                        else {
                                            (come_push_stackframe("06str.c", 1659, 4149),__exception_result_var_b542=expected_next_character(44,info), come_pop_stackframe(), __exception_result_var_b542);
                                            while(_while_condtional40=(_Bool)1,                                            _while_condtional40) {
                                                no_comma_309=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1662, 4150)), "06str.c", 1662, 4151))->no_comma;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1663, 4152)), "06str.c", 1663, 4153))->no_comma=(_Bool)1;
                                                node2_310=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1665, 4154),__exception_result_var_b543=((struct sNode*)(right_value425=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b543));
                                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1667, 4155)), "06str.c", 1667, 4156))->no_comma=no_comma_309;
                                                (come_push_stackframe("06str.c", 1669, 4159),__exception_result_var_b544=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(map_keys_304, "06str.c", 1669, 4157)), "06str.c", 1669, 4158)),(struct sNode*)come_increment_ref_count(node2_310)), come_pop_stackframe(), __exception_result_var_b544);
                                                (come_push_stackframe("06str.c", 1671, 4160),__exception_result_var_b545=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b545);
                                                no_comma_309=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1673, 4161)), "06str.c", 1673, 4162))->no_comma;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1674, 4163)), "06str.c", 1674, 4164))->no_comma=(_Bool)1;
                                                node3_311=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1676, 4165),__exception_result_var_b546=((struct sNode*)(right_value426=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b546));
                                                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1678, 4166)), "06str.c", 1678, 4167))->no_comma=no_comma_309;
                                                (come_push_stackframe("06str.c", 1680, 4170),__exception_result_var_b547=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(map_elements_305, "06str.c", 1680, 4168)), "06str.c", 1680, 4169)),(struct sNode*)come_increment_ref_count(node3_311)), come_pop_stackframe(), __exception_result_var_b547);
                                                if(_if_conditional334=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1682, 4171)), "06str.c", 1682, 4172))->p, "06str.c", 1682, 4173))==0,                                                _if_conditional334) {
                                                    (come_push_stackframe("06str.c", 1683,4174),err_msg(info,"invalid source end"),come_pop_stackframe());
                                                    (come_push_stackframe("06str.c", 1684,4175),exit(2),come_pop_stackframe());
                                                }
                                                else {
                                                    if(_if_conditional335=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1686, 4176)), "06str.c", 1686, 4177))->p, "06str.c", 1686, 4178))==44,                                                    _if_conditional335) {
                                                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1687, 4179)), "06str.c", 1687, 4180))->p++;
                                                        (come_push_stackframe("06str.c", 1688,4181),skip_spaces_and_lf(info),come_pop_stackframe());
                                                    }
                                                    else {
                                                        if(_if_conditional336=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1690, 4182)), "06str.c", 1690, 4183))->p, "06str.c", 1690, 4184))==93,                                                        _if_conditional336) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1691, 4185)), "06str.c", 1691, 4186))->p++;
                                                            (come_push_stackframe("06str.c", 1692,4187),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            (come_push_stackframe("06str.c", 1696,4191),err_msg(info,"invalid character(%c)(3)",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1696, 4188)), "06str.c", 1696, 4189))->p, "06str.c", 1696, 4190))),come_pop_stackframe());
                                                            (come_push_stackframe("06str.c", 1697,4192),exit(2),come_pop_stackframe());
                                                        }
                                                    }
                                                }
                                                if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1701, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count((come_push_stackframe("06str.c", 1701, 4194),__exception_result_var_b548=((struct sMapNode*)(right_value428=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)come_null_check(((struct sMapNode*)(right_value427=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1701, "sMapNode"))), "06str.c", 1701, 4193))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))), come_pop_stackframe(), __exception_result_var_b548));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result174__ = __result_obj__ = ((struct sNode*)(right_value433=_inf_value9));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value427,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value428,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result174__;
                                        }
                                        if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional345=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1705, 4232)), "06str.c", 1705, 4233))->p, "06str.c", 1705, 4234))==93,                                        _if_conditional345) {
                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1706, 4235)), "06str.c", 1706, 4236))->p++;
                                            (come_push_stackframe("06str.c", 1707,4237),skip_spaces_and_lf(info),come_pop_stackframe());
                                            (come_push_stackframe("06str.c", 1709, 4240),__exception_result_var_b552=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(list_elements_303, "06str.c", 1709, 4238)), "06str.c", 1709, 4239)),(struct sNode*)come_increment_ref_count(node_300)), come_pop_stackframe(), __exception_result_var_b552);
                                        }
                                        else {
                                            if(_if_conditional346=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1711, 4241)), "06str.c", 1711, 4242))->p, "06str.c", 1711, 4243))==44,                                            _if_conditional346) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1712, 4244)), "06str.c", 1712, 4245))->p++;
                                                (come_push_stackframe("06str.c", 1713,4246),skip_spaces_and_lf(info),come_pop_stackframe());
                                                (come_push_stackframe("06str.c", 1715, 4249),__exception_result_var_b553=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(list_elements_303, "06str.c", 1715, 4247)), "06str.c", 1715, 4248)),(struct sNode*)come_increment_ref_count(node_300)), come_pop_stackframe(), __exception_result_var_b553);
                                                while(_while_condtional41=(_Bool)1,                                                _while_condtional41) {
                                                    no_comma_313=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1718, 4250)), "06str.c", 1718, 4251))->no_comma;
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1719, 4252)), "06str.c", 1719, 4253))->no_comma=(_Bool)1;
                                                    node2_314=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1721, 4254),__exception_result_var_b554=((struct sNode*)(right_value434=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b554));
                                                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1723, 4255)), "06str.c", 1723, 4256))->no_comma=no_comma_313;
                                                    (come_push_stackframe("06str.c", 1725, 4259),__exception_result_var_b555=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(list_elements_303, "06str.c", 1725, 4257)), "06str.c", 1725, 4258)),(struct sNode*)come_increment_ref_count(node2_314)), come_pop_stackframe(), __exception_result_var_b555);
                                                    if(_if_conditional347=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1727, 4260)), "06str.c", 1727, 4261))->p, "06str.c", 1727, 4262))==0,                                                    _if_conditional347) {
                                                        (come_push_stackframe("06str.c", 1728,4263),err_msg(info,"invalid source end"),come_pop_stackframe());
                                                        (come_push_stackframe("06str.c", 1729,4264),exit(2),come_pop_stackframe());
                                                    }
                                                    else {
                                                        if(_if_conditional348=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1731, 4265)), "06str.c", 1731, 4266))->p, "06str.c", 1731, 4267))==44,                                                        _if_conditional348) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1732, 4268)), "06str.c", 1732, 4269))->p++;
                                                            (come_push_stackframe("06str.c", 1733,4270),skip_spaces_and_lf(info),come_pop_stackframe());
                                                        }
                                                        else {
                                                            if(_if_conditional349=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1735, 4271)), "06str.c", 1735, 4272))->p, "06str.c", 1735, 4273))==93,                                                            _if_conditional349) {
                                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1736, 4274)), "06str.c", 1736, 4275))->p++;
                                                                (come_push_stackframe("06str.c", 1737,4276),skip_spaces_and_lf(info),come_pop_stackframe());
                                                                if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                (come_push_stackframe("06str.c", 1741,4280),err_msg(info,"invalid character(%c)(4)",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1741, 4277)), "06str.c", 1741, 4278))->p, "06str.c", 1741, 4279))),come_pop_stackframe());
                                                                (come_push_stackframe("06str.c", 1742,4281),exit(2),come_pop_stackframe());
                                                            }
                                                        }
                                                    }
                                                    if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                (come_push_stackframe("06str.c", 1747,4285),err_msg(info,"invalid character(%c)(5)",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1747, 4282)), "06str.c", 1747, 4283))->p, "06str.c", 1747, 4284))),come_pop_stackframe());
                                                (come_push_stackframe("06str.c", 1748,4286),exit(2),come_pop_stackframe());
                                            }
                                        }
                                    }
                                    if(_if_conditional350=(come_push_stackframe("06str.c", 1751, 4289),__exception_result_var_b556=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(list_elements_303, "06str.c", 1751, 4287)), "06str.c", 1751, 4288))), come_pop_stackframe(), __exception_result_var_b556)>0,                                    _if_conditional350) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1752, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count((come_push_stackframe("06str.c", 1752, 4291),__exception_result_var_b557=((struct sListNode*)(right_value436=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)come_null_check(((struct sListNode*)(right_value435=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1752, "sListNode"))), "06str.c", 1752, 4290))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_303),info))), come_pop_stackframe(), __exception_result_var_b557));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result177__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value10));
                                        if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value435,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value436,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result177__;
                                    }
                                    else {
                                    }
                                    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    (come_push_stackframe("06str.c", 1758, 4318),__exception_result_var_b560=((struct sNode*)(right_value441=expression_node_v1(info))), come_pop_stackframe(), __exception_result_var_b560);
                                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result178__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result178__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional244;
_Bool _if_conditional245;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional244=self!=((void*)0)&&((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0, 3157)), "sStrNode_finalize", 0, 3158))->sname!=((void*)0),                _if_conditional244) {
                    ((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0, 3159)), "sStrNode_finalize", 0, 3160))->sname = come_decrement_ref_count2(((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 0, 3159)), "sStrNode_finalize", 0, 3160))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional245=self!=((void*)0)&&((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1, 3161)), "sStrNode_finalize", 1, 3162))->value!=((void*)0),                _if_conditional245) {
                    ((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1, 3163)), "sStrNode_finalize", 1, 3164))->value = come_decrement_ref_count2(((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_finalize", 1, 3163)), "sStrNode_finalize", 1, 3164))->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool _if_conditional246;
struct sStrNode* __result151__;
void* right_value362;
struct sStrNode* result_248;
_Bool _if_conditional247;
_Bool _if_conditional248;
char* __exception_result_var_b444;
void* right_value363;
char* __dec_obj111;
_Bool _if_conditional249;
char* __exception_result_var_b445;
void* right_value364;
char* __dec_obj112;
struct sStrNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
memset(&result_248, 0, sizeof(struct sStrNode*));
right_value363 = (void*)0;
right_value364 = (void*)0;
                if(_if_conditional246=self==(void*)0,                _if_conditional246) {
                    __result151__ = __result_obj__ = (void*)0;
                    return __result151__;
                }
                result_248=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value362=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer3(right_value362,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional247=self!=((void*)0),                _if_conditional247) {
                    ((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(result_248, "sStrNode_clone", 4, 3165)), "sStrNode_clone", 4, 3166))->sline=((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 4, 3167)), "sStrNode_clone", 4, 3168))->sline;
                }
                if(_if_conditional248=self!=((void*)0)&&((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5, 3169)), "sStrNode_clone", 5, 3170))->sname!=((void*)0),                _if_conditional248) {
                    __dec_obj111=((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(result_248, "sStrNode_clone", 5, 3171)), "sStrNode_clone", 5, 3172))->sname;
                    ((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(result_248, "sStrNode_clone", 5, 3171)), "sStrNode_clone", 5, 3172))->sname=(char*)come_increment_ref_count(((char*)(right_value363=(come_push_stackframe("sStrNode_clone", 5, 3175),__exception_result_var_b444=string_clone(((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 5, 3173)), "sStrNode_clone", 5, 3174))->sname), come_pop_stackframe(), __exception_result_var_b444))));
                    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional249=self!=((void*)0)&&((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6, 3176)), "sStrNode_clone", 6, 3177))->value!=((void*)0),                _if_conditional249) {
                    __dec_obj112=((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(result_248, "sStrNode_clone", 6, 3178)), "sStrNode_clone", 6, 3179))->value;
                    ((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(result_248, "sStrNode_clone", 6, 3178)), "sStrNode_clone", 6, 3179))->value=(char*)come_increment_ref_count(((char*)(right_value364=(come_push_stackframe("sStrNode_clone", 6, 3182),__exception_result_var_b445=string_clone(((struct sStrNode*)come_null_check(((struct sStrNode*)come_null_check(self, "sStrNode_clone", 6, 3180)), "sStrNode_clone", 6, 3181))->value), come_pop_stackframe(), __exception_result_var_b445))));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result152__ = __result_obj__ = result_248;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional256;
_Bool _if_conditional257;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional256=self!=((void*)0)&&((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0, 3248)), "sRegexNode_finalize", 0, 3249))->sname!=((void*)0),                    _if_conditional256) {
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0, 3250)), "sRegexNode_finalize", 0, 3251))->sname = come_decrement_ref_count2(((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 0, 3250)), "sRegexNode_finalize", 0, 3251))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional257=self!=((void*)0)&&((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1, 3252)), "sRegexNode_finalize", 1, 3253))->str!=((void*)0),                    _if_conditional257) {
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1, 3254)), "sRegexNode_finalize", 1, 3255))->str = come_decrement_ref_count2(((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_finalize", 1, 3254)), "sRegexNode_finalize", 1, 3255))->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool _if_conditional258;
struct sRegexNode* __result154__;
void* right_value371;
struct sRegexNode* result_253;
_Bool _if_conditional259;
_Bool _if_conditional260;
char* __exception_result_var_b451;
void* right_value372;
char* __dec_obj113;
_Bool _if_conditional261;
char* __exception_result_var_b452;
void* right_value373;
char* __dec_obj114;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sRegexNode* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_253, 0, sizeof(struct sRegexNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
                    if(_if_conditional258=self==(void*)0,                    _if_conditional258) {
                        __result154__ = __result_obj__ = (void*)0;
                        return __result154__;
                    }
                    result_253=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value371=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer3(right_value371,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional259=self!=((void*)0),                    _if_conditional259) {
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 4, 3256)), "sRegexNode_clone", 4, 3257))->sline=((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 4, 3258)), "sRegexNode_clone", 4, 3259))->sline;
                    }
                    if(_if_conditional260=self!=((void*)0)&&((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5, 3260)), "sRegexNode_clone", 5, 3261))->sname!=((void*)0),                    _if_conditional260) {
                        __dec_obj113=((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 5, 3262)), "sRegexNode_clone", 5, 3263))->sname;
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 5, 3262)), "sRegexNode_clone", 5, 3263))->sname=(char*)come_increment_ref_count(((char*)(right_value372=(come_push_stackframe("sRegexNode_clone", 5, 3266),__exception_result_var_b451=string_clone(((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 5, 3264)), "sRegexNode_clone", 5, 3265))->sname), come_pop_stackframe(), __exception_result_var_b451))));
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional261=self!=((void*)0)&&((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6, 3267)), "sRegexNode_clone", 6, 3268))->str!=((void*)0),                    _if_conditional261) {
                        __dec_obj114=((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 6, 3269)), "sRegexNode_clone", 6, 3270))->str;
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 6, 3269)), "sRegexNode_clone", 6, 3270))->str=(char*)come_increment_ref_count(((char*)(right_value373=(come_push_stackframe("sRegexNode_clone", 6, 3273),__exception_result_var_b452=string_clone(((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 6, 3271)), "sRegexNode_clone", 6, 3272))->str), come_pop_stackframe(), __exception_result_var_b452))));
                        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value373 = come_decrement_ref_count2(right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional262=self!=((void*)0),                    _if_conditional262) {
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 7, 3274)), "sRegexNode_clone", 7, 3275))->global=((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 7, 3276)), "sRegexNode_clone", 7, 3277))->global;
                    }
                    if(_if_conditional263=self!=((void*)0),                    _if_conditional263) {
                        ((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(result_253, "sRegexNode_clone", 8, 3278)), "sRegexNode_clone", 8, 3279))->ignore_case=((struct sRegexNode*)come_null_check(((struct sRegexNode*)come_null_check(self, "sRegexNode_clone", 8, 3280)), "sRegexNode_clone", 8, 3281))->ignore_case;
                    }
                    __result155__ = __result_obj__ = result_253;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result155__;
                    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional269;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional269=self!=((void*)0)&&((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0, 3389)), "sCharNode_finalize", 0, 3390))->sname!=((void*)0),                            _if_conditional269) {
                                ((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0, 3391)), "sCharNode_finalize", 0, 3392))->sname = come_decrement_ref_count2(((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_finalize", 0, 3391)), "sCharNode_finalize", 0, 3392))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool _if_conditional270;
struct sCharNode* __result157__;
void* right_value377;
struct sCharNode* result_260;
_Bool _if_conditional271;
_Bool _if_conditional272;
char* __exception_result_var_b461;
void* right_value378;
char* __dec_obj115;
_Bool _if_conditional273;
struct sCharNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
memset(&result_260, 0, sizeof(struct sCharNode*));
right_value378 = (void*)0;
                            if(_if_conditional270=self==(void*)0,                            _if_conditional270) {
                                __result157__ = __result_obj__ = (void*)0;
                                return __result157__;
                            }
                            result_260=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value377=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer3(right_value377,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional271=self!=((void*)0),                            _if_conditional271) {
                                ((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(result_260, "sCharNode_clone", 4, 3393)), "sCharNode_clone", 4, 3394))->sline=((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 4, 3395)), "sCharNode_clone", 4, 3396))->sline;
                            }
                            if(_if_conditional272=self!=((void*)0)&&((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5, 3397)), "sCharNode_clone", 5, 3398))->sname!=((void*)0),                            _if_conditional272) {
                                __dec_obj115=((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(result_260, "sCharNode_clone", 5, 3399)), "sCharNode_clone", 5, 3400))->sname;
                                ((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(result_260, "sCharNode_clone", 5, 3399)), "sCharNode_clone", 5, 3400))->sname=(char*)come_increment_ref_count(((char*)(right_value378=(come_push_stackframe("sCharNode_clone", 5, 3403),__exception_result_var_b461=string_clone(((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 5, 3401)), "sCharNode_clone", 5, 3402))->sname), come_pop_stackframe(), __exception_result_var_b461))));
                                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional273=self!=((void*)0),                            _if_conditional273) {
                                ((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(result_260, "sCharNode_clone", 6, 3404)), "sCharNode_clone", 6, 3405))->value=((struct sCharNode*)come_null_check(((struct sCharNode*)come_null_check(self, "sCharNode_clone", 6, 3406)), "sCharNode_clone", 6, 3407))->value;
                            }
                            __result158__ = __result_obj__ = result_260;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result158__;
                            come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional282=self!=((void*)0)&&((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0, 3531)), "sWCharNode_finalize", 0, 3532))->sname!=((void*)0),                                _if_conditional282) {
                                    ((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0, 3533)), "sWCharNode_finalize", 0, 3534))->sname = come_decrement_ref_count2(((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_finalize", 0, 3533)), "sWCharNode_finalize", 0, 3534))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool _if_conditional283;
struct sWCharNode* __result160__;
void* right_value382;
struct sWCharNode* result_271;
_Bool _if_conditional284;
_Bool _if_conditional285;
char* __exception_result_var_b472;
void* right_value383;
char* __dec_obj116;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct sWCharNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&result_271, 0, sizeof(struct sWCharNode*));
right_value383 = (void*)0;
                                if(_if_conditional283=self==(void*)0,                                _if_conditional283) {
                                    __result160__ = __result_obj__ = (void*)0;
                                    return __result160__;
                                }
                                result_271=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value382=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer3(right_value382,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional284=self!=((void*)0),                                _if_conditional284) {
                                    ((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(result_271, "sWCharNode_clone", 4, 3535)), "sWCharNode_clone", 4, 3536))->sline=((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 4, 3537)), "sWCharNode_clone", 4, 3538))->sline;
                                }
                                if(_if_conditional285=self!=((void*)0)&&((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5, 3539)), "sWCharNode_clone", 5, 3540))->sname!=((void*)0),                                _if_conditional285) {
                                    __dec_obj116=((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(result_271, "sWCharNode_clone", 5, 3541)), "sWCharNode_clone", 5, 3542))->sname;
                                    ((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(result_271, "sWCharNode_clone", 5, 3541)), "sWCharNode_clone", 5, 3542))->sname=(char*)come_increment_ref_count(((char*)(right_value383=(come_push_stackframe("sWCharNode_clone", 5, 3545),__exception_result_var_b472=string_clone(((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 5, 3543)), "sWCharNode_clone", 5, 3544))->sname), come_pop_stackframe(), __exception_result_var_b472))));
                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional286=self!=((void*)0),                                _if_conditional286) {
                                    ((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(result_271, "sWCharNode_clone", 6, 3546)), "sWCharNode_clone", 6, 3547))->value=((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 6, 3548)), "sWCharNode_clone", 6, 3549))->value;
                                }
                                if(_if_conditional287=self!=((void*)0),                                _if_conditional287) {
                                    ((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(result_271, "sWCharNode_clone", 7, 3550)), "sWCharNode_clone", 7, 3551))->quote=((struct sWCharNode*)come_null_check(((struct sWCharNode*)come_null_check(self, "sWCharNode_clone", 7, 3552)), "sWCharNode_clone", 7, 3553))->quote;
                                }
                                __result161__ = __result_obj__ = result_271;
                                come_call_finalizer3(result_271,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result161__;
                                come_call_finalizer3(result_271,sWCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional297=self!=((void*)0)&&((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0, 3734)), "sWStringNode_finalize", 0, 3735))->sname!=((void*)0),                                _if_conditional297) {
                                    ((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0, 3736)), "sWStringNode_finalize", 0, 3737))->sname = come_decrement_ref_count2(((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 0, 3736)), "sWStringNode_finalize", 0, 3737))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional298=self!=((void*)0)&&((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1, 3738)), "sWStringNode_finalize", 1, 3739))->value!=((void*)0),                                _if_conditional298) {
                                    ((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1, 3740)), "sWStringNode_finalize", 1, 3741))->value = come_decrement_ref_count2(((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_finalize", 1, 3740)), "sWStringNode_finalize", 1, 3741))->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool _if_conditional299;
struct sWStringNode* __result163__;
void* right_value390;
struct sWStringNode* result_286;
_Bool _if_conditional300;
_Bool _if_conditional301;
char* __exception_result_var_b494;
void* right_value391;
char* __dec_obj117;
_Bool _if_conditional302;
unsigned int* __exception_result_var_b495;
void* right_value392;
unsigned int* __dec_obj118;
struct sWStringNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_286, 0, sizeof(struct sWStringNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
                                if(_if_conditional299=self==(void*)0,                                _if_conditional299) {
                                    __result163__ = __result_obj__ = (void*)0;
                                    return __result163__;
                                }
                                result_286=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value390=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer3(right_value390,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional300=self!=((void*)0),                                _if_conditional300) {
                                    ((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(result_286, "sWStringNode_clone", 4, 3742)), "sWStringNode_clone", 4, 3743))->sline=((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 4, 3744)), "sWStringNode_clone", 4, 3745))->sline;
                                }
                                if(_if_conditional301=self!=((void*)0)&&((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5, 3746)), "sWStringNode_clone", 5, 3747))->sname!=((void*)0),                                _if_conditional301) {
                                    __dec_obj117=((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(result_286, "sWStringNode_clone", 5, 3748)), "sWStringNode_clone", 5, 3749))->sname;
                                    ((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(result_286, "sWStringNode_clone", 5, 3748)), "sWStringNode_clone", 5, 3749))->sname=(char*)come_increment_ref_count(((char*)(right_value391=(come_push_stackframe("sWStringNode_clone", 5, 3752),__exception_result_var_b494=string_clone(((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 5, 3750)), "sWStringNode_clone", 5, 3751))->sname), come_pop_stackframe(), __exception_result_var_b494))));
                                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional302=self!=((void*)0)&&((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6, 3753)), "sWStringNode_clone", 6, 3754))->value!=((void*)0),                                _if_conditional302) {
                                    __dec_obj118=((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(result_286, "sWStringNode_clone", 6, 3755)), "sWStringNode_clone", 6, 3756))->value;
                                    ((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(result_286, "sWStringNode_clone", 6, 3755)), "sWStringNode_clone", 6, 3756))->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value392=(come_push_stackframe("sWStringNode_clone", 6, 3759),__exception_result_var_b495=(unsigned int*)come_memdup(((struct sWStringNode*)come_null_check(((struct sWStringNode*)come_null_check(self, "sWStringNode_clone", 6, 3757)), "sWStringNode_clone", 6, 3758))->value, "sWStringNode_clone", 6, "unsigned int*"), come_pop_stackframe(), __exception_result_var_b495))));
                                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result164__ = __result_obj__ = result_286;
                                come_call_finalizer3(result_286,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                                come_call_finalizer3(result_286,sWStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional315=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0, 4017)), "sSStringNode_finalize", 0, 4018))->sname!=((void*)0),                                    _if_conditional315) {
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0, 4019)), "sSStringNode_finalize", 0, 4020))->sname = come_decrement_ref_count2(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 0, 4019)), "sSStringNode_finalize", 0, 4020))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional316=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1, 4021)), "sSStringNode_finalize", 1, 4022))->value!=((void*)0),                                    _if_conditional316) {
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1, 4023)), "sSStringNode_finalize", 1, 4024))->value = come_decrement_ref_count2(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 1, 4023)), "sSStringNode_finalize", 1, 4024))->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional317=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2, 4025)), "sSStringNode_finalize", 2, 4026))->exps!=((void*)0),                                    _if_conditional317) {
                                        come_call_finalizer3(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_finalize", 2, 4027)), "sSStringNode_finalize", 2, 4028))->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool _if_conditional318;
struct sSStringNode* __result166__;
void* right_value403;
struct sSStringNode* result_297;
_Bool _if_conditional319;
_Bool _if_conditional320;
char* __exception_result_var_b525;
void* right_value404;
char* __dec_obj119;
_Bool _if_conditional321;
char* __exception_result_var_b526;
void* right_value405;
char* __dec_obj120;
_Bool _if_conditional322;
struct list$1sNodeph* __exception_result_var_b527;
void* right_value406;
struct list$1sNodeph* __dec_obj121;
struct sSStringNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_297, 0, sizeof(struct sSStringNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
                                    if(_if_conditional318=self==(void*)0,                                    _if_conditional318) {
                                        __result166__ = __result_obj__ = (void*)0;
                                        return __result166__;
                                    }
                                    result_297=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value403=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer3(right_value403,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional319=self!=((void*)0),                                    _if_conditional319) {
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 4, 4029)), "sSStringNode_clone", 4, 4030))->sline=((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 4, 4031)), "sSStringNode_clone", 4, 4032))->sline;
                                    }
                                    if(_if_conditional320=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5, 4033)), "sSStringNode_clone", 5, 4034))->sname!=((void*)0),                                    _if_conditional320) {
                                        __dec_obj119=((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 5, 4035)), "sSStringNode_clone", 5, 4036))->sname;
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 5, 4035)), "sSStringNode_clone", 5, 4036))->sname=(char*)come_increment_ref_count(((char*)(right_value404=(come_push_stackframe("sSStringNode_clone", 5, 4039),__exception_result_var_b525=string_clone(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 5, 4037)), "sSStringNode_clone", 5, 4038))->sname), come_pop_stackframe(), __exception_result_var_b525))));
                                        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional321=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6, 4040)), "sSStringNode_clone", 6, 4041))->value!=((void*)0),                                    _if_conditional321) {
                                        __dec_obj120=((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 6, 4042)), "sSStringNode_clone", 6, 4043))->value;
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 6, 4042)), "sSStringNode_clone", 6, 4043))->value=(char*)come_increment_ref_count(((char*)(right_value405=(come_push_stackframe("sSStringNode_clone", 6, 4046),__exception_result_var_b526=string_clone(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 6, 4044)), "sSStringNode_clone", 6, 4045))->value), come_pop_stackframe(), __exception_result_var_b526))));
                                        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional322=self!=((void*)0)&&((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7, 4047)), "sSStringNode_clone", 7, 4048))->exps!=((void*)0),                                    _if_conditional322) {
                                        __dec_obj121=((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 7, 4049)), "sSStringNode_clone", 7, 4050))->exps;
                                        ((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(result_297, "sSStringNode_clone", 7, 4049)), "sSStringNode_clone", 7, 4050))->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value406=(come_push_stackframe("sSStringNode_clone", 7, 4053),__exception_result_var_b527=list$1sNodephp_clone(((struct sSStringNode*)come_null_check(((struct sSStringNode*)come_null_check(self, "sSStringNode_clone", 7, 4051)), "sSStringNode_clone", 7, 4052))->exps), come_pop_stackframe(), __exception_result_var_b527))));
                                        come_call_finalizer3(__dec_obj121,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value406,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result167__ = __result_obj__ = result_297;
                                    come_call_finalizer3(result_297,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result167__;
                                    come_call_finalizer3(result_297,sSStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional337=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0, 4195)), "sMapNode_finalize", 0, 4196))->sname!=((void*)0),                                                _if_conditional337) {
                                                    ((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0, 4197)), "sMapNode_finalize", 0, 4198))->sname = come_decrement_ref_count2(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 0, 4197)), "sMapNode_finalize", 0, 4198))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional338=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1, 4199)), "sMapNode_finalize", 1, 4200))->map_key_elements!=((void*)0),                                                _if_conditional338) {
                                                    come_call_finalizer3(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 1, 4201)), "sMapNode_finalize", 1, 4202))->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional339=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2, 4203)), "sMapNode_finalize", 2, 4204))->map_elements!=((void*)0),                                                _if_conditional339) {
                                                    come_call_finalizer3(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_finalize", 2, 4205)), "sMapNode_finalize", 2, 4206))->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool _if_conditional340;
struct sMapNode* __result172__;
void* right_value429;
struct sMapNode* result_312;
_Bool _if_conditional341;
_Bool _if_conditional342;
char* __exception_result_var_b549;
void* right_value430;
char* __dec_obj125;
_Bool _if_conditional343;
struct list$1sNodeph* __exception_result_var_b550;
void* right_value431;
struct list$1sNodeph* __dec_obj126;
_Bool _if_conditional344;
struct list$1sNodeph* __exception_result_var_b551;
void* right_value432;
struct list$1sNodeph* __dec_obj127;
struct sMapNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value429 = (void*)0;
memset(&result_312, 0, sizeof(struct sMapNode*));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
                                                if(_if_conditional340=self==(void*)0,                                                _if_conditional340) {
                                                    __result172__ = __result_obj__ = (void*)0;
                                                    return __result172__;
                                                }
                                                result_312=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value429=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer3(right_value429,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional341=self!=((void*)0),                                                _if_conditional341) {
                                                    ((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 4, 4207)), "sMapNode_clone", 4, 4208))->sline=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 4, 4209)), "sMapNode_clone", 4, 4210))->sline;
                                                }
                                                if(_if_conditional342=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5, 4211)), "sMapNode_clone", 5, 4212))->sname!=((void*)0),                                                _if_conditional342) {
                                                    __dec_obj125=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 5, 4213)), "sMapNode_clone", 5, 4214))->sname;
                                                    ((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 5, 4213)), "sMapNode_clone", 5, 4214))->sname=(char*)come_increment_ref_count(((char*)(right_value430=(come_push_stackframe("sMapNode_clone", 5, 4217),__exception_result_var_b549=string_clone(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 5, 4215)), "sMapNode_clone", 5, 4216))->sname), come_pop_stackframe(), __exception_result_var_b549))));
                                                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional343=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6, 4218)), "sMapNode_clone", 6, 4219))->map_key_elements!=((void*)0),                                                _if_conditional343) {
                                                    __dec_obj126=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 6, 4220)), "sMapNode_clone", 6, 4221))->map_key_elements;
                                                    ((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 6, 4220)), "sMapNode_clone", 6, 4221))->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value431=(come_push_stackframe("sMapNode_clone", 6, 4224),__exception_result_var_b550=list$1sNodephp_clone(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 6, 4222)), "sMapNode_clone", 6, 4223))->map_key_elements), come_pop_stackframe(), __exception_result_var_b550))));
                                                    come_call_finalizer3(__dec_obj126,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value431,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(_if_conditional344=self!=((void*)0)&&((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7, 4225)), "sMapNode_clone", 7, 4226))->map_elements!=((void*)0),                                                _if_conditional344) {
                                                    __dec_obj127=((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 7, 4227)), "sMapNode_clone", 7, 4228))->map_elements;
                                                    ((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(result_312, "sMapNode_clone", 7, 4227)), "sMapNode_clone", 7, 4228))->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value432=(come_push_stackframe("sMapNode_clone", 7, 4231),__exception_result_var_b551=list$1sNodephp_clone(((struct sMapNode*)come_null_check(((struct sMapNode*)come_null_check(self, "sMapNode_clone", 7, 4229)), "sMapNode_clone", 7, 4230))->map_elements), come_pop_stackframe(), __exception_result_var_b551))));
                                                    come_call_finalizer3(__dec_obj127,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value432,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result173__ = __result_obj__ = result_312;
                                                come_call_finalizer3(result_312,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result173__;
                                                come_call_finalizer3(result_312,sMapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional351=self!=((void*)0)&&((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0, 4292)), "sListNode_finalize", 0, 4293))->sname!=((void*)0),                                            _if_conditional351) {
                                                ((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0, 4294)), "sListNode_finalize", 0, 4295))->sname = come_decrement_ref_count2(((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_finalize", 0, 4294)), "sListNode_finalize", 0, 4295))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional352=self!=((void*)0)&&((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1, 4296)), "sListNode_finalize", 1, 4297))->list_elements!=((void*)0),                                            _if_conditional352) {
                                                come_call_finalizer3(((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_finalize", 1, 4298)), "sListNode_finalize", 1, 4299))->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool _if_conditional353;
struct sListNode* __result175__;
void* right_value437;
struct sListNode* result_315;
_Bool _if_conditional354;
_Bool _if_conditional355;
char* __exception_result_var_b558;
void* right_value438;
char* __dec_obj128;
_Bool _if_conditional356;
struct list$1sNodeph* __exception_result_var_b559;
void* right_value439;
struct list$1sNodeph* __dec_obj129;
struct sListNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_315, 0, sizeof(struct sListNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
                                            if(_if_conditional353=self==(void*)0,                                            _if_conditional353) {
                                                __result175__ = __result_obj__ = (void*)0;
                                                return __result175__;
                                            }
                                            result_315=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value437=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer3(right_value437,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional354=self!=((void*)0),                                            _if_conditional354) {
                                                ((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(result_315, "sListNode_clone", 4, 4300)), "sListNode_clone", 4, 4301))->sline=((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_clone", 4, 4302)), "sListNode_clone", 4, 4303))->sline;
                                            }
                                            if(_if_conditional355=self!=((void*)0)&&((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_clone", 5, 4304)), "sListNode_clone", 5, 4305))->sname!=((void*)0),                                            _if_conditional355) {
                                                __dec_obj128=((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(result_315, "sListNode_clone", 5, 4306)), "sListNode_clone", 5, 4307))->sname;
                                                ((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(result_315, "sListNode_clone", 5, 4306)), "sListNode_clone", 5, 4307))->sname=(char*)come_increment_ref_count(((char*)(right_value438=(come_push_stackframe("sListNode_clone", 5, 4310),__exception_result_var_b558=string_clone(((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_clone", 5, 4308)), "sListNode_clone", 5, 4309))->sname), come_pop_stackframe(), __exception_result_var_b558))));
                                                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional356=self!=((void*)0)&&((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_clone", 6, 4311)), "sListNode_clone", 6, 4312))->list_elements!=((void*)0),                                            _if_conditional356) {
                                                __dec_obj129=((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(result_315, "sListNode_clone", 6, 4313)), "sListNode_clone", 6, 4314))->list_elements;
                                                ((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(result_315, "sListNode_clone", 6, 4313)), "sListNode_clone", 6, 4314))->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value439=(come_push_stackframe("sListNode_clone", 6, 4317),__exception_result_var_b559=list$1sNodephp_clone(((struct sListNode*)come_null_check(((struct sListNode*)come_null_check(self, "sListNode_clone", 6, 4315)), "sListNode_clone", 6, 4316))->list_elements), come_pop_stackframe(), __exception_result_var_b559))));
                                                come_call_finalizer3(__dec_obj129,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value439,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result176__ = __result_obj__ = result_315;
                                            come_call_finalizer3(result_315,sListNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result176__;
                                            come_call_finalizer3(result_315,sListNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value442;
void* right_value443;
struct list$1sNodeph* __exception_result_var_b561;
struct list$1sNodeph* tuple_elements_316;
_Bool _while_condtional42;
char* p_317;
_Bool no_comma_318;
void* right_value444;
struct sNode* __exception_result_var_b562;
struct sNode* node_319;
void* right_value445;
struct sNode* __exception_result_var_b563;
struct sNode* __dec_obj130;
struct list$1sNodeph* __exception_result_var_b564;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value446;
void* right_value447;
struct sTupleNode* __exception_result_var_b565;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value451;
struct sNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
right_value443 = (void*)0;
memset(&tuple_elements_316, 0, sizeof(struct list$1sNodeph*));
memset(&p_317, 0, sizeof(char*));
memset(&no_comma_318, 0, sizeof(_Bool));
right_value444 = (void*)0;
memset(&node_319, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value451 = (void*)0;
    tuple_elements_316=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("06str.c", 1766, 4320),__exception_result_var_b561=((struct list$1sNodeph*)(right_value443=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value442=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1766, "list$1sNodeph"))), "06str.c", 1766, 4319)))))), come_pop_stackframe(), __exception_result_var_b561));
    come_call_finalizer3(right_value442,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value443,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional42=(_Bool)1,    _while_condtional42) {
        p_317=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1768, 4321)), "06str.c", 1768, 4322))->p;
        no_comma_318=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1770, 4323)), "06str.c", 1770, 4324))->no_comma;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1771, 4325)), "06str.c", 1771, 4326))->no_comma=(_Bool)1;
        node_319=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1773, 4327),__exception_result_var_b562=((struct sNode*)(right_value444=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b562));
        if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj130=node_319;
        node_319=(struct sNode*)come_increment_ref_count((come_push_stackframe("06str.c", 1774, 4328),__exception_result_var_b563=((struct sNode*)(right_value445=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_319),info))), come_pop_stackframe(), __exception_result_var_b563));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1776, 4329)), "06str.c", 1776, 4330))->no_comma=no_comma_318;
        (come_push_stackframe("06str.c", 1778, 4333),__exception_result_var_b564=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(tuple_elements_316, "06str.c", 1778, 4331)), "06str.c", 1778, 4332)),(struct sNode*)come_increment_ref_count(node_319)), come_pop_stackframe(), __exception_result_var_b564);
        if(_if_conditional357=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1780, 4334)), "06str.c", 1780, 4335))->p, "06str.c", 1780, 4336))==44,        _if_conditional357) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1781, 4337)), "06str.c", 1781, 4338))->p++;
            (come_push_stackframe("06str.c", 1782,4339),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        else {
            if(_if_conditional358=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1784, 4340)), "06str.c", 1784, 4341))->p, "06str.c", 1784, 4342))==41,            _if_conditional358) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1785, 4343)), "06str.c", 1785, 4344))->p++;
                (come_push_stackframe("06str.c", 1786,4345),skip_spaces_and_lf(info),come_pop_stackframe());
                if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                (come_push_stackframe("06str.c", 1790,4349),err_msg(info,"invalid character(%c) in tuple expression",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "06str.c", 1790, 4346)), "06str.c", 1790, 4347))->p, "06str.c", 1790, 4348))),come_pop_stackframe());
                (come_push_stackframe("06str.c", 1791,4350),exit(2),come_pop_stackframe());
            }
        }
        if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1795, "struct sNode");
    _inf_obj_value11=come_increment_ref_count((come_push_stackframe("06str.c", 1795, 4352),__exception_result_var_b565=((struct sTupleNode*)(right_value447=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)come_null_check(((struct sTupleNode*)(right_value446=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1795, "sTupleNode"))), "06str.c", 1795, 4351))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_316),info))), come_pop_stackframe(), __exception_result_var_b565));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result181__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value11));
    come_call_finalizer3(tuple_elements_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value446,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value447,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result181__;
    come_call_finalizer3(tuple_elements_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional359=self!=((void*)0)&&((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0, 4353)), "sTupleNode_finalize", 0, 4354))->sname!=((void*)0),        _if_conditional359) {
            ((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0, 4355)), "sTupleNode_finalize", 0, 4356))->sname = come_decrement_ref_count2(((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 0, 4355)), "sTupleNode_finalize", 0, 4356))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional360=self!=((void*)0)&&((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1, 4357)), "sTupleNode_finalize", 1, 4358))->tuple_elements!=((void*)0),        _if_conditional360) {
            come_call_finalizer3(((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_finalize", 1, 4359)), "sTupleNode_finalize", 1, 4360))->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sTupleNode* __result179__;
void* right_value448;
struct sTupleNode* result_320;
_Bool _if_conditional362;
_Bool _if_conditional363;
char* __exception_result_var_b566;
void* right_value449;
char* __dec_obj131;
_Bool _if_conditional364;
struct list$1sNodeph* __exception_result_var_b567;
void* right_value450;
struct list$1sNodeph* __dec_obj132;
struct sTupleNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value448 = (void*)0;
memset(&result_320, 0, sizeof(struct sTupleNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
        if(_if_conditional361=self==(void*)0,        _if_conditional361) {
            __result179__ = __result_obj__ = (void*)0;
            return __result179__;
        }
        result_320=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value448=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer3(right_value448,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional362=self!=((void*)0),        _if_conditional362) {
            ((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(result_320, "sTupleNode_clone", 4, 4361)), "sTupleNode_clone", 4, 4362))->sline=((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 4, 4363)), "sTupleNode_clone", 4, 4364))->sline;
        }
        if(_if_conditional363=self!=((void*)0)&&((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5, 4365)), "sTupleNode_clone", 5, 4366))->sname!=((void*)0),        _if_conditional363) {
            __dec_obj131=((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(result_320, "sTupleNode_clone", 5, 4367)), "sTupleNode_clone", 5, 4368))->sname;
            ((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(result_320, "sTupleNode_clone", 5, 4367)), "sTupleNode_clone", 5, 4368))->sname=(char*)come_increment_ref_count(((char*)(right_value449=(come_push_stackframe("sTupleNode_clone", 5, 4371),__exception_result_var_b566=string_clone(((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 5, 4369)), "sTupleNode_clone", 5, 4370))->sname), come_pop_stackframe(), __exception_result_var_b566))));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional364=self!=((void*)0)&&((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6, 4372)), "sTupleNode_clone", 6, 4373))->tuple_elements!=((void*)0),        _if_conditional364) {
            __dec_obj132=((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(result_320, "sTupleNode_clone", 6, 4374)), "sTupleNode_clone", 6, 4375))->tuple_elements;
            ((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(result_320, "sTupleNode_clone", 6, 4374)), "sTupleNode_clone", 6, 4375))->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value450=(come_push_stackframe("sTupleNode_clone", 6, 4378),__exception_result_var_b567=list$1sNodephp_clone(((struct sTupleNode*)come_null_check(((struct sTupleNode*)come_null_check(self, "sTupleNode_clone", 6, 4376)), "sTupleNode_clone", 6, 4377))->tuple_elements), come_pop_stackframe(), __exception_result_var_b567))));
            come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value450,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result180__ = __result_obj__ = result_320;
        come_call_finalizer3(result_320,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result180__;
        come_call_finalizer3(result_320,sTupleNode_finalize, 0, 0, 0, 0, (void*)0);
}

