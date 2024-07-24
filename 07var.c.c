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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1901, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1908, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1915, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1922, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1929, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1936, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1952, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1962, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1972, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1982, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1992, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2163, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2168, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2173, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2178, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2183, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2188, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2193, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2198, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2203, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2208, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2213, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2218, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2004, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 221, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 231, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 241, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 221, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 231, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 241, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 221, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 231, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 241, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 221, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 231, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 241, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 221, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 231, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 241, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 221, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 231, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 241, "list_item$1double"))));
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
char* __dec_obj12;
_Bool _if_conditional20;
void* right_value116;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sNode* __dec_obj38;
_Bool _if_conditional116;
void* right_value117;
struct list$1charph* __dec_obj39;
struct list$1charph* __dec_obj40;
_Bool _if_conditional117;
void* right_value128;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj47;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj48;
struct sStoreNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value128 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(name))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->alloc=alloc;
    ((void*)0);
    if(type) {
        __dec_obj36=self->type;
        self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(type))));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj37=self->type;
        self->type=((void*)0);
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj38=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    if(multiple_assign) {
        __dec_obj39=self->multiple_assign;
        self->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value117=list$1charphp_clone(multiple_assign))));
        come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value117,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj40=self->multiple_assign;
        self->multiple_assign=((void*)0);
        come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    ((void*)0);
    if(multiple_declare) {
        __dec_obj47=self->multiple_declare;
        self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value128=list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare))));
        come_call_finalizer3(__dec_obj47,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value128,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj48=self->multiple_declare;
        self->multiple_declare=((void*)0);
        come_call_finalizer3(__dec_obj48,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
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
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sStoreNode")));
    right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional147;
struct sVar* var__90;
_Bool _if_conditional156;
_Bool __result82__;
_Bool _if_conditional157;
_Bool __result83__;
void* right_value130;
struct sType* type_91;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_92;
struct tuple3$3sTypephcharphsNodeph* it_95;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_98;
char* var_name_99;
struct sNode* right_value_100;
void* right_value131;
_Bool _if_conditional162;
_Bool __result91__;
void* right_value132;
struct sType* left_type_101;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool __result92__;
void* right_value133;
struct CVALUE* __exception_result_var_b1;
struct CVALUE* come_value_102;
void* right_value134;
void* right_value135;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool __result93__;
void* right_value136;
struct CVALUE* __exception_result_var_b2;
struct CVALUE* right_value_103;
struct sType* right_type_104;
_Bool _if_conditional169;
int i_105;
struct list$1charph* o2_saved_106;
char* it_109;
_Bool _if_conditional175;
struct sType* right_type2_115;
void* right_value137;
static int num_multiple_var_116=0;
void* right_value138;
char* multiple_var_name_117;
void* right_value139;
void* right_value140;
char* __dec_obj49;
struct list$1charph* o2_saved_118;
char* it_119;
_Bool _if_conditional178;
void* right_value141;
struct sType* right_type2_120;
struct sVar* var__121;
void* right_value142;
struct sType* var_type_122;
void* right_value143;
struct sType* left_type_123;
void* right_value144;
struct CVALUE* right_value2_124;
void* right_value145;
char* __dec_obj50;
void* right_value146;
struct sType* __dec_obj51;
void* right_value147;
struct CVALUE* come_value_125;
void* right_value148;
void* right_value149;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value150;
char* __dec_obj52;
int right_value_id_126;
_Bool _if_conditional181;
void* right_value151;
char* __dec_obj53;
void* right_value152;
struct sType* __dec_obj54;
void* right_value153;
_Bool _if_conditional182;
struct sVar* var__127;
_Bool _if_conditional183;
_Bool __result105__;
_Bool _if_conditional184;
_Bool __result106__;
void* right_value154;
struct sType* type_128;
void* right_value155;
_Bool _if_conditional185;
_Bool _if_conditional186;
_Bool __result107__;
void* right_value156;
struct sType* left_type_129;
_Bool _if_conditional188;
void* right_value157;
_Bool _if_conditional189;
void* right_value158;
struct list$1sNodeph* o2_saved_130;
struct sNode* it_133;
_Bool _if_conditional194;
void* right_value159;
struct CVALUE* __exception_result_var_b3;
struct CVALUE* come_value_136;
void* right_value160;
void* right_value161;
struct sType* left_type2_137;
void* right_value162;
void* right_value163;
struct CVALUE* come_value_138;
void* right_value164;
char* __dec_obj55;
void* right_value165;
struct sType* __dec_obj56;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool __result118__;
void* right_value169;
_Bool array_initializer_142;
void* right_value170;
struct CVALUE* __exception_result_var_b4;
struct CVALUE* right_value_143;
struct sType* right_type_144;
struct sVar* var__145;
_Bool _if_conditional201;
_Bool __result119__;
_Bool _if_conditional202;
void* right_value171;
void* right_value172;
struct sType* type_146;
void* right_value173;
void* right_value174;
struct sType* var_type_147;
_Bool _if_conditional203;
void* right_value175;
_Bool _if_conditional204;
struct sVar* var__148;
void* right_value176;
void* right_value177;
struct sType* left_type_149;
void* right_value178;
struct CVALUE* come_value_150;
_Bool _if_conditional205;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
char* __dec_obj60;
_Bool _if_conditional206;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
char* __dec_obj61;
_Bool _if_conditional207;
void* right_value187;
void* right_value188;
void* right_value189;
void* right_value190;
char* __dec_obj62;
int right_value_id_151;
_Bool _if_conditional208;
void* right_value191;
struct sType* __dec_obj63;
_Bool _if_conditional209;
void* right_value192;
void* right_value193;
void* right_value194;
void* right_value195;
char* __dec_obj64;
void* right_value196;
struct sType* __dec_obj65;
void* right_value197;
void* right_value198;
void* right_value199;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool __result120__;
void* right_value200;
char* __dec_obj66;
void* right_value201;
struct sType* __dec_obj67;
_Bool _if_conditional213;
_Bool __result121__;
void* right_value202;
struct CVALUE* __exception_result_var_b5;
struct CVALUE* right_value_152;
struct sType* right_type_153;
struct sClass* current_stack_frame_struct_154;
_Bool _if_conditional214;
struct sVar* parent_var_155;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value203;
struct CVALUE* come_value_156;
struct sType* left_type_157;
_Bool _if_conditional217;
void* right_value204;
char* c_value_158;
void* right_value205;
char* __dec_obj68;
int right_value_id_159;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value206;
char* c_value_160;
void* right_value207;
char* __dec_obj69;
void* right_value208;
char* __dec_obj70;
void* right_value209;
struct sType* __dec_obj71;
void* right_value210;
void* right_value211;
_Bool __result122__;
struct sVar* var__161;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool __result123__;
_Bool _if_conditional222;
void* right_value212;
struct sType* __dec_obj72;
void* right_value213;
struct sType* left_type_162;
void* right_value214;
struct CVALUE* come_value_163;
_Bool _if_conditional223;
void* right_value215;
void* right_value216;
void* right_value217;
char* __dec_obj73;
_Bool _if_conditional224;
void* right_value218;
void* right_value219;
void* right_value220;
char* __dec_obj74;
_Bool _if_conditional225;
void* right_value221;
void* right_value222;
void* right_value223;
char* __dec_obj75;
int right_value_id_164;
_Bool _if_conditional226;
void* right_value224;
struct sType* __dec_obj76;
_Bool _if_conditional227;
void* right_value225;
void* right_value226;
void* right_value227;
char* __dec_obj77;
void* right_value228;
struct sType* __dec_obj78;
void* right_value229;
void* right_value230;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool __result124__;
void* right_value231;
char* __dec_obj79;
void* right_value232;
struct sType* __dec_obj80;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&var__90, 0, sizeof(struct sVar*));
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
memset(&right_type2_115, 0, sizeof(struct sType*));
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
right_value169 = (void*)0;
memset(&array_initializer_142, 0, sizeof(_Bool));
right_value170 = (void*)0;
memset(&right_value_143, 0, sizeof(struct CVALUE*));
memset(&right_type_144, 0, sizeof(struct sType*));
memset(&var__145, 0, sizeof(struct sVar*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&type_146, 0, sizeof(struct sType*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&var_type_147, 0, sizeof(struct sType*));
right_value175 = (void*)0;
memset(&var__148, 0, sizeof(struct sVar*));
right_value176 = (void*)0;
right_value177 = (void*)0;
memset(&left_type_149, 0, sizeof(struct sType*));
right_value178 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&right_value_id_151, 0, sizeof(int));
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&right_type_153, 0, sizeof(struct sType*));
memset(&current_stack_frame_struct_154, 0, sizeof(struct sClass*));
memset(&parent_var_155, 0, sizeof(struct sVar*));
right_value203 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
memset(&left_type_157, 0, sizeof(struct sType*));
right_value204 = (void*)0;
memset(&c_value_158, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&right_value_id_159, 0, sizeof(int));
right_value206 = (void*)0;
memset(&c_value_160, 0, sizeof(char*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&var__161, 0, sizeof(struct sVar*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&left_type_162, 0, sizeof(struct sType*));
right_value214 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&right_value_id_164, 0, sizeof(int));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    if(self->multiple_declare) {
        var__90=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__90) {
            err_msg(info,"Already appended this var name(%s)(1)",self->name);
            __result82__ = (_Bool)0;
            return __result82__;
        }
        if(_if_conditional157=self->type==((void*)0),        _if_conditional157) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            __result83__ = (_Bool)0;
            return __result83__;
        }
        type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=solve_generics(self->type,info->generics_type,info))));
        come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type_91->mFunctionParam=(_Bool)0;
        for(        o2_saved_92=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_95=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_92));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_92));        it_95=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_92))        ){
            multiple_assign_var1=it_95;
            type_98=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_99=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_100=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_table(var_name_99,(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(type_98)))),info);
            come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
            var__90=get_variable_from_table(info->lv_table,var_name_99);
            if(_if_conditional162=var__90==((void*)0),            _if_conditional162) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_95);
                __result91__ = (_Bool)1;
                come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result91__;
            }
            left_type_101=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(var__90->mType))));
            come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value_100) {
                if(_if_conditional164=!node_compile(right_value_100,info),                _if_conditional164) {
                    __result92__ = (_Bool)0;
                    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_99 = come_decrement_ref_count2(var_name_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_100) { right_value_100 = come_decrement_ref_count2(right_value_100, ((struct sNode*)right_value_100)->finalize, ((struct sNode*)right_value_100)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(left_type_101,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_92,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_91,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result92__;
                }
                come_value_102=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 74, 0),__exception_result_var_b1=((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
                come_call_finalizer3(right_value133,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(right_value134=make_define_var(left_type_101,var__90->mCValueName,(_Bool)0,info))),come_value_102->c_value);
                right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(right_value135=make_define_var(left_type_101,var__90->mCValueName,(_Bool)0,info))));
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
        if(self->multiple_assign) {
            if(_if_conditional168=!node_compile(self->right_value,info),            _if_conditional168) {
                __result93__ = (_Bool)0;
                return __result93__;
            }
            right_value_103=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 89, 1),__exception_result_var_b2=((struct CVALUE*)(right_value136=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
            come_call_finalizer3(right_value136,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            right_type_104=right_value_103->type;
            dec_stack_ptr(1,info);
            if(right_type_104->mNoSolvedGenericsType->v1) {
                right_type_104=right_type_104->mNoSolvedGenericsType->v1;
            }
            i_105=0;
            for(            o2_saved_106=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_109=list$1charph_begin((o2_saved_106));            !list$1charph_end((o2_saved_106));            it_109=list$1charph_next((o2_saved_106))            ){
                if(_if_conditional175=i_105<list$1sTypeph_length(right_type_104->mGenericsTypes),                _if_conditional175) {
                    right_type2_115=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_104->mGenericsTypes,i_105), "07var.c", 100, 2));
                    right_type2_115->mFunctionParam=(_Bool)0;
                    add_variable_to_table(it_109,(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(right_type2_115)))),info);
                    come_call_finalizer3(right_value137,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                i_105++;
            }
            come_call_finalizer3(o2_saved_106,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            multiple_var_name_117=(char*)come_increment_ref_count(((char*)(right_value138=xsprintf("multiple_assign_var%d",++num_multiple_var_116))));
            right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value139=make_define_var(right_value_103->type,multiple_var_name_117,(_Bool)0,info))));
            right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s=%s;\n",multiple_var_name_117,right_value_103->c_value);
            __dec_obj49=right_value_103->c_value;
            right_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value140=string_clone(multiple_var_name_117))));
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            i_105=0;
            for(            o2_saved_118=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_119=list$1charph_begin((o2_saved_118));            !list$1charph_end((o2_saved_118));            it_119=list$1charph_next((o2_saved_118))            ){
                if(_if_conditional178=i_105<list$1sTypeph_length(right_type_104->mGenericsTypes),                _if_conditional178) {
                    right_type2_120=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_104->mGenericsTypes,i_105), "07var.c", 119, 3))))));
                    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var__121=get_variable_from_table(info->lv_table,it_119);
                    var_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(var__121->mType))));
                    come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var_type_122->mStatic=(_Bool)0;
                    left_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(var__121->mType))));
                    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value2_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 128, "CVALUE"))));
                    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj50=right_value2_124->c_value;
                    right_value2_124->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("%s->v%d",right_value_103->c_value,i_105+1))));
                    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __dec_obj51=right_value2_124->type;
                    right_value2_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value146=sType_clone(right_type2_120))));
                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value2_124->var=((void*)0);
                    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 134, "CVALUE"))));
                    come_call_finalizer3(right_value147,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    check_assign_type(((char*)(right_value149=xsprintf("\%s is assining to}",((char*)(right_value148=string_to_string(self->name)))))),left_type_123,right_type2_120,come_value_125,(_Bool)0,(_Bool)1,info);
                    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional179=right_type2_120->mHeap&&left_type_123->mHeap&&left_type_123->mPointerNum>0&&right_type2_120->mPointerNum>0,                    _if_conditional179) {
                        if(self->alloc) {
                            std_move(left_type_123,right_type2_120,right_value2_124,info);
                            __dec_obj52=come_value_125->c_value;
                            come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s=%s",var__121->mCValueName,right_value2_124->c_value))));
                            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        right_value_id_126=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value2_124->c_value));
                        if(_if_conditional181=right_value_id_126!=-1,                        _if_conditional181) {
                            remove_object_from_right_values(right_value_id_126,info);
                        }
                    }
                    else {
                        __dec_obj53=come_value_125->c_value;
                        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s=%s",var__121->mCValueName,right_value2_124->c_value))));
                        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __dec_obj54=come_value_125->type;
                    come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(left_type_123))));
                    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value152,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_value_125->var=var__121;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value153=make_define_var(left_type_123,var__121->mCValueName,(_Bool)0,info))));
                    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    add_come_code(info,"%s;\n",come_value_125->c_value);
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
            if(_if_conditional182=self->right_value==((void*)0),            _if_conditional182) {
                var__127=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__127) {
                    err_msg(info,"Already appended this var name(%s)(1)",self->name);
                    __result105__ = (_Bool)0;
                    return __result105__;
                }
                if(_if_conditional184=self->type==((void*)0),                _if_conditional184) {
                    err_msg(info,"Require concrete variable type(%s)",self->name);
                    __result106__ = (_Bool)0;
                    return __result106__;
                }
                type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=solve_generics(self->type,info->generics_type,info))));
                come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
                type_128->mFunctionParam=(_Bool)0;
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(type_128)))),info);
                come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
                var__127=get_variable_from_table(info->lv_table,self->name);
                if(_if_conditional185=var__127==((void*)0),                _if_conditional185) {
                    var__127=get_variable_from_table(info->gv_table,self->name);
                    if(_if_conditional186=var__127==((void*)0),                    _if_conditional186) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result107__ = (_Bool)1;
                        come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result107__;
                    }
                }
                left_type_129=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_clone(var__127->mType))));
                come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional188=list$1sNodeph_length(left_type_129->mArrayNum)>0,                _if_conditional188) {
                    add_come_code(info,"%s;\n",((char*)(right_value157=make_define_var(left_type_129,var__127->mCValueName,(_Bool)0,info))));
                    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(_if_conditional189=!left_type_129->mStatic,                    _if_conditional189) {
                        add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__127->mCValueName,((char*)(right_value158=make_type_name_string(left_type_129,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                        right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        for(                        o2_saved_130=(struct list$1sNodeph*)come_increment_ref_count((left_type_129->mArrayNum)),it_133=list$1sNodeph_begin((o2_saved_130));                        !list$1sNodeph_end((o2_saved_130));                        it_133=list$1sNodeph_next((o2_saved_130))                        ){
                            if(_if_conditional194=!node_compile(it_133,info),                            _if_conditional194) {
                                err_msg(info,"invalid array num");
                                exit(1);
                            }
                            come_value_136=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 207, 4),__exception_result_var_b3=((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
                            come_call_finalizer3(right_value159,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            dec_stack_ptr(1,info);
                            add_come_code(info,"*(%s)",come_value_136->c_value);
                            come_call_finalizer3(come_value_136,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_130,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        add_come_code(info,");\n");
                    }
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value160=make_define_var(left_type_129,var__127->mCValueName,(_Bool)0,info))));
                    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    left_type2_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(left_type_129))));
                    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    left_type2_137->mStatic=(_Bool)0;
                    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__127->mCValueName,((char*)(right_value162=make_type_name_string(left_type2_137,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(left_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 223, "CVALUE"))));
                come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj55=come_value_138->c_value;
                come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s",var__127->mCValueName))));
                __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj56=come_value_138->type;
                come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_type_129))));
                come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_138->var=var__127;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
                if(_if_conditional198=!left_type_129->mClass->mNumber&&left_type_129->mPointerNum==0,                _if_conditional198) {
                    var__127->mType->mAllocaValue=(_Bool)1;
                }
                come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(self->alloc) {
                    if(_if_conditional200=!node_compile(self->right_value,info),                    _if_conditional200) {
                        __result118__ = (_Bool)0;
                        return __result118__;
                    }
                    array_initializer_142=string_operator_equals(((char*)(right_value169=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
                    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value_143=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 242, 5),__exception_result_var_b4=((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
                    come_call_finalizer3(right_value170,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    right_type_144=right_value_143->type;
                    dec_stack_ptr(1,info);
                    var__145=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                    if(var__145) {
                        err_msg(info,"Already appended this var name(%s)(2)",self->name);
                        __result119__ = (_Bool)0;
                        come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result119__;
                    }
                    if(_if_conditional202=self->type==((void*)0),                    _if_conditional202) {
                        right_type_144->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(right_type_144)))),info);
                        come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        type_146=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=solve_generics(self->type,info->generics_type,info))));
                        come_call_finalizer3(right_value172,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        type_146->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(type_146)))),info);
                        come_call_finalizer3(right_value173,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_146,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    var__145=get_variable_from_table(info->lv_table,self->name);
                    var_type_147=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(var__145->mType))));
                    come_call_finalizer3(right_value174,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    var_type_147->mStatic=(_Bool)0;
                    if(_if_conditional203=!array_initializer_142&&!var__145->mType->mStatic&&!var_type_147->mConstant&&list$1sNodeph_length(var_type_147->mArrayNum)==0,                    _if_conditional203) {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__145->mCValueName,((char*)(right_value175=make_type_name_string(var_type_147,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(array_initializer_142) {
                        var__148=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                        add_come_code(info,"%s=%s;\n",((char*)(right_value176=make_define_var(var__148->mType,var__148->mCValueName,(_Bool)0,info))),right_value_143->c_value);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        left_type_149=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(var__145->mType))));
                        come_call_finalizer3(right_value177,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 279, "CVALUE"))));
                        come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        if(var__145->mType->mStatic) {
                            check_assign_type(((char*)(right_value180=xsprintf("\%s is assining to",((char*)(right_value179=string_to_string(self->name)))))),left_type_149,right_type_144,right_value_143,(_Bool)0,(_Bool)1,info);
                            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value181=make_define_var(left_type_149,var__145->mCValueName,(_Bool)0,info))),right_value_143->c_value);
                            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __dec_obj60=come_value_150->c_value;
                            come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(""))));
                            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                            transpiler_clear_last_code(info);
                        }
                        else {
                            if(var__145->mType->mConstant) {
                                check_assign_type(((char*)(right_value184=xsprintf("\%s is assining to",((char*)(right_value183=string_to_string(self->name)))))),left_type_149,right_type_144,right_value_143,(_Bool)0,(_Bool)1,info);
                                right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                add_come_code_at_function_head(info,"%s=%s;\n",((char*)(right_value185=make_define_var(left_type_149,var__145->mCValueName,(_Bool)0,info))),right_value_143->c_value);
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                __dec_obj61=come_value_150->c_value;
                                come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(""))));
                                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                                transpiler_clear_last_code(info);
                            }
                            else {
                                if(_if_conditional207=right_type_144->mHeap&&left_type_149->mHeap&&left_type_149->mPointerNum>0&&right_type_144->mPointerNum>0,                                _if_conditional207) {
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value187=make_define_var(left_type_149,var__145->mCValueName,(_Bool)0,info))));
                                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    check_assign_type(((char*)(right_value189=xsprintf("\%s is assining to",((char*)(right_value188=string_to_string(self->name)))))),left_type_149,right_type_144,right_value_143,(_Bool)0,(_Bool)1,info);
                                    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    std_move(left_type_149,right_type_144,right_value_143,info);
                                    __dec_obj62=come_value_150->c_value;
                                    come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s=%s",var__145->mCValueName,right_value_143->c_value))));
                                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value_id_151=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_143->c_value));
                                    if(_if_conditional208=right_value_id_151!=-1,                                    _if_conditional208) {
                                        remove_object_from_right_values(right_value_id_151,info);
                                    }
                                    __dec_obj63=come_value_150->type;
                                    come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_type_149))));
                                    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value191,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_value_150->var=var__145;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                                    add_come_last_code(info,"%s;\n",come_value_150->c_value);
                                }
                                else {
                                    if(_if_conditional209=string_operator_equals(right_type_144->mClass->mName,"void")&&left_type_149->mHeap&&left_type_149->mPointerNum>0&&right_type_144->mPointerNum>0,                                    _if_conditional209) {
                                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value192=make_define_var(left_type_149,var__145->mCValueName,(_Bool)0,info))));
                                        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        check_assign_type(((char*)(right_value194=xsprintf("\%s is assining to",((char*)(right_value193=string_to_string(self->name)))))),left_type_149,right_type_144,right_value_143,(_Bool)0,(_Bool)1,info);
                                        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj64=come_value_150->c_value;
                                        come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("%s=%s",var__145->mCValueName,right_value_143->c_value))));
                                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj65=come_value_150->type;
                                        come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(left_type_149))));
                                        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_value_150->var=var__145;
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                                        add_come_last_code(info,"%s;\n",come_value_150->c_value);
                                    }
                                    else {
                                        add_come_code_at_function_head(info,"%s;\n",((char*)(right_value197=make_define_var(left_type_149,var__145->mCValueName,(_Bool)0,info))));
                                        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        check_assign_type(((char*)(right_value199=xsprintf("\%s is assining to",((char*)(right_value198=string_to_string(self->name)))))),left_type_149,right_type_144,right_value_143,(_Bool)0,(_Bool)1,info);
                                        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional210=left_type_149->mHeap&&!right_value_143->type->mHeap,                                        _if_conditional210) {
                                            if(_if_conditional211=string_operator_equals(right_value_143->type->mClass->mName,"void")&&right_value_143->type->mPointerNum==1,                                            _if_conditional211) {
                                            }
                                            else {
                                                if(_if_conditional212=!right_value_143->type->mDelegate&&!right_value_143->type->mShare&&!gComeGC,                                                _if_conditional212) {
                                                    err_msg(info,"require right value as heap object(%s)",self->name);
                                                    __result120__ = (_Bool)0;
                                                    come_call_finalizer3(left_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    return __result120__;
                                                }
                                            }
                                        }
                                        __dec_obj66=come_value_150->c_value;
                                        come_value_150->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s=%s",var__145->mCValueName,right_value_143->c_value))));
                                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __dec_obj67=come_value_150->type;
                                        come_value_150->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(left_type_149))));
                                        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_value_150->var=var__145;
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                                        add_come_last_code(info,"%s;\n",come_value_150->c_value);
                                    }
                                }
                            }
                        }
                        come_call_finalizer3(left_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_147,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional213=!node_compile(self->right_value,info),                    _if_conditional213) {
                        __result121__ = (_Bool)0;
                        return __result121__;
                    }
                    right_value_152=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 365, 6),__exception_result_var_b5=((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
                    come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    right_type_153=right_value_152->type;
                    dec_stack_ptr(1,info);
                    current_stack_frame_struct_154=info->current_stack_frame_struct;
                    if(_if_conditional214=current_stack_frame_struct_154&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),                    _if_conditional214) {
                        parent_var_155=get_variable_from_table(info->lv_table->mParent,self->name);
                        if(_if_conditional215=parent_var_155!=((void*)0),                        _if_conditional215) {
                            if(_if_conditional216=string_operator_not_equals(parent_var_155->mFunName,info->come_fun->mName),                            _if_conditional216) {
                                come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 376, "CVALUE"))));
                                come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                                left_type_157=parent_var_155->mType;
                                if(_if_conditional217=left_type_157->mPointerNum>0&&right_type_153->mPointerNum>0&&right_type_153->mHeap&&left_type_157->mHeap,                                _if_conditional217) {
                                    c_value_158=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("*(parent->%s)",parent_var_155->mCValueName))));
                                    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    decrement_ref_count_object(parent_var_155->mType,c_value_158,info,(_Bool)0);
                                    std_move(left_type_157,right_type_153,right_value_152,info);
                                    __dec_obj68=come_value_156->c_value;
                                    come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value))));
                                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value_id_159=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_152->c_value));
                                    if(_if_conditional218=right_value_id_159!=-1,                                    _if_conditional218) {
                                        remove_object_from_right_values(right_value_id_159,info);
                                    }
                                    c_value_158 = come_decrement_ref_count2(c_value_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(_if_conditional219=left_type_157->mPointerNum>0&&right_type_153->mPointerNum>0&&string_operator_equals(right_type_153->mClass->mName,"void")&&left_type_157->mHeap,                                    _if_conditional219) {
                                        c_value_160=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("*(parent->%s)",parent_var_155->mCValueName))));
                                        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        decrement_ref_count_object(parent_var_155->mType,c_value_160,info,(_Bool)0);
                                        __dec_obj69=come_value_156->c_value;
                                        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value))));
                                        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        c_value_160 = come_decrement_ref_count2(c_value_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        __dec_obj70=come_value_156->c_value;
                                        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value208=xsprintf("(*(parent->%s))=%s",parent_var_155->mCValueName,right_value_152->c_value))));
                                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                __dec_obj71=come_value_156->type;
                                come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(left_type_157))));
                                come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_156->var=((void*)0);
                                check_assign_type(((char*)(right_value211=xsprintf("\%s is assigning to",((char*)(right_value210=string_to_string(self->name)))))),left_type_157,right_type_153,come_value_156,(_Bool)0,(_Bool)1,info);
                                right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                add_come_last_code(info,"%s;\n",come_value_156->c_value);
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
                                __result122__ = (_Bool)1;
                                come_call_finalizer3(come_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                return __result122__;
                                come_call_finalizer3(come_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    var__161=get_variable_from_table(info->lv_table,self->name);
                    if(_if_conditional220=var__161==((void*)0),                    _if_conditional220) {
                        var__161=get_variable_from_table(info->gv_table,self->name);
                        if(_if_conditional221=var__161==((void*)0),                        _if_conditional221) {
                            err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                            __result123__ = (_Bool)1;
                            come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result123__;
                        }
                    }
                    if(_if_conditional222=var__161->mType==((void*)0),                    _if_conditional222) {
                        __dec_obj72=var__161->mType;
                        var__161->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(right_type_153))));
                        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    left_type_162=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(var__161->mType))));
                    come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 434, "CVALUE"))));
                    come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional223=var__161->mType->mStatic&&!var__161->mGlobal,                    _if_conditional223) {
                        check_assign_type(((char*)(right_value216=xsprintf("\%s is assining to",((char*)(right_value215=string_to_string(self->name)))))),left_type_162,right_type_153,right_value_152,(_Bool)0,(_Bool)1,info);
                        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        add_come_code(info,"%s=%s;\n",var__161->mCValueName,right_value_152->c_value);
                        __dec_obj73=come_value_163->c_value;
                        come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(""))));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                        transpiler_clear_last_code(info);
                    }
                    else {
                        if(_if_conditional224=var__161->mType->mConstant&&!var__161->mGlobal,                        _if_conditional224) {
                            check_assign_type(((char*)(right_value219=xsprintf("\%s is assining to",((char*)(right_value218=string_to_string(self->name)))))),left_type_162,right_type_153,right_value_152,(_Bool)0,(_Bool)1,info);
                            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            add_come_code_at_function_head(info,"%s=%s;\n",var__161->mCValueName,right_value_152->c_value);
                            __dec_obj74=come_value_163->c_value;
                            come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(""))));
                            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                            transpiler_clear_last_code(info);
                        }
                        else {
                            if(_if_conditional225=right_type_153->mHeap&&left_type_162->mHeap&&left_type_162->mPointerNum>0&&right_type_153->mPointerNum>0,                            _if_conditional225) {
                                check_assign_type(((char*)(right_value222=xsprintf("\%s is assining to",((char*)(right_value221=string_to_string(self->name)))))),left_type_162,right_type_153,right_value_152,(_Bool)0,(_Bool)1,info);
                                right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                decrement_ref_count_object(left_type_162,var__161->mCValueName,info,(_Bool)0);
                                std_move(left_type_162,right_type_153,right_value_152,info);
                                __dec_obj75=come_value_163->c_value;
                                come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s=%s",var__161->mCValueName,right_value_152->c_value))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value_id_164=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_152->c_value));
                                if(_if_conditional226=right_value_id_164!=-1,                                _if_conditional226) {
                                    remove_object_from_right_values(right_value_id_164,info);
                                }
                                __dec_obj76=come_value_163->type;
                                come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(left_type_162))));
                                come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                come_value_163->var=var__161;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                                add_come_last_code(info,"%s;\n",come_value_163->c_value);
                            }
                            else {
                                if(_if_conditional227=string_operator_equals(right_type_153->mClass->mName,"void")&&left_type_162->mHeap&&left_type_162->mPointerNum>0&&right_type_153->mPointerNum>0,                                _if_conditional227) {
                                    check_assign_type(((char*)(right_value226=xsprintf("\%s is assining to",((char*)(right_value225=string_to_string(self->name)))))),left_type_162,right_type_153,right_value_152,(_Bool)0,(_Bool)1,info);
                                    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    decrement_ref_count_object(left_type_162,var__161->mCValueName,info,(_Bool)0);
                                    __dec_obj77=come_value_163->c_value;
                                    come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s=%s",var__161->mCValueName,right_value_152->c_value))));
                                    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __dec_obj78=come_value_163->type;
                                    come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(left_type_162))));
                                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_value_163->var=var__161;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                                    add_come_last_code(info,"%s;\n",come_value_163->c_value);
                                }
                                else {
                                    check_assign_type(((char*)(right_value230=xsprintf("\%s is assining to",((char*)(right_value229=string_to_string(self->name)))))),left_type_162,right_type_153,right_value_152,(_Bool)0,(_Bool)1,info);
                                    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional228=left_type_162->mHeap&&!right_value_152->type->mHeap,                                    _if_conditional228) {
                                        if(_if_conditional229=string_operator_equals(right_value_152->type->mClass->mName,"void")&&right_value_152->type->mPointerNum==1,                                        _if_conditional229) {
                                        }
                                        else {
                                            if(_if_conditional230=!right_value_152->type->mDelegate&&!right_value_152->type->mShare&&!gComeGC,                                            _if_conditional230) {
                                                err_msg(info,"require right value as heap object(%s)",self->name);
                                                __result124__ = (_Bool)0;
                                                come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(left_type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                                return __result124__;
                                            }
                                        }
                                    }
                                    __dec_obj79=come_value_163->c_value;
                                    come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("%s=%s",var__161->mCValueName,right_value_152->c_value))));
                                    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __dec_obj80=come_value_163->type;
                                    come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_type_162))));
                                    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value232,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_value_163->var=var__161;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
                                    add_come_last_code(info,"%s;\n",come_value_163->c_value);
                                }
                            }
                        }
                    }
                    come_call_finalizer3(right_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result125__ = (_Bool)1;
    return __result125__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional19=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional19) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional21;
