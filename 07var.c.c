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
struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};
struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};
struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};
struct sStoreNode
{
    int sline;
    char* sname;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sArrayInitializer
{
    int sline;
    char* sname;
    struct list$1sNodeph* initializer;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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

struct sNode* parse_global_variable(struct sInfo* info);

struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);

struct sNode* load_var(char* name, struct sInfo* info);

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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);

char* sStoreNode_kind(struct sStoreNode* self);

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);

char* sLoadNode_kind(struct sLoadNode* self);

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);

char* sFunLoadNode_kind(struct sFunLoadNode* self);

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);

static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1sNodeph* initializer, struct sInfo* info);

char* sArrayInitializer_kind(struct sArrayInitializer* self);

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);

struct sNode* parse_array_initializer(struct sInfo* info);

static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
void* right_value80;
char* __exception_result_var_b52;
char* __dec_obj12;
struct sType* __exception_result_var_b76;
void* right_value116;
struct sType* __dec_obj36;
struct sNode* __dec_obj37;
struct list$1charph* __exception_result_var_b77;
void* right_value117;
struct list$1charph* __dec_obj38;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b84;
void* right_value128;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj45;
struct sStoreNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value128 = (void*)0;
    (come_push_stackframe("07var.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 7, 573)), "07var.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sStoreNode*)come_null_check(self, "07var.c", 9, 580))->name;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 9, 580))->name=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 9, 581),__exception_result_var_b52=((char*)(right_value80=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b52));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sStoreNode*)come_null_check(self, "07var.c", 10, 582))->alloc=alloc;
    ((void*)0);
    __dec_obj36=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 12, 583)), "07var.c", 12, 584))->type;
    ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 12, 583)), "07var.c", 12, 584))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=(come_push_stackframe("07var.c", 12, 1174),__exception_result_var_b76=sType_clone(type), come_pop_stackframe(), __exception_result_var_b76))));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj37=((struct sStoreNode*)come_null_check(self, "07var.c", 13, 1175))->right_value;
    ((struct sStoreNode*)come_null_check(self, "07var.c", 13, 1175))->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    __dec_obj38=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 15, 1176)), "07var.c", 15, 1177))->multiple_assign;
    ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 15, 1176)), "07var.c", 15, 1177))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=(come_push_stackframe("07var.c", 15, 1178),__exception_result_var_b77=list$1charphp_clone(multiple_assign), come_pop_stackframe(), __exception_result_var_b77))));
    come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((void*)0);
    __dec_obj45=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 17, 1179)), "07var.c", 17, 1180))->multiple_declare;
    ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 17, 1179)), "07var.c", 17, 1180))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value128=(come_push_stackframe("07var.c", 17, 1333),__exception_result_var_b84=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare), come_pop_stackframe(), __exception_result_var_b84))));
    come_call_finalizer3(__dec_obj45,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value128,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result76__;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__;
void* right_value129;
char* __exception_result_var_b85;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result77__ = __result_obj__ = (come_push_stackframe("07var.c", 22, 1362),__exception_result_var_b85=((char*)(right_value129=__builtin_string("sStoreNode"))), come_pop_stackframe(), __exception_result_var_b85);
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional144;
struct sVar* __exception_result_var_b89;
struct sVar* var__87;
_Bool _if_conditional153;
_Bool __result82__;
_Bool _if_conditional154;
_Bool __result83__;
void* right_value130;
struct sType* __exception_result_var_b90;
struct sType* type_91;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_92;
struct tuple3$3sTypephcharphsNodeph* __exception_result_var_b93;
struct tuple3$3sTypephcharphsNodeph* it_95;
_Bool __exception_result_var_b94;
struct tuple3$3sTypephcharphsNodeph* __exception_result_var_b97;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_98;
char* var_name_99;
struct sNode* right_value_100;
struct sType* __exception_result_var_b98;
void* right_value131;
struct sVar* __exception_result_var_b99;
_Bool _if_conditional159;
_Bool __result91__;
struct sType* __exception_result_var_b100;
void* right_value132;
struct sType* left_type_101;
_Bool _if_conditional160;
_Bool __exception_result_var_b101;
_Bool _if_conditional161;
_Bool __result92__;
void* right_value133;
struct CVALUE* __exception_result_var_b102;
struct CVALUE* come_value_102;
void* right_value134;
char* __exception_result_var_b103;
void* right_value135;
char* __exception_result_var_b104;
_Bool _if_conditional164;
_Bool __exception_result_var_b105;
_Bool _if_conditional165;
_Bool __result93__;
void* right_value136;
struct CVALUE* __exception_result_var_b106;
struct CVALUE* right_value_103;
struct sType* right_type_104;
_Bool _if_conditional166;
int i_105;
struct list$1charph* o2_saved_106;
char* __exception_result_var_b109;
char* it_109;
_Bool __exception_result_var_b110;
char* __exception_result_var_b113;
int __exception_result_var_b114;
_Bool _if_conditional172;
struct sType* __exception_result_var_b116;
struct sType* right_type2_112;
struct sType* __exception_result_var_b117;
void* right_value137;
void* right_value138;
char* __exception_result_var_b118;
char* multiple_var_name_117;
void* right_value139;
char* __exception_result_var_b119;
char* __exception_result_var_b120;
void* right_value140;
char* __dec_obj46;
struct list$1charph* o2_saved_118;
char* __exception_result_var_b121;
char* it_119;
_Bool __exception_result_var_b122;
char* __exception_result_var_b123;
int __exception_result_var_b124;
_Bool _if_conditional175;
struct sType* __exception_result_var_b125;
struct sType* __exception_result_var_b126;
void* right_value141;
struct sType* right_type2_120;
struct sVar* __exception_result_var_b127;
struct sVar* var__121;
struct sType* __exception_result_var_b128;
void* right_value142;
struct sType* var_type_122;
struct sType* __exception_result_var_b129;
void* right_value143;
struct sType* left_type_123;
void* right_value144;
struct CVALUE* right_value2_124;
void* right_value145;
char* __exception_result_var_b130;
char* __dec_obj47;
struct sType* __exception_result_var_b131;
void* right_value146;
struct sType* __dec_obj48;
void* right_value147;
struct CVALUE* come_value_125;
void* right_value148;
void* right_value149;
_Bool __exception_result_var_b132;
_Bool _if_conditional176;
void* right_value150;
char* __exception_result_var_b133;
char* __dec_obj49;
int __exception_result_var_b134;
int right_value_id_126;
_Bool _if_conditional177;
void* right_value151;
char* __exception_result_var_b135;
char* __dec_obj50;
struct sType* __exception_result_var_b136;
void* right_value152;
struct sType* __dec_obj51;
void* right_value153;
char* __exception_result_var_b137;
_Bool _if_conditional178;
struct sVar* __exception_result_var_b138;
struct sVar* var__127;
_Bool _if_conditional179;
_Bool __result105__;
_Bool _if_conditional180;
_Bool __result106__;
void* right_value154;
struct sType* __exception_result_var_b139;
struct sType* type_128;
struct sType* __exception_result_var_b140;
void* right_value155;
struct sVar* __exception_result_var_b141;
_Bool _if_conditional181;
struct sVar* __exception_result_var_b142;
_Bool _if_conditional182;
_Bool __result107__;
struct sType* __exception_result_var_b143;
void* right_value156;
struct sType* left_type_129;
int __exception_result_var_b144;
_Bool _if_conditional184;
void* right_value157;
char* __exception_result_var_b145;
_Bool _if_conditional185;
void* right_value158;
char* __exception_result_var_b146;
struct list$1sNodeph* o2_saved_130;
struct sNode* __exception_result_var_b149;
struct sNode* it_133;
_Bool __exception_result_var_b150;
struct sNode* __exception_result_var_b153;
_Bool __exception_result_var_b154;
_Bool _if_conditional190;
void* right_value159;
struct CVALUE* __exception_result_var_b155;
struct CVALUE* come_value_136;
void* right_value160;
char* __exception_result_var_b156;
struct sType* __exception_result_var_b157;
void* right_value161;
struct sType* left_type2_137;
void* right_value162;
char* __exception_result_var_b158;
void* right_value163;
struct CVALUE* come_value_138;
void* right_value164;
char* __exception_result_var_b159;
char* __dec_obj52;
struct sType* __exception_result_var_b160;
void* right_value165;
struct sType* __dec_obj53;
struct list$1CVALUEph* __exception_result_var_b161;
_Bool _if_conditional194;
_Bool _if_conditional195;
struct sVar* __exception_result_var_b162;
struct sVar* var__142;
_Bool _if_conditional196;
_Bool __result118__;
_Bool _if_conditional197;
void* right_value169;
struct sType* __exception_result_var_b163;
struct sType* type_143;
struct sType* __exception_result_var_b164;
void* right_value170;
_Bool __exception_result_var_b165;
_Bool _if_conditional198;
_Bool __result119__;
void* right_value171;
_Bool __exception_result_var_b166;
_Bool array_initializer_144;
void* right_value172;
struct CVALUE* __exception_result_var_b167;
struct CVALUE* right_value_145;
struct sType* right_type_146;
_Bool _if_conditional199;
struct sType* __exception_result_var_b168;
void* right_value173;
struct sVar* __exception_result_var_b169;
struct sType* __exception_result_var_b170;
void* right_value174;
struct sType* var_type_147;
int __exception_result_var_b171;
_Bool _if_conditional200;
void* right_value175;
char* __exception_result_var_b172;
struct sType* __exception_result_var_b173;
void* right_value176;
struct sType* left_type_148;
_Bool _if_conditional201;
struct sVar* __exception_result_var_b174;
struct sVar* var__149;
void* right_value177;
char* __exception_result_var_b175;
void* right_value178;
struct CVALUE* come_value_150;
void* right_value179;
char* __exception_result_var_b176;
char* __dec_obj57;
struct list$1CVALUEph* __exception_result_var_b177;
_Bool _if_conditional202;
void* right_value180;
void* right_value181;
_Bool __exception_result_var_b178;
void* right_value182;
char* __exception_result_var_b179;
void* right_value183;
struct CVALUE* come_value_151;
void* right_value184;
char* __exception_result_var_b180;
char* __dec_obj58;
struct list$1CVALUEph* __exception_result_var_b181;
_Bool _if_conditional203;
void* right_value185;
void* right_value186;
_Bool __exception_result_var_b182;
int __exception_result_var_b183;
int right_value_id_152;
_Bool _if_conditional204;
void* right_value187;
char* __exception_result_var_b184;
void* right_value188;
struct CVALUE* come_value_153;
void* right_value189;
char* __exception_result_var_b185;
char* __dec_obj59;
struct sType* __exception_result_var_b186;
void* right_value190;
struct sType* __dec_obj60;
struct list$1CVALUEph* __exception_result_var_b187;
_Bool __exception_result_var_b188;
_Bool _if_conditional205;
void* right_value191;
void* right_value192;
_Bool __exception_result_var_b189;
void* right_value193;
char* __exception_result_var_b190;
void* right_value194;
struct CVALUE* come_value_154;
void* right_value195;
char* __exception_result_var_b191;
char* __dec_obj61;
struct sType* __exception_result_var_b192;
void* right_value196;
struct sType* __dec_obj62;
struct list$1CVALUEph* __exception_result_var_b193;
void* right_value197;
void* right_value198;
_Bool __exception_result_var_b194;
_Bool _if_conditional206;
_Bool __result120__;
void* right_value199;
char* __exception_result_var_b195;
void* right_value200;
struct CVALUE* come_value_155;
void* right_value201;
char* __exception_result_var_b196;
char* __dec_obj63;
struct sType* __exception_result_var_b197;
void* right_value202;
struct sType* __dec_obj64;
struct list$1CVALUEph* __exception_result_var_b198;
_Bool __exception_result_var_b199;
_Bool _if_conditional207;
_Bool __result121__;
void* right_value203;
struct CVALUE* __exception_result_var_b200;
struct CVALUE* right_value_156;
struct sType* right_type_157;
struct sClass* current_stack_frame_struct_158;
struct sVar* __exception_result_var_b201;
_Bool _if_conditional208;
struct sVar* __exception_result_var_b202;
struct sVar* parent_var_159;
_Bool _if_conditional209;
_Bool __exception_result_var_b203;
_Bool _if_conditional210;
struct sType* left_type_160;
_Bool _if_conditional211;
void* right_value204;
void* right_value205;
_Bool __exception_result_var_b204;
void* right_value206;
char* __exception_result_var_b205;
char* c_value_161;
int __exception_result_var_b206;
int right_value_id_162;
_Bool _if_conditional212;
void* right_value207;
struct CVALUE* come_value_163;
void* right_value208;
char* __exception_result_var_b207;
char* __dec_obj65;
struct sType* __exception_result_var_b208;
void* right_value209;
struct sType* __dec_obj66;
struct list$1CVALUEph* __exception_result_var_b209;
_Bool __result122__;
_Bool __exception_result_var_b210;
_Bool _if_conditional213;
void* right_value210;
void* right_value211;
_Bool __exception_result_var_b211;
void* right_value212;
char* __exception_result_var_b212;
char* c_value_164;
void* right_value213;
struct CVALUE* come_value_165;
void* right_value214;
char* __exception_result_var_b213;
char* __dec_obj67;
struct sType* __exception_result_var_b214;
void* right_value215;
struct sType* __dec_obj68;
struct list$1CVALUEph* __exception_result_var_b215;
_Bool __result123__;
void* right_value216;
void* right_value217;
_Bool __exception_result_var_b216;
_Bool _if_conditional214;
_Bool __result124__;
void* right_value218;
struct CVALUE* come_value_166;
void* right_value219;
char* __exception_result_var_b217;
char* __dec_obj69;
struct sType* __exception_result_var_b218;
void* right_value220;
struct sType* __dec_obj70;
struct list$1CVALUEph* __exception_result_var_b219;
_Bool __result125__;
struct sVar* __exception_result_var_b220;
struct sVar* var__167;
_Bool _if_conditional215;
struct sVar* __exception_result_var_b221;
_Bool _if_conditional216;
_Bool __result126__;
_Bool _if_conditional217;
struct sType* __exception_result_var_b222;
void* right_value221;
struct sType* __dec_obj71;
struct sType* __exception_result_var_b223;
void* right_value222;
struct sType* left_type_168;
_Bool _if_conditional218;
void* right_value223;
void* right_value224;
_Bool __exception_result_var_b224;
void* right_value225;
struct CVALUE* come_value_169;
void* right_value226;
char* __exception_result_var_b225;
char* __dec_obj72;
struct list$1CVALUEph* __exception_result_var_b226;
_Bool _if_conditional219;
void* right_value227;
void* right_value228;
_Bool __exception_result_var_b227;
int __exception_result_var_b228;
int right_value_id_170;
_Bool _if_conditional220;
void* right_value229;
struct CVALUE* come_value_171;
void* right_value230;
char* __exception_result_var_b229;
char* __dec_obj73;
struct sType* __exception_result_var_b230;
void* right_value231;
struct sType* __dec_obj74;
struct list$1CVALUEph* __exception_result_var_b231;
_Bool __exception_result_var_b232;
_Bool _if_conditional221;
void* right_value232;
void* right_value233;
_Bool __exception_result_var_b233;
void* right_value234;
struct CVALUE* come_value_172;
void* right_value235;
char* __exception_result_var_b234;
char* __dec_obj75;
struct sType* __exception_result_var_b235;
void* right_value236;
struct sType* __dec_obj76;
struct list$1CVALUEph* __exception_result_var_b236;
void* right_value237;
void* right_value238;
_Bool __exception_result_var_b237;
_Bool _if_conditional222;
_Bool __result127__;
void* right_value239;
struct CVALUE* come_value_173;
void* right_value240;
char* __exception_result_var_b238;
char* __dec_obj77;
struct sType* __exception_result_var_b239;
void* right_value241;
struct sType* __dec_obj78;
struct list$1CVALUEph* __exception_result_var_b240;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&var__87, 0, sizeof(struct sVar*));
right_value130 = (void*)0;
memset(&type_91, 0, sizeof(struct sType*));
memset(&o2_saved_92, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_95, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&left_type_101, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&right_type_104, 0, sizeof(struct sType*));
memset(&i_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1charph*));
memset(&it_109, 0, sizeof(char*));
memset(&right_type2_112, 0, sizeof(struct sType*));
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&multiple_var_name_117, 0, sizeof(char*));
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&o2_saved_118, 0, sizeof(struct list$1charph*));
memset(&it_119, 0, sizeof(char*));
right_value141 = (void*)0;
memset(&right_type2_120, 0, sizeof(struct sType*));
memset(&var__121, 0, sizeof(struct sVar*));
right_value142 = (void*)0;
memset(&var_type_122, 0, sizeof(struct sType*));
right_value143 = (void*)0;
memset(&left_type_123, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&right_value2_124, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
memset(&right_value_id_126, 0, sizeof(int));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&var__127, 0, sizeof(struct sVar*));
right_value154 = (void*)0;
memset(&type_128, 0, sizeof(struct sType*));
right_value155 = (void*)0;
right_value156 = (void*)0;
memset(&left_type_129, 0, sizeof(struct sType*));
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&o2_saved_130, 0, sizeof(struct list$1sNodeph*));
memset(&it_133, 0, sizeof(struct sNode*));
right_value159 = (void*)0;
memset(&come_value_136, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&left_type2_137, 0, sizeof(struct sType*));
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&var__142, 0, sizeof(struct sVar*));
right_value169 = (void*)0;
memset(&type_143, 0, sizeof(struct sType*));
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&array_initializer_144, 0, sizeof(_Bool));
right_value172 = (void*)0;
memset(&right_value_145, 0, sizeof(struct CVALUE*));
memset(&right_type_146, 0, sizeof(struct sType*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&var_type_147, 0, sizeof(struct sType*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&left_type_148, 0, sizeof(struct sType*));
memset(&var__149, 0, sizeof(struct sVar*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&come_value_151, 0, sizeof(struct CVALUE*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&right_value_id_152, 0, sizeof(int));
right_value187 = (void*)0;
right_value188 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&right_value_156, 0, sizeof(struct CVALUE*));
memset(&right_type_157, 0, sizeof(struct sType*));
memset(&current_stack_frame_struct_158, 0, sizeof(struct sClass*));
memset(&parent_var_159, 0, sizeof(struct sVar*));
memset(&left_type_160, 0, sizeof(struct sType*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
memset(&c_value_161, 0, sizeof(char*));
memset(&right_value_id_162, 0, sizeof(int));
right_value207 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&c_value_164, 0, sizeof(char*));
right_value213 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&var__167, 0, sizeof(struct sVar*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&left_type_168, 0, sizeof(struct sType*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
memset(&come_value_169, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&right_value_id_170, 0, sizeof(int));
right_value229 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&come_value_173, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    if(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 27, 1363)), "07var.c", 27, 1364))->multiple_declare) {
        var__87=(come_push_stackframe("07var.c", 28, 1407),__exception_result_var_b89=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 28, 1365)), "07var.c", 28, 1366))->lv_table, "07var.c", 28, 1367)), "07var.c", 28, 1368))->mVars,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 28, 1369)), "07var.c", 28, 1370))->name), come_pop_stackframe(), __exception_result_var_b89);
        if(var__87) {
            (come_push_stackframe("07var.c", 30,1410),err_msg(info,"Already appended this var name(%s)(1)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 30, 1408)), "07var.c", 30, 1409))->name),come_pop_stackframe());
            __result82__ = (_Bool)0;
            return __result82__;
        }
        if(_if_conditional154=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 34, 1411)), "07var.c", 34, 1412))->type==((void*)0),        _if_conditional154) {
            (come_push_stackframe("07var.c", 35,1415),err_msg(info,"Require concrete variable type(%s)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 35, 1413)), "07var.c", 35, 1414))->name),come_pop_stackframe());
            __result83__ = (_Bool)0;
            return __result83__;
        }
        type_91=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 39, 1420),__exception_result_var_b90=((struct sType*)(right_value130=solve_generics(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 39, 1416)), "07var.c", 39, 1417))->type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 39, 1418)), "07var.c", 39, 1419))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b90));
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(type_91, "07var.c", 40, 1421)), "07var.c", 40, 1422))->mFunctionParam=(_Bool)0;
        for(        o2_saved_92=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 42, 1423)), "07var.c", 42, 1424))->multiple_declare)),it_95=(come_push_stackframe("07var.c", 42, 1439),__exception_result_var_b93=list$1tuple3$3sTypephcharphsNodephph_begin(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_92), "07var.c", 42, 1425)), "07var.c", 42, 1426))), come_pop_stackframe(), __exception_result_var_b93);        !(come_push_stackframe("07var.c", 42, 1444),__exception_result_var_b94=list$1tuple3$3sTypephcharphsNodephph_end(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_92), "07var.c", 42, 1440)), "07var.c", 42, 1441))), come_pop_stackframe(), __exception_result_var_b94);        it_95=(come_push_stackframe("07var.c", 42, 1463),__exception_result_var_b97=list$1tuple3$3sTypephcharphsNodephph_next(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check((o2_saved_92), "07var.c", 42, 1445)), "07var.c", 42, 1446))), come_pop_stackframe(), __exception_result_var_b97)        ){
            multiple_assign_var1=it_95;
            type_98=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_99=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_100=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            (come_push_stackframe("07var.c", 44,1465),add_variable_to_table(var_name_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(come_push_stackframe("07var.c", 44, 1464),__exception_result_var_b98=sType_clone(type_98), come_pop_stackframe(), __exception_result_var_b98)))),info),come_pop_stackframe());
            come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
            var__87=(come_push_stackframe("07var.c", 46, 1468),__exception_result_var_b99=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 46, 1466)), "07var.c", 46, 1467))->lv_table,var_name_99), come_pop_stackframe(), __exception_result_var_b99);
            if(_if_conditional159=var__87==((void*)0),            _if_conditional159) {
                (come_push_stackframe("07var.c", 49,1469),err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_95),come_pop_stackframe());
                __result91__ = (_Bool)1;
                come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result91__;
            }
            left_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(come_push_stackframe("07var.c", 53, 1472),__exception_result_var_b100=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__87, "07var.c", 53, 1470)), "07var.c", 53, 1471))->mType), come_pop_stackframe(), __exception_result_var_b100))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value_100) {
                if(_if_conditional161=!(come_push_stackframe("07var.c", 56, 1473),__exception_result_var_b101=node_compile(right_value_100,info), come_pop_stackframe(), __exception_result_var_b101),                _if_conditional161) {
                    __result92__ = (_Bool)0;
                    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result92__;
                }
                come_value_102=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 59, 1474),__exception_result_var_b102=((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b102));
                come_call_finalizer3(right_value133,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("07var.c", 60,1483),dec_stack_ptr(1,info),come_pop_stackframe());
                (come_push_stackframe("07var.c", 62,1489),add_come_code(info,"%s=%s;\n",(come_push_stackframe("07var.c", 62, 1486),__exception_result_var_b103=((char*)(right_value134=make_define_var(left_type_101,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__87, "07var.c", 62, 1484)), "07var.c", 62, 1485))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b103),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_102, "07var.c", 62, 1487)), "07var.c", 62, 1488))->c_value),come_pop_stackframe());
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                (come_push_stackframe("07var.c", 65,1493),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 65, 1492),__exception_result_var_b104=((char*)(right_value135=make_define_var(left_type_101,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__87, "07var.c", 65, 1490)), "07var.c", 65, 1491))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b104)),come_pop_stackframe());
                right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(left_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 69, 1494)), "07var.c", 69, 1495))->multiple_assign) {
            if(_if_conditional165=!(come_push_stackframe("07var.c", 70, 1498),__exception_result_var_b105=node_compile(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 70, 1496)), "07var.c", 70, 1497))->right_value,info), come_pop_stackframe(), __exception_result_var_b105),            _if_conditional165) {
                __result93__ = (_Bool)0;
                return __result93__;
            }
            right_value_103=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 74, 1499),__exception_result_var_b106=((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b106));
            come_call_finalizer3(right_value136,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            right_type_104=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 75, 1500)), "07var.c", 75, 1501))->type;
            (come_push_stackframe("07var.c", 76,1502),dec_stack_ptr(1,info),come_pop_stackframe());
            if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 78, 1503)), "07var.c", 78, 1504))->mNoSolvedGenericsType, "07var.c", 78, 1505)), "07var.c", 78, 1506))->v1) {
                right_type_104=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 79, 1507)), "07var.c", 79, 1508))->mNoSolvedGenericsType, "07var.c", 79, 1509)), "07var.c", 79, 1510))->v1;
            }
            i_105=0;
            for(            o2_saved_106=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 83, 1511)), "07var.c", 83, 1512))->multiple_assign)),it_109=(come_push_stackframe("07var.c", 83, 1527),__exception_result_var_b109=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_106), "07var.c", 83, 1513)), "07var.c", 83, 1514))), come_pop_stackframe(), __exception_result_var_b109);            !(come_push_stackframe("07var.c", 83, 1532),__exception_result_var_b110=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_106), "07var.c", 83, 1528)), "07var.c", 83, 1529))), come_pop_stackframe(), __exception_result_var_b110);            it_109=(come_push_stackframe("07var.c", 83, 1551),__exception_result_var_b113=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_106), "07var.c", 83, 1533)), "07var.c", 83, 1534))), come_pop_stackframe(), __exception_result_var_b113)            ){
                if(_if_conditional172=i_105<(come_push_stackframe("07var.c", 84, 1558),__exception_result_var_b114=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 84, 1552)), "07var.c", 84, 1553))->mGenericsTypes, "07var.c", 84, 1554)), "07var.c", 84, 1555))), come_pop_stackframe(), __exception_result_var_b114),                _if_conditional172) {
                    right_type2_112=(come_push_stackframe("07var.c", 85, 1572),__exception_result_var_b116=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 85, 1559)), "07var.c", 85, 1560))->mGenericsTypes, "07var.c", 85, 1561)),i_105), "07var.c", 85, 1571)), come_pop_stackframe(), __exception_result_var_b116);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(right_type2_112, "07var.c", 86, 1573)), "07var.c", 86, 1574))->mFunctionParam=(_Bool)0;
                    (come_push_stackframe("07var.c", 87,1576),add_variable_to_table(it_109,(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(come_push_stackframe("07var.c", 87, 1575),__exception_result_var_b117=sType_clone(right_type2_112), come_pop_stackframe(), __exception_result_var_b117)))),info),come_pop_stackframe());
                    come_call_finalizer3(right_value137,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                i_105++;
            }
            come_call_finalizer3(o2_saved_106,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            static int num_multiple_var_116=0;
            multiple_var_name_117=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 94, 1577),__exception_result_var_b118=((char*)(right_value138=xsprintf("multiple_assign_var%d",++num_multiple_var_116))), come_pop_stackframe(), __exception_result_var_b118));
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("07var.c", 95,1581),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 95, 1580),__exception_result_var_b119=((char*)(right_value139=make_define_var(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 95, 1578)), "07var.c", 95, 1579))->type,multiple_var_name_117,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b119)),come_pop_stackframe());
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("07var.c", 97,1584),add_come_code(info,"%s=%s;\n",multiple_var_name_117,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 97, 1582)), "07var.c", 97, 1583))->c_value),come_pop_stackframe());
            __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 99, 1585)), "07var.c", 99, 1586))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 99, 1585)), "07var.c", 99, 1586))->c_value=(char*)come_increment_ref_count(((char*)(right_value140=(come_push_stackframe("07var.c", 99, 1587),__exception_result_var_b120=string_clone(multiple_var_name_117), come_pop_stackframe(), __exception_result_var_b120))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_105=0;
            for(            o2_saved_118=(struct list$1charph*)come_increment_ref_count((((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 102, 1588)), "07var.c", 102, 1589))->multiple_assign)),it_119=(come_push_stackframe("07var.c", 102, 1592),__exception_result_var_b121=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_118), "07var.c", 102, 1590)), "07var.c", 102, 1591))), come_pop_stackframe(), __exception_result_var_b121);            !(come_push_stackframe("07var.c", 102, 1595),__exception_result_var_b122=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_118), "07var.c", 102, 1593)), "07var.c", 102, 1594))), come_pop_stackframe(), __exception_result_var_b122);            it_119=(come_push_stackframe("07var.c", 102, 1598),__exception_result_var_b123=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_118), "07var.c", 102, 1596)), "07var.c", 102, 1597))), come_pop_stackframe(), __exception_result_var_b123)            ){
                if(_if_conditional175=i_105<(come_push_stackframe("07var.c", 103, 1603),__exception_result_var_b124=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 103, 1599)), "07var.c", 103, 1600))->mGenericsTypes, "07var.c", 103, 1601)), "07var.c", 103, 1602))), come_pop_stackframe(), __exception_result_var_b124),                _if_conditional175) {
                    right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=(come_push_stackframe("07var.c", 104, 1609),__exception_result_var_b126=sType_clone((come_push_stackframe("07var.c", 104, 1608),__exception_result_var_b125=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_104, "07var.c", 104, 1604)), "07var.c", 104, 1605))->mGenericsTypes, "07var.c", 104, 1606)),i_105), "07var.c", 104, 1607)), come_pop_stackframe(), __exception_result_var_b125)), come_pop_stackframe(), __exception_result_var_b126))));
                    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var__121=(come_push_stackframe("07var.c", 106, 1612),__exception_result_var_b127=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 106, 1610)), "07var.c", 106, 1611))->lv_table,it_119), come_pop_stackframe(), __exception_result_var_b127);
                    var_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(come_push_stackframe("07var.c", 108, 1615),__exception_result_var_b128=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 108, 1613)), "07var.c", 108, 1614))->mType), come_pop_stackframe(), __exception_result_var_b128))));
                    come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_122, "07var.c", 109, 1616)), "07var.c", 109, 1617))->mStatic=(_Bool)0;
                    left_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=(come_push_stackframe("07var.c", 111, 1620),__exception_result_var_b129=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 111, 1618)), "07var.c", 111, 1619))->mType), come_pop_stackframe(), __exception_result_var_b129))));
                    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value2_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 113, "CVALUE"))));
                    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 115, 1621)), "07var.c", 115, 1622))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 115, 1621)), "07var.c", 115, 1622))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 115, 1625),__exception_result_var_b130=((char*)(right_value145=xsprintf("%s->v%d",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_103, "07var.c", 115, 1623)), "07var.c", 115, 1624))->c_value,i_105+1))), come_pop_stackframe(), __exception_result_var_b130));
                    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj48=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 116, 1626)), "07var.c", 116, 1627))->type;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 116, 1626)), "07var.c", 116, 1627))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(come_push_stackframe("07var.c", 116, 1628),__exception_result_var_b131=sType_clone(right_type2_120), come_pop_stackframe(), __exception_result_var_b131))));
                    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 117, 1629)), "07var.c", 117, 1630))->var=((void*)0);
                    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 119, "CVALUE"))));
                    come_call_finalizer3(right_value147,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("07var.c", 121, 1633),__exception_result_var_b132=check_assign_type(((char*)(right_value149=xsprintf("\%s is assining to}",((char*)(right_value148=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 121, 1631)), "07var.c", 121, 1632))->name)))))),left_type_123,right_type2_120,come_value_125,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b132);
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional176=((struct sType*)come_null_check(((struct sType*)come_null_check(right_type2_120, "07var.c", 123, 1634)), "07var.c", 123, 1635))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_123, "07var.c", 123, 1636)), "07var.c", 123, 1637))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_123, "07var.c", 123, 1638)), "07var.c", 123, 1639))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type2_120, "07var.c", 123, 1640)), "07var.c", 123, 1641))->mPointerNum>0,                    _if_conditional176) {
                        (come_push_stackframe("07var.c", 125,1642),std_move(left_type_123,right_type2_120,right_value2_124,info),come_pop_stackframe());
                        __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 126, 1643)), "07var.c", 126, 1644))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 126, 1643)), "07var.c", 126, 1644))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 126, 1649),__exception_result_var_b133=((char*)(right_value150=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 126, 1645)), "07var.c", 126, 1646))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 126, 1647)), "07var.c", 126, 1648))->c_value))), come_pop_stackframe(), __exception_result_var_b133));
                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value_id_126=(come_push_stackframe("07var.c", 128, 1652),__exception_result_var_b134=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 128, 1650)), "07var.c", 128, 1651))->c_value)), come_pop_stackframe(), __exception_result_var_b134);
                        if(_if_conditional177=right_value_id_126!=-1,                        _if_conditional177) {
                            (come_push_stackframe("07var.c", 131,1653),remove_object_from_right_values(right_value_id_126,info),come_pop_stackframe());
                        }
                    }
                    else {
                        __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 135, 1654)), "07var.c", 135, 1655))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 135, 1654)), "07var.c", 135, 1655))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 135, 1660),__exception_result_var_b135=((char*)(right_value151=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 135, 1656)), "07var.c", 135, 1657))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value2_124, "07var.c", 135, 1658)), "07var.c", 135, 1659))->c_value))), come_pop_stackframe(), __exception_result_var_b135));
                        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __dec_obj51=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 137, 1661)), "07var.c", 137, 1662))->type;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 137, 1661)), "07var.c", 137, 1662))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=(come_push_stackframe("07var.c", 137, 1663),__exception_result_var_b136=sType_clone(left_type_123), come_pop_stackframe(), __exception_result_var_b136))));
                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value152,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 138, 1664)), "07var.c", 138, 1665))->var=var__121;
                    (come_push_stackframe("07var.c", 140,1669),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 140, 1668),__exception_result_var_b137=((char*)(right_value153=make_define_var(left_type_123,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__121, "07var.c", 140, 1666)), "07var.c", 140, 1667))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b137)),come_pop_stackframe());
                    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("07var.c", 141,1672),add_come_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_125, "07var.c", 141, 1670)), "07var.c", 141, 1671))->c_value),come_pop_stackframe());
                    come_call_finalizer3(right_type2_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_123,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                i_105++;
            }
            come_call_finalizer3(o2_saved_118,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            multiple_var_name_117 = come_decrement_ref_count2(multiple_var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional178=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 147, 1673)), "07var.c", 147, 1674))->right_value==((void*)0),            _if_conditional178) {
                var__127=(come_push_stackframe("07var.c", 148, 1681),__exception_result_var_b138=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 148, 1675)), "07var.c", 148, 1676))->lv_table, "07var.c", 148, 1677)), "07var.c", 148, 1678))->mVars,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 148, 1679)), "07var.c", 148, 1680))->name), come_pop_stackframe(), __exception_result_var_b138);
                if(var__127) {
                    (come_push_stackframe("07var.c", 150,1684),err_msg(info,"Already appended this var name(%s)(1)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 150, 1682)), "07var.c", 150, 1683))->name),come_pop_stackframe());
                    __result105__ = (_Bool)0;
                    return __result105__;
                }
                if(_if_conditional180=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 154, 1685)), "07var.c", 154, 1686))->type==((void*)0),                _if_conditional180) {
                    (come_push_stackframe("07var.c", 155,1689),err_msg(info,"Require concrete variable type(%s)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 155, 1687)), "07var.c", 155, 1688))->name),come_pop_stackframe());
                    __result106__ = (_Bool)0;
                    return __result106__;
                }
                type_128=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 159, 1694),__exception_result_var_b139=((struct sType*)(right_value154=solve_generics(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 159, 1690)), "07var.c", 159, 1691))->type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 159, 1692)), "07var.c", 159, 1693))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b139));
                come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(type_128, "07var.c", 160, 1695)), "07var.c", 160, 1696))->mFunctionParam=(_Bool)0;
                (come_push_stackframe("07var.c", 163,1700),add_variable_to_table(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 163, 1697)), "07var.c", 163, 1698))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(come_push_stackframe("07var.c", 163, 1699),__exception_result_var_b140=sType_clone(type_128), come_pop_stackframe(), __exception_result_var_b140)))),info),come_pop_stackframe());
                come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
                var__127=(come_push_stackframe("07var.c", 165, 1705),__exception_result_var_b141=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 165, 1701)), "07var.c", 165, 1702))->lv_table,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 165, 1703)), "07var.c", 165, 1704))->name), come_pop_stackframe(), __exception_result_var_b141);
                if(_if_conditional181=var__127==((void*)0),                _if_conditional181) {
                    var__127=(come_push_stackframe("07var.c", 168, 1710),__exception_result_var_b142=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 168, 1706)), "07var.c", 168, 1707))->gv_table,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 168, 1708)), "07var.c", 168, 1709))->name), come_pop_stackframe(), __exception_result_var_b142);
                    if(_if_conditional182=var__127==((void*)0),                    _if_conditional182) {
                        (come_push_stackframe("07var.c", 171,1713),err_msg(info,"var not found(%s)(Y) at definition of variable\n",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 171, 1711)), "07var.c", 171, 1712))->name),come_pop_stackframe());
                        __result107__ = (_Bool)1;
                        come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result107__;
                    }
                }
                left_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=(come_push_stackframe("07var.c", 176, 1716),__exception_result_var_b143=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 176, 1714)), "07var.c", 176, 1715))->mType), come_pop_stackframe(), __exception_result_var_b143))));
                come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional184=(come_push_stackframe("07var.c", 178, 1723),__exception_result_var_b144=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_129, "07var.c", 178, 1717)), "07var.c", 178, 1718))->mArrayNum, "07var.c", 178, 1719)), "07var.c", 178, 1720))), come_pop_stackframe(), __exception_result_var_b144)>0,                _if_conditional184) {
                    (come_push_stackframe("07var.c", 179,1727),add_come_code(info,"%s;\n",(come_push_stackframe("07var.c", 179, 1726),__exception_result_var_b145=((char*)(right_value157=make_define_var(left_type_129,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 179, 1724)), "07var.c", 179, 1725))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b145)),come_pop_stackframe());
                    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional185=!((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_129, "07var.c", 181, 1728)), "07var.c", 181, 1729))->mStatic,                    _if_conditional185) {
                        (come_push_stackframe("07var.c", 182,1733),add_come_code(info,"memset(&%s, 0, sizeof(%s)",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 182, 1730)), "07var.c", 182, 1731))->mCValueName,(come_push_stackframe("07var.c", 182, 1732),__exception_result_var_b146=((char*)(right_value158=make_type_name_string(left_type_129,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b146)),come_pop_stackframe());
                        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        for(                        o2_saved_130=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_129, "07var.c", 184, 1734)), "07var.c", 184, 1735))->mArrayNum)),it_133=(come_push_stackframe("07var.c", 184, 1750),__exception_result_var_b149=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_130), "07var.c", 184, 1736)), "07var.c", 184, 1737))), come_pop_stackframe(), __exception_result_var_b149);                        !(come_push_stackframe("07var.c", 184, 1755),__exception_result_var_b150=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_130), "07var.c", 184, 1751)), "07var.c", 184, 1752))), come_pop_stackframe(), __exception_result_var_b150);                        it_133=(come_push_stackframe("07var.c", 184, 1774),__exception_result_var_b153=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_130), "07var.c", 184, 1756)), "07var.c", 184, 1757))), come_pop_stackframe(), __exception_result_var_b153)                        ){
                            if(_if_conditional190=!(come_push_stackframe("07var.c", 185, 1775),__exception_result_var_b154=node_compile(it_133,info), come_pop_stackframe(), __exception_result_var_b154),                            _if_conditional190) {
                                (come_push_stackframe("07var.c", 186,1776),err_msg(info,"invalid array num"),come_pop_stackframe());
                                (come_push_stackframe("07var.c", 187,1777),exit(1),come_pop_stackframe());
                            }
                            come_value_136=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 190, 1778),__exception_result_var_b155=((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b155));
                            come_call_finalizer3(right_value159,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("07var.c", 191,1779),dec_stack_ptr(1,info),come_pop_stackframe());
                            (come_push_stackframe("07var.c", 192,1782),add_come_code(info,"*(%s)",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_136, "07var.c", 192, 1780)), "07var.c", 192, 1781))->c_value),come_pop_stackframe());
                            come_call_finalizer3(come_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_130,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        (come_push_stackframe("07var.c", 194,1783),add_come_code(info,");\n"),come_pop_stackframe());
                    }
                }
                else {
                    (come_push_stackframe("07var.c", 198,1787),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 198, 1786),__exception_result_var_b156=((char*)(right_value160=make_define_var(left_type_129,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 198, 1784)), "07var.c", 198, 1785))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b156)),come_pop_stackframe());
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(come_push_stackframe("07var.c", 200, 1788),__exception_result_var_b157=sType_clone(left_type_129), come_pop_stackframe(), __exception_result_var_b157))));
                    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(left_type2_137, "07var.c", 201, 1789)), "07var.c", 201, 1790))->mStatic=(_Bool)0;
                    (come_push_stackframe("07var.c", 203,1794),add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 203, 1791)), "07var.c", 203, 1792))->mCValueName,(come_push_stackframe("07var.c", 203, 1793),__exception_result_var_b158=((char*)(right_value162=make_type_name_string(left_type2_137,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b158)),come_pop_stackframe());
                    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 206, "CVALUE"))));
                come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj52=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 208, 1795)), "07var.c", 208, 1796))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 208, 1795)), "07var.c", 208, 1796))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 208, 1799),__exception_result_var_b159=((char*)(right_value164=xsprintf("%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 208, 1797)), "07var.c", 208, 1798))->mCValueName))), come_pop_stackframe(), __exception_result_var_b159));
                __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 209, 1800)), "07var.c", 209, 1801))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 209, 1800)), "07var.c", 209, 1801))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(come_push_stackframe("07var.c", 209, 1802),__exception_result_var_b160=sType_clone(left_type_129), come_pop_stackframe(), __exception_result_var_b160))));
                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "07var.c", 210, 1803)), "07var.c", 210, 1804))->var=var__127;
                (come_push_stackframe("07var.c", 212, 1857),__exception_result_var_b161=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 212, 1805)), "07var.c", 212, 1806))->stack, "07var.c", 212, 1807)), "07var.c", 212, 1808)),(struct CVALUE*)come_increment_ref_count(come_value_138)), come_pop_stackframe(), __exception_result_var_b161);
                if(_if_conditional194=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_129, "07var.c", 214, 1858)), "07var.c", 214, 1859))->mClass, "07var.c", 214, 1860)), "07var.c", 214, 1861))->mNumber&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_129, "07var.c", 214, 1862)), "07var.c", 214, 1863))->mPointerNum==0,                _if_conditional194) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__127, "07var.c", 215, 1864)), "07var.c", 215, 1865))->mType, "07var.c", 215, 1866)), "07var.c", 215, 1867))->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 218, 1868)), "07var.c", 218, 1869))->alloc) {
                    var__142=(come_push_stackframe("07var.c", 219, 1876),__exception_result_var_b162=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 219, 1870)), "07var.c", 219, 1871))->lv_table, "07var.c", 219, 1872)), "07var.c", 219, 1873))->mVars,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 219, 1874)), "07var.c", 219, 1875))->name), come_pop_stackframe(), __exception_result_var_b162);
                    if(var__142) {
                        (come_push_stackframe("07var.c", 221,1879),err_msg(info,"Already appended this var name(%s)(2)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 221, 1877)), "07var.c", 221, 1878))->name),come_pop_stackframe());
                        __result118__ = (_Bool)0;
                        return __result118__;
                    }
                    if(_if_conditional197=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 225, 1880)), "07var.c", 225, 1881))->type==((void*)0),                    _if_conditional197) {
                    }
                    else {
                        type_143=(struct sType*)come_increment_ref_count((come_push_stackframe("07var.c", 228, 1886),__exception_result_var_b163=((struct sType*)(right_value169=solve_generics(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 228, 1882)), "07var.c", 228, 1883))->type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 228, 1884)), "07var.c", 228, 1885))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b163));
                        come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(type_143, "07var.c", 230, 1887)), "07var.c", 230, 1888))->mFunctionParam=(_Bool)0;
                        (come_push_stackframe("07var.c", 231,1892),add_variable_to_table(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 231, 1889)), "07var.c", 231, 1890))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(come_push_stackframe("07var.c", 231, 1891),__exception_result_var_b164=sType_clone(type_143), come_pop_stackframe(), __exception_result_var_b164)))),info),come_pop_stackframe());
                        come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional198=!(come_push_stackframe("07var.c", 234, 1895),__exception_result_var_b165=node_compile(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 234, 1893)), "07var.c", 234, 1894))->right_value,info), come_pop_stackframe(), __exception_result_var_b165),                    _if_conditional198) {
                        __result119__ = (_Bool)0;
                        return __result119__;
                    }
                    array_initializer_144=(come_push_stackframe("07var.c", 238, 1900),__exception_result_var_b166=string_operator_equals(((char*)(right_value171=((struct sNode*)come_null_check(((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 238, 1896)), "07var.c", 238, 1897))->right_value, "07var.c", 238, 1898)), "07var.c", 238, 1899))->kind(((struct sNode*)come_null_check(((struct sNode*)come_null_check(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 238, 1896)), "07var.c", 238, 1897))->right_value, "07var.c", 238, 1898)), "07var.c", 238, 1899))->_protocol_obj))),"sArrayInitializer"), come_pop_stackframe(), __exception_result_var_b166);
                    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value_145=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 240, 1901),__exception_result_var_b167=((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b167));
                    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    right_type_146=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 241, 1902)), "07var.c", 241, 1903))->type;
                    (come_push_stackframe("07var.c", 242,1904),dec_stack_ptr(1,info),come_pop_stackframe());
                    if(_if_conditional199=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 244, 1905)), "07var.c", 244, 1906))->type==((void*)0),                    _if_conditional199) {
                        ((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_146, "07var.c", 245, 1907)), "07var.c", 245, 1908))->mFunctionParam=(_Bool)0;
                        (come_push_stackframe("07var.c", 246,1912),add_variable_to_table(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 246, 1909)), "07var.c", 246, 1910))->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(come_push_stackframe("07var.c", 246, 1911),__exception_result_var_b168=sType_clone(right_type_146), come_pop_stackframe(), __exception_result_var_b168)))),info),come_pop_stackframe());
                        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                    }
                    var__142=(come_push_stackframe("07var.c", 251, 1917),__exception_result_var_b169=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 251, 1913)), "07var.c", 251, 1914))->lv_table,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 251, 1915)), "07var.c", 251, 1916))->name), come_pop_stackframe(), __exception_result_var_b169);
                    var_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(come_push_stackframe("07var.c", 253, 1920),__exception_result_var_b170=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 253, 1918)), "07var.c", 253, 1919))->mType), come_pop_stackframe(), __exception_result_var_b170))));
                    come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_147, "07var.c", 254, 1921)), "07var.c", 254, 1922))->mStatic=(_Bool)0;
                    if(_if_conditional200=!array_initializer_144&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 256, 1923)), "07var.c", 256, 1924))->mType, "07var.c", 256, 1925)), "07var.c", 256, 1926))->mStatic&&!((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_147, "07var.c", 256, 1927)), "07var.c", 256, 1928))->mConstant&&(come_push_stackframe("07var.c", 256, 1933),__exception_result_var_b171=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(var_type_147, "07var.c", 256, 1929)), "07var.c", 256, 1930))->mArrayNum, "07var.c", 256, 1931)), "07var.c", 256, 1932))), come_pop_stackframe(), __exception_result_var_b171)==0,                    _if_conditional200) {
                        (come_push_stackframe("07var.c", 257,1937),add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 257, 1934)), "07var.c", 257, 1935))->mCValueName,(come_push_stackframe("07var.c", 257, 1936),__exception_result_var_b172=((char*)(right_value175=make_type_name_string(var_type_147,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b172)),come_pop_stackframe());
                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    left_type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=(come_push_stackframe("07var.c", 260, 1940),__exception_result_var_b173=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 260, 1938)), "07var.c", 260, 1939))->mType), come_pop_stackframe(), __exception_result_var_b173))));
                    come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(array_initializer_144) {
                        var__149=(come_push_stackframe("07var.c", 263, 1947),__exception_result_var_b174=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 263, 1941)), "07var.c", 263, 1942))->lv_table, "07var.c", 263, 1943)), "07var.c", 263, 1944))->mVars,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 263, 1945)), "07var.c", 263, 1946))->name), come_pop_stackframe(), __exception_result_var_b174);
                        (come_push_stackframe("07var.c", 264,1955),add_come_code(info,"%s=%s;\n",(come_push_stackframe("07var.c", 264, 1952),__exception_result_var_b175=((char*)(right_value177=make_define_var(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__149, "07var.c", 264, 1948)), "07var.c", 264, 1949))->mType,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__149, "07var.c", 264, 1950)), "07var.c", 264, 1951))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b175),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 264, 1953)), "07var.c", 264, 1954))->c_value),come_pop_stackframe());
                        right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 266, "CVALUE"))));
                        come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj57=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "07var.c", 267, 1956)), "07var.c", 267, 1957))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_150, "07var.c", 267, 1956)), "07var.c", 267, 1957))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 267, 1958),__exception_result_var_b176=((char*)(right_value179=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b176));
                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("07var.c", 268, 1963),__exception_result_var_b177=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 268, 1959)), "07var.c", 268, 1960))->stack, "07var.c", 268, 1961)), "07var.c", 268, 1962)),(struct CVALUE*)come_increment_ref_count(come_value_150)), come_pop_stackframe(), __exception_result_var_b177);
                        (come_push_stackframe("07var.c", 270,1964),transpiler_clear_last_code(info),come_pop_stackframe());
                        come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional202=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 272, 1965)), "07var.c", 272, 1966))->mType, "07var.c", 272, 1967)), "07var.c", 272, 1968))->mStatic||((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 272, 1969)), "07var.c", 272, 1970))->mType, "07var.c", 272, 1971)), "07var.c", 272, 1972))->mConstant,                        _if_conditional202) {
                            (come_push_stackframe("07var.c", 273, 1975),__exception_result_var_b178=check_assign_type(((char*)(right_value181=xsprintf("\%s is assining to",((char*)(right_value180=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 273, 1973)), "07var.c", 273, 1974))->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b178);
                            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("07var.c", 275,1981),add_come_code(info,"%s=%s;\n",(come_push_stackframe("07var.c", 275, 1978),__exception_result_var_b179=((char*)(right_value182=make_define_var(left_type_148,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 275, 1976)), "07var.c", 275, 1977))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b179),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 275, 1979)), "07var.c", 275, 1980))->c_value),come_pop_stackframe());
                            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 277, "CVALUE"))));
                            come_call_finalizer3(right_value183,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj58=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "07var.c", 278, 1982)), "07var.c", 278, 1983))->c_value;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_151, "07var.c", 278, 1982)), "07var.c", 278, 1983))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 278, 1984),__exception_result_var_b180=((char*)(right_value184=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b180));
                            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("07var.c", 279, 1989),__exception_result_var_b181=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 279, 1985)), "07var.c", 279, 1986))->stack, "07var.c", 279, 1987)), "07var.c", 279, 1988)),(struct CVALUE*)come_increment_ref_count(come_value_151)), come_pop_stackframe(), __exception_result_var_b181);
                            (come_push_stackframe("07var.c", 281,1990),transpiler_clear_last_code(info),come_pop_stackframe());
                            come_call_finalizer3(come_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional203=((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_146, "07var.c", 283, 1991)), "07var.c", 283, 1992))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_148, "07var.c", 283, 1993)), "07var.c", 283, 1994))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_148, "07var.c", 283, 1995)), "07var.c", 283, 1996))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_146, "07var.c", 283, 1997)), "07var.c", 283, 1998))->mPointerNum>0,                            _if_conditional203) {
                                (come_push_stackframe("07var.c", 285, 2001),__exception_result_var_b182=check_assign_type(((char*)(right_value186=xsprintf("\%s is assining to",((char*)(right_value185=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 285, 1999)), "07var.c", 285, 2000))->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b182);
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("07var.c", 287,2002),std_move(left_type_148,right_type_146,right_value_145,info),come_pop_stackframe());
                                right_value_id_152=(come_push_stackframe("07var.c", 289, 2005),__exception_result_var_b183=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 289, 2003)), "07var.c", 289, 2004))->c_value)), come_pop_stackframe(), __exception_result_var_b183);
                                if(_if_conditional204=right_value_id_152!=-1,                                _if_conditional204) {
                                    (come_push_stackframe("07var.c", 292,2006),remove_object_from_right_values(right_value_id_152,info),come_pop_stackframe());
                                }
                                (come_push_stackframe("07var.c", 295,2010),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 295, 2009),__exception_result_var_b184=((char*)(right_value187=make_define_var(left_type_148,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 295, 2007)), "07var.c", 295, 2008))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b184)),come_pop_stackframe());
                                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 297, "CVALUE"))));
                                come_call_finalizer3(right_value188,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                __dec_obj59=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 298, 2011)), "07var.c", 298, 2012))->c_value;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 298, 2011)), "07var.c", 298, 2012))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 298, 2017),__exception_result_var_b185=((char*)(right_value189=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 298, 2013)), "07var.c", 298, 2014))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 298, 2015)), "07var.c", 298, 2016))->c_value))), come_pop_stackframe(), __exception_result_var_b185));
                                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj60=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 299, 2018)), "07var.c", 299, 2019))->type;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 299, 2018)), "07var.c", 299, 2019))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=(come_push_stackframe("07var.c", 299, 2020),__exception_result_var_b186=sType_clone(left_type_148), come_pop_stackframe(), __exception_result_var_b186))));
                                come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 300, 2021)), "07var.c", 300, 2022))->var=var__142;
                                (come_push_stackframe("07var.c", 302, 2027),__exception_result_var_b187=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 302, 2023)), "07var.c", 302, 2024))->stack, "07var.c", 302, 2025)), "07var.c", 302, 2026)),(struct CVALUE*)come_increment_ref_count(come_value_153)), come_pop_stackframe(), __exception_result_var_b187);
                                (come_push_stackframe("07var.c", 304,2030),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "07var.c", 304, 2028)), "07var.c", 304, 2029))->c_value),come_pop_stackframe());
                                come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(_if_conditional205=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_148, "07var.c", 306, 2031)), "07var.c", 306, 2032))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_148, "07var.c", 306, 2033)), "07var.c", 306, 2034))->mHeap&&(come_push_stackframe("07var.c", 306, 2039),__exception_result_var_b188=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_146, "07var.c", 306, 2035)), "07var.c", 306, 2036))->mClass, "07var.c", 306, 2037)), "07var.c", 306, 2038))->mName,"void"), come_pop_stackframe(), __exception_result_var_b188)&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_146, "07var.c", 306, 2040)), "07var.c", 306, 2041))->mPointerNum>0,                                _if_conditional205) {
                                    (come_push_stackframe("07var.c", 308, 2044),__exception_result_var_b189=check_assign_type(((char*)(right_value192=xsprintf("\%s is assining to",((char*)(right_value191=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 308, 2042)), "07var.c", 308, 2043))->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b189);
                                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("07var.c", 310,2047),decrement_ref_count_object(left_type_148,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 310, 2045)), "07var.c", 310, 2046))->mCValueName,info,(_Bool)0),come_pop_stackframe());
                                    (come_push_stackframe("07var.c", 312,2051),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 312, 2050),__exception_result_var_b190=((char*)(right_value193=make_define_var(left_type_148,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 312, 2048)), "07var.c", 312, 2049))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b190)),come_pop_stackframe());
                                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 314, "CVALUE"))));
                                    come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    __dec_obj61=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 316, 2052)), "07var.c", 316, 2053))->c_value;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 316, 2052)), "07var.c", 316, 2053))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 316, 2058),__exception_result_var_b191=((char*)(right_value195=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 316, 2054)), "07var.c", 316, 2055))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 316, 2056)), "07var.c", 316, 2057))->c_value))), come_pop_stackframe(), __exception_result_var_b191));
                                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __dec_obj62=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 317, 2059)), "07var.c", 317, 2060))->type;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 317, 2059)), "07var.c", 317, 2060))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=(come_push_stackframe("07var.c", 317, 2061),__exception_result_var_b192=sType_clone(left_type_148), come_pop_stackframe(), __exception_result_var_b192))));
                                    come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 318, 2062)), "07var.c", 318, 2063))->var=var__142;
                                    (come_push_stackframe("07var.c", 320, 2068),__exception_result_var_b193=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 320, 2064)), "07var.c", 320, 2065))->stack, "07var.c", 320, 2066)), "07var.c", 320, 2067)),(struct CVALUE*)come_increment_ref_count(come_value_154)), come_pop_stackframe(), __exception_result_var_b193);
                                    (come_push_stackframe("07var.c", 322,2071),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "07var.c", 322, 2069)), "07var.c", 322, 2070))->c_value),come_pop_stackframe());
                                    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    (come_push_stackframe("07var.c", 325, 2074),__exception_result_var_b194=check_assign_type(((char*)(right_value198=xsprintf("\%s is assining to",((char*)(right_value197=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 325, 2072)), "07var.c", 325, 2073))->name)))))),left_type_148,right_type_146,right_value_145,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b194);
                                    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional206=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_148, "07var.c", 327, 2075)), "07var.c", 327, 2076))->mHeap&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 327, 2077)), "07var.c", 327, 2078))->type, "07var.c", 327, 2079)), "07var.c", 327, 2080))->mHeap,                                    _if_conditional206) {
                                        (come_push_stackframe("07var.c", 328,2083),err_msg(info,"require right value as heap object(%s)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 328, 2081)), "07var.c", 328, 2082))->name),come_pop_stackframe());
                                        __result120__ = (_Bool)0;
                                        come_call_finalizer3(right_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(left_type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result120__;
                                    }
                                    (come_push_stackframe("07var.c", 332,2087),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("07var.c", 332, 2086),__exception_result_var_b195=((char*)(right_value199=make_define_var(left_type_148,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 332, 2084)), "07var.c", 332, 2085))->mCValueName,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b195)),come_pop_stackframe());
                                    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 334, "CVALUE"))));
                                    come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    __dec_obj63=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 336, 2088)), "07var.c", 336, 2089))->c_value;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 336, 2088)), "07var.c", 336, 2089))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 336, 2094),__exception_result_var_b196=((char*)(right_value201=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__142, "07var.c", 336, 2090)), "07var.c", 336, 2091))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_145, "07var.c", 336, 2092)), "07var.c", 336, 2093))->c_value))), come_pop_stackframe(), __exception_result_var_b196));
                                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __dec_obj64=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 337, 2095)), "07var.c", 337, 2096))->type;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 337, 2095)), "07var.c", 337, 2096))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=(come_push_stackframe("07var.c", 337, 2097),__exception_result_var_b197=sType_clone(left_type_148), come_pop_stackframe(), __exception_result_var_b197))));
                                    come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 338, 2098)), "07var.c", 338, 2099))->var=var__142;
                                    (come_push_stackframe("07var.c", 340, 2104),__exception_result_var_b198=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 340, 2100)), "07var.c", 340, 2101))->stack, "07var.c", 340, 2102)), "07var.c", 340, 2103)),(struct CVALUE*)come_increment_ref_count(come_value_155)), come_pop_stackframe(), __exception_result_var_b198);
                                    (come_push_stackframe("07var.c", 342,2107),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_155, "07var.c", 342, 2105)), "07var.c", 342, 2106))->c_value),come_pop_stackframe());
                                    come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    come_call_finalizer3(right_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional207=!(come_push_stackframe("07var.c", 346, 2110),__exception_result_var_b199=node_compile(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 346, 2108)), "07var.c", 346, 2109))->right_value,info), come_pop_stackframe(), __exception_result_var_b199),                    _if_conditional207) {
                        __result121__ = (_Bool)0;
                        return __result121__;
                    }
                    right_value_156=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 350, 2111),__exception_result_var_b200=((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b200));
                    come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    right_type_157=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 351, 2112)), "07var.c", 351, 2113))->type;
                    (come_push_stackframe("07var.c", 352,2114),dec_stack_ptr(1,info),come_pop_stackframe());
                    current_stack_frame_struct_158=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 354, 2115)), "07var.c", 354, 2116))->current_stack_frame_struct;
                    if(_if_conditional208=current_stack_frame_struct_158&&(come_push_stackframe("07var.c", 356, 2123),__exception_result_var_b201=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 356, 2117)), "07var.c", 356, 2118))->lv_table, "07var.c", 356, 2119)), "07var.c", 356, 2120))->mVars,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 356, 2121)), "07var.c", 356, 2122))->name), come_pop_stackframe(), __exception_result_var_b201)==((void*)0),                    _if_conditional208) {
                        parent_var_159=(come_push_stackframe("07var.c", 357, 2130),__exception_result_var_b202=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 357, 2124)), "07var.c", 357, 2125))->lv_table, "07var.c", 357, 2126)), "07var.c", 357, 2127))->mParent,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 357, 2128)), "07var.c", 357, 2129))->name), come_pop_stackframe(), __exception_result_var_b202);
                        if(_if_conditional209=parent_var_159!=((void*)0),                        _if_conditional209) {
                            if(_if_conditional210=(come_push_stackframe("07var.c", 360, 2137),__exception_result_var_b203=string_operator_not_equals(((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 360, 2131)), "07var.c", 360, 2132))->mFunName,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 360, 2133)), "07var.c", 360, 2134))->come_fun, "07var.c", 360, 2135)), "07var.c", 360, 2136))->mName), come_pop_stackframe(), __exception_result_var_b203),                            _if_conditional210) {
                                left_type_160=((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 361, 2138)), "07var.c", 361, 2139))->mType;
                                if(_if_conditional211=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_160, "07var.c", 363, 2140)), "07var.c", 363, 2141))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 363, 2142)), "07var.c", 363, 2143))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 363, 2144)), "07var.c", 363, 2145))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_160, "07var.c", 363, 2146)), "07var.c", 363, 2147))->mHeap,                                _if_conditional211) {
                                    (come_push_stackframe("07var.c", 364, 2150),__exception_result_var_b204=check_assign_type(((char*)(right_value205=xsprintf("\%s is assigning to",((char*)(right_value204=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 364, 2148)), "07var.c", 364, 2149))->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b204);
                                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    c_value_161=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 366, 2153),__exception_result_var_b205=((char*)(right_value206=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 366, 2151)), "07var.c", 366, 2152))->mCValueName))), come_pop_stackframe(), __exception_result_var_b205));
                                    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    (come_push_stackframe("07var.c", 368,2156),decrement_ref_count_object(((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 368, 2154)), "07var.c", 368, 2155))->mType,c_value_161,info,(_Bool)0),come_pop_stackframe());
                                    (come_push_stackframe("07var.c", 369,2157),std_move(left_type_160,right_type_157,right_value_156,info),come_pop_stackframe());
                                    right_value_id_162=(come_push_stackframe("07var.c", 371, 2160),__exception_result_var_b206=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 371, 2158)), "07var.c", 371, 2159))->c_value)), come_pop_stackframe(), __exception_result_var_b206);
                                    if(_if_conditional212=right_value_id_162!=-1,                                    _if_conditional212) {
                                        (come_push_stackframe("07var.c", 374,2161),remove_object_from_right_values(right_value_id_162,info),come_pop_stackframe());
                                    }
                                    come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 377, "CVALUE"))));
                                    come_call_finalizer3(right_value207,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                    __dec_obj65=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 379, 2162)), "07var.c", 379, 2163))->c_value;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 379, 2162)), "07var.c", 379, 2163))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 379, 2168),__exception_result_var_b207=((char*)(right_value208=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 379, 2164)), "07var.c", 379, 2165))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 379, 2166)), "07var.c", 379, 2167))->c_value))), come_pop_stackframe(), __exception_result_var_b207));
                                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 380, 2169)), "07var.c", 380, 2170))->type;
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 380, 2169)), "07var.c", 380, 2170))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=(come_push_stackframe("07var.c", 380, 2171),__exception_result_var_b208=sType_clone(left_type_160), come_pop_stackframe(), __exception_result_var_b208))));
                                    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 381, 2172)), "07var.c", 381, 2173))->var=((void*)0);
                                    (come_push_stackframe("07var.c", 383,2176),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_163, "07var.c", 383, 2174)), "07var.c", 383, 2175))->c_value),come_pop_stackframe());
                                    (come_push_stackframe("07var.c", 385, 2181),__exception_result_var_b209=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 385, 2177)), "07var.c", 385, 2178))->stack, "07var.c", 385, 2179)), "07var.c", 385, 2180)),(struct CVALUE*)come_increment_ref_count(come_value_163)), come_pop_stackframe(), __exception_result_var_b209);
                                    __result122__ = (_Bool)1;
                                    c_value_161 = come_decrement_ref_count2(c_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result122__;
                                    c_value_161 = come_decrement_ref_count2(c_value_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(_if_conditional213=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_160, "07var.c", 389, 2182)), "07var.c", 389, 2183))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 389, 2184)), "07var.c", 389, 2185))->mPointerNum>0&&(come_push_stackframe("07var.c", 389, 2190),__exception_result_var_b210=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 389, 2186)), "07var.c", 389, 2187))->mClass, "07var.c", 389, 2188)), "07var.c", 389, 2189))->mName,"void"), come_pop_stackframe(), __exception_result_var_b210)&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_160, "07var.c", 389, 2191)), "07var.c", 389, 2192))->mHeap,                                    _if_conditional213) {
                                        (come_push_stackframe("07var.c", 391, 2195),__exception_result_var_b211=check_assign_type(((char*)(right_value211=xsprintf("\%s is assigning to",((char*)(right_value210=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 391, 2193)), "07var.c", 391, 2194))->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b211);
                                        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        c_value_164=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 393, 2198),__exception_result_var_b212=((char*)(right_value212=xsprintf("*(parent->%s)",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 393, 2196)), "07var.c", 393, 2197))->mCValueName))), come_pop_stackframe(), __exception_result_var_b212));
                                        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        (come_push_stackframe("07var.c", 394,2201),decrement_ref_count_object(((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 394, 2199)), "07var.c", 394, 2200))->mType,c_value_164,info,(_Bool)0),come_pop_stackframe());
                                        come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 396, "CVALUE"))));
                                        come_call_finalizer3(right_value213,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj67=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 398, 2202)), "07var.c", 398, 2203))->c_value;
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 398, 2202)), "07var.c", 398, 2203))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 398, 2208),__exception_result_var_b213=((char*)(right_value214=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 398, 2204)), "07var.c", 398, 2205))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 398, 2206)), "07var.c", 398, 2207))->c_value))), come_pop_stackframe(), __exception_result_var_b213));
                                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj68=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 399, 2209)), "07var.c", 399, 2210))->type;
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 399, 2209)), "07var.c", 399, 2210))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=(come_push_stackframe("07var.c", 399, 2211),__exception_result_var_b214=sType_clone(left_type_160), come_pop_stackframe(), __exception_result_var_b214))));
                                        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 400, 2212)), "07var.c", 400, 2213))->var=((void*)0);
                                        (come_push_stackframe("07var.c", 402,2216),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_165, "07var.c", 402, 2214)), "07var.c", 402, 2215))->c_value),come_pop_stackframe());
                                        (come_push_stackframe("07var.c", 404, 2221),__exception_result_var_b215=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 404, 2217)), "07var.c", 404, 2218))->stack, "07var.c", 404, 2219)), "07var.c", 404, 2220)),(struct CVALUE*)come_increment_ref_count(come_value_165)), come_pop_stackframe(), __exception_result_var_b215);
                                        __result123__ = (_Bool)1;
                                        c_value_164 = come_decrement_ref_count2(c_value_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result123__;
                                        c_value_164 = come_decrement_ref_count2(c_value_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        (come_push_stackframe("07var.c", 409, 2224),__exception_result_var_b216=check_assign_type(((char*)(right_value217=xsprintf("\%s is assigning to",((char*)(right_value216=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 409, 2222)), "07var.c", 409, 2223))->name)))))),left_type_160,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b216);
                                        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional214=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_160, "07var.c", 411, 2225)), "07var.c", 411, 2226))->mHeap&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 411, 2227)), "07var.c", 411, 2228))->type, "07var.c", 411, 2229)), "07var.c", 411, 2230))->mHeap,                                        _if_conditional214) {
                                            (come_push_stackframe("07var.c", 412,2233),err_msg(info,"require right value as heap object(%s)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 412, 2231)), "07var.c", 412, 2232))->name),come_pop_stackframe());
                                            __result124__ = (_Bool)0;
                                            come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result124__;
                                        }
                                        come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 416, "CVALUE"))));
                                        come_call_finalizer3(right_value218,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                        __dec_obj69=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 418, 2234)), "07var.c", 418, 2235))->c_value;
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 418, 2234)), "07var.c", 418, 2235))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 418, 2240),__exception_result_var_b217=((char*)(right_value219=xsprintf("(*(parent->%s))=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_159, "07var.c", 418, 2236)), "07var.c", 418, 2237))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 418, 2238)), "07var.c", 418, 2239))->c_value))), come_pop_stackframe(), __exception_result_var_b217));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 419, 2241)), "07var.c", 419, 2242))->type;
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 419, 2241)), "07var.c", 419, 2242))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=(come_push_stackframe("07var.c", 419, 2243),__exception_result_var_b218=sType_clone(left_type_160), come_pop_stackframe(), __exception_result_var_b218))));
                                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 420, 2244)), "07var.c", 420, 2245))->var=((void*)0);
                                        (come_push_stackframe("07var.c", 422,2248),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_166, "07var.c", 422, 2246)), "07var.c", 422, 2247))->c_value),come_pop_stackframe());
                                        (come_push_stackframe("07var.c", 424, 2253),__exception_result_var_b219=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 424, 2249)), "07var.c", 424, 2250))->stack, "07var.c", 424, 2251)), "07var.c", 424, 2252)),(struct CVALUE*)come_increment_ref_count(come_value_166)), come_pop_stackframe(), __exception_result_var_b219);
                                        __result125__ = (_Bool)1;
                                        come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result125__;
                                        come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                    var__167=(come_push_stackframe("07var.c", 432, 2258),__exception_result_var_b220=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 432, 2254)), "07var.c", 432, 2255))->lv_table,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 432, 2256)), "07var.c", 432, 2257))->name), come_pop_stackframe(), __exception_result_var_b220);
                    if(_if_conditional215=var__167==((void*)0),                    _if_conditional215) {
                        var__167=(come_push_stackframe("07var.c", 435, 2263),__exception_result_var_b221=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 435, 2259)), "07var.c", 435, 2260))->gv_table,((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 435, 2261)), "07var.c", 435, 2262))->name), come_pop_stackframe(), __exception_result_var_b221);
                        if(_if_conditional216=var__167==((void*)0),                        _if_conditional216) {
                            (come_push_stackframe("07var.c", 438,2266),err_msg(info,"var not found(%s)(X) at storing variable\n",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 438, 2264)), "07var.c", 438, 2265))->name),come_pop_stackframe());
                            __result126__ = (_Bool)1;
                            come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result126__;
                        }
                    }
                    if(_if_conditional217=((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 443, 2267)), "07var.c", 443, 2268))->mType==((void*)0),                    _if_conditional217) {
                        __dec_obj71=((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 444, 2269)), "07var.c", 444, 2270))->mType;
                        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 444, 2269)), "07var.c", 444, 2270))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=(come_push_stackframe("07var.c", 444, 2271),__exception_result_var_b222=sType_clone(right_type_157), come_pop_stackframe(), __exception_result_var_b222))));
                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value221,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    left_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(come_push_stackframe("07var.c", 447, 2274),__exception_result_var_b223=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 447, 2272)), "07var.c", 447, 2273))->mType), come_pop_stackframe(), __exception_result_var_b223))));
                    come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional218=(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 449, 2275)), "07var.c", 449, 2276))->mType, "07var.c", 449, 2277)), "07var.c", 449, 2278))->mStatic||((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 449, 2279)), "07var.c", 449, 2280))->mType, "07var.c", 449, 2281)), "07var.c", 449, 2282))->mConstant)&&!((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 449, 2283)), "07var.c", 449, 2284))->mGlobal,                    _if_conditional218) {
                        (come_push_stackframe("07var.c", 450, 2287),__exception_result_var_b224=check_assign_type(((char*)(right_value224=xsprintf("\%s is assining to",((char*)(right_value223=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 450, 2285)), "07var.c", 450, 2286))->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b224);
                        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("07var.c", 452,2292),add_come_code(info,"%s=%s;\n",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 452, 2288)), "07var.c", 452, 2289))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 452, 2290)), "07var.c", 452, 2291))->c_value),come_pop_stackframe());
                        come_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 454, "CVALUE"))));
                        come_call_finalizer3(right_value225,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj72=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_169, "07var.c", 455, 2293)), "07var.c", 455, 2294))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_169, "07var.c", 455, 2293)), "07var.c", 455, 2294))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 455, 2295),__exception_result_var_b225=((char*)(right_value226=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b225));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("07var.c", 456, 2300),__exception_result_var_b226=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 456, 2296)), "07var.c", 456, 2297))->stack, "07var.c", 456, 2298)), "07var.c", 456, 2299)),(struct CVALUE*)come_increment_ref_count(come_value_169)), come_pop_stackframe(), __exception_result_var_b226);
                        (come_push_stackframe("07var.c", 458,2301),transpiler_clear_last_code(info),come_pop_stackframe());
                        come_call_finalizer3(come_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(_if_conditional219=((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 460, 2302)), "07var.c", 460, 2303))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_168, "07var.c", 460, 2304)), "07var.c", 460, 2305))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_168, "07var.c", 460, 2306)), "07var.c", 460, 2307))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 460, 2308)), "07var.c", 460, 2309))->mPointerNum>0,                        _if_conditional219) {
                            (come_push_stackframe("07var.c", 462, 2312),__exception_result_var_b227=check_assign_type(((char*)(right_value228=xsprintf("\%s is assining to",((char*)(right_value227=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 462, 2310)), "07var.c", 462, 2311))->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b227);
                            right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("07var.c", 464,2315),decrement_ref_count_object(left_type_168,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 464, 2313)), "07var.c", 464, 2314))->mCValueName,info,(_Bool)0),come_pop_stackframe());
                            (come_push_stackframe("07var.c", 465,2316),std_move(left_type_168,right_type_157,right_value_156,info),come_pop_stackframe());
                            right_value_id_170=(come_push_stackframe("07var.c", 467, 2319),__exception_result_var_b228=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 467, 2317)), "07var.c", 467, 2318))->c_value)), come_pop_stackframe(), __exception_result_var_b228);
                            if(_if_conditional220=right_value_id_170!=-1,                            _if_conditional220) {
                                (come_push_stackframe("07var.c", 470,2320),remove_object_from_right_values(right_value_id_170,info),come_pop_stackframe());
                            }
                            come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 473, "CVALUE"))));
                            come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj73=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 475, 2321)), "07var.c", 475, 2322))->c_value;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 475, 2321)), "07var.c", 475, 2322))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 475, 2327),__exception_result_var_b229=((char*)(right_value230=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 475, 2323)), "07var.c", 475, 2324))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 475, 2325)), "07var.c", 475, 2326))->c_value))), come_pop_stackframe(), __exception_result_var_b229));
                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj74=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 476, 2328)), "07var.c", 476, 2329))->type;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 476, 2328)), "07var.c", 476, 2329))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(come_push_stackframe("07var.c", 476, 2330),__exception_result_var_b230=sType_clone(left_type_168), come_pop_stackframe(), __exception_result_var_b230))));
                            come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 477, 2331)), "07var.c", 477, 2332))->var=var__167;
                            (come_push_stackframe("07var.c", 479, 2337),__exception_result_var_b231=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 479, 2333)), "07var.c", 479, 2334))->stack, "07var.c", 479, 2335)), "07var.c", 479, 2336)),(struct CVALUE*)come_increment_ref_count(come_value_171)), come_pop_stackframe(), __exception_result_var_b231);
                            (come_push_stackframe("07var.c", 481,2340),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_171, "07var.c", 481, 2338)), "07var.c", 481, 2339))->c_value),come_pop_stackframe());
                            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional221=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_168, "07var.c", 483, 2341)), "07var.c", 483, 2342))->mPointerNum>0&&((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_168, "07var.c", 483, 2343)), "07var.c", 483, 2344))->mHeap&&(come_push_stackframe("07var.c", 483, 2349),__exception_result_var_b232=string_operator_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 483, 2345)), "07var.c", 483, 2346))->mClass, "07var.c", 483, 2347)), "07var.c", 483, 2348))->mName,"void"), come_pop_stackframe(), __exception_result_var_b232)&&((struct sType*)come_null_check(((struct sType*)come_null_check(right_type_157, "07var.c", 483, 2350)), "07var.c", 483, 2351))->mPointerNum>0,                            _if_conditional221) {
                                (come_push_stackframe("07var.c", 485, 2354),__exception_result_var_b233=check_assign_type(((char*)(right_value233=xsprintf("\%s is assining to",((char*)(right_value232=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 485, 2352)), "07var.c", 485, 2353))->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b233);
                                right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                (come_push_stackframe("07var.c", 487,2357),decrement_ref_count_object(left_type_168,((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 487, 2355)), "07var.c", 487, 2356))->mCValueName,info,(_Bool)0),come_pop_stackframe());
                                come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 489, "CVALUE"))));
                                come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                __dec_obj75=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 491, 2358)), "07var.c", 491, 2359))->c_value;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 491, 2358)), "07var.c", 491, 2359))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 491, 2364),__exception_result_var_b234=((char*)(right_value235=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 491, 2360)), "07var.c", 491, 2361))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 491, 2362)), "07var.c", 491, 2363))->c_value))), come_pop_stackframe(), __exception_result_var_b234));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj76=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 492, 2365)), "07var.c", 492, 2366))->type;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 492, 2365)), "07var.c", 492, 2366))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=(come_push_stackframe("07var.c", 492, 2367),__exception_result_var_b235=sType_clone(left_type_168), come_pop_stackframe(), __exception_result_var_b235))));
                                come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value236,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 493, 2368)), "07var.c", 493, 2369))->var=var__167;
                                (come_push_stackframe("07var.c", 495, 2374),__exception_result_var_b236=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 495, 2370)), "07var.c", 495, 2371))->stack, "07var.c", 495, 2372)), "07var.c", 495, 2373)),(struct CVALUE*)come_increment_ref_count(come_value_172)), come_pop_stackframe(), __exception_result_var_b236);
                                (come_push_stackframe("07var.c", 497,2377),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "07var.c", 497, 2375)), "07var.c", 497, 2376))->c_value),come_pop_stackframe());
                                come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                (come_push_stackframe("07var.c", 500, 2380),__exception_result_var_b237=check_assign_type(((char*)(right_value238=xsprintf("\%s is assining to",((char*)(right_value237=string_to_string(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 500, 2378)), "07var.c", 500, 2379))->name)))))),left_type_168,right_type_157,right_value_156,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b237);
                                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(_if_conditional222=((struct sType*)come_null_check(((struct sType*)come_null_check(left_type_168, "07var.c", 502, 2381)), "07var.c", 502, 2382))->mHeap&&!((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 502, 2383)), "07var.c", 502, 2384))->type, "07var.c", 502, 2385)), "07var.c", 502, 2386))->mHeap,                                _if_conditional222) {
                                    (come_push_stackframe("07var.c", 503,2389),err_msg(info,"require right value as heap object(%s)",((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "07var.c", 503, 2387)), "07var.c", 503, 2388))->name),come_pop_stackframe());
                                    __result127__ = (_Bool)0;
                                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result127__;
                                }
                                come_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 507, "CVALUE"))));
                                come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                __dec_obj77=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 509, 2390)), "07var.c", 509, 2391))->c_value;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 509, 2390)), "07var.c", 509, 2391))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 509, 2396),__exception_result_var_b238=((char*)(right_value240=xsprintf("%s=%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__167, "07var.c", 509, 2392)), "07var.c", 509, 2393))->mCValueName,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(right_value_156, "07var.c", 509, 2394)), "07var.c", 509, 2395))->c_value))), come_pop_stackframe(), __exception_result_var_b238));
                                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj78=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 510, 2397)), "07var.c", 510, 2398))->type;
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 510, 2397)), "07var.c", 510, 2398))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=(come_push_stackframe("07var.c", 510, 2399),__exception_result_var_b239=sType_clone(left_type_168), come_pop_stackframe(), __exception_result_var_b239))));
                                come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 511, 2400)), "07var.c", 511, 2401))->var=var__167;
                                (come_push_stackframe("07var.c", 513, 2406),__exception_result_var_b240=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 513, 2402)), "07var.c", 513, 2403))->stack, "07var.c", 513, 2404)), "07var.c", 513, 2405)),(struct CVALUE*)come_increment_ref_count(come_value_173)), come_pop_stackframe(), __exception_result_var_b240);
                                (come_push_stackframe("07var.c", 515,2409),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_173, "07var.c", 515, 2407)), "07var.c", 515, 2408))->c_value),come_pop_stackframe());
                                come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_call_finalizer3(right_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result128__ = (_Bool)1;
    return __result128__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 576)), "sNodeBase_finalize", 0, 577))->sname!=((void*)0),        _if_conditional19) {
            ((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname = come_decrement_ref_count2(((struct sNodeBase*)come_null_check(((struct sNodeBase*)come_null_check(self, "sNodeBase_finalize", 0, 578)), "sNodeBase_finalize", 0, 579))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional20;
struct sType* __result52__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional38;
_Bool _if_conditional39;
struct list$1sTypeph* __exception_result_var_b56;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional43;
struct tuple1$1sTypeph* __exception_result_var_b58;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __exception_result_var_b59;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional48;
char* __exception_result_var_b60;
void* right_value93;
char* __dec_obj20;
_Bool _if_conditional49;
struct list$1sTypeph* __exception_result_var_b61;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional50;
struct list$1sNodeph* __exception_result_var_b65;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional63;
_Bool _if_conditional64;
struct list$1sTypeph* __exception_result_var_b66;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional65;
struct list$1charph* __exception_result_var_b70;
void* right_value110;
struct list$1charph* __dec_obj30;
_Bool _if_conditional69;
struct tuple1$1sTypeph* __exception_result_var_b71;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct sNode* __exception_result_var_b72;
void* right_value112;
struct sNode* __dec_obj32;
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
_Bool _if_conditional98;
struct sNode* __exception_result_var_b73;
void* right_value113;
struct sNode* __dec_obj33;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
char* __exception_result_var_b74;
void* right_value114;
char* __dec_obj34;
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
char* __exception_result_var_b75;
void* right_value115;
char* __dec_obj35;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
right_value88 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
        if(_if_conditional20=self==(void*)0,        _if_conditional20) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional38=self!=((void*)0),        _if_conditional38) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 4, 665)), "sType_clone", 4, 666))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 667)), "sType_clone", 4, 668))->mClass;
        }
        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 669)), "sType_clone", 5, 670))->mMultipleTypes!=((void*)0),        _if_conditional39) {
            __dec_obj16=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 671)), "sType_clone", 5, 672))->mMultipleTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 5, 671)), "sType_clone", 5, 672))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=(come_push_stackframe("sType_clone", 5, 738),__exception_result_var_b56=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 673)), "sType_clone", 5, 674))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b56))));
            come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 743)), "sType_clone", 6, 744))->mNoSolvedGenericsType!=((void*)0),        _if_conditional43) {
            __dec_obj18=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 745)), "sType_clone", 6, 746))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 6, 745)), "sType_clone", 6, 746))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(come_push_stackframe("sType_clone", 6, 760),__exception_result_var_b58=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 747)), "sType_clone", 6, 748))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b58))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 761)), "sType_clone", 7, 762))->mOriginalLoadVarType!=((void*)0),        _if_conditional47) {
            __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 763)), "sType_clone", 7, 764))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 7, 763)), "sType_clone", 7, 764))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=(come_push_stackframe("sType_clone", 7, 767),__exception_result_var_b59=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 765)), "sType_clone", 7, 766))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b59))));
            come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 768)), "sType_clone", 8, 769))->mGenericsName!=((void*)0),        _if_conditional48) {
            __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 770)), "sType_clone", 8, 771))->mGenericsName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 8, 770)), "sType_clone", 8, 771))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=(come_push_stackframe("sType_clone", 8, 774),__exception_result_var_b60=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 772)), "sType_clone", 8, 773))->mGenericsName), come_pop_stackframe(), __exception_result_var_b60))));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 775)), "sType_clone", 9, 776))->mGenericsTypes!=((void*)0),        _if_conditional49) {
            __dec_obj21=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 777)), "sType_clone", 9, 778))->mGenericsTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 9, 777)), "sType_clone", 9, 778))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=(come_push_stackframe("sType_clone", 9, 781),__exception_result_var_b61=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 779)), "sType_clone", 9, 780))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b61))));
            come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 782)), "sType_clone", 10, 783))->mArrayNum!=((void*)0),        _if_conditional50) {
            __dec_obj25=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 784)), "sType_clone", 10, 785))->mArrayNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 10, 784)), "sType_clone", 10, 785))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=(come_push_stackframe("sType_clone", 10, 885),__exception_result_var_b65=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 786)), "sType_clone", 10, 787))->mArrayNum), come_pop_stackframe(), __exception_result_var_b65))));
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 11, 890)), "sType_clone", 11, 891))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 892)), "sType_clone", 11, 893))->mOmitArrayNum;
        }
        if(_if_conditional64=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 894)), "sType_clone", 12, 895))->mParamTypes!=((void*)0),        _if_conditional64) {
            __dec_obj26=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 896)), "sType_clone", 12, 897))->mParamTypes;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 12, 896)), "sType_clone", 12, 897))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=(come_push_stackframe("sType_clone", 12, 900),__exception_result_var_b66=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 898)), "sType_clone", 12, 899))->mParamTypes), come_pop_stackframe(), __exception_result_var_b66))));
            come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional65=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 901)), "sType_clone", 13, 902))->mParamNames!=((void*)0),        _if_conditional65) {
            __dec_obj30=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 903)), "sType_clone", 13, 904))->mParamNames;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 13, 903)), "sType_clone", 13, 904))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=(come_push_stackframe("sType_clone", 13, 970),__exception_result_var_b70=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 905)), "sType_clone", 13, 906))->mParamNames), come_pop_stackframe(), __exception_result_var_b70))));
            come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 975)), "sType_clone", 14, 976))->mResultType!=((void*)0),        _if_conditional69) {
            __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 977)), "sType_clone", 14, 978))->mResultType;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 14, 977)), "sType_clone", 14, 978))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=(come_push_stackframe("sType_clone", 14, 981),__exception_result_var_b71=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 979)), "sType_clone", 14, 980))->mResultType), come_pop_stackframe(), __exception_result_var_b71))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 15, 982)), "sType_clone", 15, 983))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 984)), "sType_clone", 15, 985))->mVarArgs;
        }
        if(_if_conditional71=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 986)), "sType_clone", 16, 987))->mAlignas!=((void*)0),        _if_conditional71) {
            __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 988)), "sType_clone", 16, 989))->mAlignas;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 16, 988)), "sType_clone", 16, 989))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=(come_push_stackframe("sType_clone", 16, 992),__exception_result_var_b72=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 990)), "sType_clone", 16, 991))->mAlignas), come_pop_stackframe(), __exception_result_var_b72))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 17, 993)), "sType_clone", 17, 994))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 995)), "sType_clone", 17, 996))->mUnsigned;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 18, 997)), "sType_clone", 18, 998))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 999)), "sType_clone", 18, 1000))->mShort;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 19, 1001)), "sType_clone", 19, 1002))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1003)), "sType_clone", 19, 1004))->mLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 20, 1005)), "sType_clone", 20, 1006))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1007)), "sType_clone", 20, 1008))->mLongLong;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 21, 1009)), "sType_clone", 21, 1010))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1011)), "sType_clone", 21, 1012))->mConstant;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 22, 1013)), "sType_clone", 22, 1014))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1015)), "sType_clone", 22, 1016))->mRegister;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 23, 1017)), "sType_clone", 23, 1018))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1019)), "sType_clone", 23, 1020))->mVolatile;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 24, 1021)), "sType_clone", 24, 1022))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1023)), "sType_clone", 24, 1024))->mStatic;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 25, 1025)), "sType_clone", 25, 1026))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1027)), "sType_clone", 25, 1028))->mUniq;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 26, 1029)), "sType_clone", 26, 1030))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1031)), "sType_clone", 26, 1032))->mRecord;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 27, 1033)), "sType_clone", 27, 1034))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1035)), "sType_clone", 27, 1036))->mExtern;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 28, 1037)), "sType_clone", 28, 1038))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1039)), "sType_clone", 28, 1040))->mRestrict;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 29, 1041)), "sType_clone", 29, 1042))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1043)), "sType_clone", 29, 1044))->mImmutable;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 30, 1045)), "sType_clone", 30, 1046))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1047)), "sType_clone", 30, 1048))->mHeap;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 31, 1049)), "sType_clone", 31, 1050))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1051)), "sType_clone", 31, 1052))->mDummyHeap;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 32, 1053)), "sType_clone", 32, 1054))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1055)), "sType_clone", 32, 1056))->mDelegate;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 33, 1057)), "sType_clone", 33, 1058))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1059)), "sType_clone", 33, 1060))->mShare;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 34, 1061)), "sType_clone", 34, 1062))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1063)), "sType_clone", 34, 1064))->mClone;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 35, 1065)), "sType_clone", 35, 1066))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1067)), "sType_clone", 35, 1068))->mNoHeap;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 36, 1069)), "sType_clone", 36, 1070))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1071)), "sType_clone", 36, 1072))->mNoCallingDestructor;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 37, 1073)), "sType_clone", 37, 1074))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1075)), "sType_clone", 37, 1076))->mRefference;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 38, 1077)), "sType_clone", 38, 1078))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1079)), "sType_clone", 38, 1080))->mException;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 39, 1081)), "sType_clone", 39, 1082))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1083)), "sType_clone", 39, 1084))->mPointerNum;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 40, 1085)), "sType_clone", 40, 1086))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1087)), "sType_clone", 40, 1088))->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 41, 1089)), "sType_clone", 41, 1090))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1091)), "sType_clone", 41, 1092))->mNoArrayPointerNum;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 42, 1093)), "sType_clone", 42, 1094))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1095)), "sType_clone", 42, 1096))->mTypedefOriginalPointerNum;
        }
        if(_if_conditional98=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1097)), "sType_clone", 43, 1098))->mSizeNum!=((void*)0),        _if_conditional98) {
            __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1099)), "sType_clone", 43, 1100))->mSizeNum;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 43, 1099)), "sType_clone", 43, 1100))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=(come_push_stackframe("sType_clone", 43, 1103),__exception_result_var_b73=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1101)), "sType_clone", 43, 1102))->mSizeNum), come_pop_stackframe(), __exception_result_var_b73))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 44, 1104)), "sType_clone", 44, 1105))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1106)), "sType_clone", 44, 1107))->mDynamicArrayNum;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 45, 1108)), "sType_clone", 45, 1109))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1110)), "sType_clone", 45, 1111))->mTypeOfExpression;
        }
        if(_if_conditional101=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1112)), "sType_clone", 46, 1113))->mOriginalTypeName!=((void*)0),        _if_conditional101) {
            __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1114)), "sType_clone", 46, 1115))->mOriginalTypeName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 46, 1114)), "sType_clone", 46, 1115))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=(come_push_stackframe("sType_clone", 46, 1118),__exception_result_var_b74=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1116)), "sType_clone", 46, 1117))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b74))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 47, 1119)), "sType_clone", 47, 1120))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1121)), "sType_clone", 47, 1122))->mOriginalPointerNum;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 48, 1123)), "sType_clone", 48, 1124))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1125)), "sType_clone", 48, 1126))->mFunctionParam;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 49, 1127)), "sType_clone", 49, 1128))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1129)), "sType_clone", 49, 1130))->mAllocaValue;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 50, 1131)), "sType_clone", 50, 1132))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1133)), "sType_clone", 50, 1134))->mGenericsStruct;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 51, 1135)), "sType_clone", 51, 1136))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1137)), "sType_clone", 51, 1138))->mSolvedGenericsName;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 52, 1139)), "sType_clone", 52, 1140))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1141)), "sType_clone", 52, 1142))->mComeMemCore;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 53, 1143)), "sType_clone", 53, 1144))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1145)), "sType_clone", 53, 1146))->mInline;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 54, 1147)), "sType_clone", 54, 1148))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1149)), "sType_clone", 54, 1150))->mNullValue;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 55, 1151)), "sType_clone", 55, 1152))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1153)), "sType_clone", 55, 1154))->mGuardValue;
        }
        if(_if_conditional111=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1155)), "sType_clone", 56, 1156))->mAsmName!=((void*)0),        _if_conditional111) {
            __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1157)), "sType_clone", 56, 1158))->mAsmName;
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 56, 1157)), "sType_clone", 56, 1158))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=(come_push_stackframe("sType_clone", 56, 1161),__exception_result_var_b75=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1159)), "sType_clone", 56, 1160))->mAsmName), come_pop_stackframe(), __exception_result_var_b75))));
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 57, 1162)), "sType_clone", 57, 1163))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1164)), "sType_clone", 57, 1165))->mArrayPointerType;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 58, 1166)), "sType_clone", 58, 1167))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1168)), "sType_clone", 58, 1169))->mLambdaArray;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            ((struct sType*)come_null_check(((struct sType*)come_null_check(result_47, "sType_clone", 59, 1170)), "sType_clone", 59, 1171))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1172)), "sType_clone", 59, 1173))->mNoNumberArray;
        }
        __result69__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 585)), "sType_finalize", 0, 586))->mMultipleTypes!=((void*)0),            _if_conditional21) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 587)), "sType_finalize", 0, 588))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 597)), "sType_finalize", 1, 598))->mNoSolvedGenericsType!=((void*)0),            _if_conditional23) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 599)), "sType_finalize", 1, 600))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 605)), "sType_finalize", 2, 606))->mOriginalLoadVarType!=((void*)0),            _if_conditional25) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 607)), "sType_finalize", 2, 608))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 609)), "sType_finalize", 3, 610))->mGenericsName!=((void*)0),            _if_conditional26) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 611)), "sType_finalize", 3, 612))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 611)), "sType_finalize", 3, 612))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 613)), "sType_finalize", 4, 614))->mGenericsTypes!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 615)), "sType_finalize", 4, 616))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 617)), "sType_finalize", 5, 618))->mArrayNum!=((void*)0),            _if_conditional28) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 619)), "sType_finalize", 5, 620))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 629)), "sType_finalize", 6, 630))->mParamTypes!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 631)), "sType_finalize", 6, 632))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 633)), "sType_finalize", 7, 634))->mParamNames!=((void*)0),            _if_conditional31) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 635)), "sType_finalize", 7, 636))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 645)), "sType_finalize", 8, 646))->mResultType!=((void*)0),            _if_conditional33) {
                come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 647)), "sType_finalize", 8, 648))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 649)), "sType_finalize", 9, 650))->mAlignas!=((void*)0),            _if_conditional34) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 651)), "sType_finalize", 9, 652))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 651)), "sType_finalize", 9, 652))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 651)), "sType_finalize", 9, 652))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 651)), "sType_finalize", 9, 652))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 651)), "sType_finalize", 9, 652))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 653)), "sType_finalize", 10, 654))->mSizeNum!=((void*)0),            _if_conditional35) {
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 655)), "sType_finalize", 10, 656))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 655)), "sType_finalize", 10, 656))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 655)), "sType_finalize", 10, 656))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 655)), "sType_finalize", 10, 656))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 655)), "sType_finalize", 10, 656))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 657)), "sType_finalize", 11, 658))->mOriginalTypeName!=((void*)0),            _if_conditional36) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 659)), "sType_finalize", 11, 660))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 659)), "sType_finalize", 11, 660))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 661)), "sType_finalize", 12, 662))->mAsmName!=((void*)0),            _if_conditional37) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 663)), "sType_finalize", 12, 664))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 663)), "sType_finalize", 12, 664))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                    it_48=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 589)), "./neo-c.h", 120, 590))->head;
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_48, "./neo-c.h", 123, 591)), "./neo-c.h", 123, 592))->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional22=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 593)), "list_item$1sTypephp_finalize", 0, 594))->item!=((void*)0),                            _if_conditional22) {
                                come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 595)), "list_item$1sTypephp_finalize", 0, 596))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional24=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 601)), "tuple1$1sTypephp_finalize", 0, 602))->v1!=((void*)0),                    _if_conditional24) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 603)), "tuple1$1sTypephp_finalize", 0, 604))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                    it_50=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 621)), "./neo-c.h", 120, 622))->head;
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        prev_it_51=it_50;
                        it_50=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_50, "./neo-c.h", 123, 623)), "./neo-c.h", 123, 624))->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional29=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 625)), "list_item$1sNodephp_finalize", 0, 626))->item!=((void*)0),                            _if_conditional29) {
                                if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 627)), "list_item$1sNodephp_finalize", 0, 628))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 627)), "list_item$1sNodephp_finalize", 0, 628))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 627)), "list_item$1sNodephp_finalize", 0, 628))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 627)), "list_item$1sNodephp_finalize", 0, 628))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 627)), "list_item$1sNodephp_finalize", 0, 628))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                    it_52=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 637)), "./neo-c.h", 120, 638))->head;
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        prev_it_53=it_52;
                        it_52=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_52, "./neo-c.h", 123, 639)), "./neo-c.h", 123, 640))->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional32=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 641)), "list_item$1charphp_finalize", 0, 642))->item!=((void*)0),                            _if_conditional32) {
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 643)), "list_item$1charphp_finalize", 0, 644))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 643)), "list_item$1charphp_finalize", 0, 644))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional40;
struct list$1sTypeph* __result53__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* __exception_result_var_b53;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
struct sType* __exception_result_var_b54;
void* right_value87;
struct list$1sTypeph* __exception_result_var_b55;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                if(_if_conditional40=self==((void*)0),                _if_conditional40) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 683),__exception_result_var_b53=((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 675)), "./neo-c.h", 139, 676)))))), come_pop_stackframe(), __exception_result_var_b53));
                come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 684)), "./neo-c.h", 141, 685))->head;
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    (come_push_stackframe("./neo-c.h", 143, 735),__exception_result_var_b55=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_54, "./neo-c.h", 143, 686)), "./neo-c.h", 143, 687)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=(come_push_stackframe("./neo-c.h", 143, 734),__exception_result_var_b54=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 143, 732)), "./neo-c.h", 143, 733))->item), come_pop_stackframe(), __exception_result_var_b54))))), come_pop_stackframe(), __exception_result_var_b55);
                    come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_55, "./neo-c.h", 145, 736)), "./neo-c.h", 145, 737))->next;
                }
                __result56__ = __result_obj__ = result_54;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result56__;
                come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 677)), "./neo-c.h", 101, 678))->head=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 679)), "./neo-c.h", 102, 680))->tail=((void*)0);
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 681)), "./neo-c.h", 103, 682))->len=0;
                    __result54__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result54__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional41;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional42;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional41=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 688)), "./neo-c.h", 152, 689))->len==0,                        _if_conditional41) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 155, 690)), "./neo-c.h", 155, 691))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 156, 692)), "./neo-c.h", 156, 693))->next=((void*)0);
                            __dec_obj13=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 694)), "./neo-c.h", 157, 695))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_56, "./neo-c.h", 157, 694)), "./neo-c.h", 157, 695))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 696)), "./neo-c.h", 159, 697))->tail=litem_56;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 698)), "./neo-c.h", 160, 699))->head=litem_56;
                        }
                        else {
                            if(_if_conditional42=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 700)), "./neo-c.h", 162, 701))->len==1,                            _if_conditional42) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 165, 702)), "./neo-c.h", 165, 703))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 704)), "./neo-c.h", 165, 705))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 166, 706)), "./neo-c.h", 166, 707))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 708)), "./neo-c.h", 167, 709))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_57, "./neo-c.h", 167, 708)), "./neo-c.h", 167, 709))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 710)), "./neo-c.h", 169, 711))->tail=litem_57;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 712)), "./neo-c.h", 170, 713))->head, "./neo-c.h", 170, 714)), "./neo-c.h", 170, 715))->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 175, 716)), "./neo-c.h", 175, 717))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 718)), "./neo-c.h", 175, 719))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 176, 720)), "./neo-c.h", 176, 721))->next=((void*)0);
                                __dec_obj15=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 722)), "./neo-c.h", 177, 723))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 177, 722)), "./neo-c.h", 177, 723))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 724)), "./neo-c.h", 179, 725))->tail, "./neo-c.h", 179, 726)), "./neo-c.h", 179, 727))->next=litem_58;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 728)), "./neo-c.h", 180, 729))->tail=litem_58;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 730)), "./neo-c.h", 183, 731))->len++;
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
                it_59=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 739)), "./neo-c.h", 120, 740))->head;
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_59, "./neo-c.h", 123, 741)), "./neo-c.h", 123, 742))->next;
                    come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct tuple1$1sTypeph* __result57__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional46;
