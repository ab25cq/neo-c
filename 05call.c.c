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
struct sReturnNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sLineNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sSNameNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sFuncNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerFuncNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerLineNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
};
struct sCallerSNameNode
{
    int sline;
    char* sname;
    struct sNode* value;
    char* value_source;
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
struct sFunCallNode
{
    int sline;
    char* sname;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
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

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* expression_node_v99(struct sInfo* info);

struct sNode* expression_node_v98(struct sInfo* info);

int transpile_v5(struct sInfo* info);

void parse_sharp_v5(struct sInfo* info);

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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

char* sReturnNode_kind(struct sReturnNode* self);

_Bool sReturnNode_terminated(struct sReturnNode* self);

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

_Bool sLineNode_terminated(struct sLineNode* self);

char* sLineNode_kind(struct sLineNode* self);

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

_Bool sSNameNode_terminated(struct sSNameNode* self);

char* sSNameNode_kind(struct sSNameNode* self);

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

_Bool sFuncNode_terminated(struct sFuncNode* self);

char* sFuncNode_kind(struct sFuncNode* self);

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

_Bool sCallerFuncNode_terminated(struct sCallerFuncNode* self);

char* sCallerFuncNode_kind(struct sCallerFuncNode* self);

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_terminated(struct sCallerLineNode* self);

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind(struct sCallerLineNode* self);

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_terminated(struct sCallerSNameNode* self);

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind(struct sCallerSNameNode* self);

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sFunCallNode_terminated(struct sFunCallNode* self);

char* sFunCallNode_kind(struct sFunCallNode* self);

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sNode* expression_node_v1(struct sInfo* info);

struct sNode* expression_node_v97(struct sInfo* info);

static void sReturnNode_finalize(struct sReturnNode* self);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sFuncNode_finalize(struct sFuncNode* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static void sLineNode_finalize(struct sLineNode* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static void sSNameNode_finalize(struct sSNameNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sNode* expression_v5(struct sInfo* info);

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static int list$1sNodeph_length(struct list$1sNodeph* self);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

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










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
struct sNode* __dec_obj12;
void* right_value79;
char* __dec_obj13;
void* right_value80;
char* __dec_obj14;
struct sReturnNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    # 10 "05call.c"
    __dec_obj12=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    # 11 "05call.c"
    __dec_obj13=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(value_source))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 13 "05call.c"
    self->sline=info->sline;
    # 14 "05call.c"
    __dec_obj14=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(info->sname))));
    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 17 "05call.c"
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result52__;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__;
void* right_value81;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    # 19 "05call.c"
    __result53__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sReturnNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sReturnNode_terminated(struct sReturnNode* self){
void* __result_obj__;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    # 24 "05call.c"
    __result54__ = (_Bool)0;
    return __result54__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional22;
struct sFun* come_fun_47;
void* right_value117;
struct sType* result_type_78;
void* right_value118;
struct sType* result_type2_79;
struct sType* result_type3_80;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool __result73__;
void* right_value119;
struct CVALUE* come_value_81;
_Bool _if_conditional118;
int right_value_id_82;
_Bool _if_conditional119;
void* right_value120;
struct sType* come_value_type_83;
void* right_value121;
struct sType* __dec_obj38;
static int num_result_84=0;
void* right_value122;
char* var_name_85;
int num_result_stack_86;
_Bool _if_conditional120;
void* right_value123;
void* right_value124;
_Bool _if_conditional121;
void* right_value125;
struct sFun* come_fun_87;
_Bool _if_conditional122;
void* right_value126;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value117 = (void*)0;
memset(&result_type_78, 0, sizeof(struct sType*));
right_value118 = (void*)0;
memset(&result_type2_79, 0, sizeof(struct sType*));
memset(&result_type3_80, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&come_value_81, 0, sizeof(struct CVALUE*));
memset(&right_value_id_82, 0, sizeof(int));
right_value120 = (void*)0;
memset(&come_value_type_83, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&var_name_85, 0, sizeof(char*));
memset(&num_result_stack_86, 0, sizeof(int));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&come_fun_87, 0, sizeof(struct sFun*));
right_value126 = (void*)0;
    # 102 "05call.c"
    # 29 "05call.c"
    if(self->value) {
        # 30 "05call.c"
        come_fun_47=info->come_fun;
        # 32 "05call.c"
        result_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(come_fun_47->mResultType))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 34 "05call.c"
        result_type2_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=solve_generics(result_type_78,info->generics_type,info))));
        come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 36 "05call.c"
        result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        # 44 "05call.c"
        # 37 "05call.c"
        if(result_type2_79->mNoSolvedGenericsType->v1) {
            # 38 "05call.c"
            result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        }
        else {
            # 41 "05call.c"
            result_type3_80=result_type2_79;
        }
        # 48 "05call.c"
        # 44 "05call.c"
        if(_if_conditional115=!node_compile(self->value,info),        _if_conditional115) {
            # 45 "05call.c"
            __result73__ = (_Bool)0;
            come_call_finalizer3(result_type_78,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result73__;
        }
        # 48 "05call.c"
        come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 49 "05call.c"
        dec_stack_ptr(1,info);
        # 59 "05call.c"
        # 51 "05call.c"
        if(_if_conditional118=come_value_81->type->mHeap&&come_value_81->var==((void*)0),        _if_conditional118) {
            # 52 "05call.c"
            right_value_id_82=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_81->c_value));
            # 57 "05call.c"
            # 54 "05call.c"
            if(_if_conditional119=right_value_id_82!=-1,            _if_conditional119) {
                # 55 "05call.c"
                remove_object_from_right_values(right_value_id_82,info);
            }
        }
        # 59 "05call.c"
        come_value_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=solve_generics(come_value_81->type,info->generics_type,info))));
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 61 "05call.c"
        __dec_obj38=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_81->type))));
        come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 63 "05call.c"
        # 64 "05call.c"
        var_name_85=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("__result%d__",++num_result_84))));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 65 "05call.c"
        num_result_stack_86=num_result_84;
        # 76 "05call.c"
        # 66 "05call.c"
        if(_if_conditional120=result_type2_79->mPointerNum>0,        _if_conditional120) {
            # 67 "05call.c"
            check_assign_type("result type",result_type2_79,come_value_81->type,come_value_81,(_Bool)0,(_Bool)1,info);
            # 69 "05call.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value123=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 70 "05call.c"
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_85,come_value_81->c_value);
        }
        else {
            # 73 "05call.c"
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value124=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 74 "05call.c"
            add_come_code(info,"%s = %s;\n",var_name_85,come_value_81->c_value);
        }
        # 76 "05call.c"
        add_last_code_to_source(info);
        # 78 "05call.c"
        free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0);
        # 79 "05call.c"
        free_right_value_objects(info,(_Bool)0);
        # 86 "05call.c"
        # 81 "05call.c"
        if(_if_conditional121=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional121) {
            # 82 "05call.c"
            free_objects(info->gv_table,((void*)0),info);
            # 83 "05call.c"
            add_come_code(info,((char*)(right_value125=xsprintf("come_heap_final();\n"))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 86 "05call.c"
        add_come_code(info,"return __result%d__;\n",num_result_stack_86);
        come_call_finalizer3(result_type_78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_85 = come_decrement_ref_count2(var_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 89 "05call.c"
        come_fun_87=info->come_fun;
        # 91 "05call.c"
        add_last_code_to_source(info);
        # 92 "05call.c"
        free_objects_on_return(come_fun_87->mBlock,info,((void*)0),(_Bool)0);
        # 93 "05call.c"
        free_right_value_objects(info,(_Bool)0);
        # 99 "05call.c"
        # 95 "05call.c"
        if(_if_conditional122=string_operator_equals(info->come_fun->mName,"main"),        _if_conditional122) {
            # 96 "05call.c"
            free_objects(info->gv_table,((void*)0),info);
            # 97 "05call.c"
            add_come_code(info,((char*)(right_value126=xsprintf("come_heap_final();\n"))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 99 "05call.c"
        add_come_code(info,"return;\n");
    }
    # 102 "05call.c"
    info->last_statment_is_return=(_Bool)1;
    # 104 "05call.c"
    __result74__ = (_Bool)1;
    return __result74__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional23;
struct sType* __result55__;
void* right_value82;
struct sType* result_48;
_Bool _if_conditional41;
_Bool _if_conditional42;
void* right_value89;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional46;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional50;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional51;
void* right_value94;
char* __dec_obj22;
_Bool _if_conditional52;
void* right_value95;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
void* right_value103;
struct list$1sNodeph* __dec_obj27;
_Bool _if_conditional66;
_Bool _if_conditional67;
void* right_value104;
struct list$1sTypeph* __dec_obj28;
_Bool _if_conditional68;
void* right_value111;
struct list$1charph* __dec_obj32;
_Bool _if_conditional72;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj33;
_Bool _if_conditional73;
_Bool _if_conditional74;
void* right_value113;
struct sNode* __dec_obj34;
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
void* right_value114;
struct sNode* __dec_obj35;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
void* right_value115;
char* __dec_obj36;
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
void* right_value116;
char* __dec_obj37;
_Bool _if_conditional113;
struct sType* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
right_value89 = (void*)0;
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
            # 3 "sType_clone"
            # 2 "sType_clone"
            if(_if_conditional23=self==(void*)0,            _if_conditional23) {
                # 2 "sType_clone"
                __result55__ = __result_obj__ = (void*)0;
                return __result55__;
            }
            # 3 "sType_clone"
            result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 5 "sType_clone"
            # 4 "sType_clone"
            if(_if_conditional41=self!=((void*)0),            _if_conditional41) {
                # 4 "sType_clone"
                result_48->mClass=self->mClass;
            }
            # 6 "sType_clone"
            # 5 "sType_clone"
            if(_if_conditional42=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional42) {
                # 5 "sType_clone"
                __dec_obj18=result_48->mMultipleTypes;
                result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj18,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 7 "sType_clone"
            # 6 "sType_clone"
            if(_if_conditional46=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional46) {
                # 6 "sType_clone"
                __dec_obj20=result_48->mNoSolvedGenericsType;
                result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 8 "sType_clone"
            # 7 "sType_clone"
            if(_if_conditional50=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional50) {
                # 7 "sType_clone"
                __dec_obj21=result_48->mOriginalLoadVarType;
                result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj21,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 9 "sType_clone"
            # 8 "sType_clone"
            if(_if_conditional51=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional51) {
                # 8 "sType_clone"
                __dec_obj22=result_48->mGenericsName;
                result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->mGenericsName))));
                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 10 "sType_clone"
            # 9 "sType_clone"
            if(_if_conditional52=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional52) {
                # 9 "sType_clone"
                __dec_obj23=result_48->mGenericsTypes;
                result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value95,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 11 "sType_clone"
            # 10 "sType_clone"
            if(_if_conditional53=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional53) {
                # 10 "sType_clone"
                __dec_obj27=result_48->mArrayNum;
                result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj27,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 12 "sType_clone"
            # 11 "sType_clone"
            if(_if_conditional66=self!=((void*)0),            _if_conditional66) {
                # 11 "sType_clone"
                result_48->mOmitArrayNum=self->mOmitArrayNum;
            }
            # 13 "sType_clone"
            # 12 "sType_clone"
            if(_if_conditional67=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional67) {
                # 12 "sType_clone"
                __dec_obj28=result_48->mParamTypes;
                result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 14 "sType_clone"
            # 13 "sType_clone"
            if(_if_conditional68=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional68) {
                # 13 "sType_clone"
                __dec_obj32=result_48->mParamNames;
                result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 15 "sType_clone"
            # 14 "sType_clone"
            if(_if_conditional72=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional72) {
                # 14 "sType_clone"
                __dec_obj33=result_48->mResultType;
                result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj33,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            # 16 "sType_clone"
            # 15 "sType_clone"
            if(_if_conditional73=self!=((void*)0),            _if_conditional73) {
                # 15 "sType_clone"
                result_48->mVarArgs=self->mVarArgs;
            }
            # 17 "sType_clone"
            # 16 "sType_clone"
            if(_if_conditional74=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional74) {
                # 16 "sType_clone"
                __dec_obj34=result_48->mAlignas;
                result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mAlignas))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 18 "sType_clone"
            # 17 "sType_clone"
            if(_if_conditional75=self!=((void*)0),            _if_conditional75) {
                # 17 "sType_clone"
                result_48->mUnsigned=self->mUnsigned;
            }
            # 19 "sType_clone"
            # 18 "sType_clone"
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                # 18 "sType_clone"
                result_48->mShort=self->mShort;
            }
            # 20 "sType_clone"
            # 19 "sType_clone"
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                # 19 "sType_clone"
                result_48->mLong=self->mLong;
            }
            # 21 "sType_clone"
            # 20 "sType_clone"
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                # 20 "sType_clone"
                result_48->mLongLong=self->mLongLong;
            }
            # 22 "sType_clone"
            # 21 "sType_clone"
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                # 21 "sType_clone"
                result_48->mConstant=self->mConstant;
            }
            # 23 "sType_clone"
            # 22 "sType_clone"
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                # 22 "sType_clone"
                result_48->mRegister=self->mRegister;
            }
            # 24 "sType_clone"
            # 23 "sType_clone"
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                # 23 "sType_clone"
                result_48->mVolatile=self->mVolatile;
            }
            # 25 "sType_clone"
            # 24 "sType_clone"
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                # 24 "sType_clone"
                result_48->mStatic=self->mStatic;
            }
            # 26 "sType_clone"
            # 25 "sType_clone"
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                # 25 "sType_clone"
                result_48->mRecord=self->mRecord;
            }
            # 27 "sType_clone"
            # 26 "sType_clone"
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                # 26 "sType_clone"
                result_48->mExtern=self->mExtern;
            }
            # 28 "sType_clone"
            # 27 "sType_clone"
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                # 27 "sType_clone"
                result_48->mRestrict=self->mRestrict;
            }
            # 29 "sType_clone"
            # 28 "sType_clone"
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                # 28 "sType_clone"
                result_48->mImmutable=self->mImmutable;
            }
            # 30 "sType_clone"
            # 29 "sType_clone"
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                # 29 "sType_clone"
                result_48->mHeap=self->mHeap;
            }
            # 31 "sType_clone"
            # 30 "sType_clone"
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                # 30 "sType_clone"
                result_48->mDummyHeap=self->mDummyHeap;
            }
            # 32 "sType_clone"
            # 31 "sType_clone"
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                # 31 "sType_clone"
                result_48->mDelegate=self->mDelegate;
            }
            # 33 "sType_clone"
            # 32 "sType_clone"
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                # 32 "sType_clone"
                result_48->mShare=self->mShare;
            }
            # 34 "sType_clone"
            # 33 "sType_clone"
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                # 33 "sType_clone"
                result_48->mClone=self->mClone;
            }
            # 35 "sType_clone"
            # 34 "sType_clone"
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                # 34 "sType_clone"
                result_48->mNoHeap=self->mNoHeap;
            }
            # 36 "sType_clone"
            # 35 "sType_clone"
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                # 35 "sType_clone"
                result_48->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            # 37 "sType_clone"
            # 36 "sType_clone"
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                # 36 "sType_clone"
                result_48->mRefference=self->mRefference;
            }
            # 38 "sType_clone"
            # 37 "sType_clone"
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                # 37 "sType_clone"
                result_48->mException=self->mException;
            }
            # 39 "sType_clone"
            # 38 "sType_clone"
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                # 38 "sType_clone"
                result_48->mPointerNum=self->mPointerNum;
            }
            # 40 "sType_clone"
            # 39 "sType_clone"
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                # 39 "sType_clone"
                result_48->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            # 41 "sType_clone"
            # 40 "sType_clone"
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                # 40 "sType_clone"
                result_48->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            # 42 "sType_clone"
            # 41 "sType_clone"
            if(_if_conditional99=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional99) {
                # 41 "sType_clone"
                __dec_obj35=result_48->mSizeNum;
                result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mSizeNum))));
                if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 43 "sType_clone"
            # 42 "sType_clone"
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                # 42 "sType_clone"
                result_48->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            # 44 "sType_clone"
            # 43 "sType_clone"
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                # 43 "sType_clone"
                result_48->mTypeOfExpression=self->mTypeOfExpression;
            }
            # 45 "sType_clone"
            # 44 "sType_clone"
            if(_if_conditional102=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional102) {
                # 44 "sType_clone"
                __dec_obj36=result_48->mOriginalTypeName;
                result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mOriginalTypeName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 46 "sType_clone"
            # 45 "sType_clone"
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                # 45 "sType_clone"
                result_48->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            # 47 "sType_clone"
            # 46 "sType_clone"
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                # 46 "sType_clone"
                result_48->mFunctionParam=self->mFunctionParam;
            }
            # 48 "sType_clone"
            # 47 "sType_clone"
            if(_if_conditional105=self!=((void*)0),            _if_conditional105) {
                # 47 "sType_clone"
                result_48->mAllocaValue=self->mAllocaValue;
            }
            # 49 "sType_clone"
            # 48 "sType_clone"
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                # 48 "sType_clone"
                result_48->mGenericsStruct=self->mGenericsStruct;
            }
            # 50 "sType_clone"
            # 49 "sType_clone"
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                # 49 "sType_clone"
                result_48->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            # 51 "sType_clone"
            # 50 "sType_clone"
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                # 50 "sType_clone"
                result_48->mComeMemCore=self->mComeMemCore;
            }
            # 52 "sType_clone"
            # 51 "sType_clone"
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                # 51 "sType_clone"
                result_48->mInline=self->mInline;
            }
            # 53 "sType_clone"
            # 52 "sType_clone"
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                # 52 "sType_clone"
                result_48->mNullValue=self->mNullValue;
            }
            # 54 "sType_clone"
            # 53 "sType_clone"
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                # 53 "sType_clone"
                result_48->mGuardValue=self->mGuardValue;
            }
            # 55 "sType_clone"
            # 54 "sType_clone"
            if(_if_conditional112=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional112) {
                # 54 "sType_clone"
                __dec_obj37=result_48->mAsmName;
                result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mAsmName))));
                __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 56 "sType_clone"
            # 55 "sType_clone"
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                # 55 "sType_clone"
                result_48->mArrayPointerType=self->mArrayPointerType;
            }
            # 56 "sType_clone"
            __result72__ = __result_obj__ = result_48;
            come_call_finalizer3(result_48,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result72__;
            come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                # 1 "sType_finalize"
                # 0 "sType_finalize"
                if(_if_conditional24=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional24) {
                    # 0 "sType_finalize"
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 2 "sType_finalize"
                # 1 "sType_finalize"
                if(_if_conditional26=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional26) {
                    # 1 "sType_finalize"
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 3 "sType_finalize"
                # 2 "sType_finalize"
                if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional28) {
                    # 2 "sType_finalize"
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 4 "sType_finalize"
                # 3 "sType_finalize"
                if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional29) {
                    # 3 "sType_finalize"
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 5 "sType_finalize"
                # 4 "sType_finalize"
                if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional30) {
                    # 4 "sType_finalize"
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 6 "sType_finalize"
                # 5 "sType_finalize"
                if(_if_conditional31=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional31) {
                    # 5 "sType_finalize"
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 7 "sType_finalize"
                # 6 "sType_finalize"
                if(_if_conditional33=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional33) {
                    # 6 "sType_finalize"
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 8 "sType_finalize"
                # 7 "sType_finalize"
                if(_if_conditional34=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional34) {
                    # 7 "sType_finalize"
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 9 "sType_finalize"
                # 8 "sType_finalize"
                if(_if_conditional36=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional36) {
                    # 8 "sType_finalize"
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                # 10 "sType_finalize"
                # 9 "sType_finalize"
                if(_if_conditional37=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional37) {
                    # 9 "sType_finalize"
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 11 "sType_finalize"
                # 10 "sType_finalize"
                if(_if_conditional38=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional38) {
                    # 10 "sType_finalize"
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 12 "sType_finalize"
                # 11 "sType_finalize"
                if(_if_conditional39=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional39) {
                    # 11 "sType_finalize"
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 13 "sType_finalize"
                # 12 "sType_finalize"
                if(_if_conditional40=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional40) {
                    # 12 "sType_finalize"
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
                        # 114 "./neo-c.h"
                        it_49=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional7=it_49!=((void*)0),                        _while_condtional7) {
                            # 116 "./neo-c.h"
                            prev_it_50=it_49;
                            # 117 "./neo-c.h"
                            it_49=it_49->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sTypephp_finalize"
                                # 0 "list_item$1sTypephp_finalize"
                                if(_if_conditional25=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional25) {
                                    # 0 "list_item$1sTypephp_finalize"
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypephp_finalize"
                        # 0 "tuple1$1sTypephp_finalize"
                        if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional27) {
                            # 0 "tuple1$1sTypephp_finalize"
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
                        # 114 "./neo-c.h"
                        it_51=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional8=it_51!=((void*)0),                        _while_condtional8) {
                            # 116 "./neo-c.h"
                            prev_it_52=it_51;
                            # 117 "./neo-c.h"
                            it_51=it_51->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1sNodephp_finalize"
                                # 0 "list_item$1sNodephp_finalize"
                                if(_if_conditional32=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional32) {
                                    # 0 "list_item$1sNodephp_finalize"
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
                        # 114 "./neo-c.h"
                        it_53=self->head;
                        # 120 "./neo-c.h"
                        while(_while_condtional9=it_53!=((void*)0),                        _while_condtional9) {
                            # 116 "./neo-c.h"
                            prev_it_54=it_53;
                            # 117 "./neo-c.h"
                            it_53=it_53->next;
                            # 118 "./neo-c.h"
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "list_item$1charphp_finalize"
                                # 0 "list_item$1charphp_finalize"
                                if(_if_conditional35=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional35) {
                                    # 0 "list_item$1charphp_finalize"
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional43;
struct list$1sTypeph* __result56__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional10;
void* right_value88;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional43=self==((void*)0),                    _if_conditional43) {
                        # 131 "./neo-c.h"
                        __result56__ = __result_obj__ = ((void*)0);
                        return __result56__;
                    }
                    # 133 "./neo-c.h"
                    result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_56=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional10=it_56!=((void*)0),                    _while_condtional10) {
                        # 137 "./neo-c.h"
                        list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(it_56->item)))));
                        come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_56=it_56->next;
                    }
                    # 142 "./neo-c.h"
                    __result59__ = __result_obj__ = result_55;
                    come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result57__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result57__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional44;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj15;
_Bool _if_conditional45;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj16;
void* right_value87;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj17;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional44=self->len==0,                            _if_conditional44) {
                                # 147 "./neo-c.h"
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_57->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_57->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj15=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_57;
                                # 154 "./neo-c.h"
                                self->head=litem_57;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional45=self->len==1,                                _if_conditional45) {
                                    # 157 "./neo-c.h"
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_58->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_58->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj16=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_58;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_58;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_59->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_59->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj17=litem_59->item;
                                    litem_59->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_59;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_59;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result58__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result58__;
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
                    # 114 "./neo-c.h"
                    it_60=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional11=it_60!=((void*)0),                    _while_condtional11) {
                        # 116 "./neo-c.h"
                        prev_it_61=it_60;
                        # 117 "./neo-c.h"
                        it_60=it_60->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_61,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __result60__;
void* right_value90;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional49;
void* right_value91;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                    # 3 "tuple1$1sTypephp_clone"
                    # 2 "tuple1$1sTypephp_clone"
                    if(_if_conditional47=self==(void*)0,                    _if_conditional47) {
                        # 2 "tuple1$1sTypephp_clone"
                        __result60__ = __result_obj__ = (void*)0;
                        return __result60__;
                    }
                    # 3 "tuple1$1sTypephp_clone"
                    result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value90,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    # 5 "tuple1$1sTypephp_clone"
                    # 4 "tuple1$1sTypephp_clone"
                    if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional49) {
                        # 4 "tuple1$1sTypephp_clone"
                        __dec_obj19=result_62->v1;
                        result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    # 5 "tuple1$1sTypephp_clone"
                    __result61__ = __result_obj__ = result_62;
                    come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result61__;
                    come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "tuple1$1sTypeph_finalize"
                        # 0 "tuple1$1sTypeph_finalize"
                        if(_if_conditional48=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional48) {
                            # 0 "tuple1$1sTypeph_finalize"
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional54;
struct list$1sNodeph* __result62__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional12;
void* right_value102;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional54=self==((void*)0),                    _if_conditional54) {
                        # 131 "./neo-c.h"
                        __result62__ = __result_obj__ = ((void*)0);
                        return __result62__;
                    }
                    # 133 "./neo-c.h"
                    result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_64=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional12=it_64!=((void*)0),                    _while_condtional12) {
                        # 137 "./neo-c.h"
                        list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(it_64->item)))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 139 "./neo-c.h"
                        it_64=it_64->next;
                    }
                    # 142 "./neo-c.h"
                    __result67__ = __result_obj__ = result_63;
                    come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result67__;
                    come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result63__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional55;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj24;
_Bool _if_conditional56;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj25;
void* right_value100;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj26;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional55=self->len==0,                            _if_conditional55) {
                                # 147 "./neo-c.h"
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_65->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_65->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj24=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                # 153 "./neo-c.h"
                                self->tail=litem_65;
                                # 154 "./neo-c.h"
                                self->head=litem_65;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional56=self->len==1,                                _if_conditional56) {
                                    # 157 "./neo-c.h"
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_66->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_66->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj25=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 163 "./neo-c.h"
                                    self->tail=litem_66;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_66;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_67->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_67->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj26=litem_67->item;
                                    litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_67;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_67;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result64__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result64__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional57;
struct sNode* __result65__;
void* right_value101;
struct sNode* result_68;
_Bool _if_conditional58;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
struct sNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_68, 0, sizeof(struct sNode*));
                            # 3 "sNode_clone"
                            # 2 "sNode_clone"
                            if(_if_conditional57=self==(void*)0,                            _if_conditional57) {
                                # 2 "sNode_clone"
                                __result65__ = __result_obj__ = (void*)0;
                                return __result65__;
                            }
                            # 3 "sNode_clone"
                            result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 5 "sNode_clone"
                            # 4 "sNode_clone"
                            if(_if_conditional58=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional58) {
                                # 4 "sNode_clone"
                                result_68->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            # 6 "sNode_clone"
                            # 5 "sNode_clone"
                            if(_if_conditional59=self!=((void*)0),                            _if_conditional59) {
                                # 5 "sNode_clone"
                                result_68->finalize=self->finalize;
                            }
                            # 7 "sNode_clone"
                            # 6 "sNode_clone"
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                # 6 "sNode_clone"
                                result_68->clone=self->clone;
                            }
                            # 8 "sNode_clone"
                            # 7 "sNode_clone"
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                # 7 "sNode_clone"
                                result_68->compile=self->compile;
                            }
                            # 9 "sNode_clone"
                            # 8 "sNode_clone"
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                # 8 "sNode_clone"
                                result_68->sline=self->sline;
                            }
                            # 10 "sNode_clone"
                            # 9 "sNode_clone"
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                # 9 "sNode_clone"
                                result_68->sname=self->sname;
                            }
                            # 11 "sNode_clone"
                            # 10 "sNode_clone"
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                # 10 "sNode_clone"
                                result_68->terminated=self->terminated;
                            }
                            # 12 "sNode_clone"
                            # 11 "sNode_clone"
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                # 11 "sNode_clone"
                                result_68->kind=self->kind;
                            }
                            # 12 "sNode_clone"
                            __result66__ = __result_obj__ = result_68;
                            if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result66__;
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
                    # 114 "./neo-c.h"
                    it_69=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional13=it_69!=((void*)0),                    _while_condtional13) {
                        # 116 "./neo-c.h"
                        prev_it_70=it_69;
                        # 117 "./neo-c.h"
                        it_69=it_69->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional69;
struct list$1charph* __result68__;
void* right_value105;
void* right_value106;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
_Bool _while_condtional14;
void* right_value110;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                    # 133 "./neo-c.h"
                    # 130 "./neo-c.h"
                    if(_if_conditional69=self==((void*)0),                    _if_conditional69) {
                        # 131 "./neo-c.h"
                        __result68__ = __result_obj__ = ((void*)0);
                        return __result68__;
                    }
                    # 133 "./neo-c.h"
                    result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 135 "./neo-c.h"
                    it_72=self->head;
                    # 142 "./neo-c.h"
                    while(_while_condtional14=it_72!=((void*)0),                    _while_condtional14) {
                        # 137 "./neo-c.h"
                        list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value110=string_clone(it_72->item)))));
                        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        # 139 "./neo-c.h"
                        it_72=it_72->next;
                    }
                    # 142 "./neo-c.h"
                    __result71__ = __result_obj__ = result_71;
                    come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 95 "./neo-c.h"
                        self->head=((void*)0);
                        # 96 "./neo-c.h"
                        self->tail=((void*)0);
                        # 97 "./neo-c.h"
                        self->len=0;
                        # 99 "./neo-c.h"
                        __result69__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result69__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional70;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj29;