struct sType* __result52__;
void* right_value81;
struct sType* result_47;
_Bool _if_conditional39;
_Bool _if_conditional40;
void* right_value88;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional44;
void* right_value91;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value93;
char* __dec_obj20;
_Bool _if_conditional50;
void* right_value94;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional51;
void* right_value102;
struct list$1sNodeph* __dec_obj25;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value103;
struct list$1sTypeph* __dec_obj26;
_Bool _if_conditional66;
void* right_value110;
struct list$1charph* __dec_obj30;
_Bool _if_conditional70;
void* right_value111;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional71;
_Bool _if_conditional72;
void* right_value112;
struct sNode* __dec_obj32;
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
_Bool _if_conditional99;
void* right_value113;
struct sNode* __dec_obj33;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value114;
char* __dec_obj34;
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
void* right_value115;
char* __dec_obj35;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
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
            if(_if_conditional21=self==(void*)0,            _if_conditional21) {
                __result52__ = __result_obj__ = (void*)0;
                return __result52__;
            }
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value81,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional39=self!=((void*)0),            _if_conditional39) {
                result_47->mClass=self->mClass;
            }
            if(_if_conditional40=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional40) {
                __dec_obj16=result_47->mMultipleTypes;
                result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value88=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional44=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional44) {
                __dec_obj18=result_47->mNoSolvedGenericsType;
                result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value91,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional48=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional48) {
                __dec_obj19=result_47->mOriginalLoadVarType;
                result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional49=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional49) {
                __dec_obj20=result_47->mGenericsName;
                result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value93=string_clone(self->mGenericsName))));
                __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional50=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional50) {
                __dec_obj21=result_47->mGenericsTypes;
                result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value94=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value94,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional51) {
                __dec_obj25=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value102=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value102,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional64=self!=((void*)0),            _if_conditional64) {
                result_47->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional65=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional65) {
                __dec_obj26=result_47->mParamTypes;
                result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value103=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional66=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional66) {
                __dec_obj30=result_47->mParamNames;
                result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value110=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value110,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional70=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional70) {
                __dec_obj31=result_47->mResultType;
                result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value111=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional71=self!=((void*)0),            _if_conditional71) {
                result_47->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional72=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional72) {
                __dec_obj32=result_47->mAlignas;
                result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value112=sNode_clone(self->mAlignas))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value112) { right_value112 = come_decrement_ref_count2(right_value112, ((struct sNode*)right_value112)->finalize, ((struct sNode*)right_value112)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                result_47->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_47->mShort=self->mShort;
            }
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                result_47->mLong=self->mLong;
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_47->mLongLong=self->mLongLong;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_47->mConstant=self->mConstant;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_47->mRegister=self->mRegister;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_47->mVolatile=self->mVolatile;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_47->mStatic=self->mStatic;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_47->mUniq=self->mUniq;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_47->mRecord=self->mRecord;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_47->mExtern=self->mExtern;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_47->mRestrict=self->mRestrict;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_47->mImmutable=self->mImmutable;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_47->mHeap=self->mHeap;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_47->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_47->mDelegate=self->mDelegate;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_47->mShare=self->mShare;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_47->mClone=self->mClone;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_47->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_47->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_47->mRefference=self->mRefference;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_47->mException=self->mException;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_47->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_47->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional99) {
                __dec_obj33=result_47->mSizeNum;
                result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mSizeNum))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_47->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_47->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional102) {
                __dec_obj34=result_47->mOriginalTypeName;
                result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value114=string_clone(self->mOriginalTypeName))));
                __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_47->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_47->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                result_47->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_47->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_47->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_47->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_47->mInline=self->mInline;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_47->mNullValue=self->mNullValue;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_47->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional112) {
                __dec_obj35=result_47->mAsmName;
                result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mAsmName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_47->mArrayPointerType=self->mArrayPointerType;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_47->mLambdaArray=self->mLambdaArray;
            }
            if(_if_conditional115=self!=((void*)0),            _if_conditional115) {
                result_47->mNoNumberArray=self->mNoNumberArray;
            }
            __result69__ = __result_obj__ = result_47;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result69__;
            come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional22;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional22=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional22) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional24) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional26=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional26) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional27) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional28=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional28) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional35) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional36=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional36) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional37=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional37) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional38) {
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
                        it_48=self->head;
                        while(_while_condtional7=it_48!=((void*)0),                        _while_condtional7) {
                            prev_it_49=it_48;
                            it_48=it_48->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional23=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional23) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional25) {
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
                        it_50=self->head;
                        while(_while_condtional8=it_50!=((void*)0),                        _while_condtional8) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional30=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional30) {
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
                        it_52=self->head;
                        while(_while_condtional9=it_52!=((void*)0),                        _while_condtional9) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional33) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional41;