struct sType* __exception_result_var_b57;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                if(_if_conditional44=self==(void*)0,                _if_conditional44) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional46=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 753)), "tuple1$1sTypephp_clone", 4, 754))->v1!=((void*)0),                _if_conditional46) {
                    __dec_obj17=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 755)), "tuple1$1sTypephp_clone", 4, 756))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_61, "tuple1$1sTypephp_clone", 4, 755)), "tuple1$1sTypephp_clone", 4, 756))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 759),__exception_result_var_b57=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 757)), "tuple1$1sTypephp_clone", 4, 758))->v1), come_pop_stackframe(), __exception_result_var_b57))));
                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value90,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional45=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 749)), "tuple1$1sTypeph_finalize", 0, 750))->v1!=((void*)0),                    _if_conditional45) {
                        come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 751)), "tuple1$1sTypeph_finalize", 0, 752))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional51;
struct list$1sNodeph* __result59__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* __exception_result_var_b62;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b63;
void* right_value101;
struct list$1sNodeph* __exception_result_var_b64;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                if(_if_conditional51=self==((void*)0),                _if_conditional51) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 796),__exception_result_var_b62=((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 788)), "./neo-c.h", 139, 789)))))), come_pop_stackframe(), __exception_result_var_b62));
                come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 797)), "./neo-c.h", 141, 798))->head;
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    (come_push_stackframe("./neo-c.h", 143, 882),__exception_result_var_b64=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_62, "./neo-c.h", 143, 799)), "./neo-c.h", 143, 800)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(come_push_stackframe("./neo-c.h", 143, 881),__exception_result_var_b63=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 143, 845)), "./neo-c.h", 143, 846))->item), come_pop_stackframe(), __exception_result_var_b63))))), come_pop_stackframe(), __exception_result_var_b64);
                    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_63=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_63, "./neo-c.h", 145, 883)), "./neo-c.h", 145, 884))->next;
                }
                __result64__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
                come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 790)), "./neo-c.h", 101, 791))->head=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 792)), "./neo-c.h", 102, 793))->tail=((void*)0);
                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 794)), "./neo-c.h", 103, 795))->len=0;
                    __result60__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional52;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional53;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 801)), "./neo-c.h", 152, 802))->len==0,                        _if_conditional52) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 155, 803)), "./neo-c.h", 155, 804))->prev=((void*)0);
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 156, 805)), "./neo-c.h", 156, 806))->next=((void*)0);
                            __dec_obj22=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 807)), "./neo-c.h", 157, 808))->item;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_64, "./neo-c.h", 157, 807)), "./neo-c.h", 157, 808))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 809)), "./neo-c.h", 159, 810))->tail=litem_64;
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 811)), "./neo-c.h", 160, 812))->head=litem_64;
                        }
                        else {
                            if(_if_conditional53=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 813)), "./neo-c.h", 162, 814))->len==1,                            _if_conditional53) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 165, 815)), "./neo-c.h", 165, 816))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 817)), "./neo-c.h", 165, 818))->head;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 166, 819)), "./neo-c.h", 166, 820))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 821)), "./neo-c.h", 167, 822))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_65, "./neo-c.h", 167, 821)), "./neo-c.h", 167, 822))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 823)), "./neo-c.h", 169, 824))->tail=litem_65;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 825)), "./neo-c.h", 170, 826))->head, "./neo-c.h", 170, 827)), "./neo-c.h", 170, 828))->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 175, 829)), "./neo-c.h", 175, 830))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 831)), "./neo-c.h", 175, 832))->tail;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 176, 833)), "./neo-c.h", 176, 834))->next=((void*)0);
                                __dec_obj24=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 835)), "./neo-c.h", 177, 836))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 177, 835)), "./neo-c.h", 177, 836))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 837)), "./neo-c.h", 179, 838))->tail, "./neo-c.h", 179, 839)), "./neo-c.h", 179, 840))->next=litem_66;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 841)), "./neo-c.h", 180, 842))->tail=litem_66;
                            }
                        }
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 843)), "./neo-c.h", 183, 844))->len++;
                        __result61__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result61__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional54;