_Bool _if_conditional71;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj30;
void* right_value109;
struct list_item$1charph* litem_75;
char* __dec_obj31;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                            # 177 "./neo-c.h"
                            # 146 "./neo-c.h"
                            if(_if_conditional70=self->len==0,                            _if_conditional70) {
                                # 147 "./neo-c.h"
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                # 149 "./neo-c.h"
                                litem_73->prev=((void*)0);
                                # 150 "./neo-c.h"
                                litem_73->next=((void*)0);
                                # 151 "./neo-c.h"
                                __dec_obj29=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 153 "./neo-c.h"
                                self->tail=litem_73;
                                # 154 "./neo-c.h"
                                self->head=litem_73;
                            }
                            else {
                                # 177 "./neo-c.h"
                                # 156 "./neo-c.h"
                                if(_if_conditional71=self->len==1,                                _if_conditional71) {
                                    # 157 "./neo-c.h"
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 159 "./neo-c.h"
                                    litem_74->prev=self->head;
                                    # 160 "./neo-c.h"
                                    litem_74->next=((void*)0);
                                    # 161 "./neo-c.h"
                                    __dec_obj30=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 163 "./neo-c.h"
                                    self->tail=litem_74;
                                    # 164 "./neo-c.h"
                                    self->head->next=litem_74;
                                }
                                else {
                                    # 167 "./neo-c.h"
                                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                    come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 169 "./neo-c.h"
                                    litem_75->prev=self->tail;
                                    # 170 "./neo-c.h"
                                    litem_75->next=((void*)0);
                                    # 171 "./neo-c.h"
                                    __dec_obj31=litem_75->item;
                                    litem_75->item=(char*)come_increment_ref_count(item);
                                    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    # 173 "./neo-c.h"
                                    self->tail->next=litem_75;
                                    # 174 "./neo-c.h"
                                    self->tail=litem_75;
                                }
                            }
                            # 177 "./neo-c.h"
                            self->len++;
                            # 179 "./neo-c.h"
                            __result70__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result70__;
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
                    # 114 "./neo-c.h"
                    it_76=self->head;
                    # 120 "./neo-c.h"
                    while(_while_condtional15=it_76!=((void*)0),                    _while_condtional15) {
                        # 116 "./neo-c.h"
                        prev_it_77=it_76;
                        # 117 "./neo-c.h"
                        it_76=it_76->next;
                        # 118 "./neo-c.h"
                        come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional116=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional116) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional117=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional117) {
                # 1 "CVALUE_finalize"
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
char* __dec_obj39;
struct sLineNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    # 115 "05call.c"
    self->sline=info->sline;
    # 116 "05call.c"
    __dec_obj39=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->sname))));
    __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 119 "05call.c"
    __result75__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sLineNode_terminated(struct sLineNode* self){
void* __result_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    # 121 "05call.c"
    __result76__ = (_Bool)0;
    return __result76__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* right_value128;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    # 126 "05call.c"
    __result77__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sLineNode")));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
struct CVALUE* come_value_88;
void* right_value130;
char* __dec_obj40;
void* right_value131;
void* right_value132;
struct sType* __dec_obj41;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
    # 131 "05call.c"
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 131, "CVALUE"))));
    come_call_finalizer3(right_value129,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 133 "05call.c"
    __dec_obj40=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%d",info->sline))));
    __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 134 "05call.c"
    __dec_obj41=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 134, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 135 "05call.c"
    come_value_88->var=((void*)0);
    # 137 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    # 139 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_88->c_value);
    # 141 "05call.c"
    __result79__ = (_Bool)1;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result79__;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional126;
void* right_value133;
struct list_item$1CVALUEph* litem_89;
struct CVALUE* __dec_obj42;
_Bool _if_conditional128;
void* right_value134;
struct list_item$1CVALUEph* litem_90;
struct CVALUE* __dec_obj43;
void* right_value135;
struct list_item$1CVALUEph* litem_91;
struct CVALUE* __dec_obj44;
struct list$1CVALUEph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1CVALUEph*));
right_value134 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1CVALUEph*));
right_value135 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1CVALUEph*));
        # 247 "./neo-c.h"
        # 216 "./neo-c.h"
        if(_if_conditional126=self->len==0,        _if_conditional126) {
            # 217 "./neo-c.h"
            litem_89=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 219 "./neo-c.h"
            litem_89->prev=((void*)0);
            # 220 "./neo-c.h"
            litem_89->next=((void*)0);
            # 221 "./neo-c.h"
            __dec_obj42=litem_89->item;
            litem_89->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            # 223 "./neo-c.h"
            self->tail=litem_89;
            # 224 "./neo-c.h"
            self->head=litem_89;
        }
        else {
            # 247 "./neo-c.h"
            # 226 "./neo-c.h"
            if(_if_conditional128=self->len==1,            _if_conditional128) {
                # 227 "./neo-c.h"
                litem_90=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value134,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 229 "./neo-c.h"
                litem_90->prev=self->head;
                # 230 "./neo-c.h"
                litem_90->next=((void*)0);
                # 231 "./neo-c.h"
                __dec_obj43=litem_90->item;
                litem_90->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj43,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 233 "./neo-c.h"
                self->tail=litem_90;
                # 234 "./neo-c.h"
                self->head->next=litem_90;
            }
            else {
                # 237 "./neo-c.h"
                litem_91=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value135,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 239 "./neo-c.h"
                litem_91->prev=self->tail;
                # 240 "./neo-c.h"
                litem_91->next=((void*)0);
                # 241 "./neo-c.h"
                __dec_obj44=litem_91->item;
                litem_91->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                # 243 "./neo-c.h"
                self->tail->next=litem_91;
                # 244 "./neo-c.h"
                self->tail=litem_91;
            }
        }
        # 247 "./neo-c.h"
        self->len++;
        # 249 "./neo-c.h"
        __result78__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result78__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "list_item$1CVALUEphp_finalize"
                # 0 "list_item$1CVALUEphp_finalize"
                if(_if_conditional127=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional127) {
                    # 0 "list_item$1CVALUEphp_finalize"
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __dec_obj45;
struct sSNameNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    # 152 "05call.c"
    self->sline=info->sline;
    # 153 "05call.c"
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 156 "05call.c"
    __result80__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sSNameNode_terminated(struct sSNameNode* self){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    # 158 "05call.c"
    __result81__ = (_Bool)0;
    return __result81__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* right_value137;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    # 163 "05call.c"
    __result82__ = __result_obj__ = ((char*)(right_value137=__builtin_string("sSNameNode")));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct CVALUE* come_value_92;
void* right_value139;
char* __dec_obj46;
void* right_value140;
void* right_value141;
struct sType* __dec_obj47;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    # 168 "05call.c"
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 168, "CVALUE"))));
    come_call_finalizer3(right_value138,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 170 "05call.c"
    __dec_obj46=come_value_92->c_value;
    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("\"%s\"",info->sname))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 171 "05call.c"
    __dec_obj47=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 171, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 172 "05call.c"
    come_value_92->var=((void*)0);
    # 174 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    # 176 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    # 178 "05call.c"
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __dec_obj48;
struct sFuncNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    # 189 "05call.c"
    self->sline=info->sline;
    # 190 "05call.c"
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(info->sname))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 193 "05call.c"
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFuncNode_terminated(struct sFuncNode* self){
void* __result_obj__;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    # 195 "05call.c"
    __result85__ = (_Bool)0;
    return __result85__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* right_value143;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    # 200 "05call.c"
    __result86__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sFuncNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct CVALUE* come_value_93;
void* right_value145;
char* __dec_obj49;
void* right_value146;
void* right_value147;
struct sType* __dec_obj50;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    # 205 "05call.c"
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 205, "CVALUE"))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 207 "05call.c"
    __dec_obj49=come_value_93->c_value;
    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 208 "05call.c"
    __dec_obj50=come_value_93->type;
    come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 208, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 210 "05call.c"
    come_value_93->var=((void*)0);
    # 212 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
    # 214 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_93->c_value);
    # 216 "05call.c"
    __result87__ = (_Bool)1;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
char* __dec_obj51;
struct sCallerFuncNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    # 227 "05call.c"
    self->sline=info->sline;
    # 228 "05call.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value148=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 231 "05call.c"
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerFuncNode_terminated(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    # 233 "05call.c"
    __result89__ = (_Bool)0;
    return __result89__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* right_value149;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    # 238 "05call.c"
    __result90__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sCallerFuncNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct CVALUE* come_value_94;
_Bool _if_conditional138;
void* right_value151;
char* __dec_obj52;
void* right_value152;
char* __dec_obj53;
void* right_value153;
void* right_value154;
struct sType* __dec_obj54;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    # 243 "05call.c"
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 243, "CVALUE"))));
    come_call_finalizer3(right_value150,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 251 "05call.c"
    # 245 "05call.c"
    if(info->caller_fun) {
        # 246 "05call.c"
        __dec_obj52=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        # 249 "05call.c"
        __dec_obj53=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("\"\""))));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    # 251 "05call.c"
    __dec_obj54=come_value_94->type;
    come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 251, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 253 "05call.c"
    come_value_94->var=((void*)0);
    # 255 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    # 257 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_94->c_value);
    # 259 "05call.c"
    __result91__ = (_Bool)1;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
char* __dec_obj55;
struct sCallerLineNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    # 270 "05call.c"
    self->sline=info->sline;
    # 271 "05call.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 274 "05call.c"
    __result92__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerLineNode_terminated(struct sCallerLineNode* self){
void* __result_obj__;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    # 276 "05call.c"
    __result93__ = (_Bool)0;
    return __result93__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
struct CVALUE* come_value_95;
void* right_value157;
char* __dec_obj56;
void* right_value158;
void* right_value159;
struct sType* __dec_obj57;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    # 281 "05call.c"
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 281, "CVALUE"))));
    come_call_finalizer3(right_value156,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 283 "05call.c"
    __dec_obj56=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%d",info->caller_line))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 284 "05call.c"
    __dec_obj57=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 284, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 285 "05call.c"
    come_value_95->var=((void*)0);
    # 287 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    # 289 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    # 291 "05call.c"
    __result94__ = (_Bool)1;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result94__;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* right_value160;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    # 296 "05call.c"
    __result95__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sCallerLineNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __dec_obj58;
struct sCallerSNameNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    # 307 "05call.c"
    self->sline=info->sline;
    # 308 "05call.c"
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 311 "05call.c"
    __result96__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerSNameNode_terminated(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    # 313 "05call.c"
    __result97__ = (_Bool)0;
    return __result97__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
struct CVALUE* come_value_96;
void* right_value163;
char* __dec_obj59;
void* right_value164;
void* right_value165;
struct sType* __dec_obj60;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    # 318 "05call.c"
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 318, "CVALUE"))));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    # 320 "05call.c"
    __dec_obj59=come_value_96->c_value;
    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 321 "05call.c"
    __dec_obj60=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 321, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    # 322 "05call.c"
    come_value_96->var=((void*)0);
    # 324 "05call.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    # 326 "05call.c"
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    # 328 "05call.c"
    __result98__ = (_Bool)1;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* right_value166;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    # 333 "05call.c"
    __result99__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sCallerSNameNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
static int num_method_generics_97=0;
void* right_value167;
char* fun_name3_98;
struct list$1sTypeph* method_generics_types_before_99;
struct list$1sTypeph* __dec_obj61;
struct sGenericsFun* generics_fun_102;
_Bool _if_conditional159;
void* right_value168;
_Bool _if_conditional160;
void* right_value169;
char* __result104__;
struct list$1sTypeph* __dec_obj62;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&fun_name3_98, 0, sizeof(char*));
memset(&method_generics_types_before_99, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_102, 0, sizeof(struct sGenericsFun*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    # 339 "05call.c"
    # 340 "05call.c"
    fun_name3_98=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s_method_generics%d",fun_name,num_method_generics_97++))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 342 "05call.c"
    method_generics_types_before_99=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    # 343 "05call.c"
    __dec_obj61=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj61,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 345 "05call.c"
    generics_fun_102=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    # 354 "05call.c"
    # 347 "05call.c"
    if(generics_fun_102) {
        # 352 "05call.c"
        # 348 "05call.c"
        if(_if_conditional160=!create_method_generics_fun((char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(fun_name3_98)))),generics_fun_102,info),        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional160) {
            # 349 "05call.c"
            err_msg(info,"%s not found",fun_name3_98);
            # 350 "05call.c"
            __result104__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result104__;
        }
    }
    # 354 "05call.c"
    __dec_obj62=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_99);
    come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 356 "05call.c"
    __result105__ = __result_obj__ = fun_name3_98;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_100;
unsigned int it_101;
_Bool _while_condtional16;
_Bool _if_conditional145;
_Bool _if_conditional146;
struct sGenericsFun* __result100__;
_Bool _if_conditional157;
_Bool _if_conditional158;
struct sGenericsFun* __result101__;
struct sGenericsFun* __result102__;
struct sGenericsFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_100, 0, sizeof(unsigned int));
memset(&it_101, 0, sizeof(unsigned int));
        # 1201 "./neo-c.h"
        hash_100=string_get_hash_key(((char*)key))%self->size;
        # 1202 "./neo-c.h"
        it_101=hash_100;
        # 1226 "./neo-c.h"
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            # 1224 "./neo-c.h"
            # 1205 "./neo-c.h"
            if(_if_conditional145=self->item_existance[it_101],            _if_conditional145) {
                # 1212 "./neo-c.h"
                # 1207 "./neo-c.h"
                if(_if_conditional146=string_equals(self->keys[it_101],key),                _if_conditional146) {
                    # 1209 "./neo-c.h"
                    __result100__ = __result_obj__ = self->items[it_101];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result100__;
                }
                # 1212 "./neo-c.h"
                it_101++;
                # 1220 "./neo-c.h"
                # 1214 "./neo-c.h"
                if(_if_conditional157=it_101>=self->size,                _if_conditional157) {
                    # 1215 "./neo-c.h"
                    it_101=0;
                }
                else {
                    # 1220 "./neo-c.h"
                    # 1217 "./neo-c.h"
                    if(_if_conditional158=it_101==hash_100,                    _if_conditional158) {
                        # 1218 "./neo-c.h"
                        __result101__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result101__;
                    }
                }
            }
            else {
                # 1222 "./neo-c.h"
                __result102__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result102__;
            }
        }
        # 1226 "./neo-c.h"
        __result103__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