struct list$1sTypeph* __result53__;
void* right_value82;
void* right_value83;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
_Bool _while_condtional10;
void* right_value87;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&result_54, 0, sizeof(struct list$1sTypeph*));
memset(&it_55, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
                    if(_if_conditional41=self==((void*)0),                    _if_conditional41) {
                        __result53__ = __result_obj__ = ((void*)0);
                        return __result53__;
                    }
                    result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value82=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value82,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_55=self->head;
                    while(_while_condtional10=it_55!=((void*)0),                    _while_condtional10) {
                        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(it_55->item)))));
                        come_call_finalizer3(right_value87,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_55=it_55->next;
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
_Bool _if_conditional42;
void* right_value84;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj13;
_Bool _if_conditional43;
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
                            if(_if_conditional42=self->len==0,                            _if_conditional42) {
                                litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_56->prev=((void*)0);
                                litem_56->next=((void*)0);
                                __dec_obj13=litem_56->item;
                                litem_56->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_56;
                                self->head=litem_56;
                            }
                            else {
                                if(_if_conditional43=self->len==1,                                _if_conditional43) {
                                    litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_57->prev=self->head;
                                    litem_57->next=((void*)0);
                                    __dec_obj14=litem_57->item;
                                    litem_57->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_57;
                                    self->head->next=litem_57;
                                }
                                else {
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_58->prev=self->tail;
                                    litem_58->next=((void*)0);
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_58;
                                    self->tail=litem_58;
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
struct list_item$1sTypeph* it_59;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sTypeph*));
                    it_59=self->head;
                    while(_while_condtional11=it_59!=((void*)0),                    _while_condtional11) {
                        prev_it_60=it_59;
                        it_59=it_59->next;
                        come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional45;
struct tuple1$1sTypeph* __result57__;
void* right_value89;
struct tuple1$1sTypeph* result_61;
_Bool _if_conditional47;
void* right_value90;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct tuple1$1sTypeph*));
right_value90 = (void*)0;
                    if(_if_conditional45=self==(void*)0,                    _if_conditional45) {
                        __result57__ = __result_obj__ = (void*)0;
                        return __result57__;
                    }
                    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value89,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional47=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional47) {
                        __dec_obj17=result_61->v1;
                        result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(self->v1))));
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
_Bool _if_conditional46;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional46=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional46) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional52;
struct list$1sNodeph* __result59__;
void* right_value95;
void* right_value96;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
_Bool _while_condtional12;
void* right_value101;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
right_value96 = (void*)0;
memset(&result_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
                    if(_if_conditional52=self==((void*)0),                    _if_conditional52) {
                        __result59__ = __result_obj__ = ((void*)0);
                        return __result59__;
                    }
                    result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value95=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value95,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_63=self->head;
                    while(_while_condtional12=it_63!=((void*)0),                    _while_condtional12) {
                        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=sNode_clone(it_63->item)))));
                        if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_63=it_63->next;
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
_Bool _if_conditional53;
void* right_value97;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj22;
_Bool _if_conditional54;
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
                            if(_if_conditional53=self->len==0,                            _if_conditional53) {
                                litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_64->prev=((void*)0);
                                litem_64->next=((void*)0);
                                __dec_obj22=litem_64->item;
                                litem_64->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_64;
                                self->head=litem_64;
                            }
                            else {
                                if(_if_conditional54=self->len==1,                                _if_conditional54) {
                                    litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_65->prev=self->head;
                                    litem_65->next=((void*)0);
                                    __dec_obj23=litem_65->item;
                                    litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_65;
                                    self->head->next=litem_65;
                                }
                                else {
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_66->prev=self->tail;
                                    litem_66->next=((void*)0);
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_66;
                                    self->tail=litem_66;
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
_Bool _if_conditional55;
struct sNode* __result62__;
void* right_value100;
struct sNode* result_67;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
struct sNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&result_67, 0, sizeof(struct sNode*));
                            if(_if_conditional55=self==(void*)0,                            _if_conditional55) {
                                __result62__ = __result_obj__ = (void*)0;
                                return __result62__;
                            }
                            result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value100=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional56=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional56) {
                                result_67->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional57=self!=((void*)0),                            _if_conditional57) {
                                result_67->finalize=self->finalize;
                            }
                            if(_if_conditional58=self!=((void*)0),                            _if_conditional58) {
                                result_67->clone=self->clone;
                            }
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                result_67->compile=self->compile;
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                result_67->sline=self->sline;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_67->sname=self->sname;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_67->terminated=self->terminated;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_67->kind=self->kind;
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
                    it_68=self->head;
                    while(_while_condtional13=it_68!=((void*)0),                    _while_condtional13) {
                        prev_it_69=it_68;
                        it_68=it_68->next;
                        come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional67;
struct list$1charph* __result65__;
void* right_value104;
void* right_value105;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
_Bool _while_condtional14;
void* right_value109;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_70, 0, sizeof(struct list$1charph*));
memset(&it_71, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
                    if(_if_conditional67=self==((void*)0),                    _if_conditional67) {
                        __result65__ = __result_obj__ = ((void*)0);
                        return __result65__;
                    }
                    result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value104=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
                    come_call_finalizer3(right_value104,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_71=self->head;
                    while(_while_condtional14=it_71!=((void*)0),                    _while_condtional14) {
                        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value109=string_clone(it_71->item)))));
                        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_71=it_71->next;
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
_Bool _if_conditional68;
void* right_value106;
struct list_item$1charph* litem_72;
char* __dec_obj27;
_Bool _if_conditional69;
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
                            if(_if_conditional68=self->len==0,                            _if_conditional68) {
                                litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_72->prev=((void*)0);
                                litem_72->next=((void*)0);
                                __dec_obj27=litem_72->item;
                                litem_72->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_72;
                                self->head=litem_72;
                            }
                            else {
                                if(_if_conditional69=self->len==1,                                _if_conditional69) {
                                    litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
                                    come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=self->head;
                                    litem_73->next=((void*)0);
                                    __dec_obj28=litem_73->item;
                                    litem_73->item=(char*)come_increment_ref_count(item);
                                    __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_73;
                                    self->head->next=litem_73;
                                }
                                else {
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_74->prev=self->tail;
                                    litem_74->next=((void*)0);
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_74;
                                    self->tail=litem_74;
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
struct list_item$1charph* it_75;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_76;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_75, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charph*));
                    it_75=self->head;
                    while(_while_condtional15=it_75!=((void*)0),                    _while_condtional15) {
                        prev_it_76=it_75;
                        it_75=it_75->next;
                        come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional118;
struct list$1tuple3$3sTypephcharphsNodephph* __result70__;
void* right_value118;
void* right_value119;
struct list$1tuple3$3sTypephcharphsNodephph* result_79;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_80;
_Bool _while_condtional17;
void* right_value127;
struct list$1tuple3$3sTypephcharphsNodephph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
memset(&it_80, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value127 = (void*)0;
            if(_if_conditional118=self==((void*)0),            _if_conditional118) {
                __result70__ = __result_obj__ = ((void*)0);
                return __result70__;
            }
            result_79=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value119=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value118=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 137, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value118,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value119,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            it_80=self->head;
            while(_while_condtional17=it_80!=((void*)0),            _while_condtional17) {
                list$1tuple3$3sTypephcharphsNodephph_add(result_79,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value127=tuple3$3sTypephcharphsNodephp_clone(it_80->item)))));
                come_call_finalizer3(right_value127,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_80=it_80->next;
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
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
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
                    it_77=self->head;
                    while(_while_condtional16=it_77!=((void*)0),                    _while_condtional16) {
                        prev_it_78=it_77;
                        it_77=it_77->next;
                        come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional119=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional119) {
                                come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional123;
void* right_value120;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_81;
struct tuple3$3sTypephcharphsNodeph* __dec_obj41;
_Bool _if_conditional127;
void* right_value121;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_82;
struct tuple3$3sTypephcharphsNodeph* __dec_obj42;
void* right_value122;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_83;
struct tuple3$3sTypephcharphsNodeph* __dec_obj43;
struct list$1tuple3$3sTypephcharphsNodephph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value121 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional123=self->len==0,                    _if_conditional123) {
                        litem_81=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value120=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 151, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value120,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_81->prev=((void*)0);
                        litem_81->next=((void*)0);
                        __dec_obj41=litem_81->item;
                        litem_81->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_81;
                        self->head=litem_81;
                    }
                    else {
                        if(_if_conditional127=self->len==1,                        _if_conditional127) {
                            litem_82=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value121=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 161, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value121,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_82->prev=self->head;
                            litem_82->next=((void*)0);
                            __dec_obj42=litem_82->item;
                            litem_82->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj42,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_82;
                            self->head->next=litem_82;
                        }
                        else {
                            litem_83=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value122=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 171, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value122,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_83->prev=self->tail;
                            litem_83->next=((void*)0);
                            __dec_obj43=litem_83->item;
                            litem_83->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj43,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_83;
                            self->tail=litem_83;
                        }
                    }
                    self->len++;
                    __result72__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result72__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional131=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional131) {
                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional132=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional132) {
                                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional133=self!=((void*)0)&&self->v3!=((void*)0),                                _if_conditional133) {
                                    if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional134;
struct tuple3$3sTypephcharphsNodeph* __result73__;
void* right_value123;
struct tuple3$3sTypephcharphsNodeph* result_84;
_Bool _if_conditional138;
void* right_value124;
struct sType* __dec_obj44;
_Bool _if_conditional139;
void* right_value125;
char* __dec_obj45;
_Bool _if_conditional140;
void* right_value126;
struct sNode* __dec_obj46;
struct tuple3$3sTypephcharphsNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&result_84, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
right_value124 = (void*)0;
right_value125 = (void*)0;
right_value126 = (void*)0;
                    if(_if_conditional134=self==(void*)0,                    _if_conditional134) {
                        __result73__ = __result_obj__ = (void*)0;
                        return __result73__;
                    }
                    result_84=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value123=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"))));
                    come_call_finalizer3(right_value123,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional138=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional138) {
                        __dec_obj44=result_84->v1;
                        result_84->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional139=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional139) {
                        __dec_obj45=result_84->v2;
                        result_84->v2=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v2))));
                        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional140=self!=((void*)0)&&self->v3!=((void*)0),                    _if_conditional140) {
                        __dec_obj46=result_84->v3;
                        result_84->v3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->v3))));
                        if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result74__ = __result_obj__ = result_84;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                    come_call_finalizer3(result_84,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional135=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional135) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional136=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional136) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional137=self!=((void*)0)&&self->v3!=((void*)0),                        _if_conditional137) {
                            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            it_85=self->head;
            while(_while_condtional18=it_85!=((void*)0),            _while_condtional18) {
                prev_it_86=it_85;
                it_85=it_85->next;
                come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_87;
unsigned int hash_88;
unsigned int it_89;
_Bool _while_condtional19;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct sVar* __result78__;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct sVar* __result79__;
struct sVar* __result80__;
struct sVar* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_87, 0, sizeof(struct sVar*));
memset(&hash_88, 0, sizeof(unsigned int));
memset(&it_89, 0, sizeof(unsigned int));
            memset(&default_value_87,0,sizeof(struct sVar*));
            hash_88=string_get_hash_key(((char*)key))%self->size;
            it_89=hash_88;
            while(_while_condtional19=(_Bool)1,            _while_condtional19) {
                if(_if_conditional148=self->item_existance[it_89],                _if_conditional148) {
                    if(_if_conditional149=string_equals(self->keys[it_89],key),                    _if_conditional149) {
                        __result78__ = __result_obj__ = self->items[it_89];
                        come_call_finalizer3(default_value_87,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result78__;
                    }
                    it_89++;
                    if(_if_conditional154=it_89>=self->size,                    _if_conditional154) {
                        it_89=0;
                    }
                    else {
                        if(_if_conditional155=it_89==hash_88,                        _if_conditional155) {
                            __result79__ = __result_obj__ = default_value_87;
                            come_call_finalizer3(default_value_87,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result79__;
                        }
                    }
                }
                else {
                    __result80__ = __result_obj__ = default_value_87;
                    come_call_finalizer3(default_value_87,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result80__;
                }
            }
            __result81__ = __result_obj__ = default_value_87;
            come_call_finalizer3(default_value_87,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result81__;
            come_call_finalizer3(default_value_87,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional150=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional150) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional151=self!=((void*)0)&&self->mCValueName!=((void*)0),                            _if_conditional151) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional152=self!=((void*)0)&&self->mType!=((void*)0),                            _if_conditional152) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional153=self!=((void*)0)&&self->mFunName!=((void*)0),                            _if_conditional153) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional158;
struct tuple3$3sTypephcharphsNodeph* result_93;
struct tuple3$3sTypephcharphsNodeph* __result84__;
_Bool _if_conditional159;
struct tuple3$3sTypephcharphsNodeph* __result85__;
struct tuple3$3sTypephcharphsNodeph* result_94;
struct tuple3$3sTypephcharphsNodeph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_94, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(_if_conditional158=self==((void*)0),            _if_conditional158) {
                memset(&result_93,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                __result84__ = __result_obj__ = result_93;
                return __result84__;
            }
            self->it=self->head;
            if(self->it) {
                __result85__ = __result_obj__ = self->it->item;
                return __result85__;
            }
            memset(&result_94,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
            __result86__ = __result_obj__ = result_94;
            return __result86__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
            __result87__ = self==((void*)0)||self->it==((void*)0);
            return __result87__;
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional160;
struct tuple3$3sTypephcharphsNodeph* result_96;
struct tuple3$3sTypephcharphsNodeph* __result88__;
_Bool _if_conditional161;
struct tuple3$3sTypephcharphsNodeph* __result89__;
struct tuple3$3sTypephcharphsNodeph* result_97;
struct tuple3$3sTypephcharphsNodeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_96, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
memset(&result_97, 0, sizeof(struct tuple3$3sTypephcharphsNodeph*));
            if(_if_conditional160=self==((void*)0)||self->it==((void*)0),            _if_conditional160) {
                memset(&result_96,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
                __result88__ = __result_obj__ = result_96;
                return __result88__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result89__ = __result_obj__ = self->it->item;
                return __result89__;
            }
            memset(&result_97,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
            __result90__ = __result_obj__ = result_97;
            return __result90__;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional165=self!=((void*)0)&&self->c_value!=((void*)0),                    _if_conditional165) {
                        self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional166=self!=((void*)0)&&self->type!=((void*)0),                    _if_conditional166) {
                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional170;
char* result_107;
char* __result94__;
_Bool _if_conditional171;
char* __result95__;
char* result_108;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_107, 0, sizeof(char*));
memset(&result_108, 0, sizeof(char*));
                if(_if_conditional170=self==((void*)0),                _if_conditional170) {
                    memset(&result_107,0,sizeof(char*));
                    __result94__ = __result_obj__ = result_107;
                    return __result94__;
                }
                self->it=self->head;
                if(self->it) {
                    __result95__ = __result_obj__ = self->it->item;
                    return __result95__;
                }
                memset(&result_108,0,sizeof(char*));
                __result96__ = __result_obj__ = result_108;
                return __result96__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
                __result97__ = self==((void*)0)||self->it==((void*)0);
                return __result97__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional172;
char* result_110;
char* __result98__;
_Bool _if_conditional173;
char* __result99__;
char* result_111;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(char*));
memset(&result_111, 0, sizeof(char*));
                if(_if_conditional172=self==((void*)0)||self->it==((void*)0),                _if_conditional172) {
                    memset(&result_110,0,sizeof(char*));
                    __result98__ = __result_obj__ = result_110;
                    return __result98__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result99__ = __result_obj__ = self->it->item;
                    return __result99__;
                }
                memset(&result_111,0,sizeof(char*));
                __result100__ = __result_obj__ = result_111;
                return __result100__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional174;
int __result101__;
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional174=self==((void*)0),                    _if_conditional174) {
                        __result101__ = 0;
                        return __result101__;
                    }
                    __result102__ = self->len;
                    return __result102__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional176;
struct list_item$1sTypeph* it_112;
int i_113;
_Bool _while_condtional20;
_Bool _if_conditional177;
struct sType* __result103__;
struct sType* default_value_114;
struct sType* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_113, 0, sizeof(int));
memset(&default_value_114, 0, sizeof(struct sType*));
                        if(_if_conditional176=position<0,                        _if_conditional176) {
                            position+=self->len;
                        }
                        it_112=self->head;
                        i_113=0;
                        while(_while_condtional20=it_112!=((void*)0),                        _while_condtional20) {
                            if(_if_conditional177=position==i_113,                            _if_conditional177) {
                                __result103__ = __result_obj__ = it_112->item;
                                return __result103__;
                            }
                            it_112=it_112->next;
                            i_113++;
                        }
                        memset(&default_value_114,0,sizeof(struct sType*));
                        __result104__ = __result_obj__ = default_value_114;
                        come_call_finalizer3(default_value_114,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result104__;
                        come_call_finalizer3(default_value_114,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional187;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional187=self==((void*)0),                    _if_conditional187) {
                        __result108__ = 0;
                        return __result108__;
                    }
                    __result109__ = self->len;
                    return __result109__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct sNode* result_131;
struct sNode* __result110__;
_Bool _if_conditional191;
struct sNode* __result111__;
struct sNode* result_132;
struct sNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_131, 0, sizeof(struct sNode*));
memset(&result_132, 0, sizeof(struct sNode*));
                            if(_if_conditional190=self==((void*)0),                            _if_conditional190) {
                                memset(&result_131,0,sizeof(struct sNode*));
                                __result110__ = __result_obj__ = result_131;
                                return __result110__;
                            }
                            self->it=self->head;
                            if(self->it) {
                                __result111__ = __result_obj__ = self->it->item;
                                return __result111__;
                            }
                            memset(&result_132,0,sizeof(struct sNode*));
                            __result112__ = __result_obj__ = result_132;
                            return __result112__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
                            __result113__ = self==((void*)0)||self->it==((void*)0);
                            return __result113__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct sNode* result_134;
struct sNode* __result114__;
_Bool _if_conditional193;
struct sNode* __result115__;
struct sNode* result_135;
struct sNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_134, 0, sizeof(struct sNode*));
memset(&result_135, 0, sizeof(struct sNode*));
                            if(_if_conditional192=self==((void*)0)||self->it==((void*)0),                            _if_conditional192) {
                                memset(&result_134,0,sizeof(struct sNode*));
                                __result114__ = __result_obj__ = result_134;
                                return __result114__;
                            }
                            self->it=self->it->next;
                            if(self->it) {
                                __result115__ = __result_obj__ = self->it->item;
                                return __result115__;
                            }
                            memset(&result_135,0,sizeof(struct sNode*));
                            __result116__ = __result_obj__ = result_135;
                            return __result116__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value166;
struct list_item$1CVALUEph* litem_139;
struct CVALUE* __dec_obj57;
_Bool _if_conditional197;
void* right_value167;
struct list_item$1CVALUEph* litem_140;
struct CVALUE* __dec_obj58;
void* right_value168;
struct list_item$1CVALUEph* litem_141;
struct CVALUE* __dec_obj59;
struct list$1CVALUEph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1CVALUEph*));
right_value167 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1CVALUEph*));
right_value168 = (void*)0;
memset(&litem_141, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional195=self->len==0,                    _if_conditional195) {
                        litem_139=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value166=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 221, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value166,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_139->prev=((void*)0);
                        litem_139->next=((void*)0);
                        __dec_obj57=litem_139->item;
                        litem_139->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_139;
                        self->head=litem_139;
                    }
                    else {
                        if(_if_conditional197=self->len==1,                        _if_conditional197) {
                            litem_140=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value167=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 231, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value167,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_140->prev=self->head;
                            litem_140->next=((void*)0);
                            __dec_obj58=litem_140->item;
                            litem_140->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_140;
                            self->head->next=litem_140;
                        }
                        else {
                            litem_141=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value168=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 241, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value168,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_141->prev=self->tail;
                            litem_141->next=((void*)0);
                            __dec_obj59=litem_141->item;
                            litem_141->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_141;
                            self->tail=litem_141;
                        }
                    }
                    self->len++;
                    __result117__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result117__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional196=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional196) {
                                come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value233;
void* right_value234;
char* __dec_obj81;
struct sLoadNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    ((struct sNodeBase*)(right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value233,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(name))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result126__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result126__;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__;
void* right_value235;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result127__ = __result_obj__ = ((char*)(right_value235=__builtin_string("sLoadNode")));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sClass* current_stack_frame_struct_165;
_Bool _if_conditional233;
struct sVar* parent_var_166;
_Bool _if_conditional234;
_Bool _if_conditional235;
void* right_value236;
struct CVALUE* come_value_167;
struct sType* type_168;
void* right_value237;
char* __dec_obj82;
void* right_value238;
struct sType* __dec_obj83;
_Bool __result128__;
struct sVar* var__169;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct sFun* fun_173;
_Bool _if_conditional257;
void* right_value239;
struct CVALUE* come_value_174;
void* right_value240;
char* __dec_obj84;
struct sType* __dec_obj85;
_Bool __result133__;
_Bool __result134__;
void* right_value241;
struct CVALUE* come_value_175;
void* right_value242;
char* __dec_obj86;
void* right_value243;
struct sType* __dec_obj87;
_Bool _if_conditional258;
void* right_value244;
struct sType* __dec_obj88;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&current_stack_frame_struct_165, 0, sizeof(struct sClass*));
memset(&parent_var_166, 0, sizeof(struct sVar*));
right_value236 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
memset(&type_168, 0, sizeof(struct sType*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&var__169, 0, sizeof(struct sVar*));
memset(&fun_173, 0, sizeof(struct sFun*));
right_value239 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    current_stack_frame_struct_165=info->current_stack_frame_struct;
    if(_if_conditional233=current_stack_frame_struct_165&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0),    _if_conditional233) {
        parent_var_166=get_variable_from_table(info->lv_table->mParent,self->name);
        if(_if_conditional234=parent_var_166!=((void*)0),        _if_conditional234) {
            if(_if_conditional235=string_operator_not_equals(parent_var_166->mFunName,info->come_fun->mName),            _if_conditional235) {
                come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 536, "CVALUE"))));
                come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                type_168=parent_var_166->mType;
                __dec_obj82=come_value_167->c_value;
                come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("(*(parent->%s))",parent_var_166->mCValueName))));
                __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj83=come_value_167->type;
                come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(type_168))));
                come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_value_167->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_167->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
                __result128__ = (_Bool)1;
                come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result128__;
                come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__169=get_variable_from_table(info->lv_table,self->name);
    if(_if_conditional236=var__169==((void*)0),    _if_conditional236) {
        var__169=get_variable_from_table(info->gv_table,self->name);
        if(_if_conditional237=var__169==((void*)0),        _if_conditional237) {
            fun_173=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_173) {
                come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 563, "CVALUE"))));
                come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj84=come_value_174->c_value;
                come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s",fun_173->mName))));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj85=come_value_174->type;
                come_value_174->type=(struct sType*)come_increment_ref_count(fun_173->mLambdaType);
                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_174->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
                __result133__ = (_Bool)1;
                come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result133__;
                come_call_finalizer3(come_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                __result134__ = (_Bool)1;
                return __result134__;
            }
        }
    }
    come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 580, "CVALUE"))));
    come_call_finalizer3(right_value241,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=come_value_175->c_value;
    come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s",var__169->mCValueName))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj87=come_value_175->type;
    come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(var__169->mType))));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_175->var=var__169;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
    if(_if_conditional258=list$1sNodeph_length(come_value_175->type->mArrayNum)==1,    _if_conditional258) {
        __dec_obj88=come_value_175->type->mOriginalLoadVarType->v1;
        come_value_175->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(come_value_175->type))));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value244,sType_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sNodeph_reset(come_value_175->type->mArrayNum);
        come_value_175->type->mPointerNum++;
        come_value_175->type->mOriginalTypeNamePointerNum=come_value_175->type->mPointerNum;
    }
    __result136__ = (_Bool)1;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result136__;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_170;