struct sNode* __result62__;
void* right_value100;
struct sNode* result_67;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                        if(_if_conditional54=self==(void*)0,                        _if_conditional54) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional55=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 847)), "sNode_clone", 4, 848))->clone!=((void*)0),                        _if_conditional55) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 4, 849)), "sNode_clone", 4, 850))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 851)), "sNode_clone", 4, 852))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 851)), "sNode_clone", 4, 852))->_protocol_obj);
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 5, 853)), "sNode_clone", 5, 854))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 855)), "sNode_clone", 5, 856))->finalize;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 6, 857)), "sNode_clone", 6, 858))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 859)), "sNode_clone", 6, 860))->clone;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 7, 861)), "sNode_clone", 7, 862))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 863)), "sNode_clone", 7, 864))->compile;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 8, 865)), "sNode_clone", 8, 866))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 867)), "sNode_clone", 8, 868))->sline;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 9, 869)), "sNode_clone", 9, 870))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 871)), "sNode_clone", 9, 872))->sname;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 10, 873)), "sNode_clone", 10, 874))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 875)), "sNode_clone", 10, 876))->terminated;
                        }
                        if(_if_conditional62=self!=((void*)0),                        _if_conditional62) {
                            ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_67, "sNode_clone", 11, 877)), "sNode_clone", 11, 878))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 879)), "sNode_clone", 11, 880))->kind;
                        }
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
                it_68=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 886)), "./neo-c.h", 120, 887))->head;
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    prev_it_69=it_68;
                    it_68=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_68, "./neo-c.h", 123, 888)), "./neo-c.h", 123, 889))->next;
                    come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional66;