_Bool _if_conditional156;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sGenericsFun_finalize"
                        # 0 "sGenericsFun_finalize"
                        if(_if_conditional147=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional147) {
                            # 0 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 2 "sGenericsFun_finalize"
                        # 1 "sGenericsFun_finalize"
                        if(_if_conditional148=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional148) {
                            # 1 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 3 "sGenericsFun_finalize"
                        # 2 "sGenericsFun_finalize"
                        if(_if_conditional149=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional149) {
                            # 2 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 4 "sGenericsFun_finalize"
                        # 3 "sGenericsFun_finalize"
                        if(_if_conditional150=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional150) {
                            # 3 "sGenericsFun_finalize"
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 5 "sGenericsFun_finalize"
                        # 4 "sGenericsFun_finalize"
                        if(_if_conditional151=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional151) {
                            # 4 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 6 "sGenericsFun_finalize"
                        # 5 "sGenericsFun_finalize"
                        if(_if_conditional152=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional152) {
                            # 5 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 7 "sGenericsFun_finalize"
                        # 6 "sGenericsFun_finalize"
                        if(_if_conditional153=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional153) {
                            # 6 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 8 "sGenericsFun_finalize"
                        # 7 "sGenericsFun_finalize"
                        if(_if_conditional154=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional154) {
                            # 7 "sGenericsFun_finalize"
                            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        # 9 "sGenericsFun_finalize"
                        # 8 "sGenericsFun_finalize"
                        if(_if_conditional155=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional155) {
                            # 8 "sGenericsFun_finalize"
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 10 "sGenericsFun_finalize"
                        # 9 "sGenericsFun_finalize"
                        if(_if_conditional156=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional156) {
                            # 9 "sGenericsFun_finalize"
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value170;
char* __dec_obj63;
void* right_value180;
struct list$1tuple2$2charphsNodephph* __dec_obj69;
void* right_value181;
char* __dec_obj70;
struct list$1sTypeph* __dec_obj71;
struct sFunCallNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
    # 368 "05call.c"
    __dec_obj63=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(fun_name))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 369 "05call.c"
    __dec_obj69=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value180=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj69,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 370 "05call.c"
    self->guard_break=guard_break;
    # 371 "05call.c"
    self->sline=info->sline;
    # 372 "05call.c"
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 373 "05call.c"
    __dec_obj71=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    # 376 "05call.c"
    __result112__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    # 378 "05call.c"
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__;
void* right_value182;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    # 383 "05call.c"
    __result114__ = __result_obj__ = ((char*)(right_value182=__builtin_string("sFunCallNode")));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_113;
struct list$1tuple2$2charphsNodephph* params_114;
struct sVar* var__115;
_Bool _if_conditional182;
_Bool _if_conditional183;
struct sType* lambda_type_116;
void* right_value183;
struct sType* result_type_117;
void* right_value184;
void* right_value185;
struct list$1CVALUEph* come_params_120;
_Bool _if_conditional186;
_Bool __result120__;
int i_121;
struct list$1tuple2$2charphsNodephph* o2_saved_122;
struct tuple2$2charphsNodeph* it_125;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_128;
struct sNode* node_129;
_Bool _if_conditional191;
_Bool __result128__;
void* right_value186;
struct CVALUE* come_value_130;
_Bool _if_conditional194;
void* right_value187;
void* right_value188;
void* right_value189;
_Bool _if_conditional195;
void* right_value190;
void* right_value191;
struct buffer* buf_134;
int j_135;
struct list$1CVALUEph* o2_saved_136;
struct CVALUE* it_139;
_Bool _if_conditional201;
void* right_value192;
struct CVALUE* come_value_142;
void* right_value193;
char* __dec_obj72;
_Bool _if_conditional202;
void* right_value194;
char* __dec_obj73;
void* right_value195;
struct sType* __dec_obj74;
_Bool _if_conditional203;
void* right_value196;
char* __dec_obj75;
_Bool _if_conditional204;
void* right_value197;
void* right_value198;
struct list$1CVALUEph* come_params_143;
struct list$1tuple2$2charphsNodephph* o2_saved_144;
struct tuple2$2charphsNodeph* it_145;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_146;
struct sNode* node_147;
_Bool _if_conditional205;
_Bool __result140__;
void* right_value199;
struct CVALUE* come_value_148;
void* right_value200;
void* right_value201;
struct buffer* buf_149;
int j_150;
struct list$1CVALUEph* o2_saved_151;
struct CVALUE* it_152;
_Bool _if_conditional206;
void* right_value202;
struct CVALUE* come_value_153;
void* right_value203;
char* __dec_obj76;
_Bool _if_conditional207;
void* right_value204;
void* right_value205;
struct sType* __dec_obj77;
_Bool _if_conditional208;
void* right_value206;
void* right_value207;
struct sType* __dec_obj78;
_Bool _if_conditional209;
void* right_value208;
void* right_value209;
struct sType* __dec_obj79;
_Bool _if_conditional210;
void* right_value210;
void* right_value211;
struct sType* __dec_obj80;
_Bool __result141__;
_Bool _if_conditional211;
void* right_value212;
char* __dec_obj81;
_Bool _if_conditional212;
void* right_value213;
char* __dec_obj82;
_Bool _if_conditional213;
char* p_154;
int version_155;
_Bool _while_condtional22;
_Bool _if_conditional214;
char* p2_156;
_Bool _while_condtional23;
int i_158;
void* right_value214;
char* new_fun_name_159;
_Bool _if_conditional234;
void* right_value215;
char* __dec_obj83;
_Bool _if_conditional235;
void* right_value216;
char* new_fun_name_163;
_Bool _if_conditional236;
void* right_value217;
char* __dec_obj84;
_Bool _if_conditional237;
_Bool __result146__;
int i_164;
void* right_value218;
char* new_fun_name_165;
_Bool _if_conditional238;
void* right_value219;
char* __dec_obj85;
struct sFun* fun_168;
_Bool _if_conditional243;
_Bool __result151__;
void* right_value220;
struct sType* result_type_169;
void* right_value221;
void* right_value222;
struct list$1sTypeph* param_types_170;
struct list$1sTypeph* o2_saved_171;
struct sType* it_174;
void* right_value223;
void* right_value224;
struct sType* it2_177;
void* right_value228;
void* right_value229;
struct sType* __dec_obj89;
void* right_value230;
void* right_value231;
struct list$1CVALUEph* come_params_181;
int i_182;
struct list$1tuple2$2charphsNodephph* o2_saved_186;
struct tuple2$2charphsNodeph* it_187;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_188;
struct sNode* node_189;
_Bool _if_conditional252;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool __result161__;
void* right_value235;
struct CVALUE* come_value_190;
int n_191;
struct list$1charph* o2_saved_192;
char* it_195;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value236;
void* right_value237;
void* right_value238;
_Bool _if_conditional261;
int i_200;
struct list$1tuple2$2charphsNodephph* o2_saved_201;
struct tuple2$2charphsNodeph* it_202;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_203;
struct sNode* node_204;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool __result171__;
void* right_value239;
struct CVALUE* come_value_205;
_Bool _while_condtional27;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
_Bool __result174__;
void* right_value240;
struct CVALUE* come_value_209;
_Bool _while_condtional29;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value241;
void* right_value242;
void* right_value243;
_Bool _if_conditional274;
_Bool _while_condtional30;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value244;
char* default_param_213;
char* param_name_214;
_Bool _if_conditional279;
struct buffer* source_215;
char* p_216;
char* head_217;
int sline_218;
void* right_value245;
struct buffer* __dec_obj94;
void* right_value246;
struct sNode* node_219;
_Bool _if_conditional280;
_Bool __result177__;
struct buffer* __dec_obj95;
void* right_value247;
struct CVALUE* come_value_220;
_Bool _if_conditional281;
void* right_value248;
void* right_value249;
void* right_value250;
_Bool _if_conditional282;
_Bool _if_conditional283;
_Bool __result178__;
_Bool _if_conditional284;
_Bool __result179__;
void* right_value251;
void* right_value252;
struct buffer* buf_221;
int j_222;
struct list$1CVALUEph* o2_saved_223;
struct CVALUE* it_224;
_Bool _if_conditional285;
void* right_value253;
struct CVALUE* come_value_225;
void* right_value254;
char* __dec_obj96;
void* right_value255;
struct sType* __dec_obj97;
_Bool _if_conditional286;
void* right_value256;
char* __dec_obj98;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value257;
char* __dec_obj99;
_Bool _if_conditional289;
void* right_value258;
void* right_value259;
char* __dec_obj100;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&params_114, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__115, 0, sizeof(struct sVar*));
memset(&lambda_type_116, 0, sizeof(struct sType*));
right_value183 = (void*)0;
memset(&result_type_117, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&come_params_120, 0, sizeof(struct list$1CVALUEph*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_128, 0, sizeof(char*));
memset(&node_129, 0, sizeof(struct sNode*));
memset(&label_128, 0, sizeof(char*));
memset(&node_129, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&buf_134, 0, sizeof(struct buffer*));
memset(&j_135, 0, sizeof(int));
memset(&o2_saved_136, 0, sizeof(struct list$1CVALUEph*));
memset(&it_139, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
memset(&come_value_142, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
right_value198 = (void*)0;
memset(&come_params_143, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_145, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_146, 0, sizeof(char*));
memset(&node_147, 0, sizeof(struct sNode*));
memset(&label_146, 0, sizeof(char*));
memset(&node_147, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&buf_149, 0, sizeof(struct buffer*));
memset(&j_150, 0, sizeof(int));
memset(&o2_saved_151, 0, sizeof(struct list$1CVALUEph*));
memset(&it_152, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
memset(&come_value_153, 0, sizeof(struct CVALUE*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&p_154, 0, sizeof(char*));
memset(&version_155, 0, sizeof(int));
memset(&p2_156, 0, sizeof(char*));
memset(&i_158, 0, sizeof(int));
right_value214 = (void*)0;
memset(&new_fun_name_159, 0, sizeof(char*));
right_value215 = (void*)0;
right_value216 = (void*)0;
memset(&new_fun_name_163, 0, sizeof(char*));
right_value217 = (void*)0;
memset(&i_164, 0, sizeof(int));
right_value218 = (void*)0;
memset(&new_fun_name_165, 0, sizeof(char*));
right_value219 = (void*)0;
memset(&fun_168, 0, sizeof(struct sFun*));
right_value220 = (void*)0;
memset(&result_type_169, 0, sizeof(struct sType*));
right_value221 = (void*)0;
right_value222 = (void*)0;
memset(&param_types_170, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_171, 0, sizeof(struct list$1sTypeph*));
memset(&it_174, 0, sizeof(struct sType*));
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&it2_177, 0, sizeof(struct sType*));
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&come_params_181, 0, sizeof(struct list$1CVALUEph*));
memset(&i_182, 0, sizeof(int));
memset(&o2_saved_186, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_187, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_188, 0, sizeof(char*));
memset(&node_189, 0, sizeof(struct sNode*));
memset(&label_188, 0, sizeof(char*));
memset(&node_189, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
memset(&n_191, 0, sizeof(int));
memset(&o2_saved_192, 0, sizeof(struct list$1charph*));
memset(&it_195, 0, sizeof(char*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&i_200, 0, sizeof(int));
memset(&o2_saved_201, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_202, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_203, 0, sizeof(char*));
memset(&node_204, 0, sizeof(struct sNode*));
memset(&label_203, 0, sizeof(char*));
memset(&node_204, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&come_value_205, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
memset(&come_value_209, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&default_param_213, 0, sizeof(char*));
memset(&param_name_214, 0, sizeof(char*));
memset(&source_215, 0, sizeof(struct buffer*));
memset(&p_216, 0, sizeof(char*));
memset(&head_217, 0, sizeof(char*));
memset(&sline_218, 0, sizeof(int));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&node_219, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
right_value252 = (void*)0;
memset(&buf_221, 0, sizeof(struct buffer*));
memset(&j_222, 0, sizeof(int));
memset(&o2_saved_223, 0, sizeof(struct list$1CVALUEph*));
memset(&it_224, 0, sizeof(struct CVALUE*));
right_value253 = (void*)0;
memset(&come_value_225, 0, sizeof(struct CVALUE*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
    # 388 "05call.c"
    fun_name_113=(char*)come_increment_ref_count(self->fun_name);
    # 389 "05call.c"
    params_114=self->params;
    # 391 "05call.c"
    var__115=get_variable_from_table(info->lv_table,fun_name_113);
    # 397 "05call.c"
    # 393 "05call.c"
    if(_if_conditional182=var__115==((void*)0),    _if_conditional182) {
        # 394 "05call.c"
        var__115=get_variable_from_table(info->gv_table,fun_name_113);
    }
    # 807 "05call.c"
    # 397 "05call.c"
    if(var__115) {
        # 398 "05call.c"
        lambda_type_116=var__115->mType;
        # 400 "05call.c"
        result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(lambda_type_116->mResultType->v1))));
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 401 "05call.c"
        result_type_117->mStatic=(_Bool)0;
        # 403 "05call.c"
        come_params_120=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value184=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 403, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value184,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value185,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 410 "05call.c"
        # 405 "05call.c"
        if(_if_conditional186=list$1sTypeph_length(lambda_type_116->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_114)&&!lambda_type_116->mVarArgs,        _if_conditional186) {
            # 406 "05call.c"
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(lambda_type_116->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
            # 407 "05call.c"
            __result120__ = (_Bool)0;
            come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result120__;
        }
        # 410 "05call.c"
        i_121=0;
        # 434 "05call.c"
        for(        o2_saved_122=(params_114),it_125=list$1tuple2$2charphsNodephph_begin((o2_saved_122));        !list$1tuple2$2charphsNodephph_end((o2_saved_122));        it_125=list$1tuple2$2charphsNodephph_next((o2_saved_122))        ){
            # 412 "05call.c"
            multiple_assign_var1=it_125;
            label_128=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            # 418 "05call.c"
            # 414 "05call.c"
            if(_if_conditional191=!node_compile(node_129,info),            _if_conditional191) {
                # 415 "05call.c"
                __result128__ = (_Bool)0;
                label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result128__;
            }
            # 418 "05call.c"
            come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 428 "05call.c"
            # 419 "05call.c"
            if(_if_conditional194=lambda_type_116->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 419, 0))==((void*)0),            _if_conditional194) {
            }
            else {
                # 422 "05call.c"
                check_assign_type(((char*)(right_value189=xsprintf("\%s calling param #\%s",((char*)(right_value187=string_to_string(fun_name_113))),((char*)(right_value188=int_to_string(i_121)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 422, 1)),come_value_130->type,come_value_130,(_Bool)0,(_Bool)1,info);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 426 "05call.c"
                # 423 "05call.c"
                if(_if_conditional195=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 423, 2))->mHeap&&come_value_130->type->mHeap,                _if_conditional195) {
                    # 424 "05call.c"
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 424, 3)),come_value_130->type,come_value_130,info);
                }
            }
            # 428 "05call.c"
            list$1CVALUEph_push_back(come_params_120,(struct CVALUE*)come_increment_ref_count(come_value_130));
            # 429 "05call.c"
            dec_stack_ptr(1,info);
            # 431 "05call.c"
            i_121++;
            label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 434 "05call.c"
        buf_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 434, "buffer"))))))));
        come_call_finalizer3(right_value190,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value191,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 436 "05call.c"
        buffer_append_str(buf_134,var__115->mCValueName);
        # 437 "05call.c"
        buffer_append_str(buf_134,"(");
        # 439 "05call.c"
        j_135=0;
        # 449 "05call.c"
        for(        o2_saved_136=(struct list$1CVALUEph*)come_increment_ref_count((come_params_120)),it_139=list$1CVALUEph_begin((o2_saved_136));        !list$1CVALUEph_end((o2_saved_136));        it_139=list$1CVALUEph_next((o2_saved_136))        ){
            # 441 "05call.c"
            buffer_append_str(buf_134,it_139->c_value);
            # 447 "05call.c"
            # 443 "05call.c"
            if(_if_conditional201=j_135!=list$1CVALUEph_length(come_params_120)-1,            _if_conditional201) {
                # 444 "05call.c"
                buffer_append_str(buf_134,",");
            }
            # 447 "05call.c"
            j_135++;
        }
        come_call_finalizer3(o2_saved_136,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 449 "05call.c"
        buffer_append_str(buf_134,")");
        # 451 "05call.c"
        come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 451, "CVALUE"))));
        come_call_finalizer3(right_value192,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 452 "05call.c"
        __dec_obj72=come_value_142->c_value;
        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value193=buffer_to_string(buf_134))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 458 "05call.c"
        # 454 "05call.c"
        if(lambda_type_116->mResultType->v1->mHeap) {
            # 455 "05call.c"
            __dec_obj73=come_value_142->c_value;
            come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value194=append_object_to_right_values(come_value_142->c_value,(struct sType*)come_increment_ref_count(lambda_type_116->mResultType->v1),info))));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 458 "05call.c"
        __dec_obj74=come_value_142->type;
        come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(result_type_117))));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 459 "05call.c"
        come_value_142->type->mStatic=(_Bool)0;
        # 460 "05call.c"
        come_value_142->var=((void*)0);
        # 462 "05call.c"
        add_come_last_code(info,"%s;\n",come_value_142->c_value);
        # 464 "05call.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
        come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        # 471 "05call.c"
        # 467 "05call.c"
        if(_if_conditional203=list$1sTypeph_length(self->method_generics_types)>0,        _if_conditional203) {
            # 468 "05call.c"
            __dec_obj75=fun_name_113;
            fun_name_113=(char*)come_increment_ref_count(((char*)(right_value196=make_method_generics_function((char*)come_increment_ref_count(fun_name_113),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info))));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 591 "05call.c"
        # 471 "05call.c"
        if(_if_conditional204=string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset")||string_operator_equals(fun_name_113,"__builtin_ffs")||string_operator_equals(fun_name_113,"__builtin_ffsl")||string_operator_equals(fun_name_113,"__builtin_ffsll"),        _if_conditional204) {
            # 473 "05call.c"
            come_params_143=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value198=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value197=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 473, "list$1CVALUEph"))))))));
            come_call_finalizer3(right_value197,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value198,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            # 487 "05call.c"
            for(            o2_saved_144=(params_114),it_145=list$1tuple2$2charphsNodephph_begin((o2_saved_144));            !list$1tuple2$2charphsNodephph_end((o2_saved_144));            it_145=list$1tuple2$2charphsNodephph_next((o2_saved_144))            ){
                # 475 "05call.c"
                multiple_assign_var2=it_145;
                label_146=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_147=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                # 481 "05call.c"
                # 477 "05call.c"
                if(_if_conditional205=!node_compile(node_147,info),                _if_conditional205) {
                    # 478 "05call.c"
                    __result140__ = (_Bool)0;
                    label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result140__;
                }
                # 481 "05call.c"
                come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 482 "05call.c"
                dec_stack_ptr(1,info);
                # 484 "05call.c"
                list$1CVALUEph_push_back(come_params_143,(struct CVALUE*)come_increment_ref_count(come_value_148));
                label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            # 487 "05call.c"
            buf_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 487, "buffer"))))))));
            come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            # 489 "05call.c"
            buffer_append_str(buf_149,fun_name_113);
            # 490 "05call.c"
            buffer_append_str(buf_149,"(");
            # 492 "05call.c"
            j_150=0;
            # 502 "05call.c"
            for(            o2_saved_151=(struct list$1CVALUEph*)come_increment_ref_count((come_params_143)),it_152=list$1CVALUEph_begin((o2_saved_151));            !list$1CVALUEph_end((o2_saved_151));            it_152=list$1CVALUEph_next((o2_saved_151))            ){
                # 494 "05call.c"
                buffer_append_str(buf_149,it_152->c_value);
                # 500 "05call.c"
                # 496 "05call.c"
                if(_if_conditional206=j_150!=list$1CVALUEph_length(come_params_143)-1,                _if_conditional206) {
                    # 497 "05call.c"
                    buffer_append_str(buf_149,",");
                }
                # 500 "05call.c"
                j_150++;
            }
            come_call_finalizer3(o2_saved_151,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            # 502 "05call.c"
            buffer_append_str(buf_149,")");
            # 504 "05call.c"
            come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 504, "CVALUE"))));
            come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            # 505 "05call.c"
            __dec_obj76=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value203=buffer_to_string(buf_149))));
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 520 "05call.c"
            # 507 "05call.c"
            if(_if_conditional207=string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset"),            _if_conditional207) {
                # 508 "05call.c"
                __dec_obj77=come_value_153->type;
                come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 508, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                # 520 "05call.c"
                # 510 "05call.c"
                if(_if_conditional208=string_operator_equals(fun_name_113,"__builtin_ffs"),                _if_conditional208) {
                    # 511 "05call.c"
                    __dec_obj78=come_value_153->type;
                    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 511, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 520 "05call.c"
                    # 513 "05call.c"
                    if(_if_conditional209=string_operator_equals(fun_name_113,"__builtin_ffsl"),                    _if_conditional209) {
                        # 514 "05call.c"
                        __dec_obj79=come_value_153->type;
                        come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 514, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        # 520 "05call.c"
                        # 516 "05call.c"
                        if(_if_conditional210=string_operator_equals(fun_name_113,"__builtin_ffsll"),                        _if_conditional210) {
                            # 517 "05call.c"
                            __dec_obj80=come_value_153->type;
                            come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 517, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            # 520 "05call.c"
            come_value_153->var=((void*)0);
            # 522 "05call.c"
            add_come_last_code(info,"%s;\n",come_value_153->c_value);
            # 524 "05call.c"
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
            # 526 "05call.c"
            __result141__ = (_Bool)1;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result141__;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            # 591 "05call.c"
            # 528 "05call.c"
            if(_if_conditional211=string_operator_equals(fun_name_113,"string"),            _if_conditional211) {
                # 529 "05call.c"
                __dec_obj81=fun_name_113;
                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("__builtin_string"))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                # 591 "05call.c"
                # 531 "05call.c"
                if(_if_conditional212=string_operator_equals(fun_name_113,"wstring"),                _if_conditional212) {
                    # 532 "05call.c"
                    __dec_obj82=fun_name_113;
                    fun_name_113=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("__builtin_wstring"))));
                    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    # 591 "05call.c"
                    # 534 "05call.c"
                    if(_if_conditional213=string_operator_equals(fun_name_113,"inherit"),                    _if_conditional213) {
                        # 535 "05call.c"
                        p_154=info->come_fun->mName;
                        # 537 "05call.c"
                        version_155=0;
                        # 553 "05call.c"
                        while(_while_condtional22=*p_154,                        _while_condtional22) {
                            # 551 "05call.c"
                            # 539 "05call.c"
                            if(_if_conditional214=*p_154==95&&*(p_154+1)==118&&xisdigit(*(p_154+2)),                            _if_conditional214) {
                                # 540 "05call.c"
                                p2_156=p_154+2;
                                # 541 "05call.c"
                                version_155=0;
                                # 546 "05call.c"
                                while(_while_condtional23=xisdigit(*p2_156),                                _while_condtional23) {
                                    # 543 "05call.c"
                                    version_155=version_155*10+(*p2_156-48);
                                    # 544 "05call.c"
                                    p2_156++;
                                }
                                # 546 "05call.c"
                                break;
                            }
                            else {
                                # 549 "05call.c"
                                p_154++;
                            }
                        }
                        # 553 "05call.c"
                        char real_fun_name_157[2048];
                        memset(&real_fun_name_157, 0, sizeof(char)                        *(2048)                        );
                        # 554 "05call.c"
                        memcpy(real_fun_name_157,info->come_fun->mName,p_154-info->come_fun->mName);
                        # 555 "05call.c"
                        real_fun_name_157[p_154-info->come_fun->mName]=0;
                        # 557 "05call.c"
                        # 567 "05call.c"
                        for(                        i_158=version_155-1;                        i_158>=1;                        i_158--                        ){
                            # 559 "05call.c"
                            new_fun_name_159=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s_v%d",real_fun_name_157,i_158))));
                            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 565 "05call.c"
                            # 561 "05call.c"
                            if(_if_conditional234=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_159),                            _if_conditional234) {
                                # 562 "05call.c"
                                __dec_obj83=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(new_fun_name_159))));
                                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 563 "05call.c"
                                new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        # 579 "05call.c"
                        # 567 "05call.c"
                        if(_if_conditional235=i_158==0,                        _if_conditional235) {
                            # 568 "05call.c"
                            new_fun_name_163=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s",real_fun_name_157))));
                            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 574 "05call.c"
                            # 570 "05call.c"
                            if(_if_conditional236=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_163),                            _if_conditional236) {
                                # 571 "05call.c"
                                __dec_obj84=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(new_fun_name_163))));
                                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 578 "05call.c"
                            # 574 "05call.c"
                            if(_if_conditional237=string_operator_equals(fun_name_113,info->come_fun->mName),                            _if_conditional237) {
                                # 575 "05call.c"
                                err_msg(info,"invalid inherit");
                                # 576 "05call.c"
                                __result146__ = (_Bool)0;
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result146__;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        # 589 "05call.c"
                        for(                        i_164=128;                        i_164>=1;                        i_164--                        ){
                            # 582 "05call.c"
                            new_fun_name_165=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s_v%d",fun_name_113,i_164))));
                            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            # 588 "05call.c"
                            # 584 "05call.c"
                            if(_if_conditional238=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_165),                            _if_conditional238) {
                                # 585 "05call.c"
                                __dec_obj85=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(new_fun_name_165))));
                                __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                # 586 "05call.c"
                                new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        # 591 "05call.c"
        fun_168=map$2charphsFunph_at(info->funcs,fun_name_113,((void*)0));
        # 598 "05call.c"
        # 593 "05call.c"
        if(_if_conditional243=fun_168==((void*)0),        _if_conditional243) {
            # 594 "05call.c"
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_113);
            # 595 "05call.c"
            __result151__ = (_Bool)1;
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result151__;
        }
        # 598 "05call.c"
        result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(fun_168->mResultType))));
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 599 "05call.c"
        result_type_169->mStatic=(_Bool)0;
        # 601 "05call.c"
        param_types_170=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value222=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value221=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 601, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value221,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value222,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 607 "05call.c"
        for(        o2_saved_171=(struct list$1sTypeph*)come_increment_ref_count((fun_168->mParamTypes)),it_174=list$1sTypeph_begin((o2_saved_171));        !list$1sTypeph_end((o2_saved_171));        it_174=list$1sTypeph_next((o2_saved_171))        ){
            # 603 "05call.c"
            it2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=solve_generics(((struct sType*)(right_value223=sType_clone(it_174))),info->generics_type,info))));
            come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
            # 604 "05call.c"
            list$1sTypeph_push_back(param_types_170,(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it2_177)))));
            come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(it2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_171,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        # 607 "05call.c"
        __dec_obj89=result_type_169;
        result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=solve_generics(result_type_169,info->generics_type,info))));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 609 "05call.c"
        come_params_181=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 609, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value230,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 615 "05call.c"
        for(        i_182=0;        i_182<list$1sTypeph_length(fun_168->mParamTypes);        i_182++        ){
            # 612 "05call.c"
            list$1CVALUEph_add(come_params_181,((void*)0));
        }
        # 648 "05call.c"
        for(        o2_saved_186=(params_114),it_187=list$1tuple2$2charphsNodephph_begin((o2_saved_186));        !list$1tuple2$2charphsNodephph_end((o2_saved_186));        it_187=list$1tuple2$2charphsNodephph_next((o2_saved_186))        ){
            # 616 "05call.c"
            multiple_assign_var3=it_187;
            label_188=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_189=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            # 646 "05call.c"
            # 618 "05call.c"
            if(_if_conditional252=fun_168->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start"),            _if_conditional252) {
            }
            else {
                # 646 "05call.c"
                # 620 "05call.c"
                if(label_188) {
                    # 625 "05call.c"
                    # 621 "05call.c"
                    if(_if_conditional254=!node_compile(node_189,info),                    _if_conditional254) {
                        # 622 "05call.c"
                        __result161__ = (_Bool)0;
                        label_188 = come_decrement_ref_count2(label_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result161__;
                    }
                    # 625 "05call.c"
                    come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 626 "05call.c"
                    dec_stack_ptr(1,info);
                    # 628 "05call.c"
                    n_191=0;
                    # 637 "05call.c"
                    for(                    o2_saved_192=(struct list$1charph*)come_increment_ref_count((fun_168->mParamNames)),it_195=list$1charph_begin((o2_saved_192));                    !list$1charph_end((o2_saved_192));                    it_195=list$1charph_next((o2_saved_192))                    ){
                        # 634 "05call.c"
                        # 630 "05call.c"
                        if(_if_conditional259=string_operator_equals(label_188,it_195),                        _if_conditional259) {
                            # 631 "05call.c"
                            break;
                        }
                        # 634 "05call.c"
                        n_191++;
                    }
                    come_call_finalizer3(o2_saved_192,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    # 640 "05call.c"
                    # 637 "05call.c"
                    if(_if_conditional260=list$1sTypephp_operator_load_element(param_types_170,n_191),                    _if_conditional260) {
                        # 638 "05call.c"
                        check_assign_type(((char*)(right_value238=xsprintf("\%s param num \%s is assinged to",((char*)(right_value236=string_to_string(fun_name_113))),((char*)(right_value237=int_to_string(n_191)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 638, 4)),come_value_190->type,come_value_190,(_Bool)0,(_Bool)1,info);
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 644 "05call.c"
                    # 640 "05call.c"
                    if(_if_conditional261=list$1sTypephp_operator_load_element(param_types_170,n_191)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 640, 5))->mHeap&&come_value_190->type->mHeap,                    _if_conditional261) {
                        # 641 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 641, 6)),come_value_190->type,come_value_190,info);
                    }
                    # 644 "05call.c"
                    list$1CVALUEph_replace(come_params_181,n_191,(struct CVALUE*)come_increment_ref_count(come_value_190));
                    come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_188 = come_decrement_ref_count2(label_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 648 "05call.c"
        i_200=0;
        # 703 "05call.c"
        for(        o2_saved_201=(params_114),it_202=list$1tuple2$2charphsNodephph_begin((o2_saved_201));        !list$1tuple2$2charphsNodephph_end((o2_saved_201));        it_202=list$1tuple2$2charphsNodephph_next((o2_saved_201))        ){
            # 650 "05call.c"
            multiple_assign_var4=it_202;
            label_203=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_204=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            # 701 "05call.c"
            # 652 "05call.c"
            if(_if_conditional265=fun_168->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start"),            _if_conditional265) {
                # 657 "05call.c"
                # 653 "05call.c"
                if(_if_conditional266=!node_compile(node_204,info),                _if_conditional266) {
                    # 654 "05call.c"
                    __result171__ = (_Bool)0;
                    label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result171__;
                }
                # 657 "05call.c"
                come_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                # 658 "05call.c"
                dec_stack_ptr(1,info);
                # 669 "05call.c"
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    # 667 "05call.c"
                    # 661 "05call.c"
                    if(_if_conditional269=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                    _if_conditional269) {
                        # 662 "05call.c"
                        break;
                    }
                    else {
                        # 665 "05call.c"
                        i_200++;
                    }
                }
                # 669 "05call.c"
                list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_205));
                # 670 "05call.c"
                i_200++;
                come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                # 701 "05call.c"
                # 672 "05call.c"
                if(label_203) {
                }
                else {
                    # 679 "05call.c"
                    # 675 "05call.c"
                    if(_if_conditional271=!node_compile(node_204,info),                    _if_conditional271) {
                        # 676 "05call.c"
                        __result174__ = (_Bool)0;
                        label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result174__;
                    }
                    # 679 "05call.c"
                    come_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 680 "05call.c"
                    dec_stack_ptr(1,info);
                    # 691 "05call.c"
                    while(_while_condtional29=(_Bool)1,                    _while_condtional29) {
                        # 689 "05call.c"
                        # 683 "05call.c"
                        if(_if_conditional272=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                        _if_conditional272) {
                            # 684 "05call.c"
                            break;
                        }
                        else {
                            # 687 "05call.c"
                            i_200++;
                        }
                    }
                    # 694 "05call.c"
                    # 691 "05call.c"
                    if(_if_conditional273=list$1sTypephp_operator_load_element(param_types_170,i_200),                    _if_conditional273) {
                        # 692 "05call.c"
                        check_assign_type(((char*)(right_value243=xsprintf("\%s param num \%s is assinged to",((char*)(right_value241=string_to_string(fun_name_113))),((char*)(right_value242=int_to_string(i_200)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 692, 7)),come_value_209->type,come_value_209,(_Bool)0,(_Bool)1,info);
                        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 698 "05call.c"
                    # 694 "05call.c"
                    if(_if_conditional274=list$1sTypephp_operator_load_element(param_types_170,i_200)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 694, 8))->mHeap&&come_value_209->type->mHeap,                    _if_conditional274) {
                        # 695 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 695, 9)),come_value_209->type,come_value_209,info);
                    }
                    # 698 "05call.c"
                    list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_209));
                    # 699 "05call.c"
                    i_200++;
                    come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        # 712 "05call.c"
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            # 710 "05call.c"
            # 704 "05call.c"
            if(_if_conditional275=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),            _if_conditional275) {
                # 705 "05call.c"
                break;
            }
            else {
                # 708 "05call.c"
                i_200++;
            }
        }
        # 758 "05call.c"
        # 712 "05call.c"
        if(_if_conditional276=list$1tuple2$2charphsNodephph_length(params_114)<list$1sTypeph_length(fun_168->mParamTypes),        _if_conditional276) {
            # 756 "05call.c"
            for(            ;            i_200<list$1sTypeph_length(fun_168->mParamTypes);            i_200++            ){
                # 715 "05call.c"
                default_param_213=(char*)come_increment_ref_count(((char*)(right_value244=string_clone(list$1charphp_operator_load_element(fun_168->mParamDefaultParametors,i_200)))));
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 716 "05call.c"
                param_name_214=((char*)come_null_check(list$1charphp_operator_load_element(fun_168->mParamNames,i_200), "05call.c", 716, 10));
                # 755 "05call.c"
                # 718 "05call.c"
                if(_if_conditional279=default_param_213&&string_operator_not_equals(default_param_213,"")&&list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                _if_conditional279) {
                    # 719 "05call.c"
                    source_215=(struct buffer*)come_increment_ref_count(info->source);
                    # 720 "05call.c"
                    p_216=info->p;
                    # 721 "05call.c"
                    head_217=info->head;
                    # 722 "05call.c"
                    sline_218=info->sline;
                    # 724 "05call.c"
                    __dec_obj94=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=string_to_buffer(default_param_213))));
                    come_call_finalizer3(__dec_obj94,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value245,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    # 725 "05call.c"
                    info->p=info->source->buf;
                    # 726 "05call.c"
                    info->head=info->source->buf;
                    # 728 "05call.c"
                    node_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=expression_v13(info))));
                    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 734 "05call.c"
                    # 730 "05call.c"
                    if(_if_conditional280=!node_compile(node_219,info),                    _if_conditional280) {
                        # 731 "05call.c"
                        __result177__ = (_Bool)0;
                        come_call_finalizer3(source_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result177__;
                    }
                    # 734 "05call.c"
                    __dec_obj95=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_215);
                    come_call_finalizer3(__dec_obj95,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    # 735 "05call.c"
                    info->p=p_216;
                    # 736 "05call.c"
                    info->head=head_217;
                    # 737 "05call.c"
                    info->sline=sline_218;
                    # 739 "05call.c"
                    come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
                    come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    # 743 "05call.c"
                    # 740 "05call.c"
                    if(_if_conditional281=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 740, 11)),                    _if_conditional281) {
                        # 741 "05call.c"
                        check_assign_type(((char*)(right_value250=xsprintf("\%s param num \%s is assinged to",((char*)(right_value248=string_to_string(fun_name_113))),((char*)(right_value249=int_to_string(i_200)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 741, 12)),come_value_220->type,come_value_220,(_Bool)0,(_Bool)1,info);
                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 746 "05call.c"
                    # 743 "05call.c"
                    if(_if_conditional282=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 743, 13))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 743, 14))->mHeap&&come_value_220->type->mHeap,                    _if_conditional282) {
                        # 744 "05call.c"
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 744, 15)),come_value_220->type,come_value_220,info);
                    }
                    # 746 "05call.c"
                    list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_220));
                    # 747 "05call.c"
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    # 754 "05call.c"
                    # 750 "05call.c"
                    if(_if_conditional283=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                    _if_conditional283) {
                        # 751 "05call.c"
                        err_msg(info,"require parametor(%s) %d",fun_168->mName,i_200);
                        # 752 "05call.c"
                        __result178__ = (_Bool)0;
                        default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result178__;
                    }
                }
                default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        # 764 "05call.c"
        # 758 "05call.c"
        if(_if_conditional284=list$1sTypeph_length(fun_168->mParamTypes)!=list$1CVALUEph_length(come_params_181)&&!fun_168->mVarArgs&&string_operator_not_equals(fun_name_113,"__builtin_va_start")&&string_operator_not_equals(fun_name_113,"__builtin_va_end"),        _if_conditional284) {
            # 760 "05call.c"
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(fun_168->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
            # 761 "05call.c"
            __result179__ = (_Bool)0;
            come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result179__;
        }
        # 764 "05call.c"
        buf_221=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 764, "buffer"))))))));
        come_call_finalizer3(right_value251,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        # 766 "05call.c"
        buffer_append_str(buf_221,fun_name_113);
        # 767 "05call.c"
        buffer_append_str(buf_221,"(");
        # 769 "05call.c"
        j_222=0;
        # 779 "05call.c"
        for(        o2_saved_223=(struct list$1CVALUEph*)come_increment_ref_count((come_params_181)),it_224=list$1CVALUEph_begin((o2_saved_223));        !list$1CVALUEph_end((o2_saved_223));        it_224=list$1CVALUEph_next((o2_saved_223))        ){
            # 771 "05call.c"
            buffer_append_str(buf_221,it_224->c_value);
            # 777 "05call.c"
            # 773 "05call.c"
            if(_if_conditional285=j_222!=list$1CVALUEph_length(come_params_181)-1,            _if_conditional285) {
                # 774 "05call.c"
                buffer_append_str(buf_221,",");
            }
            # 777 "05call.c"
            j_222++;
        }
        come_call_finalizer3(o2_saved_223,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        # 779 "05call.c"
        buffer_append_str(buf_221,")");
        # 781 "05call.c"
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 781, "CVALUE"))));
        come_call_finalizer3(right_value253,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        # 782 "05call.c"
        __dec_obj96=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value254=buffer_to_string(buf_221))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 783 "05call.c"
        __dec_obj97=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(result_type_169))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value255,sType_finalize, 0, 1, 0, 0, __result_obj__);
        # 784 "05call.c"
        come_value_225->type->mStatic=(_Bool)0;
        # 785 "05call.c"
        come_value_225->var=((void*)0);
        # 791 "05call.c"
        # 787 "05call.c"
        if(fun_168->mResultType->mHeap) {
            # 788 "05call.c"
            __dec_obj98=come_value_225->c_value;
            come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value256=append_object_to_right_values(come_value_225->c_value,(struct sType*)come_increment_ref_count(result_type_169),info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 798 "05call.c"
        # 791 "05call.c"
        if(_if_conditional287=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional287) {
            # 796 "05call.c"
            # 793 "05call.c"
            if(_if_conditional288=string_operator_not_equals(fun_name_113,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_113,"null_check")&&string_operator_not_equals(fun_name_113,"come_push_stackframe")&&string_operator_not_equals(fun_name_113,"come_pop_stackframe"),            _if_conditional288) {
                # 794 "05call.c"
                __dec_obj99=come_value_225->c_value;
                come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value257=append_stackframe(come_value_225->c_value,come_value_225->type,info))));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        # 802 "05call.c"
        # 798 "05call.c"
        if(_if_conditional289=!self->guard_break&&result_type_169->mGuardValue&&result_type_169->mPointerNum>0,        _if_conditional289) {
            # 799 "05call.c"
            __dec_obj100=come_value_225->c_value;
            come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value258=make_type_name_string(result_type_169,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_225->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 802 "05call.c"
        add_come_last_code(info,"%s;\n",come_value_225->c_value);
        # 804 "05call.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    # 807 "05call.c"
    __result180__ = (_Bool)1;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result180__;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional161;
struct list$1tuple2$2charphsNodephph* __result106__;
void* right_value171;
void* right_value172;
struct list$1tuple2$2charphsNodephph* result_105;
struct list_item$1tuple2$2charphsNodephph* it_106;
_Bool _while_condtional18;
void* right_value179;
struct list$1tuple2$2charphsNodephph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&result_105, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_106, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value179 = (void*)0;
        # 133 "./neo-c.h"
        # 130 "./neo-c.h"
        if(_if_conditional161=self==((void*)0),        _if_conditional161) {
            # 131 "./neo-c.h"
            __result106__ = __result_obj__ = ((void*)0);
            return __result106__;
        }
        # 133 "./neo-c.h"
        result_105=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value172=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value171=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 133, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value171,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value172,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        # 135 "./neo-c.h"
        it_106=self->head;
        # 142 "./neo-c.h"
        while(_while_condtional18=it_106!=((void*)0),        _while_condtional18) {
            # 137 "./neo-c.h"
            list$1tuple2$2charphsNodephph_add(result_105,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value179=tuple2$2charphsNodephp_clone(it_106->item)))));
            come_call_finalizer3(right_value179,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            # 139 "./neo-c.h"
            it_106=it_106->next;
        }
        # 142 "./neo-c.h"
        __result111__ = __result_obj__ = result_105;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result111__;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result107__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result107__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_103;
_Bool _while_condtional17;
struct list_item$1tuple2$2charphsNodephph* prev_it_104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_103, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_104, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 114 "./neo-c.h"
                it_103=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional17=it_103!=((void*)0),                _while_condtional17) {
                    # 116 "./neo-c.h"
                    prev_it_104=it_103;
                    # 117 "./neo-c.h"
                    it_103=it_103->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_104,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "list_item$1tuple2$2charphsNodephphp_finalize"
                        # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                        if(_if_conditional162=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional162) {
                            # 0 "list_item$1tuple2$2charphsNodephphp_finalize"
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional165;
void* right_value173;
struct list_item$1tuple2$2charphsNodephph* litem_107;
struct tuple2$2charphsNodeph* __dec_obj64;
_Bool _if_conditional168;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_108;
struct tuple2$2charphsNodeph* __dec_obj65;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_109;
struct tuple2$2charphsNodeph* __dec_obj66;
struct list$1tuple2$2charphsNodephph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value174 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional165=self->len==0,                _if_conditional165) {
                    # 147 "./neo-c.h"
                    litem_107=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value173=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 147, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value173,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_107->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_107->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj64=litem_107->item;
                    litem_107->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj64,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_107;
                    # 154 "./neo-c.h"
                    self->head=litem_107;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional168=self->len==1,                    _if_conditional168) {
                        # 157 "./neo-c.h"
                        litem_108=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 157, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_108->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_108->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj65=litem_108->item;
                        litem_108->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj65,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_108;
                        # 164 "./neo-c.h"
                        self->head->next=litem_108;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_109=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 167, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_109->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_109->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj66=litem_109->item;
                        litem_109->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj66,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_109;
                        # 174 "./neo-c.h"
                        self->tail=litem_109;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result108__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result108__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional171;
_Bool _if_conditional172;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple2$2charphsNodephp_finalize"
                            # 0 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional171=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional171) {
                                # 0 "tuple2$2charphsNodephp_finalize"
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple2$2charphsNodephp_finalize"
                            # 1 "tuple2$2charphsNodephp_finalize"
                            if(_if_conditional172=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional172) {
                                # 1 "tuple2$2charphsNodephp_finalize"
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional173;
struct tuple2$2charphsNodeph* __result109__;
void* right_value176;
struct tuple2$2charphsNodeph* result_110;
_Bool _if_conditional176;
void* right_value177;
char* __dec_obj67;
_Bool _if_conditional177;
void* right_value178;
struct sNode* __dec_obj68;
struct tuple2$2charphsNodeph* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
memset(&result_110, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value177 = (void*)0;
right_value178 = (void*)0;
                # 3 "tuple2$2charphsNodephp_clone"
                # 2 "tuple2$2charphsNodephp_clone"
                if(_if_conditional173=self==(void*)0,                _if_conditional173) {
                    # 2 "tuple2$2charphsNodephp_clone"
                    __result109__ = __result_obj__ = (void*)0;
                    return __result109__;
                }
                # 3 "tuple2$2charphsNodephp_clone"
                result_110=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value176=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value176,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple2$2charphsNodephp_clone"
                # 4 "tuple2$2charphsNodephp_clone"
                if(_if_conditional176=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional176) {
                    # 4 "tuple2$2charphsNodephp_clone"
                    __dec_obj67=result_110->v1;
                    result_110->v1=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->v1))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "tuple2$2charphsNodephp_clone"
                # 5 "tuple2$2charphsNodephp_clone"
                if(_if_conditional177=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional177) {
                    # 5 "tuple2$2charphsNodephp_clone"
                    __dec_obj68=result_110->v2;
                    result_110->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(self->v2))));
                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "tuple2$2charphsNodephp_clone"
                __result110__ = __result_obj__ = result_110;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result110__;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2charphsNodeph_finalize"
                    # 0 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional174=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional174) {
                        # 0 "tuple2$2charphsNodeph_finalize"
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    # 2 "tuple2$2charphsNodeph_finalize"
                    # 1 "tuple2$2charphsNodeph_finalize"
                    if(_if_conditional175=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional175) {
                        # 1 "tuple2$2charphsNodeph_finalize"
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsNodephph* it_111;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsNodephph* prev_it_112;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_111, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_112, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        # 114 "./neo-c.h"
        it_111=self->head;
        # 120 "./neo-c.h"
        while(_while_condtional19=it_111!=((void*)0),        _while_condtional19) {
            # 116 "./neo-c.h"
            prev_it_112=it_111;
            # 117 "./neo-c.h"
            it_111=it_111->next;
            # 118 "./neo-c.h"
            come_call_finalizer3(prev_it_112,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
            # 95 "./neo-c.h"
            self->head=((void*)0);
            # 96 "./neo-c.h"
            self->tail=((void*)0);
            # 97 "./neo-c.h"
            self->len=0;
            # 99 "./neo-c.h"
            __result115__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_118;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_118, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1CVALUEph*));
                # 114 "./neo-c.h"
                it_118=self->head;
                # 120 "./neo-c.h"
                while(_while_condtional20=it_118!=((void*)0),                _while_condtional20) {
                    # 116 "./neo-c.h"
                    prev_it_119=it_118;
                    # 117 "./neo-c.h"
                    it_118=it_118->next;
                    # 118 "./neo-c.h"
                    come_call_finalizer3(prev_it_119,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional184;
int __result116__;
int __result117__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional184=self==((void*)0),            _if_conditional184) {
                # 352 "./neo-c.h"
                __result116__ = 0;
                return __result116__;
            }
            # 354 "./neo-c.h"
            __result117__ = self->len;
            return __result117__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional185;
int __result118__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
            # 354 "./neo-c.h"
            # 351 "./neo-c.h"
            if(_if_conditional185=self==((void*)0),            _if_conditional185) {
                # 352 "./neo-c.h"
                __result118__ = 0;
                return __result118__;
            }
            # 354 "./neo-c.h"
            __result119__ = self->len;
            return __result119__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional187;
struct tuple2$2charphsNodeph* result_123;
struct tuple2$2charphsNodeph* __result121__;
_Bool _if_conditional188;
struct tuple2$2charphsNodeph* __result122__;
struct tuple2$2charphsNodeph* result_124;
struct tuple2$2charphsNodeph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional187=self==((void*)0),            _if_conditional187) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_123,0,sizeof(struct tuple2$2charphsNodeph*));
                # 279 "./neo-c.h"
                __result121__ = __result_obj__ = result_123;
                return __result121__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result122__ = __result_obj__ = self->it->item;
                return __result122__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*));
            # 289 "./neo-c.h"
            __result123__ = __result_obj__ = result_124;
            return __result123__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result124__ = self==((void*)0)||self->it==((void*)0);
            return __result124__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional189;