unsigned int hash_171;
unsigned int it_172;
_Bool _while_condtional21;
_Bool _if_conditional238;
_Bool _if_conditional239;
struct sFun* __result129__;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct sFun* __result130__;
struct sFun* __result131__;
struct sFun* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_170, 0, sizeof(struct sFun*));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&it_172, 0, sizeof(unsigned int));
                memset(&default_value_170,0,sizeof(struct sFun*));
                hash_171=string_get_hash_key(((char*)key))%self->size;
                it_172=hash_171;
                while(_while_condtional21=(_Bool)1,                _while_condtional21) {
                    if(_if_conditional238=self->item_existance[it_172],                    _if_conditional238) {
                        if(_if_conditional239=string_equals(self->keys[it_172],key),                        _if_conditional239) {
                            __result129__ = __result_obj__ = self->items[it_172];
                            come_call_finalizer3(default_value_170,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result129__;
                        }
                        it_172++;
                        if(_if_conditional255=it_172>=self->size,                        _if_conditional255) {
                            it_172=0;
                        }
                        else {
                            if(_if_conditional256=it_172==hash_171,                            _if_conditional256) {
                                __result130__ = __result_obj__ = default_value_170;
                                come_call_finalizer3(default_value_170,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result130__;
                            }
                        }
                    }
                    else {
                        __result131__ = __result_obj__ = default_value_170;
                        come_call_finalizer3(default_value_170,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result131__;
                    }
                }
                __result132__ = __result_obj__ = default_value_170;
                come_call_finalizer3(default_value_170,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result132__;
                come_call_finalizer3(default_value_170,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional240=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional240) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional241=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional241) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional242=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional242) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional243=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional243) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional244=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional244) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional245=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional245) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional246=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional246) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional249=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional249) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional250=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional250) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional251) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional252=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional252) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional253=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional253) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional254=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional254) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional247;