struct list$1charph* __result65__;
void* right_value104;
void* right_value105;
struct list$1charph* __exception_result_var_b67;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
char* __exception_result_var_b68;
void* right_value109;
struct list$1charph* __exception_result_var_b69;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                if(_if_conditional66=self==((void*)0),                _if_conditional66) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 915),__exception_result_var_b67=((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 907)), "./neo-c.h", 139, 908)))))), come_pop_stackframe(), __exception_result_var_b67));
                come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 916)), "./neo-c.h", 141, 917))->head;
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    (come_push_stackframe("./neo-c.h", 143, 967),__exception_result_var_b69=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_70, "./neo-c.h", 143, 918)), "./neo-c.h", 143, 919)),(char*)come_increment_ref_count(((char*)(right_value109=(come_push_stackframe("./neo-c.h", 143, 966),__exception_result_var_b68=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 143, 964)), "./neo-c.h", 143, 965))->item), come_pop_stackframe(), __exception_result_var_b68))))), come_pop_stackframe(), __exception_result_var_b69);
                    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_71=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_71, "./neo-c.h", 145, 968)), "./neo-c.h", 145, 969))->next;
                }
                __result68__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result68__;
                come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 909)), "./neo-c.h", 101, 910))->head=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 911)), "./neo-c.h", 102, 912))->tail=((void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 913)), "./neo-c.h", 103, 914))->len=0;
                    __result66__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional67;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional68;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
struct list$1charph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional67=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 920)), "./neo-c.h", 152, 921))->len==0,                        _if_conditional67) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                            come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 155, 922)), "./neo-c.h", 155, 923))->prev=((void*)0);
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 156, 924)), "./neo-c.h", 156, 925))->next=((void*)0);
                            __dec_obj27=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 926)), "./neo-c.h", 157, 927))->item;
                            ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_72, "./neo-c.h", 157, 926)), "./neo-c.h", 157, 927))->item=(char*)come_increment_ref_count(item);
                            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 928)), "./neo-c.h", 159, 929))->tail=litem_72;
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 930)), "./neo-c.h", 160, 931))->head=litem_72;
                        }
                        else {
                            if(_if_conditional68=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 932)), "./neo-c.h", 162, 933))->len==1,                            _if_conditional68) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 165, 934)), "./neo-c.h", 165, 935))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 936)), "./neo-c.h", 165, 937))->head;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 166, 938)), "./neo-c.h", 166, 939))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 940)), "./neo-c.h", 167, 941))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_73, "./neo-c.h", 167, 940)), "./neo-c.h", 167, 941))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 942)), "./neo-c.h", 169, 943))->tail=litem_73;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 944)), "./neo-c.h", 170, 945))->head, "./neo-c.h", 170, 946)), "./neo-c.h", 170, 947))->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 175, 948)), "./neo-c.h", 175, 949))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 950)), "./neo-c.h", 175, 951))->tail;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 176, 952)), "./neo-c.h", 176, 953))->next=((void*)0);
                                __dec_obj29=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 954)), "./neo-c.h", 177, 955))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 177, 954)), "./neo-c.h", 177, 955))->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 956)), "./neo-c.h", 179, 957))->tail, "./neo-c.h", 179, 958)), "./neo-c.h", 179, 959))->next=litem_74;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 960)), "./neo-c.h", 180, 961))->tail=litem_74;
                            }
                        }
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 962)), "./neo-c.h", 183, 963))->len++;
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
                it_75=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 971)), "./neo-c.h", 120, 972))->head;
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    prev_it_76=it_75;
                    it_75=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_75, "./neo-c.h", 123, 973)), "./neo-c.h", 123, 974))->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional115;
struct list$1tuple3$3sTypephcharphsNodephph* __result70__;
void* right_value118;
void* right_value119;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b78;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
_Bool _while_condtional17;
struct tuple3$3sTypephcharphsNodeph* __exception_result_var_b82;
void* right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b83;
struct list$1tuple3$3sTypephcharphsNodephph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value127 = (void*)0;
        if(_if_conditional115=self==((void*)0),        _if_conditional115) {
            __result70__ = __result_obj__ = ((void*)0);
            return __result70__;
        }
        result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1209),__exception_result_var_b78=((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value119=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 139, "list$1tuple3$3sTypephcharphsNodephph"))), "./neo-c.h", 139, 1181)), "./neo-c.h", 139, 1182)))))), come_pop_stackframe(), __exception_result_var_b78));
        come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value119,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_80=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 141, 1210)), "./neo-c.h", 141, 1211))->head;
        while(_while_condtional17=it_80!=((void*)0),        _while_condtional17) {
            (come_push_stackframe("./neo-c.h", 143, 1330),__exception_result_var_b83=list$1tuple3$3sTypephcharphsNodephph_add(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(result_79, "./neo-c.h", 143, 1212)), "./neo-c.h", 143, 1213)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value127=(come_push_stackframe("./neo-c.h", 143, 1329),__exception_result_var_b82=tuple3$3sTypephcharphsNodephp_clone(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_80, "./neo-c.h", 143, 1294)), "./neo-c.h", 143, 1295))->item), come_pop_stackframe(), __exception_result_var_b82))))), come_pop_stackframe(), __exception_result_var_b83);
            come_call_finalizer3(right_value127,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_80=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_80, "./neo-c.h", 145, 1331)), "./neo-c.h", 145, 1332))->next;
        }
        __result75__ = __result_obj__ = result_79;
        come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result75__;
        come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list$1tuple3$3sTypephcharphsNodephph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 101, 1183)), "./neo-c.h", 101, 1184))->head=((void*)0);
            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 102, 1185)), "./neo-c.h", 102, 1186))->tail=((void*)0);
            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 103, 1187)), "./neo-c.h", 103, 1188))->len=0;
            __result71__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_77;
_Bool _while_condtional16;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                it_77=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 120, 1189)), "./neo-c.h", 120, 1190))->head;
                while(_while_condtional16=it_77!=((void*)0),                _while_condtional16) {
                    prev_it_78=it_77;
                    it_77=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_77, "./neo-c.h", 123, 1191)), "./neo-c.h", 123, 1192))->next;
                    come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional116;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional116=self!=((void*)0)&&((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0, 1193)), "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0, 1194))->item!=((void*)0),                        _if_conditional116) {
                            come_call_finalizer3(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0, 1195)), "list_item$1tuple3$3sTypephcharphsNodephphp_finalize", 0, 1196))->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional120;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj39;
_Bool _if_conditional124;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj40;
void* right_value122;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
struct list$1tuple3$3sTypephcharphsNodephph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                if(_if_conditional120=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 152, 1214)), "./neo-c.h", 152, 1215))->len==0,                _if_conditional120) {
                    litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 153, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                    come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_81, "./neo-c.h", 155, 1216)), "./neo-c.h", 155, 1217))->prev=((void*)0);
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_81, "./neo-c.h", 156, 1218)), "./neo-c.h", 156, 1219))->next=((void*)0);
                    __dec_obj39=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_81, "./neo-c.h", 157, 1220)), "./neo-c.h", 157, 1221))->item;
                    ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_81, "./neo-c.h", 157, 1220)), "./neo-c.h", 157, 1221))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj39,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 159, 1234)), "./neo-c.h", 159, 1235))->tail=litem_81;
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 160, 1236)), "./neo-c.h", 160, 1237))->head=litem_81;
                }
                else {
                    if(_if_conditional124=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 162, 1238)), "./neo-c.h", 162, 1239))->len==1,                    _if_conditional124) {
                        litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 163, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_82, "./neo-c.h", 165, 1240)), "./neo-c.h", 165, 1241))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 165, 1242)), "./neo-c.h", 165, 1243))->head;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_82, "./neo-c.h", 166, 1244)), "./neo-c.h", 166, 1245))->next=((void*)0);
                        __dec_obj40=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_82, "./neo-c.h", 167, 1246)), "./neo-c.h", 167, 1247))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_82, "./neo-c.h", 167, 1246)), "./neo-c.h", 167, 1247))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj40,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 169, 1260)), "./neo-c.h", 169, 1261))->tail=litem_82;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 170, 1262)), "./neo-c.h", 170, 1263))->head, "./neo-c.h", 170, 1264)), "./neo-c.h", 170, 1265))->next=litem_82;
                    }
                    else {
                        litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value122=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 173, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value122,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_83, "./neo-c.h", 175, 1266)), "./neo-c.h", 175, 1267))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 175, 1268)), "./neo-c.h", 175, 1269))->tail;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_83, "./neo-c.h", 176, 1270)), "./neo-c.h", 176, 1271))->next=((void*)0);
                        __dec_obj41=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_83, "./neo-c.h", 177, 1272)), "./neo-c.h", 177, 1273))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_83, "./neo-c.h", 177, 1272)), "./neo-c.h", 177, 1273))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 179, 1286)), "./neo-c.h", 179, 1287))->tail, "./neo-c.h", 179, 1288)), "./neo-c.h", 179, 1289))->next=litem_83;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 180, 1290)), "./neo-c.h", 180, 1291))->tail=litem_83;
                    }
                }
                ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 183, 1292)), "./neo-c.h", 183, 1293))->len++;
                __result72__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional128=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0, 1274)), "tuple3$3sTypephcharphsNodephp_finalize", 0, 1275))->v1!=((void*)0),                            _if_conditional128) {
                                come_call_finalizer3(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 0, 1276)), "tuple3$3sTypephcharphsNodephp_finalize", 0, 1277))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional129=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1, 1278)), "tuple3$3sTypephcharphsNodephp_finalize", 1, 1279))->v2!=((void*)0),                            _if_conditional129) {
                                ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1, 1280)), "tuple3$3sTypephcharphsNodephp_finalize", 1, 1281))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 1, 1280)), "tuple3$3sTypephcharphsNodephp_finalize", 1, 1281))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional130=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1282)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1283))->v3!=((void*)0),                            _if_conditional130) {
                                if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1284)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1285))->v3) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1284)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1285))->v3 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1284)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1285))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1284)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1285))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_finalize", 2, 1284)), "tuple3$3sTypephcharphsNodephp_finalize", 2, 1285))->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional131;
struct tuple3$3sTypephcharphsNodeph* __result73__;
void* right_value123;
struct tuple3$3sTypephcharphsNodeph* result_84;
_Bool _if_conditional135;
struct sType* __exception_result_var_b79;
void* right_value124;
struct sType* __dec_obj42;
_Bool _if_conditional136;
char* __exception_result_var_b80;
void* right_value125;
char* __dec_obj43;
_Bool _if_conditional137;
struct sNode* __exception_result_var_b81;
void* right_value126;
struct sNode* __dec_obj44;
struct tuple3$3sTypephcharphsNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
                if(_if_conditional131=self==(void*)0,                _if_conditional131) {
                    __result73__ = __result_obj__ = (void*)0;
                    return __result73__;
                }
                result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value123=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                come_call_finalizer3(right_value123,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional135=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 4, 1308)), "tuple3$3sTypephcharphsNodephp_clone", 4, 1309))->v1!=((void*)0),                _if_conditional135) {
                    __dec_obj42=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 4, 1310)), "tuple3$3sTypephcharphsNodephp_clone", 4, 1311))->v1;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 4, 1310)), "tuple3$3sTypephcharphsNodephp_clone", 4, 1311))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=(come_push_stackframe("tuple3$3sTypephcharphsNodephp_clone", 4, 1314),__exception_result_var_b79=sType_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 4, 1312)), "tuple3$3sTypephcharphsNodephp_clone", 4, 1313))->v1), come_pop_stackframe(), __exception_result_var_b79))));
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional136=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5, 1315)), "tuple3$3sTypephcharphsNodephp_clone", 5, 1316))->v2!=((void*)0),                _if_conditional136) {
                    __dec_obj43=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 5, 1317)), "tuple3$3sTypephcharphsNodephp_clone", 5, 1318))->v2;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 5, 1317)), "tuple3$3sTypephcharphsNodephp_clone", 5, 1318))->v2=(char*)come_increment_ref_count(((char*)(right_value125=(come_push_stackframe("tuple3$3sTypephcharphsNodephp_clone", 5, 1321),__exception_result_var_b80=string_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 5, 1319)), "tuple3$3sTypephcharphsNodephp_clone", 5, 1320))->v2), come_pop_stackframe(), __exception_result_var_b80))));
                    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional137=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6, 1322)), "tuple3$3sTypephcharphsNodephp_clone", 6, 1323))->v3!=((void*)0),                _if_conditional137) {
                    __dec_obj44=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 6, 1324)), "tuple3$3sTypephcharphsNodephp_clone", 6, 1325))->v3;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(result_84, "tuple3$3sTypephcharphsNodephp_clone", 6, 1324)), "tuple3$3sTypephcharphsNodephp_clone", 6, 1325))->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=(come_push_stackframe("tuple3$3sTypephcharphsNodephp_clone", 6, 1328),__exception_result_var_b81=sNode_clone(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodephp_clone", 6, 1326)), "tuple3$3sTypephcharphsNodephp_clone", 6, 1327))->v3), come_pop_stackframe(), __exception_result_var_b81))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result74__ = __result_obj__ = result_84;
                come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional132=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0, 1296)), "tuple3$3sTypephcharphsNodeph_finalize", 0, 1297))->v1!=((void*)0),                    _if_conditional132) {
                        come_call_finalizer3(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 0, 1298)), "tuple3$3sTypephcharphsNodeph_finalize", 0, 1299))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional133=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1, 1300)), "tuple3$3sTypephcharphsNodeph_finalize", 1, 1301))->v2!=((void*)0),                    _if_conditional133) {
                        ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1, 1302)), "tuple3$3sTypephcharphsNodeph_finalize", 1, 1303))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 1, 1302)), "tuple3$3sTypephcharphsNodeph_finalize", 1, 1303))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional134=self!=((void*)0)&&((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1304)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1305))->v3!=((void*)0),                    _if_conditional134) {
                        if(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1306)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1307))->v3) { ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1306)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1307))->v3 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1306)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1307))->v3, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1306)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1307))->v3)->finalize, ((struct sNode*)((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "tuple3$3sTypephcharphsNodeph_finalize", 2, 1306)), "tuple3$3sTypephcharphsNodeph_finalize", 2, 1307))->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_85;
_Bool _while_condtional18;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_85, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
        it_85=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 120, 1334)), "./neo-c.h", 120, 1335))->head;
        while(_while_condtional18=it_85!=((void*)0),        _while_condtional18) {
            prev_it_86=it_85;
            it_85=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(it_85, "./neo-c.h", 123, 1336)), "./neo-c.h", 123, 1337))->next;
            come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_88;
void* __exception_result_var_b86;
unsigned int __exception_result_var_b87;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional19;
_Bool _if_conditional145;
_Bool __exception_result_var_b88;
_Bool _if_conditional146;
struct sVar* __result78__;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct sVar* __result79__;
struct sVar* __result80__;
struct sVar* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sVar*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            (come_push_stackframe("./neo-c.h", 1526, 1371),__exception_result_var_b86=memset(&default_value_88,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b86);
            hash_89=(come_push_stackframe("./neo-c.h", 1528, 1374),__exception_result_var_b87=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 1372)), "./neo-c.h", 1528, 1373))), come_pop_stackframe(), __exception_result_var_b87)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1528, 1375)), "./neo-c.h", 1528, 1376))->size;
            it_90=hash_89;
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                if(_if_conditional145=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1532, 1377)), "./neo-c.h", 1532, 1378))->item_existance, "./neo-c.h", 1532, 1379))[it_90],                _if_conditional145) {
                    if(_if_conditional146=(come_push_stackframe("./neo-c.h", 1534, 1385),__exception_result_var_b88=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1534, 1380)), "./neo-c.h", 1534, 1381))->keys, "./neo-c.h", 1534, 1382))[it_90], "./neo-c.h", 1534, 1383)), "./neo-c.h", 1534, 1384)),key), come_pop_stackframe(), __exception_result_var_b88),                    _if_conditional146) {
                        __result78__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1536, 1386)), "./neo-c.h", 1536, 1387))->items, "./neo-c.h", 1536, 1388))[it_90];
                        come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result78__;
                    }
                    it_90++;
                    if(_if_conditional151=it_90>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1541, 1405)), "./neo-c.h", 1541, 1406))->size,                    _if_conditional151) {
                        it_90=0;
                    }
                    else {
                        if(_if_conditional152=it_90==hash_89,                        _if_conditional152) {
                            __result79__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                        }
                    }
                }
                else {
                    __result80__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                }
            }
            __result81__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result81__;
            come_call_finalizer3(default_value_88,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional147=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1389)), "sVar_finalize", 0, 1390))->mName!=((void*)0),                            _if_conditional147) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1391)), "sVar_finalize", 0, 1392))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 1391)), "sVar_finalize", 0, 1392))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional148=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1393)), "sVar_finalize", 1, 1394))->mCValueName!=((void*)0),                            _if_conditional148) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1395)), "sVar_finalize", 1, 1396))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 1395)), "sVar_finalize", 1, 1396))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional149=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 1397)), "sVar_finalize", 2, 1398))->mType!=((void*)0),                            _if_conditional149) {
                                come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 1399)), "sVar_finalize", 2, 1400))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional150=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1401)), "sVar_finalize", 3, 1402))->mFunName!=((void*)0),                            _if_conditional150) {
                                ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1403)), "sVar_finalize", 3, 1404))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 1403)), "sVar_finalize", 3, 1404))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional155;
struct tuple3$3sTypephcharphsNodeph* result_93;
void* __exception_result_var_b91;
struct tuple3$3sTypephcharphsNodeph* __result84__;
_Bool _if_conditional156;
struct tuple3$3sTypephcharphsNodeph* __result85__;
struct tuple3$3sTypephcharphsNodeph* result_94;
void* __exception_result_var_b92;
struct tuple3$3sTypephcharphsNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_94, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(_if_conditional155=self==((void*)0),            _if_conditional155) {
                (come_push_stackframe("./neo-c.h", 284, 1427),__exception_result_var_b91=memset(&result_93,0,sizeof(struct tuple3$3sTypephcharphsNodeph*)), come_pop_stackframe(), __exception_result_var_b91);
                __result84__ = __result_obj__ = result_93;
                return __result84__;
            }
            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 287, 1428)), "./neo-c.h", 287, 1429))->it=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 287, 1430)), "./neo-c.h", 287, 1431))->head;
            if(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 289, 1432)), "./neo-c.h", 289, 1433))->it) {
                __result85__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 290, 1434)), "./neo-c.h", 290, 1435))->it, "./neo-c.h", 290, 1436)), "./neo-c.h", 290, 1437))->item;
                return __result85__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1438),__exception_result_var_b92=memset(&result_94,0,sizeof(struct tuple3$3sTypephcharphsNodeph*)), come_pop_stackframe(), __exception_result_var_b92);
            __result86__ = __result_obj__ = result_94;
            return __result86__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
            __result87__ = self==((void*)0)||((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 317, 1442)), "./neo-c.h", 317, 1443))->it==((void*)0);
            return __result87__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional157;
struct tuple3$3sTypephcharphsNodeph* result_96;
void* __exception_result_var_b95;
struct tuple3$3sTypephcharphsNodeph* __result88__;
_Bool _if_conditional158;
struct tuple3$3sTypephcharphsNodeph* __result89__;
struct tuple3$3sTypephcharphsNodeph* result_97;
void* __exception_result_var_b96;
struct tuple3$3sTypephcharphsNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_97, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(_if_conditional157=self==((void*)0)||((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 299, 1447)), "./neo-c.h", 299, 1448))->it==((void*)0),            _if_conditional157) {
                (come_push_stackframe("./neo-c.h", 301, 1449),__exception_result_var_b95=memset(&result_96,0,sizeof(struct tuple3$3sTypephcharphsNodeph*)), come_pop_stackframe(), __exception_result_var_b95);
                __result88__ = __result_obj__ = result_96;
                return __result88__;
            }
            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 305, 1450)), "./neo-c.h", 305, 1451))->it=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 305, 1452)), "./neo-c.h", 305, 1453))->it, "./neo-c.h", 305, 1454)), "./neo-c.h", 305, 1455))->next;
            if(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 307, 1456)), "./neo-c.h", 307, 1457))->it) {
                __result89__ = __result_obj__ = ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 308, 1458)), "./neo-c.h", 308, 1459))->it, "./neo-c.h", 308, 1460)), "./neo-c.h", 308, 1461))->item;
                return __result89__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1462),__exception_result_var_b96=memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*)), come_pop_stackframe(), __exception_result_var_b96);
            __result90__ = __result_obj__ = result_97;
            return __result90__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional162;
_Bool _if_conditional163;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional162=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1475)), "CVALUE_finalize", 0, 1476))->c_value!=((void*)0),                    _if_conditional162) {
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1477)), "CVALUE_finalize", 0, 1478))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1477)), "CVALUE_finalize", 0, 1478))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional163=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1479)), "CVALUE_finalize", 1, 1480))->type!=((void*)0),                    _if_conditional163) {
                        come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1481)), "CVALUE_finalize", 1, 1482))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional167;
char* result_107;
void* __exception_result_var_b107;
char* __result94__;
_Bool _if_conditional168;
char* __result95__;
char* result_108;
void* __exception_result_var_b108;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
memset(&result_108, 0, sizeof(char*));
                if(_if_conditional167=self==((void*)0),                _if_conditional167) {
                    (come_push_stackframe("./neo-c.h", 284, 1515),__exception_result_var_b107=memset(&result_107,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b107);
                    __result94__ = __result_obj__ = result_107;
                    return __result94__;
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 1516)), "./neo-c.h", 287, 1517))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 1518)), "./neo-c.h", 287, 1519))->head;
                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 1520)), "./neo-c.h", 289, 1521))->it) {
                    __result95__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 1522)), "./neo-c.h", 290, 1523))->it, "./neo-c.h", 290, 1524)), "./neo-c.h", 290, 1525))->item;
                    return __result95__;
                }
                (come_push_stackframe("./neo-c.h", 294, 1526),__exception_result_var_b108=memset(&result_108,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b108);
                __result96__ = __result_obj__ = result_108;
                return __result96__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                __result97__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 1530)), "./neo-c.h", 317, 1531))->it==((void*)0);
                return __result97__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional169;
char* result_110;
void* __exception_result_var_b111;
char* __result98__;
_Bool _if_conditional170;
char* __result99__;
char* result_111;
void* __exception_result_var_b112;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
memset(&result_111, 0, sizeof(char*));
                if(_if_conditional169=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 1535)), "./neo-c.h", 299, 1536))->it==((void*)0),                _if_conditional169) {
                    (come_push_stackframe("./neo-c.h", 301, 1537),__exception_result_var_b111=memset(&result_110,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b111);
                    __result98__ = __result_obj__ = result_110;
                    return __result98__;
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 1538)), "./neo-c.h", 305, 1539))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 1540)), "./neo-c.h", 305, 1541))->it, "./neo-c.h", 305, 1542)), "./neo-c.h", 305, 1543))->next;
                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 1544)), "./neo-c.h", 307, 1545))->it) {
                    __result99__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 1546)), "./neo-c.h", 308, 1547))->it, "./neo-c.h", 308, 1548)), "./neo-c.h", 308, 1549))->item;
                    return __result99__;
                }
                (come_push_stackframe("./neo-c.h", 312, 1550),__exception_result_var_b112=memset(&result_111,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b112);
                __result100__ = __result_obj__ = result_111;
                return __result100__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional171;
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional171=self==((void*)0),                    _if_conditional171) {
                        __result101__ = 0;
                        return __result101__;
                    }
                    __result102__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 1556)), "./neo-c.h", 360, 1557))->len;
                    return __result102__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional173;
struct list_item$1sTypeph* it_113;
int i_114;
_Bool _while_condtional20;
_Bool _if_conditional174;
struct sType* __result103__;
struct sType* default_value_115;
void* __exception_result_var_b115;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_113, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_114, 0, sizeof(int));
memset(&default_value_115, 0, sizeof(struct sType*));
                        if(_if_conditional173=position<0,                        _if_conditional173) {
                            position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1562)), "./neo-c.h", 676, 1563))->len;
                        }
                        it_113=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1564)), "./neo-c.h", 679, 1565))->head;
                        i_114=0;
                        while(_while_condtional20=it_113!=((void*)0),                        _while_condtional20) {
                            if(_if_conditional174=position==i_114,                            _if_conditional174) {
                                __result103__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_113, "./neo-c.h", 683, 1566)), "./neo-c.h", 683, 1567))->item;
                                return __result103__;
                            }
                            it_113=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_113, "./neo-c.h", 685, 1568)), "./neo-c.h", 685, 1569))->next;
                            i_114++;
                        }
                        (come_push_stackframe("./neo-c.h", 690, 1570),__exception_result_var_b115=memset(&default_value_115,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b115);
                        __result104__ = __result_obj__ = default_value_115;
                        come_call_finalizer3(default_value_115,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                        come_call_finalizer3(default_value_115,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional183;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional183=self==((void*)0),                    _if_conditional183) {
                        __result108__ = 0;
                        return __result108__;
                    }
                    __result109__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 1721)), "./neo-c.h", 360, 1722))->len;
                    return __result109__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional186;
struct sNode* result_131;
void* __exception_result_var_b147;
struct sNode* __result110__;
_Bool _if_conditional187;
struct sNode* __result111__;
struct sNode* result_132;
void* __exception_result_var_b148;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sNode*));
memset(&result_132, 0, sizeof(struct sNode*));
                            if(_if_conditional186=self==((void*)0),                            _if_conditional186) {
                                (come_push_stackframe("./neo-c.h", 284, 1738),__exception_result_var_b147=memset(&result_131,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b147);
                                __result110__ = __result_obj__ = result_131;
                                return __result110__;
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1739)), "./neo-c.h", 287, 1740))->it=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 287, 1741)), "./neo-c.h", 287, 1742))->head;
                            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 289, 1743)), "./neo-c.h", 289, 1744))->it) {
                                __result111__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 290, 1745)), "./neo-c.h", 290, 1746))->it, "./neo-c.h", 290, 1747)), "./neo-c.h", 290, 1748))->item;
                                return __result111__;
                            }
                            (come_push_stackframe("./neo-c.h", 294, 1749),__exception_result_var_b148=memset(&result_132,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b148);
                            __result112__ = __result_obj__ = result_132;
                            return __result112__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result113__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 317, 1753)), "./neo-c.h", 317, 1754))->it==((void*)0);
                            return __result113__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional188;
struct sNode* result_134;
void* __exception_result_var_b151;
struct sNode* __result114__;
_Bool _if_conditional189;
struct sNode* __result115__;
struct sNode* result_135;
void* __exception_result_var_b152;
struct sNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct sNode*));
memset(&result_135, 0, sizeof(struct sNode*));
                            if(_if_conditional188=self==((void*)0)||((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 299, 1758)), "./neo-c.h", 299, 1759))->it==((void*)0),                            _if_conditional188) {
                                (come_push_stackframe("./neo-c.h", 301, 1760),__exception_result_var_b151=memset(&result_134,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b151);
                                __result114__ = __result_obj__ = result_134;
                                return __result114__;
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1761)), "./neo-c.h", 305, 1762))->it=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 305, 1763)), "./neo-c.h", 305, 1764))->it, "./neo-c.h", 305, 1765)), "./neo-c.h", 305, 1766))->next;
                            if(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 307, 1767)), "./neo-c.h", 307, 1768))->it) {
                                __result115__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 308, 1769)), "./neo-c.h", 308, 1770))->it, "./neo-c.h", 308, 1771)), "./neo-c.h", 308, 1772))->item;
                                return __result115__;
                            }
                            (come_push_stackframe("./neo-c.h", 312, 1773),__exception_result_var_b152=memset(&result_135,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b152);
                            __result116__ = __result_obj__ = result_135;
                            return __result116__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional191;
void* right_value166;
struct list_item$1CVALUEph* litem_139;
struct CVALUE* __dec_obj54;
_Bool _if_conditional193;
void* right_value167;
struct list_item$1CVALUEph* litem_140;
struct CVALUE* __dec_obj55;
void* right_value168;
struct list_item$1CVALUEph* litem_141;
struct CVALUE* __dec_obj56;
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1CVALUEph*));
right_value167 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1CVALUEph*));
right_value168 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional191=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1809)), "./neo-c.h", 222, 1810))->len==0,                    _if_conditional191) {
                        litem_139=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value166=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value166,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_139, "./neo-c.h", 225, 1815)), "./neo-c.h", 225, 1816))->prev=((void*)0);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_139, "./neo-c.h", 226, 1817)), "./neo-c.h", 226, 1818))->next=((void*)0);
                        __dec_obj54=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_139, "./neo-c.h", 227, 1819)), "./neo-c.h", 227, 1820))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_139, "./neo-c.h", 227, 1819)), "./neo-c.h", 227, 1820))->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1821)), "./neo-c.h", 229, 1822))->tail=litem_139;
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1823)), "./neo-c.h", 230, 1824))->head=litem_139;
                    }
                    else {
                        if(_if_conditional193=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1825)), "./neo-c.h", 232, 1826))->len==1,                        _if_conditional193) {
                            litem_140=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value167=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value167,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_140, "./neo-c.h", 235, 1827)), "./neo-c.h", 235, 1828))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1829)), "./neo-c.h", 235, 1830))->head;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_140, "./neo-c.h", 236, 1831)), "./neo-c.h", 236, 1832))->next=((void*)0);
                            __dec_obj55=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_140, "./neo-c.h", 237, 1833)), "./neo-c.h", 237, 1834))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_140, "./neo-c.h", 237, 1833)), "./neo-c.h", 237, 1834))->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj55,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1835)), "./neo-c.h", 239, 1836))->tail=litem_140;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1837)), "./neo-c.h", 240, 1838))->head, "./neo-c.h", 240, 1839)), "./neo-c.h", 240, 1840))->next=litem_140;
                        }
                        else {
                            litem_141=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value168=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value168,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_141, "./neo-c.h", 245, 1841)), "./neo-c.h", 245, 1842))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1843)), "./neo-c.h", 245, 1844))->tail;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_141, "./neo-c.h", 246, 1845)), "./neo-c.h", 246, 1846))->next=((void*)0);
                            __dec_obj56=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_141, "./neo-c.h", 247, 1847)), "./neo-c.h", 247, 1848))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_141, "./neo-c.h", 247, 1847)), "./neo-c.h", 247, 1848))->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1849)), "./neo-c.h", 249, 1850))->tail, "./neo-c.h", 249, 1851)), "./neo-c.h", 249, 1852))->next=litem_141;
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1853)), "./neo-c.h", 250, 1854))->tail=litem_141;
                        }
                    }
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1855)), "./neo-c.h", 253, 1856))->len++;
                    __result117__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result117__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional192=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1811)), "list_item$1CVALUEphp_finalize", 0, 1812))->item!=((void*)0),                            _if_conditional192) {
                                come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1813)), "list_item$1CVALUEphp_finalize", 0, 1814))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value242;
struct sNodeBase* __exception_result_var_b241;
void* right_value243;
char* __exception_result_var_b242;
char* __dec_obj79;
struct sLoadNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    (come_push_stackframe("07var.c", 527, 2412),__exception_result_var_b241=((struct sNodeBase*)(right_value242=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 527, 2410)), "07var.c", 527, 2411))),info))), come_pop_stackframe(), __exception_result_var_b241);
    come_call_finalizer3(right_value242,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=((struct sLoadNode*)come_null_check(self, "07var.c", 529, 2413))->name;
    ((struct sLoadNode*)come_null_check(self, "07var.c", 529, 2413))->name=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 529, 2414),__exception_result_var_b242=((char*)(right_value243=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b242));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result129__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value244;
char* __exception_result_var_b243;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
    __result130__ = __result_obj__ = (come_push_stackframe("07var.c", 534, 2423),__exception_result_var_b243=((char*)(right_value244=__builtin_string("sLoadNode"))), come_pop_stackframe(), __exception_result_var_b243);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_174;