struct tuple2$2charphsNodeph* result_126;
struct tuple2$2charphsNodeph* __result125__;
_Bool _if_conditional190;
struct tuple2$2charphsNodeph* __result126__;
struct tuple2$2charphsNodeph* result_127;
struct tuple2$2charphsNodeph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsNodeph*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional189=self==((void*)0)||self->it==((void*)0),            _if_conditional189) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_126,0,sizeof(struct tuple2$2charphsNodeph*));
                # 296 "./neo-c.h"
                __result125__ = __result_obj__ = result_126;
                return __result125__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result126__ = __result_obj__ = self->it->item;
                return __result126__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*));
            # 307 "./neo-c.h"
            __result127__ = __result_obj__ = result_127;
            return __result127__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional192;
struct list_item$1sTypeph* it_131;
int i_132;
_Bool _while_condtional21;
_Bool _if_conditional193;
struct sType* __result129__;
struct sType* default_value_133;
struct sType* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_132, 0, sizeof(int));
memset(&default_value_133, 0, sizeof(struct sType*));
                # 673 "./neo-c.h"
                # 669 "./neo-c.h"
                if(_if_conditional192=position<0,                _if_conditional192) {
                    # 670 "./neo-c.h"
                    position+=self->len;
                }
                # 673 "./neo-c.h"
                it_131=self->head;
                # 674 "./neo-c.h"
                i_132=0;
                # 681 "./neo-c.h"
                while(_while_condtional21=it_131!=((void*)0),                _while_condtional21) {
                    # 679 "./neo-c.h"
                    # 676 "./neo-c.h"
                    if(_if_conditional193=position==i_132,                    _if_conditional193) {
                        # 677 "./neo-c.h"
                        __result129__ = __result_obj__ = it_131->item;
                        return __result129__;
                    }
                    # 679 "./neo-c.h"
                    it_131=it_131->next;
                    # 680 "./neo-c.h"
                    i_132++;
                }
                # 683 "./neo-c.h"
                # 684 "./neo-c.h"
                memset(&default_value_133,0,sizeof(struct sType*));
                # 685 "./neo-c.h"
                __result130__ = __result_obj__ = default_value_133;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result130__;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional196;
struct CVALUE* result_137;
struct CVALUE* __result131__;
_Bool _if_conditional197;
struct CVALUE* __result132__;
struct CVALUE* result_138;
struct CVALUE* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct CVALUE*));
memset(&result_138, 0, sizeof(struct CVALUE*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional196=self==((void*)0),            _if_conditional196) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_137,0,sizeof(struct CVALUE*));
                # 279 "./neo-c.h"
                __result131__ = __result_obj__ = result_137;
                return __result131__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result132__ = __result_obj__ = self->it->item;
                return __result132__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_138,0,sizeof(struct CVALUE*));
            # 289 "./neo-c.h"
            __result133__ = __result_obj__ = result_138;
            return __result133__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result134__ = self==((void*)0)||self->it==((void*)0);
            return __result134__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional198;
struct CVALUE* result_140;
struct CVALUE* __result135__;
_Bool _if_conditional199;
struct CVALUE* __result136__;
struct CVALUE* result_141;
struct CVALUE* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct CVALUE*));
memset(&result_141, 0, sizeof(struct CVALUE*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional198=self==((void*)0)||self->it==((void*)0),            _if_conditional198) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_140,0,sizeof(struct CVALUE*));
                # 296 "./neo-c.h"
                __result135__ = __result_obj__ = result_140;
                return __result135__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result136__ = __result_obj__ = self->it->item;
                return __result136__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_141,0,sizeof(struct CVALUE*));
            # 307 "./neo-c.h"
            __result137__ = __result_obj__ = result_141;
            return __result137__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional200;
int __result138__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
                # 354 "./neo-c.h"
                # 351 "./neo-c.h"
                if(_if_conditional200=self==((void*)0),                _if_conditional200) {
                    # 352 "./neo-c.h"
                    __result138__ = 0;
                    return __result138__;
                }
                # 354 "./neo-c.h"
                __result139__ = self->len;
                return __result139__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_160;