_Bool _if_conditional248;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional247=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional247) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional248=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional248) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_176;
_Bool _while_condtional22;
struct list_item$1sNodeph* prev_it_177;
struct list$1sNodeph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_176, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_177, 0, sizeof(struct list_item$1sNodeph*));
            it_176=self->head;
            while(_while_condtional22=it_176!=((void*)0),            _while_condtional22) {
                prev_it_177=it_176;
                it_176=it_176->next;
                come_call_finalizer3(prev_it_177,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result135__ = __result_obj__ = self;
            return __result135__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value245;
void* right_value246;
char* __dec_obj89;
struct sFunLoadNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    ((struct sNodeBase*)(right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->name;
    self->name=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(name))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result137__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result137__;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__;
void* right_value247;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result138__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sFunLoadNode")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __result_obj__;
struct sFun* fun_178;
_Bool _if_conditional261;
_Bool __result139__;
void* right_value248;
struct CVALUE* come_value_179;
void* right_value249;
char* __dec_obj90;
struct sType* __dec_obj91;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_178, 0, sizeof(struct sFun*));
right_value248 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
    fun_178=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(_if_conditional261=fun_178==((void*)0),    _if_conditional261) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        __result139__ = (_Bool)0;
        return __result139__;
    }
    else {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 622, "CVALUE"))));
        come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_179->c_value;
        come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s",fun_178->mName))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_179->type;
        come_value_179->type=(struct sType*)come_increment_ref_count(fun_178->mLambdaType);
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_179->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
        come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    return __result140__;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