struct sVar* __exception_result_var_b244;
_Bool _if_conditional225;
struct sVar* __exception_result_var_b245;
struct sVar* parent_var_175;
_Bool _if_conditional226;
_Bool __exception_result_var_b246;
_Bool _if_conditional227;
void* right_value245;
struct CVALUE* come_value_176;
struct sType* type_177;
void* right_value246;
char* __exception_result_var_b247;
char* __dec_obj80;
struct sType* __exception_result_var_b248;
void* right_value247;
struct sType* __dec_obj81;
struct list$1CVALUEph* __exception_result_var_b249;
_Bool __result131__;
struct sVar* __exception_result_var_b250;
struct sVar* var__178;
_Bool _if_conditional228;
struct sVar* __exception_result_var_b251;
_Bool _if_conditional229;
struct sFun* __exception_result_var_b255;
struct sFun* fun_179;
_Bool _if_conditional249;
void* right_value248;
struct CVALUE* come_value_183;
void* right_value249;
char* __exception_result_var_b256;
char* __dec_obj82;
struct sType* __dec_obj83;
struct list$1CVALUEph* __exception_result_var_b257;
_Bool __result136__;
_Bool __result137__;
void* right_value250;
struct CVALUE* come_value_184;
void* right_value251;
char* __exception_result_var_b258;
char* __dec_obj84;
struct sType* __exception_result_var_b259;
void* right_value252;
struct sType* __dec_obj85;
struct list$1CVALUEph* __exception_result_var_b260;
int __exception_result_var_b261;
_Bool _if_conditional250;
struct sType* __exception_result_var_b262;
void* right_value253;
struct sType* __dec_obj86;
struct list$1sNodeph* __exception_result_var_b263;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_174, 0, sizeof(struct sClass*));
memset(&parent_var_175, 0, sizeof(struct sVar*));
right_value245 = (void*)0;
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&var__178, 0, sizeof(struct sVar*));
memset(&fun_179, 0, sizeof(struct sFun*));
right_value248 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&come_value_184, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
    current_stack_frame_struct_174=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 539, 2424)), "07var.c", 539, 2425))->current_stack_frame_struct;
    if(_if_conditional225=current_stack_frame_struct_174&&(come_push_stackframe("07var.c", 541, 2432),__exception_result_var_b244=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 541, 2426)), "07var.c", 541, 2427))->lv_table, "07var.c", 541, 2428)), "07var.c", 541, 2429))->mVars,((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 541, 2430)), "07var.c", 541, 2431))->name), come_pop_stackframe(), __exception_result_var_b244)==((void*)0),    _if_conditional225) {
        parent_var_175=(come_push_stackframe("07var.c", 542, 2439),__exception_result_var_b245=get_variable_from_table(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 542, 2433)), "07var.c", 542, 2434))->lv_table, "07var.c", 542, 2435)), "07var.c", 542, 2436))->mParent,((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 542, 2437)), "07var.c", 542, 2438))->name), come_pop_stackframe(), __exception_result_var_b245);
        if(_if_conditional226=parent_var_175!=((void*)0),        _if_conditional226) {
            if(_if_conditional227=(come_push_stackframe("07var.c", 545, 2446),__exception_result_var_b246=string_operator_not_equals(((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_175, "07var.c", 545, 2440)), "07var.c", 545, 2441))->mFunName,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 545, 2442)), "07var.c", 545, 2443))->come_fun, "07var.c", 545, 2444)), "07var.c", 545, 2445))->mName), come_pop_stackframe(), __exception_result_var_b246),            _if_conditional227) {
                come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 546, "CVALUE"))));
                come_call_finalizer3(right_value245,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                type_177=((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_175, "07var.c", 548, 2447)), "07var.c", 548, 2448))->mType;
                __dec_obj80=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 550, 2449)), "07var.c", 550, 2450))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 550, 2449)), "07var.c", 550, 2450))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 550, 2453),__exception_result_var_b247=((char*)(right_value246=xsprintf("(*(parent->%s))",((struct sVar*)come_null_check(((struct sVar*)come_null_check(parent_var_175, "07var.c", 550, 2451)), "07var.c", 550, 2452))->mCValueName))), come_pop_stackframe(), __exception_result_var_b247));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj81=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 552, 2454)), "07var.c", 552, 2455))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 552, 2454)), "07var.c", 552, 2455))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(come_push_stackframe("07var.c", 552, 2456),__exception_result_var_b248=sType_clone(type_177), come_pop_stackframe(), __exception_result_var_b248))));
                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 553, 2457)), "07var.c", 553, 2458))->var=((void*)0);
                (come_push_stackframe("07var.c", 555,2461),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "07var.c", 555, 2459)), "07var.c", 555, 2460))->c_value),come_pop_stackframe());
                (come_push_stackframe("07var.c", 557, 2466),__exception_result_var_b249=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 557, 2462)), "07var.c", 557, 2463))->stack, "07var.c", 557, 2464)), "07var.c", 557, 2465)),(struct CVALUE*)come_increment_ref_count(come_value_176)), come_pop_stackframe(), __exception_result_var_b249);
                __result131__ = (_Bool)1;
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result131__;
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__178=(come_push_stackframe("07var.c", 564, 2471),__exception_result_var_b250=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 564, 2467)), "07var.c", 564, 2468))->lv_table,((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 564, 2469)), "07var.c", 564, 2470))->name), come_pop_stackframe(), __exception_result_var_b250);
    if(_if_conditional228=var__178==((void*)0),    _if_conditional228) {
        var__178=(come_push_stackframe("07var.c", 567, 2476),__exception_result_var_b251=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 567, 2472)), "07var.c", 567, 2473))->gv_table,((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 567, 2474)), "07var.c", 567, 2475))->name), come_pop_stackframe(), __exception_result_var_b251);
        if(_if_conditional229=var__178==((void*)0),        _if_conditional229) {
            fun_179=(come_push_stackframe("07var.c", 570, 2561),__exception_result_var_b255=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 570, 2477)), "07var.c", 570, 2478))->funcs,((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 570, 2479)), "07var.c", 570, 2480))->name), come_pop_stackframe(), __exception_result_var_b255);
            if(fun_179) {
                come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 573, "CVALUE"))));
                come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj82=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "07var.c", 575, 2562)), "07var.c", 575, 2563))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "07var.c", 575, 2562)), "07var.c", 575, 2563))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 575, 2566),__exception_result_var_b256=((char*)(right_value249=xsprintf("%s",((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_179, "07var.c", 575, 2564)), "07var.c", 575, 2565))->mName))), come_pop_stackframe(), __exception_result_var_b256));
                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "07var.c", 576, 2567)), "07var.c", 576, 2568))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "07var.c", 576, 2567)), "07var.c", 576, 2568))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_179, "07var.c", 576, 2569)), "07var.c", 576, 2570))->mLambdaType);
                come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_183, "07var.c", 577, 2571)), "07var.c", 577, 2572))->var=((void*)0);
                (come_push_stackframe("07var.c", 579, 2577),__exception_result_var_b257=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 579, 2573)), "07var.c", 579, 2574))->stack, "07var.c", 579, 2575)), "07var.c", 579, 2576)),(struct CVALUE*)come_increment_ref_count(come_value_183)), come_pop_stackframe(), __exception_result_var_b257);
                __result136__ = (_Bool)1;
                come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result136__;
                come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                (come_push_stackframe("07var.c", 584,2580),err_msg(info,"var not found(%s)(Z) at loading variable\n",((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "07var.c", 584, 2578)), "07var.c", 584, 2579))->name),come_pop_stackframe());
                __result137__ = (_Bool)1;
                return __result137__;
            }
        }
    }
    come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 590, "CVALUE"))));
    come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj84=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 591, 2581)), "07var.c", 591, 2582))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 591, 2581)), "07var.c", 591, 2582))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 591, 2585),__exception_result_var_b258=((char*)(right_value251=xsprintf("%s",((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__178, "07var.c", 591, 2583)), "07var.c", 591, 2584))->mCValueName))), come_pop_stackframe(), __exception_result_var_b258));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 592, 2586)), "07var.c", 592, 2587))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 592, 2586)), "07var.c", 592, 2587))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=(come_push_stackframe("07var.c", 592, 2590),__exception_result_var_b259=sType_clone(((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__178, "07var.c", 592, 2588)), "07var.c", 592, 2589))->mType), come_pop_stackframe(), __exception_result_var_b259))));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 593, 2591)), "07var.c", 593, 2592))->var=var__178;
    (come_push_stackframe("07var.c", 595, 2597),__exception_result_var_b260=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 595, 2593)), "07var.c", 595, 2594))->stack, "07var.c", 595, 2595)), "07var.c", 595, 2596)),(struct CVALUE*)come_increment_ref_count(come_value_184)), come_pop_stackframe(), __exception_result_var_b260);
    if(_if_conditional250=(come_push_stackframe("07var.c", 597, 2604),__exception_result_var_b261=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 597, 2598)), "07var.c", 597, 2599))->type, "07var.c", 597, 2600)), "07var.c", 597, 2601))->mArrayNum, "07var.c", 597, 2602)), "07var.c", 597, 2603))), come_pop_stackframe(), __exception_result_var_b261)==1,    _if_conditional250) {
        __dec_obj86=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 598, 2605)), "07var.c", 598, 2606))->type, "07var.c", 598, 2607)), "07var.c", 598, 2608))->mOriginalLoadVarType, "07var.c", 598, 2609)), "07var.c", 598, 2610))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 598, 2605)), "07var.c", 598, 2606))->type, "07var.c", 598, 2607)), "07var.c", 598, 2608))->mOriginalLoadVarType, "07var.c", 598, 2609)), "07var.c", 598, 2610))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=(come_push_stackframe("07var.c", 598, 2613),__exception_result_var_b262=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 598, 2611)), "07var.c", 598, 2612))->type), come_pop_stackframe(), __exception_result_var_b262))));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("07var.c", 600, 2630),__exception_result_var_b263=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 600, 2614)), "07var.c", 600, 2615))->type, "07var.c", 600, 2616)), "07var.c", 600, 2617))->mArrayNum, "07var.c", 600, 2618)), "07var.c", 600, 2619))), come_pop_stackframe(), __exception_result_var_b263);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 601, 2631)), "07var.c", 601, 2632))->type, "07var.c", 601, 2633)), "07var.c", 601, 2634))->mPointerNum++;
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 602, 2635)), "07var.c", 602, 2636))->type, "07var.c", 602, 2637)), "07var.c", 602, 2638))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "07var.c", 602, 2639)), "07var.c", 602, 2640))->type, "07var.c", 602, 2641)), "07var.c", 602, 2642))->mPointerNum;
    }
    __result139__ = (_Bool)1;
    come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result139__;
    come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_180;
void* __exception_result_var_b252;
unsigned int __exception_result_var_b253;
unsigned int hash_181;
unsigned int it_182;
_Bool _while_condtional21;
_Bool _if_conditional230;
_Bool __exception_result_var_b254;
_Bool _if_conditional231;
struct sFun* __result132__;
_Bool _if_conditional247;
_Bool _if_conditional248;
struct sFun* __result133__;
struct sFun* __result134__;
struct sFun* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_180, 0, sizeof(struct sFun*));
memset(&hash_181, 0, sizeof(unsigned int));
memset(&it_182, 0, sizeof(unsigned int));
                (come_push_stackframe("./neo-c.h", 1526, 2481),__exception_result_var_b252=memset(&default_value_180,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b252);
                hash_181=(come_push_stackframe("./neo-c.h", 1528, 2484),__exception_result_var_b253=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2482)), "./neo-c.h", 1528, 2483))), come_pop_stackframe(), __exception_result_var_b253)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 2485)), "./neo-c.h", 1528, 2486))->size;
                it_182=hash_181;
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    if(_if_conditional230=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 2487)), "./neo-c.h", 1532, 2488))->item_existance, "./neo-c.h", 1532, 2489))[it_182],                    _if_conditional230) {
                        if(_if_conditional231=(come_push_stackframe("./neo-c.h", 1534, 2495),__exception_result_var_b254=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 2490)), "./neo-c.h", 1534, 2491))->keys, "./neo-c.h", 1534, 2492))[it_182], "./neo-c.h", 1534, 2493)), "./neo-c.h", 1534, 2494)),key), come_pop_stackframe(), __exception_result_var_b254),                        _if_conditional231) {
                            __result132__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 2496)), "./neo-c.h", 1536, 2497))->items, "./neo-c.h", 1536, 2498))[it_182];
                            come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result132__;
                        }
                        it_182++;
                        if(_if_conditional247=it_182>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 2559)), "./neo-c.h", 1541, 2560))->size,                        _if_conditional247) {
                            it_182=0;
                        }
                        else {
                            if(_if_conditional248=it_182==hash_181,                            _if_conditional248) {
                                __result133__ = __result_obj__ = default_value_180;
                                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result133__;
                            }
                        }
                    }
                    else {
                        __result134__ = __result_obj__ = default_value_180;
                        come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result134__;
                    }
                }
                __result135__ = __result_obj__ = default_value_180;
                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result135__;
                come_call_finalizer3(default_value_180,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional232=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2499)), "sFun_finalize", 0, 2500))->mName!=((void*)0),                                _if_conditional232) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2501)), "sFun_finalize", 0, 2502))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2501)), "sFun_finalize", 0, 2502))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional233=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2503)), "sFun_finalize", 1, 2504))->mResultType!=((void*)0),                                _if_conditional233) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2505)), "sFun_finalize", 1, 2506))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional234=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2507)), "sFun_finalize", 2, 2508))->mParamTypes!=((void*)0),                                _if_conditional234) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2509)), "sFun_finalize", 2, 2510))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional235=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2511)), "sFun_finalize", 3, 2512))->mParamNames!=((void*)0),                                _if_conditional235) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2513)), "sFun_finalize", 3, 2514))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional236=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2515)), "sFun_finalize", 4, 2516))->mParamDefaultParametors!=((void*)0),                                _if_conditional236) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2517)), "sFun_finalize", 4, 2518))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional237=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2519)), "sFun_finalize", 5, 2520))->mLambdaType!=((void*)0),                                _if_conditional237) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2521)), "sFun_finalize", 5, 2522))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional238=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2523)), "sFun_finalize", 6, 2524))->mBlock!=((void*)0),                                _if_conditional238) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2525)), "sFun_finalize", 6, 2526))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional241=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2535)), "sFun_finalize", 7, 2536))->mSource!=((void*)0),                                _if_conditional241) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2537)), "sFun_finalize", 7, 2538))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional242=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2539)), "sFun_finalize", 8, 2540))->mSourceHead!=((void*)0),                                _if_conditional242) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2541)), "sFun_finalize", 8, 2542))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional243=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2543)), "sFun_finalize", 9, 2544))->mSourceHead2!=((void*)0),                                _if_conditional243) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2545)), "sFun_finalize", 9, 2546))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional244=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2547)), "sFun_finalize", 10, 2548))->mSourceDefer!=((void*)0),                                _if_conditional244) {
                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2549)), "sFun_finalize", 10, 2550))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional245=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2551)), "sFun_finalize", 11, 2552))->mComeHeader!=((void*)0),                                _if_conditional245) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2553)), "sFun_finalize", 11, 2554))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2553)), "sFun_finalize", 11, 2554))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional246=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2555)), "sFun_finalize", 12, 2556))->mDeclareSName!=((void*)0),                                _if_conditional246) {
                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2557)), "sFun_finalize", 12, 2558))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2557)), "sFun_finalize", 12, 2558))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional239=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2527)), "sBlock_finalize", 0, 2528))->mNodes!=((void*)0),                                        _if_conditional239) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2529)), "sBlock_finalize", 0, 2530))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional240=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2531)), "sBlock_finalize", 1, 2532))->mVarTable!=((void*)0),                                        _if_conditional240) {
                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2533)), "sBlock_finalize", 1, 2534))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_185;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_186;
struct list$1sNodeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_186, 0, sizeof(struct list_item$1sNodeph*));
            it_185=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 426, 2620)), "./neo-c.h", 426, 2621))->head;
            while(_while_condtional22=it_185!=((void*)0),            _while_condtional22) {
                prev_it_186=it_185;
                it_185=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_185, "./neo-c.h", 429, 2622)), "./neo-c.h", 429, 2623))->next;
                come_call_finalizer3(prev_it_186,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 433, 2624)), "./neo-c.h", 433, 2625))->head=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 434, 2626)), "./neo-c.h", 434, 2627))->tail=((void*)0);
            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 436, 2628)), "./neo-c.h", 436, 2629))->len=0;
            __result138__ = __result_obj__ = self;
            return __result138__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value254;
struct sNodeBase* __exception_result_var_b264;
void* right_value255;
char* __exception_result_var_b265;
char* __dec_obj87;
struct sFunLoadNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
    (come_push_stackframe("07var.c", 613, 2645),__exception_result_var_b264=((struct sNodeBase*)(right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "07var.c", 613, 2643)), "07var.c", 613, 2644))),info))), come_pop_stackframe(), __exception_result_var_b264);
    come_call_finalizer3(right_value254,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj87=((struct sFunLoadNode*)come_null_check(self, "07var.c", 615, 2646))->name;
    ((struct sFunLoadNode*)come_null_check(self, "07var.c", 615, 2646))->name=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 615, 2647),__exception_result_var_b265=((char*)(right_value255=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b265));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result140__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value256;
char* __exception_result_var_b266;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
    __result141__ = __result_obj__ = (come_push_stackframe("07var.c", 620, 2656),__exception_result_var_b266=((char*)(right_value256=__builtin_string("sFunLoadNode"))), come_pop_stackframe(), __exception_result_var_b266);
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* __exception_result_var_b267;
struct sFun* fun_187;
_Bool _if_conditional253;
_Bool __result142__;
void* right_value257;
struct CVALUE* come_value_188;
void* right_value258;
char* __exception_result_var_b268;
char* __dec_obj88;
struct sType* __dec_obj89;
struct list$1CVALUEph* __exception_result_var_b269;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_187, 0, sizeof(struct sFun*));
right_value257 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
    fun_187=(come_push_stackframe("07var.c", 625, 2661),__exception_result_var_b267=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 625, 2657)), "07var.c", 625, 2658))->funcs,((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "07var.c", 625, 2659)), "07var.c", 625, 2660))->name), come_pop_stackframe(), __exception_result_var_b267);
    if(_if_conditional253=fun_187==((void*)0),    _if_conditional253) {
        (come_push_stackframe("07var.c", 628,2664),err_msg(info,"fun not found(%s) at loading variable\n",((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "07var.c", 628, 2662)), "07var.c", 628, 2663))->name),come_pop_stackframe());
        __result142__ = (_Bool)0;
        return __result142__;
    }
    else {
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 632, "CVALUE"))));
        come_call_finalizer3(right_value257,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj88=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "07var.c", 634, 2665)), "07var.c", 634, 2666))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "07var.c", 634, 2665)), "07var.c", 634, 2666))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 634, 2669),__exception_result_var_b268=((char*)(right_value258=xsprintf("%s",((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_187, "07var.c", 634, 2667)), "07var.c", 634, 2668))->mName))), come_pop_stackframe(), __exception_result_var_b268));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj89=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "07var.c", 635, 2670)), "07var.c", 635, 2671))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "07var.c", 635, 2670)), "07var.c", 635, 2671))->type=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_187, "07var.c", 635, 2672)), "07var.c", 635, 2673))->mLambdaType);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "07var.c", 636, 2674)), "07var.c", 636, 2675))->var=((void*)0);
        (come_push_stackframe("07var.c", 638, 2680),__exception_result_var_b269=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 638, 2676)), "07var.c", 638, 2677))->stack, "07var.c", 638, 2678)), "07var.c", 638, 2679)),(struct CVALUE*)come_increment_ref_count(come_value_188)), come_pop_stackframe(), __exception_result_var_b269);
        come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result143__ = (_Bool)1;
    return __result143__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional251=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0, 2648)), "sFunLoadNode_finalize", 0, 2649))->sname!=((void*)0),        _if_conditional251) {
            ((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0, 2650)), "sFunLoadNode_finalize", 0, 2651))->sname = come_decrement_ref_count2(((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 0, 2650)), "sFunLoadNode_finalize", 0, 2651))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional252=self!=((void*)0)&&((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1, 2652)), "sFunLoadNode_finalize", 1, 2653))->name!=((void*)0),        _if_conditional252) {
            ((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1, 2654)), "sFunLoadNode_finalize", 1, 2655))->name = come_decrement_ref_count2(((struct sFunLoadNode*)come_null_check(((struct sFunLoadNode*)come_null_check(self, "sFunLoadNode_finalize", 1, 2654)), "sFunLoadNode_finalize", 1, 2655))->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1sNodeph* initializer, struct sInfo* info){
void* __result_obj__;
void* right_value259;
struct sNodeBase* __exception_result_var_b270;
struct list$1sNodeph* __exception_result_var_b271;
void* right_value260;
struct list$1sNodeph* __dec_obj90;
struct sArrayInitializer* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    (come_push_stackframe("07var.c", 649, 2683),__exception_result_var_b270=((struct sNodeBase*)(right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "07var.c", 649, 2681)), "07var.c", 649, 2682))),info))), come_pop_stackframe(), __exception_result_var_b270);
    come_call_finalizer3(right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=((struct sArrayInitializer*)come_null_check(self, "07var.c", 651, 2684))->initializer;
    ((struct sArrayInitializer*)come_null_check(self, "07var.c", 651, 2684))->initializer=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(come_push_stackframe("07var.c", 651, 2685),__exception_result_var_b271=list$1sNodephp_clone(initializer), come_pop_stackframe(), __exception_result_var_b271))));
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value260,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result144__ = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result144__;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__;
void* right_value261;
char* __exception_result_var_b272;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
    __result145__ = __result_obj__ = (come_push_stackframe("07var.c", 656, 2694),__exception_result_var_b272=((char*)(right_value261=__builtin_string("sArrayInitializer"))), come_pop_stackframe(), __exception_result_var_b272);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* initializer_189;
void* right_value262;
void* right_value263;
struct buffer* __exception_result_var_b273;
struct buffer* buf_190;
struct buffer* __exception_result_var_b274;
int i_191;
struct sType* __dec_obj91;
struct sType* element_type_192;
struct list$1sNodeph* o2_saved_193;
struct sNode* __exception_result_var_b275;
struct sNode* it_194;
_Bool __exception_result_var_b276;
struct sNode* __exception_result_var_b277;
_Bool __exception_result_var_b278;
_Bool _if_conditional256;
_Bool __result146__;
void* right_value264;
struct CVALUE* __exception_result_var_b279;
struct CVALUE* come_value_195;
struct sType* __exception_result_var_b280;
void* right_value265;
struct sType* __dec_obj92;
struct buffer* __exception_result_var_b281;
int __exception_result_var_b282;
_Bool _if_conditional257;
struct buffer* __exception_result_var_b283;
struct buffer* __exception_result_var_b284;
void* right_value266;
struct CVALUE* come_value_196;
void* right_value267;
char* __exception_result_var_b285;
char* __dec_obj93;
struct sType* __exception_result_var_b286;
void* right_value268;
struct sType* __dec_obj94;
struct list$1CVALUEph* __exception_result_var_b287;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&initializer_189, 0, sizeof(struct list$1sNodeph*));
right_value262 = (void*)0;
right_value263 = (void*)0;
memset(&buf_190, 0, sizeof(struct buffer*));
memset(&i_191, 0, sizeof(int));
memset(&element_type_192, 0, sizeof(struct sType*));
memset(&o2_saved_193, 0, sizeof(struct list$1sNodeph*));
memset(&it_194, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
memset(&come_value_195, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
right_value268 = (void*)0;
    initializer_189=(struct list$1sNodeph*)come_increment_ref_count(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "07var.c", 661, 2695)), "07var.c", 661, 2696))->initializer);
    buf_190=(struct buffer*)come_increment_ref_count((come_push_stackframe("07var.c", 663, 2698),__exception_result_var_b273=((struct buffer*)(right_value263=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value262=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 663, "buffer"))), "07var.c", 663, 2697)))))), come_pop_stackframe(), __exception_result_var_b273));
    come_call_finalizer3(right_value262,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value263,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("07var.c", 664, 2701),__exception_result_var_b274=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_190, "07var.c", 664, 2699)), "07var.c", 664, 2700)),"{"), come_pop_stackframe(), __exception_result_var_b274);
    i_191=0;
    __dec_obj91=element_type_192;
    element_type_192=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_193=(struct list$1sNodeph*)come_increment_ref_count((initializer_189)),it_194=(come_push_stackframe("07var.c", 667, 2704),__exception_result_var_b275=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_193), "07var.c", 667, 2702)), "07var.c", 667, 2703))), come_pop_stackframe(), __exception_result_var_b275);    !(come_push_stackframe("07var.c", 667, 2707),__exception_result_var_b276=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_193), "07var.c", 667, 2705)), "07var.c", 667, 2706))), come_pop_stackframe(), __exception_result_var_b276);    it_194=(come_push_stackframe("07var.c", 667, 2710),__exception_result_var_b277=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check((o2_saved_193), "07var.c", 667, 2708)), "07var.c", 667, 2709))), come_pop_stackframe(), __exception_result_var_b277)    ){
        if(_if_conditional256=!(come_push_stackframe("07var.c", 668, 2711),__exception_result_var_b278=node_compile(it_194,info), come_pop_stackframe(), __exception_result_var_b278),        _if_conditional256) {
            __result146__ = (_Bool)0;
            come_call_finalizer3(o2_saved_193,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_189,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result146__;
        }
        come_value_195=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 671, 2712),__exception_result_var_b279=((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b279));
        come_call_finalizer3(right_value264,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("07var.c", 672,2713),dec_stack_ptr(1,info),come_pop_stackframe());
        __dec_obj92=element_type_192;
        element_type_192=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=(come_push_stackframe("07var.c", 674, 2716),__exception_result_var_b280=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "07var.c", 674, 2714)), "07var.c", 674, 2715))->type), come_pop_stackframe(), __exception_result_var_b280))));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("07var.c", 676, 2721),__exception_result_var_b281=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_190, "07var.c", 676, 2717)), "07var.c", 676, 2718)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_195, "07var.c", 676, 2719)), "07var.c", 676, 2720))->c_value), come_pop_stackframe(), __exception_result_var_b281);
        i_191++;
        if(_if_conditional257=i_191!=(come_push_stackframe("07var.c", 680, 2724),__exception_result_var_b282=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(initializer_189, "07var.c", 680, 2722)), "07var.c", 680, 2723))), come_pop_stackframe(), __exception_result_var_b282),        _if_conditional257) {
            (come_push_stackframe("07var.c", 681, 2727),__exception_result_var_b283=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_190, "07var.c", 681, 2725)), "07var.c", 681, 2726)),","), come_pop_stackframe(), __exception_result_var_b283);
        }
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_193,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("07var.c", 684, 2730),__exception_result_var_b284=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_190, "07var.c", 684, 2728)), "07var.c", 684, 2729)),"}"), come_pop_stackframe(), __exception_result_var_b284);
    come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 686, "CVALUE"))));
    come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 688, 2731)), "07var.c", 688, 2732))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 688, 2731)), "07var.c", 688, 2732))->c_value=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 688, 2735),__exception_result_var_b285=((char*)(right_value267=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_190, "07var.c", 688, 2733)), "07var.c", 688, 2734))))), come_pop_stackframe(), __exception_result_var_b285));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj94=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 689, 2736)), "07var.c", 689, 2737))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 689, 2736)), "07var.c", 689, 2737))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=(come_push_stackframe("07var.c", 689, 2738),__exception_result_var_b286=sType_clone(element_type_192), come_pop_stackframe(), __exception_result_var_b286))));
    come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 690, 2739)), "07var.c", 690, 2740))->type, "07var.c", 690, 2741)), "07var.c", 690, 2742))->mPointerNum++;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "07var.c", 692, 2743)), "07var.c", 692, 2744))->var=((void*)0);
    (come_push_stackframe("07var.c", 694, 2749),__exception_result_var_b287=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 694, 2745)), "07var.c", 694, 2746))->stack, "07var.c", 694, 2747)), "07var.c", 694, 2748)),(struct CVALUE*)come_increment_ref_count(come_value_196)), come_pop_stackframe(), __exception_result_var_b287);
    __result147__ = (_Bool)1;
    come_call_finalizer3(initializer_189,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result147__;
    come_call_finalizer3(initializer_189,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__;
int __exception_result_var_b288;
void* right_value269;
void* right_value270;
struct list$1sNodeph* __exception_result_var_b289;
struct list$1sNodeph* initializer_197;
_Bool no_comma_198;
void* right_value271;
struct sNode* __exception_result_var_b290;
struct sNode* exp_199;
struct list$1sNodeph* __exception_result_var_b291;
_Bool _while_condtional23;
_Bool no_comma_200;
void* right_value272;
struct sNode* __exception_result_var_b292;
struct sNode* exp_201;
struct list$1sNodeph* __exception_result_var_b293;
int __exception_result_var_b294;
void* right_value273;
void* right_value274;
struct sArrayInitializer* __exception_result_var_b295;
struct sNode* _inf_value1;
struct sArrayInitializer* _inf_obj_value1;
void* right_value278;
struct sNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&initializer_197, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_198, 0, sizeof(_Bool));
right_value271 = (void*)0;
memset(&exp_199, 0, sizeof(struct sNode*));
memset(&no_comma_200, 0, sizeof(_Bool));
right_value272 = (void*)0;
memset(&exp_201, 0, sizeof(struct sNode*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value278 = (void*)0;
    (come_push_stackframe("07var.c", 702, 2750),__exception_result_var_b288=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b288);
    initializer_197=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("07var.c", 704, 2752),__exception_result_var_b289=((struct list$1sNodeph*)(right_value270=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value269=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 704, "list$1sNodeph"))), "07var.c", 704, 2751)))))), come_pop_stackframe(), __exception_result_var_b289));
    come_call_finalizer3(right_value269,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value270,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    no_comma_198=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 706, 2753)), "07var.c", 706, 2754))->no_comma;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 707, 2755)), "07var.c", 707, 2756))->no_comma=(_Bool)1;
    exp_199=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 708, 2757),__exception_result_var_b290=((struct sNode*)(right_value271=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b290));
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 709, 2758)), "07var.c", 709, 2759))->no_comma=no_comma_198;
    (come_push_stackframe("07var.c", 711, 2762),__exception_result_var_b291=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(initializer_197, "07var.c", 711, 2760)), "07var.c", 711, 2761)),(struct sNode*)come_increment_ref_count(exp_199)), come_pop_stackframe(), __exception_result_var_b291);
    while(_while_condtional23=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 713, 2763)), "07var.c", 713, 2764))->p, "07var.c", 713, 2765))==44,    _while_condtional23) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 714, 2766)), "07var.c", 714, 2767))->p++;
        (come_push_stackframe("07var.c", 715,2768),skip_spaces_and_lf(info),come_pop_stackframe());
        no_comma_200=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 717, 2769)), "07var.c", 717, 2770))->no_comma;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 718, 2771)), "07var.c", 718, 2772))->no_comma=(_Bool)1;
        exp_201=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 719, 2773),__exception_result_var_b292=((struct sNode*)(right_value272=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b292));
        if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 720, 2774)), "07var.c", 720, 2775))->no_comma=no_comma_200;
        (come_push_stackframe("07var.c", 722, 2778),__exception_result_var_b293=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(initializer_197, "07var.c", 722, 2776)), "07var.c", 722, 2777)),(struct sNode*)come_increment_ref_count(exp_201)), come_pop_stackframe(), __exception_result_var_b293);
        if(exp_201) { exp_201 = come_decrement_ref_count2(exp_201, ((struct sNode*)exp_201)->finalize, ((struct sNode*)exp_201)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    (come_push_stackframe("07var.c", 725, 2779),__exception_result_var_b294=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b294);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 727, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("07var.c", 727, 2781),__exception_result_var_b295=((struct sArrayInitializer*)(right_value274=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)(right_value273=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 727, "sArrayInitializer"))), "07var.c", 727, 2780))),(struct list$1sNodeph*)come_increment_ref_count(initializer_197),info))), come_pop_stackframe(), __exception_result_var_b295));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sArrayInitializer_finalize;
    _inf_value1->clone=(void*)sArrayInitializer_clone;
    _inf_value1->compile=(void*)sArrayInitializer_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sArrayInitializer_kind;
    __result150__ = __result_obj__ = ((struct sNode*)(right_value278=_inf_value1));
    come_call_finalizer3(initializer_197,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_199) { exp_199 = come_decrement_ref_count2(exp_199, ((struct sNode*)exp_199)->finalize, ((struct sNode*)exp_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(right_value273,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value274,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result150__;
    come_call_finalizer3(initializer_197,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_199) { exp_199 = come_decrement_ref_count2(exp_199, ((struct sNode*)exp_199)->finalize, ((struct sNode*)exp_199)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
void* __result_obj__;
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional258=self!=((void*)0)&&((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_finalize", 0, 2782)), "sArrayInitializer_finalize", 0, 2783))->sname!=((void*)0),        _if_conditional258) {
            ((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_finalize", 0, 2784)), "sArrayInitializer_finalize", 0, 2785))->sname = come_decrement_ref_count2(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_finalize", 0, 2784)), "sArrayInitializer_finalize", 0, 2785))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional259=self!=((void*)0)&&((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_finalize", 1, 2786)), "sArrayInitializer_finalize", 1, 2787))->initializer!=((void*)0),        _if_conditional259) {
            come_call_finalizer3(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_finalize", 1, 2788)), "sArrayInitializer_finalize", 1, 2789))->initializer,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__;
_Bool _if_conditional260;
struct sArrayInitializer* __result148__;
void* right_value275;
struct sArrayInitializer* result_202;
_Bool _if_conditional261;
_Bool _if_conditional262;
char* __exception_result_var_b296;
void* right_value276;
char* __dec_obj95;
_Bool _if_conditional263;
struct list$1sNodeph* __exception_result_var_b297;
void* right_value277;
struct list$1sNodeph* __dec_obj96;
struct sArrayInitializer* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
memset(&result_202, 0, sizeof(struct sArrayInitializer*));
right_value276 = (void*)0;
right_value277 = (void*)0;
        if(_if_conditional260=self==(void*)0,        _if_conditional260) {
            __result148__ = __result_obj__ = (void*)0;
            return __result148__;
        }
        result_202=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(right_value275=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"))));
        come_call_finalizer3(right_value275,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional261=self!=((void*)0),        _if_conditional261) {
            ((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(result_202, "sArrayInitializer_clone", 4, 2790)), "sArrayInitializer_clone", 4, 2791))->sline=((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_clone", 4, 2792)), "sArrayInitializer_clone", 4, 2793))->sline;
        }
        if(_if_conditional262=self!=((void*)0)&&((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_clone", 5, 2794)), "sArrayInitializer_clone", 5, 2795))->sname!=((void*)0),        _if_conditional262) {
            __dec_obj95=((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(result_202, "sArrayInitializer_clone", 5, 2796)), "sArrayInitializer_clone", 5, 2797))->sname;
            ((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(result_202, "sArrayInitializer_clone", 5, 2796)), "sArrayInitializer_clone", 5, 2797))->sname=(char*)come_increment_ref_count(((char*)(right_value276=(come_push_stackframe("sArrayInitializer_clone", 5, 2800),__exception_result_var_b296=string_clone(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_clone", 5, 2798)), "sArrayInitializer_clone", 5, 2799))->sname), come_pop_stackframe(), __exception_result_var_b296))));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional263=self!=((void*)0)&&((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_clone", 6, 2801)), "sArrayInitializer_clone", 6, 2802))->initializer!=((void*)0),        _if_conditional263) {
            __dec_obj96=((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(result_202, "sArrayInitializer_clone", 6, 2803)), "sArrayInitializer_clone", 6, 2804))->initializer;
            ((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(result_202, "sArrayInitializer_clone", 6, 2803)), "sArrayInitializer_clone", 6, 2804))->initializer=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value277=(come_push_stackframe("sArrayInitializer_clone", 6, 2807),__exception_result_var_b297=list$1sNodephp_clone(((struct sArrayInitializer*)come_null_check(((struct sArrayInitializer*)come_null_check(self, "sArrayInitializer_clone", 6, 2805)), "sArrayInitializer_clone", 6, 2806))->initializer), come_pop_stackframe(), __exception_result_var_b297))));
            come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value277,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result149__ = __result_obj__ = result_202;
        come_call_finalizer3(result_202,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
        return __result149__;
        come_call_finalizer3(result_202,sArrayInitializer_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value279;
struct sVar* self_203;
void* right_value280;
char* __exception_result_var_b298;
char* __dec_obj97;
struct sType* __exception_result_var_b299;
void* right_value281;
struct sType* __dec_obj98;
_Bool _if_conditional264;
void* right_value282;
char* __exception_result_var_b300;
char* __dec_obj99;
void* right_value283;
char* __exception_result_var_b301;
char* __dec_obj100;
_Bool _if_conditional265;
char* __exception_result_var_b302;
void* right_value284;
char* __dec_obj101;
char* __dec_obj102;
void* right_value291;
char* __exception_result_var_b334;
struct map$2charphsVarph* __exception_result_var_b335;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
memset(&self_203, 0, sizeof(struct sVar*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value291 = (void*)0;
    self_203=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value279=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 732, "sVar"))));
    come_call_finalizer3(right_value279,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 734, 2808)), "07var.c", 734, 2809))->mName;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 734, 2808)), "07var.c", 734, 2809))->mName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 734, 2810),__exception_result_var_b298=((char*)(right_value280=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b298));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj98=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 735, 2811)), "07var.c", 735, 2812))->mType;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 735, 2811)), "07var.c", 735, 2812))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=(come_push_stackframe("07var.c", 735, 2813),__exception_result_var_b299=sType_clone(type), come_pop_stackframe(), __exception_result_var_b299))));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value281,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(type, "07var.c", 737, 2814)), "07var.c", 737, 2815))->mFunctionParam) {
        __dec_obj99=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 738, 2816)), "07var.c", 738, 2817))->mCValueName;
        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 738, 2816)), "07var.c", 738, 2817))->mCValueName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 738, 2818),__exception_result_var_b300=((char*)(right_value282=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b300));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        static int n_204=0;
        __dec_obj100=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 742, 2819)), "07var.c", 742, 2820))->mCValueName;
        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 742, 2819)), "07var.c", 742, 2820))->mCValueName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 742, 2821),__exception_result_var_b301=((char*)(right_value283=xsprintf("%s_%d",name,n_204++))), come_pop_stackframe(), __exception_result_var_b301));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 745, 2822)), "07var.c", 745, 2823))->mBlockLevel=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 745, 2824)), "07var.c", 745, 2825))->block_level;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 746, 2826)), "07var.c", 746, 2827))->mAllocaValue=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 747, 2828)), "07var.c", 747, 2829))->mFunctionParam=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 748, 2830)), "07var.c", 748, 2831))->mNoFree=(_Bool)0;
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 749, 2832)), "07var.c", 749, 2833))->come_fun) {
        __dec_obj101=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 750, 2834)), "07var.c", 750, 2835))->mFunName;
        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 750, 2834)), "07var.c", 750, 2835))->mFunName=(char*)come_increment_ref_count(((char*)(right_value284=(come_push_stackframe("07var.c", 750, 2840),__exception_result_var_b302=string_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 750, 2836)), "07var.c", 750, 2837))->come_fun, "07var.c", 750, 2838)), "07var.c", 750, 2839))->mName), come_pop_stackframe(), __exception_result_var_b302))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj102=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 753, 2841)), "07var.c", 753, 2842))->mFunName;
        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_203, "07var.c", 753, 2841)), "07var.c", 753, 2842))->mFunName=((void*)0);
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    (come_push_stackframe("07var.c", 756, 3222),__exception_result_var_b335=map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 756, 2843)), "07var.c", 756, 2844))->lv_table, "07var.c", 756, 2845)), "07var.c", 756, 2846))->mVars, "07var.c", 756, 2847)), "07var.c", 756, 2848)),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 756, 3221),__exception_result_var_b334=((char*)(right_value291=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b334)),(struct sVar*)come_increment_ref_count(self_203)), come_pop_stackframe(), __exception_result_var_b335);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_203,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional266;
unsigned int __exception_result_var_b317;
unsigned int hash_222;
unsigned int it_223;
_Bool _while_condtional26;
_Bool _if_conditional278;
_Bool __exception_result_var_b318;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct list$1charp* __exception_result_var_b322;
struct list$1charp* __exception_result_var_b323;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
int __exception_result_var_b324;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool same_key_exist_240;
char* __exception_result_var_b327;
char* it2_243;
_Bool __exception_result_var_b328;
char* __exception_result_var_b331;
_Bool __exception_result_var_b332;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1charp* __exception_result_var_b333;
struct map$2charphsVarph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_222, 0, sizeof(unsigned int));
memset(&it_223, 0, sizeof(unsigned int));
memset(&same_key_exist_240, 0, sizeof(_Bool));
memset(&it2_243, 0, sizeof(char*));
        if(_if_conditional266=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1371, 2849)), "./neo-c.h", 1371, 2850))->len*10>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1371, 2851)), "./neo-c.h", 1371, 2852))->size,        _if_conditional266) {
            (come_push_stackframe("./neo-c.h", 1372,2972),map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1372, 2853)), "./neo-c.h", 1372, 2854))),come_pop_stackframe());
        }
        hash_222=(come_push_stackframe("./neo-c.h", 1374, 2975),__exception_result_var_b317=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(key, "./neo-c.h", 1374, 2973)), "./neo-c.h", 1374, 2974))), come_pop_stackframe(), __exception_result_var_b317)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1374, 2976)), "./neo-c.h", 1374, 2977))->size;
        it_223=hash_222;
        while(_while_condtional26=(_Bool)1,        _while_condtional26) {
            if(_if_conditional278=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1378, 2978)), "./neo-c.h", 1378, 2979))->item_existance, "./neo-c.h", 1378, 2980))[it_223],            _if_conditional278) {
                if(_if_conditional279=(come_push_stackframe("./neo-c.h", 1380, 2986),__exception_result_var_b318=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1380, 2981)), "./neo-c.h", 1380, 2982))->keys, "./neo-c.h", 1380, 2983))[it_223], "./neo-c.h", 1380, 2984)), "./neo-c.h", 1380, 2985)),key), come_pop_stackframe(), __exception_result_var_b318),                _if_conditional279) {
                    if(_if_conditional280=1,                    _if_conditional280) {
                        (come_push_stackframe("./neo-c.h", 1383, 3075),__exception_result_var_b322=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1383, 2987)), "./neo-c.h", 1383, 2988))->key_list, "./neo-c.h", 1383, 2989)), "./neo-c.h", 1383, 2990)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1383, 3072)), "./neo-c.h", 1383, 3073))->keys, "./neo-c.h", 1383, 3074))[it_223]), come_pop_stackframe(), __exception_result_var_b322);
                        ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1384, 3076)), "./neo-c.h", 1384, 3077))->keys, "./neo-c.h", 1384, 3078))[it_223] = come_decrement_ref_count2(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1384, 3076)), "./neo-c.h", 1384, 3077))->keys, "./neo-c.h", 1384, 3078))[it_223], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1385, 3079)), "./neo-c.h", 1385, 3080))->keys, "./neo-c.h", 1385, 3081))[it_223]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        (come_push_stackframe("./neo-c.h", 1388, 3089),__exception_result_var_b323=list$1charp_remove(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1388, 3082)), "./neo-c.h", 1388, 3083))->key_list, "./neo-c.h", 1388, 3084)), "./neo-c.h", 1388, 3085)),((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1388, 3086)), "./neo-c.h", 1388, 3087))->keys, "./neo-c.h", 1388, 3088))[it_223]), come_pop_stackframe(), __exception_result_var_b323);
                        ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1389, 3090)), "./neo-c.h", 1389, 3091))->keys, "./neo-c.h", 1389, 3092))[it_223]=key;
                    }
                    if(_if_conditional300=1,                    _if_conditional300) {
                        come_call_finalizer3(((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1392, 3093)), "./neo-c.h", 1392, 3094))->items, "./neo-c.h", 1392, 3095))[it_223],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1393, 3096)), "./neo-c.h", 1393, 3097))->items, "./neo-c.h", 1393, 3098))[it_223]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1396, 3099)), "./neo-c.h", 1396, 3100))->items, "./neo-c.h", 1396, 3101))[it_223]=item;
                    }
                    break;
                }
                it_223++;
                if(_if_conditional301=it_223>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1403, 3102)), "./neo-c.h", 1403, 3103))->size,                _if_conditional301) {
                    it_223=0;
                }
                else {
                    if(_if_conditional302=it_223==hash_222,                    _if_conditional302) {
                        (come_push_stackframe("./neo-c.h", 1407, 3104),__exception_result_var_b324=printf("unexpected error in map.insert\n"), come_pop_stackframe(), __exception_result_var_b324);
                        (come_push_stackframe("./neo-c.h", 1408,3105),stackframe(),come_pop_stackframe());
                        (come_push_stackframe("./neo-c.h", 1409,3106),exit(2),come_pop_stackframe());
                    }
                }
            }
            else {
                ((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1413, 3107)), "./neo-c.h", 1413, 3108))->item_existance, "./neo-c.h", 1413, 3109))[it_223]=(_Bool)1;
                if(_if_conditional303=1,                _if_conditional303) {
                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1415, 3110)), "./neo-c.h", 1415, 3111))->keys, "./neo-c.h", 1415, 3112))[it_223]=(char*)come_increment_ref_count(key);
                }
                else {
                    ((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1418, 3113)), "./neo-c.h", 1418, 3114))->keys, "./neo-c.h", 1418, 3115))[it_223]=key;
                }
                if(_if_conditional304=1,                _if_conditional304) {
                    ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1421, 3116)), "./neo-c.h", 1421, 3117))->items, "./neo-c.h", 1421, 3118))[it_223]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1424, 3119)), "./neo-c.h", 1424, 3120))->items, "./neo-c.h", 1424, 3121))[it_223]=item;
                }
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1427, 3122)), "./neo-c.h", 1427, 3123))->len++;
                break;
            }
        }
        same_key_exist_240=(_Bool)0;
        for(        it2_243=(come_push_stackframe("./neo-c.h", 1434, 3140),__exception_result_var_b327=list$1charp_begin(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1434, 3124)), "./neo-c.h", 1434, 3125))->key_list, "./neo-c.h", 1434, 3126)), "./neo-c.h", 1434, 3127))), come_pop_stackframe(), __exception_result_var_b327);        !(come_push_stackframe("./neo-c.h", 1434, 3147),__exception_result_var_b328=list$1charp_end(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1434, 3141)), "./neo-c.h", 1434, 3142))->key_list, "./neo-c.h", 1434, 3143)), "./neo-c.h", 1434, 3144))), come_pop_stackframe(), __exception_result_var_b328);        it2_243=(come_push_stackframe("./neo-c.h", 1434, 3168),__exception_result_var_b331=list$1charp_next(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1434, 3148)), "./neo-c.h", 1434, 3149))->key_list, "./neo-c.h", 1434, 3150)), "./neo-c.h", 1434, 3151))), come_pop_stackframe(), __exception_result_var_b331)        ){
            if(_if_conditional309=(come_push_stackframe("./neo-c.h", 1436, 3171),__exception_result_var_b332=string_equals(((char*)come_null_check(((char*)come_null_check(it2_243, "./neo-c.h", 1436, 3169)), "./neo-c.h", 1436, 3170)),key), come_pop_stackframe(), __exception_result_var_b332),            _if_conditional309) {
                same_key_exist_240=(_Bool)1;
            }
        }
        if(_if_conditional310=!same_key_exist_240,        _if_conditional310) {
            (come_push_stackframe("./neo-c.h", 1442, 3220),__exception_result_var_b333=list$1charp_push_back(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1442, 3172)), "./neo-c.h", 1442, 3173))->key_list, "./neo-c.h", 1442, 3174)), "./neo-c.h", 1442, 3175)),key), come_pop_stackframe(), __exception_result_var_b333);
        }
        __result174__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result174__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_205;