unsigned int hash_161;
unsigned int it_162;
_Bool _while_condtional24;
_Bool _if_conditional215;
_Bool _if_conditional216;
struct sFun* __result142__;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sFun* __result143__;
struct sFun* __result144__;
struct sFun* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_160, 0, sizeof(struct sFun*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&it_162, 0, sizeof(unsigned int));
                                # 1519 "./neo-c.h"
                                # 1520 "./neo-c.h"
                                memset(&default_value_160,0,sizeof(struct sFun*));
                                # 1522 "./neo-c.h"
                                hash_161=string_get_hash_key(((char*)key))%self->size;
                                # 1523 "./neo-c.h"
                                it_162=hash_161;
                                # 1547 "./neo-c.h"
                                while(_while_condtional24=(_Bool)1,                                _while_condtional24) {
                                    # 1545 "./neo-c.h"
                                    # 1526 "./neo-c.h"
                                    if(_if_conditional215=self->item_existance[it_162],                                    _if_conditional215) {
                                        # 1533 "./neo-c.h"
                                        # 1528 "./neo-c.h"
                                        if(_if_conditional216=string_equals(self->keys[it_162],key),                                        _if_conditional216) {
                                            # 1530 "./neo-c.h"
                                            __result142__ = __result_obj__ = self->items[it_162];
                                            come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result142__;
                                        }
                                        # 1533 "./neo-c.h"
                                        it_162++;
                                        # 1541 "./neo-c.h"
                                        # 1535 "./neo-c.h"
                                        if(_if_conditional232=it_162>=self->size,                                        _if_conditional232) {
                                            # 1536 "./neo-c.h"
                                            it_162=0;
                                        }
                                        else {
                                            # 1541 "./neo-c.h"
                                            # 1538 "./neo-c.h"
                                            if(_if_conditional233=it_162==hash_161,                                            _if_conditional233) {
                                                # 1539 "./neo-c.h"
                                                __result143__ = __result_obj__ = default_value_160;
                                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result143__;
                                            }
                                        }
                                    }
                                    else {
                                        # 1543 "./neo-c.h"
                                        __result144__ = __result_obj__ = default_value_160;
                                        come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result144__;
                                    }
                                }
                                # 1547 "./neo-c.h"
                                __result145__ = __result_obj__ = default_value_160;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result145__;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sFun_finalize"
                                                # 0 "sFun_finalize"
                                                if(_if_conditional217=self!=((void*)0)&&self->mName!=((void*)0),                                                _if_conditional217) {
                                                    # 0 "sFun_finalize"
                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sFun_finalize"
                                                # 1 "sFun_finalize"
                                                if(_if_conditional218=self!=((void*)0)&&self->mResultType!=((void*)0),                                                _if_conditional218) {
                                                    # 1 "sFun_finalize"
                                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 3 "sFun_finalize"
                                                # 2 "sFun_finalize"
                                                if(_if_conditional219=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                _if_conditional219) {
                                                    # 2 "sFun_finalize"
                                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 4 "sFun_finalize"
                                                # 3 "sFun_finalize"
                                                if(_if_conditional220=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                _if_conditional220) {
                                                    # 3 "sFun_finalize"
                                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 5 "sFun_finalize"
                                                # 4 "sFun_finalize"
                                                if(_if_conditional221=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                _if_conditional221) {
                                                    # 4 "sFun_finalize"
                                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 6 "sFun_finalize"
                                                # 5 "sFun_finalize"
                                                if(_if_conditional222=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                _if_conditional222) {
                                                    # 5 "sFun_finalize"
                                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 7 "sFun_finalize"
                                                # 6 "sFun_finalize"
                                                if(_if_conditional223=self!=((void*)0)&&self->mBlock!=((void*)0),                                                _if_conditional223) {
                                                    # 6 "sFun_finalize"
                                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 8 "sFun_finalize"
                                                # 7 "sFun_finalize"
                                                if(_if_conditional226=self!=((void*)0)&&self->mSource!=((void*)0),                                                _if_conditional226) {
                                                    # 7 "sFun_finalize"
                                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 9 "sFun_finalize"
                                                # 8 "sFun_finalize"
                                                if(_if_conditional227=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                _if_conditional227) {
                                                    # 8 "sFun_finalize"
                                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 10 "sFun_finalize"
                                                # 9 "sFun_finalize"
                                                if(_if_conditional228=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                _if_conditional228) {
                                                    # 9 "sFun_finalize"
                                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 11 "sFun_finalize"
                                                # 10 "sFun_finalize"
                                                if(_if_conditional229=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                _if_conditional229) {
                                                    # 10 "sFun_finalize"
                                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                # 12 "sFun_finalize"
                                                # 11 "sFun_finalize"
                                                if(_if_conditional230=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                _if_conditional230) {
                                                    # 11 "sFun_finalize"
                                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 13 "sFun_finalize"
                                                # 12 "sFun_finalize"
                                                if(_if_conditional231=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                _if_conditional231) {
                                                    # 12 "sFun_finalize"
                                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
                                                        # 1 "sBlock_finalize"
                                                        # 0 "sBlock_finalize"
                                                        if(_if_conditional224=self!=((void*)0)&&self->mNodes!=((void*)0),                                                        _if_conditional224) {
                                                            # 0 "sBlock_finalize"
                                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        # 2 "sBlock_finalize"
                                                        # 1 "sBlock_finalize"
                                                        if(_if_conditional225=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                        _if_conditional225) {
                                                            # 1 "sBlock_finalize"
                                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_166;
unsigned int it_167;
_Bool _while_condtional25;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct sFun* __result147__;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct sFun* __result148__;
struct sFun* __result149__;
struct sFun* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&it_167, 0, sizeof(unsigned int));
            # 1201 "./neo-c.h"
            hash_166=string_get_hash_key(((char*)key))%self->size;
            # 1202 "./neo-c.h"
            it_167=hash_166;
            # 1226 "./neo-c.h"
            while(_while_condtional25=(_Bool)1,            _while_condtional25) {
                # 1224 "./neo-c.h"
                # 1205 "./neo-c.h"
                if(_if_conditional239=self->item_existance[it_167],                _if_conditional239) {
                    # 1212 "./neo-c.h"
                    # 1207 "./neo-c.h"
                    if(_if_conditional240=string_equals(self->keys[it_167],key),                    _if_conditional240) {
                        # 1209 "./neo-c.h"
                        __result147__ = __result_obj__ = self->items[it_167];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result147__;
                    }
                    # 1212 "./neo-c.h"
                    it_167++;
                    # 1220 "./neo-c.h"
                    # 1214 "./neo-c.h"
                    if(_if_conditional241=it_167>=self->size,                    _if_conditional241) {
                        # 1215 "./neo-c.h"
                        it_167=0;
                    }
                    else {
                        # 1220 "./neo-c.h"
                        # 1217 "./neo-c.h"
                        if(_if_conditional242=it_167==hash_166,                        _if_conditional242) {
                            # 1218 "./neo-c.h"
                            __result148__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result148__;
                        }
                    }
                }
                else {
                    # 1222 "./neo-c.h"
                    __result149__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result149__;
                }
            }
            # 1226 "./neo-c.h"
            __result150__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result150__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional244;
struct sType* result_172;
struct sType* __result152__;
_Bool _if_conditional245;
struct sType* __result153__;
struct sType* result_173;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct sType*));
memset(&result_173, 0, sizeof(struct sType*));
            # 281 "./neo-c.h"
            # 276 "./neo-c.h"
            if(_if_conditional244=self==((void*)0),            _if_conditional244) {
                # 277 "./neo-c.h"
                # 278 "./neo-c.h"
                memset(&result_172,0,sizeof(struct sType*));
                # 279 "./neo-c.h"
                __result152__ = __result_obj__ = result_172;
                return __result152__;
            }
            # 281 "./neo-c.h"
            self->it=self->head;
            # 287 "./neo-c.h"
            # 283 "./neo-c.h"
            if(self->it) {
                # 284 "./neo-c.h"
                __result153__ = __result_obj__ = self->it->item;
                return __result153__;
            }
            # 287 "./neo-c.h"
            # 288 "./neo-c.h"
            memset(&result_173,0,sizeof(struct sType*));
            # 289 "./neo-c.h"
            __result154__ = __result_obj__ = result_173;
            return __result154__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
            # 311 "./neo-c.h"
            __result155__ = self==((void*)0)||self->it==((void*)0);
            return __result155__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional246;
struct sType* result_175;
struct sType* __result156__;
_Bool _if_conditional247;
struct sType* __result157__;
struct sType* result_176;
struct sType* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct sType*));
memset(&result_176, 0, sizeof(struct sType*));
            # 299 "./neo-c.h"
            # 293 "./neo-c.h"
            if(_if_conditional246=self==((void*)0)||self->it==((void*)0),            _if_conditional246) {
                # 294 "./neo-c.h"
                # 295 "./neo-c.h"
                memset(&result_175,0,sizeof(struct sType*));
                # 296 "./neo-c.h"
                __result156__ = __result_obj__ = result_175;
                return __result156__;
            }
            # 299 "./neo-c.h"
            self->it=self->it->next;
            # 305 "./neo-c.h"
            # 301 "./neo-c.h"
            if(self->it) {
                # 302 "./neo-c.h"
                __result157__ = __result_obj__ = self->it->item;
                return __result157__;
            }
            # 305 "./neo-c.h"
            # 306 "./neo-c.h"
            memset(&result_176,0,sizeof(struct sType*));
            # 307 "./neo-c.h"
            __result158__ = __result_obj__ = result_176;
            return __result158__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional248;
void* right_value225;
struct list_item$1sTypeph* litem_178;
struct sType* __dec_obj86;
_Bool _if_conditional249;
void* right_value226;
struct list_item$1sTypeph* litem_179;
struct sType* __dec_obj87;
void* right_value227;
struct list_item$1sTypeph* litem_180;
struct sType* __dec_obj88;
struct list$1sTypeph* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
memset(&litem_178, 0, sizeof(struct list_item$1sTypeph*));
right_value226 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1sTypeph*));
right_value227 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1sTypeph*));
                # 247 "./neo-c.h"
                # 216 "./neo-c.h"
                if(_if_conditional248=self->len==0,                _if_conditional248) {
                    # 217 "./neo-c.h"
                    litem_178=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value225=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 217, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value225,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 219 "./neo-c.h"
                    litem_178->prev=((void*)0);
                    # 220 "./neo-c.h"
                    litem_178->next=((void*)0);
                    # 221 "./neo-c.h"
                    __dec_obj86=litem_178->item;
                    litem_178->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                    # 223 "./neo-c.h"
                    self->tail=litem_178;
                    # 224 "./neo-c.h"
                    self->head=litem_178;
                }
                else {
                    # 247 "./neo-c.h"
                    # 226 "./neo-c.h"
                    if(_if_conditional249=self->len==1,                    _if_conditional249) {
                        # 227 "./neo-c.h"
                        litem_179=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value226=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 227, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value226,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 229 "./neo-c.h"
                        litem_179->prev=self->head;
                        # 230 "./neo-c.h"
                        litem_179->next=((void*)0);
                        # 231 "./neo-c.h"
                        __dec_obj87=litem_179->item;
                        litem_179->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 233 "./neo-c.h"
                        self->tail=litem_179;
                        # 234 "./neo-c.h"
                        self->head->next=litem_179;
                    }
                    else {
                        # 237 "./neo-c.h"
                        litem_180=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value227=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 237, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value227,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 239 "./neo-c.h"
                        litem_180->prev=self->tail;
                        # 240 "./neo-c.h"
                        litem_180->next=((void*)0);
                        # 241 "./neo-c.h"
                        __dec_obj88=litem_180->item;
                        litem_180->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                        # 243 "./neo-c.h"
                        self->tail->next=litem_180;
                        # 244 "./neo-c.h"
                        self->tail=litem_180;
                    }
                }
                # 247 "./neo-c.h"
                self->len++;
                # 249 "./neo-c.h"
                __result159__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result159__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional250;
void* right_value232;
struct list_item$1CVALUEph* litem_183;
struct CVALUE* __dec_obj90;
_Bool _if_conditional251;
void* right_value233;
struct list_item$1CVALUEph* litem_184;
struct CVALUE* __dec_obj91;
void* right_value234;
struct list_item$1CVALUEph* litem_185;
struct CVALUE* __dec_obj92;
struct list$1CVALUEph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&litem_183, 0, sizeof(struct list_item$1CVALUEph*));
right_value233 = (void*)0;
memset(&litem_184, 0, sizeof(struct list_item$1CVALUEph*));
right_value234 = (void*)0;
memset(&litem_185, 0, sizeof(struct list_item$1CVALUEph*));
                # 177 "./neo-c.h"
                # 146 "./neo-c.h"
                if(_if_conditional250=self->len==0,                _if_conditional250) {
                    # 147 "./neo-c.h"
                    litem_183=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 147, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value232,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 149 "./neo-c.h"
                    litem_183->prev=((void*)0);
                    # 150 "./neo-c.h"
                    litem_183->next=((void*)0);
                    # 151 "./neo-c.h"
                    __dec_obj90=litem_183->item;
                    litem_183->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    # 153 "./neo-c.h"
                    self->tail=litem_183;
                    # 154 "./neo-c.h"
                    self->head=litem_183;
                }
                else {
                    # 177 "./neo-c.h"
                    # 156 "./neo-c.h"
                    if(_if_conditional251=self->len==1,                    _if_conditional251) {
                        # 157 "./neo-c.h"
                        litem_184=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value233=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 157, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value233,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 159 "./neo-c.h"
                        litem_184->prev=self->head;
                        # 160 "./neo-c.h"
                        litem_184->next=((void*)0);
                        # 161 "./neo-c.h"
                        __dec_obj91=litem_184->item;
                        litem_184->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 163 "./neo-c.h"
                        self->tail=litem_184;
                        # 164 "./neo-c.h"
                        self->head->next=litem_184;
                    }
                    else {
                        # 167 "./neo-c.h"
                        litem_185=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value234=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 167, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value234,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 169 "./neo-c.h"
                        litem_185->prev=self->tail;
                        # 170 "./neo-c.h"
                        litem_185->next=((void*)0);
                        # 171 "./neo-c.h"
                        __dec_obj92=litem_185->item;
                        litem_185->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        # 173 "./neo-c.h"
                        self->tail->next=litem_185;
                        # 174 "./neo-c.h"
                        self->tail=litem_185;
                    }
                }
                # 177 "./neo-c.h"
                self->len++;
                # 179 "./neo-c.h"
                __result160__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result160__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional255;
char* result_193;
char* __result162__;
_Bool _if_conditional256;
char* __result163__;
char* result_194;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
                        # 281 "./neo-c.h"
                        # 276 "./neo-c.h"
                        if(_if_conditional255=self==((void*)0),                        _if_conditional255) {
                            # 277 "./neo-c.h"
                            # 278 "./neo-c.h"
                            memset(&result_193,0,sizeof(char*));
                            # 279 "./neo-c.h"
                            __result162__ = __result_obj__ = result_193;
                            return __result162__;
                        }
                        # 281 "./neo-c.h"
                        self->it=self->head;
                        # 287 "./neo-c.h"
                        # 283 "./neo-c.h"
                        if(self->it) {
                            # 284 "./neo-c.h"
                            __result163__ = __result_obj__ = self->it->item;
                            return __result163__;
                        }
                        # 287 "./neo-c.h"
                        # 288 "./neo-c.h"
                        memset(&result_194,0,sizeof(char*));
                        # 289 "./neo-c.h"
                        __result164__ = __result_obj__ = result_194;
                        return __result164__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
                        # 311 "./neo-c.h"
                        __result165__ = self==((void*)0)||self->it==((void*)0);
                        return __result165__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional257;
char* result_196;
char* __result166__;
_Bool _if_conditional258;
char* __result167__;
char* result_197;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
                        # 299 "./neo-c.h"
                        # 293 "./neo-c.h"
                        if(_if_conditional257=self==((void*)0)||self->it==((void*)0),                        _if_conditional257) {
                            # 294 "./neo-c.h"
                            # 295 "./neo-c.h"
                            memset(&result_196,0,sizeof(char*));
                            # 296 "./neo-c.h"
                            __result166__ = __result_obj__ = result_196;
                            return __result166__;
                        }
                        # 299 "./neo-c.h"
                        self->it=self->it->next;
                        # 305 "./neo-c.h"
                        # 301 "./neo-c.h"
                        if(self->it) {
                            # 302 "./neo-c.h"
                            __result167__ = __result_obj__ = self->it->item;
                            return __result167__;
                        }
                        # 305 "./neo-c.h"
                        # 306 "./neo-c.h"
                        memset(&result_197,0,sizeof(char*));
                        # 307 "./neo-c.h"
                        __result168__ = __result_obj__ = result_197;
                        return __result168__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct list$1CVALUEph* __result169__;
struct list_item$1CVALUEph* it_198;
int i_199;
_Bool _while_condtional26;
_Bool _if_conditional264;
struct CVALUE* __dec_obj93;
struct list$1CVALUEph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_199, 0, sizeof(int));
                        # 579 "./neo-c.h"
                        # 575 "./neo-c.h"
                        if(_if_conditional262=position<0,                        _if_conditional262) {
                            # 576 "./neo-c.h"
                            position+=self->len;
                        }
                        # 584 "./neo-c.h"
                        # 579 "./neo-c.h"
                        if(_if_conditional263=position>=self->len,                        _if_conditional263) {
                            # 580 "./neo-c.h"
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            # 581 "./neo-c.h"
                            __result169__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result169__;
                        }
                        # 584 "./neo-c.h"
                        it_198=self->head;
                        # 585 "./neo-c.h"
                        i_199=0;
                        # 595 "./neo-c.h"
                        while(_while_condtional26=it_198!=((void*)0),                        _while_condtional26) {
                            # 591 "./neo-c.h"
                            # 587 "./neo-c.h"
                            if(_if_conditional264=position==i_199,                            _if_conditional264) {
                                # 588 "./neo-c.h"
                                __dec_obj93=it_198->item;
                                it_198->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                # 589 "./neo-c.h"
                                break;
                            }
                            # 591 "./neo-c.h"
                            it_198=it_198->next;
                            # 592 "./neo-c.h"
                            i_199++;
                        }
                        # 595 "./neo-c.h"
                        __result170__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result170__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional267;
struct list_item$1CVALUEph* it_206;
int i_207;
_Bool _while_condtional28;
_Bool _if_conditional268;
struct CVALUE* __result172__;
struct CVALUE* default_value_208;
struct CVALUE* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_206, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_207, 0, sizeof(int));
memset(&default_value_208, 0, sizeof(struct CVALUE*));
                        # 673 "./neo-c.h"
                        # 669 "./neo-c.h"
                        if(_if_conditional267=position<0,                        _if_conditional267) {
                            # 670 "./neo-c.h"
                            position+=self->len;
                        }
                        # 673 "./neo-c.h"
                        it_206=self->head;
                        # 674 "./neo-c.h"
                        i_207=0;
                        # 681 "./neo-c.h"
                        while(_while_condtional28=it_206!=((void*)0),                        _while_condtional28) {
                            # 679 "./neo-c.h"
                            # 676 "./neo-c.h"
                            if(_if_conditional268=position==i_207,                            _if_conditional268) {
                                # 677 "./neo-c.h"
                                __result172__ = __result_obj__ = it_206->item;
                                return __result172__;
                            }
                            # 679 "./neo-c.h"
                            it_206=it_206->next;
                            # 680 "./neo-c.h"
                            i_207++;
                        }
                        # 683 "./neo-c.h"
                        # 684 "./neo-c.h"
                        memset(&default_value_208,0,sizeof(struct CVALUE*));
                        # 685 "./neo-c.h"
                        __result173__ = __result_obj__ = default_value_208;
                        come_call_finalizer3(default_value_208,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result173__;
                        come_call_finalizer3(default_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional277;
struct list_item$1charph* it_210;
int i_211;
_Bool _while_condtional31;
_Bool _if_conditional278;
char* __result175__;
char* default_value_212;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_210, 0, sizeof(struct list_item$1charph*));
memset(&i_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(char*));
                    # 673 "./neo-c.h"
                    # 669 "./neo-c.h"
                    if(_if_conditional277=position<0,                    _if_conditional277) {
                        # 670 "./neo-c.h"
                        position+=self->len;
                    }
                    # 673 "./neo-c.h"
                    it_210=self->head;
                    # 674 "./neo-c.h"
                    i_211=0;
                    # 681 "./neo-c.h"
                    while(_while_condtional31=it_210!=((void*)0),                    _while_condtional31) {
                        # 679 "./neo-c.h"
                        # 676 "./neo-c.h"
                        if(_if_conditional278=position==i_211,                        _if_conditional278) {
                            # 677 "./neo-c.h"
                            __result175__ = __result_obj__ = it_210->item;
                            return __result175__;
                        }
                        # 679 "./neo-c.h"
                        it_210=it_210->next;
                        # 680 "./neo-c.h"
                        i_211++;
                    }
                    # 683 "./neo-c.h"
                    # 684 "./neo-c.h"
                    memset(&default_value_212,0,sizeof(char*));
                    # 685 "./neo-c.h"
                    __result176__ = __result_obj__ = default_value_212;
                    default_value_212 = come_decrement_ref_count2(default_value_212, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result176__;
                    default_value_212 = come_decrement_ref_count2(default_value_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value260;
void* right_value261;
struct list$1sTypeph* method_generics_types_226;
_Bool _if_conditional290;
_Bool _while_condtional32;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value262;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_227;
char* name_228;
_Bool err_229;
_Bool _if_conditional296;
void* right_value263;
int __exception_result_var_b1;
void* right_value264;
void* right_value265;
struct list$1tuple2$2charphsNodephph* params_230;
_Bool _while_condtional33;
_Bool _if_conditional297;
char* p_231;
int sline_232;
_Bool err_flag_233;
void* right_value266;
char* label_234;
_Bool _if_conditional298;
void* right_value267;
char* __dec_obj101;
_Bool _if_conditional299;
char* __dec_obj102;
_Bool no_comma_235;
void* right_value268;
struct sNode* node_236;
void* right_value269;
struct sNode* __dec_obj103;
void* right_value273;
void* right_value274;
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool guard_break_240;
_Bool _if_conditional304;
void* right_value275;
void* right_value276;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value282;
struct sNode* node_242;
void* right_value283;
struct sNode* __dec_obj113;
struct sNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&method_generics_types_226, 0, sizeof(struct list$1sTypeph*));
right_value262 = (void*)0;
memset(&type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
memset(&type_227, 0, sizeof(struct sType*));
memset(&name_228, 0, sizeof(char*));
memset(&err_229, 0, sizeof(_Bool));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&params_230, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_231, 0, sizeof(char*));
memset(&sline_232, 0, sizeof(int));
memset(&err_flag_233, 0, sizeof(_Bool));
right_value266 = (void*)0;
memset(&label_234, 0, sizeof(char*));
right_value267 = (void*)0;
memset(&no_comma_235, 0, sizeof(_Bool));
right_value268 = (void*)0;
memset(&node_236, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&guard_break_240, 0, sizeof(_Bool));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value282 = (void*)0;
memset(&node_242, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
    # 813 "05call.c"
    method_generics_types_226=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value261=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value260=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 813, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value260,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value261,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    # 845 "05call.c"
    # 815 "05call.c"
    if(_if_conditional290=*info->p==60,    _if_conditional290) {
        # 816 "05call.c"
        info->p++;
        # 817 "05call.c"
        skip_spaces_and_lf(info);
        # 844 "05call.c"
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            # 843 "05call.c"
            # 820 "05call.c"
            if(_if_conditional291=*info->p==0,            _if_conditional291) {
                # 821 "05call.c"
                err_msg(info,"unexpected source end");
                # 822 "05call.c"
                exit(2);
            }
            else {
                # 843 "05call.c"
                # 824 "05call.c"
                if(_if_conditional292=*info->p==62,                _if_conditional292) {
                    # 825 "05call.c"
                    info->p++;
                    # 826 "05call.c"
                    skip_spaces_and_lf(info);
                    # 827 "05call.c"
                    break;
                }
                else {
                    # 843 "05call.c"
                    # 829 "05call.c"
                    if(_if_conditional293=*info->p==44,                    _if_conditional293) {
                        # 830 "05call.c"
                        info->p++;
                        # 831 "05call.c"
                        skip_spaces_and_lf(info);
                    }
                    else {
                        # 834 "05call.c"
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value262=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_227=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_228=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_229=multiple_assign_var5->v3;
                        come_call_finalizer3(right_value262,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        # 841 "05call.c"
                        # 836 "05call.c"
                        if(_if_conditional296=!err_229,                        _if_conditional296) {
                            # 837 "05call.c"
                            err_msg(info,"invalid method generics paramtor type");
                            # 838 "05call.c"
                            exit(2);
                        }
                        # 841 "05call.c"
                        list$1sTypeph_push_back(method_generics_types_226,(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(type_227)))));
                        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_227,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    # 845 "05call.c"
    (come_push_stackframe("05call.c", 845, 16),__exception_result_var_b1=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b1);
    # 847 "05call.c"
    parse_sharp_v5(info);
    # 849 "05call.c"
    params_230=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value265=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value264=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 849, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value264,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value265,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    # 904 "05call.c"
    while(_while_condtional33=(_Bool)1,    _while_condtional33) {
        # 858 "05call.c"
        # 852 "05call.c"
        if(_if_conditional297=*info->p==41,        _if_conditional297) {
            # 853 "05call.c"
            info->p++;
            # 854 "05call.c"
            skip_spaces_and_lf(info);
            # 855 "05call.c"
            break;
        }
        # 858 "05call.c"
        p_231=info->p;
        # 859 "05call.c"
        sline_232=info->sline;
        # 861 "05call.c"
        err_flag_233=(_Bool)0;
        # 862 "05call.c"
        label_234=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(""))));
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 868 "05call.c"
        # 863 "05call.c"
        if(_if_conditional298=xisalpha(*info->p)||*info->p==95,        _if_conditional298) {
            # 864 "05call.c"
            __dec_obj101=label_234;
            label_234=(char*)come_increment_ref_count(((char*)(right_value267=parse_word(info))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 865 "05call.c"
            err_flag_233=(_Bool)1;
        }
        # 879 "05call.c"
        # 868 "05call.c"
        if(_if_conditional299=err_flag_233==(_Bool)1&&*info->p==58,        _if_conditional299) {
            # 869 "05call.c"
            info->p++;
            # 870 "05call.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 873 "05call.c"
            __dec_obj102=label_234;
            label_234=((void*)0);
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 875 "05call.c"
            info->p=p_231;
            # 876 "05call.c"
            info->sline=sline_232;
        }
        # 879 "05call.c"
        no_comma_235=info->no_comma;
        # 880 "05call.c"
        info->no_comma=(_Bool)1;
        # 882 "05call.c"
        node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_v13(info))));
        if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 884 "05call.c"
        __dec_obj103=node_236;
        node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_236),info))));
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value269) { right_value269 = come_decrement_ref_count2(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 886 "05call.c"
        info->no_comma=no_comma_235;
        # 888 "05call.c"
        list$1tuple2$2charphsNodephph_push_back(params_230,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value274=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value273=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 888, "tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_234),(struct sNode*)come_increment_ref_count(node_236))))));
        come_call_finalizer3(right_value273,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value274,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        # 890 "05call.c"
        parse_sharp_v5(info);
        # 902 "05call.c"
        # 892 "05call.c"
        if(_if_conditional302=*info->p==44,        _if_conditional302) {
            # 893 "05call.c"
            info->p++;
            # 894 "05call.c"
            skip_spaces_and_lf(info);
        }
        else {
            # 902 "05call.c"
            # 896 "05call.c"
            if(_if_conditional303=*info->p==41,            _if_conditional303) {
                # 897 "05call.c"
                info->p++;
                # 898 "05call.c"
                skip_spaces_and_lf(info);
                # 900 "05call.c"
                label_234 = come_decrement_ref_count2(label_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_234 = come_decrement_ref_count2(label_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    # 904 "05call.c"
    guard_break_240=(_Bool)0;
    # 911 "05call.c"
    # 905 "05call.c"
    if(_if_conditional304=*info->p==63&&*(info->p+1)==63,    _if_conditional304) {
        # 906 "05call.c"
        info->p+=2;
        # 907 "05call.c"
        skip_spaces_and_lf(info);
        # 908 "05call.c"
        guard_break_240=(_Bool)1;
    }
    # 911 "05call.c"
    parse_sharp_v5(info);
    # 913 "05call.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 913, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value276=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value275=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 913, "sFunCallNode")))),fun_name,params_230,guard_break_240,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_226),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sFunCallNode_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=_inf_value1)));
    come_call_finalizer3(right_value275,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value276,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 915 "05call.c"
    __dec_obj113=node_242;
    node_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_242),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 917 "05call.c"
    __result185__ = __result_obj__ = node_242;
    come_call_finalizer3(method_generics_types_226,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_230,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    come_call_finalizer3(method_generics_types_226,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_230,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_242) { node_242 = come_decrement_ref_count2(node_242, ((struct sNode*)node_242)->finalize, ((struct sNode*)node_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            # 0 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional294=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional294) {
                                # 0 "tuple3$3sTypephcharphboolp_finalize"
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "tuple3$3sTypephcharphboolp_finalize"
                            # 1 "tuple3$3sTypephcharphboolp_finalize"
                            if(_if_conditional295=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional295) {
                                # 1 "tuple3$3sTypephcharphboolp_finalize"
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional300;
void* right_value270;
struct list_item$1tuple2$2charphsNodephph* litem_237;
struct tuple2$2charphsNodeph* __dec_obj104;
_Bool _if_conditional301;
void* right_value271;
struct list_item$1tuple2$2charphsNodephph* litem_238;
struct tuple2$2charphsNodeph* __dec_obj105;
void* right_value272;
struct list_item$1tuple2$2charphsNodephph* litem_239;
struct tuple2$2charphsNodeph* __dec_obj106;
struct list$1tuple2$2charphsNodephph* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
memset(&litem_237, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value271 = (void*)0;
memset(&litem_238, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value272 = (void*)0;
memset(&litem_239, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            # 247 "./neo-c.h"
            # 216 "./neo-c.h"
            if(_if_conditional300=self->len==0,            _if_conditional300) {
                # 217 "./neo-c.h"
                litem_237=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value270=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 217, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(right_value270,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                # 219 "./neo-c.h"
                litem_237->prev=((void*)0);
                # 220 "./neo-c.h"
                litem_237->next=((void*)0);
                # 221 "./neo-c.h"
                __dec_obj104=litem_237->item;
                litem_237->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj104,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                # 223 "./neo-c.h"
                self->tail=litem_237;
                # 224 "./neo-c.h"
                self->head=litem_237;
            }
            else {
                # 247 "./neo-c.h"
                # 226 "./neo-c.h"
                if(_if_conditional301=self->len==1,                _if_conditional301) {
                    # 227 "./neo-c.h"
                    litem_238=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value271=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 227, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value271,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 229 "./neo-c.h"
                    litem_238->prev=self->head;
                    # 230 "./neo-c.h"
                    litem_238->next=((void*)0);
                    # 231 "./neo-c.h"
                    __dec_obj105=litem_238->item;
                    litem_238->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj105,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 233 "./neo-c.h"
                    self->tail=litem_238;
                    # 234 "./neo-c.h"
                    self->head->next=litem_238;
                }
                else {
                    # 237 "./neo-c.h"
                    litem_239=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value272=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 237, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value272,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    # 239 "./neo-c.h"
                    litem_239->prev=self->tail;
                    # 240 "./neo-c.h"
                    litem_239->next=((void*)0);
                    # 241 "./neo-c.h"
                    __dec_obj106=litem_239->item;
                    litem_239->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj106,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    # 243 "./neo-c.h"
                    self->tail->next=litem_239;
                    # 244 "./neo-c.h"
                    self->tail=litem_239;
                }
            }
            # 247 "./neo-c.h"
            self->len++;
            # 249 "./neo-c.h"
            __result181__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result181__;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj107;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
            # 1738 "./neo-c.h"
            __dec_obj107=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            # 1739 "./neo-c.h"
            __dec_obj108=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
            # 1741 "./neo-c.h"
            __result182__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result182__;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
_Bool _if_conditional308;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "sFunCallNode_finalize"
        # 0 "sFunCallNode_finalize"
        if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional305) {
            # 0 "sFunCallNode_finalize"
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 2 "sFunCallNode_finalize"
        # 1 "sFunCallNode_finalize"
        if(_if_conditional306=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional306) {
            # 1 "sFunCallNode_finalize"
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 3 "sFunCallNode_finalize"
        # 2 "sFunCallNode_finalize"
        if(_if_conditional307=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional307) {
            # 2 "sFunCallNode_finalize"
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        # 4 "sFunCallNode_finalize"
        # 3 "sFunCallNode_finalize"
        if(_if_conditional308=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional308) {
            # 3 "sFunCallNode_finalize"
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional309;
struct sFunCallNode* __result183__;
void* right_value277;
struct sFunCallNode* result_241;
_Bool _if_conditional310;
_Bool _if_conditional311;
void* right_value278;
char* __dec_obj109;
_Bool _if_conditional312;
void* right_value279;
char* __dec_obj110;
_Bool _if_conditional313;
void* right_value280;
struct list$1tuple2$2charphsNodephph* __dec_obj111;
_Bool _if_conditional314;
_Bool _if_conditional315;
void* right_value281;
struct list$1sTypeph* __dec_obj112;
struct sFunCallNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
memset(&result_241, 0, sizeof(struct sFunCallNode*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
        # 3 "sFunCallNode_clone"
        # 2 "sFunCallNode_clone"
        if(_if_conditional309=self==(void*)0,        _if_conditional309) {
            # 2 "sFunCallNode_clone"
            __result183__ = __result_obj__ = (void*)0;
            return __result183__;
        }
        # 3 "sFunCallNode_clone"
        result_241=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value277=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer3(right_value277,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        # 5 "sFunCallNode_clone"
        # 4 "sFunCallNode_clone"
        if(_if_conditional310=self!=((void*)0),        _if_conditional310) {
            # 4 "sFunCallNode_clone"
            result_241->sline=self->sline;
        }
        # 6 "sFunCallNode_clone"
        # 5 "sFunCallNode_clone"
        if(_if_conditional311=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional311) {
            # 5 "sFunCallNode_clone"
            __dec_obj109=result_241->sname;
            result_241->sname=(char*)come_increment_ref_count(((char*)(right_value278=string_clone(self->sname))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 7 "sFunCallNode_clone"
        # 6 "sFunCallNode_clone"
        if(_if_conditional312=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional312) {
            # 6 "sFunCallNode_clone"
            __dec_obj110=result_241->fun_name;
            result_241->fun_name=(char*)come_increment_ref_count(((char*)(right_value279=string_clone(self->fun_name))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 8 "sFunCallNode_clone"
        # 7 "sFunCallNode_clone"
        if(_if_conditional313=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional313) {
            # 7 "sFunCallNode_clone"
            __dec_obj111=result_241->params;
            result_241->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value280=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj111,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value280,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sFunCallNode_clone"
        # 8 "sFunCallNode_clone"
        if(_if_conditional314=self!=((void*)0),        _if_conditional314) {
            # 8 "sFunCallNode_clone"
            result_241->guard_break=self->guard_break;
        }
        # 10 "sFunCallNode_clone"
        # 9 "sFunCallNode_clone"
        if(_if_conditional315=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional315) {
            # 9 "sFunCallNode_clone"
            __dec_obj112=result_241->method_generics_types;
            result_241->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value281=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj112,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value281,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        # 10 "sFunCallNode_clone"
        __result184__ = __result_obj__ = result_241;
        come_call_finalizer3(result_241,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result184__;
        come_call_finalizer3(result_241,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    # 922 "05call.c"
    skip_spaces_and_lf(info);
    # 923 "05call.c"
    parse_sharp_v5(info);
    # 925 "05call.c"
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    # 926 "05call.c"
    stackframe();
    # 927 "05call.c"
    exit(3);
    # 928 "05call.c"
    __result186__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result186__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value284;
void* right_value285;
void* right_value286;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* right_value291;
struct sNode* __result189__;
char* head_244;
void* right_value292;
struct sNode* value_245;
char* tail_246;
void* right_value293;
struct sNode* __dec_obj117;
void* right_value294;
void* right_value295;
void* right_value296;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* right_value301;
struct sNode* __result192__;
_Bool _if_conditional334;
char* head_249;
int head_sline_250;
void* right_value302;
char* buf_251;
_Bool is_type_name__252;
_Bool define_function_pointer_flag_253;
_Bool _if_conditional335;
void* right_value303;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool lambda_flag_254;
_Bool _if_conditional338;
void* right_value304;
void* right_value305;
char* word2_255;
_Bool _if_conditional339;
_Bool fun_name_with_type_name_256;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value306;
char* word2_257;
_Bool _while_condtional34;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool call_method_generics_fun_call_258;
_Bool _if_conditional344;
void* right_value307;
char* __dec_obj121;
_Bool _if_conditional353;
int nest_262;
_Bool _while_condtional36;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value308;
char* __dec_obj122;
_Bool _if_conditional359;
void* right_value309;
struct sNode* __result197__;
_Bool _if_conditional360;
void* right_value310;
struct sNode* node_263;
struct sNode* __result198__;
_Bool _if_conditional361;
void* right_value311;
void* right_value312;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* right_value317;
struct sNode* __result201__;
_Bool _if_conditional370;
void* right_value318;
void* right_value319;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* right_value324;
struct sNode* __result204__;
_Bool _if_conditional379;
void* right_value325;
void* right_value326;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* right_value331;
struct sNode* __result207__;
_Bool _if_conditional388;
void* right_value332;
void* right_value333;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* right_value338;
struct sNode* __result210__;
_Bool _if_conditional397;
void* right_value339;
void* right_value340;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* right_value345;
struct sNode* __result213__;
_Bool _if_conditional406;
void* right_value346;
void* right_value347;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* right_value352;
struct sNode* __result216__;
_Bool _if_conditional415;
void* right_value353;
struct sNode* node_270;
struct sNode* __result217__;
_Bool _if_conditional416;
void* right_value354;
void* right_value355;
struct buffer* fun_name_271;
void* right_value356;
void* right_value357;
struct sType* type_275;
_Bool _if_conditional421;
void* right_value358;
struct sClass* klass_281;
_Bool _if_conditional433;
void* right_value359;
void* right_value360;
struct sType* __dec_obj141;
_Bool _while_condtional40;
_Bool _if_conditional434;
int __exception_result_var_b2;
int __exception_result_var_b3;
void* right_value361;
char* buf2_282;
void* right_value362;
void* right_value363;
struct sNode* node_283;
struct sNode* __result226__;
_Bool _if_conditional435;
void* right_value364;
void* right_value365;
struct buffer* fun_name_284;
void* right_value366;
char* buf2_285;
void* right_value367;
void* right_value368;
struct sNode* node_286;
struct sNode* __result227__;
_Bool _if_conditional436;
void* right_value369;
struct sNode* node_287;
struct sNode* __result228__;
_Bool _if_conditional437;
void* right_value370;
struct sNode* node_288;
struct sNode* __result229__;
void* right_value371;
struct sNode* node_289;
struct sNode* __result230__;
void* right_value372;
struct sNode* node_290;
struct sNode* __result231__;
struct sNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value291 = (void*)0;
memset(&head_244, 0, sizeof(char*));
right_value292 = (void*)0;
memset(&value_245, 0, sizeof(struct sNode*));
memset(&tail_246, 0, sizeof(char*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value301 = (void*)0;
memset(&head_249, 0, sizeof(char*));
memset(&head_sline_250, 0, sizeof(int));
right_value302 = (void*)0;
memset(&buf_251, 0, sizeof(char*));
memset(&is_type_name__252, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_253, 0, sizeof(_Bool));
right_value303 = (void*)0;
memset(&lambda_flag_254, 0, sizeof(_Bool));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&word2_255, 0, sizeof(char*));
memset(&fun_name_with_type_name_256, 0, sizeof(_Bool));
right_value306 = (void*)0;
memset(&word2_257, 0, sizeof(char*));
memset(&call_method_generics_fun_call_258, 0, sizeof(_Bool));
right_value307 = (void*)0;
memset(&nest_262, 0, sizeof(int));
right_value308 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&node_263, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&node_270, 0, sizeof(struct sNode*));
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&fun_name_271, 0, sizeof(struct buffer*));
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&type_275, 0, sizeof(struct sType*));
right_value358 = (void*)0;
memset(&klass_281, 0, sizeof(struct sClass*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&buf2_282, 0, sizeof(char*));
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&fun_name_284, 0, sizeof(struct buffer*));
right_value366 = (void*)0;
memset(&buf2_285, 0, sizeof(char*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&node_286, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
memset(&node_287, 0, sizeof(struct sNode*));
right_value370 = (void*)0;
memset(&node_288, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
memset(&node_289, 0, sizeof(struct sNode*));
right_value372 = (void*)0;
memset(&node_290, 0, sizeof(struct sNode*));
    # 933 "05call.c"
    skip_spaces_and_lf(info);
    # 934 "05call.c"
    parse_sharp_v5(info);
    # 1195 "05call.c"
    # 936 "05call.c"
    if(_if_conditional316=parsecmp("return",info),    _if_conditional316) {
        # 937 "05call.c"
        info->p+=strlen("return");
        # 938 "05call.c"
        skip_spaces_and_lf(info);
        # 955 "05call.c"
        # 940 "05call.c"
        if(_if_conditional317=*info->p==59,        _if_conditional317) {
            # 941 "05call.c"
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 941, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sReturnNode*)(right_value286=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value284=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 941, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("0")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sReturnNode_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result189__ = __result_obj__ = ((struct sNode*)(right_value291=_inf_value2));
            come_call_finalizer3(right_value284,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value286,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value291) { right_value291 = come_decrement_ref_count2(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result189__;
        }
        else {
            # 944 "05call.c"
            head_244=info->p;
            # 945 "05call.c"
            value_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=expression_v13(info))));
            if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 946 "05call.c"
            tail_246=info->p;
            # 947 "05call.c"
            __dec_obj117=value_245;
            value_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=post_position_operator_v99((struct sNode*)come_increment_ref_count(value_245),info))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 949 "05call.c"
            char buf_247[tail_246-head_244+1];
            memset(&buf_247, 0, sizeof(char)            *(tail_246-head_244+1)            );
            # 950 "05call.c"
            memcpy(buf_247,head_244,tail_246-head_244);
            # 951 "05call.c"
            buf_247[tail_246-head_244]=0;
            # 953 "05call.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 953, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sReturnNode*)(right_value296=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value294=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 953, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_245),(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(buf_247)))),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sReturnNode_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result192__ = __result_obj__ = ((struct sNode*)(right_value301=_inf_value3));
            if(value_245) { value_245 = come_decrement_ref_count2(value_245, ((struct sNode*)value_245)->finalize, ((struct sNode*)value_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value294,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value296,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value301) { right_value301 = come_decrement_ref_count2(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result192__;
            if(value_245) { value_245 = come_decrement_ref_count2(value_245, ((struct sNode*)value_245)->finalize, ((struct sNode*)value_245)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        # 1195 "05call.c"
        # 956 "05call.c"
        if(_if_conditional334=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39)),        _if_conditional334) {
            # 957 "05call.c"
            head_249=info->p;
            # 958 "05call.c"
            head_sline_250=info->sline;
            # 960 "05call.c"
            buf_251=(char*)come_increment_ref_count(((char*)(right_value302=backtrace_parse_word(info))));
            right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 962 "05call.c"
            is_type_name__252=is_type_name(buf_251,info);
            # 965 "05call.c"
            define_function_pointer_flag_253=(_Bool)0;
            # 987 "05call.c"
            # 966 "05call.c"
            if(_if_conditional335=string_operator_not_equals(buf_251,"if")&&string_operator_not_equals(buf_251,"while")&&string_operator_not_equals(buf_251,"for")&&string_operator_not_equals(buf_251,"switch")&&string_operator_not_equals(buf_251,"return")&&string_operator_not_equals(buf_251,"sizeof")&&string_operator_not_equals(buf_251,"isheap")&&string_operator_not_equals(buf_251,"guard")&&string_operator_not_equals(buf_251,"ispointer")&&string_operator_not_equals(buf_251,"__typeof__")&&string_operator_not_equals(buf_251,"dynamic_typeof")&&string_operator_not_equals(buf_251,"typeof")&&string_operator_not_equals(buf_251,"gc_inc")&&string_operator_not_equals(buf_251,"gc_dec")&&string_operator_not_equals(buf_251,"case")&&string_operator_not_equals(buf_251,"_Alignof")&&string_operator_not_equals(buf_251,"_Alignas")&&string_operator_not_equals(buf_251,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,            _if_conditional335) {
                # 968 "05call.c"
                ((struct tuple3$3sTypephcharphbool*)(right_value303=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value303,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 982 "05call.c"
                # 970 "05call.c"
                if(_if_conditional336=*info->p==40,                _if_conditional336) {
                    # 971 "05call.c"
                    info->p++;
                    # 972 "05call.c"
                    skip_spaces_and_lf(info);
                    # 980 "05call.c"
                    # 974 "05call.c"
                    if(_if_conditional337=*info->p==42,                    _if_conditional337) {
                        # 975 "05call.c"
                        info->p++;
                        # 976 "05call.c"
                        skip_spaces_and_lf(info);
                        # 978 "05call.c"
                        define_function_pointer_flag_253=(_Bool)1;
                    }
                }
                # 982 "05call.c"
                info->p=head_249;
                # 983 "05call.c"
                info->sline=head_sline_250;
            }
            # 987 "05call.c"
            lambda_flag_254=(_Bool)0;
            # 1006 "05call.c"
            # 988 "05call.c"
            if(_if_conditional338=string_operator_not_equals(buf_251,"if")&&string_operator_not_equals(buf_251,"while")&&string_operator_not_equals(buf_251,"for")&&string_operator_not_equals(buf_251,"switch")&&string_operator_not_equals(buf_251,"return")&&string_operator_not_equals(buf_251,"sizeof")&&string_operator_not_equals(buf_251,"_Alignof")&&string_operator_not_equals(buf_251,"__alignof__")&&string_operator_not_equals(buf_251,"_Alignas")&&string_operator_not_equals(buf_251,"isheap")&&string_operator_not_equals(buf_251,"guard")&&string_operator_not_equals(buf_251,"ispointer")&&string_operator_not_equals(buf_251,"__typeof__")&&string_operator_not_equals(buf_251,"dynamic_typeof")&&string_operator_not_equals(buf_251,"typeof")&&string_operator_not_equals(buf_251,"gc_inc")&&string_operator_not_equals(buf_251,"gc_dec")&&string_operator_not_equals(buf_251,"case")&&is_type_name__252,            _if_conditional338) {
                # 990 "05call.c"
                info->p=head_249;
                # 991 "05call.c"
                info->sline=head_sline_250;
                # 993 "05call.c"
                ((struct tuple3$3sTypephcharphbool*)(right_value304=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value304,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                # 995 "05call.c"
                word2_255=(char*)come_increment_ref_count(((char*)(right_value305=backtrace_parse_word(info))));
                right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 1001 "05call.c"
                # 997 "05call.c"
                if(_if_conditional339=string_operator_equals(word2_255,"lambda"),                _if_conditional339) {
                    # 998 "05call.c"
                    lambda_flag_254=(_Bool)1;
                }
                # 1001 "05call.c"
                info->p=head_249;
                # 1002 "05call.c"
                info->sline=head_sline_250;
                word2_255 = come_decrement_ref_count2(word2_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 1006 "05call.c"
            fun_name_with_type_name_256=(_Bool)0;
            # 1036 "05call.c"
            # 1007 "05call.c"
            if(_if_conditional340=string_operator_not_equals(buf_251,"if")&&string_operator_not_equals(buf_251,"while")&&string_operator_not_equals(buf_251,"for")&&string_operator_not_equals(buf_251,"switch")&&string_operator_not_equals(buf_251,"return")&&string_operator_not_equals(buf_251,"sizeof")&&string_operator_not_equals(buf_251,"_Alignof")&&string_operator_not_equals(buf_251,"__alignof__")&&string_operator_not_equals(buf_251,"_Alignas")&&string_operator_not_equals(buf_251,"isheap")&&string_operator_not_equals(buf_251,"guard")&&string_operator_not_equals(buf_251,"ispointer")&&string_operator_not_equals(buf_251,"dynamic_typeof")&&string_operator_not_equals(buf_251,"__typeof__")&&string_operator_not_equals(buf_251,"typeof")&&string_operator_not_equals(buf_251,"gc_inc")&&string_operator_not_equals(buf_251,"gc_dec")&&string_operator_not_equals(buf_251,"case"),            _if_conditional340) {
                # 1009 "05call.c"
                info->p=head_249;
                # 1010 "05call.c"
                info->sline=head_sline_250;
                # 1012 "05call.c"
                info->no_output_err=(_Bool)1;
                # 1017 "05call.c"
                # 1014 "05call.c"
                if(_if_conditional341=xisalpha(*info->p)||*info->p==95,                _if_conditional341) {
                    # 1015 "05call.c"
                    word2_257=(char*)come_increment_ref_count(((char*)(right_value306=parse_word(info))));
                    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    word2_257 = come_decrement_ref_count2(word2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 1021 "05call.c"
                while(_while_condtional34=*info->p==42,                _while_condtional34) {
                    # 1018 "05call.c"
                    info->p++;
                    # 1019 "05call.c"
                    skip_spaces_and_lf(info);
                }
                # 1029 "05call.c"
                # 1021 "05call.c"
                if(_if_conditional342=*info->p==58&&*(info->p+1)==58,                _if_conditional342) {
                    # 1022 "05call.c"
                    info->p+=2;
                    # 1023 "05call.c"
                    skip_spaces_and_lf(info);
                    # 1027 "05call.c"
                    # 1024 "05call.c"
                    if(_if_conditional343=xisalpha(*info->p)||*info->p==95,                    _if_conditional343) {
                        # 1025 "05call.c"
                        fun_name_with_type_name_256=(_Bool)1;
                    }
                }
                # 1029 "05call.c"
                info->no_output_err=(_Bool)0;
                # 1031 "05call.c"
                info->p=head_249;
                # 1032 "05call.c"
                info->sline=head_sline_250;
            }
            # 1036 "05call.c"
            call_method_generics_fun_call_258=(_Bool)0;
            # 1077 "05call.c"
            {
                # 1038 "05call.c"
                info->p=head_249;
                # 1039 "05call.c"
                info->sline=head_sline_250;
                # 1045 "05call.c"
                # 1041 "05call.c"
                if(_if_conditional344=xisalpha(*info->p)||*info->p==95,                _if_conditional344) {
                    # 1042 "05call.c"
                    __dec_obj121=buf_251;
                    buf_251=(char*)come_increment_ref_count(((char*)(right_value307=parse_word(info))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 1073 "05call.c"
                # 1045 "05call.c"
                if(_if_conditional353=!is_type_name(buf_251,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_251)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_251)==((void*)0)&&*info->p==60,                _if_conditional353) {
                    # 1046 "05call.c"
                    nest_262=0;
                    # 1068 "05call.c"
                    while(_while_condtional36=*info->p,                    _while_condtional36) {
                        # 1066 "05call.c"
                        # 1048 "05call.c"
                        if(_if_conditional354=*info->p==60,                        _if_conditional354) {
                            # 1049 "05call.c"
                            info->p++;
                            # 1050 "05call.c"
                            nest_262++;
                        }
                        else {
                            # 1066 "05call.c"
                            # 1052 "05call.c"
                            if(_if_conditional355=*info->p==62,                            _if_conditional355) {
                                # 1053 "05call.c"
                                info->p++;
                                # 1054 "05call.c"
                                nest_262--;
                                # 1059 "05call.c"
                                # 1056 "05call.c"
                                if(_if_conditional356=nest_262==0,                                _if_conditional356) {
                                    # 1057 "05call.c"
                                    break;
                                }
                            }
                            else {
                                # 1066 "05call.c"
                                # 1060 "05call.c"
                                if(_if_conditional357=*info->p==10||*info->p==59,                                _if_conditional357) {
                                    # 1061 "05call.c"
                                    break;
                                }
                                else {
                                    # 1064 "05call.c"
                                    info->p++;
                                }
                            }
                        }
                    }
                    # 1071 "05call.c"
                    # 1068 "05call.c"
                    if(_if_conditional358=*info->p==40,                    _if_conditional358) {
                        # 1069 "05call.c"
                        call_method_generics_fun_call_258=(_Bool)1;
                    }
                }
                # 1073 "05call.c"
                info->p=head_249;
                # 1074 "05call.c"
                info->sline=head_sline_250;
            }
            # 1077 "05call.c"
            __dec_obj122=buf_251;
            buf_251=(char*)come_increment_ref_count(((char*)(right_value308=parse_word(info))));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1188 "05call.c"
            # 1079 "05call.c"
            if(lambda_flag_254) {
                # 1080 "05call.c"
                info->p=head_249;
                # 1081 "05call.c"
                info->sline=head_sline_250;
                # 1083 "05call.c"
                __result197__ = __result_obj__ = ((struct sNode*)(right_value309=parse_function(info)));
                buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result197__;
            }
            else {
                # 1188 "05call.c"
                # 1085 "05call.c"
                if(_if_conditional360=(string_operator_equals(buf_251,"string")||string_operator_equals(buf_251,"wstring"))&&*info->p==40,                _if_conditional360) {
                    # 1086 "05call.c"
                    node_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value310=parse_function_call(buf_251,info))));
                    if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 1088 "05call.c"
                    __result198__ = __result_obj__ = node_263;
                    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result198__;
                    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 1188 "05call.c"
                    # 1090 "05call.c"
                    if(_if_conditional361=string_operator_equals(buf_251,"__func__"),                    _if_conditional361) {
                        # 1091 "05call.c"
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1091, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sFuncNode*)(right_value312=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value311=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1091, "sFuncNode")))),info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sFuncNode_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result201__ = __result_obj__ = ((struct sNode*)(right_value317=_inf_value4));
                        buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value311,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value312,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result201__;
                    }
                    else {
                        # 1188 "05call.c"
                        # 1093 "05call.c"
                        if(_if_conditional370=string_operator_equals(buf_251,"__line__"),                        _if_conditional370) {
                            # 1094 "05call.c"
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1094, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sLineNode*)(right_value319=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value318=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1094, "sLineNode")))),info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sLineNode_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result204__ = __result_obj__ = ((struct sNode*)(right_value324=_inf_value5));
                            buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value318,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value319,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result204__;
                        }
                        else {
                            # 1188 "05call.c"
                            # 1096 "05call.c"
                            if(_if_conditional379=string_operator_equals(buf_251,"__sname__"),                            _if_conditional379) {
                                # 1097 "05call.c"
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1097, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sSNameNode*)(right_value326=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value325=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1097, "sSNameNode")))),info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sSNameNode_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result207__ = __result_obj__ = ((struct sNode*)(right_value331=_inf_value6));
                                buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value325,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value326,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result207__;
                            }
                            else {
                                # 1188 "05call.c"
                                # 1099 "05call.c"
                                if(_if_conditional388=string_operator_equals(buf_251,"__caller_func__"),                                _if_conditional388) {
                                    # 1100 "05call.c"
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1100, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sCallerFuncNode*)(right_value333=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value332=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1100, "sCallerFuncNode")))),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sCallerFuncNode_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result210__ = __result_obj__ = ((struct sNode*)(right_value338=_inf_value7));
                                    buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value332,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value333,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result210__;
                                }
                                else {
                                    # 1188 "05call.c"
                                    # 1102 "05call.c"
                                    if(_if_conditional397=string_operator_equals(buf_251,"__caller_line__"),                                    _if_conditional397) {
                                        # 1103 "05call.c"
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1103, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count(((struct sCallerLineNode*)(right_value340=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value339=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1103, "sCallerLineNode")))),info))));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sCallerLineNode_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result213__ = __result_obj__ = ((struct sNode*)(right_value345=_inf_value8));
                                        buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value339,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value340,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result213__;
                                    }
                                    else {
                                        # 1188 "05call.c"
                                        # 1105 "05call.c"
                                        if(_if_conditional406=string_operator_equals(buf_251,"__caller_sname__"),                                        _if_conditional406) {
                                            # 1106 "05call.c"
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1106, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sCallerSNameNode*)(right_value347=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value346=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1106, "sCallerSNameNode")))),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sCallerSNameNode_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result216__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value9));
                                            buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value346,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value347,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result216__;
                                        }
                                        else {
                                            # 1188 "05call.c"
                                            # 1108 "05call.c"
                                            if(_if_conditional415=(string_operator_equals(buf_251,"sizeof")||string_operator_equals(buf_251,"_Alignof")||string_operator_equals(buf_251,"_Alignas")||string_operator_equals(buf_251,"__alignof__"))&&*info->p==40,                                            _if_conditional415) {
                                                # 1111 "05call.c"
                                                node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=string_node_v21(buf_251,head_249,head_sline_250,info))));
                                                if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                # 1111 "05call.c"
                                                __result217__ = __result_obj__ = node_270;
                                                if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                return __result217__;
                                                if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                # 1188 "05call.c"
                                                # 1113 "05call.c"
                                                if(fun_name_with_type_name_256) {
                                                    # 1114 "05call.c"
                                                    fun_name_271=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value355=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value354=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1114, "buffer"))))))));
                                                    come_call_finalizer3(right_value354,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value355,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 1116 "05call.c"
                                                    buffer_append_str(fun_name_271,buf_251);
                                                    # 1118 "05call.c"
                                                    type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value357=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value356=buffer_to_string(fun_name_271))))))));
                                                    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value357,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                    # 1132 "05call.c"
                                                    # 1120 "05call.c"
                                                    if(_if_conditional421=type_275==((void*)0),                                                    _if_conditional421) {
                                                        # 1121 "05call.c"
                                                        klass_281=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value358=buffer_to_string(fun_name_271))));
                                                        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1130 "05call.c"
                                                        # 1123 "05call.c"
                                                        if(klass_281) {
                                                            # 1124 "05call.c"
                                                            __dec_obj141=type_275;
                                                            type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value360=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value359=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1124, "sType")))),buf_251,(_Bool)0,info))));
                                                            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value359,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value360,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            # 1127 "05call.c"
                                                            err_msg(info,"null type(%s)",buf_251);
                                                            # 1128 "05call.c"
                                                            exit(2);
                                                        }
                                                    }
                                                    # 1141 "05call.c"
                                                    while(_while_condtional40=*info->p==42,                                                    _while_condtional40) {
                                                        # 1133 "05call.c"
                                                        info->p++;
                                                        # 1134 "05call.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1139 "05call.c"
                                                        # 1136 "05call.c"
                                                        if(_if_conditional434=type_275->mClass->mStruct==(_Bool)0,                                                        _if_conditional434) {
                                                            # 1137 "05call.c"
                                                            buffer_append_str(fun_name_271,"p");
                                                        }
                                                    }
                                                    # 1141 "05call.c"
                                                    (come_push_stackframe("05call.c", 1141, 17),__exception_result_var_b2=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b2);
                                                    # 1142 "05call.c"
                                                    (come_push_stackframe("05call.c", 1142, 18),__exception_result_var_b3=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b3);
                                                    # 1144 "05call.c"
                                                    buffer_append_str(fun_name_271,"_");
                                                    # 1146 "05call.c"
                                                    buf2_282=(char*)come_increment_ref_count(((char*)(right_value361=parse_word(info))));
                                                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    # 1148 "05call.c"
                                                    buffer_append_str(fun_name_271,buf2_282);
                                                    # 1150 "05call.c"
                                                    node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=parse_function_call(((char*)(right_value362=buffer_to_string(fun_name_271))),info))));
                                                    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    # 1152 "05call.c"
                                                    __result226__ = __result_obj__ = node_283;
                                                    come_call_finalizer3(fun_name_271,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_282 = come_decrement_ref_count2(buf2_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result226__;
                                                    come_call_finalizer3(fun_name_271,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_282 = come_decrement_ref_count2(buf2_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    # 1188 "05call.c"
                                                    # 1154 "05call.c"
                                                    if(_if_conditional435=*info->p==58&&*(info->p+1)==58,                                                    _if_conditional435) {
                                                        # 1155 "05call.c"
                                                        info->p+=2;
                                                        # 1156 "05call.c"
                                                        skip_spaces_and_lf(info);
                                                        # 1158 "05call.c"
                                                        fun_name_284=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value364=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1158, "buffer"))))))));
                                                        come_call_finalizer3(right_value364,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value365,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        # 1160 "05call.c"
                                                        buffer_append_str(fun_name_284,buf_251);
                                                        # 1162 "05call.c"
                                                        buffer_append_str(fun_name_284,"_");
                                                        # 1164 "05call.c"
                                                        buf2_285=(char*)come_increment_ref_count(((char*)(right_value366=parse_word(info))));
                                                        right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        # 1166 "05call.c"
                                                        buffer_append_str(fun_name_284,buf2_285);
                                                        # 1168 "05call.c"
                                                        node_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=parse_function_call(((char*)(right_value367=buffer_to_string(fun_name_284))),info))));
                                                        right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        # 1170 "05call.c"
                                                        __result227__ = __result_obj__ = node_286;
                                                        come_call_finalizer3(fun_name_284,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_285 = come_decrement_ref_count2(buf2_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result227__;
                                                        come_call_finalizer3(fun_name_284,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_285 = come_decrement_ref_count2(buf2_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        # 1188 "05call.c"
                                                        # 1172 "05call.c"
                                                        if(call_method_generics_fun_call_258) {
                                                            # 1173 "05call.c"
                                                            node_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=parse_function_call(buf_251,info))));
                                                            if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            # 1175 "05call.c"
                                                            __result228__ = __result_obj__ = node_287;
                                                            if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result228__;
                                                            if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            # 1188 "05call.c"
                                                            # 1177 "05call.c"
                                                            if(_if_conditional437=string_operator_not_equals(buf_251,"if")&&string_operator_not_equals(buf_251,"while")&&string_operator_not_equals(buf_251,"for")&&string_operator_not_equals(buf_251,"switch")&&string_operator_not_equals(buf_251,"return")&&string_operator_not_equals(buf_251,"sizeof")&&string_operator_not_equals(buf_251,"isheap")&&string_operator_not_equals(buf_251,"ispointer")&&string_operator_not_equals(buf_251,"guard")&&string_operator_not_equals(buf_251,"__typeof__")&&string_operator_not_equals(buf_251,"dynamic_typeof")&&string_operator_not_equals(buf_251,"typeof")&&string_operator_not_equals(buf_251,"gc_inc")&&string_operator_not_equals(buf_251,"gc_dec")&&string_operator_not_equals(buf_251,"case")&&string_operator_not_equals(buf_251,"_Alignof")&&string_operator_not_equals(buf_251,"__alignof__")&&string_operator_not_equals(buf_251,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__252),                                                            _if_conditional437) {
                                                                # 1179 "05call.c"
                                                                node_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=parse_function_call(buf_251,info))));
                                                                if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1181 "05call.c"
                                                                __result229__ = __result_obj__ = node_288;
                                                                if(node_288) { node_288 = come_decrement_ref_count2(node_288, ((struct sNode*)node_288)->finalize, ((struct sNode*)node_288)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result229__;
                                                                if(node_288) { node_288 = come_decrement_ref_count2(node_288, ((struct sNode*)node_288)->finalize, ((struct sNode*)node_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                # 1184 "05call.c"
                                                                node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=string_node_v21(buf_251,head_249,head_sline_250,info))));
                                                                if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                # 1186 "05call.c"
                                                                __result230__ = __result_obj__ = node_289;
                                                                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result230__;
                                                                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            buf_251 = come_decrement_ref_count2(buf_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            # 1190 "05call.c"
            node_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=expression_node_v96(info))));
            if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1192 "05call.c"
            __result231__ = __result_obj__ = node_290;
            if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result231__;
            if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    # 1195 "05call.c"
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    # 1196 "05call.c"
    exit(2);
    # 1198 "05call.c"
    __result232__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result232__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sReturnNode_finalize"
                # 0 "sReturnNode_finalize"
                if(_if_conditional326=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional326) {
                    # 0 "sReturnNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                # 2 "sReturnNode_finalize"
                # 1 "sReturnNode_finalize"
                if(_if_conditional327=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional327) {
                    # 1 "sReturnNode_finalize"
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sReturnNode_finalize"
                # 2 "sReturnNode_finalize"
                if(_if_conditional328=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional328) {
                    # 2 "sReturnNode_finalize"
                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional329;
struct sReturnNode* __result190__;
void* right_value297;
struct sReturnNode* result_248;
_Bool _if_conditional330;
_Bool _if_conditional331;
void* right_value298;
char* __dec_obj118;
_Bool _if_conditional332;
void* right_value299;
struct sNode* __dec_obj119;
_Bool _if_conditional333;
void* right_value300;
char* __dec_obj120;
struct sReturnNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&result_248, 0, sizeof(struct sReturnNode*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
                # 3 "sReturnNode_clone"
                # 2 "sReturnNode_clone"
                if(_if_conditional329=self==(void*)0,                _if_conditional329) {
                    # 2 "sReturnNode_clone"
                    __result190__ = __result_obj__ = (void*)0;
                    return __result190__;
                }
                # 3 "sReturnNode_clone"
                result_248=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value297=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                come_call_finalizer3(right_value297,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
                # 5 "sReturnNode_clone"
                # 4 "sReturnNode_clone"
                if(_if_conditional330=self!=((void*)0),                _if_conditional330) {
                    # 4 "sReturnNode_clone"
                    result_248->sline=self->sline;
                }
                # 6 "sReturnNode_clone"
                # 5 "sReturnNode_clone"
                if(_if_conditional331=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional331) {
                    # 5 "sReturnNode_clone"
                    __dec_obj118=result_248->sname;
                    result_248->sname=(char*)come_increment_ref_count(((char*)(right_value298=string_clone(self->sname))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 7 "sReturnNode_clone"
                # 6 "sReturnNode_clone"
                if(_if_conditional332=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional332) {
                    # 6 "sReturnNode_clone"
                    __dec_obj119=result_248->value;
                    result_248->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(self->value))));
                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sReturnNode_clone"
                # 7 "sReturnNode_clone"
                if(_if_conditional333=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional333) {
                    # 7 "sReturnNode_clone"
                    __dec_obj120=result_248->value_source;
                    result_248->value_source=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(self->value_source))));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sReturnNode_clone"
                __result191__ = __result_obj__ = result_248;
                come_call_finalizer3(result_248,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result191__;
                come_call_finalizer3(result_248,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_259;
unsigned int hash_260;
unsigned int it_261;
_Bool _while_condtional35;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct sVar* __result193__;
_Bool _if_conditional351;
_Bool _if_conditional352;
struct sVar* __result194__;
struct sVar* __result195__;
struct sVar* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_259, 0, sizeof(struct sVar*));
memset(&hash_260, 0, sizeof(unsigned int));
memset(&it_261, 0, sizeof(unsigned int));
                    # 1519 "./neo-c.h"
                    # 1520 "./neo-c.h"
                    memset(&default_value_259,0,sizeof(struct sVar*));
                    # 1522 "./neo-c.h"
                    hash_260=string_get_hash_key(((char*)key))%self->size;
                    # 1523 "./neo-c.h"
                    it_261=hash_260;
                    # 1547 "./neo-c.h"
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        # 1545 "./neo-c.h"
                        # 1526 "./neo-c.h"
                        if(_if_conditional345=self->item_existance[it_261],                        _if_conditional345) {
                            # 1533 "./neo-c.h"
                            # 1528 "./neo-c.h"
                            if(_if_conditional346=string_equals(self->keys[it_261],key),                            _if_conditional346) {
                                # 1530 "./neo-c.h"
                                __result193__ = __result_obj__ = self->items[it_261];
                                come_call_finalizer3(default_value_259,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result193__;
                            }
                            # 1533 "./neo-c.h"
                            it_261++;
                            # 1541 "./neo-c.h"
                            # 1535 "./neo-c.h"
                            if(_if_conditional351=it_261>=self->size,                            _if_conditional351) {
                                # 1536 "./neo-c.h"
                                it_261=0;
                            }
                            else {
                                # 1541 "./neo-c.h"
                                # 1538 "./neo-c.h"
                                if(_if_conditional352=it_261==hash_260,                                _if_conditional352) {
                                    # 1539 "./neo-c.h"
                                    __result194__ = __result_obj__ = default_value_259;
                                    come_call_finalizer3(default_value_259,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result194__;
                                }
                            }
                        }
                        else {
                            # 1543 "./neo-c.h"
                            __result195__ = __result_obj__ = default_value_259;
                            come_call_finalizer3(default_value_259,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result195__;
                        }
                    }
                    # 1547 "./neo-c.h"
                    __result196__ = __result_obj__ = default_value_259;
                    come_call_finalizer3(default_value_259,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result196__;
                    come_call_finalizer3(default_value_259,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sVar_finalize"
                                    # 0 "sVar_finalize"
                                    if(_if_conditional347=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional347) {
                                        # 0 "sVar_finalize"
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sVar_finalize"
                                    # 1 "sVar_finalize"
                                    if(_if_conditional348=self!=((void*)0)&&self->mCValueName!=((void*)0),                                    _if_conditional348) {
                                        # 1 "sVar_finalize"
                                        self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 3 "sVar_finalize"
                                    # 2 "sVar_finalize"
                                    if(_if_conditional349=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional349) {
                                        # 2 "sVar_finalize"
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    # 4 "sVar_finalize"
                                    # 3 "sVar_finalize"
                                    if(_if_conditional350=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional350) {
                                        # 3 "sVar_finalize"
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sFuncNode_finalize"
                            # 0 "sFuncNode_finalize"
                            if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional362) {
                                # 0 "sFuncNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sFuncNode_finalize"
                            # 1 "sFuncNode_finalize"
                            if(_if_conditional363=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional363) {
                                # 1 "sFuncNode_finalize"
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sFuncNode_finalize"
                            # 2 "sFuncNode_finalize"
                            if(_if_conditional364=self!=((void*)0)&&self->value_source!=((void*)0),                            _if_conditional364) {
                                # 2 "sFuncNode_finalize"
                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional365;
struct sFuncNode* __result199__;
void* right_value313;
struct sFuncNode* result_264;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value314;
char* __dec_obj123;
_Bool _if_conditional368;
void* right_value315;
struct sNode* __dec_obj124;
_Bool _if_conditional369;
void* right_value316;
char* __dec_obj125;
struct sFuncNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
memset(&result_264, 0, sizeof(struct sFuncNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
                            # 3 "sFuncNode_clone"
                            # 2 "sFuncNode_clone"
                            if(_if_conditional365=self==(void*)0,                            _if_conditional365) {
                                # 2 "sFuncNode_clone"
                                __result199__ = __result_obj__ = (void*)0;
                                return __result199__;
                            }
                            # 3 "sFuncNode_clone"
                            result_264=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value313=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            come_call_finalizer3(right_value313,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                            # 5 "sFuncNode_clone"
                            # 4 "sFuncNode_clone"
                            if(_if_conditional366=self!=((void*)0),                            _if_conditional366) {
                                # 4 "sFuncNode_clone"
                                result_264->sline=self->sline;
                            }
                            # 6 "sFuncNode_clone"
                            # 5 "sFuncNode_clone"
                            if(_if_conditional367=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional367) {
                                # 5 "sFuncNode_clone"
                                __dec_obj123=result_264->sname;
                                result_264->sname=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->sname))));
                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 7 "sFuncNode_clone"
                            # 6 "sFuncNode_clone"
                            if(_if_conditional368=self!=((void*)0)&&self->value!=((void*)0),                            _if_conditional368) {
                                # 6 "sFuncNode_clone"
                                __dec_obj124=result_264->value;
                                result_264->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(self->value))));
                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 8 "sFuncNode_clone"
                            # 7 "sFuncNode_clone"
                            if(_if_conditional369=self!=((void*)0)&&self->value_source!=((void*)0),                            _if_conditional369) {
                                # 7 "sFuncNode_clone"
                                __dec_obj125=result_264->value_source;
                                result_264->value_source=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(self->value_source))));
                                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 8 "sFuncNode_clone"
                            __result200__ = __result_obj__ = result_264;
                            come_call_finalizer3(result_264,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result200__;
                            come_call_finalizer3(result_264,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sLineNode_finalize"
                                # 0 "sLineNode_finalize"
                                if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional371) {
                                    # 0 "sLineNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sLineNode_finalize"
                                # 1 "sLineNode_finalize"
                                if(_if_conditional372=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional372) {
                                    # 1 "sLineNode_finalize"
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sLineNode_finalize"
                                # 2 "sLineNode_finalize"
                                if(_if_conditional373=self!=((void*)0)&&self->value_source!=((void*)0),                                _if_conditional373) {
                                    # 2 "sLineNode_finalize"
                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional374;
struct sLineNode* __result202__;
void* right_value320;
struct sLineNode* result_265;
_Bool _if_conditional375;
_Bool _if_conditional376;
void* right_value321;
char* __dec_obj126;
_Bool _if_conditional377;
void* right_value322;
struct sNode* __dec_obj127;
_Bool _if_conditional378;
void* right_value323;
char* __dec_obj128;
struct sLineNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
memset(&result_265, 0, sizeof(struct sLineNode*));
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
                                # 3 "sLineNode_clone"
                                # 2 "sLineNode_clone"
                                if(_if_conditional374=self==(void*)0,                                _if_conditional374) {
                                    # 2 "sLineNode_clone"
                                    __result202__ = __result_obj__ = (void*)0;
                                    return __result202__;
                                }
                                # 3 "sLineNode_clone"
                                result_265=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value320=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                come_call_finalizer3(right_value320,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                # 5 "sLineNode_clone"
                                # 4 "sLineNode_clone"
                                if(_if_conditional375=self!=((void*)0),                                _if_conditional375) {
                                    # 4 "sLineNode_clone"
                                    result_265->sline=self->sline;
                                }
                                # 6 "sLineNode_clone"
                                # 5 "sLineNode_clone"
                                if(_if_conditional376=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional376) {
                                    # 5 "sLineNode_clone"
                                    __dec_obj126=result_265->sname;
                                    result_265->sname=(char*)come_increment_ref_count(((char*)(right_value321=string_clone(self->sname))));
                                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 7 "sLineNode_clone"
                                # 6 "sLineNode_clone"
                                if(_if_conditional377=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional377) {
                                    # 6 "sLineNode_clone"
                                    __dec_obj127=result_265->value;
                                    result_265->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(self->value))));
                                    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 8 "sLineNode_clone"
                                # 7 "sLineNode_clone"
                                if(_if_conditional378=self!=((void*)0)&&self->value_source!=((void*)0),                                _if_conditional378) {
                                    # 7 "sLineNode_clone"
                                    __dec_obj128=result_265->value_source;
                                    result_265->value_source=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->value_source))));
                                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 8 "sLineNode_clone"
                                __result203__ = __result_obj__ = result_265;
                                come_call_finalizer3(result_265,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result203__;
                                come_call_finalizer3(result_265,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sSNameNode_finalize"
                                    # 0 "sSNameNode_finalize"
                                    if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional380) {
                                        # 0 "sSNameNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    # 2 "sSNameNode_finalize"
                                    # 1 "sSNameNode_finalize"
                                    if(_if_conditional381=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional381) {
                                        # 1 "sSNameNode_finalize"
                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sSNameNode_finalize"
                                    # 2 "sSNameNode_finalize"
                                    if(_if_conditional382=self!=((void*)0)&&self->value_source!=((void*)0),                                    _if_conditional382) {
                                        # 2 "sSNameNode_finalize"
                                        self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional383;
struct sSNameNode* __result205__;
void* right_value327;
struct sSNameNode* result_266;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value328;
char* __dec_obj129;
_Bool _if_conditional386;
void* right_value329;
struct sNode* __dec_obj130;
_Bool _if_conditional387;
void* right_value330;
char* __dec_obj131;
struct sSNameNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
memset(&result_266, 0, sizeof(struct sSNameNode*));
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
                                    # 3 "sSNameNode_clone"
                                    # 2 "sSNameNode_clone"
                                    if(_if_conditional383=self==(void*)0,                                    _if_conditional383) {
                                        # 2 "sSNameNode_clone"
                                        __result205__ = __result_obj__ = (void*)0;
                                        return __result205__;
                                    }
                                    # 3 "sSNameNode_clone"
                                    result_266=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value327=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    come_call_finalizer3(right_value327,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sSNameNode_clone"
                                    # 4 "sSNameNode_clone"
                                    if(_if_conditional384=self!=((void*)0),                                    _if_conditional384) {
                                        # 4 "sSNameNode_clone"
                                        result_266->sline=self->sline;
                                    }
                                    # 6 "sSNameNode_clone"
                                    # 5 "sSNameNode_clone"
                                    if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional385) {
                                        # 5 "sSNameNode_clone"
                                        __dec_obj129=result_266->sname;
                                        result_266->sname=(char*)come_increment_ref_count(((char*)(right_value328=string_clone(self->sname))));
                                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 7 "sSNameNode_clone"
                                    # 6 "sSNameNode_clone"
                                    if(_if_conditional386=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional386) {
                                        # 6 "sSNameNode_clone"
                                        __dec_obj130=result_266->value;
                                        result_266->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=sNode_clone(self->value))));
                                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 8 "sSNameNode_clone"
                                    # 7 "sSNameNode_clone"
                                    if(_if_conditional387=self!=((void*)0)&&self->value_source!=((void*)0),                                    _if_conditional387) {
                                        # 7 "sSNameNode_clone"
                                        __dec_obj131=result_266->value_source;
                                        result_266->value_source=(char*)come_increment_ref_count(((char*)(right_value330=string_clone(self->value_source))));
                                        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 8 "sSNameNode_clone"
                                    __result206__ = __result_obj__ = result_266;
                                    come_call_finalizer3(result_266,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result206__;
                                    come_call_finalizer3(result_266,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sCallerFuncNode_finalize"
                                        # 0 "sCallerFuncNode_finalize"
                                        if(_if_conditional389=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional389) {
                                            # 0 "sCallerFuncNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sCallerFuncNode_finalize"
                                        # 1 "sCallerFuncNode_finalize"
                                        if(_if_conditional390=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional390) {
                                            # 1 "sCallerFuncNode_finalize"
                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sCallerFuncNode_finalize"
                                        # 2 "sCallerFuncNode_finalize"
                                        if(_if_conditional391=self!=((void*)0)&&self->value_source!=((void*)0),                                        _if_conditional391) {
                                            # 2 "sCallerFuncNode_finalize"
                                            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional392;
struct sCallerFuncNode* __result208__;
void* right_value334;
struct sCallerFuncNode* result_267;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value335;
char* __dec_obj132;
_Bool _if_conditional395;
void* right_value336;
struct sNode* __dec_obj133;
_Bool _if_conditional396;
void* right_value337;
char* __dec_obj134;
struct sCallerFuncNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
memset(&result_267, 0, sizeof(struct sCallerFuncNode*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
                                        # 3 "sCallerFuncNode_clone"
                                        # 2 "sCallerFuncNode_clone"
                                        if(_if_conditional392=self==(void*)0,                                        _if_conditional392) {
                                            # 2 "sCallerFuncNode_clone"
                                            __result208__ = __result_obj__ = (void*)0;
                                            return __result208__;
                                        }
                                        # 3 "sCallerFuncNode_clone"
                                        result_267=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value334=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        come_call_finalizer3(right_value334,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sCallerFuncNode_clone"
                                        # 4 "sCallerFuncNode_clone"
                                        if(_if_conditional393=self!=((void*)0),                                        _if_conditional393) {
                                            # 4 "sCallerFuncNode_clone"
                                            result_267->sline=self->sline;
                                        }
                                        # 6 "sCallerFuncNode_clone"
                                        # 5 "sCallerFuncNode_clone"
                                        if(_if_conditional394=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional394) {
                                            # 5 "sCallerFuncNode_clone"
                                            __dec_obj132=result_267->sname;
                                            result_267->sname=(char*)come_increment_ref_count(((char*)(right_value335=string_clone(self->sname))));
                                            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 7 "sCallerFuncNode_clone"
                                        # 6 "sCallerFuncNode_clone"
                                        if(_if_conditional395=self!=((void*)0)&&self->value!=((void*)0),                                        _if_conditional395) {
                                            # 6 "sCallerFuncNode_clone"
                                            __dec_obj133=result_267->value;
                                            result_267->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(self->value))));
                                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 8 "sCallerFuncNode_clone"
                                        # 7 "sCallerFuncNode_clone"
                                        if(_if_conditional396=self!=((void*)0)&&self->value_source!=((void*)0),                                        _if_conditional396) {
                                            # 7 "sCallerFuncNode_clone"
                                            __dec_obj134=result_267->value_source;
                                            result_267->value_source=(char*)come_increment_ref_count(((char*)(right_value337=string_clone(self->value_source))));
                                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 8 "sCallerFuncNode_clone"
                                        __result209__ = __result_obj__ = result_267;
                                        come_call_finalizer3(result_267,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result209__;
                                        come_call_finalizer3(result_267,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sCallerLineNode_finalize"
                                            # 0 "sCallerLineNode_finalize"
                                            if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional398) {
                                                # 0 "sCallerLineNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            # 2 "sCallerLineNode_finalize"
                                            # 1 "sCallerLineNode_finalize"
                                            if(_if_conditional399=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional399) {
                                                # 1 "sCallerLineNode_finalize"
                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sCallerLineNode_finalize"
                                            # 2 "sCallerLineNode_finalize"
                                            if(_if_conditional400=self!=((void*)0)&&self->value_source!=((void*)0),                                            _if_conditional400) {
                                                # 2 "sCallerLineNode_finalize"
                                                self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional401;
struct sCallerLineNode* __result211__;
void* right_value341;
struct sCallerLineNode* result_268;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value342;
char* __dec_obj135;
_Bool _if_conditional404;
void* right_value343;
struct sNode* __dec_obj136;
_Bool _if_conditional405;
void* right_value344;
char* __dec_obj137;
struct sCallerLineNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value341 = (void*)0;
memset(&result_268, 0, sizeof(struct sCallerLineNode*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
                                            # 3 "sCallerLineNode_clone"
                                            # 2 "sCallerLineNode_clone"
                                            if(_if_conditional401=self==(void*)0,                                            _if_conditional401) {
                                                # 2 "sCallerLineNode_clone"
                                                __result211__ = __result_obj__ = (void*)0;
                                                return __result211__;
                                            }
                                            # 3 "sCallerLineNode_clone"
                                            result_268=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value341=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            come_call_finalizer3(right_value341,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sCallerLineNode_clone"
                                            # 4 "sCallerLineNode_clone"
                                            if(_if_conditional402=self!=((void*)0),                                            _if_conditional402) {
                                                # 4 "sCallerLineNode_clone"
                                                result_268->sline=self->sline;
                                            }
                                            # 6 "sCallerLineNode_clone"
                                            # 5 "sCallerLineNode_clone"
                                            if(_if_conditional403=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional403) {
                                                # 5 "sCallerLineNode_clone"
                                                __dec_obj135=result_268->sname;
                                                result_268->sname=(char*)come_increment_ref_count(((char*)(right_value342=string_clone(self->sname))));
                                                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 7 "sCallerLineNode_clone"
                                            # 6 "sCallerLineNode_clone"
                                            if(_if_conditional404=self!=((void*)0)&&self->value!=((void*)0),                                            _if_conditional404) {
                                                # 6 "sCallerLineNode_clone"
                                                __dec_obj136=result_268->value;
                                                result_268->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=sNode_clone(self->value))));
                                                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 8 "sCallerLineNode_clone"
                                            # 7 "sCallerLineNode_clone"
                                            if(_if_conditional405=self!=((void*)0)&&self->value_source!=((void*)0),                                            _if_conditional405) {
                                                # 7 "sCallerLineNode_clone"
                                                __dec_obj137=result_268->value_source;
                                                result_268->value_source=(char*)come_increment_ref_count(((char*)(right_value344=string_clone(self->value_source))));
                                                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 8 "sCallerLineNode_clone"
                                            __result212__ = __result_obj__ = result_268;
                                            come_call_finalizer3(result_268,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result212__;
                                            come_call_finalizer3(result_268,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                                                # 1 "sCallerSNameNode_finalize"
                                                # 0 "sCallerSNameNode_finalize"
                                                if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional407) {
                                                    # 0 "sCallerSNameNode_finalize"
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                # 2 "sCallerSNameNode_finalize"
                                                # 1 "sCallerSNameNode_finalize"
                                                if(_if_conditional408=self!=((void*)0)&&self->value!=((void*)0),                                                _if_conditional408) {
                                                    # 1 "sCallerSNameNode_finalize"
                                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                # 3 "sCallerSNameNode_finalize"
                                                # 2 "sCallerSNameNode_finalize"
                                                if(_if_conditional409=self!=((void*)0)&&self->value_source!=((void*)0),                                                _if_conditional409) {
                                                    # 2 "sCallerSNameNode_finalize"
                                                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional410;
struct sCallerSNameNode* __result214__;
void* right_value348;
struct sCallerSNameNode* result_269;
_Bool _if_conditional411;
_Bool _if_conditional412;
void* right_value349;
char* __dec_obj138;
_Bool _if_conditional413;
void* right_value350;
struct sNode* __dec_obj139;
_Bool _if_conditional414;
void* right_value351;
char* __dec_obj140;
struct sCallerSNameNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value348 = (void*)0;
memset(&result_269, 0, sizeof(struct sCallerSNameNode*));
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
                                                # 3 "sCallerSNameNode_clone"
                                                # 2 "sCallerSNameNode_clone"
                                                if(_if_conditional410=self==(void*)0,                                                _if_conditional410) {
                                                    # 2 "sCallerSNameNode_clone"
                                                    __result214__ = __result_obj__ = (void*)0;
                                                    return __result214__;
                                                }
                                                # 3 "sCallerSNameNode_clone"
                                                result_269=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value348=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                come_call_finalizer3(right_value348,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                # 5 "sCallerSNameNode_clone"
                                                # 4 "sCallerSNameNode_clone"
                                                if(_if_conditional411=self!=((void*)0),                                                _if_conditional411) {
                                                    # 4 "sCallerSNameNode_clone"
                                                    result_269->sline=self->sline;
                                                }
                                                # 6 "sCallerSNameNode_clone"
                                                # 5 "sCallerSNameNode_clone"
                                                if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional412) {
                                                    # 5 "sCallerSNameNode_clone"
                                                    __dec_obj138=result_269->sname;
                                                    result_269->sname=(char*)come_increment_ref_count(((char*)(right_value349=string_clone(self->sname))));
                                                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 7 "sCallerSNameNode_clone"
                                                # 6 "sCallerSNameNode_clone"
                                                if(_if_conditional413=self!=((void*)0)&&self->value!=((void*)0),                                                _if_conditional413) {
                                                    # 6 "sCallerSNameNode_clone"
                                                    __dec_obj139=result_269->value;
                                                    result_269->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(self->value))));
                                                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                # 8 "sCallerSNameNode_clone"
                                                # 7 "sCallerSNameNode_clone"
                                                if(_if_conditional414=self!=((void*)0)&&self->value_source!=((void*)0),                                                _if_conditional414) {
                                                    # 7 "sCallerSNameNode_clone"
                                                    __dec_obj140=result_269->value_source;
                                                    result_269->value_source=(char*)come_increment_ref_count(((char*)(right_value351=string_clone(self->value_source))));
                                                    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                # 8 "sCallerSNameNode_clone"
                                                __result215__ = __result_obj__ = result_269;
                                                come_call_finalizer3(result_269,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result215__;
                                                come_call_finalizer3(result_269,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_272;
unsigned int hash_273;
unsigned int it_274;
_Bool _while_condtional37;
_Bool _if_conditional417;
_Bool _if_conditional418;
struct sType* __result218__;
_Bool _if_conditional419;
_Bool _if_conditional420;
struct sType* __result219__;
struct sType* __result220__;
struct sType* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_272, 0, sizeof(struct sType*));
memset(&hash_273, 0, sizeof(unsigned int));
memset(&it_274, 0, sizeof(unsigned int));
                                                        # 1519 "./neo-c.h"
                                                        # 1520 "./neo-c.h"
                                                        memset(&default_value_272,0,sizeof(struct sType*));
                                                        # 1522 "./neo-c.h"
                                                        hash_273=string_get_hash_key(((char*)key))%self->size;
                                                        # 1523 "./neo-c.h"
                                                        it_274=hash_273;
                                                        # 1547 "./neo-c.h"
                                                        while(_while_condtional37=(_Bool)1,                                                        _while_condtional37) {
                                                            # 1545 "./neo-c.h"
                                                            # 1526 "./neo-c.h"
                                                            if(_if_conditional417=self->item_existance[it_274],                                                            _if_conditional417) {
                                                                # 1533 "./neo-c.h"
                                                                # 1528 "./neo-c.h"
                                                                if(_if_conditional418=string_equals(self->keys[it_274],key),                                                                _if_conditional418) {
                                                                    # 1530 "./neo-c.h"
                                                                    __result218__ = __result_obj__ = self->items[it_274];
                                                                    come_call_finalizer3(default_value_272,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result218__;
                                                                }
                                                                # 1533 "./neo-c.h"
                                                                it_274++;
                                                                # 1541 "./neo-c.h"
                                                                # 1535 "./neo-c.h"
                                                                if(_if_conditional419=it_274>=self->size,                                                                _if_conditional419) {
                                                                    # 1536 "./neo-c.h"
                                                                    it_274=0;
                                                                }
                                                                else {
                                                                    # 1541 "./neo-c.h"
                                                                    # 1538 "./neo-c.h"
                                                                    if(_if_conditional420=it_274==hash_273,                                                                    _if_conditional420) {
                                                                        # 1539 "./neo-c.h"
                                                                        __result219__ = __result_obj__ = default_value_272;
                                                                        come_call_finalizer3(default_value_272,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result219__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                # 1543 "./neo-c.h"
                                                                __result220__ = __result_obj__ = default_value_272;
                                                                come_call_finalizer3(default_value_272,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result220__;
                                                            }
                                                        }
                                                        # 1547 "./neo-c.h"
                                                        __result221__ = __result_obj__ = default_value_272;
                                                        come_call_finalizer3(default_value_272,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result221__;
                                                        come_call_finalizer3(default_value_272,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_276;
unsigned int hash_277;
unsigned int it_278;
_Bool _while_condtional38;
_Bool _if_conditional422;
_Bool _if_conditional423;
struct sClass* __result222__;
_Bool _if_conditional431;
_Bool _if_conditional432;
struct sClass* __result223__;
struct sClass* __result224__;
struct sClass* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_276, 0, sizeof(struct sClass*));
memset(&hash_277, 0, sizeof(unsigned int));
memset(&it_278, 0, sizeof(unsigned int));
                                                            # 1519 "./neo-c.h"
                                                            # 1520 "./neo-c.h"
                                                            memset(&default_value_276,0,sizeof(struct sClass*));
                                                            # 1522 "./neo-c.h"
                                                            hash_277=string_get_hash_key(((char*)key))%self->size;
                                                            # 1523 "./neo-c.h"
                                                            it_278=hash_277;
                                                            # 1547 "./neo-c.h"
                                                            while(_while_condtional38=(_Bool)1,                                                            _while_condtional38) {
                                                                # 1545 "./neo-c.h"
                                                                # 1526 "./neo-c.h"
                                                                if(_if_conditional422=self->item_existance[it_278],                                                                _if_conditional422) {
                                                                    # 1533 "./neo-c.h"
                                                                    # 1528 "./neo-c.h"
                                                                    if(_if_conditional423=string_equals(self->keys[it_278],key),                                                                    _if_conditional423) {
                                                                        # 1530 "./neo-c.h"
                                                                        __result222__ = __result_obj__ = self->items[it_278];
                                                                        come_call_finalizer3(default_value_276,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result222__;
                                                                    }
                                                                    # 1533 "./neo-c.h"
                                                                    it_278++;
                                                                    # 1541 "./neo-c.h"
                                                                    # 1535 "./neo-c.h"
                                                                    if(_if_conditional431=it_278>=self->size,                                                                    _if_conditional431) {
                                                                        # 1536 "./neo-c.h"
                                                                        it_278=0;
                                                                    }
                                                                    else {
                                                                        # 1541 "./neo-c.h"
                                                                        # 1538 "./neo-c.h"
                                                                        if(_if_conditional432=it_278==hash_277,                                                                        _if_conditional432) {
                                                                            # 1539 "./neo-c.h"
                                                                            __result223__ = __result_obj__ = default_value_276;
                                                                            come_call_finalizer3(default_value_276,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result223__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    # 1543 "./neo-c.h"
                                                                    __result224__ = __result_obj__ = default_value_276;
                                                                    come_call_finalizer3(default_value_276,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result224__;
                                                                }
                                                            }
                                                            # 1547 "./neo-c.h"
                                                            __result225__ = __result_obj__ = default_value_276;
                                                            come_call_finalizer3(default_value_276,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result225__;
                                                            come_call_finalizer3(default_value_276,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            # 1 "sClass_finalize"
                                                                            # 0 "sClass_finalize"
                                                                            if(_if_conditional424=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional424) {
                                                                                # 0 "sClass_finalize"
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 2 "sClass_finalize"
                                                                            # 1 "sClass_finalize"
                                                                            if(_if_conditional425=self!=((void*)0)&&self->mFields!=((void*)0),                                                                            _if_conditional425) {
                                                                                # 1 "sClass_finalize"
                                                                                come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 3 "sClass_finalize"
                                                                            # 2 "sClass_finalize"
                                                                            if(_if_conditional429=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional429) {
                                                                                # 2 "sClass_finalize"
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            # 4 "sClass_finalize"
                                                                            # 3 "sClass_finalize"
                                                                            if(_if_conditional430=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                                                            _if_conditional430) {
                                                                                # 3 "sClass_finalize"
                                                                                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_279;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_280;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_279, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_280, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                    # 114 "./neo-c.h"
                                                                                    it_279=self->head;
                                                                                    # 120 "./neo-c.h"
                                                                                    while(_while_condtional39=it_279!=((void*)0),                                                                                    _while_condtional39) {
                                                                                        # 116 "./neo-c.h"
                                                                                        prev_it_280=it_279;
                                                                                        # 117 "./neo-c.h"
                                                                                        it_279=it_279->next;
                                                                                        # 118 "./neo-c.h"
                                                                                        come_call_finalizer3(prev_it_280,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            # 1 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                            # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                            if(_if_conditional426=self!=((void*)0)&&self->item!=((void*)0),                                                                                            _if_conditional426) {
                                                                                                # 0 "list_item$1tuple2$2charphsTypephphp_finalize"
                                                                                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional427;
_Bool _if_conditional428;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                    # 0 "tuple2$2charphsTypephp_finalize"
                                                                                                    if(_if_conditional427=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                    _if_conditional427) {
                                                                                                        # 0 "tuple2$2charphsTypephp_finalize"
                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    # 2 "tuple2$2charphsTypephp_finalize"
                                                                                                    # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                    if(_if_conditional428=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                    _if_conditional428) {
                                                                                                        # 1 "tuple2$2charphsTypephp_finalize"
                                                                                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    }
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value373;
struct sNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
    # 1203 "05call.c"
    __result233__ = __result_obj__ = ((struct sNode*)(right_value373=expression_node_v99(info)));
    if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result233__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional438;
void* right_value374;
void* right_value375;
struct sNode* __dec_obj142;
struct sNode* __result234__;
_Bool _if_conditional439;
void* right_value376;
void* right_value377;
struct sNode* __dec_obj143;
struct sNode* __result235__;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
    # 1225 "05call.c"
    # 1208 "05call.c"
    if(_if_conditional438=strmemcmp(info->p,"or"),    _if_conditional438) {
        # 1209 "05call.c"
        info->p+=strlen("or");
        # 1210 "05call.c"
        skip_spaces_and_lf(info);
        # 1212 "05call.c"
        __dec_obj142=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(node)))),info))));
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        # 1214 "05call.c"
        __result234__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result234__;
    }
    else {
        # 1225 "05call.c"
        # 1216 "05call.c"
        if(_if_conditional439=strmemcmp(info->p,"and"),        _if_conditional439) {
            # 1217 "05call.c"
            info->p+=strlen("and");
            # 1218 "05call.c"
            skip_spaces_and_lf(info);
            # 1220 "05call.c"
            __dec_obj143=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(node)))),info))));
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 1222 "05call.c"
            __result235__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result235__;
        }
    }
    # 1225 "05call.c"
    __result236__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result236__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value378;
struct sNode* node_291;
void* right_value379;
struct sNode* __dec_obj144;
struct sNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
memset(&node_291, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
    # 1230 "05call.c"
    node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_node_v99(info))));
    if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1232 "05call.c"
    __dec_obj144=node_291;
    node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_291),info))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1234 "05call.c"
    __result237__ = __result_obj__ = node_291;
    if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result237__;
    if(node_291) { node_291 = come_decrement_ref_count2(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_292;
void* right_value380;
void* right_value381;
struct buffer* buf_293;
_Bool _if_conditional440;
void* right_value382;
char* __dec_obj145;
_Bool _if_conditional441;
int i_294;
_Bool _if_conditional442;
void* right_value383;
char* __dec_obj146;
void* right_value384;
char* __dec_obj147;
int i_295;
_Bool _if_conditional443;
_Bool _if_conditional445;
void* right_value385;
void* right_value386;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_292, 0, sizeof(char*));
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&buf_293, 0, sizeof(struct buffer*));
right_value382 = (void*)0;
memset(&i_294, 0, sizeof(int));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&i_295, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
    # 1239 "05call.c"
    # 1240 "05call.c"
    buf_293=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value381=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1240, "buffer"))))))));
    come_call_finalizer3(right_value380,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value381,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    # 1261 "05call.c"
    # 1241 "05call.c"
    if(_if_conditional440=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional440) {
        # 1242 "05call.c"
        __dec_obj145=struct_name_292;
        struct_name_292=(char*)come_increment_ref_count(((char*)(right_value382=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1249 "05call.c"
        # 1243 "05call.c"
        if(_if_conditional441=!obj_type->mClass->mStruct,        _if_conditional441) {
            # 1248 "05call.c"
            for(            i_294=0;            i_294<obj_type->mOriginalTypeNamePointerNum;            i_294++            ){
                # 1246 "05call.c"
                buffer_append_str(buf_293,"p");
            }
        }
    }
    else {
        # 1261 "05call.c"
        # 1250 "05call.c"
        if(obj_type->mClass->mStruct) {
            # 1251 "05call.c"
            __dec_obj146=struct_name_292;
            struct_name_292=(char*)come_increment_ref_count(((char*)(right_value383=__builtin_string(obj_type->mClass->mName))));
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 1254 "05call.c"
            __dec_obj147=struct_name_292;
            struct_name_292=(char*)come_increment_ref_count(((char*)(right_value384=create_generics_name(obj_type,info))));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 1259 "05call.c"
            for(            i_295=0;            i_295<obj_type->mPointerNum;            i_295++            ){
                # 1257 "05call.c"
                buffer_append_str(buf_293,"p");
            }
        }
    }
    # 1265 "05call.c"
    # 1261 "05call.c"
    if(obj_type->mArrayPointerType) {
        # 1262 "05call.c"
        buffer_append_str(buf_293,"a");
    }
    # 1269 "05call.c"
    # 1265 "05call.c"
    if(_if_conditional445=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional445) {
        # 1266 "05call.c"
        buffer_append_str(buf_293,"pa");
    }
    # 1269 "05call.c"
    __result240__ = __result_obj__ = ((char*)(right_value386=xsprintf("%s%s_%s",struct_name_292,((char*)(right_value385=buffer_to_string(buf_293))),fun_name)));
    struct_name_292 = come_decrement_ref_count2(struct_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_293,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value385 = come_decrement_ref_count2(right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result240__;
    struct_name_292 = come_decrement_ref_count2(struct_name_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_293,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional444;
int __result238__;
int __result239__;
memset(&__result_obj__, 0, sizeof(void*));
        # 354 "./neo-c.h"
        # 351 "./neo-c.h"
        if(_if_conditional444=self==((void*)0),        _if_conditional444) {
            # 352 "./neo-c.h"
            __result238__ = 0;
            return __result238__;
        }
        # 354 "./neo-c.h"
        __result239__ = self->len;
        return __result239__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value387;
char* struct_name_296;
void* right_value388;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
memset(&struct_name_296, 0, sizeof(char*));
right_value388 = (void*)0;
    # 1274 "05call.c"
    struct_name_296=(char*)come_increment_ref_count(((char*)(right_value387=__builtin_string(obj_class->mName))));
    right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1276 "05call.c"
    __result241__ = __result_obj__ = ((char*)(right_value388=xsprintf("%s_%s",struct_name_296,fun_name)));
    struct_name_296 = come_decrement_ref_count2(struct_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result241__;
    struct_name_296 = come_decrement_ref_count2(struct_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1281 "05call.c"
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    # 1282 "05call.c"
    exit(2);
    # 1284 "05call.c"
    __result242__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result242__;
}