void* __result_obj__;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional259=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional259) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional260=self!=((void*)0)&&self->name!=((void*)0),        _if_conditional260) {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1sNodeph* initializer, struct sInfo* info){
void* __result_obj__;
void* right_value250;
void* right_value251;
struct list$1sNodeph* __dec_obj92;
struct sArrayInitializer* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    ((struct sNodeBase*)(right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj92=self->initializer;
    self->initializer=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value251=list$1sNodephp_clone(initializer))));
    come_call_finalizer3(__dec_obj92,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value251,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__;
void* right_value252;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value252=__builtin_string("sArrayInitializer")));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
void* __result_obj__;
struct list$1sNodeph* initializer_180;
void* right_value253;
void* right_value254;
struct buffer* buf_181;
int i_182;
struct sType* element_type_183;
struct list$1sNodeph* o2_saved_184;
struct sNode* it_185;
_Bool _if_conditional264;
_Bool __result143__;
void* right_value255;
struct CVALUE* __exception_result_var_b6;
struct CVALUE* come_value_186;
void* right_value256;
struct sType* __dec_obj93;
_Bool _if_conditional265;
void* right_value257;
struct CVALUE* come_value_187;
void* right_value258;
char* __dec_obj94;
void* right_value259;
struct sType* __dec_obj95;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&initializer_180, 0, sizeof(struct list$1sNodeph*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&buf_181, 0, sizeof(struct buffer*));
memset(&i_182, 0, sizeof(int));
memset(&element_type_183, 0, sizeof(struct sType*));
memset(&o2_saved_184, 0, sizeof(struct list$1sNodeph*));
memset(&it_185, 0, sizeof(struct sNode*));
right_value255 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    initializer_180=(struct list$1sNodeph*)come_increment_ref_count(self->initializer);
    buf_181=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value254=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value253=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 653, "buffer"))))))));
    come_call_finalizer3(right_value253,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value254,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_181,"{");
    i_182=0;
    element_type_183=((void*)0);
    for(    o2_saved_184=(struct list$1sNodeph*)come_increment_ref_count((initializer_180)),it_185=list$1sNodeph_begin((o2_saved_184));    !list$1sNodeph_end((o2_saved_184));    it_185=list$1sNodeph_next((o2_saved_184))    ){
        if(_if_conditional264=!node_compile(it_185,info),        _if_conditional264) {
            __result143__ = (_Bool)0;
            come_call_finalizer3(o2_saved_184,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_180,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_181,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        come_value_186=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("07var.c", 661, 7),__exception_result_var_b6=((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
        come_call_finalizer3(right_value255,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        __dec_obj93=element_type_183;
        element_type_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(come_value_186->type))));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_181,come_value_186->c_value);
        i_182++;
        if(_if_conditional265=i_182!=list$1sNodeph_length(initializer_180),        _if_conditional265) {
            buffer_append_str(buf_181,",");
        }
        come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_184,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_181,"}");
    come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 676, "CVALUE"))));
    come_call_finalizer3(right_value257,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=come_value_187->c_value;
    come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value258=buffer_to_string(buf_181))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj95=come_value_187->type;
    come_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(element_type_183))));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_187->type->mPointerNum++;
    come_value_187->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
    __result144__ = (_Bool)1;
    come_call_finalizer3(initializer_180,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer3(initializer_180,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__;
int __exception_result_var_b7;
void* right_value260;
void* right_value261;
struct list$1sNodeph* initializer_188;
_Bool no_comma_189;
void* right_value262;
struct sNode* exp_190;
_Bool _while_condtional23;
_Bool no_comma_191;
void* right_value263;
struct sNode* exp_192;
int __exception_result_var_b8;
void* right_value264;
void* right_value265;
struct sNode* _inf_value1;
struct sArrayInitializer* _inf_obj_value1;
void* right_value269;
struct sNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&initializer_188, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_189, 0, sizeof(_Bool));
right_value262 = (void*)0;
memset(&exp_190, 0, sizeof(struct sNode*));
memset(&no_comma_191, 0, sizeof(_Bool));
right_value263 = (void*)0;
memset(&exp_192, 0, sizeof(struct sNode*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value269 = (void*)0;
    (come_push_stackframe("07var.c", 692, 8),__exception_result_var_b7=expected_next_character(123,info), come_pop_stackframe(), __exception_result_var_b7);
    initializer_188=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value261=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value260=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "07var.c", 694, "list$1sNodeph"))))))));
    come_call_finalizer3(right_value260,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    no_comma_189=info->no_comma;
    info->no_comma=(_Bool)1;
    exp_190=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=expression_v13(info))));
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    info->no_comma=no_comma_189;
    list$1sNodeph_add(initializer_188,(struct sNode*)come_increment_ref_count(exp_190));
    while(_while_condtional23=*info->p==44,    _while_condtional23) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_191=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_192=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=expression_v13(info))));
        if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_191;
        list$1sNodeph_add(initializer_188,(struct sNode*)come_increment_ref_count(exp_192));
        if(exp_192) { exp_192 = come_decrement_ref_count2(exp_192, ((struct sNode*)exp_192)->finalize, ((struct sNode*)exp_192)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    (come_push_stackframe("07var.c", 715, 9),__exception_result_var_b8=expected_next_character(125,info), come_pop_stackframe(), __exception_result_var_b8);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 717, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sArrayInitializer*)(right_value265=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(right_value264=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 717, "sArrayInitializer")))),(struct list$1sNodeph*)come_increment_ref_count(initializer_188),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sArrayInitializer_finalize;
    _inf_value1->clone=(void*)sArrayInitializer_clone;
    _inf_value1->compile=(void*)sArrayInitializer_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sArrayInitializer_kind;
    __result147__ = __result_obj__ = ((struct sNode*)(right_value269=_inf_value1));
    come_call_finalizer3(initializer_188,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_190) { exp_190 = come_decrement_ref_count2(exp_190, ((struct sNode*)exp_190)->finalize, ((struct sNode*)exp_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(right_value264,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result147__;
    come_call_finalizer3(initializer_188,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_190) { exp_190 = come_decrement_ref_count2(exp_190, ((struct sNode*)exp_190)->finalize, ((struct sNode*)exp_190)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
void* __result_obj__;
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional266) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional267=self!=((void*)0)&&self->initializer!=((void*)0),        _if_conditional267) {
            come_call_finalizer3(self->initializer,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__;
_Bool _if_conditional268;
struct sArrayInitializer* __result145__;
void* right_value266;
struct sArrayInitializer* result_193;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value267;
char* __dec_obj96;
_Bool _if_conditional271;
void* right_value268;
struct list$1sNodeph* __dec_obj97;
struct sArrayInitializer* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
memset(&result_193, 0, sizeof(struct sArrayInitializer*));
right_value267 = (void*)0;
right_value268 = (void*)0;
        if(_if_conditional268=self==(void*)0,        _if_conditional268) {
            __result145__ = __result_obj__ = (void*)0;
            return __result145__;
        }
        result_193=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(right_value266=(struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"))));
        come_call_finalizer3(right_value266,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional269=self!=((void*)0),        _if_conditional269) {
            result_193->sline=self->sline;
        }
        if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional270) {
            __dec_obj96=result_193->sname;
            result_193->sname=(char*)come_increment_ref_count(((char*)(right_value267=string_clone(self->sname))));
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional271=self!=((void*)0)&&self->initializer!=((void*)0),        _if_conditional271) {
            __dec_obj97=result_193->initializer;
            result_193->initializer=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value268=list$1sNodephp_clone(self->initializer))));
            come_call_finalizer3(__dec_obj97,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value268,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result146__ = __result_obj__ = result_193;
        come_call_finalizer3(result_193,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
        return __result146__;
        come_call_finalizer3(result_193,sArrayInitializer_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value270;
struct sVar* self_194;
void* right_value271;
char* __dec_obj98;
void* right_value272;
struct sType* __dec_obj99;
_Bool _if_conditional272;
void* right_value273;
char* __dec_obj100;
static int n_195=0;
void* right_value274;
char* __dec_obj101;
_Bool _if_conditional273;
void* right_value275;
char* __dec_obj102;
char* __dec_obj103;
void* right_value282;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
memset(&self_194, 0, sizeof(struct sVar*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value282 = (void*)0;
    self_194=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value270=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 722, "sVar"))));
    come_call_finalizer3(right_value270,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self_194->mName;
    self_194->mName=(char*)come_increment_ref_count(((char*)(right_value271=__builtin_string(name))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj99=self_194->mType;
    self_194->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(type))));
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value272,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(type->mFunctionParam) {
        __dec_obj100=self_194->mCValueName;
        self_194->mCValueName=(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string(name))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj101=self_194->mCValueName;
        self_194->mCValueName=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("%s_%d",name,n_195++))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    self_194->mBlockLevel=info->block_level;
    self_194->mAllocaValue=(_Bool)0;
    self_194->mFunctionParam=(_Bool)0;
    self_194->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj102=self_194->mFunName;
        self_194->mFunName=(char*)come_increment_ref_count(((char*)(right_value275=string_clone(info->come_fun->mName))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj103=self_194->mFunName;
        self_194->mFunName=((void*)0);
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_194));
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_194,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool _if_conditional274;
unsigned int hash_213;
unsigned int it_214;
_Bool _while_condtional26;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool same_key_exist_231;
char* it2_234;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct map$2charphsVarph* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_213, 0, sizeof(unsigned int));
memset(&it_214, 0, sizeof(unsigned int));
memset(&same_key_exist_231, 0, sizeof(_Bool));
memset(&it2_234, 0, sizeof(char*));
        if(_if_conditional274=self->len*10>=self->size,        _if_conditional274) {
            map$2charphsVarph_rehash(self);
        }
        hash_213=string_get_hash_key(key)%self->size;
        it_214=hash_213;
        while(_while_condtional26=(_Bool)1,        _while_condtional26) {
            if(_if_conditional286=self->item_existance[it_214],            _if_conditional286) {
                if(_if_conditional287=string_equals(self->keys[it_214],key),                _if_conditional287) {
                    if(_if_conditional288=1,                    _if_conditional288) {
                        list$1charp_remove(self->key_list,self->keys[it_214]);
                        self->keys[it_214] = come_decrement_ref_count2(self->keys[it_214], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_214]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_214]);
                        self->keys[it_214]=key;
                    }
                    if(_if_conditional308=1,                    _if_conditional308) {
                        come_call_finalizer3(self->items[it_214],sVar_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_214]=(struct sVar*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_214]=item;
                    }
                    break;
                }
                it_214++;
                if(_if_conditional309=it_214>=self->size,                _if_conditional309) {
                    it_214=0;
                }
                else {
                    if(_if_conditional310=it_214==hash_213,                    _if_conditional310) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_214]=(_Bool)1;
                if(_if_conditional311=1,                _if_conditional311) {
                    self->keys[it_214]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_214]=key;
                }
                if(_if_conditional312=1,                _if_conditional312) {
                    self->items[it_214]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_214]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_231=(_Bool)0;
        for(        it2_234=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_234=list$1charp_next(self->key_list)        ){
            if(_if_conditional317=string_equals(it2_234,key),            _if_conditional317) {
                same_key_exist_231=(_Bool)1;
            }
        }
        if(_if_conditional318=!same_key_exist_231,        _if_conditional318) {
            list$1charp_push_back(self->key_list,key);
        }
        __result171__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result171__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
int size_196;
void* right_value276;
char** keys_197;
void* right_value277;
struct sVar** items_198;
void* right_value278;
_Bool* item_existance_199;
int len_200;
char* it_203;
struct sVar* default_value_206;
struct sVar* it2_209;
unsigned int hash_210;
int n_211;
_Bool _while_condtional25;
_Bool _if_conditional283;
_Bool _if_conditional284;
_Bool _if_conditional285;
struct sVar* default_value_212;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_196, 0, sizeof(int));
right_value276 = (void*)0;
memset(&keys_197, 0, sizeof(char**));
right_value277 = (void*)0;
memset(&items_198, 0, sizeof(struct sVar**));
right_value278 = (void*)0;
memset(&item_existance_199, 0, sizeof(_Bool*));
memset(&len_200, 0, sizeof(int));
memset(&it_203, 0, sizeof(char*));
memset(&default_value_206, 0, sizeof(struct sVar*));
memset(&it2_209, 0, sizeof(struct sVar*));
memset(&hash_210, 0, sizeof(unsigned int));
memset(&n_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(struct sVar*));
                size_196=self->size*10;
                keys_197=(char**)come_increment_ref_count(((char**)(right_value276=(char**)come_calloc(1, sizeof(char*)*(1*(size_196)), "./neo-c.h", 1317, "char*%"))));
                right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                items_198=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value277=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_196)), "./neo-c.h", 1318, "sVar*%"))));
                come_call_finalizer3(right_value277,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                item_existance_199=(_Bool*)come_increment_ref_count(((_Bool*)(right_value278=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_196)), "./neo-c.h", 1319, "bool"))));
                right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                len_200=0;
                for(                it_203=map$2charphsVarph_begin(self);                !map$2charphsVarph_end(self);                it_203=map$2charphsVarph_next(self)                ){
                    memset(&default_value_206,0,sizeof(struct sVar*));
                    it2_209=map$2charphsVarph_at(self,it_203,default_value_206);
                    hash_210=string_get_hash_key(it_203)%size_196;
                    n_211=hash_210;
                    while(_while_condtional25=(_Bool)1,                    _while_condtional25) {
                        if(_if_conditional283=item_existance_199[n_211],                        _if_conditional283) {
                            n_211++;
                            if(_if_conditional284=n_211>=size_196,                            _if_conditional284) {
                                n_211=0;
                            }
                            else {
                                if(_if_conditional285=n_211==hash_210,                                _if_conditional285) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_199[n_211]=(_Bool)1;
                            keys_197[n_211]=it_203;
                            items_198[n_211]=map$2charphsVarph_at(self,it_203,default_value_212);
                            len_200++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_197;
                self->items=items_198;
                self->item_existance=item_existance_199;
                self->size=size_196;
                self->len=len_200;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional275;
char* result_201;
char* __result148__;
_Bool _if_conditional276;
char* __result149__;
char* result_202;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_201, 0, sizeof(char*));
memset(&result_202, 0, sizeof(char*));
                    if(_if_conditional275=self==((void*)0),                    _if_conditional275) {
                        memset(&result_201,0,sizeof(char*));
                        __result148__ = __result_obj__ = result_201;
                        return __result148__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result149__ = __result_obj__ = self->key_list->it->item;
                        return __result149__;
                    }
                    memset(&result_202,0,sizeof(char*));
                    __result150__ = __result_obj__ = result_202;
                    return __result150__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result151__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    return __result151__;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool _if_conditional277;
char* result_204;
char* __result152__;
_Bool _if_conditional278;
char* __result153__;
char* result_205;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(char*));
memset(&result_205, 0, sizeof(char*));
                    if(_if_conditional277=self==((void*)0)||self->key_list->it==((void*)0),                    _if_conditional277) {
                        memset(&result_204,0,sizeof(char*));
                        __result152__ = __result_obj__ = result_204;
                        return __result152__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result153__ = __result_obj__ = self->key_list->it->item;
                        return __result153__;
                    }
                    memset(&result_205,0,sizeof(char*));
                    __result154__ = __result_obj__ = result_205;
                    return __result154__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional24;
_Bool _if_conditional279;
_Bool _if_conditional280;
struct sVar* __result155__;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct sVar* __result156__;
struct sVar* __result157__;
struct sVar* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
                        hash_207=string_get_hash_key(((char*)key))%self->size;
                        it_208=hash_207;
                        while(_while_condtional24=(_Bool)1,                        _while_condtional24) {
                            if(_if_conditional279=self->item_existance[it_208],                            _if_conditional279) {
                                if(_if_conditional280=string_equals(self->keys[it_208],key),                                _if_conditional280) {
                                    __result155__ = __result_obj__ = self->items[it_208];
                                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result155__;
                                }
                                it_208++;
                                if(_if_conditional281=it_208>=self->size,                                _if_conditional281) {
                                    it_208=0;
                                }
                                else {
                                    if(_if_conditional282=it_208==hash_207,                                    _if_conditional282) {
                                        __result156__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result156__;
                                    }
                                }
                            }
                            else {
                                __result157__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result157__;
                            }
                        }
                        __result158__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result158__;
                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_215;
struct list_item$1charp* it_216;
_Bool _while_condtional27;
_Bool _if_conditional289;
struct list$1charp* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it2_215, 0, sizeof(int));
memset(&it_216, 0, sizeof(struct list_item$1charp*));
                            it2_215=0;
                            it_216=self->head;
                            while(_while_condtional27=it_216!=((void*)0),                            _while_condtional27) {
                                if(_if_conditional289=string_equals(it_216->item,item),                                _if_conditional289) {
                                    list$1charp_delete(self,it2_215,it2_215+1);
                                    break;
                                }
                                it2_215++;
                                it_216=it_216->next;
                            }
                            __result162__ = __result_obj__ = self;
                            return __result162__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
_Bool _if_conditional292;
int tmp_217;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list$1charp* __result159__;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list_item$1charp* it_220;
int i_221;
_Bool _while_condtional29;
_Bool _if_conditional298;
struct list_item$1charp* prev_it_222;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1charp* it_223;
int i_224;
_Bool _while_condtional30;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list_item$1charp* prev_it_225;
struct list_item$1charp* it_226;
struct list_item$1charp* head_prev_it_227;
struct list_item$1charp* tail_it_228;
int i_229;
_Bool _while_condtional31;
_Bool _if_conditional303;
_Bool _if_conditional304;
_Bool _if_conditional305;
struct list_item$1charp* prev_it_230;
_Bool _if_conditional306;
_Bool _if_conditional307;
struct list$1charp* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_217, 0, sizeof(int));
memset(&it_220, 0, sizeof(struct list_item$1charp*));
memset(&i_221, 0, sizeof(int));
memset(&prev_it_222, 0, sizeof(struct list_item$1charp*));
memset(&it_223, 0, sizeof(struct list_item$1charp*));
memset(&i_224, 0, sizeof(int));
memset(&prev_it_225, 0, sizeof(struct list_item$1charp*));
memset(&it_226, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_227, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_228, 0, sizeof(struct list_item$1charp*));
memset(&i_229, 0, sizeof(int));
memset(&prev_it_230, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional290=head<0,                                        _if_conditional290) {
                                            head+=self->len;
                                        }
                                        if(_if_conditional291=tail<0,                                        _if_conditional291) {
                                            tail+=self->len+1;
                                        }
                                        if(_if_conditional292=head>tail,                                        _if_conditional292) {
                                            tmp_217=tail;
                                            tail=head;
                                            head=tmp_217;
                                        }
                                        if(_if_conditional293=head<0,                                        _if_conditional293) {
                                            head=0;
                                        }
                                        if(_if_conditional294=tail>self->len,                                        _if_conditional294) {
                                            tail=self->len;
                                        }
                                        if(_if_conditional295=head==tail,                                        _if_conditional295) {
                                            __result159__ = __result_obj__ = self;
                                            return __result159__;
                                        }
                                        if(_if_conditional296=head==0&&tail==self->len,                                        _if_conditional296) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(_if_conditional297=head==0,                                            _if_conditional297) {
                                                it_220=self->head;
                                                i_221=0;
                                                while(_while_condtional29=it_220!=((void*)0),                                                _while_condtional29) {
                                                    if(_if_conditional298=i_221<tail,                                                    _if_conditional298) {
                                                        prev_it_222=it_220;
                                                        it_220=it_220->next;
                                                        i_221++;
                                                        come_call_finalizer3(prev_it_222,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(_if_conditional299=i_221==tail,                                                        _if_conditional299) {
                                                            self->head=it_220;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_220=it_220->next;
                                                            i_221++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(_if_conditional300=tail==self->len,                                                _if_conditional300) {
                                                    it_223=self->head;
                                                    i_224=0;
                                                    while(_while_condtional30=it_223!=((void*)0),                                                    _while_condtional30) {
                                                        if(_if_conditional301=i_224==head,                                                        _if_conditional301) {
                                                            self->tail=it_223->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(_if_conditional302=i_224>=head,                                                        _if_conditional302) {
                                                            prev_it_225=it_223;
                                                            it_223=it_223->next;
                                                            i_224++;
                                                            come_call_finalizer3(prev_it_225,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_223=it_223->next;
                                                            i_224++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_226=self->head;
                                                    head_prev_it_227=((void*)0);
                                                    tail_it_228=((void*)0);
                                                    i_229=0;
                                                    while(_while_condtional31=it_226!=((void*)0),                                                    _while_condtional31) {
                                                        if(_if_conditional303=i_229==head,                                                        _if_conditional303) {
                                                            head_prev_it_227=it_226->prev;
                                                        }
                                                        if(_if_conditional304=i_229==tail,                                                        _if_conditional304) {
                                                            tail_it_228=it_226;
                                                        }
                                                        if(_if_conditional305=i_229>=head&&i_229<tail,                                                        _if_conditional305) {
                                                            prev_it_230=it_226;
                                                            it_226=it_226->next;
                                                            i_229++;
                                                            come_call_finalizer3(prev_it_230,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_226=it_226->next;
                                                            i_229++;
                                                        }
                                                    }
                                                    if(_if_conditional306=head_prev_it_227!=((void*)0),                                                    _if_conditional306) {
                                                        head_prev_it_227->next=tail_it_228;
                                                    }
                                                    if(_if_conditional307=tail_it_228!=((void*)0),                                                    _if_conditional307) {
                                                        tail_it_228->prev=head_prev_it_227;
                                                    }
                                                }
                                            }
                                        }
                                        __result161__ = __result_obj__ = self;
                                        return __result161__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_218;
_Bool _while_condtional28;
struct list_item$1charp* prev_it_219;
struct list$1charp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_218, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_219, 0, sizeof(struct list_item$1charp*));
                                                it_218=self->head;
                                                while(_while_condtional28=it_218!=((void*)0),                                                _while_condtional28) {
                                                    prev_it_219=it_218;
                                                    it_218=it_218->next;
                                                    come_call_finalizer3(prev_it_219,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result160__ = __result_obj__ = self;
                                                return __result160__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional313;
char* result_232;
char* __result163__;
_Bool _if_conditional314;
char* __result164__;
char* result_233;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_232, 0, sizeof(char*));
memset(&result_233, 0, sizeof(char*));
            if(_if_conditional313=self==((void*)0),            _if_conditional313) {
                memset(&result_232,0,sizeof(char*));
                __result163__ = __result_obj__ = result_232;
                return __result163__;
            }
            self->it=self->head;
            if(self->it) {
                __result164__ = __result_obj__ = self->it->item;
                return __result164__;
            }
            memset(&result_233,0,sizeof(char*));
            __result165__ = __result_obj__ = result_233;
            return __result165__;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
            __result166__ = self==((void*)0)||self->it==((void*)0);
            return __result166__;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool _if_conditional315;
char* result_235;
char* __result167__;
_Bool _if_conditional316;
char* __result168__;
char* result_236;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_235, 0, sizeof(char*));
memset(&result_236, 0, sizeof(char*));
            if(_if_conditional315=self==((void*)0)||self->it==((void*)0),            _if_conditional315) {
                memset(&result_235,0,sizeof(char*));
                __result167__ = __result_obj__ = result_235;
                return __result167__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result168__ = __result_obj__ = self->it->item;
                return __result168__;
            }
            memset(&result_236,0,sizeof(char*));
            __result169__ = __result_obj__ = result_236;
            return __result169__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool _if_conditional319;
void* right_value279;
struct list_item$1charp* litem_237;
_Bool _if_conditional320;
void* right_value280;
struct list_item$1charp* litem_238;
void* right_value281;
struct list_item$1charp* litem_239;
struct list$1charp* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
memset(&litem_237, 0, sizeof(struct list_item$1charp*));
right_value280 = (void*)0;
memset(&litem_238, 0, sizeof(struct list_item$1charp*));
right_value281 = (void*)0;
memset(&litem_239, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional319=self->len==0,                _if_conditional319) {
                    litem_237=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value279=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 221, "list_item$1charp"))));
                    come_call_finalizer3(right_value279,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_237->prev=((void*)0);
                    litem_237->next=((void*)0);
                    litem_237->item=item;
                    self->tail=litem_237;
                    self->head=litem_237;
                }
                else {
                    if(_if_conditional320=self->len==1,                    _if_conditional320) {
                        litem_238=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value280=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 231, "list_item$1charp"))));
                        come_call_finalizer3(right_value280,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_238->prev=self->head;
                        litem_238->next=((void*)0);
                        litem_238->item=item;
                        self->tail=litem_238;
                        self->head->next=litem_238;
                    }
                    else {
                        litem_239=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value281=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 241, "list_item$1charp"))));
                        come_call_finalizer3(right_value281,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_239->prev=self->tail;
                        litem_239->next=((void*)0);
                        litem_239->item=item;
                        self->tail->next=litem_239;
                        self->tail=litem_239;
                    }
                }
                self->len++;
                __result170__ = __result_obj__ = self;
                return __result170__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value283;
struct sVar* self_240;
void* right_value284;
char* __dec_obj104;
void* right_value285;
struct sType* __dec_obj105;
void* right_value286;
char* __dec_obj106;
void* right_value287;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
memset(&self_240, 0, sizeof(struct sVar*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
    self_240=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value283=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 751, "sVar"))));
    come_call_finalizer3(right_value283,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=self_240->mName;
    self_240->mName=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(name))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj105=self_240->mType;
    self_240->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(type))));
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value285,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_240->mGlobal=(_Bool)1;
    __dec_obj106=self_240->mCValueName;
    self_240->mCValueName=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(name))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_240->mBlockLevel=info->block_level;
    self_240->mAllocaValue=(_Bool)0;
    self_240->mFunctionParam=(_Bool)0;
    self_240->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_240));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_240,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __result_obj__;