void* right_value285;
char** keys_206;
void* right_value286;
struct sVar** items_207;
void* right_value287;
_Bool* item_existance_208;
int len_209;
char* __exception_result_var_b305;
char* it_212;
_Bool __exception_result_var_b306;
char* __exception_result_var_b309;
struct sVar* default_value_215;
void* __exception_result_var_b310;
struct sVar* __exception_result_var_b313;
struct sVar* it2_216;
unsigned int __exception_result_var_b314;
unsigned int hash_219;
int n_220;
_Bool _while_condtional25;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
int __exception_result_var_b315;
struct sVar* default_value_221;
struct sVar* __exception_result_var_b316;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_205, 0, sizeof(int));
right_value285 = (void*)0;
memset(&keys_206, 0, sizeof(char**));
right_value286 = (void*)0;
memset(&items_207, 0, sizeof(struct sVar**));
right_value287 = (void*)0;
memset(&item_existance_208, 0, sizeof(_Bool*));
memset(&len_209, 0, sizeof(int));
memset(&it_212, 0, sizeof(char*));
memset(&default_value_215, 0, sizeof(struct sVar*));
memset(&it2_216, 0, sizeof(struct sVar*));
memset(&hash_219, 0, sizeof(unsigned int));
memset(&n_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct sVar*));
                size_205=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1318, 2855)), "./neo-c.h", 1318, 2856))->size*10;
                keys_206=(char**)come_increment_ref_count(((char**)(right_value285=(char**)come_calloc(1, sizeof(char*)*(1*(size_205)), "./neo-c.h", 1319, "char*%"))));
                right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_207=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value286=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_205)), "./neo-c.h", 1320, "sVar*%"))));
                come_call_finalizer3(right_value286,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_208=(_Bool*)come_increment_ref_count(((_Bool*)(right_value287=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_205)), "./neo-c.h", 1321, "bool"))));
                right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_209=0;
                for(                it_212=(come_push_stackframe("./neo-c.h", 1325, 2879),__exception_result_var_b305=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2857)), "./neo-c.h", 1325, 2858))), come_pop_stackframe(), __exception_result_var_b305);                !(come_push_stackframe("./neo-c.h", 1325, 2888),__exception_result_var_b306=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2880)), "./neo-c.h", 1325, 2881))), come_pop_stackframe(), __exception_result_var_b306);                it_212=(come_push_stackframe("./neo-c.h", 1325, 2917),__exception_result_var_b309=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1325, 2889)), "./neo-c.h", 1325, 2890))), come_pop_stackframe(), __exception_result_var_b309)                ){
                    (come_push_stackframe("./neo-c.h", 1327, 2918),__exception_result_var_b310=memset(&default_value_215,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b310);
                    it2_216=(come_push_stackframe("./neo-c.h", 1328, 2940),__exception_result_var_b313=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1328, 2919)), "./neo-c.h", 1328, 2920)),it_212,default_value_215), come_pop_stackframe(), __exception_result_var_b313);
                    hash_219=(come_push_stackframe("./neo-c.h", 1329, 2943),__exception_result_var_b314=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(it_212, "./neo-c.h", 1329, 2941)), "./neo-c.h", 1329, 2942))), come_pop_stackframe(), __exception_result_var_b314)%size_205;
                    n_220=hash_219;
                    while(_while_condtional25=(_Bool)1,                    _while_condtional25) {
                        if(_if_conditional275=((_Bool*)come_null_check(item_existance_208, "./neo-c.h", 1333, 2944))[n_220],                        _if_conditional275) {
                            n_220++;
                            if(_if_conditional276=n_220>=size_205,                            _if_conditional276) {
                                n_220=0;
                            }
                            else {
                                if(_if_conditional277=n_220==hash_219,                                _if_conditional277) {
                                    (come_push_stackframe("./neo-c.h", 1341, 2945),__exception_result_var_b315=printf("unexpected error in map.rehash(1)\n"), come_pop_stackframe(), __exception_result_var_b315);
                                    (come_push_stackframe("./neo-c.h", 1342,2946),stackframe(),come_pop_stackframe());
                                    (come_push_stackframe("./neo-c.h", 1343,2947),exit(2),come_pop_stackframe());
                                }
                            }
                        }
                        else {
                            ((_Bool*)come_null_check(item_existance_208, "./neo-c.h", 1347, 2948))[n_220]=(_Bool)1;
                            ((char**)come_null_check(keys_206, "./neo-c.h", 1348, 2949))[n_220]=it_212;
                            ((struct sVar**)come_null_check(items_207, "./neo-c.h", 1350, 2950))[n_220]=(come_push_stackframe("./neo-c.h", 1350, 2953),__exception_result_var_b316=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1350, 2951)), "./neo-c.h", 1350, 2952)),it_212,default_value_221), come_pop_stackframe(), __exception_result_var_b316);
                            len_209++;
                            break;
                        }
                    }
                }
                (come_push_stackframe("./neo-c.h", 1358,2956),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1358, 2954)), "./neo-c.h", 1358, 2955))->items),come_pop_stackframe());
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2957)), "./neo-c.h", 1359, 2958))->item_existance = come_decrement_ref_count2(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1359, 2957)), "./neo-c.h", 1359, 2958))->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (come_push_stackframe("./neo-c.h", 1360,2961),come_free((char*)((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1360, 2959)), "./neo-c.h", 1360, 2960))->keys),come_pop_stackframe());
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1362, 2962)), "./neo-c.h", 1362, 2963))->keys=keys_206;
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1363, 2964)), "./neo-c.h", 1363, 2965))->items=items_207;
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1364, 2966)), "./neo-c.h", 1364, 2967))->item_existance=item_existance_208;
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1366, 2968)), "./neo-c.h", 1366, 2969))->size=size_205;
                ((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1367, 2970)), "./neo-c.h", 1367, 2971))->len=len_209;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional267;
char* result_210;
void* __exception_result_var_b303;
char* __result151__;
_Bool _if_conditional268;
char* __result152__;
char* result_211;
void* __exception_result_var_b304;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_210, 0, sizeof(char*));
memset(&result_211, 0, sizeof(char*));
                    if(_if_conditional267=self==((void*)0),                    _if_conditional267) {
                        (come_push_stackframe("./neo-c.h", 1282, 2859),__exception_result_var_b303=memset(&result_210,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b303);
                        __result151__ = __result_obj__ = result_210;
                        return __result151__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2860)), "./neo-c.h", 1285, 2861))->key_list, "./neo-c.h", 1285, 2862)), "./neo-c.h", 1285, 2863))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1285, 2864)), "./neo-c.h", 1285, 2865))->key_list, "./neo-c.h", 1285, 2866)), "./neo-c.h", 1285, 2867))->head;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1287, 2868)), "./neo-c.h", 1287, 2869))->key_list, "./neo-c.h", 1287, 2870)), "./neo-c.h", 1287, 2871))->it) {
                        __result152__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1288, 2872)), "./neo-c.h", 1288, 2873))->key_list, "./neo-c.h", 1288, 2874)), "./neo-c.h", 1288, 2875))->it, "./neo-c.h", 1288, 2876)), "./neo-c.h", 1288, 2877))->item;
                        return __result152__;
                    }
                    (come_push_stackframe("./neo-c.h", 1292, 2878),__exception_result_var_b304=memset(&result_211,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b304);
                    __result153__ = __result_obj__ = result_211;
                    return __result153__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result154__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2882)), "./neo-c.h", 1314, 2883))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1314, 2884)), "./neo-c.h", 1314, 2885))->key_list, "./neo-c.h", 1314, 2886)), "./neo-c.h", 1314, 2887))->it==((void*)0);
                    return __result154__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional269;
char* result_213;
void* __exception_result_var_b307;
char* __result155__;
_Bool _if_conditional270;
char* __result156__;
char* result_214;
void* __exception_result_var_b308;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_213, 0, sizeof(char*));
memset(&result_214, 0, sizeof(char*));
                    if(_if_conditional269=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1297, 2891)), "./neo-c.h", 1297, 2892))->key_list, "./neo-c.h", 1297, 2893)), "./neo-c.h", 1297, 2894))->it==((void*)0),                    _if_conditional269) {
                        (come_push_stackframe("./neo-c.h", 1299, 2895),__exception_result_var_b307=memset(&result_213,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b307);
                        __result155__ = __result_obj__ = result_213;
                        return __result155__;
                    }
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2896)), "./neo-c.h", 1302, 2897))->key_list, "./neo-c.h", 1302, 2898)), "./neo-c.h", 1302, 2899))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1302, 2900)), "./neo-c.h", 1302, 2901))->key_list, "./neo-c.h", 1302, 2902)), "./neo-c.h", 1302, 2903))->it, "./neo-c.h", 1302, 2904)), "./neo-c.h", 1302, 2905))->next;
                    if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1304, 2906)), "./neo-c.h", 1304, 2907))->key_list, "./neo-c.h", 1304, 2908)), "./neo-c.h", 1304, 2909))->it) {
                        __result156__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1305, 2910)), "./neo-c.h", 1305, 2911))->key_list, "./neo-c.h", 1305, 2912)), "./neo-c.h", 1305, 2913))->it, "./neo-c.h", 1305, 2914)), "./neo-c.h", 1305, 2915))->item;
                        return __result156__;
                    }
                    (come_push_stackframe("./neo-c.h", 1309, 2916),__exception_result_var_b308=memset(&result_214,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b308);
                    __result157__ = __result_obj__ = result_214;
                    return __result157__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b311;
unsigned int hash_217;
unsigned int it_218;
_Bool _while_condtional24;
_Bool _if_conditional271;
_Bool __exception_result_var_b312;
_Bool _if_conditional272;
struct sVar* __result158__;
_Bool _if_conditional273;
_Bool _if_conditional274;
struct sVar* __result159__;
struct sVar* __result160__;
struct sVar* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_217, 0, sizeof(unsigned int));
memset(&it_218, 0, sizeof(unsigned int));
                        hash_217=(come_push_stackframe("./neo-c.h", 1207, 2923),__exception_result_var_b311=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2921)), "./neo-c.h", 1207, 2922))), come_pop_stackframe(), __exception_result_var_b311)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1207, 2924)), "./neo-c.h", 1207, 2925))->size;
                        it_218=hash_217;
                        while(_while_condtional24=(_Bool)1,                        _while_condtional24) {
                            if(_if_conditional271=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1211, 2926)), "./neo-c.h", 1211, 2927))->item_existance, "./neo-c.h", 1211, 2928))[it_218],                            _if_conditional271) {
                                if(_if_conditional272=(come_push_stackframe("./neo-c.h", 1213, 2934),__exception_result_var_b312=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1213, 2929)), "./neo-c.h", 1213, 2930))->keys, "./neo-c.h", 1213, 2931))[it_218], "./neo-c.h", 1213, 2932)), "./neo-c.h", 1213, 2933)),key), come_pop_stackframe(), __exception_result_var_b312),                                _if_conditional272) {
                                    __result158__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1215, 2935)), "./neo-c.h", 1215, 2936))->items, "./neo-c.h", 1215, 2937))[it_218];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result158__;
                                }
                                it_218++;
                                if(_if_conditional273=it_218>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1220, 2938)), "./neo-c.h", 1220, 2939))->size,                                _if_conditional273) {
                                    it_218=0;
                                }
                                else {
                                    if(_if_conditional274=it_218==hash_217,                                    _if_conditional274) {
                                        __result159__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result159__;
                                    }
                                }
                            }
                            else {
                                __result160__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result160__;
                            }
                        }
                        __result161__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result161__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_224;
struct list_item$1charp* it_225;
_Bool _while_condtional27;
_Bool __exception_result_var_b319;
_Bool _if_conditional281;
struct list$1charp* __exception_result_var_b321;
struct list$1charp* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_224, 0, sizeof(int));
memset(&it_225, 0, sizeof(struct list_item$1charp*));
                            it2_224=0;
                            it_225=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 442, 2991)), "./neo-c.h", 442, 2992))->head;
                            while(_while_condtional27=it_225!=((void*)0),                            _while_condtional27) {
                                if(_if_conditional281=(come_push_stackframe("./neo-c.h", 444, 2997),__exception_result_var_b319=string_equals(((char*)come_null_check(((char*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_225, "./neo-c.h", 444, 2993)), "./neo-c.h", 444, 2994))->item, "./neo-c.h", 444, 2995)), "./neo-c.h", 444, 2996)),item), come_pop_stackframe(), __exception_result_var_b319),                                _if_conditional281) {
                                    (come_push_stackframe("./neo-c.h", 445, 3069),__exception_result_var_b321=list$1charp_delete(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 445, 2998)), "./neo-c.h", 445, 2999)),it2_224,it2_224+1), come_pop_stackframe(), __exception_result_var_b321);
                                    break;
                                }
                                it2_224++;
                                it_225=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_225, "./neo-c.h", 450, 3070)), "./neo-c.h", 450, 3071))->next;
                            }
                            __result165__ = __result_obj__ = self;
                            return __result165__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool _if_conditional284;
int tmp_226;
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
struct list$1charp* __result162__;
_Bool _if_conditional288;
struct list$1charp* __exception_result_var_b320;
_Bool _if_conditional289;
struct list_item$1charp* it_229;
int i_230;
_Bool _while_condtional29;
_Bool _if_conditional290;
struct list_item$1charp* prev_it_231;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list_item$1charp* it_232;
int i_233;
_Bool _while_condtional30;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct list_item$1charp* prev_it_234;
struct list_item$1charp* it_235;
struct list_item$1charp* head_prev_it_236;
struct list_item$1charp* tail_it_237;
int i_238;
_Bool _while_condtional31;
_Bool _if_conditional295;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list_item$1charp* prev_it_239;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list$1charp* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_226, 0, sizeof(int));
memset(&it_229, 0, sizeof(struct list_item$1charp*));
memset(&i_230, 0, sizeof(int));
memset(&prev_it_231, 0, sizeof(struct list_item$1charp*));
memset(&it_232, 0, sizeof(struct list_item$1charp*));
memset(&i_233, 0, sizeof(int));
memset(&prev_it_234, 0, sizeof(struct list_item$1charp*));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_236, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_237, 0, sizeof(struct list_item$1charp*));
memset(&i_238, 0, sizeof(int));
memset(&prev_it_239, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional282=head<0,                                        _if_conditional282) {
                                            head+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 458, 3000)), "./neo-c.h", 458, 3001))->len;
                                        }
                                        if(_if_conditional283=tail<0,                                        _if_conditional283) {
                                            tail+=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 461, 3002)), "./neo-c.h", 461, 3003))->len+1;
                                        }
                                        if(_if_conditional284=head>tail,                                        _if_conditional284) {
                                            tmp_226=tail;
                                            tail=head;
                                            head=tmp_226;
                                        }
                                        if(_if_conditional285=head<0,                                        _if_conditional285) {
                                            head=0;
                                        }
                                        if(_if_conditional286=tail>((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 474, 3004)), "./neo-c.h", 474, 3005))->len,                                        _if_conditional286) {
                                            tail=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 475, 3006)), "./neo-c.h", 475, 3007))->len;
                                        }
                                        if(_if_conditional287=head==tail,                                        _if_conditional287) {
                                            __result162__ = __result_obj__ = self;
                                            return __result162__;
                                        }
                                        if(_if_conditional288=head==0&&tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 482, 3008)), "./neo-c.h", 482, 3009))->len,                                        _if_conditional288) {
                                            (come_push_stackframe("./neo-c.h", 484, 3022),__exception_result_var_b320=list$1charp_reset(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 484, 3010)), "./neo-c.h", 484, 3011))), come_pop_stackframe(), __exception_result_var_b320);
                                        }
                                        else {
                                            if(_if_conditional289=head==0,                                            _if_conditional289) {
                                                it_229=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 487, 3023)), "./neo-c.h", 487, 3024))->head;
                                                i_230=0;
                                                while(_while_condtional29=it_229!=((void*)0),                                                _while_condtional29) {
                                                    if(_if_conditional290=i_230<tail,                                                    _if_conditional290) {
                                                        prev_it_231=it_229;
                                                        it_229=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_229, "./neo-c.h", 493, 3025)), "./neo-c.h", 493, 3026))->next;
                                                        i_230++;
                                                        come_call_finalizer3(prev_it_231,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 498, 3027)), "./neo-c.h", 498, 3028))->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional291=i_230==tail,                                                        _if_conditional291) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 501, 3029)), "./neo-c.h", 501, 3030))->head=it_229;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 502, 3031)), "./neo-c.h", 502, 3032))->head, "./neo-c.h", 502, 3033)), "./neo-c.h", 502, 3034))->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_229=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_229, "./neo-c.h", 506, 3035)), "./neo-c.h", 506, 3036))->next;
                                                            i_230++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional292=tail==((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 511, 3037)), "./neo-c.h", 511, 3038))->len,                                                _if_conditional292) {
                                                    it_232=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 512, 3039)), "./neo-c.h", 512, 3040))->head;
                                                    i_233=0;
                                                    while(_while_condtional30=it_232!=((void*)0),                                                    _while_condtional30) {
                                                        if(_if_conditional293=i_233==head,                                                        _if_conditional293) {
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 516, 3041)), "./neo-c.h", 516, 3042))->tail=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_232, "./neo-c.h", 516, 3043)), "./neo-c.h", 516, 3044))->prev;
                                                            ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 517, 3045)), "./neo-c.h", 517, 3046))->tail, "./neo-c.h", 517, 3047)), "./neo-c.h", 517, 3048))->next=((void*)0);
                                                        }
                                                        if(_if_conditional294=i_233>=head,                                                        _if_conditional294) {
                                                            prev_it_234=it_232;
                                                            it_232=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_232, "./neo-c.h", 523, 3049)), "./neo-c.h", 523, 3050))->next;
                                                            i_233++;
                                                            come_call_finalizer3(prev_it_234,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 528, 3051)), "./neo-c.h", 528, 3052))->len--;
                                                        }
                                                        else {
                                                            it_232=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_232, "./neo-c.h", 531, 3053)), "./neo-c.h", 531, 3054))->next;
                                                            i_233++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_235=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 537, 3055)), "./neo-c.h", 537, 3056))->head;
                                                    head_prev_it_236=((void*)0);
                                                    tail_it_237=((void*)0);
                                                    i_238=0;
                                                    while(_while_condtional31=it_235!=((void*)0),                                                    _while_condtional31) {
                                                        if(_if_conditional295=i_238==head,                                                        _if_conditional295) {
                                                            head_prev_it_236=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_235, "./neo-c.h", 546, 3057)), "./neo-c.h", 546, 3058))->prev;
                                                        }
                                                        if(_if_conditional296=i_238==tail,                                                        _if_conditional296) {
                                                            tail_it_237=it_235;
                                                        }
                                                        if(_if_conditional297=i_238>=head&&i_238<tail,                                                        _if_conditional297) {
                                                            prev_it_239=it_235;
                                                            it_235=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_235, "./neo-c.h", 556, 3059)), "./neo-c.h", 556, 3060))->next;
                                                            i_238++;
                                                            come_call_finalizer3(prev_it_239,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 561, 3061)), "./neo-c.h", 561, 3062))->len--;
                                                        }
                                                        else {
                                                            it_235=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_235, "./neo-c.h", 564, 3063)), "./neo-c.h", 564, 3064))->next;
                                                            i_238++;
                                                        }
                                                    }
                                                    if(_if_conditional298=head_prev_it_236!=((void*)0),                                                    _if_conditional298) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(head_prev_it_236, "./neo-c.h", 570, 3065)), "./neo-c.h", 570, 3066))->next=tail_it_237;
                                                    }
                                                    if(_if_conditional299=tail_it_237!=((void*)0),                                                    _if_conditional299) {
                                                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(tail_it_237, "./neo-c.h", 573, 3067)), "./neo-c.h", 573, 3068))->prev=head_prev_it_236;
                                                    }
                                                }
                                            }
                                        }
                                        __result164__ = __result_obj__ = self;
                                        return __result164__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_227;
_Bool _while_condtional28;
struct list_item$1charp* prev_it_228;
struct list$1charp* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_227, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_228, 0, sizeof(struct list_item$1charp*));
                                                it_227=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 426, 3012)), "./neo-c.h", 426, 3013))->head;
                                                while(_while_condtional28=it_227!=((void*)0),                                                _while_condtional28) {
                                                    prev_it_228=it_227;
                                                    it_227=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(it_227, "./neo-c.h", 429, 3014)), "./neo-c.h", 429, 3015))->next;
                                                    come_call_finalizer3(prev_it_228,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 433, 3016)), "./neo-c.h", 433, 3017))->head=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 434, 3018)), "./neo-c.h", 434, 3019))->tail=((void*)0);
                                                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 436, 3020)), "./neo-c.h", 436, 3021))->len=0;
                                                __result163__ = __result_obj__ = self;
                                                return __result163__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional305;
char* result_241;
void* __exception_result_var_b325;
char* __result166__;
_Bool _if_conditional306;
char* __result167__;
char* result_242;
void* __exception_result_var_b326;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_241, 0, sizeof(char*));
memset(&result_242, 0, sizeof(char*));
            if(_if_conditional305=self==((void*)0),            _if_conditional305) {
                (come_push_stackframe("./neo-c.h", 284, 3128),__exception_result_var_b325=memset(&result_241,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b325);
                __result166__ = __result_obj__ = result_241;
                return __result166__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 3129)), "./neo-c.h", 287, 3130))->it=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 287, 3131)), "./neo-c.h", 287, 3132))->head;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 289, 3133)), "./neo-c.h", 289, 3134))->it) {
                __result167__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 290, 3135)), "./neo-c.h", 290, 3136))->it, "./neo-c.h", 290, 3137)), "./neo-c.h", 290, 3138))->item;
                return __result167__;
            }
            (come_push_stackframe("./neo-c.h", 294, 3139),__exception_result_var_b326=memset(&result_242,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b326);
            __result168__ = __result_obj__ = result_242;
            return __result168__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
            __result169__ = self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 317, 3145)), "./neo-c.h", 317, 3146))->it==((void*)0);
            return __result169__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional307;
char* result_244;
void* __exception_result_var_b329;
char* __result170__;
_Bool _if_conditional308;
char* __result171__;
char* result_245;
void* __exception_result_var_b330;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(char*));
memset(&result_245, 0, sizeof(char*));
            if(_if_conditional307=self==((void*)0)||((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 299, 3152)), "./neo-c.h", 299, 3153))->it==((void*)0),            _if_conditional307) {
                (come_push_stackframe("./neo-c.h", 301, 3154),__exception_result_var_b329=memset(&result_244,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b329);
                __result170__ = __result_obj__ = result_244;
                return __result170__;
            }
            ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 3155)), "./neo-c.h", 305, 3156))->it=((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 305, 3157)), "./neo-c.h", 305, 3158))->it, "./neo-c.h", 305, 3159)), "./neo-c.h", 305, 3160))->next;
            if(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 307, 3161)), "./neo-c.h", 307, 3162))->it) {
                __result171__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 308, 3163)), "./neo-c.h", 308, 3164))->it, "./neo-c.h", 308, 3165)), "./neo-c.h", 308, 3166))->item;
                return __result171__;
            }
            (come_push_stackframe("./neo-c.h", 312, 3167),__exception_result_var_b330=memset(&result_245,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b330);
            __result172__ = __result_obj__ = result_245;
            return __result172__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional311;
void* right_value288;
struct list_item$1charp* litem_246;
_Bool _if_conditional312;
void* right_value289;
struct list_item$1charp* litem_247;
void* right_value290;
struct list_item$1charp* litem_248;
struct list$1charp* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&litem_246, 0, sizeof(struct list_item$1charp*));
right_value289 = (void*)0;
memset(&litem_247, 0, sizeof(struct list_item$1charp*));
right_value290 = (void*)0;
memset(&litem_248, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional311=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 222, 3176)), "./neo-c.h", 222, 3177))->len==0,                _if_conditional311) {
                    litem_246=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value288=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 223, "list_item$1charp"))));
                    come_call_finalizer3(right_value288,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_246, "./neo-c.h", 225, 3178)), "./neo-c.h", 225, 3179))->prev=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_246, "./neo-c.h", 226, 3180)), "./neo-c.h", 226, 3181))->next=((void*)0);
                    ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_246, "./neo-c.h", 227, 3182)), "./neo-c.h", 227, 3183))->item=item;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 229, 3184)), "./neo-c.h", 229, 3185))->tail=litem_246;
                    ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 230, 3186)), "./neo-c.h", 230, 3187))->head=litem_246;
                }
                else {
                    if(_if_conditional312=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 232, 3188)), "./neo-c.h", 232, 3189))->len==1,                    _if_conditional312) {
                        litem_247=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value289=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 233, "list_item$1charp"))));
                        come_call_finalizer3(right_value289,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_247, "./neo-c.h", 235, 3190)), "./neo-c.h", 235, 3191))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 235, 3192)), "./neo-c.h", 235, 3193))->head;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_247, "./neo-c.h", 236, 3194)), "./neo-c.h", 236, 3195))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_247, "./neo-c.h", 237, 3196)), "./neo-c.h", 237, 3197))->item=item;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 239, 3198)), "./neo-c.h", 239, 3199))->tail=litem_247;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 240, 3200)), "./neo-c.h", 240, 3201))->head, "./neo-c.h", 240, 3202)), "./neo-c.h", 240, 3203))->next=litem_247;
                    }
                    else {
                        litem_248=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value290=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 243, "list_item$1charp"))));
                        come_call_finalizer3(right_value290,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_248, "./neo-c.h", 245, 3204)), "./neo-c.h", 245, 3205))->prev=((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 245, 3206)), "./neo-c.h", 245, 3207))->tail;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_248, "./neo-c.h", 246, 3208)), "./neo-c.h", 246, 3209))->next=((void*)0);
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(litem_248, "./neo-c.h", 247, 3210)), "./neo-c.h", 247, 3211))->item=item;
                        ((struct list_item$1charp*)come_null_check(((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 249, 3212)), "./neo-c.h", 249, 3213))->tail, "./neo-c.h", 249, 3214)), "./neo-c.h", 249, 3215))->next=litem_248;
                        ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 250, 3216)), "./neo-c.h", 250, 3217))->tail=litem_248;
                    }
                }
                ((struct list$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./neo-c.h", 253, 3218)), "./neo-c.h", 253, 3219))->len++;
                __result173__ = __result_obj__ = self;
                return __result173__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value292;
struct sVar* self_249;
void* right_value293;
char* __exception_result_var_b336;
char* __dec_obj103;
struct sType* __exception_result_var_b337;
void* right_value294;
struct sType* __dec_obj104;
void* right_value295;
char* __exception_result_var_b338;
char* __dec_obj105;
void* right_value296;
char* __exception_result_var_b339;
struct map$2charphsVarph* __exception_result_var_b340;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
memset(&self_249, 0, sizeof(struct sVar*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
    self_249=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value292=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 761, "sVar"))));
    come_call_finalizer3(right_value292,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 763, 3223)), "07var.c", 763, 3224))->mName;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 763, 3223)), "07var.c", 763, 3224))->mName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 763, 3225),__exception_result_var_b336=((char*)(right_value293=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b336));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj104=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 764, 3226)), "07var.c", 764, 3227))->mType;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 764, 3226)), "07var.c", 764, 3227))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=(come_push_stackframe("07var.c", 764, 3228),__exception_result_var_b337=sType_clone(type), come_pop_stackframe(), __exception_result_var_b337))));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value294,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 766, 3229)), "07var.c", 766, 3230))->mGlobal=(_Bool)1;
    __dec_obj105=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 768, 3231)), "07var.c", 768, 3232))->mCValueName;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 768, 3231)), "07var.c", 768, 3232))->mCValueName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 768, 3233),__exception_result_var_b338=((char*)(right_value295=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b338));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 770, 3234)), "07var.c", 770, 3235))->mBlockLevel=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 770, 3236)), "07var.c", 770, 3237))->block_level;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 771, 3238)), "07var.c", 771, 3239))->mAllocaValue=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 772, 3240)), "07var.c", 772, 3241))->mFunctionParam=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_249, "07var.c", 773, 3242)), "07var.c", 773, 3243))->mNoFree=(_Bool)0;
    (come_push_stackframe("07var.c", 775, 3251),__exception_result_var_b340=map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 775, 3244)), "07var.c", 775, 3245))->gv_table, "07var.c", 775, 3246)), "07var.c", 775, 3247))->mVars, "07var.c", 775, 3248)), "07var.c", 775, 3249)),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 775, 3250),__exception_result_var_b339=((char*)(right_value296=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b339)),(struct sVar*)come_increment_ref_count(self_249)), come_pop_stackframe(), __exception_result_var_b340);
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_249,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value297;
struct sVar* self_250;
void* right_value298;
char* __exception_result_var_b341;
char* __dec_obj106;
struct sType* __exception_result_var_b342;
void* right_value299;
struct sType* __dec_obj107;
void* right_value300;
char* __exception_result_var_b343;
char* __dec_obj108;
void* right_value301;
char* __exception_result_var_b344;
struct map$2charphsVarph* __exception_result_var_b345;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&self_250, 0, sizeof(struct sVar*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
    self_250=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value297=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 780, "sVar"))));
    come_call_finalizer3(right_value297,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 782, 3252)), "07var.c", 782, 3253))->mName;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 782, 3252)), "07var.c", 782, 3253))->mName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 782, 3254),__exception_result_var_b341=((char*)(right_value298=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b341));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj107=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 783, 3255)), "07var.c", 783, 3256))->mType;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 783, 3255)), "07var.c", 783, 3256))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(come_push_stackframe("07var.c", 783, 3257),__exception_result_var_b342=sType_clone(type), come_pop_stackframe(), __exception_result_var_b342))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 785, 3258)), "07var.c", 785, 3259))->mGlobal=(_Bool)1;
    __dec_obj108=((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 787, 3260)), "07var.c", 787, 3261))->mCValueName;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 787, 3260)), "07var.c", 787, 3261))->mCValueName=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 787, 3262),__exception_result_var_b343=((char*)(right_value300=__builtin_string(c_value))), come_pop_stackframe(), __exception_result_var_b343));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 789, 3263)), "07var.c", 789, 3264))->mBlockLevel=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 789, 3265)), "07var.c", 789, 3266))->block_level;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 790, 3267)), "07var.c", 790, 3268))->mAllocaValue=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 791, 3269)), "07var.c", 791, 3270))->mFunctionParam=(_Bool)0;
    ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self_250, "07var.c", 792, 3271)), "07var.c", 792, 3272))->mNoFree=(_Bool)0;
    (come_push_stackframe("07var.c", 794, 3280),__exception_result_var_b345=map$2charphsVarph_insert(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 794, 3273)), "07var.c", 794, 3274))->gv_table, "07var.c", 794, 3275)), "07var.c", 794, 3276))->mVars, "07var.c", 794, 3277)), "07var.c", 794, 3278)),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 794, 3279),__exception_result_var_b344=((char*)(right_value301=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b344)),(struct sVar*)come_increment_ref_count(self_250)), come_pop_stackframe(), __exception_result_var_b345);
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_250,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b346;
_Bool is_type_name_flag_251;
_Bool multiple_declare_252;
_Bool _if_conditional313;
char* p_253;
int sline_254;
_Bool __exception_result_var_b347;
_Bool _if_conditional314;
void* right_value302;
struct tuple3$3sTypephcharphbool* __exception_result_var_b348;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_255;
char* name_256;
_Bool err_257;
_Bool _if_conditional317;
void* right_value303;
struct tuple2$2sTypephcharph* __exception_result_var_b349;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* type_258;
char* name_259;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value304;
char* __exception_result_var_b350;
_Bool no_output_err_260;
_Bool no_comma_261;
_Bool no_output_come_code_262;
void* right_value305;
struct sNode* __exception_result_var_b351;
struct sNode* exp_263;
_Bool __exception_result_var_b352;
_Bool _if_conditional322;
_Bool attr_define_264;
_Bool _if_conditional323;
char* p_265;
int sline_266;
void* right_value306;
struct tuple3$3sTypephcharphbool* __exception_result_var_b353;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_267;
char* name_268;
_Bool err_269;
_Bool __exception_result_var_b354;
_Bool _if_conditional324;
struct sFun* __exception_result_var_b355;
struct sFun* fun_270;
_Bool __exception_result_var_b356;
_Bool __exception_result_var_b357;
_Bool _if_conditional325;
void* right_value307;
char* __exception_result_var_b358;
char* buf2_271;
struct list$1charph* __dec_obj109;
struct list$1charph* multiple_assign_272;
_Bool _if_conditional326;
void* right_value308;
void* right_value309;
struct list$1charph* __exception_result_var_b359;
struct list$1charph* __dec_obj110;
char* __exception_result_var_b360;
void* right_value313;
struct list$1charph* __exception_result_var_b361;
_Bool _while_condtional32;
void* right_value314;
char* __exception_result_var_b362;
char* buf3_276;
char* __exception_result_var_b363;
void* right_value315;
struct list$1charph* __exception_result_var_b364;
_Bool _if_conditional329;
_Bool no_comma_277;
void* right_value316;
struct sNode* __exception_result_var_b365;
struct sNode* right_value_278;
void* right_value317;
struct sNode* __exception_result_var_b366;
struct sNode* __dec_obj114;
void* right_value318;
void* right_value319;
char* __exception_result_var_b367;
void* right_value320;
struct sStoreNode* __exception_result_var_b368;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value328;
struct sNode* __result178__;
_Bool _if_conditional345;
void* right_value329;
void* right_value330;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b375;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_280;
void* right_value331;
struct tuple3$3sTypephcharphbool* __exception_result_var_b376;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_281;
char* name_282;
_Bool err_283;
_Bool _if_conditional346;
int __exception_result_var_b377;
void* right_value332;
struct tuple2$2sTypephcharph* __exception_result_var_b378;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_284;
char* var_name_285;
_Bool _if_conditional347;
_Bool no_comma_286;
void* right_value333;
struct sNode* __exception_result_var_b379;
struct sNode* exp_287;
void* right_value337;
void* right_value338;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b380;
void* right_value339;
void* right_value340;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b381;
_Bool _while_condtional33;
void* right_value341;
struct tuple2$2sTypephcharph* __exception_result_var_b382;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_291;
char* var_name_292;
_Bool _if_conditional352;
_Bool no_comma_293;
void* right_value342;
struct sNode* __exception_result_var_b383;
struct sNode* exp_294;
void* right_value343;
void* right_value344;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b384;
void* right_value345;
void* right_value346;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b385;
struct sNode* __dec_obj129;
struct sNode* right_node_295;
void* right_value347;
char* __exception_result_var_b386;
char* var_name2_296;
void* right_value348;
void* right_value349;
char* __exception_result_var_b387;
void* right_value350;
struct sStoreNode* __exception_result_var_b388;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value358;
struct sNode* __result184__;
_Bool _if_conditional368;
void* right_value359;
struct tuple3$3sTypephcharphbool* __exception_result_var_b395;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_298;
char* name_299;
_Bool err_300;
_Bool _if_conditional369;
int __exception_result_var_b396;
unsigned long int __exception_result_var_b397;
void* right_value360;
char* __exception_result_var_b398;
char* __dec_obj136;
void* right_value364;
void* right_value365;
struct list$1tuple2$2charphsTypephph* __exception_result_var_b399;
_Bool _if_conditional381;
void* right_value366;
void* right_value367;
char* __exception_result_var_b400;
void* right_value368;
struct sLoadNode* __exception_result_var_b401;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* right_value372;
struct sNode* self_node_304;
void* right_value373;
struct sNode* __exception_result_var_b404;
struct sNode* right_node_306;
void* right_value374;
struct sNode* __exception_result_var_b405;
struct sNode* __result189__;
void* right_value375;
struct sNode* __exception_result_var_b406;
struct sNode* __result190__;
_Bool _if_conditional388;
void* right_value376;
struct sNode* __exception_result_var_b407;
struct sNode* right_value_307;
void* right_value377;
struct sNode* __exception_result_var_b408;
struct sNode* __dec_obj144;
void* right_value378;
void* right_value379;
char* __exception_result_var_b409;
void* right_value380;
struct sStoreNode* __exception_result_var_b410;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value388;
struct sNode* __result193__;
struct sFun* __exception_result_var_b417;
_Bool _if_conditional404;
void* right_value389;
void* right_value390;
char* __exception_result_var_b418;
void* right_value391;
struct sLoadNode* __exception_result_var_b419;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
void* right_value395;
struct sNode* node_309;
void* right_value396;
struct sNode* __exception_result_var_b422;
struct sNode* __dec_obj153;
struct sNode* __result196__;
char* word_311;
_Bool __exception_result_var_b423;
_Bool _if_conditional411;
void* right_value397;
char* __exception_result_var_b424;
char* __dec_obj154;
void* right_value398;
char* __exception_result_var_b425;
char* __dec_obj155;
_Bool __exception_result_var_b426;
_Bool is_type_name_flag_312;
_Bool _if_conditional412;
void* right_value399;
struct tuple3$3sTypephcharphbool* __exception_result_var_b427;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_313;
char* name_314;
_Bool err_315;
_Bool _if_conditional413;
int __exception_result_var_b428;
_Bool _if_conditional414;
void* right_value400;
struct sNode* __exception_result_var_b429;
struct sNode* right_value_316;
void* right_value401;
struct sNode* __exception_result_var_b430;
struct sNode* __dec_obj156;
void* right_value402;
void* right_value403;
struct sStoreNode* __exception_result_var_b431;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value411;
struct sNode* __result199__;
void* right_value412;
void* right_value413;
struct sStoreNode* __exception_result_var_b438;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value421;
struct sNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_251, 0, sizeof(_Bool));
memset(&multiple_declare_252, 0, sizeof(_Bool));
memset(&p_253, 0, sizeof(char*));
memset(&sline_254, 0, sizeof(int));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&no_output_err_260, 0, sizeof(_Bool));
memset(&no_comma_261, 0, sizeof(_Bool));
memset(&no_output_come_code_262, 0, sizeof(_Bool));
right_value305 = (void*)0;
memset(&exp_263, 0, sizeof(struct sNode*));
memset(&attr_define_264, 0, sizeof(_Bool));
memset(&p_265, 0, sizeof(char*));
memset(&sline_266, 0, sizeof(int));
right_value306 = (void*)0;
memset(&fun_270, 0, sizeof(struct sFun*));
right_value307 = (void*)0;
memset(&buf2_271, 0, sizeof(char*));
memset(&multiple_assign_272, 0, sizeof(struct list$1charph*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
memset(&buf3_276, 0, sizeof(char*));
right_value315 = (void*)0;
memset(&no_comma_277, 0, sizeof(_Bool));
right_value316 = (void*)0;
memset(&right_value_278, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&multiple_declare_280, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&no_comma_286, 0, sizeof(_Bool));
right_value333 = (void*)0;
memset(&exp_287, 0, sizeof(struct sNode*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&no_comma_293, 0, sizeof(_Bool));
right_value342 = (void*)0;
memset(&exp_294, 0, sizeof(struct sNode*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&right_node_295, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
memset(&var_name2_296, 0, sizeof(char*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value372 = (void*)0;
memset(&self_node_304, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
memset(&right_node_306, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&right_value_307, 0, sizeof(struct sNode*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value395 = (void*)0;
memset(&node_309, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
memset(&word_311, 0, sizeof(char*));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&is_type_name_flag_312, 0, sizeof(_Bool));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&right_value_316, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value421 = (void*)0;
    is_type_name_flag_251=(come_push_stackframe("07var.c", 799, 3281),__exception_result_var_b346=is_type_name(buf,info), come_pop_stackframe(), __exception_result_var_b346);
    multiple_declare_252=(_Bool)0;
    if(is_type_name_flag_251) {
        p_253=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 805, 3282)), "07var.c", 805, 3283))->p;
        sline_254=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 806, 3284)), "07var.c", 806, 3285))->sline;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 808, 3286)), "07var.c", 808, 3287))->p=head;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 809, 3288)), "07var.c", 809, 3289))->sline=head_sline;
        if(_if_conditional314=(come_push_stackframe("07var.c", 811, 3293),__exception_result_var_b347=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 811, 3290)), "07var.c", 811, 3291))->p, "07var.c", 811, 3292))), come_pop_stackframe(), __exception_result_var_b347)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 811, 3294)), "07var.c", 811, 3295))->p, "07var.c", 811, 3296))==95,        _if_conditional314) {
            multiple_assign_var2=(come_push_stackframe("07var.c", 813, 3297),__exception_result_var_b348=((struct tuple3$3sTypephcharphbool*)(right_value302=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b348);
            type_255=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_256=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_257=multiple_assign_var2->v3;
            come_call_finalizer3(right_value302,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_257) {
                multiple_assign_var3=(come_push_stackframe("07var.c", 816, 3306),__exception_result_var_b349=((struct tuple2$2sTypephcharph*)(right_value303=parse_variable_name((struct sType*)come_increment_ref_count(type_255),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b349);
                type_258=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_259=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value303,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional320=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 818, 3315)), "07var.c", 818, 3316))->p, "07var.c", 818, 3317))==61,                _if_conditional320) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 819, 3318)), "07var.c", 819, 3319))->p++;
                    (come_push_stackframe("07var.c", 820,3320),skip_spaces_and_lf(info),come_pop_stackframe());
                    if(_if_conditional321=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 822, 3321)), "07var.c", 822, 3322))->p, "07var.c", 822, 3323))==123,                    _if_conditional321) {
                        (come_push_stackframe("07var.c", 823, 3324),__exception_result_var_b350=((char*)(right_value304=skip_block(info))), come_pop_stackframe(), __exception_result_var_b350);
                        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_260=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 826, 3325)), "07var.c", 826, 3326))->no_output_err;
                        no_comma_261=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 827, 3327)), "07var.c", 827, 3328))->no_comma;
                        no_output_come_code_262=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 828, 3329)), "07var.c", 828, 3330))->no_output_come_code;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 830, 3331)), "07var.c", 830, 3332))->no_output_err=(_Bool)1;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 831, 3333)), "07var.c", 831, 3334))->no_comma=(_Bool)1;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 832, 3335)), "07var.c", 832, 3336))->no_output_come_code=(_Bool)1;
                        exp_263=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 834, 3337),__exception_result_var_b351=((struct sNode*)(right_value305=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b351));
                        if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 836, 3338)), "07var.c", 836, 3339))->no_comma=no_comma_261;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 837, 3340)), "07var.c", 837, 3341))->no_output_err=no_output_err_260;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 838, 3342)), "07var.c", 838, 3343))->no_output_come_code=no_output_come_code_262;
                        if(exp_263) { exp_263 = come_decrement_ref_count2(exp_263, ((struct sNode*)exp_263)->finalize, ((struct sNode*)exp_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(_if_conditional322=!(come_push_stackframe("07var.c", 842, 3344),__exception_result_var_b352=is_type_name(name_259,info), come_pop_stackframe(), __exception_result_var_b352)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 842, 3345)), "07var.c", 842, 3346))->p, "07var.c", 842, 3347))==44,                _if_conditional322) {
                    multiple_declare_252=(_Bool)1;
                }
                come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_255,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 851, 3348)), "07var.c", 851, 3349))->p=p_253;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 852, 3350)), "07var.c", 852, 3351))->sline=sline_254;
    }
    attr_define_264=(_Bool)0;
    if(_if_conditional323=is_type_name_flag_251&&((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 856, 3352)), "07var.c", 856, 3353))->defining_class,    _if_conditional323) {
        p_265=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 857, 3354)), "07var.c", 857, 3355))->p;
        sline_266=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 858, 3356)), "07var.c", 858, 3357))->sline;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 860, 3358)), "07var.c", 860, 3359))->p=head;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 861, 3360)), "07var.c", 861, 3361))->sline=head_sline;
        multiple_assign_var4=(come_push_stackframe("07var.c", 863, 3362),__exception_result_var_b353=((struct tuple3$3sTypephcharphbool*)(right_value306=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b353);
        type_267=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_268=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_269=multiple_assign_var4->v3;
        come_call_finalizer3(right_value306,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional324=err_269&&(come_push_stackframe("07var.c", 865, 3365),__exception_result_var_b354=strmemcmp(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 865, 3363)), "07var.c", 865, 3364))->p,"self"), come_pop_stackframe(), __exception_result_var_b354),        _if_conditional324) {
            attr_define_264=(_Bool)1;
        }
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 869, 3366)), "07var.c", 869, 3367))->p=p_265;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 870, 3368)), "07var.c", 870, 3369))->sline=sline_266;
        come_call_finalizer3(type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_268 = come_decrement_ref_count2(name_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    (come_push_stackframe("07var.c", 873,3370),parse_sharp_v5(info),come_pop_stackframe());
    fun_270=(come_push_stackframe("07var.c", 874, 3373),__exception_result_var_b355=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 874, 3371)), "07var.c", 874, 3372))->funcs,buf), come_pop_stackframe(), __exception_result_var_b355);
    if(_if_conditional325=(!gComeC&&(come_push_stackframe("07var.c", 876, 3374),__exception_result_var_b356=charp_operator_equals(buf,"var"), come_pop_stackframe(), __exception_result_var_b356))||(come_push_stackframe("07var.c", 876, 3375),__exception_result_var_b357=charp_operator_equals(buf,"auto"), come_pop_stackframe(), __exception_result_var_b357),    _if_conditional325) {
        (come_push_stackframe("07var.c", 877,3376),parse_sharp_v5(info),come_pop_stackframe());
        buf2_271=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 878, 3377),__exception_result_var_b358=((char*)(right_value307=parse_word(info))), come_pop_stackframe(), __exception_result_var_b358));
        right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("07var.c", 879,3378),parse_sharp_v5(info),come_pop_stackframe());
        __dec_obj109=multiple_assign_272;
        multiple_assign_272=((void*)0);
        come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        if(_if_conditional326=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 883, 3379)), "07var.c", 883, 3380))->p, "07var.c", 883, 3381))==44,        _if_conditional326) {
            __dec_obj110=multiple_assign_272;
            multiple_assign_272=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("07var.c", 884, 3383),__exception_result_var_b359=((struct list$1charph*)(right_value309=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value308=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 884, "list$1charph"))), "07var.c", 884, 3382)))))), come_pop_stackframe(), __exception_result_var_b359));
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value308,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value309,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("07var.c", 885, 3431),__exception_result_var_b361=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(multiple_assign_272, "07var.c", 885, 3384)), "07var.c", 885, 3385)),(char*)come_increment_ref_count(((char*)(right_value313=(come_push_stackframe("07var.c", 885, 3430),__exception_result_var_b360=string_clone(buf2_271), come_pop_stackframe(), __exception_result_var_b360))))), come_pop_stackframe(), __exception_result_var_b361);
            right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional32=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 887, 3432)), "07var.c", 887, 3433))->p, "07var.c", 887, 3434))==44,            _while_condtional32) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 888, 3435)), "07var.c", 888, 3436))->p++;
                (come_push_stackframe("07var.c", 889,3437),skip_spaces_and_lf(info),come_pop_stackframe());
                (come_push_stackframe("07var.c", 891,3438),parse_sharp_v5(info),come_pop_stackframe());
                buf3_276=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 892, 3439),__exception_result_var_b362=((char*)(right_value314=parse_word(info))), come_pop_stackframe(), __exception_result_var_b362));
                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("07var.c", 893,3440),parse_sharp_v5(info),come_pop_stackframe());
                (come_push_stackframe("07var.c", 895, 3444),__exception_result_var_b364=list$1charph_push_back(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(multiple_assign_272, "07var.c", 895, 3441)), "07var.c", 895, 3442)),(char*)come_increment_ref_count(((char*)(right_value315=(come_push_stackframe("07var.c", 895, 3443),__exception_result_var_b363=string_clone(buf3_276), come_pop_stackframe(), __exception_result_var_b363))))), come_pop_stackframe(), __exception_result_var_b364);
                right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_276 = come_decrement_ref_count2(buf3_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        (come_push_stackframe("07var.c", 898,3445),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional329=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 900, 3446)), "07var.c", 900, 3447))->p, "07var.c", 900, 3448))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 900, 3449)), "07var.c", 900, 3450))->p+1), "07var.c", 900, 3451))!=61,        _if_conditional329) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 901, 3452)), "07var.c", 901, 3453))->p++;
            (come_push_stackframe("07var.c", 902,3454),skip_spaces_and_lf(info),come_pop_stackframe());
            (come_push_stackframe("07var.c", 904,3455),parse_sharp_v5(info),come_pop_stackframe());
            no_comma_277=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 905, 3456)), "07var.c", 906, 3457))->no_comma;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 906, 3458)), "07var.c", 906, 3459))->no_comma=(_Bool)1;
            right_value_278=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 907, 3460),__exception_result_var_b365=((struct sNode*)(right_value316=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b365));
            if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 908, 3461)), "07var.c", 908, 3462))->no_comma=no_comma_277;
            (come_push_stackframe("07var.c", 909,3463),parse_sharp_v5(info),come_pop_stackframe());
            __dec_obj114=right_value_278;
            right_value_278=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 911, 3464),__exception_result_var_b366=((struct sNode*)(right_value317=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_278),info))), come_pop_stackframe(), __exception_result_var_b366));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            (come_push_stackframe("07var.c", 912,3465),parse_sharp_v5(info),come_pop_stackframe());
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 914, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("07var.c", 914, 3468),__exception_result_var_b368=((struct sStoreNode*)(right_value320=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)come_null_check(((struct sStoreNode*)(right_value318=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 914, "sStoreNode"))), "07var.c", 914, 3466))),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 914, 3467),__exception_result_var_b367=((char*)(right_value319=__builtin_string(buf2_271))), come_pop_stackframe(), __exception_result_var_b367)),(struct list$1charph*)come_increment_ref_count(multiple_assign_272),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_278),info))), come_pop_stackframe(), __exception_result_var_b368));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result178__ = __result_obj__ = ((struct sNode*)(right_value328=_inf_value2));
            if(right_value_278) { right_value_278 = come_decrement_ref_count2(right_value_278, ((struct sNode*)right_value_278)->finalize, ((struct sNode*)right_value_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_271 = come_decrement_ref_count2(buf2_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_272,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value318,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value320,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result178__;
            if(right_value_278) { right_value_278 = come_decrement_ref_count2(right_value_278, ((struct sNode*)right_value_278)->finalize, ((struct sNode*)right_value_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            (come_push_stackframe("07var.c", 917,3546),err_msg(info,"var requires a right value(%c)",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 917, 3543)), "07var.c", 917, 3544))->p, "07var.c", 917, 3545))),come_pop_stackframe());
            (come_push_stackframe("07var.c", 918,3547),exit(1),come_pop_stackframe());
        }
        buf2_271 = come_decrement_ref_count2(buf2_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_272,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_252) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 922, 3548)), "07var.c", 922, 3549))->p=head;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 923, 3550)), "07var.c", 923, 3551))->sline=head_sline;
            multiple_declare_280=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((come_push_stackframe("07var.c", 925, 3553),__exception_result_var_b375=((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value330=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value329=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 925, "list$1tuple3$3sTypephcharphsNodephph"))), "07var.c", 925, 3552)))))), come_pop_stackframe(), __exception_result_var_b375));
            come_call_finalizer3(right_value329,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value330,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var5=(come_push_stackframe("07var.c", 927, 3554),__exception_result_var_b376=((struct tuple3$3sTypephcharphbool*)(right_value331=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b376);
            base_type_281=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_282=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_283=multiple_assign_var5->v3;
            come_call_finalizer3(right_value331,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional346=!err_283,            _if_conditional346) {
                (come_push_stackframe("07var.c", 930, 3559),__exception_result_var_b377=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 930, 3555)), "07var.c", 930, 3556))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 930, 3557)), "07var.c", 930, 3558))->sline), come_pop_stackframe(), __exception_result_var_b377);
                (come_push_stackframe("07var.c", 931,3560),exit(2),come_pop_stackframe());
            }
            (come_push_stackframe("07var.c", 934,3561),parse_sharp_v5(info),come_pop_stackframe());
            multiple_assign_var6=(come_push_stackframe("07var.c", 935, 3562),__exception_result_var_b378=((struct tuple2$2sTypephcharph*)(right_value332=parse_variable_name((struct sType*)come_increment_ref_count(base_type_281),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b378);
            type2_284=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            var_name_285=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(right_value332,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("07var.c", 936,3563),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional347=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 939, 3564)), "07var.c", 939, 3565))->p, "07var.c", 939, 3566))==61,            _if_conditional347) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 940, 3567)), "07var.c", 940, 3568))->p++;
                (come_push_stackframe("07var.c", 941,3569),skip_spaces_and_lf(info),come_pop_stackframe());
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 943, 3570)), "07var.c", 943, 3571))->array_initializer=(_Bool)1;
                no_comma_286=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 944, 3572)), "07var.c", 944, 3573))->no_comma;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 945, 3574)), "07var.c", 945, 3575))->no_comma=(_Bool)1;
                exp_287=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 946, 3576),__exception_result_var_b379=((struct sNode*)(right_value333=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b379));
                if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 947, 3577)), "07var.c", 947, 3578))->no_comma=no_comma_286;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 948, 3579)), "07var.c", 948, 3580))->array_initializer=(_Bool)0;
                (come_push_stackframe("07var.c", 950, 3633),__exception_result_var_b380=list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_280, "07var.c", 950, 3581)), "07var.c", 950, 3582)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value338=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value337=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 950, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_284),(char*)come_increment_ref_count(var_name_285),(struct sNode*)come_increment_ref_count(exp_287)))))), come_pop_stackframe(), __exception_result_var_b380);
                come_call_finalizer3(right_value337,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value338,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                (come_push_stackframe("07var.c", 953, 3650),__exception_result_var_b381=list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_280, "07var.c", 953, 3634)), "07var.c", 953, 3635)),(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value340=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value339=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 953, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_284),(char*)come_increment_ref_count(var_name_285),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b381);
                right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value340,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional33=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 956, 3651)), "07var.c", 956, 3652))->p, "07var.c", 956, 3653))==44,            _while_condtional33) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 957, 3654)), "07var.c", 957, 3655))->p++;
                (come_push_stackframe("07var.c", 958,3656),skip_spaces_and_lf(info),come_pop_stackframe());
                (come_push_stackframe("07var.c", 960,3657),parse_sharp_v5(info),come_pop_stackframe());
                multiple_assign_var7=(come_push_stackframe("07var.c", 961, 3658),__exception_result_var_b382=((struct tuple2$2sTypephcharph*)(right_value341=parse_variable_name((struct sType*)come_increment_ref_count(base_type_281),(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b382);
                type2_291=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_292=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(right_value341,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("07var.c", 962,3659),parse_sharp_v5(info),come_pop_stackframe());
                if(_if_conditional352=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 964, 3660)), "07var.c", 964, 3661))->p, "07var.c", 964, 3662))==61,                _if_conditional352) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 965, 3663)), "07var.c", 965, 3664))->p++;
                    (come_push_stackframe("07var.c", 966,3665),skip_spaces_and_lf(info),come_pop_stackframe());
                    no_comma_293=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 968, 3666)), "07var.c", 968, 3667))->no_comma;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 969, 3668)), "07var.c", 969, 3669))->no_comma=(_Bool)1;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 970, 3670)), "07var.c", 970, 3671))->array_initializer=(_Bool)1;
                    exp_294=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 972, 3672),__exception_result_var_b383=((struct sNode*)(right_value342=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b383));
                    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 974, 3673)), "07var.c", 974, 3674))->no_comma=no_comma_293;
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 975, 3675)), "07var.c", 975, 3676))->array_initializer=(_Bool)0;
                    (come_push_stackframe("07var.c", 977, 3679),__exception_result_var_b384=list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_280, "07var.c", 977, 3677)), "07var.c", 977, 3678)),(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value344=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value343=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 977, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_291),(char*)come_increment_ref_count(var_name_292),(struct sNode*)come_increment_ref_count(exp_294)))))), come_pop_stackframe(), __exception_result_var_b384);
                    come_call_finalizer3(right_value343,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value344,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(exp_294) { exp_294 = come_decrement_ref_count2(exp_294, ((struct sNode*)exp_294)->finalize, ((struct sNode*)exp_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    (come_push_stackframe("07var.c", 980, 3682),__exception_result_var_b385=list$1tuple3$3sTypephcharphsNodephph_push_back(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(multiple_declare_280, "07var.c", 980, 3680)), "07var.c", 980, 3681)),(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value346=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value345=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 980, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_291),(char*)come_increment_ref_count(var_name_292),((void*)0)))))), come_pop_stackframe(), __exception_result_var_b385);
                    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value346,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_292 = come_decrement_ref_count2(var_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            __dec_obj129=right_node_295;
            right_node_295=((void*)0);
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
            var_name2_296=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 985, 3683),__exception_result_var_b386=((char*)(right_value347=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b386));
            right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 987, "struct sNode");
            _inf_obj_value3=come_increment_ref_count((come_push_stackframe("07var.c", 987, 3686),__exception_result_var_b388=((struct sStoreNode*)(right_value350=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)come_null_check(((struct sStoreNode*)(right_value348=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 987, "sStoreNode"))), "07var.c", 987, 3684))),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 987, 3685),__exception_result_var_b387=((char*)(right_value349=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b387)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_280),(struct sType*)come_increment_ref_count(base_type_281),(_Bool)1,((void*)0),info))), come_pop_stackframe(), __exception_result_var_b388));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            __result184__ = __result_obj__ = ((struct sNode*)(right_value358=_inf_value3));
            come_call_finalizer3(multiple_declare_280,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_284,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_285 = come_decrement_ref_count2(var_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_295) { right_node_295 = come_decrement_ref_count2(right_node_295, ((struct sNode*)right_node_295)->finalize, ((struct sNode*)right_node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_296 = come_decrement_ref_count2(var_name2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value348,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value350,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result184__;
            come_call_finalizer3(multiple_declare_280,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_282 = come_decrement_ref_count2(name_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_284,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_285 = come_decrement_ref_count2(var_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_295) { right_node_295 = come_decrement_ref_count2(right_node_295, ((struct sNode*)right_node_295)->finalize, ((struct sNode*)right_node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_296 = come_decrement_ref_count2(var_name2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_264) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 991, 3761)), "07var.c", 991, 3762))->p=head;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 992, 3763)), "07var.c", 992, 3764))->sline=head_sline;
                (come_push_stackframe("07var.c", 994,3765),parse_sharp_v5(info),come_pop_stackframe());
                multiple_assign_var8=(come_push_stackframe("07var.c", 995, 3766),__exception_result_var_b395=((struct tuple3$3sTypephcharphbool*)(right_value359=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b395);
                type_298=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_299=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_300=multiple_assign_var8->v3;
                come_call_finalizer3(right_value359,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional369=!err_300,                _if_conditional369) {
                    (come_push_stackframe("07var.c", 998, 3771),__exception_result_var_b396=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 998, 3767)), "07var.c", 998, 3768))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 998, 3769)), "07var.c", 998, 3770))->sline), come_pop_stackframe(), __exception_result_var_b396);
                    (come_push_stackframe("07var.c", 999,3772),exit(2),come_pop_stackframe());
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1002, 3773)), "07var.c", 1002, 3774))->p+=(come_push_stackframe("07var.c", 1002, 3775),__exception_result_var_b397=strlen("self."), come_pop_stackframe(), __exception_result_var_b397);
                __dec_obj136=name_299;
                name_299=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1004, 3776),__exception_result_var_b398=((char*)(right_value360=parse_word(info))), come_pop_stackframe(), __exception_result_var_b398));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("07var.c", 1006,3777),parse_sharp_v5(info),come_pop_stackframe());
                (come_push_stackframe("07var.c", 1007, 3868),__exception_result_var_b399=list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1007, 3778)), "07var.c", 1007, 3779))->defining_class, "07var.c", 1007, 3780)), "07var.c", 1007, 3781))->mFields, "07var.c", 1007, 3782)), "07var.c", 1007, 3783)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value365=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value364=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1007, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_299),(struct sType*)come_increment_ref_count(type_298)))))), come_pop_stackframe(), __exception_result_var_b399);
                right_value364 = come_decrement_ref_count2(right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value365,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional381=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1009, 3869)), "07var.c", 1009, 3870))->p, "07var.c", 1009, 3871))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1009, 3872)), "07var.c", 1009, 3873))->p+1), "07var.c", 1009, 3874))!=61,                _if_conditional381) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1010, 3875)), "07var.c", 1010, 3876))->p++;
                    (come_push_stackframe("07var.c", 1011,3877),skip_spaces_and_lf(info),come_pop_stackframe());
                    (come_push_stackframe("07var.c", 1013,3878),parse_sharp_v5(info),come_pop_stackframe());
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1015, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count((come_push_stackframe("07var.c", 1015, 3881),__exception_result_var_b401=((struct sLoadNode*)(right_value368=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)come_null_check(((struct sLoadNode*)(right_value366=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1015, "sLoadNode"))), "07var.c", 1015, 3879))),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1015, 3880),__exception_result_var_b400=((char*)(right_value367=__builtin_string("self"))), come_pop_stackframe(), __exception_result_var_b400)),info))), come_pop_stackframe(), __exception_result_var_b401));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadNode_finalize;
                    _inf_value4->clone=(void*)sLoadNode_clone;
                    _inf_value4->compile=(void*)sLoadNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadNode_kind;
                    self_node_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=_inf_value4)));
                    come_call_finalizer3(right_value366,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value368,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    right_node_306=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1017, 3908),__exception_result_var_b404=((struct sNode*)(right_value373=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b404));
                    if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result189__ = __result_obj__ = (come_push_stackframe("07var.c", 1019, 3909),__exception_result_var_b405=((struct sNode*)(right_value374=store_field(self_node_304,(struct sNode*)come_increment_ref_count(right_node_306),(char*)come_increment_ref_count(name_299),info))), come_pop_stackframe(), __exception_result_var_b405);
                    if(self_node_304) { self_node_304 = come_decrement_ref_count2(self_node_304, ((struct sNode*)self_node_304)->finalize, ((struct sNode*)self_node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_306) { right_node_306 = come_decrement_ref_count2(right_node_306, ((struct sNode*)right_node_306)->finalize, ((struct sNode*)right_node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result189__;
                    if(self_node_304) { self_node_304 = come_decrement_ref_count2(self_node_304, ((struct sNode*)self_node_304)->finalize, ((struct sNode*)self_node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_306) { right_node_306 = come_decrement_ref_count2(right_node_306, ((struct sNode*)right_node_306)->finalize, ((struct sNode*)right_node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result190__ = __result_obj__ = (come_push_stackframe("07var.c", 1022, 3910),__exception_result_var_b406=((struct sNode*)(right_value375=create_null_node(info))), come_pop_stackframe(), __exception_result_var_b406);
                    come_call_finalizer3(type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result190__;
                }
                come_call_finalizer3(type_298,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_299 = come_decrement_ref_count2(name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional388=!is_type_name_flag_251&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1025, 3911)), "07var.c", 1025, 3912))->p, "07var.c", 1025, 3913))==61&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1025, 3914)), "07var.c", 1025, 3915))->p+1), "07var.c", 1025, 3916))!=61&&!((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1025, 3917)), "07var.c", 1025, 3918))->no_assign,                _if_conditional388) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1026, 3919)), "07var.c", 1026, 3920))->p++;
                    (come_push_stackframe("07var.c", 1027,3921),skip_spaces_and_lf(info),come_pop_stackframe());
                    (come_push_stackframe("07var.c", 1029,3922),parse_sharp_v5(info),come_pop_stackframe());
                    right_value_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1030, 3923),__exception_result_var_b407=((struct sNode*)(right_value376=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b407));
                    if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("07var.c", 1031,3924),parse_sharp_v5(info),come_pop_stackframe());
                    __dec_obj144=right_value_307;
                    right_value_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1033, 3925),__exception_result_var_b408=((struct sNode*)(right_value377=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_307),info))), come_pop_stackframe(), __exception_result_var_b408));
                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    (come_push_stackframe("07var.c", 1035,3926),parse_sharp_v5(info),come_pop_stackframe());
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1037, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count((come_push_stackframe("07var.c", 1037, 3929),__exception_result_var_b410=((struct sStoreNode*)(right_value380=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)come_null_check(((struct sStoreNode*)(right_value378=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1037, "sStoreNode"))), "07var.c", 1037, 3927))),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1037, 3928),__exception_result_var_b409=((char*)(right_value379=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b409)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_307),info))), come_pop_stackframe(), __exception_result_var_b410));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sStoreNode_finalize;
                    _inf_value5->clone=(void*)sStoreNode_clone;
                    _inf_value5->compile=(void*)sStoreNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sStoreNode_kind;
                    __result193__ = __result_obj__ = ((struct sNode*)(right_value388=_inf_value5));
                    if(right_value_307) { right_value_307 = come_decrement_ref_count2(right_value_307, ((struct sNode*)right_value_307)->finalize, ((struct sNode*)right_value_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value378,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value379 = come_decrement_ref_count2(right_value379, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value380,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result193__;
                    if(right_value_307) { right_value_307 = come_decrement_ref_count2(right_value_307, ((struct sNode*)right_value_307)->finalize, ((struct sNode*)right_value_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional404=!is_type_name_flag_251||(come_push_stackframe("07var.c", 1039, 4006),__exception_result_var_b417=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1039, 4004)), "07var.c", 1039, 4005))->funcs,buf), come_pop_stackframe(), __exception_result_var_b417),                    _if_conditional404) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1040, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count((come_push_stackframe("07var.c", 1040, 4009),__exception_result_var_b419=((struct sLoadNode*)(right_value391=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)come_null_check(((struct sLoadNode*)(right_value389=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1040, "sLoadNode"))), "07var.c", 1040, 4007))),(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1040, 4008),__exception_result_var_b418=((char*)(right_value390=__builtin_string(buf))), come_pop_stackframe(), __exception_result_var_b418)),info))), come_pop_stackframe(), __exception_result_var_b419));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sLoadNode_finalize;
                        _inf_value6->clone=(void*)sLoadNode_clone;
                        _inf_value6->compile=(void*)sLoadNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sLoadNode_kind;
                        node_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=_inf_value6)));
                        come_call_finalizer3(right_value389,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value391,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj153=node_309;
                        node_309=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1042, 4036),__exception_result_var_b422=((struct sNode*)(right_value396=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_309),info))), come_pop_stackframe(), __exception_result_var_b422));
                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result196__ = __result_obj__ = node_309;
                        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result196__;
                        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1048, 4037)), "07var.c", 1048, 4038))->p=head;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1049, 4039)), "07var.c", 1049, 4040))->sline=head_sline;
                        if(_if_conditional411=(come_push_stackframe("07var.c", 1052, 4044),__exception_result_var_b423=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1052, 4041)), "07var.c", 1052, 4042))->p, "07var.c", 1052, 4043))), come_pop_stackframe(), __exception_result_var_b423)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1052, 4045)), "07var.c", 1052, 4046))->p, "07var.c", 1052, 4047))==95,                        _if_conditional411) {
                            __dec_obj154=word_311;
                            word_311=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1053, 4048),__exception_result_var_b424=((char*)(right_value397=parse_word(info))), come_pop_stackframe(), __exception_result_var_b424));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            __dec_obj155=word_311;
                            word_311=(char*)come_increment_ref_count((come_push_stackframe("07var.c", 1056, 4049),__exception_result_var_b425=((char*)(right_value398=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b425));
                            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_312=(come_push_stackframe("07var.c", 1059, 4050),__exception_result_var_b426=is_type_name(word_311,info), come_pop_stackframe(), __exception_result_var_b426);
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1061, 4051)), "07var.c", 1061, 4052))->p=head;
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1062, 4053)), "07var.c", 1062, 4054))->sline=head_sline;
                        if(is_type_name_flag_312) {
                            (come_push_stackframe("07var.c", 1065,4055),parse_sharp_v5(info),come_pop_stackframe());
                            multiple_assign_var9=(come_push_stackframe("07var.c", 1066, 4056),__exception_result_var_b427=((struct tuple3$3sTypephcharphbool*)(right_value399=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b427);
                            type_313=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                            name_314=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                            err_315=multiple_assign_var9->v3;
                            come_call_finalizer3(right_value399,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional413=!err_315,                            _if_conditional413) {
                                (come_push_stackframe("07var.c", 1069, 4061),__exception_result_var_b428=printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1069, 4057)), "07var.c", 1069, 4058))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1069, 4059)), "07var.c", 1069, 4060))->sline), come_pop_stackframe(), __exception_result_var_b428);
                                (come_push_stackframe("07var.c", 1070,4062),exit(2),come_pop_stackframe());
                            }
                            (come_push_stackframe("07var.c", 1072,4063),parse_sharp_v5(info),come_pop_stackframe());
                            if(_if_conditional414=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1074, 4064)), "07var.c", 1074, 4065))->p, "07var.c", 1074, 4066))==61,                            _if_conditional414) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1075, 4067)), "07var.c", 1075, 4068))->p++;
                                (come_push_stackframe("07var.c", 1076,4069),skip_spaces_and_lf(info),come_pop_stackframe());
                                (come_push_stackframe("07var.c", 1078,4070),parse_sharp_v5(info),come_pop_stackframe());
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1080, 4071)), "07var.c", 1080, 4072))->array_initializer=(_Bool)1;
                                (come_push_stackframe("07var.c", 1081,4073),parse_sharp_v5(info),come_pop_stackframe());
                                right_value_316=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1082, 4074),__exception_result_var_b429=((struct sNode*)(right_value400=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b429));
                                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                (come_push_stackframe("07var.c", 1083,4075),parse_sharp_v5(info),come_pop_stackframe());
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "07var.c", 1084, 4076)), "07var.c", 1084, 4077))->array_initializer=(_Bool)0;
                                __dec_obj156=right_value_316;
                                right_value_316=(struct sNode*)come_increment_ref_count((come_push_stackframe("07var.c", 1086, 4078),__exception_result_var_b430=((struct sNode*)(right_value401=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_316),info))), come_pop_stackframe(), __exception_result_var_b430));
                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1088, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count((come_push_stackframe("07var.c", 1088, 4080),__exception_result_var_b431=((struct sStoreNode*)(right_value403=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)come_null_check(((struct sStoreNode*)(right_value402=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1088, "sStoreNode"))), "07var.c", 1088, 4079))),(char*)come_increment_ref_count(name_314),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_313),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_316),info))), come_pop_stackframe(), __exception_result_var_b431));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sStoreNode_finalize;
                                _inf_value7->clone=(void*)sStoreNode_clone;
                                _inf_value7->compile=(void*)sStoreNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sStoreNode_kind;
                                __result199__ = __result_obj__ = ((struct sNode*)(right_value411=_inf_value7));
                                if(right_value_316) { right_value_316 = come_decrement_ref_count2(right_value_316, ((struct sNode*)right_value_316)->finalize, ((struct sNode*)right_value_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_311 = come_decrement_ref_count2(word_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value402,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value403,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result199__;
                                if(right_value_316) { right_value_316 = come_decrement_ref_count2(right_value_316, ((struct sNode*)right_value_316)->finalize, ((struct sNode*)right_value_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1091, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count((come_push_stackframe("07var.c", 1091, 4156),__exception_result_var_b438=((struct sStoreNode*)(right_value413=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)come_null_check(((struct sStoreNode*)(right_value412=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1091, "sStoreNode"))), "07var.c", 1091, 4155))),(char*)come_increment_ref_count(name_314),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_313),(_Bool)1,((void*)0),info))), come_pop_stackframe(), __exception_result_var_b438));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result202__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value8));
                                come_call_finalizer3(type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_311 = come_decrement_ref_count2(word_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value412,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value413,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result202__;
                            }
                            come_call_finalizer3(type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_311 = come_decrement_ref_count2(word_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    (come_push_stackframe("07var.c", 1096,4231),err_msg(info,"unexpected word(%s)(1)\n",buf),come_pop_stackframe());
    (come_push_stackframe("07var.c", 1097,4232),exit(2),come_pop_stackframe());
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional315=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3298)), "tuple3$3sTypephcharphboolp_finalize", 0, 3299))->v1!=((void*)0),                _if_conditional315) {
                    come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3300)), "tuple3$3sTypephcharphboolp_finalize", 0, 3301))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional316=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3302)), "tuple3$3sTypephcharphboolp_finalize", 1, 3303))->v2!=((void*)0),                _if_conditional316) {
                    ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3304)), "tuple3$3sTypephcharphboolp_finalize", 1, 3305))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3304)), "tuple3$3sTypephcharphboolp_finalize", 1, 3305))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional318;