void* right_value288;
struct sVar* self_241;
void* right_value289;
char* __dec_obj107;
void* right_value290;
struct sType* __dec_obj108;
void* right_value291;
char* __dec_obj109;
void* right_value292;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
memset(&self_241, 0, sizeof(struct sVar*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
    self_241=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value288=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 770, "sVar"))));
    come_call_finalizer3(right_value288,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=self_241->mName;
    self_241->mName=(char*)come_increment_ref_count(((char*)(right_value289=__builtin_string(name))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj108=self_241->mType;
    self_241->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(type))));
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self_241->mGlobal=(_Bool)1;
    __dec_obj109=self_241->mCValueName;
    self_241->mCValueName=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(c_value))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self_241->mBlockLevel=info->block_level;
    self_241->mAllocaValue=(_Bool)0;
    self_241->mFunctionParam=(_Bool)0;
    self_241->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(name)))),(struct sVar*)come_increment_ref_count(self_241));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(self_241,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool is_type_name_flag_242;
_Bool multiple_declare_243;
_Bool _if_conditional321;
char* p_244;
int sline_245;
_Bool _if_conditional322;
void* right_value293;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_246;
char* name_247;
_Bool err_248;
_Bool _if_conditional325;
void* right_value294;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* type_249;
char* name_250;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value295;
_Bool no_output_err_251;
_Bool no_comma_252;
_Bool no_output_come_code_253;
void* right_value296;
struct sNode* exp_254;
_Bool _if_conditional330;
_Bool attr_define_255;
_Bool _if_conditional331;
char* p_256;
int sline_257;
void* right_value297;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_258;
char* name_259;
_Bool err_260;
_Bool _if_conditional332;
struct sFun* fun_261;
_Bool _if_conditional333;
void* right_value298;
char* buf2_262;
struct list$1charph* multiple_assign_263;
_Bool _if_conditional334;
void* right_value299;
void* right_value300;
struct list$1charph* __dec_obj110;
void* right_value304;
_Bool _while_condtional32;
void* right_value305;
char* buf3_267;
void* right_value306;
_Bool _if_conditional337;
_Bool no_comma_268;
void* right_value307;
struct sNode* right_value_269;
void* right_value308;
struct sNode* __dec_obj114;
void* right_value309;
void* right_value310;
void* right_value311;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* right_value319;
struct sNode* __result175__;
_Bool _if_conditional353;
void* right_value320;
void* right_value321;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_271;
void* right_value322;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_272;
char* name_273;
_Bool err_274;
_Bool _if_conditional354;
void* right_value323;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_275;
char* var_name_276;
_Bool _if_conditional355;
_Bool no_comma_277;
void* right_value324;
struct sNode* exp_278;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
_Bool _while_condtional33;
void* right_value332;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_282;
char* var_name_283;
_Bool _if_conditional360;
_Bool no_comma_284;
void* right_value333;
struct sNode* exp_285;
void* right_value334;
void* right_value335;
void* right_value336;
void* right_value337;
struct sNode* right_node_286;
void* right_value338;
char* var_name2_287;
void* right_value339;
void* right_value340;
void* right_value341;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* right_value349;
struct sNode* __result181__;
_Bool _if_conditional376;
void* right_value350;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_289;
char* name_290;
_Bool err_291;
_Bool _if_conditional377;
void* right_value351;
char* __dec_obj135;
void* right_value355;
void* right_value356;
_Bool _if_conditional389;
void* right_value357;
void* right_value358;
void* right_value359;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* right_value363;
struct sNode* self_node_296;
void* right_value364;
struct sNode* right_node_297;
void* right_value365;
struct sNode* __result186__;
void* right_value366;
struct sNode* __result187__;
_Bool _if_conditional396;
void* right_value367;
struct sNode* right_value_298;
void* right_value368;
struct sNode* __dec_obj143;
void* right_value369;
void* right_value370;
void* right_value371;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* right_value379;
struct sNode* __result190__;
_Bool _if_conditional412;
void* right_value380;
void* right_value381;
void* right_value382;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
void* right_value386;
struct sNode* node_301;
void* right_value387;
struct sNode* __dec_obj152;
struct sNode* __result193__;
char* word_302;
_Bool _if_conditional419;
void* right_value388;
char* __dec_obj153;
void* right_value389;
char* __dec_obj154;
_Bool is_type_name_flag_303;
_Bool _if_conditional420;
void* right_value390;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_304;
char* name_305;
_Bool err_306;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value391;
struct sNode* right_value_307;
void* right_value392;
struct sNode* __dec_obj155;
void* right_value393;
void* right_value394;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* right_value402;
struct sNode* __result196__;
void* right_value403;
void* right_value404;
struct sNode* _inf_value8;
struct sStoreNode* _inf_obj_value8;
void* right_value412;
struct sNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&is_type_name_flag_242, 0, sizeof(_Bool));
memset(&multiple_declare_243, 0, sizeof(_Bool));
memset(&p_244, 0, sizeof(char*));
memset(&sline_245, 0, sizeof(int));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&no_output_err_251, 0, sizeof(_Bool));
memset(&no_comma_252, 0, sizeof(_Bool));
memset(&no_output_come_code_253, 0, sizeof(_Bool));
right_value296 = (void*)0;
memset(&exp_254, 0, sizeof(struct sNode*));
memset(&attr_define_255, 0, sizeof(_Bool));
memset(&p_256, 0, sizeof(char*));
memset(&sline_257, 0, sizeof(int));
right_value297 = (void*)0;
memset(&fun_261, 0, sizeof(struct sFun*));
right_value298 = (void*)0;
memset(&buf2_262, 0, sizeof(char*));
memset(&multiple_assign_263, 0, sizeof(struct list$1charph*));
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&buf3_267, 0, sizeof(char*));
right_value306 = (void*)0;
memset(&no_comma_268, 0, sizeof(_Bool));
right_value307 = (void*)0;
memset(&right_value_269, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&multiple_declare_271, 0, sizeof(struct list$1tuple3$3sTypephcharphsNodephph*));
right_value322 = (void*)0;
right_value323 = (void*)0;
memset(&no_comma_277, 0, sizeof(_Bool));
right_value324 = (void*)0;
memset(&exp_278, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&no_comma_284, 0, sizeof(_Bool));
right_value333 = (void*)0;
memset(&exp_285, 0, sizeof(struct sNode*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&right_node_286, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&var_name2_287, 0, sizeof(char*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value363 = (void*)0;
memset(&self_node_296, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
memset(&right_node_297, 0, sizeof(struct sNode*));
right_value365 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&right_value_298, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value386 = (void*)0;
memset(&node_301, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
memset(&word_302, 0, sizeof(char*));
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&is_type_name_flag_303, 0, sizeof(_Bool));
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&right_value_307, 0, sizeof(struct sNode*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value412 = (void*)0;
    is_type_name_flag_242=is_type_name(buf,info);
    multiple_declare_243=(_Bool)0;
    if(is_type_name_flag_242) {
        p_244=info->p;
        sline_245=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(_if_conditional322=xisalpha(*info->p)||*info->p==95,        _if_conditional322) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(right_value293=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_246=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_247=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_248=multiple_assign_var2->v3;
            come_call_finalizer3(right_value293,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_248) {
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value294=parse_variable_name((struct sType*)come_increment_ref_count(type_246),(_Bool)1,info)));
                type_249=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_250=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(right_value294,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional328=*info->p==61,                _if_conditional328) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional329=*info->p==123,                    _if_conditional329) {
                        ((char*)(right_value295=skip_block(info)));
                        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_251=info->no_output_err;
                        no_comma_252=info->no_comma;
                        no_output_come_code_253=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=expression_v13(info))));
                        if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        info->no_comma=no_comma_252;
                        info->no_output_err=no_output_err_251;
                        info->no_output_come_code=no_output_come_code_253;
                        if(exp_254) { exp_254 = come_decrement_ref_count2(exp_254, ((struct sNode*)exp_254)->finalize, ((struct sNode*)exp_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(_if_conditional330=!is_type_name(name_250,info)&&*info->p==44,                _if_conditional330) {
                    multiple_declare_243=(_Bool)1;
                }
                come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_250 = come_decrement_ref_count2(name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_247 = come_decrement_ref_count2(name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_244;
        info->sline=sline_245;
    }
    attr_define_255=(_Bool)0;
    if(_if_conditional331=is_type_name_flag_242&&info->defining_class,    _if_conditional331) {
        p_256=info->p;
        sline_257=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value297=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_258=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_259=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_260=multiple_assign_var4->v3;
        come_call_finalizer3(right_value297,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional332=err_260&&strmemcmp(info->p,"self"),        _if_conditional332) {
            attr_define_255=(_Bool)1;
        }
        info->p=p_256;
        info->sline=sline_257;
        come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_261=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if(_if_conditional333=charp_operator_equals(buf,"var")||charp_operator_equals(buf,"auto"),    _if_conditional333) {
        parse_sharp_v5(info);
        buf2_262=(char*)come_increment_ref_count(((char*)(right_value298=parse_word(info))));
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        multiple_assign_263=((void*)0);
        if(_if_conditional334=*info->p==44,        _if_conditional334) {
            __dec_obj110=multiple_assign_263;
            multiple_assign_263=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value300=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value299=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 870, "list$1charph"))))))));
            come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value299,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value300,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            list$1charph_push_back(multiple_assign_263,(char*)come_increment_ref_count(((char*)(right_value304=string_clone(buf2_262)))));
            right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            while(_while_condtional32=*info->p==44,            _while_condtional32) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_267=(char*)come_increment_ref_count(((char*)(right_value305=parse_word(info))));
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_263,(char*)come_increment_ref_count(((char*)(right_value306=string_clone(buf3_267)))));
                right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buf3_267 = come_decrement_ref_count2(buf3_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(_if_conditional337=*info->p==61&&*(info->p+1)!=61,        _if_conditional337) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_268=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=expression_v13(info))));
            if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_268;
            parse_sharp_v5(info);
            __dec_obj114=right_value_269;
            right_value_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_269),info))));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 900, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(right_value311=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value309=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 900, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(buf2_262)))),(struct list$1charph*)come_increment_ref_count(multiple_assign_263),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_269),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result175__ = __result_obj__ = ((struct sNode*)(right_value319=_inf_value2));
            if(right_value_269) { right_value_269 = come_decrement_ref_count2(right_value_269, ((struct sNode*)right_value_269)->finalize, ((struct sNode*)right_value_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_262 = come_decrement_ref_count2(buf2_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_assign_263,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value309,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value311,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result175__;
            if(right_value_269) { right_value_269 = come_decrement_ref_count2(right_value_269, ((struct sNode*)right_value_269)->finalize, ((struct sNode*)right_value_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_262 = come_decrement_ref_count2(buf2_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(multiple_assign_263,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_243) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_271=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value321=list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value320=(struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 911, "list$1tuple3$3sTypephcharphsNodephph"))))))));
            come_call_finalizer3(right_value320,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value321,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value322=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_272=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_273=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_274=multiple_assign_var5->v3;
            come_call_finalizer3(right_value322,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional354=!err_274,            _if_conditional354) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            multiple_assign_var6=((struct tuple2$2sTypephcharph*)(right_value323=parse_variable_name((struct sType*)come_increment_ref_count(base_type_272),(_Bool)1,info)));
            type2_275=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            var_name_276=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            come_call_finalizer3(right_value323,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional355=*info->p==61,            _if_conditional355) {
                info->p++;
                skip_spaces_and_lf(info);
                info->array_initializer=(_Bool)1;
                no_comma_277=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=expression_v13(info))));
                if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_277;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_271,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value329=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value328=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 936, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_275),(char*)come_increment_ref_count(var_name_276),(struct sNode*)come_increment_ref_count(exp_278))))));
                come_call_finalizer3(right_value328,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value329,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(exp_278) { exp_278 = come_decrement_ref_count2(exp_278, ((struct sNode*)exp_278)->finalize, ((struct sNode*)exp_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_271,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value331=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value330=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 939, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_275),(char*)come_increment_ref_count(var_name_276),((void*)0))))));
                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value331,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(_while_condtional33=*info->p==44,            _while_condtional33) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                multiple_assign_var7=((struct tuple2$2sTypephcharph*)(right_value332=parse_variable_name((struct sType*)come_increment_ref_count(base_type_272),(_Bool)0,info)));
                type2_282=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_283=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                come_call_finalizer3(right_value332,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(_if_conditional360=*info->p==61,                _if_conditional360) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_284=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=expression_v13(info))));
                    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_284;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_271,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value335=tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(((struct tuple3$3sTypephcharphsNodeph*)(right_value334=(struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 963, "struct tuple3$3sTypephcharphsNodeph")))),(struct sType*)come_increment_ref_count(type2_282),(char*)come_increment_ref_count(var_name_283),(struct sNode*)come_increment_ref_count(exp_285))))));
                    come_call_finalizer3(right_value334,tuple3$3sTypephcharphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value335,tuple3$3sTypephcharphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_271,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value337=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(right_value336=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 966, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_282),(char*)come_increment_ref_count(var_name_283),((void*)0))))));
                    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value337,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_282,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_283 = come_decrement_ref_count2(var_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            right_node_286=((void*)0);
            var_name2_287=(char*)come_increment_ref_count(((char*)(right_value338=__builtin_string(""))));
            right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 973, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(right_value341=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value339=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 973, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value340=__builtin_string(buf)))),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_271),(struct sType*)come_increment_ref_count(base_type_272),(_Bool)1,((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            __result181__ = __result_obj__ = ((struct sNode*)(right_value349=_inf_value3));
            come_call_finalizer3(multiple_declare_271,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_273 = come_decrement_ref_count2(name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_275,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_276 = come_decrement_ref_count2(var_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_286) { right_node_286 = come_decrement_ref_count2(right_node_286, ((struct sNode*)right_node_286)->finalize, ((struct sNode*)right_node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_287 = come_decrement_ref_count2(var_name2_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value339,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value341,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result181__;
            come_call_finalizer3(multiple_declare_271,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_273 = come_decrement_ref_count2(name_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_275,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_276 = come_decrement_ref_count2(var_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_286) { right_node_286 = come_decrement_ref_count2(right_node_286, ((struct sNode*)right_node_286)->finalize, ((struct sNode*)right_node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_287 = come_decrement_ref_count2(var_name2_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_255) {
                info->p=head;
                info->sline=head_sline;
                parse_sharp_v5(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value350=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_289=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_290=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_291=multiple_assign_var8->v3;
                come_call_finalizer3(right_value350,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional377=!err_291,                _if_conditional377) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                info->p+=strlen("self.");
                __dec_obj135=name_290;
                name_290=(char*)come_increment_ref_count(((char*)(right_value351=parse_word(info))));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value356=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value355=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 993, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_290),(struct sType*)come_increment_ref_count(type_289))))));
                right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value356,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional389=*info->p==61&&*(info->p+1)!=61,                _if_conditional389) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1001, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadNode*)(right_value359=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value357=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1001, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value358=__builtin_string("self")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadNode_finalize;
                    _inf_value4->clone=(void*)sLoadNode_clone;
                    _inf_value4->compile=(void*)sLoadNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadNode_kind;
                    self_node_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=_inf_value4)));
                    come_call_finalizer3(right_value357,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value359,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    right_node_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_v13(info))));
                    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result186__ = __result_obj__ = ((struct sNode*)(right_value365=store_field(self_node_296,(struct sNode*)come_increment_ref_count(right_node_297),(char*)come_increment_ref_count(name_290),info)));
                    if(self_node_296) { self_node_296 = come_decrement_ref_count2(self_node_296, ((struct sNode*)self_node_296)->finalize, ((struct sNode*)self_node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_297) { right_node_297 = come_decrement_ref_count2(right_node_297, ((struct sNode*)right_node_297)->finalize, ((struct sNode*)right_node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result186__;
                    if(self_node_296) { self_node_296 = come_decrement_ref_count2(self_node_296, ((struct sNode*)self_node_296)->finalize, ((struct sNode*)self_node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_297) { right_node_297 = come_decrement_ref_count2(right_node_297, ((struct sNode*)right_node_297)->finalize, ((struct sNode*)right_node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result187__ = __result_obj__ = ((struct sNode*)(right_value366=create_null_node(info)));
                    come_call_finalizer3(type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result187__;
                }
                come_call_finalizer3(type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_290 = come_decrement_ref_count2(name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional396=!is_type_name_flag_242&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign,                _if_conditional396) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=expression_v13(info))));
                    if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    __dec_obj143=right_value_298;
                    right_value_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_298),info))));
                    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1023, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(right_value371=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value369=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1023, "sStoreNode")))),(char*)come_increment_ref_count(((char*)(right_value370=__builtin_string(buf)))),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_298),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sStoreNode_finalize;
                    _inf_value5->clone=(void*)sStoreNode_clone;
                    _inf_value5->compile=(void*)sStoreNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sStoreNode_kind;
                    __result190__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value5));
                    if(right_value_298) { right_value_298 = come_decrement_ref_count2(right_value_298, ((struct sNode*)right_value_298)->finalize, ((struct sNode*)right_value_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value369,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value371,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result190__;
                    if(right_value_298) { right_value_298 = come_decrement_ref_count2(right_value_298, ((struct sNode*)right_value_298)->finalize, ((struct sNode*)right_value_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional412=!is_type_name_flag_242||map$2charphsFunphp_operator_load_element(info->funcs,buf),                    _if_conditional412) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1026, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sLoadNode*)(right_value382=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value380=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1026, "sLoadNode")))),(char*)come_increment_ref_count(((char*)(right_value381=__builtin_string(buf)))),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sLoadNode_finalize;
                        _inf_value6->clone=(void*)sLoadNode_clone;
                        _inf_value6->compile=(void*)sLoadNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sLoadNode_kind;
                        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=_inf_value6)));
                        come_call_finalizer3(right_value380,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value382,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __dec_obj152=node_301;
                        node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_301),info))));
                        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        __result193__ = __result_obj__ = node_301;
                        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result193__;
                        if(node_301) { node_301 = come_decrement_ref_count2(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        info->p=head;
                        info->sline=head_sline;
                        if(_if_conditional419=xisalpha(*info->p)||*info->p==95,                        _if_conditional419) {
                            __dec_obj153=word_302;
                            word_302=(char*)come_increment_ref_count(((char*)(right_value388=parse_word(info))));
                            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        else {
                            __dec_obj154=word_302;
                            word_302=(char*)come_increment_ref_count(((char*)(right_value389=__builtin_string(""))));
                            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        is_type_name_flag_303=is_type_name(word_302,info);
                        info->p=head;
                        info->sline=head_sline;
                        if(is_type_name_flag_303) {
                            parse_sharp_v5(info);
                            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value390=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type_304=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                            name_305=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                            err_306=multiple_assign_var9->v3;
                            come_call_finalizer3(right_value390,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional421=!err_306,                            _if_conditional421) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            parse_sharp_v5(info);
                            if(_if_conditional422=*info->p==61,                            _if_conditional422) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                parse_sharp_v5(info);
                                info->array_initializer=(_Bool)1;
                                parse_sharp_v5(info);
                                right_value_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=expression_v13(info))));
                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                parse_sharp_v5(info);
                                info->array_initializer=(_Bool)0;
                                __dec_obj155=right_value_307;
                                right_value_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_307),info))));
                                if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1074, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sStoreNode*)(right_value394=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value393=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1074, "sStoreNode")))),(char*)come_increment_ref_count(name_305),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_304),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_307),info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sStoreNode_finalize;
                                _inf_value7->clone=(void*)sStoreNode_clone;
                                _inf_value7->compile=(void*)sStoreNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sStoreNode_kind;
                                __result196__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value7));
                                if(right_value_307) { right_value_307 = come_decrement_ref_count2(right_value_307, ((struct sNode*)right_value_307)->finalize, ((struct sNode*)right_value_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value393,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value394,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result196__;
                                if(right_value_307) { right_value_307 = come_decrement_ref_count2(right_value_307, ((struct sNode*)right_value_307)->finalize, ((struct sNode*)right_value_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1077, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sStoreNode*)(right_value404=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value403=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1077, "sStoreNode")))),(char*)come_increment_ref_count(name_305),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_304),(_Bool)1,((void*)0),info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sStoreNode_finalize;
                                _inf_value8->clone=(void*)sStoreNode_clone;
                                _inf_value8->compile=(void*)sStoreNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sStoreNode_kind;
                                __result199__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value8));
                                come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value403,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value404,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result199__;
                            }
                            come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional323;