_Bool _if_conditional319;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional318=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 3307)), "tuple2$2sTypephcharphp_finalize", 0, 3308))->v1!=((void*)0),                    _if_conditional318) {
                        come_call_finalizer3(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0, 3309)), "tuple2$2sTypephcharphp_finalize", 0, 3310))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional319=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 3311)), "tuple2$2sTypephcharphp_finalize", 1, 3312))->v2!=((void*)0),                    _if_conditional319) {
                        ((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 3313)), "tuple2$2sTypephcharphp_finalize", 1, 3314))->v2 = come_decrement_ref_count2(((struct tuple2$2sTypephcharph*)come_null_check(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1, 3313)), "tuple2$2sTypephcharphp_finalize", 1, 3314))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional327;
void* right_value310;
struct list_item$1charph* litem_273;
char* __dec_obj111;
_Bool _if_conditional328;
void* right_value311;
struct list_item$1charph* litem_274;
char* __dec_obj112;
void* right_value312;
struct list_item$1charph* litem_275;
char* __dec_obj113;
struct list$1charph* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value310 = (void*)0;
memset(&litem_273, 0, sizeof(struct list_item$1charph*));
right_value311 = (void*)0;
memset(&litem_274, 0, sizeof(struct list_item$1charph*));
right_value312 = (void*)0;
memset(&litem_275, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional327=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 222, 3386)), "./neo-c.h", 222, 3387))->len==0,                _if_conditional327) {
                    litem_273=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 223, "list_item$1charph"))));
                    come_call_finalizer3(right_value310,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_273, "./neo-c.h", 225, 3388)), "./neo-c.h", 225, 3389))->prev=((void*)0);
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_273, "./neo-c.h", 226, 3390)), "./neo-c.h", 226, 3391))->next=((void*)0);
                    __dec_obj111=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_273, "./neo-c.h", 227, 3392)), "./neo-c.h", 227, 3393))->item;
                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_273, "./neo-c.h", 227, 3392)), "./neo-c.h", 227, 3393))->item=(char*)come_increment_ref_count(item);
                    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 229, 3394)), "./neo-c.h", 229, 3395))->tail=litem_273;
                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 230, 3396)), "./neo-c.h", 230, 3397))->head=litem_273;
                }
                else {
                    if(_if_conditional328=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 232, 3398)), "./neo-c.h", 232, 3399))->len==1,                    _if_conditional328) {
                        litem_274=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value311=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 233, "list_item$1charph"))));
                        come_call_finalizer3(right_value311,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_274, "./neo-c.h", 235, 3400)), "./neo-c.h", 235, 3401))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 235, 3402)), "./neo-c.h", 235, 3403))->head;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_274, "./neo-c.h", 236, 3404)), "./neo-c.h", 236, 3405))->next=((void*)0);
                        __dec_obj112=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_274, "./neo-c.h", 237, 3406)), "./neo-c.h", 237, 3407))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_274, "./neo-c.h", 237, 3406)), "./neo-c.h", 237, 3407))->item=(char*)come_increment_ref_count(item);
                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 239, 3408)), "./neo-c.h", 239, 3409))->tail=litem_274;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 240, 3410)), "./neo-c.h", 240, 3411))->head, "./neo-c.h", 240, 3412)), "./neo-c.h", 240, 3413))->next=litem_274;
                    }
                    else {
                        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value312=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 243, "list_item$1charph"))));
                        come_call_finalizer3(right_value312,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_275, "./neo-c.h", 245, 3414)), "./neo-c.h", 245, 3415))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 245, 3416)), "./neo-c.h", 245, 3417))->tail;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_275, "./neo-c.h", 246, 3418)), "./neo-c.h", 246, 3419))->next=((void*)0);
                        __dec_obj113=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_275, "./neo-c.h", 247, 3420)), "./neo-c.h", 247, 3421))->item;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_275, "./neo-c.h", 247, 3420)), "./neo-c.h", 247, 3421))->item=(char*)come_increment_ref_count(item);
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 249, 3422)), "./neo-c.h", 249, 3423))->tail, "./neo-c.h", 249, 3424)), "./neo-c.h", 249, 3425))->next=litem_275;
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 250, 3426)), "./neo-c.h", 250, 3427))->tail=litem_275;
                    }
                }
                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 253, 3428)), "./neo-c.h", 253, 3429))->len++;
                __result175__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result175__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional348;
void* right_value334;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_288;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
_Bool _if_conditional349;
void* right_value335;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_289;
struct tuple3$3sTypephcharphsNodeph* __dec_obj122;
void* right_value336;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_290;
struct tuple3$3sTypephcharphsNodeph* __dec_obj123;
struct list$1tuple3$3sTypephcharphsNodephph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
memset(&litem_288, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value335 = (void*)0;
memset(&litem_289, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value336 = (void*)0;
memset(&litem_290, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional348=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 222, 3583)), "./neo-c.h", 222, 3584))->len==0,                    _if_conditional348) {
                        litem_288=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value334=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 223, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value334,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_288, "./neo-c.h", 225, 3585)), "./neo-c.h", 225, 3586))->prev=((void*)0);
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_288, "./neo-c.h", 226, 3587)), "./neo-c.h", 226, 3588))->next=((void*)0);
                        __dec_obj121=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_288, "./neo-c.h", 227, 3589)), "./neo-c.h", 227, 3590))->item;
                        ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_288, "./neo-c.h", 227, 3589)), "./neo-c.h", 227, 3590))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj121,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 229, 3591)), "./neo-c.h", 229, 3592))->tail=litem_288;
                        ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 230, 3593)), "./neo-c.h", 230, 3594))->head=litem_288;
                    }
                    else {
                        if(_if_conditional349=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 232, 3595)), "./neo-c.h", 232, 3596))->len==1,                        _if_conditional349) {
                            litem_289=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value335=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 233, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value335,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_289, "./neo-c.h", 235, 3597)), "./neo-c.h", 235, 3598))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 235, 3599)), "./neo-c.h", 235, 3600))->head;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_289, "./neo-c.h", 236, 3601)), "./neo-c.h", 236, 3602))->next=((void*)0);
                            __dec_obj122=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_289, "./neo-c.h", 237, 3603)), "./neo-c.h", 237, 3604))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_289, "./neo-c.h", 237, 3603)), "./neo-c.h", 237, 3604))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj122,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 239, 3605)), "./neo-c.h", 239, 3606))->tail=litem_289;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 240, 3607)), "./neo-c.h", 240, 3608))->head, "./neo-c.h", 240, 3609)), "./neo-c.h", 240, 3610))->next=litem_289;
                        }
                        else {
                            litem_290=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value336=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 243, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value336,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_290, "./neo-c.h", 245, 3611)), "./neo-c.h", 245, 3612))->prev=((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 245, 3613)), "./neo-c.h", 245, 3614))->tail;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_290, "./neo-c.h", 246, 3615)), "./neo-c.h", 246, 3616))->next=((void*)0);
                            __dec_obj123=((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_290, "./neo-c.h", 247, 3617)), "./neo-c.h", 247, 3618))->item;
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(litem_290, "./neo-c.h", 247, 3617)), "./neo-c.h", 247, 3618))->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj123,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list_item$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 249, 3619)), "./neo-c.h", 249, 3620))->tail, "./neo-c.h", 249, 3621)), "./neo-c.h", 249, 3622))->next=litem_290;
                            ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 250, 3623)), "./neo-c.h", 250, 3624))->tail=litem_290;
                        }
                    }
                    ((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(((struct list$1tuple3$3sTypephcharphsNodephph*)come_null_check(self, "./neo-c.h", 253, 3625)), "./neo-c.h", 253, 3626))->len++;
                    __result179__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result179__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj124;
char* __dec_obj125;
struct sNode* __dec_obj126;
struct tuple3$3sTypephcharphsNodeph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj124=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1777, 3627)), "./neo-c.h", 1777, 3628))->v1;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1777, 3627)), "./neo-c.h", 1777, 3628))->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj125=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1778, 3629)), "./neo-c.h", 1778, 3630))->v2;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1778, 3629)), "./neo-c.h", 1778, 3630))->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj126=((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1779, 3631)), "./neo-c.h", 1779, 3632))->v3;
                    ((struct tuple3$3sTypephcharphsNodeph*)come_null_check(((struct tuple3$3sTypephcharphsNodeph*)come_null_check(self, "./neo-c.h", 1779, 3631)), "./neo-c.h", 1779, 3632))->v3=(struct sNode*)come_increment_ref_count(v3);
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                    __result180__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result180__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj127;
char* __dec_obj128;
struct tuple3$3sTypephcharphvoidp* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj127=((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./neo-c.h", 1777, 3636)), "./neo-c.h", 1777, 3637))->v1;
                    ((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./neo-c.h", 1777, 3636)), "./neo-c.h", 1777, 3637))->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj128=((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./neo-c.h", 1778, 3638)), "./neo-c.h", 1778, 3639))->v2;
                    ((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./neo-c.h", 1778, 3638)), "./neo-c.h", 1778, 3639))->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    ((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "./neo-c.h", 1779, 3640)), "./neo-c.h", 1779, 3641))->v3=v3;
                    __result181__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result181__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional350=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0, 3642)), "tuple3$3sTypephcharphvoidpp_finalize", 0, 3643))->v1!=((void*)0),                        _if_conditional350) {
                            come_call_finalizer3(((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 0, 3644)), "tuple3$3sTypephcharphvoidpp_finalize", 0, 3645))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional351=self!=((void*)0)&&((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1, 3646)), "tuple3$3sTypephcharphvoidpp_finalize", 1, 3647))->v2!=((void*)0),                        _if_conditional351) {
                            ((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1, 3648)), "tuple3$3sTypephcharphvoidpp_finalize", 1, 3649))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphvoidp*)come_null_check(((struct tuple3$3sTypephcharphvoidp*)come_null_check(self, "tuple3$3sTypephcharphvoidpp_finalize", 1, 3648)), "tuple3$3sTypephcharphvoidpp_finalize", 1, 3649))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional370;
void* right_value361;
struct list_item$1tuple2$2charphsTypephph* litem_301;
struct tuple2$2charphsTypeph* __dec_obj137;
_Bool _if_conditional376;
void* right_value362;
struct list_item$1tuple2$2charphsTypephph* litem_302;
struct tuple2$2charphsTypeph* __dec_obj138;
void* right_value363;
struct list_item$1tuple2$2charphsTypephph* litem_303;
struct tuple2$2charphsTypeph* __dec_obj139;
struct list$1tuple2$2charphsTypephph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value361 = (void*)0;
memset(&litem_301, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value362 = (void*)0;
memset(&litem_302, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value363 = (void*)0;
memset(&litem_303, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(_if_conditional370=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 152, 3784)), "./neo-c.h", 152, 3785))->len==0,                    _if_conditional370) {
                        litem_301=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value361=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value361,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_301, "./neo-c.h", 155, 3798)), "./neo-c.h", 155, 3799))->prev=((void*)0);
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_301, "./neo-c.h", 156, 3800)), "./neo-c.h", 156, 3801))->next=((void*)0);
                        __dec_obj137=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_301, "./neo-c.h", 157, 3802)), "./neo-c.h", 157, 3803))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_301, "./neo-c.h", 157, 3802)), "./neo-c.h", 157, 3803))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj137,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 159, 3812)), "./neo-c.h", 159, 3813))->tail=litem_301;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 160, 3814)), "./neo-c.h", 160, 3815))->head=litem_301;
                    }
                    else {
                        if(_if_conditional376=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 162, 3816)), "./neo-c.h", 162, 3817))->len==1,                        _if_conditional376) {
                            litem_302=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value362=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value362,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_302, "./neo-c.h", 165, 3818)), "./neo-c.h", 165, 3819))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 165, 3820)), "./neo-c.h", 165, 3821))->head;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_302, "./neo-c.h", 166, 3822)), "./neo-c.h", 166, 3823))->next=((void*)0);
                            __dec_obj138=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_302, "./neo-c.h", 167, 3824)), "./neo-c.h", 167, 3825))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_302, "./neo-c.h", 167, 3824)), "./neo-c.h", 167, 3825))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj138,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 169, 3834)), "./neo-c.h", 169, 3835))->tail=litem_302;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 170, 3836)), "./neo-c.h", 170, 3837))->head, "./neo-c.h", 170, 3838)), "./neo-c.h", 170, 3839))->next=litem_302;
                        }
                        else {
                            litem_303=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value363=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value363,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_303, "./neo-c.h", 175, 3840)), "./neo-c.h", 175, 3841))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 175, 3842)), "./neo-c.h", 175, 3843))->tail;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_303, "./neo-c.h", 176, 3844)), "./neo-c.h", 176, 3845))->next=((void*)0);
                            __dec_obj139=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_303, "./neo-c.h", 177, 3846)), "./neo-c.h", 177, 3847))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_303, "./neo-c.h", 177, 3846)), "./neo-c.h", 177, 3847))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj139,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 179, 3856)), "./neo-c.h", 179, 3857))->tail, "./neo-c.h", 179, 3858)), "./neo-c.h", 179, 3859))->next=litem_303;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 180, 3860)), "./neo-c.h", 180, 3861))->tail=litem_303;
                        }
                    }
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 183, 3862)), "./neo-c.h", 183, 3863))->len++;
                    __result185__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result185__;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional371;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional371=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3786)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3787))->item!=((void*)0),                            _if_conditional371) {
                                come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3788)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3789))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional379=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3848)), "tuple2$2charphsTypephp_finalize", 0, 3849))->v1!=((void*)0),                                _if_conditional379) {
                                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3850)), "tuple2$2charphsTypephp_finalize", 0, 3851))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3850)), "tuple2$2charphsTypephp_finalize", 0, 3851))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional380=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 3852)), "tuple2$2charphsTypephp_finalize", 1, 3853))->v2!=((void*)0),                                _if_conditional380) {
                                    come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 3854)), "tuple2$2charphsTypephp_finalize", 1, 3855))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj140;
struct sType* __dec_obj141;
struct tuple2$2charphsTypeph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj140=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 3864)), "./neo-c.h", 1744, 3865))->v1;
                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1744, 3864)), "./neo-c.h", 1744, 3865))->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj141=((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 3866)), "./neo-c.h", 1745, 3867))->v2;
                    ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1745, 3866)), "./neo-c.h", 1745, 3867))->v2=(struct sType*)come_increment_ref_count(v2);
                    come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __result186__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result186__;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional405;
_Bool _if_conditional406;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional405=self!=((void*)0)&&((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0, 4010)), "sLoadNode_finalize", 0, 4011))->sname!=((void*)0),                            _if_conditional405) {
                                ((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0, 4012)), "sLoadNode_finalize", 0, 4013))->sname = come_decrement_ref_count2(((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 0, 4012)), "sLoadNode_finalize", 0, 4013))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional406=self!=((void*)0)&&((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1, 4014)), "sLoadNode_finalize", 1, 4015))->name!=((void*)0),                            _if_conditional406) {
                                ((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1, 4016)), "sLoadNode_finalize", 1, 4017))->name = come_decrement_ref_count2(((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_finalize", 1, 4016)), "sLoadNode_finalize", 1, 4017))->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional407;
struct sLoadNode* __result194__;
void* right_value392;
struct sLoadNode* result_310;
_Bool _if_conditional408;
_Bool _if_conditional409;
char* __exception_result_var_b420;
void* right_value393;
char* __dec_obj151;
_Bool _if_conditional410;
char* __exception_result_var_b421;
void* right_value394;
char* __dec_obj152;
struct sLoadNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
memset(&result_310, 0, sizeof(struct sLoadNode*));
right_value393 = (void*)0;
right_value394 = (void*)0;
                            if(_if_conditional407=self==(void*)0,                            _if_conditional407) {
                                __result194__ = __result_obj__ = (void*)0;
                                return __result194__;
                            }
                            result_310=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value392=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value392,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional408=self!=((void*)0),                            _if_conditional408) {
                                ((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(result_310, "sLoadNode_clone", 4, 4018)), "sLoadNode_clone", 4, 4019))->sline=((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 4, 4020)), "sLoadNode_clone", 4, 4021))->sline;
                            }
                            if(_if_conditional409=self!=((void*)0)&&((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5, 4022)), "sLoadNode_clone", 5, 4023))->sname!=((void*)0),                            _if_conditional409) {
                                __dec_obj151=((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(result_310, "sLoadNode_clone", 5, 4024)), "sLoadNode_clone", 5, 4025))->sname;
                                ((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(result_310, "sLoadNode_clone", 5, 4024)), "sLoadNode_clone", 5, 4025))->sname=(char*)come_increment_ref_count(((char*)(right_value393=(come_push_stackframe("sLoadNode_clone", 5, 4028),__exception_result_var_b420=string_clone(((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 5, 4026)), "sLoadNode_clone", 5, 4027))->sname), come_pop_stackframe(), __exception_result_var_b420))));
                                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional410=self!=((void*)0)&&((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 6, 4029)), "sLoadNode_clone", 6, 4030))->name!=((void*)0),                            _if_conditional410) {
                                __dec_obj152=((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(result_310, "sLoadNode_clone", 6, 4031)), "sLoadNode_clone", 6, 4032))->name;
                                ((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(result_310, "sLoadNode_clone", 6, 4031)), "sLoadNode_clone", 6, 4032))->name=(char*)come_increment_ref_count(((char*)(right_value394=(come_push_stackframe("sLoadNode_clone", 6, 4035),__exception_result_var_b421=string_clone(((struct sLoadNode*)come_null_check(((struct sLoadNode*)come_null_check(self, "sLoadNode_clone", 6, 4033)), "sLoadNode_clone", 6, 4034))->name), come_pop_stackframe(), __exception_result_var_b421))));
                                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result195__ = __result_obj__ = result_310;
                            come_call_finalizer3(result_310,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result195__;
                            come_call_finalizer3(result_310,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional430=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0, 4157)), "sStoreNode_finalize", 0, 4158))->sname!=((void*)0),                                    _if_conditional430) {
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0, 4159)), "sStoreNode_finalize", 0, 4160))->sname = come_decrement_ref_count2(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 0, 4159)), "sStoreNode_finalize", 0, 4160))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional431=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1, 4161)), "sStoreNode_finalize", 1, 4162))->name!=((void*)0),                                    _if_conditional431) {
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1, 4163)), "sStoreNode_finalize", 1, 4164))->name = come_decrement_ref_count2(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 1, 4163)), "sStoreNode_finalize", 1, 4164))->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional432=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2, 4165)), "sStoreNode_finalize", 2, 4166))->type!=((void*)0),                                    _if_conditional432) {
                                        come_call_finalizer3(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 2, 4167)), "sStoreNode_finalize", 2, 4168))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional433=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4169)), "sStoreNode_finalize", 3, 4170))->right_value!=((void*)0),                                    _if_conditional433) {
                                        if(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4171)), "sStoreNode_finalize", 3, 4172))->right_value) { ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4171)), "sStoreNode_finalize", 3, 4172))->right_value = come_decrement_ref_count2(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4171)), "sStoreNode_finalize", 3, 4172))->right_value, ((struct sNode*)((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4171)), "sStoreNode_finalize", 3, 4172))->right_value)->finalize, ((struct sNode*)((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 3, 4171)), "sStoreNode_finalize", 3, 4172))->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional434=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4, 4173)), "sStoreNode_finalize", 4, 4174))->multiple_assign!=((void*)0),                                    _if_conditional434) {
                                        come_call_finalizer3(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 4, 4175)), "sStoreNode_finalize", 4, 4176))->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional435=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5, 4177)), "sStoreNode_finalize", 5, 4178))->multiple_declare!=((void*)0),                                    _if_conditional435) {
                                        come_call_finalizer3(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_finalize", 5, 4179)), "sStoreNode_finalize", 5, 4180))->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional436;
struct sStoreNode* __result200__;
void* right_value414;
struct sStoreNode* result_318;
_Bool _if_conditional437;
_Bool _if_conditional438;
char* __exception_result_var_b439;
void* right_value415;
char* __dec_obj163;
_Bool _if_conditional439;
char* __exception_result_var_b440;
void* right_value416;
char* __dec_obj164;
_Bool _if_conditional440;
_Bool _if_conditional441;
struct sType* __exception_result_var_b441;
void* right_value417;
struct sType* __dec_obj165;
_Bool _if_conditional442;
struct sNode* __exception_result_var_b442;
void* right_value418;
struct sNode* __dec_obj166;
_Bool _if_conditional443;
struct list$1charph* __exception_result_var_b443;
void* right_value419;
struct list$1charph* __dec_obj167;
_Bool _if_conditional444;
struct list$1tuple3$3sTypephcharphsNodephph* __exception_result_var_b444;
void* right_value420;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj168;
struct sStoreNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value414 = (void*)0;
memset(&result_318, 0, sizeof(struct sStoreNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
                                    if(_if_conditional436=self==(void*)0,                                    _if_conditional436) {
                                        __result200__ = __result_obj__ = (void*)0;
                                        return __result200__;
                                    }
                                    result_318=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value414=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value414,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional437=self!=((void*)0),                                    _if_conditional437) {
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 4, 4181)), "sStoreNode_clone", 4, 4182))->sline=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 4, 4183)), "sStoreNode_clone", 4, 4184))->sline;
                                    }
                                    if(_if_conditional438=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5, 4185)), "sStoreNode_clone", 5, 4186))->sname!=((void*)0),                                    _if_conditional438) {
                                        __dec_obj163=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 5, 4187)), "sStoreNode_clone", 5, 4188))->sname;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 5, 4187)), "sStoreNode_clone", 5, 4188))->sname=(char*)come_increment_ref_count(((char*)(right_value415=(come_push_stackframe("sStoreNode_clone", 5, 4191),__exception_result_var_b439=string_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 5, 4189)), "sStoreNode_clone", 5, 4190))->sname), come_pop_stackframe(), __exception_result_var_b439))));
                                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional439=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6, 4192)), "sStoreNode_clone", 6, 4193))->name!=((void*)0),                                    _if_conditional439) {
                                        __dec_obj164=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 6, 4194)), "sStoreNode_clone", 6, 4195))->name;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 6, 4194)), "sStoreNode_clone", 6, 4195))->name=(char*)come_increment_ref_count(((char*)(right_value416=(come_push_stackframe("sStoreNode_clone", 6, 4198),__exception_result_var_b440=string_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 6, 4196)), "sStoreNode_clone", 6, 4197))->name), come_pop_stackframe(), __exception_result_var_b440))));
                                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional440=self!=((void*)0),                                    _if_conditional440) {
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 7, 4199)), "sStoreNode_clone", 7, 4200))->alloc=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 7, 4201)), "sStoreNode_clone", 7, 4202))->alloc;
                                    }
                                    if(_if_conditional441=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8, 4203)), "sStoreNode_clone", 8, 4204))->type!=((void*)0),                                    _if_conditional441) {
                                        __dec_obj165=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 8, 4205)), "sStoreNode_clone", 8, 4206))->type;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 8, 4205)), "sStoreNode_clone", 8, 4206))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value417=(come_push_stackframe("sStoreNode_clone", 8, 4209),__exception_result_var_b441=sType_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 8, 4207)), "sStoreNode_clone", 8, 4208))->type), come_pop_stackframe(), __exception_result_var_b441))));
                                        come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value417,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional442=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9, 4210)), "sStoreNode_clone", 9, 4211))->right_value!=((void*)0),                                    _if_conditional442) {
                                        __dec_obj166=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 9, 4212)), "sStoreNode_clone", 9, 4213))->right_value;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 9, 4212)), "sStoreNode_clone", 9, 4213))->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=(come_push_stackframe("sStoreNode_clone", 9, 4216),__exception_result_var_b442=sNode_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 9, 4214)), "sStoreNode_clone", 9, 4215))->right_value), come_pop_stackframe(), __exception_result_var_b442))));
                                        if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional443=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10, 4217)), "sStoreNode_clone", 10, 4218))->multiple_assign!=((void*)0),                                    _if_conditional443) {
                                        __dec_obj167=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 10, 4219)), "sStoreNode_clone", 10, 4220))->multiple_assign;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 10, 4219)), "sStoreNode_clone", 10, 4220))->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value419=(come_push_stackframe("sStoreNode_clone", 10, 4223),__exception_result_var_b443=list$1charphp_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 10, 4221)), "sStoreNode_clone", 10, 4222))->multiple_assign), come_pop_stackframe(), __exception_result_var_b443))));
                                        come_call_finalizer3(__dec_obj167,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value419,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional444=self!=((void*)0)&&((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 11, 4224)), "sStoreNode_clone", 11, 4225))->multiple_declare!=((void*)0),                                    _if_conditional444) {
                                        __dec_obj168=((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 11, 4226)), "sStoreNode_clone", 11, 4227))->multiple_declare;
                                        ((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(result_318, "sStoreNode_clone", 11, 4226)), "sStoreNode_clone", 11, 4227))->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value420=(come_push_stackframe("sStoreNode_clone", 11, 4230),__exception_result_var_b444=list$1tuple3$3sTypephcharphsNodephphp_clone(((struct sStoreNode*)come_null_check(((struct sStoreNode*)come_null_check(self, "sStoreNode_clone", 11, 4228)), "sStoreNode_clone", 11, 4229))->multiple_declare), come_pop_stackframe(), __exception_result_var_b444))));
                                        come_call_finalizer3(__dec_obj168,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value420,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result201__ = __result_obj__ = result_318;
                                    come_call_finalizer3(result_318,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result201__;
                                    come_call_finalizer3(result_318,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