_Bool _if_conditional324;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional323=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional323) {
                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional324=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional324) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional326=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional326) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional327=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional327) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional335;
void* right_value301;
struct list_item$1charph* litem_264;
char* __dec_obj111;
_Bool _if_conditional336;
void* right_value302;
struct list_item$1charph* litem_265;
char* __dec_obj112;
void* right_value303;
struct list_item$1charph* litem_266;
char* __dec_obj113;
struct list$1charph* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&litem_264, 0, sizeof(struct list_item$1charph*));
right_value302 = (void*)0;
memset(&litem_265, 0, sizeof(struct list_item$1charph*));
right_value303 = (void*)0;
memset(&litem_266, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional335=self->len==0,                _if_conditional335) {
                    litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value301=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 221, "list_item$1charph"))));
                    come_call_finalizer3(right_value301,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_264->prev=((void*)0);
                    litem_264->next=((void*)0);
                    __dec_obj111=litem_264->item;
                    litem_264->item=(char*)come_increment_ref_count(item);
                    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_264;
                    self->head=litem_264;
                }
                else {
                    if(_if_conditional336=self->len==1,                    _if_conditional336) {
                        litem_265=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value302=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 231, "list_item$1charph"))));
                        come_call_finalizer3(right_value302,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_265->prev=self->head;
                        litem_265->next=((void*)0);
                        __dec_obj112=litem_265->item;
                        litem_265->item=(char*)come_increment_ref_count(item);
                        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_265;
                        self->head->next=litem_265;
                    }
                    else {
                        litem_266=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 241, "list_item$1charph"))));
                        come_call_finalizer3(right_value303,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_266->prev=self->tail;
                        litem_266->next=((void*)0);
                        __dec_obj113=litem_266->item;
                        litem_266->item=(char*)come_increment_ref_count(item);
                        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_266;
                        self->tail=litem_266;
                    }
                }
                self->len++;
                __result172__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result172__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional356;
void* right_value325;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_279;
struct tuple3$3sTypephcharphsNodeph* __dec_obj121;
_Bool _if_conditional357;
void* right_value326;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_280;
struct tuple3$3sTypephcharphsNodeph* __dec_obj122;
void* right_value327;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_281;
struct tuple3$3sTypephcharphsNodeph* __dec_obj123;
struct list$1tuple3$3sTypephcharphsNodephph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
memset(&litem_279, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value326 = (void*)0;
memset(&litem_280, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
right_value327 = (void*)0;
memset(&litem_281, 0, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph*));
                    if(_if_conditional356=self->len==0,                    _if_conditional356) {
                        litem_279=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value325=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 221, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                        come_call_finalizer3(right_value325,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_279->prev=((void*)0);
                        litem_279->next=((void*)0);
                        __dec_obj121=litem_279->item;
                        litem_279->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj121,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_279;
                        self->head=litem_279;
                    }
                    else {
                        if(_if_conditional357=self->len==1,                        _if_conditional357) {
                            litem_280=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value326=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 231, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value326,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_280->prev=self->head;
                            litem_280->next=((void*)0);
                            __dec_obj122=litem_280->item;
                            litem_280->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj122,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_280;
                            self->head->next=litem_280;
                        }
                        else {
                            litem_281=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(right_value327=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./neo-c.h", 241, "list_item$1tuple3$3sTypephcharphsNodephph"))));
                            come_call_finalizer3(right_value327,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_281->prev=self->tail;
                            litem_281->next=((void*)0);
                            __dec_obj123=litem_281->item;
                            litem_281->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj123,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_281;
                            self->tail=litem_281;
                        }
                    }
                    self->len++;
                    __result176__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result176__;
                    come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__;
struct sType* __dec_obj124;
char* __dec_obj125;
struct sNode* __dec_obj126;
struct tuple3$3sTypephcharphsNodeph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj124=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj125=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj126=self->v3;
                    self->v3=(struct sNode*)come_increment_ref_count(v3);
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
                    __result177__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    return __result177__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__;
struct sType* __dec_obj127;
char* __dec_obj128;
struct tuple3$3sTypephcharphvoidp* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj127=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj128=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->v3=v3;
                    __result178__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result178__;
                    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
void* __result_obj__;
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional358=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional358) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional359=self!=((void*)0)&&self->v2!=((void*)0),                        _if_conditional359) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool _if_conditional378;
void* right_value352;
struct list_item$1tuple2$2charphsTypephph* litem_292;
struct tuple2$2charphsTypeph* __dec_obj136;
_Bool _if_conditional384;
void* right_value353;
struct list_item$1tuple2$2charphsTypephph* litem_293;
struct tuple2$2charphsTypeph* __dec_obj137;
void* right_value354;
struct list_item$1tuple2$2charphsTypephph* litem_294;
struct tuple2$2charphsTypeph* __dec_obj138;
struct list$1tuple2$2charphsTypephph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
memset(&litem_292, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value353 = (void*)0;
memset(&litem_293, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
right_value354 = (void*)0;
memset(&litem_294, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(_if_conditional378=self->len==0,                    _if_conditional378) {
                        litem_292=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value352=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 151, "list_item$1tuple2$2charphsTypephph"))));
                        come_call_finalizer3(right_value352,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_292->prev=((void*)0);
                        litem_292->next=((void*)0);
                        __dec_obj136=litem_292->item;
                        litem_292->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj136,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_292;
                        self->head=litem_292;
                    }
                    else {
                        if(_if_conditional384=self->len==1,                        _if_conditional384) {
                            litem_293=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value353=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 161, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value353,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_293->prev=self->head;
                            litem_293->next=((void*)0);
                            __dec_obj137=litem_293->item;
                            litem_293->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj137,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_293;
                            self->head->next=litem_293;
                        }
                        else {
                            litem_294=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value354=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 171, "list_item$1tuple2$2charphsTypephph"))));
                            come_call_finalizer3(right_value354,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_294->prev=self->tail;
                            litem_294->next=((void*)0);
                            __dec_obj138=litem_294->item;
                            litem_294->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj138,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_294;
                            self->tail=litem_294;
                        }
                    }
                    self->len++;
                    __result182__ = __result_obj__ = self;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result182__;
                    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional379=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional379) {
                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional387;
_Bool _if_conditional388;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional387=self!=((void*)0)&&self->v1!=((void*)0),                                _if_conditional387) {
                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional388=self!=((void*)0)&&self->v2!=((void*)0),                                _if_conditional388) {
                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj139;
struct sType* __dec_obj140;
struct tuple2$2charphsTypeph* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj139=self->v1;
                    self->v1=(char*)come_increment_ref_count(v1);
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj140=self->v2;
                    self->v2=(struct sType*)come_increment_ref_count(v2);
                    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __result183__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result183__;
                    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void sLoadNode_finalize(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional413) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional414=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional414) {
                                self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sLoadNode* __result191__;
void* right_value383;
struct sLoadNode* result_300;
_Bool _if_conditional416;
_Bool _if_conditional417;
void* right_value384;
char* __dec_obj150;
_Bool _if_conditional418;
void* right_value385;
char* __dec_obj151;
struct sLoadNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value383 = (void*)0;
memset(&result_300, 0, sizeof(struct sLoadNode*));
right_value384 = (void*)0;
right_value385 = (void*)0;
                            if(_if_conditional415=self==(void*)0,                            _if_conditional415) {
                                __result191__ = __result_obj__ = (void*)0;
                                return __result191__;
                            }
                            result_300=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(right_value383=(struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"))));
                            come_call_finalizer3(right_value383,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional416=self!=((void*)0),                            _if_conditional416) {
                                result_300->sline=self->sline;
                            }
                            if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional417) {
                                __dec_obj150=result_300->sname;
                                result_300->sname=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->sname))));
                                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional418=self!=((void*)0)&&self->name!=((void*)0),                            _if_conditional418) {
                                __dec_obj151=result_300->name;
                                result_300->name=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->name))));
                                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result192__ = __result_obj__ = result_300;
                            come_call_finalizer3(result_300,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result192__;
                            come_call_finalizer3(result_300,sLoadNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreNode_finalize(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional438) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional439=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional439) {
                                        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional440=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional440) {
                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional441=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional441) {
                                        if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional442=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional442) {
                                        come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional443=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional443) {
                                        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__;
_Bool _if_conditional444;
struct sStoreNode* __result197__;
void* right_value405;
struct sStoreNode* result_309;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value406;
char* __dec_obj162;
_Bool _if_conditional447;
void* right_value407;
char* __dec_obj163;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value408;
struct sType* __dec_obj164;
_Bool _if_conditional450;
void* right_value409;
struct sNode* __dec_obj165;
_Bool _if_conditional451;
void* right_value410;
struct list$1charph* __dec_obj166;
_Bool _if_conditional452;
void* right_value411;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj167;
struct sStoreNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_309, 0, sizeof(struct sStoreNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
                                    if(_if_conditional444=self==(void*)0,                                    _if_conditional444) {
                                        __result197__ = __result_obj__ = (void*)0;
                                        return __result197__;
                                    }
                                    result_309=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(right_value405=(struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"))));
                                    come_call_finalizer3(right_value405,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional445=self!=((void*)0),                                    _if_conditional445) {
                                        result_309->sline=self->sline;
                                    }
                                    if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional446) {
                                        __dec_obj162=result_309->sname;
                                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(self->sname))));
                                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional447=self!=((void*)0)&&self->name!=((void*)0),                                    _if_conditional447) {
                                        __dec_obj163=result_309->name;
                                        result_309->name=(char*)come_increment_ref_count(((char*)(right_value407=string_clone(self->name))));
                                        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional448=self!=((void*)0),                                    _if_conditional448) {
                                        result_309->alloc=self->alloc;
                                    }
                                    if(_if_conditional449=self!=((void*)0)&&self->type!=((void*)0),                                    _if_conditional449) {
                                        __dec_obj164=result_309->type;
                                        result_309->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value408=sType_clone(self->type))));
                                        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value408,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional450=self!=((void*)0)&&self->right_value!=((void*)0),                                    _if_conditional450) {
                                        __dec_obj165=result_309->right_value;
                                        result_309->right_value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->right_value))));
                                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional451=self!=((void*)0)&&self->multiple_assign!=((void*)0),                                    _if_conditional451) {
                                        __dec_obj166=result_309->multiple_assign;
                                        result_309->multiple_assign=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value410=list$1charphp_clone(self->multiple_assign))));
                                        come_call_finalizer3(__dec_obj166,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value410,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional452=self!=((void*)0)&&self->multiple_declare!=((void*)0),                                    _if_conditional452) {
                                        __dec_obj167=result_309->multiple_declare;
                                        result_309->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphsNodephph*)(right_value411=list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare))));
                                        come_call_finalizer3(__dec_obj167,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value411,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result198__ = __result_obj__ = result_309;
                                    come_call_finalizer3(result_309,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result198__;
                                    come_call_finalizer3(result_309,sStoreNode_finalize, 0, 0, 0, 0, (void*)0);
}

