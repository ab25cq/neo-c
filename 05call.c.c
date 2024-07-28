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
};
struct sSNameNode
{
    int sline;
    char* sname;
};
struct sFuncNode
{
    int sline;
    char* sname;
};
struct sCallerFuncNode
{
    int sline;
    char* sname;
};
struct sCallerLineNode
{
    int sline;
    char* sname;
};
struct sCallerSNameNode
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
struct sFunCallNode
{
    int sline;
    char* sname;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1sTypeph* method_generics_types;
};
struct sLambdaCall
{
    int sline;
    char* sname;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
};
struct sVarArgTypeName
{
    int sline;
    char* sname;
    struct sType* type;
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

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);

char* sReturnNode_kind(struct sReturnNode* self);

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);

char* sLineNode_kind(struct sLineNode* self);

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);

char* sSNameNode_kind(struct sSNameNode* self);

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);

char* sFuncNode_kind(struct sFuncNode* self);

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);

char* sCallerFuncNode_kind(struct sCallerFuncNode* self);

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);

char* sCallerLineNode_kind(struct sCallerLineNode* self);

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);

char* sCallerSNameNode_kind(struct sCallerSNameNode* self);

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info);

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
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

char* sLambdaCall_kind(struct sLambdaCall* self);

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);

char* sVarArgTypeName_kind(struct sVarArgTypeName* self);

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);

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
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
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
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);

static void sLambdaCall_finalize(struct sLambdaCall* self);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNodeBase* __exception_result_var_b51;
struct sNode* __dec_obj12;
char* __exception_result_var_b52;
void* right_value80;
char* __dec_obj13;
struct sReturnNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    (come_push_stackframe("05call.c", 7, 575),__exception_result_var_b51=((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "05call.c", 7, 573)), "05call.c", 7, 574))),info))), come_pop_stackframe(), __exception_result_var_b51);
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=((struct sReturnNode*)come_null_check(self, "05call.c", 9, 580))->value;
    ((struct sReturnNode*)come_null_check(self, "05call.c", 9, 580))->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj13=((struct sReturnNode*)come_null_check(self, "05call.c", 10, 581))->value_source;
    ((struct sReturnNode*)come_null_check(self, "05call.c", 10, 581))->value_source=(char*)come_increment_ref_count(((char*)(right_value80=(come_push_stackframe("05call.c", 10, 582),__exception_result_var_b52=string_clone(value_source), come_pop_stackframe(), __exception_result_var_b52))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
char* __exception_result_var_b53;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result53__ = __result_obj__ = (come_push_stackframe("05call.c", 15, 595),__exception_result_var_b53=((char*)(right_value81=__builtin_string("sReturnNode"))), come_pop_stackframe(), __exception_result_var_b53);
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional23;
struct sFun* come_fun_47;
struct sType* __exception_result_var_b77;
void* right_value117;
struct sType* result_type_48;
void* right_value118;
struct sType* __exception_result_var_b78;
struct sType* result_type2_79;
struct sType* result_type3_80;
_Bool _if_conditional119;
_Bool __exception_result_var_b79;
_Bool _if_conditional120;
_Bool __result72__;
void* right_value119;
struct CVALUE* __exception_result_var_b80;
struct CVALUE* come_value_81;
_Bool _if_conditional123;
int __exception_result_var_b81;
int right_value_id_82;
_Bool _if_conditional124;
void* right_value120;
struct sType* __exception_result_var_b82;
struct sType* come_value_type_83;
struct sType* __exception_result_var_b83;
void* right_value121;
struct sType* __dec_obj37;
void* right_value122;
char* __exception_result_var_b84;
char* var_name_85;
int num_result_stack_86;
_Bool _if_conditional125;
_Bool __exception_result_var_b85;
void* right_value123;
char* __exception_result_var_b86;
void* right_value124;
char* __exception_result_var_b87;
_Bool __exception_result_var_b88;
_Bool _if_conditional126;
void* right_value125;
char* __exception_result_var_b89;
struct sFun* come_fun_87;
_Bool __exception_result_var_b90;
_Bool _if_conditional127;
void* right_value126;
char* __exception_result_var_b91;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value117 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
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
    if(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "05call.c", 20, 596)), "05call.c", 20, 597))->value) {
        come_fun_47=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 21, 598)), "05call.c", 21, 599))->come_fun;
        result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=(come_push_stackframe("05call.c", 23, 1191),__exception_result_var_b77=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(come_fun_47, "05call.c", 23, 600)), "05call.c", 23, 601))->mResultType), come_pop_stackframe(), __exception_result_var_b77))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type2_79=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 25, 1194),__exception_result_var_b78=((struct sType*)(right_value118=solve_generics(result_type_48,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 25, 1192)), "05call.c", 25, 1193))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b78));
        come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type3_80=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_79, "05call.c", 27, 1195)), "05call.c", 27, 1196))->mNoSolvedGenericsType, "05call.c", 27, 1197)), "05call.c", 27, 1198))->v1;
        if(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_79, "05call.c", 28, 1199)), "05call.c", 28, 1200))->mNoSolvedGenericsType, "05call.c", 28, 1201)), "05call.c", 28, 1202))->v1) {
            result_type3_80=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_79, "05call.c", 29, 1203)), "05call.c", 29, 1204))->mNoSolvedGenericsType, "05call.c", 29, 1205)), "05call.c", 29, 1206))->v1;
        }
        else {
            result_type3_80=result_type2_79;
        }
        if(_if_conditional120=!(come_push_stackframe("05call.c", 35, 1209),__exception_result_var_b79=node_compile(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "05call.c", 35, 1207)), "05call.c", 35, 1208))->value,info), come_pop_stackframe(), __exception_result_var_b79),        _if_conditional120) {
            __result72__ = (_Bool)0;
            come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result72__;
        }
        come_value_81=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 39, 1210),__exception_result_var_b80=((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b80));
        come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("05call.c", 40,1219),dec_stack_ptr(1,info),come_pop_stackframe());
        if(_if_conditional123=((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 42, 1220)), "05call.c", 42, 1221))->type, "05call.c", 42, 1222)), "05call.c", 42, 1223))->mHeap&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 42, 1224)), "05call.c", 42, 1225))->var==((void*)0),        _if_conditional123) {
            right_value_id_82=(come_push_stackframe("05call.c", 43, 1228),__exception_result_var_b81=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 43, 1226)), "05call.c", 43, 1227))->c_value)), come_pop_stackframe(), __exception_result_var_b81);
            if(_if_conditional124=right_value_id_82!=-1,            _if_conditional124) {
                (come_push_stackframe("05call.c", 46,1229),remove_object_from_right_values(right_value_id_82,info),come_pop_stackframe());
            }
        }
        come_value_type_83=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 50, 1234),__exception_result_var_b82=((struct sType*)(right_value120=solve_generics(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 50, 1230)), "05call.c", 50, 1231))->type,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 50, 1232)), "05call.c", 50, 1233))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b82));
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj37=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 52, 1235)), "05call.c", 52, 1236))->function_result_type;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 52, 1235)), "05call.c", 52, 1236))->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(come_push_stackframe("05call.c", 52, 1239),__exception_result_var_b83=sType_clone(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 52, 1237)), "05call.c", 52, 1238))->type), come_pop_stackframe(), __exception_result_var_b83))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, __result_obj__);
        static int num_result_84=0;
        var_name_85=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 55, 1240),__exception_result_var_b84=((char*)(right_value122=xsprintf("__result%d__",++num_result_84))), come_pop_stackframe(), __exception_result_var_b84));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        num_result_stack_86=num_result_84;
        if(_if_conditional125=((struct sType*)come_null_check(((struct sType*)come_null_check(result_type2_79, "05call.c", 57, 1241)), "05call.c", 57, 1242))->mPointerNum>0,        _if_conditional125) {
            (come_push_stackframe("05call.c", 58, 1245),__exception_result_var_b85=check_assign_type("result type",result_type2_79,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 58, 1243)), "05call.c", 58, 1244))->type,come_value_81,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b85);
            (come_push_stackframe("05call.c", 60,1247),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("05call.c", 60, 1246),__exception_result_var_b86=((char*)(right_value123=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b86)),come_pop_stackframe());
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 61,1250),add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_85,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 61, 1248)), "05call.c", 61, 1249))->c_value),come_pop_stackframe());
        }
        else {
            (come_push_stackframe("05call.c", 64,1252),add_come_code_at_function_head(info,"%s;\n",(come_push_stackframe("05call.c", 64, 1251),__exception_result_var_b87=((char*)(right_value124=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b87)),come_pop_stackframe());
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 65,1255),add_come_code(info,"%s = %s;\n",var_name_85,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 65, 1253)), "05call.c", 65, 1254))->c_value),come_pop_stackframe());
        }
        (come_push_stackframe("05call.c", 67,1256),add_last_code_to_source(info),come_pop_stackframe());
        (come_push_stackframe("05call.c", 69,1261),free_objects_on_return(((struct sFun*)come_null_check(((struct sFun*)come_null_check(come_fun_47, "05call.c", 69, 1257)), "05call.c", 69, 1258))->mBlock,info,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_81, "05call.c", 69, 1259)), "05call.c", 69, 1260))->var,(_Bool)0),come_pop_stackframe());
        (come_push_stackframe("05call.c", 70,1262),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        if(_if_conditional126=!gComeC&&(come_push_stackframe("05call.c", 72, 1267),__exception_result_var_b88=string_operator_equals(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 72, 1263)), "05call.c", 72, 1264))->come_fun, "05call.c", 72, 1265)), "05call.c", 72, 1266))->mName,"main"), come_pop_stackframe(), __exception_result_var_b88),        _if_conditional126) {
            (come_push_stackframe("05call.c", 73,1270),free_objects(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 73, 1268)), "05call.c", 73, 1269))->gv_table,((void*)0),info),come_pop_stackframe());
            (come_push_stackframe("05call.c", 74,1272),add_come_code(info,(come_push_stackframe("05call.c", 74, 1271),__exception_result_var_b89=((char*)(right_value125=xsprintf("come_heap_final();\n"))), come_pop_stackframe(), __exception_result_var_b89)),come_pop_stackframe());
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("05call.c", 77,1273),add_come_code(info,"return __result%d__;\n",num_result_stack_86),come_pop_stackframe());
        come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_85 = come_decrement_ref_count2(var_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_87=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 80, 1274)), "05call.c", 80, 1275))->come_fun;
        (come_push_stackframe("05call.c", 82,1276),add_last_code_to_source(info),come_pop_stackframe());
        (come_push_stackframe("05call.c", 83,1279),free_objects_on_return(((struct sFun*)come_null_check(((struct sFun*)come_null_check(come_fun_87, "05call.c", 83, 1277)), "05call.c", 83, 1278))->mBlock,info,((void*)0),(_Bool)0),come_pop_stackframe());
        (come_push_stackframe("05call.c", 84,1280),free_right_value_objects(info,(_Bool)0),come_pop_stackframe());
        if(_if_conditional127=!gComeC&&(come_push_stackframe("05call.c", 86, 1285),__exception_result_var_b90=string_operator_equals(((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 86, 1281)), "05call.c", 86, 1282))->come_fun, "05call.c", 86, 1283)), "05call.c", 86, 1284))->mName,"main"), come_pop_stackframe(), __exception_result_var_b90),        _if_conditional127) {
            (come_push_stackframe("05call.c", 87,1288),free_objects(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 87, 1286)), "05call.c", 87, 1287))->gv_table,((void*)0),info),come_pop_stackframe());
            (come_push_stackframe("05call.c", 88,1290),add_come_code(info,(come_push_stackframe("05call.c", 88, 1289),__exception_result_var_b91=((char*)(right_value126=xsprintf("come_heap_final();\n"))), come_pop_stackframe(), __exception_result_var_b91)),come_pop_stackframe());
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        (come_push_stackframe("05call.c", 90,1291),add_come_code(info,"return;\n"),come_pop_stackframe());
    }
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 93, 1292)), "05call.c", 93, 1293))->last_statment_is_return=(_Bool)1;
    __result73__ = (_Bool)1;
    return __result73__;
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
_Bool _if_conditional24;
struct sType* __result54__;
void* right_value82;
struct sType* result_49;
_Bool _if_conditional42;
_Bool _if_conditional43;
struct list$1sTypeph* __exception_result_var_b57;
void* right_value89;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional47;
struct tuple1$1sTypeph* __exception_result_var_b59;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional51;
struct tuple1$1sTypeph* __exception_result_var_b60;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional52;
char* __exception_result_var_b61;
void* right_value94;
char* __dec_obj21;
_Bool _if_conditional53;
struct list$1sTypeph* __exception_result_var_b62;
void* right_value95;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional54;
struct list$1sNodeph* __exception_result_var_b66;
void* right_value103;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional67;
_Bool _if_conditional68;
struct list$1sTypeph* __exception_result_var_b67;
void* right_value104;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional69;
struct list$1charph* __exception_result_var_b71;
void* right_value111;
struct list$1charph* __dec_obj31;
_Bool _if_conditional73;
struct tuple1$1sTypeph* __exception_result_var_b72;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional74;
_Bool _if_conditional75;
struct sNode* __exception_result_var_b73;
void* right_value113;
struct sNode* __dec_obj33;
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
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sNode* __exception_result_var_b74;
void* right_value114;
struct sNode* __dec_obj34;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
char* __exception_result_var_b75;
void* right_value115;
char* __dec_obj35;
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
char* __exception_result_var_b76;
void* right_value116;
char* __dec_obj36;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sType* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct sType*));
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
            if(_if_conditional24=self==(void*)0,            _if_conditional24) {
                __result54__ = __result_obj__ = (void*)0;
                return __result54__;
            }
            result_49=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional42=self!=((void*)0),            _if_conditional42) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 4, 682)), "sType_clone", 4, 683))->mClass=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 4, 684)), "sType_clone", 4, 685))->mClass;
            }
            if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 686)), "sType_clone", 5, 687))->mMultipleTypes!=((void*)0),            _if_conditional43) {
                __dec_obj17=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 5, 688)), "sType_clone", 5, 689))->mMultipleTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 5, 688)), "sType_clone", 5, 689))->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=(come_push_stackframe("sType_clone", 5, 755),__exception_result_var_b57=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 5, 690)), "sType_clone", 5, 691))->mMultipleTypes), come_pop_stackframe(), __exception_result_var_b57))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 760)), "sType_clone", 6, 761))->mNoSolvedGenericsType!=((void*)0),            _if_conditional47) {
                __dec_obj19=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 6, 762)), "sType_clone", 6, 763))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 6, 762)), "sType_clone", 6, 763))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=(come_push_stackframe("sType_clone", 6, 777),__exception_result_var_b59=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 6, 764)), "sType_clone", 6, 765))->mNoSolvedGenericsType), come_pop_stackframe(), __exception_result_var_b59))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 778)), "sType_clone", 7, 779))->mOriginalLoadVarType!=((void*)0),            _if_conditional51) {
                __dec_obj20=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 7, 780)), "sType_clone", 7, 781))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 7, 780)), "sType_clone", 7, 781))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=(come_push_stackframe("sType_clone", 7, 784),__exception_result_var_b60=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 7, 782)), "sType_clone", 7, 783))->mOriginalLoadVarType), come_pop_stackframe(), __exception_result_var_b60))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 785)), "sType_clone", 8, 786))->mGenericsName!=((void*)0),            _if_conditional52) {
                __dec_obj21=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 8, 787)), "sType_clone", 8, 788))->mGenericsName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 8, 787)), "sType_clone", 8, 788))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=(come_push_stackframe("sType_clone", 8, 791),__exception_result_var_b61=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 8, 789)), "sType_clone", 8, 790))->mGenericsName), come_pop_stackframe(), __exception_result_var_b61))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 792)), "sType_clone", 9, 793))->mGenericsTypes!=((void*)0),            _if_conditional53) {
                __dec_obj22=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 9, 794)), "sType_clone", 9, 795))->mGenericsTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 9, 794)), "sType_clone", 9, 795))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=(come_push_stackframe("sType_clone", 9, 798),__exception_result_var_b62=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 9, 796)), "sType_clone", 9, 797))->mGenericsTypes), come_pop_stackframe(), __exception_result_var_b62))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value95,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 799)), "sType_clone", 10, 800))->mArrayNum!=((void*)0),            _if_conditional54) {
                __dec_obj26=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 10, 801)), "sType_clone", 10, 802))->mArrayNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 10, 801)), "sType_clone", 10, 802))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=(come_push_stackframe("sType_clone", 10, 902),__exception_result_var_b66=list$1sNodephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 10, 803)), "sType_clone", 10, 804))->mArrayNum), come_pop_stackframe(), __exception_result_var_b66))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 11, 907)), "sType_clone", 11, 908))->mOmitArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 11, 909)), "sType_clone", 11, 910))->mOmitArrayNum;
            }
            if(_if_conditional68=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 911)), "sType_clone", 12, 912))->mParamTypes!=((void*)0),            _if_conditional68) {
                __dec_obj27=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 12, 913)), "sType_clone", 12, 914))->mParamTypes;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 12, 913)), "sType_clone", 12, 914))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=(come_push_stackframe("sType_clone", 12, 917),__exception_result_var_b67=list$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 12, 915)), "sType_clone", 12, 916))->mParamTypes), come_pop_stackframe(), __exception_result_var_b67))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 918)), "sType_clone", 13, 919))->mParamNames!=((void*)0),            _if_conditional69) {
                __dec_obj31=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 13, 920)), "sType_clone", 13, 921))->mParamNames;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 13, 920)), "sType_clone", 13, 921))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(come_push_stackframe("sType_clone", 13, 987),__exception_result_var_b71=list$1charphp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 13, 922)), "sType_clone", 13, 923))->mParamNames), come_pop_stackframe(), __exception_result_var_b71))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional73=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 992)), "sType_clone", 14, 993))->mResultType!=((void*)0),            _if_conditional73) {
                __dec_obj32=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 14, 994)), "sType_clone", 14, 995))->mResultType;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 14, 994)), "sType_clone", 14, 995))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=(come_push_stackframe("sType_clone", 14, 998),__exception_result_var_b72=tuple1$1sTypephp_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 14, 996)), "sType_clone", 14, 997))->mResultType), come_pop_stackframe(), __exception_result_var_b72))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 15, 999)), "sType_clone", 15, 1000))->mVarArgs=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 15, 1001)), "sType_clone", 15, 1002))->mVarArgs;
            }
            if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1003)), "sType_clone", 16, 1004))->mAlignas!=((void*)0),            _if_conditional75) {
                __dec_obj33=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 16, 1005)), "sType_clone", 16, 1006))->mAlignas;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 16, 1005)), "sType_clone", 16, 1006))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=(come_push_stackframe("sType_clone", 16, 1009),__exception_result_var_b73=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 16, 1007)), "sType_clone", 16, 1008))->mAlignas), come_pop_stackframe(), __exception_result_var_b73))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 17, 1010)), "sType_clone", 17, 1011))->mUnsigned=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 17, 1012)), "sType_clone", 17, 1013))->mUnsigned;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 18, 1014)), "sType_clone", 18, 1015))->mShort=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 18, 1016)), "sType_clone", 18, 1017))->mShort;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 19, 1018)), "sType_clone", 19, 1019))->mLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 19, 1020)), "sType_clone", 19, 1021))->mLong;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 20, 1022)), "sType_clone", 20, 1023))->mLongLong=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 20, 1024)), "sType_clone", 20, 1025))->mLongLong;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 21, 1026)), "sType_clone", 21, 1027))->mConstant=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 21, 1028)), "sType_clone", 21, 1029))->mConstant;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 22, 1030)), "sType_clone", 22, 1031))->mRegister=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 22, 1032)), "sType_clone", 22, 1033))->mRegister;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 23, 1034)), "sType_clone", 23, 1035))->mVolatile=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 23, 1036)), "sType_clone", 23, 1037))->mVolatile;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 24, 1038)), "sType_clone", 24, 1039))->mStatic=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 24, 1040)), "sType_clone", 24, 1041))->mStatic;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 25, 1042)), "sType_clone", 25, 1043))->mUniq=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 25, 1044)), "sType_clone", 25, 1045))->mUniq;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 26, 1046)), "sType_clone", 26, 1047))->mRecord=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 26, 1048)), "sType_clone", 26, 1049))->mRecord;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 27, 1050)), "sType_clone", 27, 1051))->mExtern=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 27, 1052)), "sType_clone", 27, 1053))->mExtern;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 28, 1054)), "sType_clone", 28, 1055))->mRestrict=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 28, 1056)), "sType_clone", 28, 1057))->mRestrict;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 29, 1058)), "sType_clone", 29, 1059))->mImmutable=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 29, 1060)), "sType_clone", 29, 1061))->mImmutable;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 30, 1062)), "sType_clone", 30, 1063))->mHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 30, 1064)), "sType_clone", 30, 1065))->mHeap;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 31, 1066)), "sType_clone", 31, 1067))->mDummyHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 31, 1068)), "sType_clone", 31, 1069))->mDummyHeap;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 32, 1070)), "sType_clone", 32, 1071))->mDelegate=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 32, 1072)), "sType_clone", 32, 1073))->mDelegate;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 33, 1074)), "sType_clone", 33, 1075))->mShare=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 33, 1076)), "sType_clone", 33, 1077))->mShare;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 34, 1078)), "sType_clone", 34, 1079))->mClone=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 34, 1080)), "sType_clone", 34, 1081))->mClone;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 35, 1082)), "sType_clone", 35, 1083))->mNoHeap=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 35, 1084)), "sType_clone", 35, 1085))->mNoHeap;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 36, 1086)), "sType_clone", 36, 1087))->mNoCallingDestructor=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 36, 1088)), "sType_clone", 36, 1089))->mNoCallingDestructor;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 37, 1090)), "sType_clone", 37, 1091))->mRefference=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 37, 1092)), "sType_clone", 37, 1093))->mRefference;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 38, 1094)), "sType_clone", 38, 1095))->mException=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 38, 1096)), "sType_clone", 38, 1097))->mException;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 39, 1098)), "sType_clone", 39, 1099))->mPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 39, 1100)), "sType_clone", 39, 1101))->mPointerNum;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 40, 1102)), "sType_clone", 40, 1103))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 40, 1104)), "sType_clone", 40, 1105))->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 41, 1106)), "sType_clone", 41, 1107))->mNoArrayPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 41, 1108)), "sType_clone", 41, 1109))->mNoArrayPointerNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 42, 1110)), "sType_clone", 42, 1111))->mTypedefOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 42, 1112)), "sType_clone", 42, 1113))->mTypedefOriginalPointerNum;
            }
            if(_if_conditional102=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1114)), "sType_clone", 43, 1115))->mSizeNum!=((void*)0),            _if_conditional102) {
                __dec_obj34=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 43, 1116)), "sType_clone", 43, 1117))->mSizeNum;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 43, 1116)), "sType_clone", 43, 1117))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=(come_push_stackframe("sType_clone", 43, 1120),__exception_result_var_b74=sNode_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 43, 1118)), "sType_clone", 43, 1119))->mSizeNum), come_pop_stackframe(), __exception_result_var_b74))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 44, 1121)), "sType_clone", 44, 1122))->mDynamicArrayNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 44, 1123)), "sType_clone", 44, 1124))->mDynamicArrayNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 45, 1125)), "sType_clone", 45, 1126))->mTypeOfExpression=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 45, 1127)), "sType_clone", 45, 1128))->mTypeOfExpression;
            }
            if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1129)), "sType_clone", 46, 1130))->mOriginalTypeName!=((void*)0),            _if_conditional105) {
                __dec_obj35=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 46, 1131)), "sType_clone", 46, 1132))->mOriginalTypeName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 46, 1131)), "sType_clone", 46, 1132))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=(come_push_stackframe("sType_clone", 46, 1135),__exception_result_var_b75=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 46, 1133)), "sType_clone", 46, 1134))->mOriginalTypeName), come_pop_stackframe(), __exception_result_var_b75))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 47, 1136)), "sType_clone", 47, 1137))->mOriginalPointerNum=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 47, 1138)), "sType_clone", 47, 1139))->mOriginalPointerNum;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 48, 1140)), "sType_clone", 48, 1141))->mFunctionParam=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 48, 1142)), "sType_clone", 48, 1143))->mFunctionParam;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 49, 1144)), "sType_clone", 49, 1145))->mAllocaValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 49, 1146)), "sType_clone", 49, 1147))->mAllocaValue;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 50, 1148)), "sType_clone", 50, 1149))->mGenericsStruct=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 50, 1150)), "sType_clone", 50, 1151))->mGenericsStruct;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 51, 1152)), "sType_clone", 51, 1153))->mSolvedGenericsName=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 51, 1154)), "sType_clone", 51, 1155))->mSolvedGenericsName;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 52, 1156)), "sType_clone", 52, 1157))->mComeMemCore=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 52, 1158)), "sType_clone", 52, 1159))->mComeMemCore;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 53, 1160)), "sType_clone", 53, 1161))->mInline=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 53, 1162)), "sType_clone", 53, 1163))->mInline;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 54, 1164)), "sType_clone", 54, 1165))->mNullValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 54, 1166)), "sType_clone", 54, 1167))->mNullValue;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 55, 1168)), "sType_clone", 55, 1169))->mGuardValue=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 55, 1170)), "sType_clone", 55, 1171))->mGuardValue;
            }
            if(_if_conditional115=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1172)), "sType_clone", 56, 1173))->mAsmName!=((void*)0),            _if_conditional115) {
                __dec_obj36=((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 56, 1174)), "sType_clone", 56, 1175))->mAsmName;
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 56, 1174)), "sType_clone", 56, 1175))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=(come_push_stackframe("sType_clone", 56, 1178),__exception_result_var_b76=string_clone(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 56, 1176)), "sType_clone", 56, 1177))->mAsmName), come_pop_stackframe(), __exception_result_var_b76))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 57, 1179)), "sType_clone", 57, 1180))->mArrayPointerType=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 57, 1181)), "sType_clone", 57, 1182))->mArrayPointerType;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 58, 1183)), "sType_clone", 58, 1184))->mLambdaArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 58, 1185)), "sType_clone", 58, 1186))->mLambdaArray;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_49, "sType_clone", 59, 1187)), "sType_clone", 59, 1188))->mNoNumberArray=((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_clone", 59, 1189)), "sType_clone", 59, 1190))->mNoNumberArray;
            }
            __result71__ = __result_obj__ = result_49;
            come_call_finalizer3(result_49,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer3(result_49,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 602)), "sType_finalize", 0, 603))->mMultipleTypes!=((void*)0),                _if_conditional25) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 0, 604)), "sType_finalize", 0, 605))->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 614)), "sType_finalize", 1, 615))->mNoSolvedGenericsType!=((void*)0),                _if_conditional27) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 1, 616)), "sType_finalize", 1, 617))->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 622)), "sType_finalize", 2, 623))->mOriginalLoadVarType!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 2, 624)), "sType_finalize", 2, 625))->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 626)), "sType_finalize", 3, 627))->mGenericsName!=((void*)0),                _if_conditional30) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 628)), "sType_finalize", 3, 629))->mGenericsName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 3, 628)), "sType_finalize", 3, 629))->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 630)), "sType_finalize", 4, 631))->mGenericsTypes!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 4, 632)), "sType_finalize", 4, 633))->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 634)), "sType_finalize", 5, 635))->mArrayNum!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 5, 636)), "sType_finalize", 5, 637))->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 646)), "sType_finalize", 6, 647))->mParamTypes!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 6, 648)), "sType_finalize", 6, 649))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 650)), "sType_finalize", 7, 651))->mParamNames!=((void*)0),                _if_conditional35) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 7, 652)), "sType_finalize", 7, 653))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 662)), "sType_finalize", 8, 663))->mResultType!=((void*)0),                _if_conditional37) {
                    come_call_finalizer3(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 8, 664)), "sType_finalize", 8, 665))->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 666)), "sType_finalize", 9, 667))->mAlignas!=((void*)0),                _if_conditional38) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 668)), "sType_finalize", 9, 669))->mAlignas) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 668)), "sType_finalize", 9, 669))->mAlignas = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 668)), "sType_finalize", 9, 669))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 668)), "sType_finalize", 9, 669))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 9, 668)), "sType_finalize", 9, 669))->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 670)), "sType_finalize", 10, 671))->mSizeNum!=((void*)0),                _if_conditional39) {
                    if(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 672)), "sType_finalize", 10, 673))->mSizeNum) { ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 672)), "sType_finalize", 10, 673))->mSizeNum = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 672)), "sType_finalize", 10, 673))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 672)), "sType_finalize", 10, 673))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 10, 672)), "sType_finalize", 10, 673))->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 674)), "sType_finalize", 11, 675))->mOriginalTypeName!=((void*)0),                _if_conditional40) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 676)), "sType_finalize", 11, 677))->mOriginalTypeName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 11, 676)), "sType_finalize", 11, 677))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 678)), "sType_finalize", 12, 679))->mAsmName!=((void*)0),                _if_conditional41) {
                    ((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 680)), "sType_finalize", 12, 681))->mAsmName = come_decrement_ref_count2(((struct sType*)come_null_check(((struct sType*)come_null_check(self, "sType_finalize", 12, 680)), "sType_finalize", 12, 681))->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
                        it_50=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 606)), "./neo-c.h", 120, 607))->head;
                        while(_while_condtional7=it_50!=((void*)0),                        _while_condtional7) {
                            prev_it_51=it_50;
                            it_50=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_50, "./neo-c.h", 123, 608)), "./neo-c.h", 123, 609))->next;
                            come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 610)), "list_item$1sTypephp_finalize", 0, 611))->item!=((void*)0),                                _if_conditional26) {
                                    come_call_finalizer3(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0, 612)), "list_item$1sTypephp_finalize", 0, 613))->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional28=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 618)), "tuple1$1sTypephp_finalize", 0, 619))->v1!=((void*)0),                        _if_conditional28) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0, 620)), "tuple1$1sTypephp_finalize", 0, 621))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                        it_52=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 638)), "./neo-c.h", 120, 639))->head;
                        while(_while_condtional8=it_52!=((void*)0),                        _while_condtional8) {
                            prev_it_53=it_52;
                            it_52=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_52, "./neo-c.h", 123, 640)), "./neo-c.h", 123, 641))->next;
                            come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional33=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 642)), "list_item$1sNodephp_finalize", 0, 643))->item!=((void*)0),                                _if_conditional33) {
                                    if(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 644)), "list_item$1sNodephp_finalize", 0, 645))->item) { ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 644)), "list_item$1sNodephp_finalize", 0, 645))->item = come_decrement_ref_count2(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 644)), "list_item$1sNodephp_finalize", 0, 645))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 644)), "list_item$1sNodephp_finalize", 0, 645))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0, 644)), "list_item$1sNodephp_finalize", 0, 645))->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                        it_54=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 654)), "./neo-c.h", 120, 655))->head;
                        while(_while_condtional9=it_54!=((void*)0),                        _while_condtional9) {
                            prev_it_55=it_54;
                            it_54=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_54, "./neo-c.h", 123, 656)), "./neo-c.h", 123, 657))->next;
                            come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional36=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 658)), "list_item$1charphp_finalize", 0, 659))->item!=((void*)0),                                _if_conditional36) {
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 660)), "list_item$1charphp_finalize", 0, 661))->item = come_decrement_ref_count2(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0, 660)), "list_item$1charphp_finalize", 0, 661))->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sTypeph* __result55__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* __exception_result_var_b54;
struct list$1sTypeph* result_56;
struct list_item$1sTypeph* it_57;
_Bool _while_condtional10;
struct sType* __exception_result_var_b55;
void* right_value88;
struct list$1sTypeph* __exception_result_var_b56;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_56, 0, sizeof(struct list$1sTypeph*));
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                    if(_if_conditional44=self==((void*)0),                    _if_conditional44) {
                        __result55__ = __result_obj__ = ((void*)0);
                        return __result55__;
                    }
                    result_56=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 700),__exception_result_var_b54=((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))), "./neo-c.h", 139, 692)), "./neo-c.h", 139, 693)))))), come_pop_stackframe(), __exception_result_var_b54));
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_57=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 141, 701)), "./neo-c.h", 141, 702))->head;
                    while(_while_condtional10=it_57!=((void*)0),                    _while_condtional10) {
                        (come_push_stackframe("./neo-c.h", 143, 752),__exception_result_var_b56=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(result_56, "./neo-c.h", 143, 703)), "./neo-c.h", 143, 704)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=(come_push_stackframe("./neo-c.h", 143, 751),__exception_result_var_b55=sType_clone(((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_57, "./neo-c.h", 143, 749)), "./neo-c.h", 143, 750))->item), come_pop_stackframe(), __exception_result_var_b55))))), come_pop_stackframe(), __exception_result_var_b56);
                        come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_57=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_57, "./neo-c.h", 145, 753)), "./neo-c.h", 145, 754))->next;
                    }
                    __result58__ = __result_obj__ = result_56;
                    come_call_finalizer3(result_56,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(result_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 101, 694)), "./neo-c.h", 101, 695))->head=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 102, 696)), "./neo-c.h", 102, 697))->tail=((void*)0);
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 103, 698)), "./neo-c.h", 103, 699))->len=0;
                        __result56__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
_Bool _if_conditional46;
void* right_value86;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj15;
void* right_value87;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj16;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional45=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 152, 705)), "./neo-c.h", 152, 706))->len==0,                            _if_conditional45) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 155, 707)), "./neo-c.h", 155, 708))->prev=((void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 156, 709)), "./neo-c.h", 156, 710))->next=((void*)0);
                                __dec_obj14=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 157, 711)), "./neo-c.h", 157, 712))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_58, "./neo-c.h", 157, 711)), "./neo-c.h", 157, 712))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 159, 713)), "./neo-c.h", 159, 714))->tail=litem_58;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 160, 715)), "./neo-c.h", 160, 716))->head=litem_58;
                            }
                            else {
                                if(_if_conditional46=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 162, 717)), "./neo-c.h", 162, 718))->len==1,                                _if_conditional46) {
                                    litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 165, 719)), "./neo-c.h", 165, 720))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 165, 721)), "./neo-c.h", 165, 722))->head;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 166, 723)), "./neo-c.h", 166, 724))->next=((void*)0);
                                    __dec_obj15=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 167, 725)), "./neo-c.h", 167, 726))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_59, "./neo-c.h", 167, 725)), "./neo-c.h", 167, 726))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 169, 727)), "./neo-c.h", 169, 728))->tail=litem_59;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 170, 729)), "./neo-c.h", 170, 730))->head, "./neo-c.h", 170, 731)), "./neo-c.h", 170, 732))->next=litem_59;
                                }
                                else {
                                    litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_60, "./neo-c.h", 175, 733)), "./neo-c.h", 175, 734))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 175, 735)), "./neo-c.h", 175, 736))->tail;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_60, "./neo-c.h", 176, 737)), "./neo-c.h", 176, 738))->next=((void*)0);
                                    __dec_obj16=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_60, "./neo-c.h", 177, 739)), "./neo-c.h", 177, 740))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_60, "./neo-c.h", 177, 739)), "./neo-c.h", 177, 740))->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 179, 741)), "./neo-c.h", 179, 742))->tail, "./neo-c.h", 179, 743)), "./neo-c.h", 179, 744))->next=litem_60;
                                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 180, 745)), "./neo-c.h", 180, 746))->tail=litem_60;
                                }
                            }
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 183, 747)), "./neo-c.h", 183, 748))->len++;
                            __result57__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result57__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_61;
_Bool _while_condtional11;
struct list_item$1sTypeph* prev_it_62;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_62, 0, sizeof(struct list_item$1sTypeph*));
                    it_61=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 120, 756)), "./neo-c.h", 120, 757))->head;
                    while(_while_condtional11=it_61!=((void*)0),                    _while_condtional11) {
                        prev_it_62=it_61;
                        it_61=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_61, "./neo-c.h", 123, 758)), "./neo-c.h", 123, 759))->next;
                        come_call_finalizer3(prev_it_62,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __result59__;
void* right_value90;
struct tuple1$1sTypeph* result_63;
_Bool _if_conditional50;
struct sType* __exception_result_var_b58;
void* right_value91;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_63, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                    if(_if_conditional48=self==(void*)0,                    _if_conditional48) {
                        __result59__ = __result_obj__ = (void*)0;
                        return __result59__;
                    }
                    result_63=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value90,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional50=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 770)), "tuple1$1sTypephp_clone", 4, 771))->v1!=((void*)0),                    _if_conditional50) {
                        __dec_obj18=((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_63, "tuple1$1sTypephp_clone", 4, 772)), "tuple1$1sTypephp_clone", 4, 773))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(result_63, "tuple1$1sTypephp_clone", 4, 772)), "tuple1$1sTypephp_clone", 4, 773))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=(come_push_stackframe("tuple1$1sTypephp_clone", 4, 776),__exception_result_var_b58=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4, 774)), "tuple1$1sTypephp_clone", 4, 775))->v1), come_pop_stackframe(), __exception_result_var_b58))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result60__ = __result_obj__ = result_63;
                    come_call_finalizer3(result_63,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(result_63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional49=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 766)), "tuple1$1sTypeph_finalize", 0, 767))->v1!=((void*)0),                        _if_conditional49) {
                            come_call_finalizer3(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0, 768)), "tuple1$1sTypeph_finalize", 0, 769))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sNodeph* __result61__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* __exception_result_var_b63;
struct list$1sNodeph* result_64;
struct list_item$1sNodeph* it_65;
_Bool _while_condtional12;
struct sNode* __exception_result_var_b64;
void* right_value102;
struct list$1sNodeph* __exception_result_var_b65;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_65, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                    if(_if_conditional55=self==((void*)0),                    _if_conditional55) {
                        __result61__ = __result_obj__ = ((void*)0);
                        return __result61__;
                    }
                    result_64=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 813),__exception_result_var_b63=((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))), "./neo-c.h", 139, 805)), "./neo-c.h", 139, 806)))))), come_pop_stackframe(), __exception_result_var_b63));
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_65=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 141, 814)), "./neo-c.h", 141, 815))->head;
                    while(_while_condtional12=it_65!=((void*)0),                    _while_condtional12) {
                        (come_push_stackframe("./neo-c.h", 143, 899),__exception_result_var_b65=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(result_64, "./neo-c.h", 143, 816)), "./neo-c.h", 143, 817)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(come_push_stackframe("./neo-c.h", 143, 898),__exception_result_var_b64=sNode_clone(((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_65, "./neo-c.h", 143, 862)), "./neo-c.h", 143, 863))->item), come_pop_stackframe(), __exception_result_var_b64))))), come_pop_stackframe(), __exception_result_var_b65);
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_65=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_65, "./neo-c.h", 145, 900)), "./neo-c.h", 145, 901))->next;
                    }
                    __result66__ = __result_obj__ = result_64;
                    come_call_finalizer3(result_64,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(result_64,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 101, 807)), "./neo-c.h", 101, 808))->head=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 102, 809)), "./neo-c.h", 102, 810))->tail=((void*)0);
                        ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 103, 811)), "./neo-c.h", 103, 812))->len=0;
                        __result62__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result62__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
_Bool _if_conditional57;
void* right_value99;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj24;
void* right_value100;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional56=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 152, 818)), "./neo-c.h", 152, 819))->len==0,                            _if_conditional56) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 155, 820)), "./neo-c.h", 155, 821))->prev=((void*)0);
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 156, 822)), "./neo-c.h", 156, 823))->next=((void*)0);
                                __dec_obj23=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 157, 824)), "./neo-c.h", 157, 825))->item;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_66, "./neo-c.h", 157, 824)), "./neo-c.h", 157, 825))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 159, 826)), "./neo-c.h", 159, 827))->tail=litem_66;
                                ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 160, 828)), "./neo-c.h", 160, 829))->head=litem_66;
                            }
                            else {
                                if(_if_conditional57=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 162, 830)), "./neo-c.h", 162, 831))->len==1,                                _if_conditional57) {
                                    litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 165, 832)), "./neo-c.h", 165, 833))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 165, 834)), "./neo-c.h", 165, 835))->head;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 166, 836)), "./neo-c.h", 166, 837))->next=((void*)0);
                                    __dec_obj24=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 167, 838)), "./neo-c.h", 167, 839))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_67, "./neo-c.h", 167, 838)), "./neo-c.h", 167, 839))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 169, 840)), "./neo-c.h", 169, 841))->tail=litem_67;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 170, 842)), "./neo-c.h", 170, 843))->head, "./neo-c.h", 170, 844)), "./neo-c.h", 170, 845))->next=litem_67;
                                }
                                else {
                                    litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_68, "./neo-c.h", 175, 846)), "./neo-c.h", 175, 847))->prev=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 175, 848)), "./neo-c.h", 175, 849))->tail;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_68, "./neo-c.h", 176, 850)), "./neo-c.h", 176, 851))->next=((void*)0);
                                    __dec_obj25=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_68, "./neo-c.h", 177, 852)), "./neo-c.h", 177, 853))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(litem_68, "./neo-c.h", 177, 852)), "./neo-c.h", 177, 853))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 179, 854)), "./neo-c.h", 179, 855))->tail, "./neo-c.h", 179, 856)), "./neo-c.h", 179, 857))->next=litem_68;
                                    ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 180, 858)), "./neo-c.h", 180, 859))->tail=litem_68;
                                }
                            }
                            ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 183, 860)), "./neo-c.h", 183, 861))->len++;
                            __result63__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result63__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional58;
struct sNode* __result64__;
void* right_value101;
struct sNode* result_69;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
struct sNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_69, 0, sizeof(struct sNode*));
                            if(_if_conditional58=self==(void*)0,                            _if_conditional58) {
                                __result64__ = __result_obj__ = (void*)0;
                                return __result64__;
                            }
                            result_69=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional59=self!=((void*)0)&&((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 864)), "sNode_clone", 4, 865))->clone!=((void*)0),                            _if_conditional59) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 4, 866)), "sNode_clone", 4, 867))->_protocol_obj=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 868)), "sNode_clone", 4, 869))->clone(((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 4, 868)), "sNode_clone", 4, 869))->_protocol_obj);
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 5, 870)), "sNode_clone", 5, 871))->finalize=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 5, 872)), "sNode_clone", 5, 873))->finalize;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 6, 874)), "sNode_clone", 6, 875))->clone=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 6, 876)), "sNode_clone", 6, 877))->clone;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 7, 878)), "sNode_clone", 7, 879))->compile=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 7, 880)), "sNode_clone", 7, 881))->compile;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 8, 882)), "sNode_clone", 8, 883))->sline=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 8, 884)), "sNode_clone", 8, 885))->sline;
                            }
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 9, 886)), "sNode_clone", 9, 887))->sname=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 9, 888)), "sNode_clone", 9, 889))->sname;
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 10, 890)), "sNode_clone", 10, 891))->terminated=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 10, 892)), "sNode_clone", 10, 893))->terminated;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                ((struct sNode*)come_null_check(((struct sNode*)come_null_check(result_69, "sNode_clone", 11, 894)), "sNode_clone", 11, 895))->kind=((struct sNode*)come_null_check(((struct sNode*)come_null_check(self, "sNode_clone", 11, 896)), "sNode_clone", 11, 897))->kind;
                            }
                            __result65__ = __result_obj__ = result_69;
                            if(result_69) { result_69 = come_decrement_ref_count2(result_69, ((struct sNode*)result_69)->finalize, ((struct sNode*)result_69)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result65__;
                            if(result_69) { result_69 = come_decrement_ref_count2(result_69, ((struct sNode*)result_69)->finalize, ((struct sNode*)result_69)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_70;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_71;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_71, 0, sizeof(struct list_item$1sNodeph*));
                    it_70=((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 120, 903)), "./neo-c.h", 120, 904))->head;
                    while(_while_condtional13=it_70!=((void*)0),                    _while_condtional13) {
                        prev_it_71=it_70;
                        it_70=((struct list_item$1sNodeph*)come_null_check(((struct list_item$1sNodeph*)come_null_check(it_70, "./neo-c.h", 123, 905)), "./neo-c.h", 123, 906))->next;
                        come_call_finalizer3(prev_it_71,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct list$1charph* __result67__;
void* right_value105;
void* right_value106;
struct list$1charph* __exception_result_var_b68;
struct list$1charph* result_72;
struct list_item$1charph* it_73;
_Bool _while_condtional14;
char* __exception_result_var_b69;
void* right_value110;
struct list$1charph* __exception_result_var_b70;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1charph*));
memset(&it_73, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                    if(_if_conditional70=self==((void*)0),                    _if_conditional70) {
                        __result67__ = __result_obj__ = ((void*)0);
                        return __result67__;
                    }
                    result_72=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 932),__exception_result_var_b68=((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))), "./neo-c.h", 139, 924)), "./neo-c.h", 139, 925)))))), come_pop_stackframe(), __exception_result_var_b68));
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_73=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 141, 933)), "./neo-c.h", 141, 934))->head;
                    while(_while_condtional14=it_73!=((void*)0),                    _while_condtional14) {
                        (come_push_stackframe("./neo-c.h", 143, 984),__exception_result_var_b70=list$1charph_add(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(result_72, "./neo-c.h", 143, 935)), "./neo-c.h", 143, 936)),(char*)come_increment_ref_count(((char*)(right_value110=(come_push_stackframe("./neo-c.h", 143, 983),__exception_result_var_b69=string_clone(((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_73, "./neo-c.h", 143, 981)), "./neo-c.h", 143, 982))->item), come_pop_stackframe(), __exception_result_var_b69))))), come_pop_stackframe(), __exception_result_var_b70);
                        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_73=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_73, "./neo-c.h", 145, 985)), "./neo-c.h", 145, 986))->next;
                    }
                    __result70__ = __result_obj__ = result_72;
                    come_call_finalizer3(result_72,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(result_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 101, 926)), "./neo-c.h", 101, 927))->head=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 102, 928)), "./neo-c.h", 102, 929))->tail=((void*)0);
                        ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 103, 930)), "./neo-c.h", 103, 931))->len=0;
                        __result68__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result68__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional71;
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj28;
_Bool _if_conditional72;
void* right_value108;
struct list_item$1charph* litem_75;
char* __dec_obj29;
void* right_value109;
struct list_item$1charph* litem_76;
char* __dec_obj30;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional71=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 152, 937)), "./neo-c.h", 152, 938))->len==0,                            _if_conditional71) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 155, 939)), "./neo-c.h", 155, 940))->prev=((void*)0);
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 156, 941)), "./neo-c.h", 156, 942))->next=((void*)0);
                                __dec_obj28=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 157, 943)), "./neo-c.h", 157, 944))->item;
                                ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_74, "./neo-c.h", 157, 943)), "./neo-c.h", 157, 944))->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 159, 945)), "./neo-c.h", 159, 946))->tail=litem_74;
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 160, 947)), "./neo-c.h", 160, 948))->head=litem_74;
                            }
                            else {
                                if(_if_conditional72=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 162, 949)), "./neo-c.h", 162, 950))->len==1,                                _if_conditional72) {
                                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 165, 951)), "./neo-c.h", 165, 952))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 165, 953)), "./neo-c.h", 165, 954))->head;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 166, 955)), "./neo-c.h", 166, 956))->next=((void*)0);
                                    __dec_obj29=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 167, 957)), "./neo-c.h", 167, 958))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_75, "./neo-c.h", 167, 957)), "./neo-c.h", 167, 958))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 169, 959)), "./neo-c.h", 169, 960))->tail=litem_75;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 170, 961)), "./neo-c.h", 170, 962))->head, "./neo-c.h", 170, 963)), "./neo-c.h", 170, 964))->next=litem_75;
                                }
                                else {
                                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_76, "./neo-c.h", 175, 965)), "./neo-c.h", 175, 966))->prev=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 175, 967)), "./neo-c.h", 175, 968))->tail;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_76, "./neo-c.h", 176, 969)), "./neo-c.h", 176, 970))->next=((void*)0);
                                    __dec_obj30=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_76, "./neo-c.h", 177, 971)), "./neo-c.h", 177, 972))->item;
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(litem_76, "./neo-c.h", 177, 971)), "./neo-c.h", 177, 972))->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 179, 973)), "./neo-c.h", 179, 974))->tail, "./neo-c.h", 179, 975)), "./neo-c.h", 179, 976))->next=litem_76;
                                    ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 180, 977)), "./neo-c.h", 180, 978))->tail=litem_76;
                                }
                            }
                            ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 183, 979)), "./neo-c.h", 183, 980))->len++;
                            __result69__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result69__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_77;
_Bool _while_condtional15;
struct list_item$1charph* prev_it_78;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
                    it_77=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 120, 988)), "./neo-c.h", 120, 989))->head;
                    while(_while_condtional15=it_77!=((void*)0),                    _while_condtional15) {
                        prev_it_78=it_77;
                        it_77=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_77, "./neo-c.h", 123, 990)), "./neo-c.h", 123, 991))->next;
                        come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional121=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1211)), "CVALUE_finalize", 0, 1212))->c_value!=((void*)0),            _if_conditional121) {
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1213)), "CVALUE_finalize", 0, 1214))->c_value = come_decrement_ref_count2(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0, 1213)), "CVALUE_finalize", 0, 1214))->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional122=self!=((void*)0)&&((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1215)), "CVALUE_finalize", 1, 1216))->type!=((void*)0),            _if_conditional122) {
                come_call_finalizer3(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1, 1217)), "CVALUE_finalize", 1, 1218))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
struct sNodeBase* __exception_result_var_b92;
struct sLineNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    (come_push_stackframe("05call.c", 103, 1296),__exception_result_var_b92=((struct sNodeBase*)(right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "05call.c", 103, 1294)), "05call.c", 103, 1295))),info))), come_pop_stackframe(), __exception_result_var_b92);
    come_call_finalizer3(right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* right_value128;
char* __exception_result_var_b93;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    __result75__ = __result_obj__ = (come_push_stackframe("05call.c", 108, 1301),__exception_result_var_b93=((char*)(right_value128=__builtin_string("sLineNode"))), come_pop_stackframe(), __exception_result_var_b93);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
struct CVALUE* come_value_88;
void* right_value130;
char* __exception_result_var_b94;
char* __dec_obj38;
void* right_value131;
void* right_value132;
struct sType* __exception_result_var_b95;
struct sType* __dec_obj39;
struct list$1CVALUEph* __exception_result_var_b96;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 113, "CVALUE"))));
    come_call_finalizer3(right_value129,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj38=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 115, 1302)), "05call.c", 115, 1303))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 115, 1302)), "05call.c", 115, 1303))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 115, 1306),__exception_result_var_b94=((char*)(right_value130=xsprintf("%d",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 115, 1304)), "05call.c", 115, 1305))->sline))), come_pop_stackframe(), __exception_result_var_b94));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj39=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 116, 1307)), "05call.c", 116, 1308))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 116, 1307)), "05call.c", 116, 1308))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 116, 1310),__exception_result_var_b95=((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 116, "sType"))), "05call.c", 116, 1309))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b95));
    come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 117, 1311)), "05call.c", 117, 1312))->var=((void*)0);
    (come_push_stackframe("05call.c", 119, 1365),__exception_result_var_b96=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 119, 1313)), "05call.c", 119, 1314))->stack, "05call.c", 119, 1315)), "05call.c", 119, 1316)),(struct CVALUE*)come_increment_ref_count(come_value_88)), come_pop_stackframe(), __exception_result_var_b96);
    (come_push_stackframe("05call.c", 121,1368),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_88, "05call.c", 121, 1366)), "05call.c", 121, 1367))->c_value),come_pop_stackframe());
    __result77__ = (_Bool)1;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional129;
void* right_value133;
struct list_item$1CVALUEph* litem_89;
struct CVALUE* __dec_obj40;
_Bool _if_conditional131;
void* right_value134;
struct list_item$1CVALUEph* litem_90;
struct CVALUE* __dec_obj41;
void* right_value135;
struct list_item$1CVALUEph* litem_91;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1CVALUEph*));
right_value134 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1CVALUEph*));
right_value135 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional129=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 222, 1317)), "./neo-c.h", 222, 1318))->len==0,        _if_conditional129) {
            litem_89=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_89, "./neo-c.h", 225, 1323)), "./neo-c.h", 225, 1324))->prev=((void*)0);
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_89, "./neo-c.h", 226, 1325)), "./neo-c.h", 226, 1326))->next=((void*)0);
            __dec_obj40=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_89, "./neo-c.h", 227, 1327)), "./neo-c.h", 227, 1328))->item;
            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_89, "./neo-c.h", 227, 1327)), "./neo-c.h", 227, 1328))->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 229, 1329)), "./neo-c.h", 229, 1330))->tail=litem_89;
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 230, 1331)), "./neo-c.h", 230, 1332))->head=litem_89;
        }
        else {
            if(_if_conditional131=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 232, 1333)), "./neo-c.h", 232, 1334))->len==1,            _if_conditional131) {
                litem_90=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value134,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_90, "./neo-c.h", 235, 1335)), "./neo-c.h", 235, 1336))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 235, 1337)), "./neo-c.h", 235, 1338))->head;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_90, "./neo-c.h", 236, 1339)), "./neo-c.h", 236, 1340))->next=((void*)0);
                __dec_obj41=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_90, "./neo-c.h", 237, 1341)), "./neo-c.h", 237, 1342))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_90, "./neo-c.h", 237, 1341)), "./neo-c.h", 237, 1342))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 239, 1343)), "./neo-c.h", 239, 1344))->tail=litem_90;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 240, 1345)), "./neo-c.h", 240, 1346))->head, "./neo-c.h", 240, 1347)), "./neo-c.h", 240, 1348))->next=litem_90;
            }
            else {
                litem_91=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value135,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_91, "./neo-c.h", 245, 1349)), "./neo-c.h", 245, 1350))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 245, 1351)), "./neo-c.h", 245, 1352))->tail;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_91, "./neo-c.h", 246, 1353)), "./neo-c.h", 246, 1354))->next=((void*)0);
                __dec_obj42=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_91, "./neo-c.h", 247, 1355)), "./neo-c.h", 247, 1356))->item;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_91, "./neo-c.h", 247, 1355)), "./neo-c.h", 247, 1356))->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 249, 1357)), "./neo-c.h", 249, 1358))->tail, "./neo-c.h", 249, 1359)), "./neo-c.h", 249, 1360))->next=litem_91;
                ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 250, 1361)), "./neo-c.h", 250, 1362))->tail=litem_91;
            }
        }
        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 253, 1363)), "./neo-c.h", 253, 1364))->len++;
        __result76__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result76__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional130=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1319)), "list_item$1CVALUEphp_finalize", 0, 1320))->item!=((void*)0),                _if_conditional130) {
                    come_call_finalizer3(((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0, 1321)), "list_item$1CVALUEphp_finalize", 0, 1322))->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
struct sNodeBase* __exception_result_var_b97;
struct sSNameNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    (come_push_stackframe("05call.c", 131, 1371),__exception_result_var_b97=((struct sNodeBase*)(right_value136=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "05call.c", 131, 1369)), "05call.c", 131, 1370))),info))), come_pop_stackframe(), __exception_result_var_b97);
    come_call_finalizer3(right_value136,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result78__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* right_value137;
char* __exception_result_var_b98;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result79__ = __result_obj__ = (come_push_stackframe("05call.c", 136, 1376),__exception_result_var_b98=((char*)(right_value137=__builtin_string("sSNameNode"))), come_pop_stackframe(), __exception_result_var_b98);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct CVALUE* come_value_92;
void* right_value139;
char* __exception_result_var_b99;
char* __dec_obj43;
void* right_value140;
void* right_value141;
struct sType* __exception_result_var_b100;
struct sType* __dec_obj44;
struct list$1CVALUEph* __exception_result_var_b101;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 141, "CVALUE"))));
    come_call_finalizer3(right_value138,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 143, 1377)), "05call.c", 143, 1378))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 143, 1377)), "05call.c", 143, 1378))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 143, 1381),__exception_result_var_b99=((char*)(right_value139=xsprintf("\"%s\"",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 143, 1379)), "05call.c", 143, 1380))->sname))), come_pop_stackframe(), __exception_result_var_b99));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj44=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 144, 1382)), "05call.c", 144, 1383))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 144, 1382)), "05call.c", 144, 1383))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 144, 1385),__exception_result_var_b100=((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 144, "sType"))), "05call.c", 144, 1384))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b100));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 145, 1386)), "05call.c", 145, 1387))->var=((void*)0);
    (come_push_stackframe("05call.c", 147, 1392),__exception_result_var_b101=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 147, 1388)), "05call.c", 147, 1389))->stack, "05call.c", 147, 1390)), "05call.c", 147, 1391)),(struct CVALUE*)come_increment_ref_count(come_value_92)), come_pop_stackframe(), __exception_result_var_b101);
    (come_push_stackframe("05call.c", 149,1395),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_92, "05call.c", 149, 1393)), "05call.c", 149, 1394))->c_value),come_pop_stackframe());
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
struct sNodeBase* __exception_result_var_b102;
struct sFuncNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    (come_push_stackframe("05call.c", 159, 1398),__exception_result_var_b102=((struct sNodeBase*)(right_value142=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "05call.c", 159, 1396)), "05call.c", 159, 1397))),info))), come_pop_stackframe(), __exception_result_var_b102);
    come_call_finalizer3(right_value142,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* right_value143;
char* __exception_result_var_b103;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result82__ = __result_obj__ = (come_push_stackframe("05call.c", 164, 1403),__exception_result_var_b103=((char*)(right_value143=__builtin_string("sFuncNode"))), come_pop_stackframe(), __exception_result_var_b103);
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct CVALUE* come_value_93;
void* right_value145;
char* __exception_result_var_b104;
char* __dec_obj45;
void* right_value146;
void* right_value147;
struct sType* __exception_result_var_b105;
struct sType* __dec_obj46;
struct list$1CVALUEph* __exception_result_var_b106;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 171, 1404)), "05call.c", 171, 1405))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 171, 1404)), "05call.c", 171, 1405))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 171, 1410),__exception_result_var_b104=((char*)(right_value145=xsprintf("\"%s\"",((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 171, 1406)), "05call.c", 171, 1407))->come_fun, "05call.c", 171, 1408)), "05call.c", 171, 1409))->mName))), come_pop_stackframe(), __exception_result_var_b104));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 172, 1411)), "05call.c", 172, 1412))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 172, 1411)), "05call.c", 172, 1412))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 172, 1414),__exception_result_var_b105=((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 172, "sType"))), "05call.c", 172, 1413))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b105));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 174, 1415)), "05call.c", 174, 1416))->var=((void*)0);
    (come_push_stackframe("05call.c", 176, 1421),__exception_result_var_b106=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 176, 1417)), "05call.c", 176, 1418))->stack, "05call.c", 176, 1419)), "05call.c", 176, 1420)),(struct CVALUE*)come_increment_ref_count(come_value_93)), come_pop_stackframe(), __exception_result_var_b106);
    (come_push_stackframe("05call.c", 178,1424),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_93, "05call.c", 178, 1422)), "05call.c", 178, 1423))->c_value),come_pop_stackframe());
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct sNodeBase* __exception_result_var_b107;
struct sCallerFuncNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    (come_push_stackframe("05call.c", 188, 1427),__exception_result_var_b107=((struct sNodeBase*)(right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "05call.c", 188, 1425)), "05call.c", 188, 1426))),info))), come_pop_stackframe(), __exception_result_var_b107);
    come_call_finalizer3(right_value148,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* right_value149;
char* __exception_result_var_b108;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result85__ = __result_obj__ = (come_push_stackframe("05call.c", 193, 1432),__exception_result_var_b108=((char*)(right_value149=__builtin_string("sCallerFuncNode"))), come_pop_stackframe(), __exception_result_var_b108);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct CVALUE* come_value_94;
_Bool _if_conditional135;
void* right_value151;
char* __exception_result_var_b109;
char* __dec_obj47;
void* right_value152;
char* __exception_result_var_b110;
char* __dec_obj48;
void* right_value153;
void* right_value154;
struct sType* __exception_result_var_b111;
struct sType* __dec_obj49;
struct list$1CVALUEph* __exception_result_var_b112;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 198, "CVALUE"))));
    come_call_finalizer3(right_value150,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    if(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 200, 1433)), "05call.c", 200, 1434))->caller_fun) {
        __dec_obj47=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 201, 1435)), "05call.c", 201, 1436))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 201, 1435)), "05call.c", 201, 1436))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 201, 1441),__exception_result_var_b109=((char*)(right_value151=xsprintf("\"%s\"",((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 201, 1437)), "05call.c", 201, 1438))->caller_fun, "05call.c", 201, 1439)), "05call.c", 201, 1440))->mName))), come_pop_stackframe(), __exception_result_var_b109));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj48=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 204, 1442)), "05call.c", 204, 1443))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 204, 1442)), "05call.c", 204, 1443))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 204, 1444),__exception_result_var_b110=((char*)(right_value152=xsprintf("\"\""))), come_pop_stackframe(), __exception_result_var_b110));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj49=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 206, 1445)), "05call.c", 206, 1446))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 206, 1445)), "05call.c", 206, 1446))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 206, 1448),__exception_result_var_b111=((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 206, "sType"))), "05call.c", 206, 1447))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b111));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 208, 1449)), "05call.c", 208, 1450))->var=((void*)0);
    (come_push_stackframe("05call.c", 210, 1455),__exception_result_var_b112=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 210, 1451)), "05call.c", 210, 1452))->stack, "05call.c", 210, 1453)), "05call.c", 210, 1454)),(struct CVALUE*)come_increment_ref_count(come_value_94)), come_pop_stackframe(), __exception_result_var_b112);
    (come_push_stackframe("05call.c", 212,1458),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_94, "05call.c", 212, 1456)), "05call.c", 212, 1457))->c_value),come_pop_stackframe());
    __result86__ = (_Bool)1;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
struct sNodeBase* __exception_result_var_b113;
struct sCallerLineNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    (come_push_stackframe("05call.c", 222, 1461),__exception_result_var_b113=((struct sNodeBase*)(right_value155=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "05call.c", 222, 1459)), "05call.c", 222, 1460))),info))), come_pop_stackframe(), __exception_result_var_b113);
    come_call_finalizer3(right_value155,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result87__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
struct CVALUE* come_value_95;
void* right_value157;
char* __exception_result_var_b114;
char* __dec_obj50;
void* right_value158;
void* right_value159;
struct sType* __exception_result_var_b115;
struct sType* __dec_obj51;
struct list$1CVALUEph* __exception_result_var_b116;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 227, "CVALUE"))));
    come_call_finalizer3(right_value156,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 229, 1466)), "05call.c", 229, 1467))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 229, 1466)), "05call.c", 229, 1467))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 229, 1470),__exception_result_var_b114=((char*)(right_value157=xsprintf("%d",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 229, 1468)), "05call.c", 229, 1469))->caller_line))), come_pop_stackframe(), __exception_result_var_b114));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 230, 1471)), "05call.c", 230, 1472))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 230, 1471)), "05call.c", 230, 1472))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 230, 1474),__exception_result_var_b115=((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 230, "sType"))), "05call.c", 230, 1473))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b115));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 231, 1475)), "05call.c", 231, 1476))->var=((void*)0);
    (come_push_stackframe("05call.c", 233, 1481),__exception_result_var_b116=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 233, 1477)), "05call.c", 233, 1478))->stack, "05call.c", 233, 1479)), "05call.c", 233, 1480)),(struct CVALUE*)come_increment_ref_count(come_value_95)), come_pop_stackframe(), __exception_result_var_b116);
    (come_push_stackframe("05call.c", 235,1484),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_95, "05call.c", 235, 1482)), "05call.c", 235, 1483))->c_value),come_pop_stackframe());
    __result88__ = (_Bool)1;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* right_value160;
char* __exception_result_var_b117;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result89__ = __result_obj__ = (come_push_stackframe("05call.c", 242, 1485),__exception_result_var_b117=((char*)(right_value160=__builtin_string("sCallerLineNode"))), come_pop_stackframe(), __exception_result_var_b117);
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct sNodeBase* __exception_result_var_b118;
struct sCallerSNameNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    (come_push_stackframe("05call.c", 250, 1488),__exception_result_var_b118=((struct sNodeBase*)(right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "05call.c", 250, 1486)), "05call.c", 250, 1487))),info))), come_pop_stackframe(), __exception_result_var_b118);
    come_call_finalizer3(right_value161,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
struct CVALUE* come_value_96;
void* right_value163;
char* __exception_result_var_b119;
char* __dec_obj52;
void* right_value164;
void* right_value165;
struct sType* __exception_result_var_b120;
struct sType* __dec_obj53;
struct list$1CVALUEph* __exception_result_var_b121;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 255, "CVALUE"))));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 257, 1493)), "05call.c", 257, 1494))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 257, 1493)), "05call.c", 257, 1494))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 257, 1497),__exception_result_var_b119=((char*)(right_value163=xsprintf("\"%s\"",((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 257, 1495)), "05call.c", 257, 1496))->caller_sname))), come_pop_stackframe(), __exception_result_var_b119));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 258, 1498)), "05call.c", 258, 1499))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 258, 1498)), "05call.c", 258, 1499))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 258, 1501),__exception_result_var_b120=((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 258, "sType"))), "05call.c", 258, 1500))),"char*",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b120));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 259, 1502)), "05call.c", 259, 1503))->var=((void*)0);
    (come_push_stackframe("05call.c", 261, 1508),__exception_result_var_b121=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 261, 1504)), "05call.c", 261, 1505))->stack, "05call.c", 261, 1506)), "05call.c", 261, 1507)),(struct CVALUE*)come_increment_ref_count(come_value_96)), come_pop_stackframe(), __exception_result_var_b121);
    (come_push_stackframe("05call.c", 263,1511),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_96, "05call.c", 263, 1509)), "05call.c", 263, 1510))->c_value),come_pop_stackframe());
    __result91__ = (_Bool)1;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* right_value166;
char* __exception_result_var_b122;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result92__ = __result_obj__ = (come_push_stackframe("05call.c", 270, 1512),__exception_result_var_b122=((char*)(right_value166=__builtin_string("sCallerSNameNode"))), come_pop_stackframe(), __exception_result_var_b122);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* __exception_result_var_b123;
char* fun_name3_98;
struct list$1sTypeph* method_generics_types_before_99;
struct list$1sTypeph* __dec_obj54;
struct sGenericsFun* __exception_result_var_b126;
struct sGenericsFun* generics_fun_100;
_Bool _if_conditional152;
void* right_value168;
char* __exception_result_var_b127;
_Bool __exception_result_var_b128;
_Bool _if_conditional153;
void* right_value169;
char* __exception_result_var_b129;
char* __result97__;
struct list$1sTypeph* __dec_obj55;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&fun_name3_98, 0, sizeof(char*));
memset(&method_generics_types_before_99, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_100, 0, sizeof(struct sGenericsFun*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    static int num_method_generics_97=0;
    fun_name3_98=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 277, 1513),__exception_result_var_b123=((char*)(right_value167=xsprintf("%s_method_generics%d",fun_name,num_method_generics_97++))), come_pop_stackframe(), __exception_result_var_b123));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    method_generics_types_before_99=(struct list$1sTypeph*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 279, 1514)), "05call.c", 279, 1515))->method_generics_types);
    __dec_obj54=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 280, 1516)), "05call.c", 280, 1517))->method_generics_types;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 280, 1516)), "05call.c", 280, 1517))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_100=(come_push_stackframe("05call.c", 282, 1581),__exception_result_var_b126=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 282, 1518)), "05call.c", 282, 1519))->generics_funcs, "05call.c", 282, 1520)), "05call.c", 282, 1521)),fun_name,((void*)0)), come_pop_stackframe(), __exception_result_var_b126);
    if(generics_fun_100) {
        if(_if_conditional153=!(come_push_stackframe("05call.c", 285, 1583),__exception_result_var_b128=create_method_generics_fun((char*)come_increment_ref_count((come_push_stackframe("05call.c", 285, 1582),__exception_result_var_b127=((char*)(right_value168=__builtin_string(fun_name3_98))), come_pop_stackframe(), __exception_result_var_b127)),generics_fun_100,info), come_pop_stackframe(), __exception_result_var_b128),        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional153) {
            (come_push_stackframe("05call.c", 286,1584),err_msg(info,"%s not found",fun_name3_98),come_pop_stackframe());
            __result97__ = __result_obj__ = (come_push_stackframe("05call.c", 287, 1585),__exception_result_var_b129=((char*)(right_value169=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b129);
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result97__;
        }
    }
    __dec_obj55=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 291, 1586)), "05call.c", 291, 1587))->method_generics_types;
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 291, 1586)), "05call.c", 291, 1587))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_99);
    come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result98__ = __result_obj__ = fun_name3_98;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b124;
unsigned int hash_101;
unsigned int it_102;
_Bool _while_condtional16;
_Bool _if_conditional138;
_Bool __exception_result_var_b125;
_Bool _if_conditional139;
struct sGenericsFun* __result93__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sGenericsFun* __result94__;
struct sGenericsFun* __result95__;
struct sGenericsFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_101, 0, sizeof(unsigned int));
memset(&it_102, 0, sizeof(unsigned int));
        hash_101=(come_push_stackframe("./neo-c.h", 1207, 1524),__exception_result_var_b124=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 1522)), "./neo-c.h", 1207, 1523))), come_pop_stackframe(), __exception_result_var_b124)%((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1207, 1525)), "./neo-c.h", 1207, 1526))->size;
        it_102=hash_101;
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            if(_if_conditional138=((_Bool*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1211, 1527)), "./neo-c.h", 1211, 1528))->item_existance, "./neo-c.h", 1211, 1529))[it_102],            _if_conditional138) {
                if(_if_conditional139=(come_push_stackframe("./neo-c.h", 1213, 1535),__exception_result_var_b125=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1213, 1530)), "./neo-c.h", 1213, 1531))->keys, "./neo-c.h", 1213, 1532))[it_102], "./neo-c.h", 1213, 1533)), "./neo-c.h", 1213, 1534)),key), come_pop_stackframe(), __exception_result_var_b125),                _if_conditional139) {
                    __result93__ = __result_obj__ = ((struct sGenericsFun**)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1215, 1536)), "./neo-c.h", 1215, 1537))->items, "./neo-c.h", 1215, 1538))[it_102];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result93__;
                }
                it_102++;
                if(_if_conditional150=it_102>=((struct map$2charphsGenericsFunph*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./neo-c.h", 1220, 1579)), "./neo-c.h", 1220, 1580))->size,                _if_conditional150) {
                    it_102=0;
                }
                else {
                    if(_if_conditional151=it_102==hash_101,                    _if_conditional151) {
                        __result94__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result94__;
                    }
                }
            }
            else {
                __result95__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result95__;
            }
        }
        __result96__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result96__;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional140=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1539)), "sGenericsFun_finalize", 0, 1540))->mImplType!=((void*)0),                        _if_conditional140) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0, 1541)), "sGenericsFun_finalize", 0, 1542))->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional141=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1543)), "sGenericsFun_finalize", 1, 1544))->mGenericsTypeNames!=((void*)0),                        _if_conditional141) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1, 1545)), "sGenericsFun_finalize", 1, 1546))->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional142=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 1547)), "sGenericsFun_finalize", 2, 1548))->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional142) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2, 1549)), "sGenericsFun_finalize", 2, 1550))->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional143=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1551)), "sGenericsFun_finalize", 3, 1552))->mName!=((void*)0),                        _if_conditional143) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1553)), "sGenericsFun_finalize", 3, 1554))->mName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3, 1553)), "sGenericsFun_finalize", 3, 1554))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional144=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 1555)), "sGenericsFun_finalize", 4, 1556))->mResultType!=((void*)0),                        _if_conditional144) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4, 1557)), "sGenericsFun_finalize", 4, 1558))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional145=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 1559)), "sGenericsFun_finalize", 5, 1560))->mParamTypes!=((void*)0),                        _if_conditional145) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5, 1561)), "sGenericsFun_finalize", 5, 1562))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional146=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 1563)), "sGenericsFun_finalize", 6, 1564))->mParamNames!=((void*)0),                        _if_conditional146) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6, 1565)), "sGenericsFun_finalize", 6, 1566))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional147=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 1567)), "sGenericsFun_finalize", 7, 1568))->mParamDefaultParametors!=((void*)0),                        _if_conditional147) {
                            come_call_finalizer3(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7, 1569)), "sGenericsFun_finalize", 7, 1570))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional148=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1571)), "sGenericsFun_finalize", 8, 1572))->mBlock!=((void*)0),                        _if_conditional148) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1573)), "sGenericsFun_finalize", 8, 1574))->mBlock = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8, 1573)), "sGenericsFun_finalize", 8, 1574))->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional149=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1575)), "sGenericsFun_finalize", 9, 1576))->mGenericsSName!=((void*)0),                        _if_conditional149) {
                            ((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1577)), "sGenericsFun_finalize", 9, 1578))->mGenericsSName = come_decrement_ref_count2(((struct sGenericsFun*)come_null_check(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9, 1577)), "sGenericsFun_finalize", 9, 1578))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value170;
struct sNodeBase* __exception_result_var_b130;
void* right_value171;
char* __exception_result_var_b131;
char* __dec_obj56;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b137;
void* right_value181;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct list$1sTypeph* __dec_obj63;
struct sFunCallNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value181 = (void*)0;
    (come_push_stackframe("05call.c", 300, 1590),__exception_result_var_b130=((struct sNodeBase*)(right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 300, 1588)), "05call.c", 300, 1589))),info))), come_pop_stackframe(), __exception_result_var_b130);
    come_call_finalizer3(right_value170,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=((struct sFunCallNode*)come_null_check(self, "05call.c", 302, 1591))->fun_name;
    ((struct sFunCallNode*)come_null_check(self, "05call.c", 302, 1591))->fun_name=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 302, 1592),__exception_result_var_b131=((char*)(right_value171=__builtin_string(fun_name))), come_pop_stackframe(), __exception_result_var_b131));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=((struct sFunCallNode*)come_null_check(self, "05call.c", 303, 1593))->params;
    ((struct sFunCallNode*)come_null_check(self, "05call.c", 303, 1593))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value181=(come_push_stackframe("05call.c", 303, 1719),__exception_result_var_b137=list$1tuple2$2charphsNodephphp_clone(params), come_pop_stackframe(), __exception_result_var_b137))));
    come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sFunCallNode*)come_null_check(self, "05call.c", 304, 1724))->guard_break=guard_break;
    __dec_obj63=((struct sFunCallNode*)come_null_check(self, "05call.c", 305, 1725))->method_generics_types;
    ((struct sFunCallNode*)come_null_check(self, "05call.c", 305, 1725))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj63,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__;
void* right_value182;
char* __exception_result_var_b138;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    __result106__ = __result_obj__ = (come_push_stackframe("05call.c", 310, 1742),__exception_result_var_b138=((char*)(right_value182=__builtin_string("sFunCallNode"))), come_pop_stackframe(), __exception_result_var_b138);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_113;
struct list$1tuple2$2charphsNodephph* params_114;
struct sVar* __exception_result_var_b139;
struct sVar* var__115;
_Bool _if_conditional175;
struct sVar* __exception_result_var_b140;
_Bool _if_conditional176;
struct sType* lambda_type_116;
_Bool __exception_result_var_b141;
_Bool _if_conditional177;
_Bool __result107__;
struct sType* __exception_result_var_b142;
void* right_value183;
struct sType* result_type_117;
void* right_value184;
void* right_value185;
struct list$1CVALUEph* __exception_result_var_b143;
struct list$1CVALUEph* come_params_118;
int __exception_result_var_b144;
int __exception_result_var_b145;
_Bool _if_conditional180;
int __exception_result_var_b146;
int __exception_result_var_b147;
_Bool __result113__;
int i_121;
struct list$1tuple2$2charphsNodephph* o2_saved_122;
struct tuple2$2charphsNodeph* __exception_result_var_b150;
struct tuple2$2charphsNodeph* it_125;
_Bool __exception_result_var_b151;
struct tuple2$2charphsNodeph* __exception_result_var_b154;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_128;
struct sNode* node_129;
_Bool __exception_result_var_b155;
_Bool _if_conditional185;
_Bool __result121__;
void* right_value186;
struct CVALUE* __exception_result_var_b156;
struct CVALUE* come_value_130;
struct sType* __exception_result_var_b158;
_Bool _if_conditional188;
void* right_value187;
void* right_value188;
void* right_value189;
struct sType* __exception_result_var_b159;
_Bool __exception_result_var_b160;
struct sType* __exception_result_var_b161;
_Bool _if_conditional189;
struct sType* __exception_result_var_b162;
struct list$1CVALUEph* __exception_result_var_b163;
void* right_value190;
void* right_value191;
struct buffer* __exception_result_var_b164;
struct buffer* buf_134;
struct buffer* __exception_result_var_b165;
struct buffer* __exception_result_var_b166;
int j_135;
struct list$1CVALUEph* o2_saved_136;
struct CVALUE* __exception_result_var_b169;
struct CVALUE* it_139;
_Bool __exception_result_var_b170;
struct CVALUE* __exception_result_var_b173;
struct buffer* __exception_result_var_b174;
int __exception_result_var_b175;
_Bool _if_conditional195;
struct buffer* __exception_result_var_b176;
struct buffer* __exception_result_var_b177;
void* right_value192;
struct CVALUE* come_value_142;
void* right_value193;
char* __exception_result_var_b178;
char* __dec_obj64;
_Bool _if_conditional196;
void* right_value194;
char* __exception_result_var_b179;
char* __dec_obj65;
struct sType* __exception_result_var_b180;
void* right_value195;
struct sType* __dec_obj66;
struct list$1CVALUEph* __exception_result_var_b181;
int __exception_result_var_b182;
_Bool _if_conditional197;
void* right_value196;
char* __exception_result_var_b183;
char* __dec_obj67;
_Bool __exception_result_var_b184;
_Bool __exception_result_var_b185;
_Bool __exception_result_var_b186;
_Bool __exception_result_var_b187;
_Bool __exception_result_var_b188;
_Bool _if_conditional198;
void* right_value197;
void* right_value198;
struct list$1CVALUEph* __exception_result_var_b189;
struct list$1CVALUEph* come_params_143;
struct list$1tuple2$2charphsNodephph* o2_saved_144;
struct tuple2$2charphsNodeph* __exception_result_var_b190;
struct tuple2$2charphsNodeph* it_145;
_Bool __exception_result_var_b191;
struct tuple2$2charphsNodeph* __exception_result_var_b192;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_146;
struct sNode* node_147;
_Bool __exception_result_var_b193;
_Bool _if_conditional199;
_Bool __result133__;
void* right_value199;
struct CVALUE* __exception_result_var_b194;
struct CVALUE* come_value_148;
struct list$1CVALUEph* __exception_result_var_b195;
void* right_value200;
void* right_value201;
struct buffer* __exception_result_var_b196;
struct buffer* buf_149;
struct buffer* __exception_result_var_b197;
struct buffer* __exception_result_var_b198;
int j_150;
struct list$1CVALUEph* o2_saved_151;
struct CVALUE* __exception_result_var_b199;
struct CVALUE* it_152;
_Bool __exception_result_var_b200;
struct CVALUE* __exception_result_var_b201;
struct buffer* __exception_result_var_b202;
int __exception_result_var_b203;
_Bool _if_conditional200;
struct buffer* __exception_result_var_b204;
struct buffer* __exception_result_var_b205;
void* right_value202;
struct CVALUE* come_value_153;
void* right_value203;
char* __exception_result_var_b206;
char* __dec_obj68;
_Bool __exception_result_var_b207;
_Bool __exception_result_var_b208;
_Bool _if_conditional201;
void* right_value204;
void* right_value205;
struct sType* __exception_result_var_b209;
struct sType* __dec_obj69;
_Bool __exception_result_var_b210;
_Bool _if_conditional202;
void* right_value206;
void* right_value207;
struct sType* __exception_result_var_b211;
struct sType* __dec_obj70;
_Bool __exception_result_var_b212;
_Bool _if_conditional203;
void* right_value208;
void* right_value209;
struct sType* __exception_result_var_b213;
struct sType* __dec_obj71;
_Bool __exception_result_var_b214;
_Bool _if_conditional204;
void* right_value210;
void* right_value211;
struct sType* __exception_result_var_b215;
struct sType* __dec_obj72;
struct list$1CVALUEph* __exception_result_var_b216;
_Bool __result134__;
_Bool __exception_result_var_b217;
_Bool _if_conditional205;
void* right_value212;
char* __exception_result_var_b218;
char* __dec_obj73;
_Bool __exception_result_var_b219;
_Bool _if_conditional206;
void* right_value213;
char* __exception_result_var_b220;
char* __dec_obj74;
_Bool __exception_result_var_b221;
_Bool _if_conditional207;
char* p_154;
int version_155;
_Bool _while_condtional22;
_Bool __exception_result_var_b222;
_Bool _if_conditional208;
char* p2_156;
_Bool __exception_result_var_b223;
_Bool _while_condtional23;
void* __exception_result_var_b224;
int i_158;
void* right_value214;
char* __exception_result_var_b225;
char* new_fun_name_159;
struct sFun* __exception_result_var_b229;
_Bool _if_conditional228;
void* right_value215;
char* __exception_result_var_b230;
char* __dec_obj75;
_Bool _if_conditional229;
void* right_value216;
char* __exception_result_var_b231;
char* new_fun_name_163;
struct sFun* __exception_result_var_b232;
_Bool _if_conditional230;
void* right_value217;
char* __exception_result_var_b233;
char* __dec_obj76;
_Bool __exception_result_var_b234;
_Bool _if_conditional231;
_Bool __result139__;
int i_164;
void* right_value218;
char* __exception_result_var_b235;
char* new_fun_name_165;
struct sFun* __exception_result_var_b236;
_Bool _if_conditional232;
void* right_value219;
char* __exception_result_var_b237;
char* __dec_obj77;
struct sFun* __exception_result_var_b240;
struct sFun* fun_166;
_Bool __exception_result_var_b241;
_Bool _if_conditional237;
void* right_value220;
void* right_value221;
struct list$1CVALUEph* __exception_result_var_b242;
struct list$1CVALUEph* come_params_169;
int i_170;
struct sType* __dec_obj78;
struct sType* result_type_171;
struct list$1tuple2$2charphsNodephph* o2_saved_172;
struct tuple2$2charphsNodeph* __exception_result_var_b243;
struct tuple2$2charphsNodeph* it_173;
_Bool __exception_result_var_b244;
struct tuple2$2charphsNodeph* __exception_result_var_b245;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_174;
struct sNode* node_175;
_Bool __exception_result_var_b246;
_Bool _if_conditional238;
_Bool __result144__;
void* right_value222;
struct CVALUE* __exception_result_var_b247;
struct CVALUE* come_value_176;
struct list$1CVALUEph* __exception_result_var_b248;
struct sType* __dec_obj82;
void* right_value226;
void* right_value227;
struct buffer* __exception_result_var_b249;
struct buffer* buf_180;
struct buffer* __exception_result_var_b250;
struct buffer* __exception_result_var_b251;
int j_181;
struct list$1CVALUEph* o2_saved_182;
struct CVALUE* __exception_result_var_b252;
struct CVALUE* it_183;
_Bool __exception_result_var_b253;
struct CVALUE* __exception_result_var_b254;
struct buffer* __exception_result_var_b255;
int __exception_result_var_b256;
_Bool _if_conditional241;
struct buffer* __exception_result_var_b257;
struct buffer* __exception_result_var_b258;
void* right_value228;
struct CVALUE* come_value_184;
void* right_value229;
char* __exception_result_var_b259;
char* __dec_obj83;
struct sType* __dec_obj84;
struct list$1CVALUEph* __exception_result_var_b260;
_Bool _if_conditional242;
_Bool __result146__;
struct sType* __exception_result_var_b261;
void* right_value230;
struct sType* result_type_185;
void* right_value231;
void* right_value232;
struct list$1sTypeph* __exception_result_var_b262;
struct list$1sTypeph* param_types_186;
struct list$1sTypeph* o2_saved_187;
struct sType* __exception_result_var_b265;
struct sType* it_190;
_Bool __exception_result_var_b266;
struct sType* __exception_result_var_b269;
struct sType* __exception_result_var_b270;
void* right_value233;
void* right_value234;
struct sType* __exception_result_var_b271;
struct sType* it2_193;
struct sType* __exception_result_var_b272;
void* right_value238;
struct list$1sTypeph* __exception_result_var_b273;
void* right_value239;
struct sType* __exception_result_var_b274;
struct sType* __dec_obj88;
void* right_value240;
void* right_value241;
struct list$1CVALUEph* __exception_result_var_b275;
struct list$1CVALUEph* come_params_197;
int i_198;
int __exception_result_var_b276;
struct list$1CVALUEph* __exception_result_var_b277;
struct list$1tuple2$2charphsNodephph* o2_saved_199;
struct tuple2$2charphsNodeph* __exception_result_var_b278;
struct tuple2$2charphsNodeph* it_200;
_Bool __exception_result_var_b279;
struct tuple2$2charphsNodeph* __exception_result_var_b280;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_201;
struct sNode* node_202;
_Bool __exception_result_var_b281;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool __exception_result_var_b282;
_Bool _if_conditional251;
_Bool __result155__;
void* right_value242;
struct CVALUE* __exception_result_var_b283;
struct CVALUE* come_value_203;
int n_204;
struct list$1charph* o2_saved_205;
char* __exception_result_var_b286;
char* it_208;
_Bool __exception_result_var_b287;
char* __exception_result_var_b290;
_Bool __exception_result_var_b291;
_Bool _if_conditional256;
struct sType* __exception_result_var_b292;
_Bool _if_conditional257;
void* right_value243;
void* right_value244;
void* right_value245;
struct sType* __exception_result_var_b293;
_Bool __exception_result_var_b294;
struct sType* __exception_result_var_b295;
struct sType* __exception_result_var_b296;
_Bool _if_conditional258;
struct sType* __exception_result_var_b297;
struct list$1CVALUEph* __exception_result_var_b299;
int i_213;
struct list$1tuple2$2charphsNodephph* o2_saved_214;
struct tuple2$2charphsNodeph* __exception_result_var_b300;
struct tuple2$2charphsNodeph* it_215;
_Bool __exception_result_var_b301;
struct tuple2$2charphsNodeph* __exception_result_var_b302;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_216;
struct sNode* node_217;
_Bool __exception_result_var_b303;
_Bool _if_conditional262;
_Bool __exception_result_var_b304;
_Bool _if_conditional263;
_Bool __result165__;
void* right_value246;
struct CVALUE* __exception_result_var_b305;
struct CVALUE* come_value_218;
_Bool _while_condtional27;
struct CVALUE* __exception_result_var_b307;
_Bool _if_conditional266;
struct list$1CVALUEph* __exception_result_var_b308;
_Bool _if_conditional267;
_Bool __exception_result_var_b309;
_Bool _if_conditional268;
_Bool __result168__;
void* right_value247;
struct CVALUE* __exception_result_var_b310;
struct CVALUE* come_value_222;
_Bool _while_condtional29;
struct CVALUE* __exception_result_var_b311;
_Bool _if_conditional269;
struct sType* __exception_result_var_b312;
_Bool _if_conditional270;
void* right_value248;
void* right_value249;
void* right_value250;
struct sType* __exception_result_var_b313;
_Bool __exception_result_var_b314;
struct sType* __exception_result_var_b315;
struct sType* __exception_result_var_b316;
_Bool _if_conditional271;
struct sType* __exception_result_var_b317;
struct list$1CVALUEph* __exception_result_var_b318;
_Bool _while_condtional30;
struct CVALUE* __exception_result_var_b319;
_Bool _if_conditional272;
int __exception_result_var_b320;
int __exception_result_var_b321;
_Bool _if_conditional273;
int __exception_result_var_b322;
char* __exception_result_var_b324;
char* __exception_result_var_b325;
void* right_value251;
char* default_param_223;
char* __exception_result_var_b326;
char* param_name_227;
_Bool __exception_result_var_b327;
struct CVALUE* __exception_result_var_b328;
_Bool _if_conditional276;
struct buffer* source_228;
char* p_229;
char* head_230;
int sline_231;
void* right_value252;
struct buffer* __exception_result_var_b329;
struct buffer* __dec_obj90;
void* right_value253;
struct sNode* __exception_result_var_b330;
struct sNode* node_232;
_Bool __exception_result_var_b331;
_Bool _if_conditional277;
_Bool __result171__;
struct buffer* __dec_obj91;
void* right_value254;
struct CVALUE* __exception_result_var_b332;
struct CVALUE* come_value_233;
struct sType* __exception_result_var_b333;
_Bool _if_conditional278;
void* right_value255;
void* right_value256;
void* right_value257;
struct sType* __exception_result_var_b334;
_Bool __exception_result_var_b335;
struct sType* __exception_result_var_b336;
struct sType* __exception_result_var_b337;
_Bool _if_conditional279;
struct sType* __exception_result_var_b338;
struct list$1CVALUEph* __exception_result_var_b339;
struct CVALUE* __exception_result_var_b340;
_Bool _if_conditional280;
_Bool __result172__;
int __exception_result_var_b341;
int __exception_result_var_b342;
_Bool __exception_result_var_b343;
_Bool __exception_result_var_b344;
_Bool _if_conditional281;
int __exception_result_var_b345;
int __exception_result_var_b346;
_Bool __result173__;
void* right_value258;
void* right_value259;
struct buffer* __exception_result_var_b347;
struct buffer* buf_234;
struct buffer* __exception_result_var_b348;
struct buffer* __exception_result_var_b349;
int j_235;
struct list$1CVALUEph* o2_saved_236;
struct CVALUE* __exception_result_var_b350;
struct CVALUE* it_237;
_Bool __exception_result_var_b351;
struct CVALUE* __exception_result_var_b352;
struct buffer* __exception_result_var_b353;
int __exception_result_var_b354;
_Bool _if_conditional282;
struct buffer* __exception_result_var_b355;
struct buffer* __exception_result_var_b356;
void* right_value260;
struct CVALUE* come_value_238;
void* right_value261;
char* __exception_result_var_b357;
char* __dec_obj92;
struct sType* __exception_result_var_b358;
void* right_value262;
struct sType* __dec_obj93;
_Bool _if_conditional283;
void* right_value263;
char* __exception_result_var_b359;
char* __dec_obj94;
_Bool __exception_result_var_b360;
_Bool __exception_result_var_b361;
_Bool __exception_result_var_b362;
_Bool __exception_result_var_b363;
_Bool _if_conditional284;
_Bool __exception_result_var_b364;
_Bool __exception_result_var_b365;
_Bool __exception_result_var_b366;
_Bool __exception_result_var_b367;
_Bool _if_conditional285;
void* right_value264;
char* __exception_result_var_b368;
char* __dec_obj95;
_Bool _if_conditional286;
void* right_value265;
char* __exception_result_var_b369;
void* right_value266;
char* __exception_result_var_b370;
char* __dec_obj96;
struct list$1CVALUEph* __exception_result_var_b371;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&params_114, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__115, 0, sizeof(struct sVar*));
memset(&lambda_type_116, 0, sizeof(struct sType*));
right_value183 = (void*)0;
memset(&result_type_117, 0, sizeof(struct sType*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&come_params_118, 0, sizeof(struct list$1CVALUEph*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct tuple2$2charphsNodeph*));
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
memset(&fun_166, 0, sizeof(struct sFun*));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&come_params_169, 0, sizeof(struct list$1CVALUEph*));
memset(&i_170, 0, sizeof(int));
memset(&result_type_171, 0, sizeof(struct sType*));
memset(&o2_saved_172, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_173, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value222 = (void*)0;
memset(&come_value_176, 0, sizeof(struct CVALUE*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&buf_180, 0, sizeof(struct buffer*));
memset(&j_181, 0, sizeof(int));
memset(&o2_saved_182, 0, sizeof(struct list$1CVALUEph*));
memset(&it_183, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
memset(&come_value_184, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&result_type_185, 0, sizeof(struct sType*));
right_value231 = (void*)0;
right_value232 = (void*)0;
memset(&param_types_186, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_190, 0, sizeof(struct sType*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&it2_193, 0, sizeof(struct sType*));
right_value238 = (void*)0;
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_params_197, 0, sizeof(struct list$1CVALUEph*));
memset(&i_198, 0, sizeof(int));
memset(&o2_saved_199, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_200, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value242 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&n_204, 0, sizeof(int));
memset(&o2_saved_205, 0, sizeof(struct list$1charph*));
memset(&it_208, 0, sizeof(char*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&i_213, 0, sizeof(int));
memset(&o2_saved_214, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_215, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value246 = (void*)0;
memset(&come_value_218, 0, sizeof(struct CVALUE*));
right_value247 = (void*)0;
memset(&come_value_222, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&default_param_223, 0, sizeof(char*));
memset(&param_name_227, 0, sizeof(char*));
memset(&source_228, 0, sizeof(struct buffer*));
memset(&p_229, 0, sizeof(char*));
memset(&head_230, 0, sizeof(char*));
memset(&sline_231, 0, sizeof(int));
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&node_232, 0, sizeof(struct sNode*));
right_value254 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&buf_234, 0, sizeof(struct buffer*));
memset(&j_235, 0, sizeof(int));
memset(&o2_saved_236, 0, sizeof(struct list$1CVALUEph*));
memset(&it_237, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
memset(&come_value_238, 0, sizeof(struct CVALUE*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
    fun_name_113=(char*)come_increment_ref_count(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 315, 1743)), "05call.c", 315, 1744))->fun_name);
    params_114=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 316, 1745)), "05call.c", 316, 1746))->params;
    var__115=(come_push_stackframe("05call.c", 318, 1749),__exception_result_var_b139=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 318, 1747)), "05call.c", 318, 1748))->lv_table,fun_name_113), come_pop_stackframe(), __exception_result_var_b139);
    if(_if_conditional175=var__115==((void*)0),    _if_conditional175) {
        var__115=(come_push_stackframe("05call.c", 321, 1752),__exception_result_var_b140=get_variable_from_table(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 321, 1750)), "05call.c", 321, 1751))->gv_table,fun_name_113), come_pop_stackframe(), __exception_result_var_b140);
    }
    if(var__115) {
        lambda_type_116=((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__115, "05call.c", 325, 1753)), "05call.c", 325, 1754))->mType;
        if(_if_conditional177=(come_push_stackframe("05call.c", 327, 1759),__exception_result_var_b141=string_operator_not_equals(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 327, 1755)), "05call.c", 327, 1756))->mClass, "05call.c", 327, 1757)), "05call.c", 327, 1758))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b141),        _if_conditional177) {
            (come_push_stackframe("05call.c", 328,1760),err_msg(info,"%s is not lambda, can't call",fun_name_113),come_pop_stackframe());
            __result107__ = (_Bool)0;
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result107__;
        }
        result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=(come_push_stackframe("05call.c", 332, 1765),__exception_result_var_b142=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 332, 1761)), "05call.c", 332, 1762))->mResultType, "05call.c", 332, 1763)), "05call.c", 332, 1764))->v1), come_pop_stackframe(), __exception_result_var_b142))));
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_117, "05call.c", 333, 1766)), "05call.c", 333, 1767))->mStatic=(_Bool)0;
        come_params_118=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("05call.c", 335, 1779),__exception_result_var_b143=((struct list$1CVALUEph*)(right_value185=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value184=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 335, "list$1CVALUEph"))), "05call.c", 335, 1768)))))), come_pop_stackframe(), __exception_result_var_b143));
        come_call_finalizer3(right_value184,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value185,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional180=(come_push_stackframe("05call.c", 337, 1786),__exception_result_var_b144=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 337, 1780)), "05call.c", 337, 1781))->mParamTypes, "05call.c", 337, 1782)), "05call.c", 337, 1783))), come_pop_stackframe(), __exception_result_var_b144)!=(come_push_stackframe("05call.c", 337, 1791),__exception_result_var_b145=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_114, "05call.c", 337, 1787)), "05call.c", 337, 1788))), come_pop_stackframe(), __exception_result_var_b145)&&!((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 337, 1792)), "05call.c", 337, 1793))->mVarArgs,        _if_conditional180) {
            (come_push_stackframe("05call.c", 338,1802),err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,(come_push_stackframe("05call.c", 338, 1798),__exception_result_var_b146=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 338, 1794)), "05call.c", 338, 1795))->mParamTypes, "05call.c", 338, 1796)), "05call.c", 338, 1797))), come_pop_stackframe(), __exception_result_var_b146),(come_push_stackframe("05call.c", 338, 1801),__exception_result_var_b147=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_114, "05call.c", 338, 1799)), "05call.c", 338, 1800))), come_pop_stackframe(), __exception_result_var_b147)),come_pop_stackframe());
            __result113__ = (_Bool)0;
            come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result113__;
        }
        i_121=0;
        for(        o2_saved_122=(params_114),it_125=(come_push_stackframe("05call.c", 343, 1817),__exception_result_var_b150=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_122), "05call.c", 343, 1803)), "05call.c", 343, 1804))), come_pop_stackframe(), __exception_result_var_b150);        !(come_push_stackframe("05call.c", 343, 1822),__exception_result_var_b151=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_122), "05call.c", 343, 1818)), "05call.c", 343, 1819))), come_pop_stackframe(), __exception_result_var_b151);        it_125=(come_push_stackframe("05call.c", 343, 1841),__exception_result_var_b154=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_122), "05call.c", 343, 1823)), "05call.c", 343, 1824))), come_pop_stackframe(), __exception_result_var_b154)        ){
            multiple_assign_var1=it_125;
            label_128=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(_if_conditional185=!(come_push_stackframe("05call.c", 346, 1842),__exception_result_var_b155=node_compile(node_129,info), come_pop_stackframe(), __exception_result_var_b155),            _if_conditional185) {
                __result121__ = (_Bool)0;
                label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result121__;
            }
            come_value_130=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 350, 1843),__exception_result_var_b156=((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b156));
            come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional188=((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 351, 1844)), "05call.c", 351, 1845))->mVarArgs&&(come_push_stackframe("05call.c", 351, 1859),__exception_result_var_b158=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 351, 1846)), "05call.c", 351, 1847))->mParamTypes, "05call.c", 351, 1848)),i_121), "05call.c", 351, 1858)), come_pop_stackframe(), __exception_result_var_b158)==((void*)0),            _if_conditional188) {
            }
            else {
                (come_push_stackframe("05call.c", 354, 1867),__exception_result_var_b160=check_assign_type(((char*)(right_value189=xsprintf("\%s calling param #\%s",((char*)(right_value187=string_to_string(fun_name_113))),((char*)(right_value188=int_to_string(i_121)))))),(come_push_stackframe("05call.c", 354, 1864),__exception_result_var_b159=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 354, 1860)), "05call.c", 354, 1861))->mParamTypes, "05call.c", 354, 1862)),i_121), "05call.c", 354, 1863)), come_pop_stackframe(), __exception_result_var_b159),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "05call.c", 354, 1865)), "05call.c", 354, 1866))->type,come_value_130,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b160);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional189=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05call.c", 355, 1872),__exception_result_var_b161=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 355, 1868)), "05call.c", 355, 1869))->mParamTypes, "05call.c", 355, 1870)),i_121), "05call.c", 355, 1871)), come_pop_stackframe(), __exception_result_var_b161), "05call.c", 355, 1873)), "05call.c", 355, 1874))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "05call.c", 355, 1875)), "05call.c", 355, 1876))->type, "05call.c", 355, 1877)), "05call.c", 355, 1878))->mHeap,                _if_conditional189) {
                    (come_push_stackframe("05call.c", 356,1886),std_move((come_push_stackframe("05call.c", 356, 1883),__exception_result_var_b162=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 356, 1879)), "05call.c", 356, 1880))->mParamTypes, "05call.c", 356, 1881)),i_121), "05call.c", 356, 1882)), come_pop_stackframe(), __exception_result_var_b162),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "05call.c", 356, 1884)), "05call.c", 356, 1885))->type,come_value_130,info),come_pop_stackframe());
                }
            }
            (come_push_stackframe("05call.c", 360, 1889),__exception_result_var_b163=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_118, "05call.c", 360, 1887)), "05call.c", 360, 1888)),(struct CVALUE*)come_increment_ref_count(come_value_130)), come_pop_stackframe(), __exception_result_var_b163);
            (come_push_stackframe("05call.c", 361,1890),dec_stack_ptr(1,info),come_pop_stackframe());
            i_121++;
            label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_134=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 366, 1892),__exception_result_var_b164=((struct buffer*)(right_value191=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value190=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 366, "buffer"))), "05call.c", 366, 1891)))))), come_pop_stackframe(), __exception_result_var_b164));
        come_call_finalizer3(right_value190,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value191,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("05call.c", 368, 1897),__exception_result_var_b165=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 368, 1893)), "05call.c", 368, 1894)),((struct sVar*)come_null_check(((struct sVar*)come_null_check(var__115, "05call.c", 368, 1895)), "05call.c", 368, 1896))->mCValueName), come_pop_stackframe(), __exception_result_var_b165);
        (come_push_stackframe("05call.c", 369, 1900),__exception_result_var_b166=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 369, 1898)), "05call.c", 369, 1899)),"("), come_pop_stackframe(), __exception_result_var_b166);
        j_135=0;
        for(        o2_saved_136=(struct list$1CVALUEph*)come_increment_ref_count((come_params_118)),it_139=(come_push_stackframe("05call.c", 372, 1915),__exception_result_var_b169=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "05call.c", 372, 1901)), "05call.c", 372, 1902))), come_pop_stackframe(), __exception_result_var_b169);        !(come_push_stackframe("05call.c", 372, 1920),__exception_result_var_b170=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "05call.c", 372, 1916)), "05call.c", 372, 1917))), come_pop_stackframe(), __exception_result_var_b170);        it_139=(come_push_stackframe("05call.c", 372, 1939),__exception_result_var_b173=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_136), "05call.c", 372, 1921)), "05call.c", 372, 1922))), come_pop_stackframe(), __exception_result_var_b173)        ){
            (come_push_stackframe("05call.c", 373, 1944),__exception_result_var_b174=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 373, 1940)), "05call.c", 373, 1941)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_139, "05call.c", 373, 1942)), "05call.c", 373, 1943))->c_value), come_pop_stackframe(), __exception_result_var_b174);
            if(_if_conditional195=j_135!=(come_push_stackframe("05call.c", 375, 1949),__exception_result_var_b175=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_118, "05call.c", 375, 1945)), "05call.c", 375, 1946))), come_pop_stackframe(), __exception_result_var_b175)-1,            _if_conditional195) {
                (come_push_stackframe("05call.c", 376, 1952),__exception_result_var_b176=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 376, 1950)), "05call.c", 376, 1951)),","), come_pop_stackframe(), __exception_result_var_b176);
            }
            j_135++;
        }
        come_call_finalizer3(o2_saved_136,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        (come_push_stackframe("05call.c", 381, 1955),__exception_result_var_b177=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 381, 1953)), "05call.c", 381, 1954)),")"), come_pop_stackframe(), __exception_result_var_b177);
        come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 383, "CVALUE"))));
        come_call_finalizer3(right_value192,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 384, 1956)), "05call.c", 384, 1957))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 384, 1956)), "05call.c", 384, 1957))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 384, 1960),__exception_result_var_b178=((char*)(right_value193=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_134, "05call.c", 384, 1958)), "05call.c", 384, 1959))))), come_pop_stackframe(), __exception_result_var_b178));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 386, 1961)), "05call.c", 386, 1962))->mResultType, "05call.c", 386, 1963)), "05call.c", 386, 1964))->v1, "05call.c", 386, 1965)), "05call.c", 386, 1966))->mHeap) {
            __dec_obj65=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 387, 1967)), "05call.c", 387, 1968))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 387, 1967)), "05call.c", 387, 1968))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 387, 1975),__exception_result_var_b179=((char*)(right_value194=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 387, 1969)), "05call.c", 387, 1970))->c_value,(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_116, "05call.c", 387, 1971)), "05call.c", 387, 1972))->mResultType, "05call.c", 387, 1973)), "05call.c", 387, 1974))->v1),info))), come_pop_stackframe(), __exception_result_var_b179));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj66=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 390, 1976)), "05call.c", 390, 1977))->type;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 390, 1976)), "05call.c", 390, 1977))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(come_push_stackframe("05call.c", 390, 1978),__exception_result_var_b180=sType_clone(result_type_117), come_pop_stackframe(), __exception_result_var_b180))));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
        ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 391, 1979)), "05call.c", 391, 1980))->type, "05call.c", 391, 1981)), "05call.c", 391, 1982))->mStatic=(_Bool)0;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 392, 1983)), "05call.c", 392, 1984))->var=((void*)0);
        (come_push_stackframe("05call.c", 394,1987),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_142, "05call.c", 394, 1985)), "05call.c", 394, 1986))->c_value),come_pop_stackframe());
        (come_push_stackframe("05call.c", 396, 1992),__exception_result_var_b181=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 396, 1988)), "05call.c", 396, 1989))->stack, "05call.c", 396, 1990)), "05call.c", 396, 1991)),(struct CVALUE*)come_increment_ref_count(come_value_142)), come_pop_stackframe(), __exception_result_var_b181);
        come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional197=(come_push_stackframe("05call.c", 399, 1997),__exception_result_var_b182=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 399, 1993)), "05call.c", 399, 1994))->method_generics_types, "05call.c", 399, 1995)), "05call.c", 399, 1996))), come_pop_stackframe(), __exception_result_var_b182)>0,        _if_conditional197) {
            __dec_obj67=fun_name_113;
            fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 400, 2000),__exception_result_var_b183=((char*)(right_value196=make_method_generics_function((char*)come_increment_ref_count(fun_name_113),(struct list$1sTypeph*)come_increment_ref_count(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 400, 1998)), "05call.c", 400, 1999))->method_generics_types),info))), come_pop_stackframe(), __exception_result_var_b183));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional198=(come_push_stackframe("05call.c", 403, 2001),__exception_result_var_b184=string_operator_equals(fun_name_113,"__builtin_memmove"), come_pop_stackframe(), __exception_result_var_b184)||(come_push_stackframe("05call.c", 403, 2002),__exception_result_var_b185=string_operator_equals(fun_name_113,"__builtin_memset"), come_pop_stackframe(), __exception_result_var_b185)||(come_push_stackframe("05call.c", 403, 2003),__exception_result_var_b186=string_operator_equals(fun_name_113,"__builtin_ffs"), come_pop_stackframe(), __exception_result_var_b186)||(come_push_stackframe("05call.c", 403, 2004),__exception_result_var_b187=string_operator_equals(fun_name_113,"__builtin_ffsl"), come_pop_stackframe(), __exception_result_var_b187)||(come_push_stackframe("05call.c", 403, 2005),__exception_result_var_b188=string_operator_equals(fun_name_113,"__builtin_ffsll"), come_pop_stackframe(), __exception_result_var_b188),        _if_conditional198) {
            come_params_143=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("05call.c", 405, 2007),__exception_result_var_b189=((struct list$1CVALUEph*)(right_value198=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value197=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 405, "list$1CVALUEph"))), "05call.c", 405, 2006)))))), come_pop_stackframe(), __exception_result_var_b189));
            come_call_finalizer3(right_value197,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value198,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_144=(params_114),it_145=(come_push_stackframe("05call.c", 406, 2010),__exception_result_var_b190=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_144), "05call.c", 406, 2008)), "05call.c", 406, 2009))), come_pop_stackframe(), __exception_result_var_b190);            !(come_push_stackframe("05call.c", 406, 2013),__exception_result_var_b191=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_144), "05call.c", 406, 2011)), "05call.c", 406, 2012))), come_pop_stackframe(), __exception_result_var_b191);            it_145=(come_push_stackframe("05call.c", 406, 2016),__exception_result_var_b192=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_144), "05call.c", 406, 2014)), "05call.c", 406, 2015))), come_pop_stackframe(), __exception_result_var_b192)            ){
                multiple_assign_var2=it_145;
                label_146=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_147=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                if(_if_conditional199=!(come_push_stackframe("05call.c", 409, 2017),__exception_result_var_b193=node_compile(node_147,info), come_pop_stackframe(), __exception_result_var_b193),                _if_conditional199) {
                    __result133__ = (_Bool)0;
                    label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result133__;
                }
                come_value_148=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 413, 2018),__exception_result_var_b194=((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b194));
                come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("05call.c", 414,2019),dec_stack_ptr(1,info),come_pop_stackframe());
                (come_push_stackframe("05call.c", 416, 2022),__exception_result_var_b195=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_143, "05call.c", 416, 2020)), "05call.c", 416, 2021)),(struct CVALUE*)come_increment_ref_count(come_value_148)), come_pop_stackframe(), __exception_result_var_b195);
                label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_149=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 419, 2024),__exception_result_var_b196=((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 419, "buffer"))), "05call.c", 419, 2023)))))), come_pop_stackframe(), __exception_result_var_b196));
            come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 421, 2027),__exception_result_var_b197=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 421, 2025)), "05call.c", 421, 2026)),fun_name_113), come_pop_stackframe(), __exception_result_var_b197);
            (come_push_stackframe("05call.c", 422, 2030),__exception_result_var_b198=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 422, 2028)), "05call.c", 422, 2029)),"("), come_pop_stackframe(), __exception_result_var_b198);
            j_150=0;
            for(            o2_saved_151=(struct list$1CVALUEph*)come_increment_ref_count((come_params_143)),it_152=(come_push_stackframe("05call.c", 425, 2033),__exception_result_var_b199=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_151), "05call.c", 425, 2031)), "05call.c", 425, 2032))), come_pop_stackframe(), __exception_result_var_b199);            !(come_push_stackframe("05call.c", 425, 2036),__exception_result_var_b200=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_151), "05call.c", 425, 2034)), "05call.c", 425, 2035))), come_pop_stackframe(), __exception_result_var_b200);            it_152=(come_push_stackframe("05call.c", 425, 2039),__exception_result_var_b201=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_151), "05call.c", 425, 2037)), "05call.c", 425, 2038))), come_pop_stackframe(), __exception_result_var_b201)            ){
                (come_push_stackframe("05call.c", 426, 2044),__exception_result_var_b202=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 426, 2040)), "05call.c", 426, 2041)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_152, "05call.c", 426, 2042)), "05call.c", 426, 2043))->c_value), come_pop_stackframe(), __exception_result_var_b202);
                if(_if_conditional200=j_150!=(come_push_stackframe("05call.c", 428, 2047),__exception_result_var_b203=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_143, "05call.c", 428, 2045)), "05call.c", 428, 2046))), come_pop_stackframe(), __exception_result_var_b203)-1,                _if_conditional200) {
                    (come_push_stackframe("05call.c", 429, 2050),__exception_result_var_b204=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 429, 2048)), "05call.c", 429, 2049)),","), come_pop_stackframe(), __exception_result_var_b204);
                }
                j_150++;
            }
            come_call_finalizer3(o2_saved_151,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("05call.c", 434, 2053),__exception_result_var_b205=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 434, 2051)), "05call.c", 434, 2052)),")"), come_pop_stackframe(), __exception_result_var_b205);
            come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 436, "CVALUE"))));
            come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj68=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 437, 2054)), "05call.c", 437, 2055))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 437, 2054)), "05call.c", 437, 2055))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 437, 2058),__exception_result_var_b206=((char*)(right_value203=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_149, "05call.c", 437, 2056)), "05call.c", 437, 2057))))), come_pop_stackframe(), __exception_result_var_b206));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional201=(come_push_stackframe("05call.c", 439, 2059),__exception_result_var_b207=string_operator_equals(fun_name_113,"__builtin_memmove"), come_pop_stackframe(), __exception_result_var_b207)||(come_push_stackframe("05call.c", 439, 2060),__exception_result_var_b208=string_operator_equals(fun_name_113,"__builtin_memset"), come_pop_stackframe(), __exception_result_var_b208),            _if_conditional201) {
                __dec_obj69=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 440, 2061)), "05call.c", 440, 2062))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 440, 2061)), "05call.c", 440, 2062))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 440, 2064),__exception_result_var_b209=((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 440, "sType"))), "05call.c", 440, 2063))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b209));
                come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional202=(come_push_stackframe("05call.c", 442, 2065),__exception_result_var_b210=string_operator_equals(fun_name_113,"__builtin_ffs"), come_pop_stackframe(), __exception_result_var_b210),                _if_conditional202) {
                    __dec_obj70=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 443, 2066)), "05call.c", 443, 2067))->type;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 443, 2066)), "05call.c", 443, 2067))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 443, 2069),__exception_result_var_b211=((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 443, "sType"))), "05call.c", 443, 2068))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b211));
                    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional203=(come_push_stackframe("05call.c", 445, 2070),__exception_result_var_b212=string_operator_equals(fun_name_113,"__builtin_ffsl"), come_pop_stackframe(), __exception_result_var_b212),                    _if_conditional203) {
                        __dec_obj71=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 446, 2071)), "05call.c", 446, 2072))->type;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 446, 2071)), "05call.c", 446, 2072))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 446, 2074),__exception_result_var_b213=((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 446, "sType"))), "05call.c", 446, 2073))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b213));
                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional204=(come_push_stackframe("05call.c", 448, 2075),__exception_result_var_b214=string_operator_equals(fun_name_113,"__builtin_ffsll"), come_pop_stackframe(), __exception_result_var_b214),                        _if_conditional204) {
                            __dec_obj72=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 449, 2076)), "05call.c", 449, 2077))->type;
                            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 449, 2076)), "05call.c", 449, 2077))->type=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 449, 2079),__exception_result_var_b215=((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 449, "sType"))), "05call.c", 449, 2078))),"int",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b215));
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 452, 2080)), "05call.c", 452, 2081))->var=((void*)0);
            (come_push_stackframe("05call.c", 454,2084),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_153, "05call.c", 454, 2082)), "05call.c", 454, 2083))->c_value),come_pop_stackframe());
            (come_push_stackframe("05call.c", 456, 2089),__exception_result_var_b216=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 456, 2085)), "05call.c", 456, 2086))->stack, "05call.c", 456, 2087)), "05call.c", 456, 2088)),(struct CVALUE*)come_increment_ref_count(come_value_153)), come_pop_stackframe(), __exception_result_var_b216);
            __result134__ = (_Bool)1;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional205=(come_push_stackframe("05call.c", 460, 2090),__exception_result_var_b217=string_operator_equals(fun_name_113,"string"), come_pop_stackframe(), __exception_result_var_b217),            _if_conditional205) {
                __dec_obj73=fun_name_113;
                fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 461, 2091),__exception_result_var_b218=((char*)(right_value212=__builtin_string("__builtin_string"))), come_pop_stackframe(), __exception_result_var_b218));
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional206=(come_push_stackframe("05call.c", 463, 2092),__exception_result_var_b219=string_operator_equals(fun_name_113,"wstring"), come_pop_stackframe(), __exception_result_var_b219),                _if_conditional206) {
                    __dec_obj74=fun_name_113;
                    fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 464, 2093),__exception_result_var_b220=((char*)(right_value213=__builtin_string("__builtin_wstring"))), come_pop_stackframe(), __exception_result_var_b220));
                    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional207=(come_push_stackframe("05call.c", 466, 2094),__exception_result_var_b221=string_operator_equals(fun_name_113,"inherit"), come_pop_stackframe(), __exception_result_var_b221),                    _if_conditional207) {
                        p_154=((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 467, 2095)), "05call.c", 467, 2096))->come_fun, "05call.c", 467, 2097)), "05call.c", 467, 2098))->mName;
                        version_155=0;
                        while(_while_condtional22=*((char*)come_null_check(p_154, "05call.c", 470, 2099)),                        _while_condtional22) {
                            if(_if_conditional208=*((char*)come_null_check(p_154, "05call.c", 471, 2100))==95&&*((char*)come_null_check((p_154+1), "05call.c", 471, 2101))==118&&(come_push_stackframe("05call.c", 471, 2103),__exception_result_var_b222=xisdigit(*((char*)come_null_check((p_154+2), "05call.c", 471, 2102))), come_pop_stackframe(), __exception_result_var_b222),                            _if_conditional208) {
                                p2_156=p_154+2;
                                version_155=0;
                                while(_while_condtional23=(come_push_stackframe("05call.c", 474, 2105),__exception_result_var_b223=xisdigit(*((char*)come_null_check(p2_156, "05call.c", 474, 2104))), come_pop_stackframe(), __exception_result_var_b223),                                _while_condtional23) {
                                    version_155=version_155*10+(*((char*)come_null_check(p2_156, "05call.c", 475, 2106))-48);
                                    p2_156++;
                                }
                                break;
                            }
                            else {
                                p_154++;
                            }
                        }
                        char real_fun_name_157[2048];
                        memset(&real_fun_name_157, 0, sizeof(char)                        *(2048)                        );
                        (come_push_stackframe("05call.c", 486, 2115),__exception_result_var_b224=memcpy(real_fun_name_157,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 486, 2107)), "05call.c", 486, 2108))->come_fun, "05call.c", 486, 2109)), "05call.c", 486, 2110))->mName,p_154-((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 486, 2111)), "05call.c", 486, 2112))->come_fun, "05call.c", 486, 2113)), "05call.c", 486, 2114))->mName), come_pop_stackframe(), __exception_result_var_b224);
                        (come_range_check(&((char*)come_null_check(real_fun_name_157, "05call.c", 487, 2116))[p_154-((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 487, 2117)), "05call.c", 487, 2118))->come_fun, "05call.c", 487, 2119)), "05call.c", 487, 2120))->mName],((char*)come_null_check(real_fun_name_157, "05call.c", 487, 2116)),((char*)come_null_check(real_fun_name_157, "05call.c", 487, 2116))+(2048), "05call.c", 487), ((char*)come_null_check(real_fun_name_157, "05call.c", 487, 2116))[p_154-((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 487, 2117)), "05call.c", 487, 2118))->come_fun, "05call.c", 487, 2119)), "05call.c", 487, 2120))->mName]=0);
                        for(                        i_158=version_155-1;                        i_158>=1;                        i_158--                        ){
                            new_fun_name_159=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 491, 2121),__exception_result_var_b225=((char*)(right_value214=xsprintf("%s_v%d",real_fun_name_157,i_158))), come_pop_stackframe(), __exception_result_var_b225));
                            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional228=(come_push_stackframe("05call.c", 493, 2204),__exception_result_var_b229=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 493, 2122)), "05call.c", 493, 2123))->funcs,new_fun_name_159), come_pop_stackframe(), __exception_result_var_b229),                            _if_conditional228) {
                                __dec_obj75=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 494, 2205),__exception_result_var_b230=((char*)(right_value215=__builtin_string(new_fun_name_159))), come_pop_stackframe(), __exception_result_var_b230));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional229=i_158==0,                        _if_conditional229) {
                            new_fun_name_163=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 500, 2206),__exception_result_var_b231=((char*)(right_value216=xsprintf("%s",real_fun_name_157))), come_pop_stackframe(), __exception_result_var_b231));
                            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional230=(come_push_stackframe("05call.c", 502, 2209),__exception_result_var_b232=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 502, 2207)), "05call.c", 502, 2208))->funcs,new_fun_name_163), come_pop_stackframe(), __exception_result_var_b232),                            _if_conditional230) {
                                __dec_obj76=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 503, 2210),__exception_result_var_b233=((char*)(right_value217=__builtin_string(new_fun_name_163))), come_pop_stackframe(), __exception_result_var_b233));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional231=(come_push_stackframe("05call.c", 506, 2215),__exception_result_var_b234=string_operator_equals(fun_name_113,((struct sFun*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 506, 2211)), "05call.c", 506, 2212))->come_fun, "05call.c", 506, 2213)), "05call.c", 506, 2214))->mName), come_pop_stackframe(), __exception_result_var_b234),                            _if_conditional231) {
                                (come_push_stackframe("05call.c", 507,2216),err_msg(info,"invalid inherit"),come_pop_stackframe());
                                __result139__ = (_Bool)0;
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result139__;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_164=128;                        i_164>=1;                        i_164--                        ){
                            new_fun_name_165=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 514, 2217),__exception_result_var_b235=((char*)(right_value218=xsprintf("%s_v%d",fun_name_113,i_164))), come_pop_stackframe(), __exception_result_var_b235));
                            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional232=(come_push_stackframe("05call.c", 516, 2220),__exception_result_var_b236=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 516, 2218)), "05call.c", 516, 2219))->funcs,new_fun_name_165), come_pop_stackframe(), __exception_result_var_b236),                            _if_conditional232) {
                                __dec_obj77=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 517, 2221),__exception_result_var_b237=((char*)(right_value219=__builtin_string(new_fun_name_165))), come_pop_stackframe(), __exception_result_var_b237));
                                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_166=(come_push_stackframe("05call.c", 523, 2245),__exception_result_var_b240=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 523, 2222)), "05call.c", 523, 2223))->funcs, "05call.c", 523, 2224)), "05call.c", 523, 2225)),fun_name_113,((void*)0)), come_pop_stackframe(), __exception_result_var_b240);
        if(_if_conditional237=(come_push_stackframe("05call.c", 525, 2246),__exception_result_var_b241=string_operator_equals(fun_name_113,"__builtin_va_arg"), come_pop_stackframe(), __exception_result_var_b241),        _if_conditional237) {
            come_params_169=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("05call.c", 526, 2248),__exception_result_var_b242=((struct list$1CVALUEph*)(right_value221=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value220=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 526, "list$1CVALUEph"))), "05call.c", 526, 2247)))))), come_pop_stackframe(), __exception_result_var_b242));
            come_call_finalizer3(right_value220,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value221,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            i_170=0;
            __dec_obj78=result_type_171;
            result_type_171=((void*)0);
            come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_172=(params_114),it_173=(come_push_stackframe("05call.c", 530, 2251),__exception_result_var_b243=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_172), "05call.c", 530, 2249)), "05call.c", 530, 2250))), come_pop_stackframe(), __exception_result_var_b243);            !(come_push_stackframe("05call.c", 530, 2254),__exception_result_var_b244=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_172), "05call.c", 530, 2252)), "05call.c", 530, 2253))), come_pop_stackframe(), __exception_result_var_b244);            it_173=(come_push_stackframe("05call.c", 530, 2257),__exception_result_var_b245=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_172), "05call.c", 530, 2255)), "05call.c", 530, 2256))), come_pop_stackframe(), __exception_result_var_b245)            ){
                multiple_assign_var3=it_173;
                label_174=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_175=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(_if_conditional238=!(come_push_stackframe("05call.c", 533, 2258),__exception_result_var_b246=node_compile(node_175,info), come_pop_stackframe(), __exception_result_var_b246),                _if_conditional238) {
                    __result144__ = (_Bool)0;
                    label_174 = come_decrement_ref_count2(label_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_169,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_171,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result144__;
                }
                come_value_176=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 537, 2259),__exception_result_var_b247=((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b247));
                come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("05call.c", 538,2260),dec_stack_ptr(1,info),come_pop_stackframe());
                (come_push_stackframe("05call.c", 540, 2307),__exception_result_var_b248=list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_169, "05call.c", 540, 2261)), "05call.c", 540, 2262)),(struct CVALUE*)come_increment_ref_count(come_value_176)), come_pop_stackframe(), __exception_result_var_b248);
                __dec_obj82=result_type_171;
                result_type_171=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_176, "05call.c", 542, 2308)), "05call.c", 542, 2309))->type);
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_174 = come_decrement_ref_count2(label_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_180=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 545, 2311),__exception_result_var_b249=((struct buffer*)(right_value227=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value226=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 545, "buffer"))), "05call.c", 545, 2310)))))), come_pop_stackframe(), __exception_result_var_b249));
            come_call_finalizer3(right_value226,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value227,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 547, 2314),__exception_result_var_b250=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 547, 2312)), "05call.c", 547, 2313)),fun_name_113), come_pop_stackframe(), __exception_result_var_b250);
            (come_push_stackframe("05call.c", 548, 2317),__exception_result_var_b251=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 548, 2315)), "05call.c", 548, 2316)),"("), come_pop_stackframe(), __exception_result_var_b251);
            j_181=0;
            for(            o2_saved_182=(struct list$1CVALUEph*)come_increment_ref_count((come_params_169)),it_183=(come_push_stackframe("05call.c", 551, 2320),__exception_result_var_b252=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_182), "05call.c", 551, 2318)), "05call.c", 551, 2319))), come_pop_stackframe(), __exception_result_var_b252);            !(come_push_stackframe("05call.c", 551, 2323),__exception_result_var_b253=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_182), "05call.c", 551, 2321)), "05call.c", 551, 2322))), come_pop_stackframe(), __exception_result_var_b253);            it_183=(come_push_stackframe("05call.c", 551, 2326),__exception_result_var_b254=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_182), "05call.c", 551, 2324)), "05call.c", 551, 2325))), come_pop_stackframe(), __exception_result_var_b254)            ){
                (come_push_stackframe("05call.c", 552, 2331),__exception_result_var_b255=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 552, 2327)), "05call.c", 552, 2328)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_183, "05call.c", 552, 2329)), "05call.c", 552, 2330))->c_value), come_pop_stackframe(), __exception_result_var_b255);
                if(_if_conditional241=j_181!=(come_push_stackframe("05call.c", 554, 2334),__exception_result_var_b256=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_169, "05call.c", 554, 2332)), "05call.c", 554, 2333))), come_pop_stackframe(), __exception_result_var_b256)-1,                _if_conditional241) {
                    (come_push_stackframe("05call.c", 555, 2337),__exception_result_var_b257=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 555, 2335)), "05call.c", 555, 2336)),","), come_pop_stackframe(), __exception_result_var_b257);
                }
                j_181++;
            }
            come_call_finalizer3(o2_saved_182,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            (come_push_stackframe("05call.c", 560, 2340),__exception_result_var_b258=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 560, 2338)), "05call.c", 560, 2339)),")"), come_pop_stackframe(), __exception_result_var_b258);
            come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 562, "CVALUE"))));
            come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj83=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 563, 2341)), "05call.c", 563, 2342))->c_value;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 563, 2341)), "05call.c", 563, 2342))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 563, 2345),__exception_result_var_b259=((char*)(right_value229=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_180, "05call.c", 563, 2343)), "05call.c", 563, 2344))))), come_pop_stackframe(), __exception_result_var_b259));
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj84=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 564, 2346)), "05call.c", 564, 2347))->type;
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 564, 2346)), "05call.c", 564, 2347))->type=(struct sType*)come_increment_ref_count(result_type_171);
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
            ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 565, 2348)), "05call.c", 565, 2349))->var=((void*)0);
            (come_push_stackframe("05call.c", 567,2352),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_184, "05call.c", 567, 2350)), "05call.c", 567, 2351))->c_value),come_pop_stackframe());
            (come_push_stackframe("05call.c", 569, 2357),__exception_result_var_b260=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 569, 2353)), "05call.c", 569, 2354))->stack, "05call.c", 569, 2355)), "05call.c", 569, 2356)),(struct CVALUE*)come_increment_ref_count(come_value_184)), come_pop_stackframe(), __exception_result_var_b260);
            come_call_finalizer3(come_params_169,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional242=fun_166==((void*)0),            _if_conditional242) {
                (come_push_stackframe("05call.c", 572,2358),err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_113),come_pop_stackframe());
                __result146__ = (_Bool)1;
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result146__;
            }
            else {
                result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=(come_push_stackframe("05call.c", 576, 2361),__exception_result_var_b261=sType_clone(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 576, 2359)), "05call.c", 576, 2360))->mResultType), come_pop_stackframe(), __exception_result_var_b261))));
                come_call_finalizer3(right_value230,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_185, "05call.c", 577, 2362)), "05call.c", 577, 2363))->mStatic=(_Bool)0;
                param_types_186=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("05call.c", 579, 2365),__exception_result_var_b262=((struct list$1sTypeph*)(right_value232=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value231=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 579, "list$1sTypeph"))), "05call.c", 579, 2364)))))), come_pop_stackframe(), __exception_result_var_b262));
                come_call_finalizer3(right_value231,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value232,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 580, 2366)), "05call.c", 580, 2367))->mParamTypes)),it_190=(come_push_stackframe("05call.c", 580, 2382),__exception_result_var_b265=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "05call.c", 580, 2368)), "05call.c", 580, 2369))), come_pop_stackframe(), __exception_result_var_b265);                !(come_push_stackframe("05call.c", 580, 2387),__exception_result_var_b266=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "05call.c", 580, 2383)), "05call.c", 580, 2384))), come_pop_stackframe(), __exception_result_var_b266);                it_190=(come_push_stackframe("05call.c", 580, 2406),__exception_result_var_b269=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check((o2_saved_187), "05call.c", 580, 2388)), "05call.c", 580, 2389))), come_pop_stackframe(), __exception_result_var_b269)                ){
                    it2_193=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 581, 2410),__exception_result_var_b271=((struct sType*)(right_value234=solve_generics(((struct sType*)(right_value233=(come_push_stackframe("05call.c", 581, 2407),__exception_result_var_b270=sType_clone(it_190), come_pop_stackframe(), __exception_result_var_b270))),((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 581, 2408)), "05call.c", 581, 2409))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b271));
                    come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    (come_push_stackframe("05call.c", 582, 2458),__exception_result_var_b273=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 582, 2411)), "05call.c", 582, 2412)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(come_push_stackframe("05call.c", 582, 2457),__exception_result_var_b272=sType_clone(it2_193), come_pop_stackframe(), __exception_result_var_b272))))), come_pop_stackframe(), __exception_result_var_b273);
                    come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(it2_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_187,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj88=result_type_185;
                result_type_185=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 585, 2461),__exception_result_var_b274=((struct sType*)(right_value239=solve_generics(result_type_185,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 585, 2459)), "05call.c", 585, 2460))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b274));
                come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value239,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_params_197=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("05call.c", 587, 2463),__exception_result_var_b275=((struct list$1CVALUEph*)(right_value241=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value240=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 587, "list$1CVALUEph"))), "05call.c", 587, 2462)))))), come_pop_stackframe(), __exception_result_var_b275));
                come_call_finalizer3(right_value240,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value241,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                for(                i_198=0;                i_198<(come_push_stackframe("05call.c", 589, 2468),__exception_result_var_b276=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 589, 2464)), "05call.c", 589, 2465))->mParamTypes, "05call.c", 589, 2466)), "05call.c", 589, 2467))), come_pop_stackframe(), __exception_result_var_b276);                i_198++                ){
                    (come_push_stackframe("05call.c", 590, 2471),__exception_result_var_b277=list$1CVALUEph_add(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 590, 2469)), "05call.c", 590, 2470)),((void*)0)), come_pop_stackframe(), __exception_result_var_b277);
                }
                for(                o2_saved_199=(params_114),it_200=(come_push_stackframe("05call.c", 593, 2474),__exception_result_var_b278=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_199), "05call.c", 593, 2472)), "05call.c", 593, 2473))), come_pop_stackframe(), __exception_result_var_b278);                !(come_push_stackframe("05call.c", 593, 2477),__exception_result_var_b279=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_199), "05call.c", 593, 2475)), "05call.c", 593, 2476))), come_pop_stackframe(), __exception_result_var_b279);                it_200=(come_push_stackframe("05call.c", 593, 2480),__exception_result_var_b280=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_199), "05call.c", 593, 2478)), "05call.c", 593, 2479))), come_pop_stackframe(), __exception_result_var_b280)                ){
                    multiple_assign_var4=it_200;
                    label_201=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    node_202=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(_if_conditional249=((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 596, 2481)), "05call.c", 596, 2482))->mVarArgs||(come_push_stackframe("05call.c", 596, 2483),__exception_result_var_b281=string_operator_equals(fun_name_113,"__builtin_va_start"), come_pop_stackframe(), __exception_result_var_b281),                    _if_conditional249) {
                    }
                    else {
                        if(label_201) {
                            if(_if_conditional251=!(come_push_stackframe("05call.c", 599, 2484),__exception_result_var_b282=node_compile(node_202,info), come_pop_stackframe(), __exception_result_var_b282),                            _if_conditional251) {
                                __result155__ = (_Bool)0;
                                label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result155__;
                            }
                            come_value_203=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 603, 2485),__exception_result_var_b283=((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b283));
                            come_call_finalizer3(right_value242,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("05call.c", 604,2486),dec_stack_ptr(1,info),come_pop_stackframe());
                            n_204=0;
                            for(                            o2_saved_205=(struct list$1charph*)come_increment_ref_count((((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 607, 2487)), "05call.c", 607, 2488))->mParamNames)),it_208=(come_push_stackframe("05call.c", 607, 2503),__exception_result_var_b286=list$1charph_begin(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_205), "05call.c", 607, 2489)), "05call.c", 607, 2490))), come_pop_stackframe(), __exception_result_var_b286);                            !(come_push_stackframe("05call.c", 607, 2508),__exception_result_var_b287=list$1charph_end(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_205), "05call.c", 607, 2504)), "05call.c", 607, 2505))), come_pop_stackframe(), __exception_result_var_b287);                            it_208=(come_push_stackframe("05call.c", 607, 2527),__exception_result_var_b290=list$1charph_next(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check((o2_saved_205), "05call.c", 607, 2509)), "05call.c", 607, 2510))), come_pop_stackframe(), __exception_result_var_b290)                            ){
                                if(_if_conditional256=(come_push_stackframe("05call.c", 608, 2528),__exception_result_var_b291=string_operator_equals(label_201,it_208), come_pop_stackframe(), __exception_result_var_b291),                                _if_conditional256) {
                                    break;
                                }
                                n_204++;
                            }
                            come_call_finalizer3(o2_saved_205,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(_if_conditional257=(come_push_stackframe("05call.c", 615, 2529),__exception_result_var_b292=list$1sTypephp_operator_load_element(param_types_186,n_204), come_pop_stackframe(), __exception_result_var_b292),                            _if_conditional257) {
                                (come_push_stackframe("05call.c", 616, 2535),__exception_result_var_b294=check_assign_type(((char*)(right_value245=xsprintf("\%s param num \%s is assinged to",((char*)(right_value243=string_to_string(fun_name_113))),((char*)(right_value244=int_to_string(n_204)))))),(come_push_stackframe("05call.c", 616, 2532),__exception_result_var_b293=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 616, 2530)),n_204), "05call.c", 616, 2531)), come_pop_stackframe(), __exception_result_var_b293),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05call.c", 616, 2533)), "05call.c", 616, 2534))->type,come_value_203,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b294);
                                right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional258=(come_push_stackframe("05call.c", 618, 2536),__exception_result_var_b295=list$1sTypephp_operator_load_element(param_types_186,n_204), come_pop_stackframe(), __exception_result_var_b295)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05call.c", 618, 2539),__exception_result_var_b296=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 618, 2537)),n_204), "05call.c", 618, 2538)), come_pop_stackframe(), __exception_result_var_b296), "05call.c", 618, 2540)), "05call.c", 618, 2541))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05call.c", 618, 2542)), "05call.c", 618, 2543))->type, "05call.c", 618, 2544)), "05call.c", 618, 2545))->mHeap,                            _if_conditional258) {
                                (come_push_stackframe("05call.c", 619,2551),std_move((come_push_stackframe("05call.c", 619, 2548),__exception_result_var_b297=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 619, 2546)),n_204), "05call.c", 619, 2547)), come_pop_stackframe(), __exception_result_var_b297),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_203, "05call.c", 619, 2549)), "05call.c", 619, 2550))->type,come_value_203,info),come_pop_stackframe());
                            }
                            (come_push_stackframe("05call.c", 622, 2567),__exception_result_var_b299=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 622, 2552)), "05call.c", 622, 2553)),n_204,(struct CVALUE*)come_increment_ref_count(come_value_203)), come_pop_stackframe(), __exception_result_var_b299);
                            come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                i_213=0;
                for(                o2_saved_214=(params_114),it_215=(come_push_stackframe("05call.c", 627, 2570),__exception_result_var_b300=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_214), "05call.c", 627, 2568)), "05call.c", 627, 2569))), come_pop_stackframe(), __exception_result_var_b300);                !(come_push_stackframe("05call.c", 627, 2573),__exception_result_var_b301=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_214), "05call.c", 627, 2571)), "05call.c", 627, 2572))), come_pop_stackframe(), __exception_result_var_b301);                it_215=(come_push_stackframe("05call.c", 627, 2576),__exception_result_var_b302=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_214), "05call.c", 627, 2574)), "05call.c", 627, 2575))), come_pop_stackframe(), __exception_result_var_b302)                ){
                    multiple_assign_var5=it_215;
                    label_216=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    node_217=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(_if_conditional262=((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 630, 2577)), "05call.c", 630, 2578))->mVarArgs||(come_push_stackframe("05call.c", 630, 2579),__exception_result_var_b303=string_operator_equals(fun_name_113,"__builtin_va_start"), come_pop_stackframe(), __exception_result_var_b303),                    _if_conditional262) {
                        if(_if_conditional263=!(come_push_stackframe("05call.c", 631, 2580),__exception_result_var_b304=node_compile(node_217,info), come_pop_stackframe(), __exception_result_var_b304),                        _if_conditional263) {
                            __result165__ = (_Bool)0;
                            label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result165__;
                        }
                        come_value_218=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 635, 2581),__exception_result_var_b305=((struct CVALUE*)(right_value246=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b305));
                        come_call_finalizer3(right_value246,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                        (come_push_stackframe("05call.c", 636,2582),dec_stack_ptr(1,info),come_pop_stackframe());
                        while(_while_condtional27=(_Bool)1,                        _while_condtional27) {
                            if(_if_conditional266=(come_push_stackframe("05call.c", 639, 2592),__exception_result_var_b307=list$1CVALUEphp_operator_load_element(come_params_197,i_213), come_pop_stackframe(), __exception_result_var_b307)==((void*)0),                            _if_conditional266) {
                                break;
                            }
                            else {
                                i_213++;
                            }
                        }
                        (come_push_stackframe("05call.c", 647, 2595),__exception_result_var_b308=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 647, 2593)), "05call.c", 647, 2594)),i_213,(struct CVALUE*)come_increment_ref_count(come_value_218)), come_pop_stackframe(), __exception_result_var_b308);
                        i_213++;
                        come_call_finalizer3(come_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(label_216) {
                        }
                        else {
                            if(_if_conditional268=!(come_push_stackframe("05call.c", 653, 2596),__exception_result_var_b309=node_compile(node_217,info), come_pop_stackframe(), __exception_result_var_b309),                            _if_conditional268) {
                                __result168__ = (_Bool)0;
                                label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result168__;
                            }
                            come_value_222=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 657, 2597),__exception_result_var_b310=((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b310));
                            come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            (come_push_stackframe("05call.c", 658,2598),dec_stack_ptr(1,info),come_pop_stackframe());
                            while(_while_condtional29=(_Bool)1,                            _while_condtional29) {
                                if(_if_conditional269=(come_push_stackframe("05call.c", 661, 2599),__exception_result_var_b311=list$1CVALUEphp_operator_load_element(come_params_197,i_213), come_pop_stackframe(), __exception_result_var_b311)==((void*)0),                                _if_conditional269) {
                                    break;
                                }
                                else {
                                    i_213++;
                                }
                            }
                            if(_if_conditional270=(come_push_stackframe("05call.c", 669, 2600),__exception_result_var_b312=list$1sTypephp_operator_load_element(param_types_186,i_213), come_pop_stackframe(), __exception_result_var_b312),                            _if_conditional270) {
                                (come_push_stackframe("05call.c", 670, 2606),__exception_result_var_b314=check_assign_type(((char*)(right_value250=xsprintf("\%s param num \%s is assinged to",((char*)(right_value248=string_to_string(fun_name_113))),((char*)(right_value249=int_to_string(i_213)))))),(come_push_stackframe("05call.c", 670, 2603),__exception_result_var_b313=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 670, 2601)),i_213), "05call.c", 670, 2602)), come_pop_stackframe(), __exception_result_var_b313),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_222, "05call.c", 670, 2604)), "05call.c", 670, 2605))->type,come_value_222,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b314);
                                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional271=(come_push_stackframe("05call.c", 672, 2607),__exception_result_var_b315=list$1sTypephp_operator_load_element(param_types_186,i_213), come_pop_stackframe(), __exception_result_var_b315)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05call.c", 672, 2610),__exception_result_var_b316=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 672, 2608)),i_213), "05call.c", 672, 2609)), come_pop_stackframe(), __exception_result_var_b316), "05call.c", 672, 2611)), "05call.c", 672, 2612))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_222, "05call.c", 672, 2613)), "05call.c", 672, 2614))->type, "05call.c", 672, 2615)), "05call.c", 672, 2616))->mHeap,                            _if_conditional271) {
                                (come_push_stackframe("05call.c", 673,2622),std_move((come_push_stackframe("05call.c", 673, 2619),__exception_result_var_b317=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 673, 2617)),i_213), "05call.c", 673, 2618)), come_pop_stackframe(), __exception_result_var_b317),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_222, "05call.c", 673, 2620)), "05call.c", 673, 2621))->type,come_value_222,info),come_pop_stackframe());
                            }
                            (come_push_stackframe("05call.c", 676, 2625),__exception_result_var_b318=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 676, 2623)), "05call.c", 676, 2624)),i_213,(struct CVALUE*)come_increment_ref_count(come_value_222)), come_pop_stackframe(), __exception_result_var_b318);
                            i_213++;
                            come_call_finalizer3(come_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                while(_while_condtional30=(_Bool)1,                _while_condtional30) {
                    if(_if_conditional272=(come_push_stackframe("05call.c", 682, 2626),__exception_result_var_b319=list$1CVALUEphp_operator_load_element(come_params_197,i_213), come_pop_stackframe(), __exception_result_var_b319)==((void*)0),                    _if_conditional272) {
                        break;
                    }
                    else {
                        i_213++;
                    }
                }
                if(_if_conditional273=(come_push_stackframe("05call.c", 690, 2629),__exception_result_var_b320=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_114, "05call.c", 690, 2627)), "05call.c", 690, 2628))), come_pop_stackframe(), __exception_result_var_b320)<(come_push_stackframe("05call.c", 690, 2634),__exception_result_var_b321=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 690, 2630)), "05call.c", 690, 2631))->mParamTypes, "05call.c", 690, 2632)), "05call.c", 690, 2633))), come_pop_stackframe(), __exception_result_var_b321),                _if_conditional273) {
                    for(                    ;                    i_213<(come_push_stackframe("05call.c", 692, 2639),__exception_result_var_b322=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 692, 2635)), "05call.c", 692, 2636))->mParamTypes, "05call.c", 692, 2637)), "05call.c", 692, 2638))), come_pop_stackframe(), __exception_result_var_b322);                    i_213++                    ){
                        default_param_223=(char*)come_increment_ref_count(((char*)(right_value251=(come_push_stackframe("05call.c", 693, 2652),__exception_result_var_b325=string_clone((come_push_stackframe("05call.c", 693, 2651),__exception_result_var_b324=list$1charphp_operator_load_element(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 693, 2640)), "05call.c", 693, 2641))->mParamDefaultParametors,i_213), come_pop_stackframe(), __exception_result_var_b324)), come_pop_stackframe(), __exception_result_var_b325))));
                        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        param_name_227=(come_push_stackframe("05call.c", 694, 2657),__exception_result_var_b326=((char*)come_null_check(list$1charphp_operator_load_element(((struct list$1charph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 694, 2653)), "05call.c", 694, 2654))->mParamNames, "05call.c", 694, 2655)),i_213), "05call.c", 694, 2656)), come_pop_stackframe(), __exception_result_var_b326);
                        if(_if_conditional276=default_param_223&&(come_push_stackframe("05call.c", 696, 2658),__exception_result_var_b327=string_operator_not_equals(default_param_223,""), come_pop_stackframe(), __exception_result_var_b327)&&(come_push_stackframe("05call.c", 696, 2659),__exception_result_var_b328=list$1CVALUEphp_operator_load_element(come_params_197,i_213), come_pop_stackframe(), __exception_result_var_b328)==((void*)0),                        _if_conditional276) {
                            source_228=(struct buffer*)come_increment_ref_count(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 697, 2660)), "05call.c", 697, 2661))->source);
                            p_229=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 698, 2662)), "05call.c", 698, 2663))->p;
                            head_230=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 699, 2664)), "05call.c", 699, 2665))->head;
                            sline_231=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 700, 2666)), "05call.c", 700, 2667))->sline;
                            __dec_obj90=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 702, 2668)), "05call.c", 702, 2669))->source;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 702, 2668)), "05call.c", 702, 2669))->source=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 702, 2672),__exception_result_var_b329=((struct buffer*)(right_value252=string_to_buffer(((char*)come_null_check(((char*)come_null_check(default_param_223, "05call.c", 702, 2670)), "05call.c", 702, 2671))))), come_pop_stackframe(), __exception_result_var_b329));
                            come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value252,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 703, 2673)), "05call.c", 703, 2674))->p=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 703, 2675)), "05call.c", 703, 2676))->source, "05call.c", 703, 2677)), "05call.c", 703, 2678))->buf;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 704, 2679)), "05call.c", 704, 2680))->head=((struct buffer*)come_null_check(((struct buffer*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 704, 2681)), "05call.c", 704, 2682))->source, "05call.c", 704, 2683)), "05call.c", 704, 2684))->buf;
                            node_232=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 706, 2685),__exception_result_var_b330=((struct sNode*)(right_value253=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b330));
                            if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional277=!(come_push_stackframe("05call.c", 708, 2686),__exception_result_var_b331=node_compile(node_232,info), come_pop_stackframe(), __exception_result_var_b331),                            _if_conditional277) {
                                __result171__ = (_Bool)0;
                                come_call_finalizer3(source_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result171__;
                            }
                            __dec_obj91=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 712, 2687)), "05call.c", 712, 2688))->source;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 712, 2687)), "05call.c", 712, 2688))->source=(struct buffer*)come_increment_ref_count(source_228);
                            come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 713, 2689)), "05call.c", 713, 2690))->p=p_229;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 714, 2691)), "05call.c", 714, 2692))->head=head_230;
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 715, 2693)), "05call.c", 715, 2694))->sline=sline_231;
                            come_value_233=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 717, 2695),__exception_result_var_b332=((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b332));
                            come_call_finalizer3(right_value254,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional278=(come_push_stackframe("05call.c", 718, 2698),__exception_result_var_b333=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 718, 2696)),i_213), "05call.c", 718, 2697)), come_pop_stackframe(), __exception_result_var_b333),                            _if_conditional278) {
                                (come_push_stackframe("05call.c", 719, 2704),__exception_result_var_b335=check_assign_type(((char*)(right_value257=xsprintf("\%s param num \%s is assinged to",((char*)(right_value255=string_to_string(fun_name_113))),((char*)(right_value256=int_to_string(i_213)))))),(come_push_stackframe("05call.c", 719, 2701),__exception_result_var_b334=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 719, 2699)),i_213), "05call.c", 719, 2700)), come_pop_stackframe(), __exception_result_var_b334),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_233, "05call.c", 719, 2702)), "05call.c", 719, 2703))->type,come_value_233,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b335);
                                right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional279=(come_push_stackframe("05call.c", 721, 2707),__exception_result_var_b336=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 721, 2705)),i_213), "05call.c", 721, 2706)), come_pop_stackframe(), __exception_result_var_b336)&&((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05call.c", 721, 2710),__exception_result_var_b337=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 721, 2708)),i_213), "05call.c", 721, 2709)), come_pop_stackframe(), __exception_result_var_b337), "05call.c", 721, 2711)), "05call.c", 721, 2712))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_233, "05call.c", 721, 2713)), "05call.c", 721, 2714))->type, "05call.c", 721, 2715)), "05call.c", 721, 2716))->mHeap,                            _if_conditional279) {
                                (come_push_stackframe("05call.c", 722,2722),std_move((come_push_stackframe("05call.c", 722, 2719),__exception_result_var_b338=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(param_types_186, "05call.c", 722, 2717)),i_213), "05call.c", 722, 2718)), come_pop_stackframe(), __exception_result_var_b338),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_233, "05call.c", 722, 2720)), "05call.c", 722, 2721))->type,come_value_233,info),come_pop_stackframe());
                            }
                            (come_push_stackframe("05call.c", 724, 2725),__exception_result_var_b339=list$1CVALUEph_replace(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 724, 2723)), "05call.c", 724, 2724)),i_213,(struct CVALUE*)come_increment_ref_count(come_value_233)), come_pop_stackframe(), __exception_result_var_b339);
                            (come_push_stackframe("05call.c", 725,2726),dec_stack_ptr(1,info),come_pop_stackframe());
                            come_call_finalizer3(source_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(_if_conditional280=(come_push_stackframe("05call.c", 728, 2727),__exception_result_var_b340=list$1CVALUEphp_operator_load_element(come_params_197,i_213), come_pop_stackframe(), __exception_result_var_b340)==((void*)0),                            _if_conditional280) {
                                (come_push_stackframe("05call.c", 729,2730),err_msg(info,"require parametor(%s) %d",((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 729, 2728)), "05call.c", 729, 2729))->mName,i_213),come_pop_stackframe());
                                __result172__ = (_Bool)0;
                                default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result172__;
                            }
                        }
                        default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(_if_conditional281=(come_push_stackframe("05call.c", 736, 2735),__exception_result_var_b341=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 736, 2731)), "05call.c", 736, 2732))->mParamTypes, "05call.c", 736, 2733)), "05call.c", 736, 2734))), come_pop_stackframe(), __exception_result_var_b341)!=(come_push_stackframe("05call.c", 736, 2738),__exception_result_var_b342=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 736, 2736)), "05call.c", 736, 2737))), come_pop_stackframe(), __exception_result_var_b342)&&!((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 736, 2739)), "05call.c", 736, 2740))->mVarArgs&&(come_push_stackframe("05call.c", 736, 2741),__exception_result_var_b343=string_operator_not_equals(fun_name_113,"__builtin_va_start"), come_pop_stackframe(), __exception_result_var_b343)&&(come_push_stackframe("05call.c", 736, 2742),__exception_result_var_b344=string_operator_not_equals(fun_name_113,"__builtin_va_end"), come_pop_stackframe(), __exception_result_var_b344),                _if_conditional281) {
                    (come_push_stackframe("05call.c", 738,2751),err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,(come_push_stackframe("05call.c", 738, 2747),__exception_result_var_b345=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 738, 2743)), "05call.c", 738, 2744))->mParamTypes, "05call.c", 738, 2745)), "05call.c", 738, 2746))), come_pop_stackframe(), __exception_result_var_b345),(come_push_stackframe("05call.c", 738, 2750),__exception_result_var_b346=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_114, "05call.c", 738, 2748)), "05call.c", 738, 2749))), come_pop_stackframe(), __exception_result_var_b346)),come_pop_stackframe());
                    __result173__ = (_Bool)0;
                    come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result173__;
                }
                buf_234=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 742, 2753),__exception_result_var_b347=((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 742, "buffer"))), "05call.c", 742, 2752)))))), come_pop_stackframe(), __exception_result_var_b347));
                come_call_finalizer3(right_value258,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value259,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                (come_push_stackframe("05call.c", 744, 2756),__exception_result_var_b348=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 744, 2754)), "05call.c", 744, 2755)),fun_name_113), come_pop_stackframe(), __exception_result_var_b348);
                (come_push_stackframe("05call.c", 745, 2759),__exception_result_var_b349=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 745, 2757)), "05call.c", 745, 2758)),"("), come_pop_stackframe(), __exception_result_var_b349);
                j_235=0;
                for(                o2_saved_236=(struct list$1CVALUEph*)come_increment_ref_count((come_params_197)),it_237=(come_push_stackframe("05call.c", 748, 2762),__exception_result_var_b350=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_236), "05call.c", 748, 2760)), "05call.c", 748, 2761))), come_pop_stackframe(), __exception_result_var_b350);                !(come_push_stackframe("05call.c", 748, 2765),__exception_result_var_b351=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_236), "05call.c", 748, 2763)), "05call.c", 748, 2764))), come_pop_stackframe(), __exception_result_var_b351);                it_237=(come_push_stackframe("05call.c", 748, 2768),__exception_result_var_b352=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_236), "05call.c", 748, 2766)), "05call.c", 748, 2767))), come_pop_stackframe(), __exception_result_var_b352)                ){
                    (come_push_stackframe("05call.c", 749, 2773),__exception_result_var_b353=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 749, 2769)), "05call.c", 749, 2770)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_237, "05call.c", 749, 2771)), "05call.c", 749, 2772))->c_value), come_pop_stackframe(), __exception_result_var_b353);
                    if(_if_conditional282=j_235!=(come_push_stackframe("05call.c", 751, 2776),__exception_result_var_b354=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_197, "05call.c", 751, 2774)), "05call.c", 751, 2775))), come_pop_stackframe(), __exception_result_var_b354)-1,                    _if_conditional282) {
                        (come_push_stackframe("05call.c", 752, 2779),__exception_result_var_b355=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 752, 2777)), "05call.c", 752, 2778)),","), come_pop_stackframe(), __exception_result_var_b355);
                    }
                    j_235++;
                }
                come_call_finalizer3(o2_saved_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                (come_push_stackframe("05call.c", 757, 2782),__exception_result_var_b356=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 757, 2780)), "05call.c", 757, 2781)),")"), come_pop_stackframe(), __exception_result_var_b356);
                come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 759, "CVALUE"))));
                come_call_finalizer3(right_value260,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj92=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 760, 2783)), "05call.c", 760, 2784))->c_value;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 760, 2783)), "05call.c", 760, 2784))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 760, 2787),__exception_result_var_b357=((char*)(right_value261=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_234, "05call.c", 760, 2785)), "05call.c", 760, 2786))))), come_pop_stackframe(), __exception_result_var_b357));
                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj93=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 761, 2788)), "05call.c", 761, 2789))->type;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 761, 2788)), "05call.c", 761, 2789))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=(come_push_stackframe("05call.c", 761, 2790),__exception_result_var_b358=sType_clone(result_type_185), come_pop_stackframe(), __exception_result_var_b358))));
                come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 762, 2791)), "05call.c", 762, 2792))->type, "05call.c", 762, 2793)), "05call.c", 762, 2794))->mStatic=(_Bool)0;
                ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 763, 2795)), "05call.c", 763, 2796))->var=((void*)0);
                if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(((struct sFun*)come_null_check(fun_166, "05call.c", 765, 2797)), "05call.c", 765, 2798))->mResultType, "05call.c", 765, 2799)), "05call.c", 765, 2800))->mHeap) {
                    __dec_obj94=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 766, 2801)), "05call.c", 766, 2802))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 766, 2801)), "05call.c", 766, 2802))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 766, 2805),__exception_result_var_b359=((char*)(right_value263=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 766, 2803)), "05call.c", 766, 2804))->c_value,(struct sType*)come_increment_ref_count(result_type_185),info))), come_pop_stackframe(), __exception_result_var_b359));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional284=(come_push_stackframe("05call.c", 769, 2808),__exception_result_var_b360=string_operator_not_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 769, 2806)), "05call.c", 769, 2807))->come_fun_name,"come_alloc_mem_from_heap_pool"), come_pop_stackframe(), __exception_result_var_b360)&&(come_push_stackframe("05call.c", 769, 2811),__exception_result_var_b361=string_operator_not_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 769, 2809)), "05call.c", 769, 2810))->come_fun_name,"come_calloc"), come_pop_stackframe(), __exception_result_var_b361)&&(come_push_stackframe("05call.c", 769, 2814),__exception_result_var_b362=string_operator_not_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 769, 2812)), "05call.c", 769, 2813))->come_fun_name,"come_free_mem_of_heap_pool"), come_pop_stackframe(), __exception_result_var_b362)&&(come_push_stackframe("05call.c", 769, 2817),__exception_result_var_b363=string_operator_not_equals(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 769, 2815)), "05call.c", 769, 2816))->come_fun_name,"come_free"), come_pop_stackframe(), __exception_result_var_b363),                _if_conditional284) {
                    if(_if_conditional285=(come_push_stackframe("05call.c", 771, 2818),__exception_result_var_b364=string_operator_not_equals(fun_name_113,"come_alloc_mem_from_heap_pool"), come_pop_stackframe(), __exception_result_var_b364)&&(come_push_stackframe("05call.c", 771, 2819),__exception_result_var_b365=string_operator_not_equals(fun_name_113,"null_check"), come_pop_stackframe(), __exception_result_var_b365)&&(come_push_stackframe("05call.c", 771, 2820),__exception_result_var_b366=string_operator_not_equals(fun_name_113,"come_push_stackframe"), come_pop_stackframe(), __exception_result_var_b366)&&(come_push_stackframe("05call.c", 771, 2821),__exception_result_var_b367=string_operator_not_equals(fun_name_113,"come_pop_stackframe"), come_pop_stackframe(), __exception_result_var_b367),                    _if_conditional285) {
                        __dec_obj95=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 772, 2822)), "05call.c", 772, 2823))->c_value;
                        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 772, 2822)), "05call.c", 772, 2823))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 772, 2828),__exception_result_var_b368=((char*)(right_value264=append_stackframe(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 772, 2824)), "05call.c", 772, 2825))->c_value,((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 772, 2826)), "05call.c", 772, 2827))->type,info))), come_pop_stackframe(), __exception_result_var_b368));
                        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                }
                if(_if_conditional286=!((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "05call.c", 776, 2829)), "05call.c", 776, 2830))->guard_break&&((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_185, "05call.c", 776, 2831)), "05call.c", 776, 2832))->mGuardValue&&((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_185, "05call.c", 776, 2833)), "05call.c", 776, 2834))->mPointerNum>0,                _if_conditional286) {
                    __dec_obj96=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 777, 2835)), "05call.c", 777, 2836))->c_value;
                    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 777, 2835)), "05call.c", 777, 2836))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 777, 2845),__exception_result_var_b370=((char*)(right_value266=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)come_null_check((come_push_stackframe("05call.c", 777, 2837),__exception_result_var_b369=((char*)(right_value265=make_type_name_string(result_type_185,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b369), "05call.c", 777, 2838)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 777, 2839)), "05call.c", 777, 2840))->c_value,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 777, 2841)), "05call.c", 777, 2842))->sname,((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 777, 2843)), "05call.c", 777, 2844))->sline,gComeDebugStackFrameID++))), come_pop_stackframe(), __exception_result_var_b370));
                    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                (come_push_stackframe("05call.c", 780,2848),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_238, "05call.c", 780, 2846)), "05call.c", 780, 2847))->c_value),come_pop_stackframe());
                (come_push_stackframe("05call.c", 782, 2853),__exception_result_var_b371=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 782, 2849)), "05call.c", 782, 2850))->stack, "05call.c", 782, 2851)), "05call.c", 782, 2852)),(struct CVALUE*)come_increment_ref_count(come_value_238)), come_pop_stackframe(), __exception_result_var_b371);
                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_234,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result174__ = (_Bool)1;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result174__;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct list$1tuple2$2charphsNodephph* __result99__;
void* right_value172;
void* right_value173;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b132;
struct list$1tuple2$2charphsNodephph* result_105;
struct list_item$1tuple2$2charphsNodephph* it_106;
_Bool _while_condtional18;
struct tuple2$2charphsNodeph* __exception_result_var_b135;
void* right_value180;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b136;
struct list$1tuple2$2charphsNodephph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
right_value173 = (void*)0;
memset(&result_105, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_106, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value180 = (void*)0;
        if(_if_conditional154=self==((void*)0),        _if_conditional154) {
            __result99__ = __result_obj__ = ((void*)0);
            return __result99__;
        }
        result_105=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("./neo-c.h", 139, 1618),__exception_result_var_b132=((struct list$1tuple2$2charphsNodephph*)(right_value173=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value172=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsNodephph"))), "./neo-c.h", 139, 1594)), "./neo-c.h", 139, 1595)))))), come_pop_stackframe(), __exception_result_var_b132));
        come_call_finalizer3(right_value172,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_106=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 141, 1619)), "./neo-c.h", 141, 1620))->head;
        while(_while_condtional18=it_106!=((void*)0),        _while_condtional18) {
            (come_push_stackframe("./neo-c.h", 143, 1716),__exception_result_var_b136=list$1tuple2$2charphsNodephph_add(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(result_105, "./neo-c.h", 143, 1621)), "./neo-c.h", 143, 1622)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value180=(come_push_stackframe("./neo-c.h", 143, 1715),__exception_result_var_b135=tuple2$2charphsNodephp_clone(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_106, "./neo-c.h", 143, 1691)), "./neo-c.h", 143, 1692))->item), come_pop_stackframe(), __exception_result_var_b135))))), come_pop_stackframe(), __exception_result_var_b136);
            come_call_finalizer3(right_value180,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_106=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_106, "./neo-c.h", 145, 1717)), "./neo-c.h", 145, 1718))->next;
        }
        __result104__ = __result_obj__ = result_105;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result104__;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 101, 1596)), "./neo-c.h", 101, 1597))->head=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 102, 1598)), "./neo-c.h", 102, 1599))->tail=((void*)0);
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 103, 1600)), "./neo-c.h", 103, 1601))->len=0;
            __result100__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result100__;
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
                it_103=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 1602)), "./neo-c.h", 120, 1603))->head;
                while(_while_condtional17=it_103!=((void*)0),                _while_condtional17) {
                    prev_it_104=it_103;
                    it_103=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_103, "./neo-c.h", 123, 1604)), "./neo-c.h", 123, 1605))->next;
                    come_call_finalizer3(prev_it_104,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional155=self!=((void*)0)&&((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 1606)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 1607))->item!=((void*)0),                        _if_conditional155) {
                            come_call_finalizer3(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(self, "list_item$1tuple2$2charphsNodephphp_finalize", 0, 1608)), "list_item$1tuple2$2charphsNodephphp_finalize", 0, 1609))->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional158;
void* right_value174;
struct list_item$1tuple2$2charphsNodephph* litem_107;
struct tuple2$2charphsNodeph* __dec_obj57;
_Bool _if_conditional161;
void* right_value175;
struct list_item$1tuple2$2charphsNodephph* litem_108;
struct tuple2$2charphsNodeph* __dec_obj58;
void* right_value176;
struct list_item$1tuple2$2charphsNodephph* litem_109;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value175 = (void*)0;
memset(&litem_108, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value176 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional158=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 152, 1623)), "./neo-c.h", 152, 1624))->len==0,                _if_conditional158) {
                    litem_107=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_107, "./neo-c.h", 155, 1625)), "./neo-c.h", 155, 1626))->prev=((void*)0);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_107, "./neo-c.h", 156, 1627)), "./neo-c.h", 156, 1628))->next=((void*)0);
                    __dec_obj57=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_107, "./neo-c.h", 157, 1629)), "./neo-c.h", 157, 1630))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_107, "./neo-c.h", 157, 1629)), "./neo-c.h", 157, 1630))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj57,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 159, 1639)), "./neo-c.h", 159, 1640))->tail=litem_107;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 160, 1641)), "./neo-c.h", 160, 1642))->head=litem_107;
                }
                else {
                    if(_if_conditional161=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 162, 1643)), "./neo-c.h", 162, 1644))->len==1,                    _if_conditional161) {
                        litem_108=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_108, "./neo-c.h", 165, 1645)), "./neo-c.h", 165, 1646))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 165, 1647)), "./neo-c.h", 165, 1648))->head;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_108, "./neo-c.h", 166, 1649)), "./neo-c.h", 166, 1650))->next=((void*)0);
                        __dec_obj58=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_108, "./neo-c.h", 167, 1651)), "./neo-c.h", 167, 1652))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_108, "./neo-c.h", 167, 1651)), "./neo-c.h", 167, 1652))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj58,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 169, 1661)), "./neo-c.h", 169, 1662))->tail=litem_108;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 170, 1663)), "./neo-c.h", 170, 1664))->head, "./neo-c.h", 170, 1665)), "./neo-c.h", 170, 1666))->next=litem_108;
                    }
                    else {
                        litem_109=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value176=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value176,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_109, "./neo-c.h", 175, 1667)), "./neo-c.h", 175, 1668))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 175, 1669)), "./neo-c.h", 175, 1670))->tail;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_109, "./neo-c.h", 176, 1671)), "./neo-c.h", 176, 1672))->next=((void*)0);
                        __dec_obj59=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_109, "./neo-c.h", 177, 1673)), "./neo-c.h", 177, 1674))->item;
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_109, "./neo-c.h", 177, 1673)), "./neo-c.h", 177, 1674))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj59,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 179, 1683)), "./neo-c.h", 179, 1684))->tail, "./neo-c.h", 179, 1685)), "./neo-c.h", 179, 1686))->next=litem_109;
                        ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 180, 1687)), "./neo-c.h", 180, 1688))->tail=litem_109;
                    }
                }
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 183, 1689)), "./neo-c.h", 183, 1690))->len++;
                __result101__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result101__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional164;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional164=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 1675)), "tuple2$2charphsNodephp_finalize", 0, 1676))->v1!=((void*)0),                            _if_conditional164) {
                                ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 1677)), "tuple2$2charphsNodephp_finalize", 0, 1678))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 0, 1677)), "tuple2$2charphsNodephp_finalize", 0, 1678))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional165=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1679)), "tuple2$2charphsNodephp_finalize", 1, 1680))->v2!=((void*)0),                            _if_conditional165) {
                                if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1681)), "tuple2$2charphsNodephp_finalize", 1, 1682))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1681)), "tuple2$2charphsNodephp_finalize", 1, 1682))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1681)), "tuple2$2charphsNodephp_finalize", 1, 1682))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1681)), "tuple2$2charphsNodephp_finalize", 1, 1682))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_finalize", 1, 1681)), "tuple2$2charphsNodephp_finalize", 1, 1682))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional166;
struct tuple2$2charphsNodeph* __result102__;
void* right_value177;
struct tuple2$2charphsNodeph* result_110;
_Bool _if_conditional169;
char* __exception_result_var_b133;
void* right_value178;
char* __dec_obj60;
_Bool _if_conditional170;
struct sNode* __exception_result_var_b134;
void* right_value179;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
memset(&result_110, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value178 = (void*)0;
right_value179 = (void*)0;
                if(_if_conditional166=self==(void*)0,                _if_conditional166) {
                    __result102__ = __result_obj__ = (void*)0;
                    return __result102__;
                }
                result_110=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value177=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value177,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional169=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 1701)), "tuple2$2charphsNodephp_clone", 4, 1702))->v1!=((void*)0),                _if_conditional169) {
                    __dec_obj60=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_110, "tuple2$2charphsNodephp_clone", 4, 1703)), "tuple2$2charphsNodephp_clone", 4, 1704))->v1;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_110, "tuple2$2charphsNodephp_clone", 4, 1703)), "tuple2$2charphsNodephp_clone", 4, 1704))->v1=(char*)come_increment_ref_count(((char*)(right_value178=(come_push_stackframe("tuple2$2charphsNodephp_clone", 4, 1707),__exception_result_var_b133=string_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 4, 1705)), "tuple2$2charphsNodephp_clone", 4, 1706))->v1), come_pop_stackframe(), __exception_result_var_b133))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional170=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 1708)), "tuple2$2charphsNodephp_clone", 5, 1709))->v2!=((void*)0),                _if_conditional170) {
                    __dec_obj61=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_110, "tuple2$2charphsNodephp_clone", 5, 1710)), "tuple2$2charphsNodephp_clone", 5, 1711))->v2;
                    ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(result_110, "tuple2$2charphsNodephp_clone", 5, 1710)), "tuple2$2charphsNodephp_clone", 5, 1711))->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=(come_push_stackframe("tuple2$2charphsNodephp_clone", 5, 1714),__exception_result_var_b134=sNode_clone(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodephp_clone", 5, 1712)), "tuple2$2charphsNodephp_clone", 5, 1713))->v2), come_pop_stackframe(), __exception_result_var_b134))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value179) { right_value179 = come_decrement_ref_count2(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result103__ = __result_obj__ = result_110;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result103__;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional167;
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional167=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 1693)), "tuple2$2charphsNodeph_finalize", 0, 1694))->v1!=((void*)0),                    _if_conditional167) {
                        ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 1695)), "tuple2$2charphsNodeph_finalize", 0, 1696))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 0, 1695)), "tuple2$2charphsNodeph_finalize", 0, 1696))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional168=self!=((void*)0)&&((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1697)), "tuple2$2charphsNodeph_finalize", 1, 1698))->v2!=((void*)0),                    _if_conditional168) {
                        if(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1699)), "tuple2$2charphsNodeph_finalize", 1, 1700))->v2) { ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1699)), "tuple2$2charphsNodeph_finalize", 1, 1700))->v2 = come_decrement_ref_count2(((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1699)), "tuple2$2charphsNodeph_finalize", 1, 1700))->v2, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1699)), "tuple2$2charphsNodeph_finalize", 1, 1700))->v2)->finalize, ((struct sNode*)((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "tuple2$2charphsNodeph_finalize", 1, 1699)), "tuple2$2charphsNodeph_finalize", 1, 1700))->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
        it_111=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 120, 1720)), "./neo-c.h", 120, 1721))->head;
        while(_while_condtional19=it_111!=((void*)0),        _while_condtional19) {
            prev_it_112=it_111;
            it_111=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(it_111, "./neo-c.h", 123, 1722)), "./neo-c.h", 123, 1723))->next;
            come_call_finalizer3(prev_it_112,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 101, 1769)), "./neo-c.h", 101, 1770))->head=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 102, 1771)), "./neo-c.h", 102, 1772))->tail=((void*)0);
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 103, 1773)), "./neo-c.h", 103, 1774))->len=0;
            __result108__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result108__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list_item$1CVALUEph* it_119;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_119, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_120, 0, sizeof(struct list_item$1CVALUEph*));
                it_119=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 120, 1775)), "./neo-c.h", 120, 1776))->head;
                while(_while_condtional20=it_119!=((void*)0),                _while_condtional20) {
                    prev_it_120=it_119;
                    it_119=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_119, "./neo-c.h", 123, 1777)), "./neo-c.h", 123, 1778))->next;
                    come_call_finalizer3(prev_it_120,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional178;
int __result109__;
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional178=self==((void*)0),            _if_conditional178) {
                __result109__ = 0;
                return __result109__;
            }
            __result110__ = ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 360, 1784)), "./neo-c.h", 360, 1785))->len;
            return __result110__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional179;
int __result111__;
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional179=self==((void*)0),            _if_conditional179) {
                __result111__ = 0;
                return __result111__;
            }
            __result112__ = ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 360, 1789)), "./neo-c.h", 360, 1790))->len;
            return __result112__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional181;
struct tuple2$2charphsNodeph* result_123;
void* __exception_result_var_b148;
struct tuple2$2charphsNodeph* __result114__;
_Bool _if_conditional182;
struct tuple2$2charphsNodeph* __result115__;
struct tuple2$2charphsNodeph* result_124;
void* __exception_result_var_b149;
struct tuple2$2charphsNodeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional181=self==((void*)0),            _if_conditional181) {
                (come_push_stackframe("./neo-c.h", 284, 1805),__exception_result_var_b148=memset(&result_123,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b148);
                __result114__ = __result_obj__ = result_123;
                return __result114__;
            }
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 1806)), "./neo-c.h", 287, 1807))->it=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 287, 1808)), "./neo-c.h", 287, 1809))->head;
            if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 289, 1810)), "./neo-c.h", 289, 1811))->it) {
                __result115__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 290, 1812)), "./neo-c.h", 290, 1813))->it, "./neo-c.h", 290, 1814)), "./neo-c.h", 290, 1815))->item;
                return __result115__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1816),__exception_result_var_b149=memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b149);
            __result116__ = __result_obj__ = result_124;
            return __result116__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
            __result117__ = self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 317, 1820)), "./neo-c.h", 317, 1821))->it==((void*)0);
            return __result117__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional183;
struct tuple2$2charphsNodeph* result_126;
void* __exception_result_var_b152;
struct tuple2$2charphsNodeph* __result118__;
_Bool _if_conditional184;
struct tuple2$2charphsNodeph* __result119__;
struct tuple2$2charphsNodeph* result_127;
void* __exception_result_var_b153;
struct tuple2$2charphsNodeph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional183=self==((void*)0)||((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 299, 1825)), "./neo-c.h", 299, 1826))->it==((void*)0),            _if_conditional183) {
                (come_push_stackframe("./neo-c.h", 301, 1827),__exception_result_var_b152=memset(&result_126,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b152);
                __result118__ = __result_obj__ = result_126;
                return __result118__;
            }
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 1828)), "./neo-c.h", 305, 1829))->it=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 305, 1830)), "./neo-c.h", 305, 1831))->it, "./neo-c.h", 305, 1832)), "./neo-c.h", 305, 1833))->next;
            if(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 307, 1834)), "./neo-c.h", 307, 1835))->it) {
                __result119__ = __result_obj__ = ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 308, 1836)), "./neo-c.h", 308, 1837))->it, "./neo-c.h", 308, 1838)), "./neo-c.h", 308, 1839))->item;
                return __result119__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1840),__exception_result_var_b153=memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*)), come_pop_stackframe(), __exception_result_var_b153);
            __result120__ = __result_obj__ = result_127;
            return __result120__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional186;
struct list_item$1sTypeph* it_131;
int i_132;
_Bool _while_condtional21;
_Bool _if_conditional187;
struct sType* __result122__;
struct sType* default_value_133;
void* __exception_result_var_b157;
struct sType* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_132, 0, sizeof(int));
memset(&default_value_133, 0, sizeof(struct sType*));
                if(_if_conditional186=position<0,                _if_conditional186) {
                    position+=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 676, 1849)), "./neo-c.h", 676, 1850))->len;
                }
                it_131=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 679, 1851)), "./neo-c.h", 679, 1852))->head;
                i_132=0;
                while(_while_condtional21=it_131!=((void*)0),                _while_condtional21) {
                    if(_if_conditional187=position==i_132,                    _if_conditional187) {
                        __result122__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_131, "./neo-c.h", 683, 1853)), "./neo-c.h", 683, 1854))->item;
                        return __result122__;
                    }
                    it_131=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_131, "./neo-c.h", 685, 1855)), "./neo-c.h", 685, 1856))->next;
                    i_132++;
                }
                (come_push_stackframe("./neo-c.h", 690, 1857),__exception_result_var_b157=memset(&default_value_133,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b157);
                __result123__ = __result_obj__ = default_value_133;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result123__;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional190;
struct CVALUE* result_137;
void* __exception_result_var_b167;
struct CVALUE* __result124__;
_Bool _if_conditional191;
struct CVALUE* __result125__;
struct CVALUE* result_138;
void* __exception_result_var_b168;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct CVALUE*));
memset(&result_138, 0, sizeof(struct CVALUE*));
            if(_if_conditional190=self==((void*)0),            _if_conditional190) {
                (come_push_stackframe("./neo-c.h", 284, 1903),__exception_result_var_b167=memset(&result_137,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b167);
                __result124__ = __result_obj__ = result_137;
                return __result124__;
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 1904)), "./neo-c.h", 287, 1905))->it=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 287, 1906)), "./neo-c.h", 287, 1907))->head;
            if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 289, 1908)), "./neo-c.h", 289, 1909))->it) {
                __result125__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 290, 1910)), "./neo-c.h", 290, 1911))->it, "./neo-c.h", 290, 1912)), "./neo-c.h", 290, 1913))->item;
                return __result125__;
            }
            (come_push_stackframe("./neo-c.h", 294, 1914),__exception_result_var_b168=memset(&result_138,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b168);
            __result126__ = __result_obj__ = result_138;
            return __result126__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
            __result127__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 317, 1918)), "./neo-c.h", 317, 1919))->it==((void*)0);
            return __result127__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional192;
struct CVALUE* result_140;
void* __exception_result_var_b171;
struct CVALUE* __result128__;
_Bool _if_conditional193;
struct CVALUE* __result129__;
struct CVALUE* result_141;
void* __exception_result_var_b172;
struct CVALUE* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct CVALUE*));
memset(&result_141, 0, sizeof(struct CVALUE*));
            if(_if_conditional192=self==((void*)0)||((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 299, 1923)), "./neo-c.h", 299, 1924))->it==((void*)0),            _if_conditional192) {
                (come_push_stackframe("./neo-c.h", 301, 1925),__exception_result_var_b171=memset(&result_140,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b171);
                __result128__ = __result_obj__ = result_140;
                return __result128__;
            }
            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 1926)), "./neo-c.h", 305, 1927))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 305, 1928)), "./neo-c.h", 305, 1929))->it, "./neo-c.h", 305, 1930)), "./neo-c.h", 305, 1931))->next;
            if(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 307, 1932)), "./neo-c.h", 307, 1933))->it) {
                __result129__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 308, 1934)), "./neo-c.h", 308, 1935))->it, "./neo-c.h", 308, 1936)), "./neo-c.h", 308, 1937))->item;
                return __result129__;
            }
            (come_push_stackframe("./neo-c.h", 312, 1938),__exception_result_var_b172=memset(&result_141,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b172);
            __result130__ = __result_obj__ = result_141;
            return __result130__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional194;
int __result131__;
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional194=self==((void*)0),                _if_conditional194) {
                    __result131__ = 0;
                    return __result131__;
                }
                __result132__ = ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 360, 1947)), "./neo-c.h", 360, 1948))->len;
                return __result132__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_160;
void* __exception_result_var_b226;
unsigned int __exception_result_var_b227;
unsigned int hash_161;
unsigned int it_162;
_Bool _while_condtional24;
_Bool _if_conditional209;
_Bool __exception_result_var_b228;
_Bool _if_conditional210;
struct sFun* __result135__;
_Bool _if_conditional226;
_Bool _if_conditional227;
struct sFun* __result136__;
struct sFun* __result137__;
struct sFun* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_160, 0, sizeof(struct sFun*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&it_162, 0, sizeof(unsigned int));
                                (come_push_stackframe("./neo-c.h", 1526, 2124),__exception_result_var_b226=memset(&default_value_160,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b226);
                                hash_161=(come_push_stackframe("./neo-c.h", 1528, 2127),__exception_result_var_b227=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 2125)), "./neo-c.h", 1528, 2126))), come_pop_stackframe(), __exception_result_var_b227)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1528, 2128)), "./neo-c.h", 1528, 2129))->size;
                                it_162=hash_161;
                                while(_while_condtional24=(_Bool)1,                                _while_condtional24) {
                                    if(_if_conditional209=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1532, 2130)), "./neo-c.h", 1532, 2131))->item_existance, "./neo-c.h", 1532, 2132))[it_162],                                    _if_conditional209) {
                                        if(_if_conditional210=(come_push_stackframe("./neo-c.h", 1534, 2138),__exception_result_var_b228=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1534, 2133)), "./neo-c.h", 1534, 2134))->keys, "./neo-c.h", 1534, 2135))[it_162], "./neo-c.h", 1534, 2136)), "./neo-c.h", 1534, 2137)),key), come_pop_stackframe(), __exception_result_var_b228),                                        _if_conditional210) {
                                            __result135__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1536, 2139)), "./neo-c.h", 1536, 2140))->items, "./neo-c.h", 1536, 2141))[it_162];
                                            come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result135__;
                                        }
                                        it_162++;
                                        if(_if_conditional226=it_162>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1541, 2202)), "./neo-c.h", 1541, 2203))->size,                                        _if_conditional226) {
                                            it_162=0;
                                        }
                                        else {
                                            if(_if_conditional227=it_162==hash_161,                                            _if_conditional227) {
                                                __result136__ = __result_obj__ = default_value_160;
                                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result136__;
                                            }
                                        }
                                    }
                                    else {
                                        __result137__ = __result_obj__ = default_value_160;
                                        come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result137__;
                                    }
                                }
                                __result138__ = __result_obj__ = default_value_160;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result138__;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional211=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2142)), "sFun_finalize", 0, 2143))->mName!=((void*)0),                                                _if_conditional211) {
                                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2144)), "sFun_finalize", 0, 2145))->mName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 0, 2144)), "sFun_finalize", 0, 2145))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional212=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2146)), "sFun_finalize", 1, 2147))->mResultType!=((void*)0),                                                _if_conditional212) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 1, 2148)), "sFun_finalize", 1, 2149))->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional213=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2150)), "sFun_finalize", 2, 2151))->mParamTypes!=((void*)0),                                                _if_conditional213) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 2, 2152)), "sFun_finalize", 2, 2153))->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2154)), "sFun_finalize", 3, 2155))->mParamNames!=((void*)0),                                                _if_conditional214) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 3, 2156)), "sFun_finalize", 3, 2157))->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2158)), "sFun_finalize", 4, 2159))->mParamDefaultParametors!=((void*)0),                                                _if_conditional215) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 4, 2160)), "sFun_finalize", 4, 2161))->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2162)), "sFun_finalize", 5, 2163))->mLambdaType!=((void*)0),                                                _if_conditional216) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 5, 2164)), "sFun_finalize", 5, 2165))->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional217=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2166)), "sFun_finalize", 6, 2167))->mBlock!=((void*)0),                                                _if_conditional217) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 6, 2168)), "sFun_finalize", 6, 2169))->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2178)), "sFun_finalize", 7, 2179))->mSource!=((void*)0),                                                _if_conditional220) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 7, 2180)), "sFun_finalize", 7, 2181))->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional221=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2182)), "sFun_finalize", 8, 2183))->mSourceHead!=((void*)0),                                                _if_conditional221) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 8, 2184)), "sFun_finalize", 8, 2185))->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional222=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2186)), "sFun_finalize", 9, 2187))->mSourceHead2!=((void*)0),                                                _if_conditional222) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 9, 2188)), "sFun_finalize", 9, 2189))->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2190)), "sFun_finalize", 10, 2191))->mSourceDefer!=((void*)0),                                                _if_conditional223) {
                                                    come_call_finalizer3(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 10, 2192)), "sFun_finalize", 10, 2193))->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2194)), "sFun_finalize", 11, 2195))->mComeHeader!=((void*)0),                                                _if_conditional224) {
                                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2196)), "sFun_finalize", 11, 2197))->mComeHeader = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 11, 2196)), "sFun_finalize", 11, 2197))->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional225=self!=((void*)0)&&((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2198)), "sFun_finalize", 12, 2199))->mDeclareSName!=((void*)0),                                                _if_conditional225) {
                                                    ((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2200)), "sFun_finalize", 12, 2201))->mDeclareSName = come_decrement_ref_count2(((struct sFun*)come_null_check(((struct sFun*)come_null_check(self, "sFun_finalize", 12, 2200)), "sFun_finalize", 12, 2201))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional218=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2170)), "sBlock_finalize", 0, 2171))->mNodes!=((void*)0),                                                        _if_conditional218) {
                                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0, 2172)), "sBlock_finalize", 0, 2173))->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional219=self!=((void*)0)&&((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2174)), "sBlock_finalize", 1, 2175))->mVarTable!=((void*)0),                                                        _if_conditional219) {
                                                            come_call_finalizer3(((struct sBlock*)come_null_check(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1, 2176)), "sBlock_finalize", 1, 2177))->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int __exception_result_var_b238;
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional25;
_Bool _if_conditional233;
_Bool __exception_result_var_b239;
_Bool _if_conditional234;
struct sFun* __result140__;
_Bool _if_conditional235;
_Bool _if_conditional236;
struct sFun* __result141__;
struct sFun* __result142__;
struct sFun* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
            hash_167=(come_push_stackframe("./neo-c.h", 1207, 2228),__exception_result_var_b238=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1207, 2226)), "./neo-c.h", 1207, 2227))), come_pop_stackframe(), __exception_result_var_b238)%((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1207, 2229)), "./neo-c.h", 1207, 2230))->size;
            it_168=hash_167;
            while(_while_condtional25=(_Bool)1,            _while_condtional25) {
                if(_if_conditional233=((_Bool*)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1211, 2231)), "./neo-c.h", 1211, 2232))->item_existance, "./neo-c.h", 1211, 2233))[it_168],                _if_conditional233) {
                    if(_if_conditional234=(come_push_stackframe("./neo-c.h", 1213, 2239),__exception_result_var_b239=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1213, 2234)), "./neo-c.h", 1213, 2235))->keys, "./neo-c.h", 1213, 2236))[it_168], "./neo-c.h", 1213, 2237)), "./neo-c.h", 1213, 2238)),key), come_pop_stackframe(), __exception_result_var_b239),                    _if_conditional234) {
                        __result140__ = __result_obj__ = ((struct sFun**)come_null_check(((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1215, 2240)), "./neo-c.h", 1215, 2241))->items, "./neo-c.h", 1215, 2242))[it_168];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result140__;
                    }
                    it_168++;
                    if(_if_conditional235=it_168>=((struct map$2charphsFunph*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./neo-c.h", 1220, 2243)), "./neo-c.h", 1220, 2244))->size,                    _if_conditional235) {
                        it_168=0;
                    }
                    else {
                        if(_if_conditional236=it_168==hash_167,                        _if_conditional236) {
                            __result141__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result141__;
                        }
                    }
                }
                else {
                    __result142__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result142__;
                }
            }
            __result143__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result143__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional239;
void* right_value223;
struct list_item$1CVALUEph* litem_177;
struct CVALUE* __dec_obj79;
_Bool _if_conditional240;
void* right_value224;
struct list_item$1CVALUEph* litem_178;
struct CVALUE* __dec_obj80;
void* right_value225;
struct list_item$1CVALUEph* litem_179;
struct CVALUE* __dec_obj81;
struct list$1CVALUEph* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
memset(&litem_177, 0, sizeof(struct list_item$1CVALUEph*));
right_value224 = (void*)0;
memset(&litem_178, 0, sizeof(struct list_item$1CVALUEph*));
right_value225 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1CVALUEph*));
                    if(_if_conditional239=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 152, 2263)), "./neo-c.h", 152, 2264))->len==0,                    _if_conditional239) {
                        litem_177=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value223=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 153, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value223,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_177, "./neo-c.h", 155, 2265)), "./neo-c.h", 155, 2266))->prev=((void*)0);
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_177, "./neo-c.h", 156, 2267)), "./neo-c.h", 156, 2268))->next=((void*)0);
                        __dec_obj79=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_177, "./neo-c.h", 157, 2269)), "./neo-c.h", 157, 2270))->item;
                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_177, "./neo-c.h", 157, 2269)), "./neo-c.h", 157, 2270))->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 159, 2271)), "./neo-c.h", 159, 2272))->tail=litem_177;
                        ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 160, 2273)), "./neo-c.h", 160, 2274))->head=litem_177;
                    }
                    else {
                        if(_if_conditional240=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 162, 2275)), "./neo-c.h", 162, 2276))->len==1,                        _if_conditional240) {
                            litem_178=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value224=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 163, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value224,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_178, "./neo-c.h", 165, 2277)), "./neo-c.h", 165, 2278))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 165, 2279)), "./neo-c.h", 165, 2280))->head;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_178, "./neo-c.h", 166, 2281)), "./neo-c.h", 166, 2282))->next=((void*)0);
                            __dec_obj80=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_178, "./neo-c.h", 167, 2283)), "./neo-c.h", 167, 2284))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_178, "./neo-c.h", 167, 2283)), "./neo-c.h", 167, 2284))->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 169, 2285)), "./neo-c.h", 169, 2286))->tail=litem_178;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 170, 2287)), "./neo-c.h", 170, 2288))->head, "./neo-c.h", 170, 2289)), "./neo-c.h", 170, 2290))->next=litem_178;
                        }
                        else {
                            litem_179=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value225=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 173, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value225,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_179, "./neo-c.h", 175, 2291)), "./neo-c.h", 175, 2292))->prev=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 175, 2293)), "./neo-c.h", 175, 2294))->tail;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_179, "./neo-c.h", 176, 2295)), "./neo-c.h", 176, 2296))->next=((void*)0);
                            __dec_obj81=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_179, "./neo-c.h", 177, 2297)), "./neo-c.h", 177, 2298))->item;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(litem_179, "./neo-c.h", 177, 2297)), "./neo-c.h", 177, 2298))->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 179, 2299)), "./neo-c.h", 179, 2300))->tail, "./neo-c.h", 179, 2301)), "./neo-c.h", 179, 2302))->next=litem_179;
                            ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 180, 2303)), "./neo-c.h", 180, 2304))->tail=litem_179;
                        }
                    }
                    ((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 183, 2305)), "./neo-c.h", 183, 2306))->len++;
                    __result145__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional243;
struct sType* result_188;
void* __exception_result_var_b263;
struct sType* __result147__;
_Bool _if_conditional244;
struct sType* __result148__;
struct sType* result_189;
void* __exception_result_var_b264;
struct sType* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_188, 0, sizeof(struct sType*));
memset(&result_189, 0, sizeof(struct sType*));
                    if(_if_conditional243=self==((void*)0),                    _if_conditional243) {
                        (come_push_stackframe("./neo-c.h", 284, 2370),__exception_result_var_b263=memset(&result_188,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b263);
                        __result147__ = __result_obj__ = result_188;
                        return __result147__;
                    }
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2371)), "./neo-c.h", 287, 2372))->it=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 287, 2373)), "./neo-c.h", 287, 2374))->head;
                    if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 289, 2375)), "./neo-c.h", 289, 2376))->it) {
                        __result148__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 290, 2377)), "./neo-c.h", 290, 2378))->it, "./neo-c.h", 290, 2379)), "./neo-c.h", 290, 2380))->item;
                        return __result148__;
                    }
                    (come_push_stackframe("./neo-c.h", 294, 2381),__exception_result_var_b264=memset(&result_189,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b264);
                    __result149__ = __result_obj__ = result_189;
                    return __result149__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
                    __result150__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 317, 2385)), "./neo-c.h", 317, 2386))->it==((void*)0);
                    return __result150__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional245;
struct sType* result_191;
void* __exception_result_var_b267;
struct sType* __result151__;
_Bool _if_conditional246;
struct sType* __result152__;
struct sType* result_192;
void* __exception_result_var_b268;
struct sType* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_191, 0, sizeof(struct sType*));
memset(&result_192, 0, sizeof(struct sType*));
                    if(_if_conditional245=self==((void*)0)||((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 299, 2390)), "./neo-c.h", 299, 2391))->it==((void*)0),                    _if_conditional245) {
                        (come_push_stackframe("./neo-c.h", 301, 2392),__exception_result_var_b267=memset(&result_191,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b267);
                        __result151__ = __result_obj__ = result_191;
                        return __result151__;
                    }
                    ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2393)), "./neo-c.h", 305, 2394))->it=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 305, 2395)), "./neo-c.h", 305, 2396))->it, "./neo-c.h", 305, 2397)), "./neo-c.h", 305, 2398))->next;
                    if(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 307, 2399)), "./neo-c.h", 307, 2400))->it) {
                        __result152__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 308, 2401)), "./neo-c.h", 308, 2402))->it, "./neo-c.h", 308, 2403)), "./neo-c.h", 308, 2404))->item;
                        return __result152__;
                    }
                    (come_push_stackframe("./neo-c.h", 312, 2405),__exception_result_var_b268=memset(&result_192,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b268);
                    __result153__ = __result_obj__ = result_192;
                    return __result153__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional247;
void* right_value235;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj85;
_Bool _if_conditional248;
void* right_value236;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj86;
void* right_value237;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj87;
struct list$1sTypeph* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
right_value236 = (void*)0;
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
right_value237 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional247=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 222, 2413)), "./neo-c.h", 222, 2414))->len==0,                        _if_conditional247) {
                            litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value235=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value235,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_194, "./neo-c.h", 225, 2415)), "./neo-c.h", 225, 2416))->prev=((void*)0);
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_194, "./neo-c.h", 226, 2417)), "./neo-c.h", 226, 2418))->next=((void*)0);
                            __dec_obj85=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_194, "./neo-c.h", 227, 2419)), "./neo-c.h", 227, 2420))->item;
                            ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_194, "./neo-c.h", 227, 2419)), "./neo-c.h", 227, 2420))->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 229, 2421)), "./neo-c.h", 229, 2422))->tail=litem_194;
                            ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 230, 2423)), "./neo-c.h", 230, 2424))->head=litem_194;
                        }
                        else {
                            if(_if_conditional248=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 232, 2425)), "./neo-c.h", 232, 2426))->len==1,                            _if_conditional248) {
                                litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value236=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value236,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_195, "./neo-c.h", 235, 2427)), "./neo-c.h", 235, 2428))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 235, 2429)), "./neo-c.h", 235, 2430))->head;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_195, "./neo-c.h", 236, 2431)), "./neo-c.h", 236, 2432))->next=((void*)0);
                                __dec_obj86=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_195, "./neo-c.h", 237, 2433)), "./neo-c.h", 237, 2434))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_195, "./neo-c.h", 237, 2433)), "./neo-c.h", 237, 2434))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 239, 2435)), "./neo-c.h", 239, 2436))->tail=litem_195;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 240, 2437)), "./neo-c.h", 240, 2438))->head, "./neo-c.h", 240, 2439)), "./neo-c.h", 240, 2440))->next=litem_195;
                            }
                            else {
                                litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value237=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value237,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_196, "./neo-c.h", 245, 2441)), "./neo-c.h", 245, 2442))->prev=((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 245, 2443)), "./neo-c.h", 245, 2444))->tail;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_196, "./neo-c.h", 246, 2445)), "./neo-c.h", 246, 2446))->next=((void*)0);
                                __dec_obj87=((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_196, "./neo-c.h", 247, 2447)), "./neo-c.h", 247, 2448))->item;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(litem_196, "./neo-c.h", 247, 2447)), "./neo-c.h", 247, 2448))->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 249, 2449)), "./neo-c.h", 249, 2450))->tail, "./neo-c.h", 249, 2451)), "./neo-c.h", 249, 2452))->next=litem_196;
                                ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 250, 2453)), "./neo-c.h", 250, 2454))->tail=litem_196;
                            }
                        }
                        ((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./neo-c.h", 253, 2455)), "./neo-c.h", 253, 2456))->len++;
                        __result154__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result154__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional252;
char* result_206;
void* __exception_result_var_b284;
char* __result156__;
_Bool _if_conditional253;
char* __result157__;
char* result_207;
void* __exception_result_var_b285;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                                if(_if_conditional252=self==((void*)0),                                _if_conditional252) {
                                    (come_push_stackframe("./neo-c.h", 284, 2491),__exception_result_var_b284=memset(&result_206,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b284);
                                    __result156__ = __result_obj__ = result_206;
                                    return __result156__;
                                }
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2492)), "./neo-c.h", 287, 2493))->it=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 287, 2494)), "./neo-c.h", 287, 2495))->head;
                                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 289, 2496)), "./neo-c.h", 289, 2497))->it) {
                                    __result157__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 290, 2498)), "./neo-c.h", 290, 2499))->it, "./neo-c.h", 290, 2500)), "./neo-c.h", 290, 2501))->item;
                                    return __result157__;
                                }
                                (come_push_stackframe("./neo-c.h", 294, 2502),__exception_result_var_b285=memset(&result_207,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b285);
                                __result158__ = __result_obj__ = result_207;
                                return __result158__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
                                __result159__ = self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 317, 2506)), "./neo-c.h", 317, 2507))->it==((void*)0);
                                return __result159__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional254;
char* result_209;
void* __exception_result_var_b288;
char* __result160__;
_Bool _if_conditional255;
char* __result161__;
char* result_210;
void* __exception_result_var_b289;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(char*));
memset(&result_210, 0, sizeof(char*));
                                if(_if_conditional254=self==((void*)0)||((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 299, 2511)), "./neo-c.h", 299, 2512))->it==((void*)0),                                _if_conditional254) {
                                    (come_push_stackframe("./neo-c.h", 301, 2513),__exception_result_var_b288=memset(&result_209,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b288);
                                    __result160__ = __result_obj__ = result_209;
                                    return __result160__;
                                }
                                ((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 2514)), "./neo-c.h", 305, 2515))->it=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 305, 2516)), "./neo-c.h", 305, 2517))->it, "./neo-c.h", 305, 2518)), "./neo-c.h", 305, 2519))->next;
                                if(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 307, 2520)), "./neo-c.h", 307, 2521))->it) {
                                    __result161__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 308, 2522)), "./neo-c.h", 308, 2523))->it, "./neo-c.h", 308, 2524)), "./neo-c.h", 308, 2525))->item;
                                    return __result161__;
                                }
                                (come_push_stackframe("./neo-c.h", 312, 2526),__exception_result_var_b289=memset(&result_210,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b289);
                                __result162__ = __result_obj__ = result_210;
                                return __result162__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional259;
_Bool _if_conditional260;
struct list$1CVALUEph* __exception_result_var_b298;
struct list$1CVALUEph* __result163__;
struct list_item$1CVALUEph* it_211;
int i_212;
_Bool _while_condtional26;
_Bool _if_conditional261;
struct CVALUE* __dec_obj89;
struct list$1CVALUEph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_212, 0, sizeof(int));
                                if(_if_conditional259=position<0,                                _if_conditional259) {
                                    position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 582, 2554)), "./neo-c.h", 582, 2555))->len;
                                }
                                if(_if_conditional260=position>=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 585, 2556)), "./neo-c.h", 585, 2557))->len,                                _if_conditional260) {
                                    (come_push_stackframe("./neo-c.h", 586, 2560),__exception_result_var_b298=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 586, 2558)), "./neo-c.h", 586, 2559)),(struct CVALUE*)come_increment_ref_count(item)), come_pop_stackframe(), __exception_result_var_b298);
                                    __result163__ = __result_obj__ = self;
                                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result163__;
                                }
                                it_211=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 590, 2561)), "./neo-c.h", 590, 2562))->head;
                                i_212=0;
                                while(_while_condtional26=it_211!=((void*)0),                                _while_condtional26) {
                                    if(_if_conditional261=position==i_212,                                    _if_conditional261) {
                                        __dec_obj89=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_211, "./neo-c.h", 594, 2563)), "./neo-c.h", 594, 2564))->item;
                                        ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_211, "./neo-c.h", 594, 2563)), "./neo-c.h", 594, 2564))->item=(struct CVALUE*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj89,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    it_211=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_211, "./neo-c.h", 597, 2565)), "./neo-c.h", 597, 2566))->next;
                                    i_212++;
                                }
                                __result164__ = __result_obj__ = self;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result164__;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional264;
struct list_item$1CVALUEph* it_219;
int i_220;
_Bool _while_condtional28;
_Bool _if_conditional265;
struct CVALUE* __result166__;
struct CVALUE* default_value_221;
void* __exception_result_var_b306;
struct CVALUE* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_220, 0, sizeof(int));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
                                if(_if_conditional264=position<0,                                _if_conditional264) {
                                    position+=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 676, 2583)), "./neo-c.h", 676, 2584))->len;
                                }
                                it_219=((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./neo-c.h", 679, 2585)), "./neo-c.h", 679, 2586))->head;
                                i_220=0;
                                while(_while_condtional28=it_219!=((void*)0),                                _while_condtional28) {
                                    if(_if_conditional265=position==i_220,                                    _if_conditional265) {
                                        __result166__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_219, "./neo-c.h", 683, 2587)), "./neo-c.h", 683, 2588))->item;
                                        return __result166__;
                                    }
                                    it_219=((struct list_item$1CVALUEph*)come_null_check(((struct list_item$1CVALUEph*)come_null_check(it_219, "./neo-c.h", 685, 2589)), "./neo-c.h", 685, 2590))->next;
                                    i_220++;
                                }
                                (come_push_stackframe("./neo-c.h", 690, 2591),__exception_result_var_b306=memset(&default_value_221,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b306);
                                __result167__ = __result_obj__ = default_value_221;
                                come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result167__;
                                come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional274;
struct list_item$1charph* it_224;
int i_225;
_Bool _while_condtional31;
_Bool _if_conditional275;
char* __result169__;
char* default_value_226;
void* __exception_result_var_b323;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_224, 0, sizeof(struct list_item$1charph*));
memset(&i_225, 0, sizeof(int));
memset(&default_value_226, 0, sizeof(char*));
                            if(_if_conditional274=position<0,                            _if_conditional274) {
                                position+=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 676, 2642)), "./neo-c.h", 676, 2643))->len;
                            }
                            it_224=((struct list$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./neo-c.h", 679, 2644)), "./neo-c.h", 679, 2645))->head;
                            i_225=0;
                            while(_while_condtional31=it_224!=((void*)0),                            _while_condtional31) {
                                if(_if_conditional275=position==i_225,                                _if_conditional275) {
                                    __result169__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_224, "./neo-c.h", 683, 2646)), "./neo-c.h", 683, 2647))->item;
                                    return __result169__;
                                }
                                it_224=((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_224, "./neo-c.h", 685, 2648)), "./neo-c.h", 685, 2649))->next;
                                i_225++;
                            }
                            (come_push_stackframe("./neo-c.h", 690, 2650),__exception_result_var_b323=memset(&default_value_226,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b323);
                            __result170__ = __result_obj__ = default_value_226;
                            default_value_226 = come_decrement_ref_count2(default_value_226, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result170__;
                            default_value_226 = come_decrement_ref_count2(default_value_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value267;
struct sNodeBase* __exception_result_var_b372;
struct sNode* __dec_obj97;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b373;
void* right_value268;
struct list$1tuple2$2charphsNodephph* __dec_obj98;
struct sLambdaCall* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
right_value268 = (void*)0;
    (come_push_stackframe("05call.c", 794, 2856),__exception_result_var_b372=((struct sNodeBase*)(right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "05call.c", 794, 2854)), "05call.c", 794, 2855))),info))), come_pop_stackframe(), __exception_result_var_b372);
    come_call_finalizer3(right_value267,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=((struct sLambdaCall*)come_null_check(self, "05call.c", 796, 2857))->node;
    ((struct sLambdaCall*)come_null_check(self, "05call.c", 796, 2857))->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj98=((struct sLambdaCall*)come_null_check(self, "05call.c", 797, 2858))->params;
    ((struct sLambdaCall*)come_null_check(self, "05call.c", 797, 2858))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value268=(come_push_stackframe("05call.c", 797, 2859),__exception_result_var_b373=list$1tuple2$2charphsNodephphp_clone(params), come_pop_stackframe(), __exception_result_var_b373))));
    come_call_finalizer3(__dec_obj98,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value268,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result175__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result175__;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__;
void* right_value269;
char* __exception_result_var_b374;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
    __result176__ = __result_obj__ = (come_push_stackframe("05call.c", 802, 2872),__exception_result_var_b374=((char*)(right_value269=__builtin_string("sLambdaCall"))), come_pop_stackframe(), __exception_result_var_b374);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_239;
struct list$1tuple2$2charphsNodephph* params_240;
_Bool __exception_result_var_b375;
_Bool _if_conditional290;
_Bool __result177__;
void* right_value270;
struct CVALUE* __exception_result_var_b376;
struct CVALUE* come_value_241;
struct sType* lambda_type_242;
struct sType* __exception_result_var_b377;
void* right_value271;
struct sType* result_type_243;
void* right_value272;
void* right_value273;
struct list$1CVALUEph* __exception_result_var_b378;
struct list$1CVALUEph* come_params_244;
int __exception_result_var_b379;
int __exception_result_var_b380;
_Bool _if_conditional291;
int __exception_result_var_b381;
int __exception_result_var_b382;
_Bool __result178__;
int i_245;
struct list$1tuple2$2charphsNodephph* o2_saved_246;
struct tuple2$2charphsNodeph* __exception_result_var_b383;
struct tuple2$2charphsNodeph* it_247;
_Bool __exception_result_var_b384;
struct tuple2$2charphsNodeph* __exception_result_var_b385;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_248;
struct sNode* node_249;
_Bool __exception_result_var_b386;
_Bool _if_conditional292;
_Bool __result179__;
void* right_value274;
struct CVALUE* __exception_result_var_b387;
struct CVALUE* come_value_250;
struct sType* __exception_result_var_b388;
_Bool _if_conditional293;
void* right_value275;
void* right_value276;
struct sType* __exception_result_var_b389;
_Bool __exception_result_var_b390;
struct sType* __exception_result_var_b391;
_Bool _if_conditional294;
struct sType* __exception_result_var_b392;
struct list$1CVALUEph* __exception_result_var_b393;
void* right_value277;
void* right_value278;
struct buffer* __exception_result_var_b394;
struct buffer* buf_251;
struct buffer* __exception_result_var_b395;
struct buffer* __exception_result_var_b396;
struct buffer* __exception_result_var_b397;
struct buffer* __exception_result_var_b398;
int j_252;
struct list$1CVALUEph* o2_saved_253;
struct CVALUE* __exception_result_var_b399;
struct CVALUE* it_254;
_Bool __exception_result_var_b400;
struct CVALUE* __exception_result_var_b401;
struct buffer* __exception_result_var_b402;
int __exception_result_var_b403;
_Bool _if_conditional295;
struct buffer* __exception_result_var_b404;
struct buffer* __exception_result_var_b405;
void* right_value279;
struct CVALUE* come_value2_255;
void* right_value280;
char* __exception_result_var_b406;
char* __dec_obj99;
_Bool _if_conditional296;
void* right_value281;
char* __exception_result_var_b407;
char* __dec_obj100;
struct sType* __exception_result_var_b408;
void* right_value282;
struct sType* __dec_obj101;
struct list$1CVALUEph* __exception_result_var_b409;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_239, 0, sizeof(struct sNode*));
memset(&params_240, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value270 = (void*)0;
memset(&come_value_241, 0, sizeof(struct CVALUE*));
memset(&lambda_type_242, 0, sizeof(struct sType*));
right_value271 = (void*)0;
memset(&result_type_243, 0, sizeof(struct sType*));
right_value272 = (void*)0;
right_value273 = (void*)0;
memset(&come_params_244, 0, sizeof(struct list$1CVALUEph*));
memset(&i_245, 0, sizeof(int));
memset(&o2_saved_246, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_247, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value274 = (void*)0;
memset(&come_value_250, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&buf_251, 0, sizeof(struct buffer*));
memset(&j_252, 0, sizeof(int));
memset(&o2_saved_253, 0, sizeof(struct list$1CVALUEph*));
memset(&it_254, 0, sizeof(struct CVALUE*));
right_value279 = (void*)0;
memset(&come_value2_255, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
    node_239=(struct sNode*)come_increment_ref_count(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "05call.c", 807, 2873)), "05call.c", 807, 2874))->node);
    params_240=((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "05call.c", 808, 2875)), "05call.c", 808, 2876))->params;
    if(_if_conditional290=!(come_push_stackframe("05call.c", 810, 2877),__exception_result_var_b375=node_compile(node_239,info), come_pop_stackframe(), __exception_result_var_b375),    _if_conditional290) {
        __result177__ = (_Bool)0;
        if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result177__;
    }
    come_value_241=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 814, 2878),__exception_result_var_b376=((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b376));
    come_call_finalizer3(right_value270,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05call.c", 815,2879),dec_stack_ptr(1,info),come_pop_stackframe());
    lambda_type_242=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_241, "05call.c", 817, 2880)), "05call.c", 817, 2881))->type;
    result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=(come_push_stackframe("05call.c", 819, 2886),__exception_result_var_b377=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 819, 2882)), "05call.c", 819, 2883))->mResultType, "05call.c", 819, 2884)), "05call.c", 819, 2885))->v1), come_pop_stackframe(), __exception_result_var_b377))));
    come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(result_type_243, "05call.c", 820, 2887)), "05call.c", 820, 2888))->mStatic=(_Bool)0;
    come_params_244=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("05call.c", 822, 2890),__exception_result_var_b378=((struct list$1CVALUEph*)(right_value273=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)(right_value272=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 822, "list$1CVALUEph"))), "05call.c", 822, 2889)))))), come_pop_stackframe(), __exception_result_var_b378));
    come_call_finalizer3(right_value272,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value273,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional291=(come_push_stackframe("05call.c", 824, 2895),__exception_result_var_b379=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 824, 2891)), "05call.c", 824, 2892))->mParamTypes, "05call.c", 824, 2893)), "05call.c", 824, 2894))), come_pop_stackframe(), __exception_result_var_b379)!=(come_push_stackframe("05call.c", 824, 2898),__exception_result_var_b380=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_240, "05call.c", 824, 2896)), "05call.c", 824, 2897))), come_pop_stackframe(), __exception_result_var_b380)&&!((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 824, 2899)), "05call.c", 824, 2900))->mVarArgs,    _if_conditional291) {
        (come_push_stackframe("05call.c", 825,2909),err_msg(info,"invalid param number. function param number is %d. caller param number is %d",(come_push_stackframe("05call.c", 825, 2905),__exception_result_var_b381=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 825, 2901)), "05call.c", 825, 2902))->mParamTypes, "05call.c", 825, 2903)), "05call.c", 825, 2904))), come_pop_stackframe(), __exception_result_var_b381),(come_push_stackframe("05call.c", 825, 2908),__exception_result_var_b382=list$1tuple2$2charphsNodephph_length(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_240, "05call.c", 825, 2906)), "05call.c", 825, 2907))), come_pop_stackframe(), __exception_result_var_b382)),come_pop_stackframe());
        __result178__ = (_Bool)0;
        if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result178__;
    }
    i_245=0;
    for(    o2_saved_246=(params_240),it_247=(come_push_stackframe("05call.c", 830, 2912),__exception_result_var_b383=list$1tuple2$2charphsNodephph_begin(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_246), "05call.c", 830, 2910)), "05call.c", 830, 2911))), come_pop_stackframe(), __exception_result_var_b383);    !(come_push_stackframe("05call.c", 830, 2915),__exception_result_var_b384=list$1tuple2$2charphsNodephph_end(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_246), "05call.c", 830, 2913)), "05call.c", 830, 2914))), come_pop_stackframe(), __exception_result_var_b384);    it_247=(come_push_stackframe("05call.c", 830, 2918),__exception_result_var_b385=list$1tuple2$2charphsNodephph_next(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check((o2_saved_246), "05call.c", 830, 2916)), "05call.c", 830, 2917))), come_pop_stackframe(), __exception_result_var_b385)    ){
        multiple_assign_var6=it_247;
        label_248=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_249=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(_if_conditional292=!(come_push_stackframe("05call.c", 833, 2919),__exception_result_var_b386=node_compile(node_249,info), come_pop_stackframe(), __exception_result_var_b386),        _if_conditional292) {
            __result179__ = (_Bool)0;
            label_248 = come_decrement_ref_count2(label_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result179__;
        }
        come_value_250=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 837, 2920),__exception_result_var_b387=((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b387));
        come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional293=((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 838, 2921)), "05call.c", 838, 2922))->mVarArgs&&(come_push_stackframe("05call.c", 838, 2927),__exception_result_var_b388=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 838, 2923)), "05call.c", 838, 2924))->mParamTypes, "05call.c", 838, 2925)),i_245), "05call.c", 838, 2926)), come_pop_stackframe(), __exception_result_var_b388)==((void*)0),        _if_conditional293) {
        }
        else {
            (come_push_stackframe("05call.c", 841, 2935),__exception_result_var_b390=check_assign_type(((char*)(right_value276=xsprintf("calling param #\%s",((char*)(right_value275=int_to_string(i_245)))))),(come_push_stackframe("05call.c", 841, 2932),__exception_result_var_b389=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 841, 2928)), "05call.c", 841, 2929))->mParamTypes, "05call.c", 841, 2930)),i_245), "05call.c", 841, 2931)), come_pop_stackframe(), __exception_result_var_b389),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_250, "05call.c", 841, 2933)), "05call.c", 841, 2934))->type,come_value_250,(_Bool)0,(_Bool)1,info), come_pop_stackframe(), __exception_result_var_b390);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional294=((struct sType*)come_null_check(((struct sType*)come_null_check((come_push_stackframe("05call.c", 842, 2940),__exception_result_var_b391=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 842, 2936)), "05call.c", 842, 2937))->mParamTypes, "05call.c", 842, 2938)),i_245), "05call.c", 842, 2939)), come_pop_stackframe(), __exception_result_var_b391), "05call.c", 842, 2941)), "05call.c", 842, 2942))->mHeap&&((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_250, "05call.c", 842, 2943)), "05call.c", 842, 2944))->type, "05call.c", 842, 2945)), "05call.c", 842, 2946))->mHeap,            _if_conditional294) {
                (come_push_stackframe("05call.c", 843,2954),std_move((come_push_stackframe("05call.c", 843, 2951),__exception_result_var_b392=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 843, 2947)), "05call.c", 843, 2948))->mParamTypes, "05call.c", 843, 2949)),i_245), "05call.c", 843, 2950)), come_pop_stackframe(), __exception_result_var_b392),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_250, "05call.c", 843, 2952)), "05call.c", 843, 2953))->type,come_value_250,info),come_pop_stackframe());
            }
        }
        (come_push_stackframe("05call.c", 847, 2957),__exception_result_var_b393=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_244, "05call.c", 847, 2955)), "05call.c", 847, 2956)),(struct CVALUE*)come_increment_ref_count(come_value_250)), come_pop_stackframe(), __exception_result_var_b393);
        (come_push_stackframe("05call.c", 848,2958),dec_stack_ptr(1,info),come_pop_stackframe());
        i_245++;
        label_248 = come_decrement_ref_count2(label_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_251=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 853, 2960),__exception_result_var_b394=((struct buffer*)(right_value278=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value277=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 853, "buffer"))), "05call.c", 853, 2959)))))), come_pop_stackframe(), __exception_result_var_b394));
    come_call_finalizer3(right_value277,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value278,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05call.c", 855, 2963),__exception_result_var_b395=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 855, 2961)), "05call.c", 855, 2962)),"("), come_pop_stackframe(), __exception_result_var_b395);
    (come_push_stackframe("05call.c", 856, 2968),__exception_result_var_b396=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 856, 2964)), "05call.c", 856, 2965)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_241, "05call.c", 856, 2966)), "05call.c", 856, 2967))->c_value), come_pop_stackframe(), __exception_result_var_b396);
    (come_push_stackframe("05call.c", 857, 2971),__exception_result_var_b397=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 857, 2969)), "05call.c", 857, 2970)),")"), come_pop_stackframe(), __exception_result_var_b397);
    (come_push_stackframe("05call.c", 858, 2974),__exception_result_var_b398=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 858, 2972)), "05call.c", 858, 2973)),"("), come_pop_stackframe(), __exception_result_var_b398);
    j_252=0;
    for(    o2_saved_253=(struct list$1CVALUEph*)come_increment_ref_count((come_params_244)),it_254=(come_push_stackframe("05call.c", 861, 2977),__exception_result_var_b399=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "05call.c", 861, 2975)), "05call.c", 861, 2976))), come_pop_stackframe(), __exception_result_var_b399);    !(come_push_stackframe("05call.c", 861, 2980),__exception_result_var_b400=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "05call.c", 861, 2978)), "05call.c", 861, 2979))), come_pop_stackframe(), __exception_result_var_b400);    it_254=(come_push_stackframe("05call.c", 861, 2983),__exception_result_var_b401=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check((o2_saved_253), "05call.c", 861, 2981)), "05call.c", 861, 2982))), come_pop_stackframe(), __exception_result_var_b401)    ){
        (come_push_stackframe("05call.c", 862, 2988),__exception_result_var_b402=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 862, 2984)), "05call.c", 862, 2985)),((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(it_254, "05call.c", 862, 2986)), "05call.c", 862, 2987))->c_value), come_pop_stackframe(), __exception_result_var_b402);
        if(_if_conditional295=j_252!=(come_push_stackframe("05call.c", 864, 2991),__exception_result_var_b403=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(come_params_244, "05call.c", 864, 2989)), "05call.c", 864, 2990))), come_pop_stackframe(), __exception_result_var_b403)-1,        _if_conditional295) {
            (come_push_stackframe("05call.c", 865, 2994),__exception_result_var_b404=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 865, 2992)), "05call.c", 865, 2993)),","), come_pop_stackframe(), __exception_result_var_b404);
        }
        j_252++;
    }
    come_call_finalizer3(o2_saved_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    (come_push_stackframe("05call.c", 870, 2997),__exception_result_var_b405=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 870, 2995)), "05call.c", 870, 2996)),")"), come_pop_stackframe(), __exception_result_var_b405);
    come_value2_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 872, "CVALUE"))));
    come_call_finalizer3(right_value279,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 873, 2998)), "05call.c", 873, 2999))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 873, 2998)), "05call.c", 873, 2999))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 873, 3002),__exception_result_var_b406=((char*)(right_value280=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_251, "05call.c", 873, 3000)), "05call.c", 873, 3001))))), come_pop_stackframe(), __exception_result_var_b406));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 875, 3003)), "05call.c", 875, 3004))->mResultType, "05call.c", 875, 3005)), "05call.c", 875, 3006))->v1, "05call.c", 875, 3007)), "05call.c", 875, 3008))->mHeap) {
        __dec_obj100=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 876, 3009)), "05call.c", 876, 3010))->c_value;
        ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 876, 3009)), "05call.c", 876, 3010))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 876, 3017),__exception_result_var_b407=((char*)(right_value281=append_object_to_right_values(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 876, 3011)), "05call.c", 876, 3012))->c_value,(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(lambda_type_242, "05call.c", 876, 3013)), "05call.c", 876, 3014))->mResultType, "05call.c", 876, 3015)), "05call.c", 876, 3016))->v1),info))), come_pop_stackframe(), __exception_result_var_b407));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj101=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 879, 3018)), "05call.c", 879, 3019))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 879, 3018)), "05call.c", 879, 3019))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=(come_push_stackframe("05call.c", 879, 3020),__exception_result_var_b408=sType_clone(result_type_243), come_pop_stackframe(), __exception_result_var_b408))));
    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, __result_obj__);
    ((struct sType*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 880, 3021)), "05call.c", 880, 3022))->type, "05call.c", 880, 3023)), "05call.c", 880, 3024))->mStatic=(_Bool)0;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 881, 3025)), "05call.c", 881, 3026))->var=((void*)0);
    (come_push_stackframe("05call.c", 883,3029),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value2_255, "05call.c", 883, 3027)), "05call.c", 883, 3028))->c_value),come_pop_stackframe());
    (come_push_stackframe("05call.c", 885, 3034),__exception_result_var_b409=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 885, 3030)), "05call.c", 885, 3031))->stack, "05call.c", 885, 3032)), "05call.c", 885, 3033)),(struct CVALUE*)come_increment_ref_count(come_value2_255)), come_pop_stackframe(), __exception_result_var_b409);
    __result180__ = (_Bool)1;
    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result180__;
    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value283;
struct sNodeBase* __exception_result_var_b410;
struct sType* __dec_obj102;
struct sVarArgTypeName* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
    (come_push_stackframe("05call.c", 895, 3037),__exception_result_var_b410=((struct sNodeBase*)(right_value283=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "05call.c", 895, 3035)), "05call.c", 895, 3036))),info))), come_pop_stackframe(), __exception_result_var_b410);
    come_call_finalizer3(right_value283,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=((struct sVarArgTypeName*)come_null_check(self, "05call.c", 897, 3038))->type;
    ((struct sVarArgTypeName*)come_null_check(self, "05call.c", 897, 3038))->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result181__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result181__;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__;
void* right_value284;
char* __exception_result_var_b411;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
    __result182__ = __result_obj__ = (come_push_stackframe("05call.c", 902, 3047),__exception_result_var_b411=((char*)(right_value284=__builtin_string("sVarArgTypeName"))), come_pop_stackframe(), __exception_result_var_b411);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result182__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_256;
void* right_value285;
struct CVALUE* come_value_257;
void* right_value286;
char* __exception_result_var_b412;
char* __dec_obj103;
struct sType* __dec_obj104;
struct list$1CVALUEph* __exception_result_var_b413;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_256, 0, sizeof(struct sType*));
right_value285 = (void*)0;
memset(&come_value_257, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
    type_256=(struct sType*)come_increment_ref_count(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "05call.c", 907, 3048)), "05call.c", 907, 3049))->type);
    come_value_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 909, "CVALUE"))));
    come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj103=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_257, "05call.c", 911, 3050)), "05call.c", 911, 3051))->c_value;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_257, "05call.c", 911, 3050)), "05call.c", 911, 3051))->c_value=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 911, 3052),__exception_result_var_b412=((char*)(right_value286=make_type_name_string(type_256,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b412));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj104=((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_257, "05call.c", 912, 3053)), "05call.c", 912, 3054))->type;
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_257, "05call.c", 912, 3053)), "05call.c", 912, 3054))->type=(struct sType*)come_increment_ref_count(type_256);
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((struct CVALUE*)come_null_check(((struct CVALUE*)come_null_check(come_value_257, "05call.c", 913, 3055)), "05call.c", 913, 3056))->var=((void*)0);
    (come_push_stackframe("05call.c", 915, 3061),__exception_result_var_b413=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 915, 3057)), "05call.c", 915, 3058))->stack, "05call.c", 915, 3059)), "05call.c", 915, 3060)),(struct CVALUE*)come_increment_ref_count(come_value_257)), come_pop_stackframe(), __exception_result_var_b413);
    __result183__ = (_Bool)1;
    come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result183__;
    come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value287;
void* right_value288;
struct list$1sTypeph* __exception_result_var_b414;
struct list$1sTypeph* method_generics_types_258;
_Bool _if_conditional299;
_Bool _while_condtional32;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value289;
struct tuple3$3sTypephcharphbool* __exception_result_var_b415;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_259;
char* name_260;
_Bool err_261;
_Bool _if_conditional305;
struct sType* __exception_result_var_b416;
void* right_value290;
struct list$1sTypeph* __exception_result_var_b417;
int __exception_result_var_b418;
void* right_value291;
void* right_value292;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b419;
struct list$1tuple2$2charphsNodephph* params_262;
_Bool _va_arg_263;
_Bool __exception_result_var_b420;
_Bool _if_conditional306;
_Bool _while_condtional33;
_Bool _if_conditional307;
char* p_264;
int sline_265;
_Bool err_flag_266;
void* right_value293;
char* __exception_result_var_b421;
char* label_267;
_Bool __exception_result_var_b422;
_Bool _if_conditional308;
void* right_value294;
char* __exception_result_var_b423;
char* __dec_obj105;
_Bool _if_conditional309;
char* __dec_obj106;
_Bool no_comma_268;
void* right_value295;
struct sNode* __exception_result_var_b424;
struct sNode* node_269;
void* right_value296;
struct sNode* __exception_result_var_b425;
struct sNode* __dec_obj107;
void* right_value300;
void* right_value301;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b426;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool guard_break_273;
_Bool _if_conditional314;
void* right_value302;
void* right_value303;
struct sFunCallNode* __exception_result_var_b427;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value309;
struct sNode* node_274;
void* right_value310;
struct sNode* __exception_result_var_b432;
struct sNode* __dec_obj117;
struct sNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&method_generics_types_258, 0, sizeof(struct list$1sTypeph*));
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&params_262, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&_va_arg_263, 0, sizeof(_Bool));
memset(&p_264, 0, sizeof(char*));
memset(&sline_265, 0, sizeof(int));
memset(&err_flag_266, 0, sizeof(_Bool));
right_value293 = (void*)0;
memset(&label_267, 0, sizeof(char*));
right_value294 = (void*)0;
memset(&no_comma_268, 0, sizeof(_Bool));
right_value295 = (void*)0;
memset(&node_269, 0, sizeof(struct sNode*));
right_value296 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&guard_break_273, 0, sizeof(_Bool));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value309 = (void*)0;
memset(&node_274, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
    method_generics_types_258=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("05call.c", 923, 3063),__exception_result_var_b414=((struct list$1sTypeph*)(right_value288=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value287=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 923, "list$1sTypeph"))), "05call.c", 923, 3062)))))), come_pop_stackframe(), __exception_result_var_b414));
    come_call_finalizer3(right_value287,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value288,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional299=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 925, 3064)), "05call.c", 925, 3065))->p, "05call.c", 925, 3066))==60,    _if_conditional299) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 926, 3067)), "05call.c", 926, 3068))->p++;
        (come_push_stackframe("05call.c", 927,3069),skip_spaces_and_lf(info),come_pop_stackframe());
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            if(_if_conditional300=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 930, 3070)), "05call.c", 930, 3071))->p, "05call.c", 930, 3072))==0,            _if_conditional300) {
                (come_push_stackframe("05call.c", 931,3073),err_msg(info,"unexpected source end"),come_pop_stackframe());
                (come_push_stackframe("05call.c", 932,3074),exit(2),come_pop_stackframe());
            }
            else {
                if(_if_conditional301=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 934, 3075)), "05call.c", 934, 3076))->p, "05call.c", 934, 3077))==62,                _if_conditional301) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 935, 3078)), "05call.c", 935, 3079))->p++;
                    (come_push_stackframe("05call.c", 936,3080),skip_spaces_and_lf(info),come_pop_stackframe());
                    break;
                }
                else {
                    if(_if_conditional302=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 939, 3081)), "05call.c", 939, 3082))->p, "05call.c", 939, 3083))==44,                    _if_conditional302) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 940, 3084)), "05call.c", 940, 3085))->p++;
                        (come_push_stackframe("05call.c", 941,3086),skip_spaces_and_lf(info),come_pop_stackframe());
                    }
                    else {
                        multiple_assign_var7=(come_push_stackframe("05call.c", 944, 3087),__exception_result_var_b415=((struct tuple3$3sTypephcharphbool*)(right_value289=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b415);
                        type_259=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                        name_260=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                        err_261=multiple_assign_var7->v3;
                        come_call_finalizer3(right_value289,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional305=!err_261,                        _if_conditional305) {
                            (come_push_stackframe("05call.c", 947,3096),err_msg(info,"invalid method generics paramtor type"),come_pop_stackframe());
                            (come_push_stackframe("05call.c", 948,3097),exit(2),come_pop_stackframe());
                        }
                        (come_push_stackframe("05call.c", 951, 3101),__exception_result_var_b417=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(method_generics_types_258, "05call.c", 951, 3098)), "05call.c", 951, 3099)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=(come_push_stackframe("05call.c", 951, 3100),__exception_result_var_b416=sType_clone(type_259), come_pop_stackframe(), __exception_result_var_b416))))), come_pop_stackframe(), __exception_result_var_b417);
                        come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    (come_push_stackframe("05call.c", 956,3102),parse_sharp_v5(info),come_pop_stackframe());
    (come_push_stackframe("05call.c", 957, 3103),__exception_result_var_b418=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b418);
    (come_push_stackframe("05call.c", 959,3104),parse_sharp_v5(info),come_pop_stackframe());
    params_262=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("05call.c", 961, 3106),__exception_result_var_b419=((struct list$1tuple2$2charphsNodephph*)(right_value292=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value291=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 961, "list$1tuple2$2charphsNodephph"))), "05call.c", 961, 3105)))))), come_pop_stackframe(), __exception_result_var_b419));
    come_call_finalizer3(right_value291,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value292,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    _va_arg_263=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 963, 3107)), "05call.c", 963, 3108))->va_arg;
    if(_if_conditional306=(come_push_stackframe("05call.c", 964, 3109),__exception_result_var_b420=charp_operator_equals(fun_name,"__builtin_va_arg"), come_pop_stackframe(), __exception_result_var_b420),    _if_conditional306) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 965, 3110)), "05call.c", 965, 3111))->va_arg=(_Bool)1;
    }
    while(_while_condtional33=(_Bool)1,    _while_condtional33) {
        if(_if_conditional307=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 969, 3112)), "05call.c", 969, 3113))->p, "05call.c", 969, 3114))==41,        _if_conditional307) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 970, 3115)), "05call.c", 970, 3116))->p++;
            (come_push_stackframe("05call.c", 971,3117),skip_spaces_and_lf(info),come_pop_stackframe());
            break;
        }
        p_264=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 975, 3118)), "05call.c", 975, 3119))->p;
        sline_265=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 976, 3120)), "05call.c", 976, 3121))->sline;
        err_flag_266=(_Bool)0;
        label_267=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 979, 3122),__exception_result_var_b421=((char*)(right_value293=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b421));
        right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional308=(come_push_stackframe("05call.c", 980, 3126),__exception_result_var_b422=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 980, 3123)), "05call.c", 980, 3124))->p, "05call.c", 980, 3125))), come_pop_stackframe(), __exception_result_var_b422)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 980, 3127)), "05call.c", 980, 3128))->p, "05call.c", 980, 3129))==95,        _if_conditional308) {
            __dec_obj105=label_267;
            label_267=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 981, 3130),__exception_result_var_b423=((char*)(right_value294=parse_word(info))), come_pop_stackframe(), __exception_result_var_b423));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_266=(_Bool)1;
        }
        if(_if_conditional309=err_flag_266==(_Bool)1&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 985, 3131)), "05call.c", 985, 3132))->p, "05call.c", 985, 3133))==58,        _if_conditional309) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 986, 3134)), "05call.c", 986, 3135))->p++;
            (come_push_stackframe("05call.c", 987,3136),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        else {
            __dec_obj106=label_267;
            label_267=((void*)0);
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 992, 3137)), "05call.c", 992, 3138))->p=p_264;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 993, 3139)), "05call.c", 993, 3140))->sline=sline_265;
        }
        no_comma_268=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 996, 3141)), "05call.c", 996, 3142))->no_comma;
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 997, 3143)), "05call.c", 997, 3144))->no_comma=(_Bool)1;
        node_269=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 999, 3145),__exception_result_var_b424=((struct sNode*)(right_value295=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b424));
        if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj107=node_269;
        node_269=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1001, 3146),__exception_result_var_b425=((struct sNode*)(right_value296=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_269),info))), come_pop_stackframe(), __exception_result_var_b425));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1003, 3147)), "05call.c", 1003, 3148))->no_comma=no_comma_268;
        (come_push_stackframe("05call.c", 1005, 3199),__exception_result_var_b426=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_262, "05call.c", 1005, 3149)), "05call.c", 1005, 3150)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value301=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value300=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1005, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_267),(struct sNode*)come_increment_ref_count(node_269)))))), come_pop_stackframe(), __exception_result_var_b426);
        come_call_finalizer3(right_value300,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value301,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        (come_push_stackframe("05call.c", 1007,3200),parse_sharp_v5(info),come_pop_stackframe());
        if(_if_conditional312=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1009, 3201)), "05call.c", 1009, 3202))->p, "05call.c", 1009, 3203))==44,        _if_conditional312) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1010, 3204)), "05call.c", 1010, 3205))->p++;
            (come_push_stackframe("05call.c", 1011,3206),skip_spaces_and_lf(info),come_pop_stackframe());
        }
        else {
            if(_if_conditional313=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1013, 3207)), "05call.c", 1013, 3208))->p, "05call.c", 1013, 3209))==41,            _if_conditional313) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1014, 3210)), "05call.c", 1014, 3211))->p++;
                (come_push_stackframe("05call.c", 1015,3212),skip_spaces_and_lf(info),come_pop_stackframe());
                label_267 = come_decrement_ref_count2(label_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_267 = come_decrement_ref_count2(label_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1021, 3213)), "05call.c", 1021, 3214))->va_arg=_va_arg_263;
    guard_break_273=(_Bool)0;
    if(_if_conditional314=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1024, 3215)), "05call.c", 1024, 3216))->p, "05call.c", 1024, 3217))==63&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1024, 3218)), "05call.c", 1024, 3219))->p+1), "05call.c", 1024, 3220))==63,    _if_conditional314) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1025, 3221)), "05call.c", 1025, 3222))->p+=2;
        (come_push_stackframe("05call.c", 1026,3223),skip_spaces_and_lf(info),come_pop_stackframe());
        guard_break_273=(_Bool)1;
    }
    (come_push_stackframe("05call.c", 1030,3224),parse_sharp_v5(info),come_pop_stackframe());
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1032, "struct sNode");
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("05call.c", 1032, 3226),__exception_result_var_b427=((struct sFunCallNode*)(right_value303=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)(right_value302=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1032, "sFunCallNode"))), "05call.c", 1032, 3225))),fun_name,params_262,guard_break_273,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_258),info))), come_pop_stackframe(), __exception_result_var_b427));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=_inf_value1)));
    come_call_finalizer3(right_value302,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value303,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj117=node_274;
    node_274=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1034, 3279),__exception_result_var_b432=((struct sNode*)(right_value310=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_274),info))), come_pop_stackframe(), __exception_result_var_b432));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result188__ = __result_obj__ = node_274;
    come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_262,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result188__;
    come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_262,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_274) { node_274 = come_decrement_ref_count2(node_274, ((struct sNode*)node_274)->finalize, ((struct sNode*)node_274)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional303=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3088)), "tuple3$3sTypephcharphboolp_finalize", 0, 3089))->v1!=((void*)0),                            _if_conditional303) {
                                come_call_finalizer3(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0, 3090)), "tuple3$3sTypephcharphboolp_finalize", 0, 3091))->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional304=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3092)), "tuple3$3sTypephcharphboolp_finalize", 1, 3093))->v2!=((void*)0),                            _if_conditional304) {
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3094)), "tuple3$3sTypephcharphboolp_finalize", 1, 3095))->v2 = come_decrement_ref_count2(((struct tuple3$3sTypephcharphbool*)come_null_check(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1, 3094)), "tuple3$3sTypephcharphboolp_finalize", 1, 3095))->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional310;
void* right_value297;
struct list_item$1tuple2$2charphsNodephph* litem_270;
struct tuple2$2charphsNodeph* __dec_obj108;
_Bool _if_conditional311;
void* right_value298;
struct list_item$1tuple2$2charphsNodephph* litem_271;
struct tuple2$2charphsNodeph* __dec_obj109;
void* right_value299;
struct list_item$1tuple2$2charphsNodephph* litem_272;
struct tuple2$2charphsNodeph* __dec_obj110;
struct list$1tuple2$2charphsNodephph* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
memset(&litem_270, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value298 = (void*)0;
memset(&litem_271, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value299 = (void*)0;
memset(&litem_272, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional310=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 222, 3151)), "./neo-c.h", 222, 3152))->len==0,            _if_conditional310) {
                litem_270=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value297=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(right_value297,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_270, "./neo-c.h", 225, 3153)), "./neo-c.h", 225, 3154))->prev=((void*)0);
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_270, "./neo-c.h", 226, 3155)), "./neo-c.h", 226, 3156))->next=((void*)0);
                __dec_obj108=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_270, "./neo-c.h", 227, 3157)), "./neo-c.h", 227, 3158))->item;
                ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_270, "./neo-c.h", 227, 3157)), "./neo-c.h", 227, 3158))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj108,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 229, 3159)), "./neo-c.h", 229, 3160))->tail=litem_270;
                ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 230, 3161)), "./neo-c.h", 230, 3162))->head=litem_270;
            }
            else {
                if(_if_conditional311=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 232, 3163)), "./neo-c.h", 232, 3164))->len==1,                _if_conditional311) {
                    litem_271=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value298=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value298,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_271, "./neo-c.h", 235, 3165)), "./neo-c.h", 235, 3166))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 235, 3167)), "./neo-c.h", 235, 3168))->head;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_271, "./neo-c.h", 236, 3169)), "./neo-c.h", 236, 3170))->next=((void*)0);
                    __dec_obj109=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_271, "./neo-c.h", 237, 3171)), "./neo-c.h", 237, 3172))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_271, "./neo-c.h", 237, 3171)), "./neo-c.h", 237, 3172))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj109,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 239, 3173)), "./neo-c.h", 239, 3174))->tail=litem_271;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 240, 3175)), "./neo-c.h", 240, 3176))->head, "./neo-c.h", 240, 3177)), "./neo-c.h", 240, 3178))->next=litem_271;
                }
                else {
                    litem_272=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value299=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value299,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_272, "./neo-c.h", 245, 3179)), "./neo-c.h", 245, 3180))->prev=((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 245, 3181)), "./neo-c.h", 245, 3182))->tail;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_272, "./neo-c.h", 246, 3183)), "./neo-c.h", 246, 3184))->next=((void*)0);
                    __dec_obj110=((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_272, "./neo-c.h", 247, 3185)), "./neo-c.h", 247, 3186))->item;
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(litem_272, "./neo-c.h", 247, 3185)), "./neo-c.h", 247, 3186))->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj110,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    ((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list_item$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 249, 3187)), "./neo-c.h", 249, 3188))->tail, "./neo-c.h", 249, 3189)), "./neo-c.h", 249, 3190))->next=litem_272;
                    ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 250, 3191)), "./neo-c.h", 250, 3192))->tail=litem_272;
                }
            }
            ((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(self, "./neo-c.h", 253, 3193)), "./neo-c.h", 253, 3194))->len++;
            __result184__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result184__;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj111;
struct sNode* __dec_obj112;
struct tuple2$2charphsNodeph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj111=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 3195)), "./neo-c.h", 1744, 3196))->v1;
            ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1744, 3195)), "./neo-c.h", 1744, 3196))->v1=(char*)come_increment_ref_count(v1);
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj112=((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 3197)), "./neo-c.h", 1745, 3198))->v2;
            ((struct tuple2$2charphsNodeph*)come_null_check(((struct tuple2$2charphsNodeph*)come_null_check(self, "./neo-c.h", 1745, 3197)), "./neo-c.h", 1745, 3198))->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
            __result185__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result185__;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional315=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 0, 3227)), "sFunCallNode_finalize", 0, 3228))->sname!=((void*)0),        _if_conditional315) {
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 0, 3229)), "sFunCallNode_finalize", 0, 3230))->sname = come_decrement_ref_count2(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 0, 3229)), "sFunCallNode_finalize", 0, 3230))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional316=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 1, 3231)), "sFunCallNode_finalize", 1, 3232))->fun_name!=((void*)0),        _if_conditional316) {
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 1, 3233)), "sFunCallNode_finalize", 1, 3234))->fun_name = come_decrement_ref_count2(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 1, 3233)), "sFunCallNode_finalize", 1, 3234))->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional317=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 2, 3235)), "sFunCallNode_finalize", 2, 3236))->params!=((void*)0),        _if_conditional317) {
            come_call_finalizer3(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 2, 3237)), "sFunCallNode_finalize", 2, 3238))->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional318=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 3, 3239)), "sFunCallNode_finalize", 3, 3240))->method_generics_types!=((void*)0),        _if_conditional318) {
            come_call_finalizer3(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_finalize", 3, 3241)), "sFunCallNode_finalize", 3, 3242))->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional319;
struct sFunCallNode* __result186__;
void* right_value304;
struct sFunCallNode* result_275;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* __exception_result_var_b428;
void* right_value305;
char* __dec_obj113;
_Bool _if_conditional322;
char* __exception_result_var_b429;
void* right_value306;
char* __dec_obj114;
_Bool _if_conditional323;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b430;
void* right_value307;
struct list$1tuple2$2charphsNodephph* __dec_obj115;
_Bool _if_conditional324;
_Bool _if_conditional325;
struct list$1sTypeph* __exception_result_var_b431;
void* right_value308;
struct list$1sTypeph* __dec_obj116;
struct sFunCallNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
memset(&result_275, 0, sizeof(struct sFunCallNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
        if(_if_conditional319=self==(void*)0,        _if_conditional319) {
            __result186__ = __result_obj__ = (void*)0;
            return __result186__;
        }
        result_275=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value304=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer3(right_value304,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional320=self!=((void*)0),        _if_conditional320) {
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 4, 3243)), "sFunCallNode_clone", 4, 3244))->sline=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 4, 3245)), "sFunCallNode_clone", 4, 3246))->sline;
        }
        if(_if_conditional321=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 5, 3247)), "sFunCallNode_clone", 5, 3248))->sname!=((void*)0),        _if_conditional321) {
            __dec_obj113=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 5, 3249)), "sFunCallNode_clone", 5, 3250))->sname;
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 5, 3249)), "sFunCallNode_clone", 5, 3250))->sname=(char*)come_increment_ref_count(((char*)(right_value305=(come_push_stackframe("sFunCallNode_clone", 5, 3253),__exception_result_var_b428=string_clone(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 5, 3251)), "sFunCallNode_clone", 5, 3252))->sname), come_pop_stackframe(), __exception_result_var_b428))));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional322=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 6, 3254)), "sFunCallNode_clone", 6, 3255))->fun_name!=((void*)0),        _if_conditional322) {
            __dec_obj114=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 6, 3256)), "sFunCallNode_clone", 6, 3257))->fun_name;
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 6, 3256)), "sFunCallNode_clone", 6, 3257))->fun_name=(char*)come_increment_ref_count(((char*)(right_value306=(come_push_stackframe("sFunCallNode_clone", 6, 3260),__exception_result_var_b429=string_clone(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 6, 3258)), "sFunCallNode_clone", 6, 3259))->fun_name), come_pop_stackframe(), __exception_result_var_b429))));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional323=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 7, 3261)), "sFunCallNode_clone", 7, 3262))->params!=((void*)0),        _if_conditional323) {
            __dec_obj115=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 7, 3263)), "sFunCallNode_clone", 7, 3264))->params;
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 7, 3263)), "sFunCallNode_clone", 7, 3264))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value307=(come_push_stackframe("sFunCallNode_clone", 7, 3267),__exception_result_var_b430=list$1tuple2$2charphsNodephphp_clone(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 7, 3265)), "sFunCallNode_clone", 7, 3266))->params), come_pop_stackframe(), __exception_result_var_b430))));
            come_call_finalizer3(__dec_obj115,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value307,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional324=self!=((void*)0),        _if_conditional324) {
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 8, 3268)), "sFunCallNode_clone", 8, 3269))->guard_break=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 8, 3270)), "sFunCallNode_clone", 8, 3271))->guard_break;
        }
        if(_if_conditional325=self!=((void*)0)&&((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 9, 3272)), "sFunCallNode_clone", 9, 3273))->method_generics_types!=((void*)0),        _if_conditional325) {
            __dec_obj116=((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 9, 3274)), "sFunCallNode_clone", 9, 3275))->method_generics_types;
            ((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(result_275, "sFunCallNode_clone", 9, 3274)), "sFunCallNode_clone", 9, 3275))->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value308=(come_push_stackframe("sFunCallNode_clone", 9, 3278),__exception_result_var_b431=list$1sTypephp_clone(((struct sFunCallNode*)come_null_check(((struct sFunCallNode*)come_null_check(self, "sFunCallNode_clone", 9, 3276)), "sFunCallNode_clone", 9, 3277))->method_generics_types), come_pop_stackframe(), __exception_result_var_b431))));
            come_call_finalizer3(__dec_obj116,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value308,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result187__ = __result_obj__ = result_275;
        come_call_finalizer3(result_275,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result187__;
        come_call_finalizer3(result_275,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("05call.c", 1041,3280),skip_spaces_and_lf(info),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1042,3281),parse_sharp_v5(info),come_pop_stackframe());
    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1044, 3282)), "05call.c", 1044, 3283))->no_output_err=(_Bool)0;
    (come_push_stackframe("05call.c", 1045,3287),err_msg(info,"invalid character(%c)(1)\n",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1045, 3284)), "05call.c", 1045, 3285))->p, "05call.c", 1045, 3286))),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1046,3288),stackframe(),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1047,3289),exit(3),come_pop_stackframe());
    __result189__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result189__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b433;
_Bool _if_conditional326;
unsigned long int __exception_result_var_b434;
_Bool _if_conditional327;
void* right_value311;
void* right_value312;
char* __exception_result_var_b435;
void* right_value313;
struct sReturnNode* __exception_result_var_b436;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* right_value318;
struct sNode* __result192__;
char* head_277;
void* right_value319;
struct sNode* __exception_result_var_b440;
struct sNode* value_278;
char* tail_279;
void* right_value320;
struct sNode* __exception_result_var_b441;
struct sNode* __dec_obj121;
void* __exception_result_var_b442;
void* right_value321;
void* right_value322;
char* __exception_result_var_b443;
void* right_value323;
struct sReturnNode* __exception_result_var_b444;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* right_value328;
struct sNode* __result195__;
_Bool __exception_result_var_b448;
_Bool _if_conditional344;
char* head_282;
int head_sline_283;
void* right_value329;
char* __exception_result_var_b449;
char* buf_284;
_Bool __exception_result_var_b450;
_Bool is_type_name__285;
_Bool define_function_pointer_flag_286;
_Bool __exception_result_var_b451;
_Bool __exception_result_var_b452;
_Bool __exception_result_var_b453;
_Bool __exception_result_var_b454;
_Bool __exception_result_var_b455;
_Bool __exception_result_var_b456;
_Bool __exception_result_var_b457;
_Bool __exception_result_var_b458;
_Bool __exception_result_var_b459;
_Bool __exception_result_var_b460;
_Bool __exception_result_var_b461;
_Bool __exception_result_var_b462;
_Bool __exception_result_var_b463;
_Bool __exception_result_var_b464;
_Bool __exception_result_var_b465;
_Bool __exception_result_var_b466;
_Bool __exception_result_var_b467;
_Bool __exception_result_var_b468;
_Bool _if_conditional345;
void* right_value330;
struct tuple3$3sTypephcharphbool* __exception_result_var_b469;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool lambda_flag_287;
_Bool __exception_result_var_b470;
_Bool __exception_result_var_b471;
_Bool __exception_result_var_b472;
_Bool __exception_result_var_b473;
_Bool __exception_result_var_b474;
_Bool __exception_result_var_b475;
_Bool __exception_result_var_b476;
_Bool __exception_result_var_b477;
_Bool __exception_result_var_b478;
_Bool __exception_result_var_b479;
_Bool __exception_result_var_b480;
_Bool __exception_result_var_b481;
_Bool __exception_result_var_b482;
_Bool __exception_result_var_b483;
_Bool __exception_result_var_b484;
_Bool __exception_result_var_b485;
_Bool __exception_result_var_b486;
_Bool __exception_result_var_b487;
_Bool _if_conditional348;
void* right_value331;
struct tuple3$3sTypephcharphbool* __exception_result_var_b488;
void* right_value332;
char* __exception_result_var_b489;
char* word2_288;
_Bool __exception_result_var_b490;
_Bool _if_conditional349;
_Bool fun_name_with_type_name_289;
_Bool __exception_result_var_b491;
_Bool __exception_result_var_b492;
_Bool __exception_result_var_b493;
_Bool __exception_result_var_b494;
_Bool __exception_result_var_b495;
_Bool __exception_result_var_b496;
_Bool __exception_result_var_b497;
_Bool __exception_result_var_b498;
_Bool __exception_result_var_b499;
_Bool __exception_result_var_b500;
_Bool __exception_result_var_b501;
_Bool __exception_result_var_b502;
_Bool __exception_result_var_b503;
_Bool __exception_result_var_b504;
_Bool __exception_result_var_b505;
_Bool __exception_result_var_b506;
_Bool __exception_result_var_b507;
_Bool __exception_result_var_b508;
_Bool _if_conditional350;
_Bool __exception_result_var_b509;
_Bool _if_conditional351;
void* right_value333;
char* __exception_result_var_b510;
char* word2_290;
_Bool _while_condtional34;
_Bool _if_conditional352;
_Bool __exception_result_var_b511;
_Bool _if_conditional353;
_Bool call_method_generics_fun_call_291;
_Bool __exception_result_var_b512;
_Bool _if_conditional354;
void* right_value334;
char* __exception_result_var_b513;
char* __dec_obj125;
_Bool __exception_result_var_b514;
struct sVar* __exception_result_var_b518;
struct sVar* __exception_result_var_b519;
_Bool _if_conditional363;
int nest_295;
_Bool _while_condtional36;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value335;
char* __exception_result_var_b520;
char* __dec_obj126;
_Bool _if_conditional369;
void* right_value336;
struct sNode* __exception_result_var_b521;
struct sNode* __result200__;
_Bool __exception_result_var_b522;
_Bool __exception_result_var_b523;
_Bool _if_conditional370;
void* right_value337;
struct sNode* __exception_result_var_b524;
struct sNode* node_296;
struct sNode* __result201__;
_Bool __exception_result_var_b525;
_Bool _if_conditional371;
void* right_value338;
void* right_value339;
struct sFuncNode* __exception_result_var_b526;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* right_value342;
struct sNode* __result204__;
_Bool __exception_result_var_b528;
_Bool _if_conditional376;
void* right_value343;
void* right_value344;
struct sLineNode* __exception_result_var_b529;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* right_value347;
struct sNode* __result207__;
_Bool __exception_result_var_b531;
_Bool _if_conditional381;
void* right_value348;
void* right_value349;
struct sSNameNode* __exception_result_var_b532;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* right_value352;
struct sNode* __result210__;
_Bool __exception_result_var_b534;
_Bool _if_conditional386;
void* right_value353;
void* right_value354;
struct sCallerFuncNode* __exception_result_var_b535;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* right_value357;
struct sNode* __result213__;
_Bool __exception_result_var_b537;
_Bool _if_conditional391;
void* right_value358;
void* right_value359;
struct sCallerLineNode* __exception_result_var_b538;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* right_value362;
struct sNode* __result216__;
_Bool __exception_result_var_b540;
_Bool _if_conditional396;
void* right_value363;
void* right_value364;
struct sCallerSNameNode* __exception_result_var_b541;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* right_value367;
struct sNode* __result219__;
_Bool __exception_result_var_b543;
_Bool _if_conditional401;
void* right_value368;
struct tuple3$3sTypephcharphbool* __exception_result_var_b544;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_303;
char* name_304;
_Bool err_305;
void* right_value369;
void* right_value370;
struct sVarArgTypeName* __exception_result_var_b545;
struct sNode* _inf_value10;
struct sVarArgTypeName* _inf_obj_value10;
void* right_value374;
struct sNode* __result222__;
_Bool __exception_result_var_b548;
_Bool __exception_result_var_b549;
_Bool __exception_result_var_b550;
_Bool __exception_result_var_b551;
_Bool _if_conditional408;
void* right_value375;
struct sNode* __exception_result_var_b552;
struct sNode* node_307;
struct sNode* __result223__;
_Bool _if_conditional409;
void* right_value376;
void* right_value377;
struct buffer* __exception_result_var_b553;
struct buffer* fun_name_308;
struct buffer* __exception_result_var_b554;
void* right_value378;
char* __exception_result_var_b555;
struct sType* __exception_result_var_b559;
struct sType* __exception_result_var_b560;
void* right_value379;
struct sType* type_309;
_Bool _if_conditional414;
void* right_value380;
char* __exception_result_var_b561;
struct sClass* __exception_result_var_b565;
struct sClass* klass_313;
_Bool _if_conditional426;
void* right_value381;
void* right_value382;
struct sType* __exception_result_var_b566;
struct sType* __dec_obj135;
_Bool _while_condtional40;
_Bool _if_conditional427;
struct buffer* __exception_result_var_b567;
int __exception_result_var_b568;
int __exception_result_var_b569;
struct buffer* __exception_result_var_b570;
void* right_value383;
char* __exception_result_var_b571;
char* buf2_319;
struct buffer* __exception_result_var_b572;
void* right_value384;
char* __exception_result_var_b573;
void* right_value385;
struct sNode* __exception_result_var_b574;
struct sNode* node_320;
struct sNode* __result232__;
_Bool _if_conditional428;
void* right_value386;
void* right_value387;
struct buffer* __exception_result_var_b575;
struct buffer* fun_name_321;
struct buffer* __exception_result_var_b576;
struct buffer* __exception_result_var_b577;
void* right_value388;
char* __exception_result_var_b578;
char* buf2_322;
struct buffer* __exception_result_var_b579;
void* right_value389;
char* __exception_result_var_b580;
void* right_value390;
struct sNode* __exception_result_var_b581;
struct sNode* node_323;
struct sNode* __result233__;
_Bool _if_conditional429;
void* right_value391;
struct sNode* __exception_result_var_b582;
struct sNode* node_324;
struct sNode* __result234__;
_Bool __exception_result_var_b583;
_Bool __exception_result_var_b584;
_Bool __exception_result_var_b585;
_Bool __exception_result_var_b586;
_Bool __exception_result_var_b587;
_Bool __exception_result_var_b588;
_Bool __exception_result_var_b589;
_Bool __exception_result_var_b590;
_Bool __exception_result_var_b591;
_Bool __exception_result_var_b592;
_Bool __exception_result_var_b593;
_Bool __exception_result_var_b594;
_Bool __exception_result_var_b595;
_Bool __exception_result_var_b596;
_Bool __exception_result_var_b597;
_Bool __exception_result_var_b598;
_Bool __exception_result_var_b599;
_Bool __exception_result_var_b600;
_Bool _if_conditional430;
void* right_value392;
struct sNode* __exception_result_var_b601;
struct sNode* node_325;
struct sNode* __result235__;
void* right_value393;
struct sNode* __exception_result_var_b602;
struct sNode* node_326;
struct sNode* __result236__;
void* right_value394;
struct sNode* __exception_result_var_b603;
struct sNode* node_327;
struct sNode* __result237__;
struct sNode* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value318 = (void*)0;
memset(&head_277, 0, sizeof(char*));
right_value319 = (void*)0;
memset(&value_278, 0, sizeof(struct sNode*));
memset(&tail_279, 0, sizeof(char*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value328 = (void*)0;
memset(&head_282, 0, sizeof(char*));
memset(&head_sline_283, 0, sizeof(int));
right_value329 = (void*)0;
memset(&buf_284, 0, sizeof(char*));
memset(&is_type_name__285, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_286, 0, sizeof(_Bool));
right_value330 = (void*)0;
memset(&lambda_flag_287, 0, sizeof(_Bool));
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&word2_288, 0, sizeof(char*));
memset(&fun_name_with_type_name_289, 0, sizeof(_Bool));
right_value333 = (void*)0;
memset(&word2_290, 0, sizeof(char*));
memset(&call_method_generics_fun_call_291, 0, sizeof(_Bool));
right_value334 = (void*)0;
memset(&nest_295, 0, sizeof(int));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&node_296, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&node_307, 0, sizeof(struct sNode*));
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&fun_name_308, 0, sizeof(struct buffer*));
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&type_309, 0, sizeof(struct sType*));
right_value380 = (void*)0;
memset(&klass_313, 0, sizeof(struct sClass*));
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&buf2_319, 0, sizeof(char*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&node_320, 0, sizeof(struct sNode*));
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&fun_name_321, 0, sizeof(struct buffer*));
right_value388 = (void*)0;
memset(&buf2_322, 0, sizeof(char*));
right_value389 = (void*)0;
right_value390 = (void*)0;
memset(&node_323, 0, sizeof(struct sNode*));
right_value391 = (void*)0;
memset(&node_324, 0, sizeof(struct sNode*));
right_value392 = (void*)0;
memset(&node_325, 0, sizeof(struct sNode*));
right_value393 = (void*)0;
memset(&node_326, 0, sizeof(struct sNode*));
right_value394 = (void*)0;
memset(&node_327, 0, sizeof(struct sNode*));
    (come_push_stackframe("05call.c", 1053,3290),skip_spaces_and_lf(info),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1054,3291),parse_sharp_v5(info),come_pop_stackframe());
    if(_if_conditional326=(come_push_stackframe("05call.c", 1056, 3292),__exception_result_var_b433=parsecmp("return",info), come_pop_stackframe(), __exception_result_var_b433),    _if_conditional326) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1057, 3293)), "05call.c", 1057, 3294))->p+=(come_push_stackframe("05call.c", 1057, 3295),__exception_result_var_b434=strlen("return"), come_pop_stackframe(), __exception_result_var_b434);
        (come_push_stackframe("05call.c", 1058,3296),skip_spaces_and_lf(info),come_pop_stackframe());
        if(_if_conditional327=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1060, 3297)), "05call.c", 1060, 3298))->p, "05call.c", 1060, 3299))==59,        _if_conditional327) {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1061, "struct sNode");
            _inf_obj_value2=come_increment_ref_count((come_push_stackframe("05call.c", 1061, 3302),__exception_result_var_b436=((struct sReturnNode*)(right_value313=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)come_null_check(((struct sReturnNode*)(right_value311=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1061, "sReturnNode"))), "05call.c", 1061, 3300))),((void*)0),(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1061, 3301),__exception_result_var_b435=((char*)(right_value312=__builtin_string("0"))), come_pop_stackframe(), __exception_result_var_b435)),info))), come_pop_stackframe(), __exception_result_var_b436));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result192__ = __result_obj__ = ((struct sNode*)(right_value318=_inf_value2));
            come_call_finalizer3(right_value311,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value313,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result192__;
        }
        else {
            head_277=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1064, 3340)), "05call.c", 1064, 3341))->p;
            value_278=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1065, 3342),__exception_result_var_b440=((struct sNode*)(right_value319=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b440));
            if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            tail_279=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1066, 3343)), "05call.c", 1066, 3344))->p;
            __dec_obj121=value_278;
            value_278=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1067, 3345),__exception_result_var_b441=((struct sNode*)(right_value320=post_position_operator_v99((struct sNode*)come_increment_ref_count(value_278),info))), come_pop_stackframe(), __exception_result_var_b441));
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            char buf_280[tail_279-head_277+1];
            memset(&buf_280, 0, sizeof(char)            *(tail_279-head_277+1)            );
            (come_push_stackframe("05call.c", 1070, 3346),__exception_result_var_b442=memcpy(buf_280,head_277,tail_279-head_277), come_pop_stackframe(), __exception_result_var_b442);
            (come_range_check(&((char*)come_null_check(buf_280, "05call.c", 1071, 3347))[tail_279-head_277],((char*)come_null_check(buf_280, "05call.c", 1071, 3347)),((char*)come_null_check(buf_280, "05call.c", 1071, 3347))+(tail_279-head_277+1), "05call.c", 1071), ((char*)come_null_check(buf_280, "05call.c", 1071, 3347))[tail_279-head_277]=0);
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1073, "struct sNode");
            _inf_obj_value3=come_increment_ref_count((come_push_stackframe("05call.c", 1073, 3350),__exception_result_var_b444=((struct sReturnNode*)(right_value323=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)come_null_check(((struct sReturnNode*)(right_value321=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1073, "sReturnNode"))), "05call.c", 1073, 3348))),(struct sNode*)come_increment_ref_count(value_278),(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1073, 3349),__exception_result_var_b443=((char*)(right_value322=__builtin_string(buf_280))), come_pop_stackframe(), __exception_result_var_b443)),info))), come_pop_stackframe(), __exception_result_var_b444));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result195__ = __result_obj__ = ((struct sNode*)(right_value328=_inf_value3));
            if(value_278) { value_278 = come_decrement_ref_count2(value_278, ((struct sNode*)value_278)->finalize, ((struct sNode*)value_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value321,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value323,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result195__;
            if(value_278) { value_278 = come_decrement_ref_count2(value_278, ((struct sNode*)value_278)->finalize, ((struct sNode*)value_278)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        if(_if_conditional344=((come_push_stackframe("05call.c", 1076, 3391),__exception_result_var_b448=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3388)), "05call.c", 1076, 3389))->p, "05call.c", 1076, 3390))), come_pop_stackframe(), __exception_result_var_b448)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3392)), "05call.c", 1076, 3393))->p, "05call.c", 1076, 3394))==95)&&!(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3395)), "05call.c", 1076, 3396))->p, "05call.c", 1076, 3397))==76&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3398)), "05call.c", 1076, 3399))->p+1), "05call.c", 1076, 3400))==34||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3401)), "05call.c", 1076, 3402))->p, "05call.c", 1076, 3403))==115||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3404)), "05call.c", 1076, 3405))->p, "05call.c", 1076, 3406))==83)&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3407)), "05call.c", 1076, 3408))->p+1), "05call.c", 1076, 3409))==34||(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3410)), "05call.c", 1076, 3411))->p, "05call.c", 1076, 3412))==76&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1076, 3413)), "05call.c", 1076, 3414))->p+1), "05call.c", 1076, 3415))==39)),        _if_conditional344) {
            head_282=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1077, 3416)), "05call.c", 1077, 3417))->p;
            head_sline_283=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1078, 3418)), "05call.c", 1078, 3419))->sline;
            buf_284=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1080, 3420),__exception_result_var_b449=((char*)(right_value329=backtrace_parse_word(info))), come_pop_stackframe(), __exception_result_var_b449));
            right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            is_type_name__285=(come_push_stackframe("05call.c", 1082, 3421),__exception_result_var_b450=is_type_name(buf_284,info), come_pop_stackframe(), __exception_result_var_b450);
            define_function_pointer_flag_286=(_Bool)0;
            if(_if_conditional345=(come_push_stackframe("05call.c", 1086, 3422),__exception_result_var_b451=string_operator_not_equals(buf_284,"if"), come_pop_stackframe(), __exception_result_var_b451)&&(come_push_stackframe("05call.c", 1086, 3423),__exception_result_var_b452=string_operator_not_equals(buf_284,"while"), come_pop_stackframe(), __exception_result_var_b452)&&(come_push_stackframe("05call.c", 1086, 3424),__exception_result_var_b453=string_operator_not_equals(buf_284,"for"), come_pop_stackframe(), __exception_result_var_b453)&&(come_push_stackframe("05call.c", 1086, 3425),__exception_result_var_b454=string_operator_not_equals(buf_284,"switch"), come_pop_stackframe(), __exception_result_var_b454)&&(come_push_stackframe("05call.c", 1086, 3426),__exception_result_var_b455=string_operator_not_equals(buf_284,"return"), come_pop_stackframe(), __exception_result_var_b455)&&(come_push_stackframe("05call.c", 1086, 3427),__exception_result_var_b456=string_operator_not_equals(buf_284,"sizeof"), come_pop_stackframe(), __exception_result_var_b456)&&(come_push_stackframe("05call.c", 1086, 3428),__exception_result_var_b457=string_operator_not_equals(buf_284,"isheap"), come_pop_stackframe(), __exception_result_var_b457)&&(come_push_stackframe("05call.c", 1086, 3429),__exception_result_var_b458=string_operator_not_equals(buf_284,"guard"), come_pop_stackframe(), __exception_result_var_b458)&&(come_push_stackframe("05call.c", 1086, 3430),__exception_result_var_b459=string_operator_not_equals(buf_284,"ispointer"), come_pop_stackframe(), __exception_result_var_b459)&&(come_push_stackframe("05call.c", 1086, 3431),__exception_result_var_b460=string_operator_not_equals(buf_284,"__typeof__"), come_pop_stackframe(), __exception_result_var_b460)&&(come_push_stackframe("05call.c", 1086, 3432),__exception_result_var_b461=string_operator_not_equals(buf_284,"dynamic_typeof"), come_pop_stackframe(), __exception_result_var_b461)&&(come_push_stackframe("05call.c", 1086, 3433),__exception_result_var_b462=string_operator_not_equals(buf_284,"typeof"), come_pop_stackframe(), __exception_result_var_b462)&&(come_push_stackframe("05call.c", 1086, 3434),__exception_result_var_b463=string_operator_not_equals(buf_284,"gc_inc"), come_pop_stackframe(), __exception_result_var_b463)&&(come_push_stackframe("05call.c", 1086, 3435),__exception_result_var_b464=string_operator_not_equals(buf_284,"gc_dec"), come_pop_stackframe(), __exception_result_var_b464)&&(come_push_stackframe("05call.c", 1086, 3436),__exception_result_var_b465=string_operator_not_equals(buf_284,"case"), come_pop_stackframe(), __exception_result_var_b465)&&(come_push_stackframe("05call.c", 1086, 3437),__exception_result_var_b466=string_operator_not_equals(buf_284,"_Alignof"), come_pop_stackframe(), __exception_result_var_b466)&&(come_push_stackframe("05call.c", 1086, 3438),__exception_result_var_b467=string_operator_not_equals(buf_284,"_Alignas"), come_pop_stackframe(), __exception_result_var_b467)&&(come_push_stackframe("05call.c", 1086, 3439),__exception_result_var_b468=string_operator_not_equals(buf_284,"__alignof__"), come_pop_stackframe(), __exception_result_var_b468)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1086, 3440)), "05call.c", 1086, 3441))->p, "05call.c", 1086, 3442))==40&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1086, 3443)), "05call.c", 1086, 3444))->p+1), "05call.c", 1086, 3445))!=42,            _if_conditional345) {
                (come_push_stackframe("05call.c", 1088, 3446),__exception_result_var_b469=((struct tuple3$3sTypephcharphbool*)(right_value330=backtrace_parse_type((_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b469);
                come_call_finalizer3(right_value330,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional346=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1090, 3447)), "05call.c", 1090, 3448))->p, "05call.c", 1090, 3449))==40,                _if_conditional346) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1091, 3450)), "05call.c", 1091, 3451))->p++;
                    (come_push_stackframe("05call.c", 1092,3452),skip_spaces_and_lf(info),come_pop_stackframe());
                    if(_if_conditional347=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1094, 3453)), "05call.c", 1094, 3454))->p, "05call.c", 1094, 3455))==42,                    _if_conditional347) {
                        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1095, 3456)), "05call.c", 1095, 3457))->p++;
                        (come_push_stackframe("05call.c", 1096,3458),skip_spaces_and_lf(info),come_pop_stackframe());
                        define_function_pointer_flag_286=(_Bool)1;
                    }
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1102, 3459)), "05call.c", 1102, 3460))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1103, 3461)), "05call.c", 1103, 3462))->sline=head_sline_283;
            }
            lambda_flag_287=(_Bool)0;
            if(_if_conditional348=(come_push_stackframe("05call.c", 1108, 3463),__exception_result_var_b470=string_operator_not_equals(buf_284,"if"), come_pop_stackframe(), __exception_result_var_b470)&&(come_push_stackframe("05call.c", 1108, 3464),__exception_result_var_b471=string_operator_not_equals(buf_284,"while"), come_pop_stackframe(), __exception_result_var_b471)&&(come_push_stackframe("05call.c", 1108, 3465),__exception_result_var_b472=string_operator_not_equals(buf_284,"for"), come_pop_stackframe(), __exception_result_var_b472)&&(come_push_stackframe("05call.c", 1108, 3466),__exception_result_var_b473=string_operator_not_equals(buf_284,"switch"), come_pop_stackframe(), __exception_result_var_b473)&&(come_push_stackframe("05call.c", 1108, 3467),__exception_result_var_b474=string_operator_not_equals(buf_284,"return"), come_pop_stackframe(), __exception_result_var_b474)&&(come_push_stackframe("05call.c", 1108, 3468),__exception_result_var_b475=string_operator_not_equals(buf_284,"sizeof"), come_pop_stackframe(), __exception_result_var_b475)&&(come_push_stackframe("05call.c", 1108, 3469),__exception_result_var_b476=string_operator_not_equals(buf_284,"_Alignof"), come_pop_stackframe(), __exception_result_var_b476)&&(come_push_stackframe("05call.c", 1108, 3470),__exception_result_var_b477=string_operator_not_equals(buf_284,"__alignof__"), come_pop_stackframe(), __exception_result_var_b477)&&(come_push_stackframe("05call.c", 1108, 3471),__exception_result_var_b478=string_operator_not_equals(buf_284,"_Alignas"), come_pop_stackframe(), __exception_result_var_b478)&&(come_push_stackframe("05call.c", 1108, 3472),__exception_result_var_b479=string_operator_not_equals(buf_284,"isheap"), come_pop_stackframe(), __exception_result_var_b479)&&(come_push_stackframe("05call.c", 1108, 3473),__exception_result_var_b480=string_operator_not_equals(buf_284,"guard"), come_pop_stackframe(), __exception_result_var_b480)&&(come_push_stackframe("05call.c", 1108, 3474),__exception_result_var_b481=string_operator_not_equals(buf_284,"ispointer"), come_pop_stackframe(), __exception_result_var_b481)&&(come_push_stackframe("05call.c", 1108, 3475),__exception_result_var_b482=string_operator_not_equals(buf_284,"__typeof__"), come_pop_stackframe(), __exception_result_var_b482)&&(come_push_stackframe("05call.c", 1108, 3476),__exception_result_var_b483=string_operator_not_equals(buf_284,"dynamic_typeof"), come_pop_stackframe(), __exception_result_var_b483)&&(come_push_stackframe("05call.c", 1108, 3477),__exception_result_var_b484=string_operator_not_equals(buf_284,"typeof"), come_pop_stackframe(), __exception_result_var_b484)&&(come_push_stackframe("05call.c", 1108, 3478),__exception_result_var_b485=string_operator_not_equals(buf_284,"gc_inc"), come_pop_stackframe(), __exception_result_var_b485)&&(come_push_stackframe("05call.c", 1108, 3479),__exception_result_var_b486=string_operator_not_equals(buf_284,"gc_dec"), come_pop_stackframe(), __exception_result_var_b486)&&(come_push_stackframe("05call.c", 1108, 3480),__exception_result_var_b487=string_operator_not_equals(buf_284,"case"), come_pop_stackframe(), __exception_result_var_b487)&&is_type_name__285,            _if_conditional348) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1110, 3481)), "05call.c", 1110, 3482))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1111, 3483)), "05call.c", 1111, 3484))->sline=head_sline_283;
                (come_push_stackframe("05call.c", 1113, 3485),__exception_result_var_b488=((struct tuple3$3sTypephcharphbool*)(right_value331=backtrace_parse_type((_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b488);
                come_call_finalizer3(right_value331,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                word2_288=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1115, 3486),__exception_result_var_b489=((char*)(right_value332=backtrace_parse_word(info))), come_pop_stackframe(), __exception_result_var_b489));
                right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional349=(come_push_stackframe("05call.c", 1117, 3487),__exception_result_var_b490=string_operator_equals(word2_288,"lambda"), come_pop_stackframe(), __exception_result_var_b490),                _if_conditional349) {
                    lambda_flag_287=(_Bool)1;
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1121, 3488)), "05call.c", 1121, 3489))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1122, 3490)), "05call.c", 1122, 3491))->sline=head_sline_283;
                word2_288 = come_decrement_ref_count2(word2_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            fun_name_with_type_name_289=(_Bool)0;
            if(_if_conditional350=(come_push_stackframe("05call.c", 1127, 3492),__exception_result_var_b491=string_operator_not_equals(buf_284,"if"), come_pop_stackframe(), __exception_result_var_b491)&&(come_push_stackframe("05call.c", 1127, 3493),__exception_result_var_b492=string_operator_not_equals(buf_284,"while"), come_pop_stackframe(), __exception_result_var_b492)&&(come_push_stackframe("05call.c", 1127, 3494),__exception_result_var_b493=string_operator_not_equals(buf_284,"for"), come_pop_stackframe(), __exception_result_var_b493)&&(come_push_stackframe("05call.c", 1127, 3495),__exception_result_var_b494=string_operator_not_equals(buf_284,"switch"), come_pop_stackframe(), __exception_result_var_b494)&&(come_push_stackframe("05call.c", 1127, 3496),__exception_result_var_b495=string_operator_not_equals(buf_284,"return"), come_pop_stackframe(), __exception_result_var_b495)&&(come_push_stackframe("05call.c", 1127, 3497),__exception_result_var_b496=string_operator_not_equals(buf_284,"sizeof"), come_pop_stackframe(), __exception_result_var_b496)&&(come_push_stackframe("05call.c", 1127, 3498),__exception_result_var_b497=string_operator_not_equals(buf_284,"_Alignof"), come_pop_stackframe(), __exception_result_var_b497)&&(come_push_stackframe("05call.c", 1127, 3499),__exception_result_var_b498=string_operator_not_equals(buf_284,"__alignof__"), come_pop_stackframe(), __exception_result_var_b498)&&(come_push_stackframe("05call.c", 1127, 3500),__exception_result_var_b499=string_operator_not_equals(buf_284,"_Alignas"), come_pop_stackframe(), __exception_result_var_b499)&&(come_push_stackframe("05call.c", 1127, 3501),__exception_result_var_b500=string_operator_not_equals(buf_284,"isheap"), come_pop_stackframe(), __exception_result_var_b500)&&(come_push_stackframe("05call.c", 1127, 3502),__exception_result_var_b501=string_operator_not_equals(buf_284,"guard"), come_pop_stackframe(), __exception_result_var_b501)&&(come_push_stackframe("05call.c", 1127, 3503),__exception_result_var_b502=string_operator_not_equals(buf_284,"ispointer"), come_pop_stackframe(), __exception_result_var_b502)&&(come_push_stackframe("05call.c", 1127, 3504),__exception_result_var_b503=string_operator_not_equals(buf_284,"dynamic_typeof"), come_pop_stackframe(), __exception_result_var_b503)&&(come_push_stackframe("05call.c", 1127, 3505),__exception_result_var_b504=string_operator_not_equals(buf_284,"__typeof__"), come_pop_stackframe(), __exception_result_var_b504)&&(come_push_stackframe("05call.c", 1127, 3506),__exception_result_var_b505=string_operator_not_equals(buf_284,"typeof"), come_pop_stackframe(), __exception_result_var_b505)&&(come_push_stackframe("05call.c", 1127, 3507),__exception_result_var_b506=string_operator_not_equals(buf_284,"gc_inc"), come_pop_stackframe(), __exception_result_var_b506)&&(come_push_stackframe("05call.c", 1127, 3508),__exception_result_var_b507=string_operator_not_equals(buf_284,"gc_dec"), come_pop_stackframe(), __exception_result_var_b507)&&(come_push_stackframe("05call.c", 1127, 3509),__exception_result_var_b508=string_operator_not_equals(buf_284,"case"), come_pop_stackframe(), __exception_result_var_b508),            _if_conditional350) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1129, 3510)), "05call.c", 1129, 3511))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1130, 3512)), "05call.c", 1130, 3513))->sline=head_sline_283;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1132, 3514)), "05call.c", 1132, 3515))->no_output_err=(_Bool)1;
                if(_if_conditional351=(come_push_stackframe("05call.c", 1134, 3519),__exception_result_var_b509=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1134, 3516)), "05call.c", 1134, 3517))->p, "05call.c", 1134, 3518))), come_pop_stackframe(), __exception_result_var_b509)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1134, 3520)), "05call.c", 1134, 3521))->p, "05call.c", 1134, 3522))==95,                _if_conditional351) {
                    word2_290=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1135, 3523),__exception_result_var_b510=((char*)(right_value333=parse_word(info))), come_pop_stackframe(), __exception_result_var_b510));
                    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    word2_290 = come_decrement_ref_count2(word2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                while(_while_condtional34=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1137, 3524)), "05call.c", 1137, 3525))->p, "05call.c", 1137, 3526))==42,                _while_condtional34) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1138, 3527)), "05call.c", 1138, 3528))->p++;
                    (come_push_stackframe("05call.c", 1139,3529),skip_spaces_and_lf(info),come_pop_stackframe());
                }
                if(_if_conditional352=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1141, 3530)), "05call.c", 1141, 3531))->p, "05call.c", 1141, 3532))==58&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1141, 3533)), "05call.c", 1141, 3534))->p+1), "05call.c", 1141, 3535))==58,                _if_conditional352) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1142, 3536)), "05call.c", 1142, 3537))->p+=2;
                    (come_push_stackframe("05call.c", 1143,3538),skip_spaces_and_lf(info),come_pop_stackframe());
                    if(_if_conditional353=(come_push_stackframe("05call.c", 1144, 3542),__exception_result_var_b511=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1144, 3539)), "05call.c", 1144, 3540))->p, "05call.c", 1144, 3541))), come_pop_stackframe(), __exception_result_var_b511)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1144, 3543)), "05call.c", 1144, 3544))->p, "05call.c", 1144, 3545))==95,                    _if_conditional353) {
                        fun_name_with_type_name_289=(_Bool)1;
                    }
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1149, 3546)), "05call.c", 1149, 3547))->no_output_err=(_Bool)0;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1151, 3548)), "05call.c", 1151, 3549))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1152, 3550)), "05call.c", 1152, 3551))->sline=head_sline_283;
            }
            call_method_generics_fun_call_291=(_Bool)0;
            {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1158, 3552)), "05call.c", 1158, 3553))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1159, 3554)), "05call.c", 1159, 3555))->sline=head_sline_283;
                if(_if_conditional354=(come_push_stackframe("05call.c", 1161, 3559),__exception_result_var_b512=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1161, 3556)), "05call.c", 1161, 3557))->p, "05call.c", 1161, 3558))), come_pop_stackframe(), __exception_result_var_b512)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1161, 3560)), "05call.c", 1161, 3561))->p, "05call.c", 1161, 3562))==95,                _if_conditional354) {
                    __dec_obj125=buf_284;
                    buf_284=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1162, 3563),__exception_result_var_b513=((char*)(right_value334=parse_word(info))), come_pop_stackframe(), __exception_result_var_b513));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional363=!(come_push_stackframe("05call.c", 1165, 3564),__exception_result_var_b514=is_type_name(buf_284,info), come_pop_stackframe(), __exception_result_var_b514)&&(come_push_stackframe("05call.c", 1165, 3605),__exception_result_var_b518=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1165, 3565)), "05call.c", 1165, 3566))->lv_table, "05call.c", 1165, 3567)), "05call.c", 1165, 3568))->mVars,buf_284), come_pop_stackframe(), __exception_result_var_b518)==((void*)0)&&(come_push_stackframe("05call.c", 1165, 3610),__exception_result_var_b519=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(((struct sVarTable*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1165, 3606)), "05call.c", 1165, 3607))->gv_table, "05call.c", 1165, 3608)), "05call.c", 1165, 3609))->mVars,buf_284), come_pop_stackframe(), __exception_result_var_b519)==((void*)0)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1165, 3611)), "05call.c", 1165, 3612))->p, "05call.c", 1165, 3613))==60,                _if_conditional363) {
                    nest_295=0;
                    while(_while_condtional36=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1167, 3614)), "05call.c", 1167, 3615))->p, "05call.c", 1167, 3616)),                    _while_condtional36) {
                        if(_if_conditional364=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1168, 3617)), "05call.c", 1168, 3618))->p, "05call.c", 1168, 3619))==60,                        _if_conditional364) {
                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1169, 3620)), "05call.c", 1169, 3621))->p++;
                            nest_295++;
                        }
                        else {
                            if(_if_conditional365=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1172, 3622)), "05call.c", 1172, 3623))->p, "05call.c", 1172, 3624))==62,                            _if_conditional365) {
                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1173, 3625)), "05call.c", 1173, 3626))->p++;
                                nest_295--;
                                if(_if_conditional366=nest_295==0,                                _if_conditional366) {
                                    break;
                                }
                            }
                            else {
                                if(_if_conditional367=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1180, 3627)), "05call.c", 1180, 3628))->p, "05call.c", 1180, 3629))==10||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1180, 3630)), "05call.c", 1180, 3631))->p, "05call.c", 1180, 3632))==59,                                _if_conditional367) {
                                    break;
                                }
                                else {
                                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1184, 3633)), "05call.c", 1184, 3634))->p++;
                                }
                            }
                        }
                    }
                    if(_if_conditional368=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1188, 3635)), "05call.c", 1188, 3636))->p, "05call.c", 1188, 3637))==40,                    _if_conditional368) {
                        call_method_generics_fun_call_291=(_Bool)1;
                    }
                }
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1193, 3638)), "05call.c", 1193, 3639))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1194, 3640)), "05call.c", 1194, 3641))->sline=head_sline_283;
            }
            (come_push_stackframe("05call.c", 1197,3642),parse_sharp_v5(info),come_pop_stackframe());
            __dec_obj126=buf_284;
            buf_284=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1199, 3643),__exception_result_var_b520=((char*)(right_value335=parse_word(info))), come_pop_stackframe(), __exception_result_var_b520));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 1201,3644),parse_sharp_v5(info),come_pop_stackframe());
            if(lambda_flag_287) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1204, 3645)), "05call.c", 1204, 3646))->p=head_282;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1205, 3647)), "05call.c", 1205, 3648))->sline=head_sline_283;
                __result200__ = __result_obj__ = (come_push_stackframe("05call.c", 1207, 3649),__exception_result_var_b521=((struct sNode*)(right_value336=parse_function(info))), come_pop_stackframe(), __exception_result_var_b521);
                buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result200__;
            }
            else {
                if(_if_conditional370=((come_push_stackframe("05call.c", 1209, 3650),__exception_result_var_b522=string_operator_equals(buf_284,"string"), come_pop_stackframe(), __exception_result_var_b522)||(come_push_stackframe("05call.c", 1209, 3651),__exception_result_var_b523=string_operator_equals(buf_284,"wstring"), come_pop_stackframe(), __exception_result_var_b523))&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1209, 3652)), "05call.c", 1209, 3653))->p, "05call.c", 1209, 3654))==40,                _if_conditional370) {
                    node_296=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1210, 3655),__exception_result_var_b524=((struct sNode*)(right_value337=parse_function_call(buf_284,info))), come_pop_stackframe(), __exception_result_var_b524));
                    if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result201__ = __result_obj__ = node_296;
                    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result201__;
                    if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional371=(come_push_stackframe("05call.c", 1214, 3656),__exception_result_var_b525=string_operator_equals(buf_284,"__func__"), come_pop_stackframe(), __exception_result_var_b525),                    _if_conditional371) {
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1215, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count((come_push_stackframe("05call.c", 1215, 3658),__exception_result_var_b526=((struct sFuncNode*)(right_value339=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)come_null_check(((struct sFuncNode*)(right_value338=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1215, "sFuncNode"))), "05call.c", 1215, 3657))),info))), come_pop_stackframe(), __exception_result_var_b526));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result204__ = __result_obj__ = ((struct sNode*)(right_value342=_inf_value4));
                        buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value338,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value339,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result204__;
                    }
                    else {
                        if(_if_conditional376=(come_push_stackframe("05call.c", 1217, 3674),__exception_result_var_b528=string_operator_equals(buf_284,"__line__"), come_pop_stackframe(), __exception_result_var_b528),                        _if_conditional376) {
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1218, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count((come_push_stackframe("05call.c", 1218, 3676),__exception_result_var_b529=((struct sLineNode*)(right_value344=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)come_null_check(((struct sLineNode*)(right_value343=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1218, "sLineNode"))), "05call.c", 1218, 3675))),info))), come_pop_stackframe(), __exception_result_var_b529));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result207__ = __result_obj__ = ((struct sNode*)(right_value347=_inf_value5));
                            buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value343,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value344,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value347) { right_value347 = come_decrement_ref_count2(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result207__;
                        }
                        else {
                            if(_if_conditional381=(come_push_stackframe("05call.c", 1220, 3692),__exception_result_var_b531=string_operator_equals(buf_284,"__sname__"), come_pop_stackframe(), __exception_result_var_b531),                            _if_conditional381) {
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1221, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count((come_push_stackframe("05call.c", 1221, 3694),__exception_result_var_b532=((struct sSNameNode*)(right_value349=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)come_null_check(((struct sSNameNode*)(right_value348=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1221, "sSNameNode"))), "05call.c", 1221, 3693))),info))), come_pop_stackframe(), __exception_result_var_b532));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sNodeBase_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result210__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value6));
                                buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value348,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value349,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result210__;
                            }
                            else {
                                if(_if_conditional386=(come_push_stackframe("05call.c", 1223, 3710),__exception_result_var_b534=string_operator_equals(buf_284,"__caller_func__"), come_pop_stackframe(), __exception_result_var_b534),                                _if_conditional386) {
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1224, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count((come_push_stackframe("05call.c", 1224, 3712),__exception_result_var_b535=((struct sCallerFuncNode*)(right_value354=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)(right_value353=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1224, "sCallerFuncNode"))), "05call.c", 1224, 3711))),info))), come_pop_stackframe(), __exception_result_var_b535));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sNodeBase_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result213__ = __result_obj__ = ((struct sNode*)(right_value357=_inf_value7));
                                    buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value353,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value354,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result213__;
                                }
                                else {
                                    if(_if_conditional391=(come_push_stackframe("05call.c", 1226, 3728),__exception_result_var_b537=string_operator_equals(buf_284,"__caller_line__"), come_pop_stackframe(), __exception_result_var_b537),                                    _if_conditional391) {
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1227, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count((come_push_stackframe("05call.c", 1227, 3730),__exception_result_var_b538=((struct sCallerLineNode*)(right_value359=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)(right_value358=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1227, "sCallerLineNode"))), "05call.c", 1227, 3729))),info))), come_pop_stackframe(), __exception_result_var_b538));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sNodeBase_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result216__ = __result_obj__ = ((struct sNode*)(right_value362=_inf_value8));
                                        buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value358,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value359,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result216__;
                                    }
                                    else {
                                        if(_if_conditional396=(come_push_stackframe("05call.c", 1229, 3746),__exception_result_var_b540=string_operator_equals(buf_284,"__caller_sname__"), come_pop_stackframe(), __exception_result_var_b540),                                        _if_conditional396) {
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1230, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count((come_push_stackframe("05call.c", 1230, 3748),__exception_result_var_b541=((struct sCallerSNameNode*)(right_value364=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)(right_value363=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1230, "sCallerSNameNode"))), "05call.c", 1230, 3747))),info))), come_pop_stackframe(), __exception_result_var_b541));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result219__ = __result_obj__ = ((struct sNode*)(right_value367=_inf_value9));
                                            buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value363,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value364,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result219__;
                                        }
                                        else {
                                            if(_if_conditional401=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1232, 3764)), "05call.c", 1232, 3765))->va_arg&&(come_push_stackframe("05call.c", 1232, 3766),__exception_result_var_b543=is_type_name(buf_284,info), come_pop_stackframe(), __exception_result_var_b543),                                            _if_conditional401) {
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1233, 3767)), "05call.c", 1233, 3768))->p=head_282;
                                                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1234, 3769)), "05call.c", 1234, 3770))->sline=head_sline_283;
                                                multiple_assign_var8=(come_push_stackframe("05call.c", 1236, 3771),__exception_result_var_b544=((struct tuple3$3sTypephcharphbool*)(right_value368=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0))), come_pop_stackframe(), __exception_result_var_b544);
                                                type_303=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                name_304=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                err_305=multiple_assign_var8->v3;
                                                come_call_finalizer3(right_value368,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1238, "struct sNode");
                                                _inf_obj_value10=come_increment_ref_count((come_push_stackframe("05call.c", 1238, 3773),__exception_result_var_b545=((struct sVarArgTypeName*)(right_value370=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)(right_value369=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1238, "sVarArgTypeName"))), "05call.c", 1238, 3772))),(struct sType*)come_increment_ref_count(type_303),info))), come_pop_stackframe(), __exception_result_var_b545));
                                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                                _inf_value10->finalize=(void*)sVarArgTypeName_finalize;
                                                _inf_value10->clone=(void*)sVarArgTypeName_clone;
                                                _inf_value10->compile=(void*)sVarArgTypeName_compile;
                                                _inf_value10->sline=(void*)sNodeBase_sline;
                                                _inf_value10->sname=(void*)sNodeBase_sname;
                                                _inf_value10->terminated=(void*)sNodeBase_terminated;
                                                _inf_value10->kind=(void*)sVarArgTypeName_kind;
                                                __result222__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value10));
                                                come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value369,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value370,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result222__;
                                                come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            else {
                                                if(_if_conditional408=((come_push_stackframe("05call.c", 1240, 3800),__exception_result_var_b548=string_operator_equals(buf_284,"sizeof"), come_pop_stackframe(), __exception_result_var_b548)||(come_push_stackframe("05call.c", 1240, 3801),__exception_result_var_b549=string_operator_equals(buf_284,"_Alignof"), come_pop_stackframe(), __exception_result_var_b549)||(come_push_stackframe("05call.c", 1240, 3802),__exception_result_var_b550=string_operator_equals(buf_284,"_Alignas"), come_pop_stackframe(), __exception_result_var_b550)||(come_push_stackframe("05call.c", 1240, 3803),__exception_result_var_b551=string_operator_equals(buf_284,"__alignof__"), come_pop_stackframe(), __exception_result_var_b551))&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1240, 3804)), "05call.c", 1240, 3805))->p, "05call.c", 1240, 3806))==40,                                                _if_conditional408) {
                                                    node_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1243, 3807),__exception_result_var_b552=((struct sNode*)(right_value375=string_node_v21(buf_284,head_282,head_sline_283,info))), come_pop_stackframe(), __exception_result_var_b552));
                                                    if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __result223__ = __result_obj__ = node_307;
                                                    if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result223__;
                                                    if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(fun_name_with_type_name_289) {
                                                        fun_name_308=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 1246, 3809),__exception_result_var_b553=((struct buffer*)(right_value377=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value376=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1246, "buffer"))), "05call.c", 1246, 3808)))))), come_pop_stackframe(), __exception_result_var_b553));
                                                        come_call_finalizer3(right_value376,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value377,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        (come_push_stackframe("05call.c", 1248, 3812),__exception_result_var_b554=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1248, 3810)), "05call.c", 1248, 3811)),buf_284), come_pop_stackframe(), __exception_result_var_b554);
                                                        type_309=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=(come_push_stackframe("05call.c", 1250, 3839),__exception_result_var_b560=sType_clone((come_push_stackframe("05call.c", 1250, 3838),__exception_result_var_b559=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1250, 3813)), "05call.c", 1250, 3814))->types,(come_push_stackframe("05call.c", 1250, 3817),__exception_result_var_b555=((char*)(right_value378=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1250, 3815)), "05call.c", 1250, 3816))))), come_pop_stackframe(), __exception_result_var_b555)), come_pop_stackframe(), __exception_result_var_b559)), come_pop_stackframe(), __exception_result_var_b560))));
                                                        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value379,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional414=type_309==((void*)0),                                                        _if_conditional414) {
                                                            klass_313=(come_push_stackframe("05call.c", 1253, 3897),__exception_result_var_b565=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1253, 3840)), "05call.c", 1253, 3841))->classes,(come_push_stackframe("05call.c", 1253, 3844),__exception_result_var_b561=((char*)(right_value380=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1253, 3842)), "05call.c", 1253, 3843))))), come_pop_stackframe(), __exception_result_var_b561)), come_pop_stackframe(), __exception_result_var_b565);
                                                            right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(klass_313) {
                                                                __dec_obj135=type_309;
                                                                type_309=(struct sType*)come_increment_ref_count((come_push_stackframe("05call.c", 1256, 3899),__exception_result_var_b566=((struct sType*)(right_value382=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)come_null_check(((struct sType*)(right_value381=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1256, "sType"))), "05call.c", 1256, 3898))),buf_284,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b566));
                                                                come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value381,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value382,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                (come_push_stackframe("05call.c", 1259,3900),err_msg(info,"null type(%s)",buf_284),come_pop_stackframe());
                                                                (come_push_stackframe("05call.c", 1260,3901),exit(2),come_pop_stackframe());
                                                            }
                                                        }
                                                        while(_while_condtional40=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1264, 3902)), "05call.c", 1264, 3903))->p, "05call.c", 1264, 3904))==42,                                                        _while_condtional40) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1265, 3905)), "05call.c", 1265, 3906))->p++;
                                                            (come_push_stackframe("05call.c", 1266,3907),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            if(_if_conditional427=((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(type_309, "05call.c", 1268, 3908)), "05call.c", 1268, 3909))->mClass, "05call.c", 1268, 3910)), "05call.c", 1268, 3911))->mStruct==(_Bool)0,                                                            _if_conditional427) {
                                                                (come_push_stackframe("05call.c", 1269, 3914),__exception_result_var_b567=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1269, 3912)), "05call.c", 1269, 3913)),"p"), come_pop_stackframe(), __exception_result_var_b567);
                                                            }
                                                        }
                                                        (come_push_stackframe("05call.c", 1273, 3915),__exception_result_var_b568=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b568);
                                                        (come_push_stackframe("05call.c", 1274, 3916),__exception_result_var_b569=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b569);
                                                        (come_push_stackframe("05call.c", 1276, 3919),__exception_result_var_b570=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1276, 3917)), "05call.c", 1276, 3918)),"_"), come_pop_stackframe(), __exception_result_var_b570);
                                                        buf2_319=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1278, 3920),__exception_result_var_b571=((char*)(right_value383=parse_word(info))), come_pop_stackframe(), __exception_result_var_b571));
                                                        right_value383 = come_decrement_ref_count2(right_value383, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        (come_push_stackframe("05call.c", 1280, 3923),__exception_result_var_b572=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1280, 3921)), "05call.c", 1280, 3922)),buf2_319), come_pop_stackframe(), __exception_result_var_b572);
                                                        node_320=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1282, 3927),__exception_result_var_b574=((struct sNode*)(right_value385=parse_function_call((come_push_stackframe("05call.c", 1282, 3926),__exception_result_var_b573=((char*)(right_value384=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_308, "05call.c", 1282, 3924)), "05call.c", 1282, 3925))))), come_pop_stackframe(), __exception_result_var_b573),info))), come_pop_stackframe(), __exception_result_var_b574));
                                                        right_value384 = come_decrement_ref_count2(right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __result232__ = __result_obj__ = node_320;
                                                        come_call_finalizer3(fun_name_308,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_319 = come_decrement_ref_count2(buf2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result232__;
                                                        come_call_finalizer3(fun_name_308,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_319 = come_decrement_ref_count2(buf2_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional428=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1286, 3928)), "05call.c", 1286, 3929))->p, "05call.c", 1286, 3930))==58&&*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1286, 3931)), "05call.c", 1286, 3932))->p+1), "05call.c", 1286, 3933))==58,                                                        _if_conditional428) {
                                                            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1287, 3934)), "05call.c", 1287, 3935))->p+=2;
                                                            (come_push_stackframe("05call.c", 1288,3936),skip_spaces_and_lf(info),come_pop_stackframe());
                                                            fun_name_321=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 1290, 3938),__exception_result_var_b575=((struct buffer*)(right_value387=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value386=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1290, "buffer"))), "05call.c", 1290, 3937)))))), come_pop_stackframe(), __exception_result_var_b575));
                                                            come_call_finalizer3(right_value386,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value387,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                            (come_push_stackframe("05call.c", 1292, 3941),__exception_result_var_b576=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_321, "05call.c", 1292, 3939)), "05call.c", 1292, 3940)),buf_284), come_pop_stackframe(), __exception_result_var_b576);
                                                            (come_push_stackframe("05call.c", 1294, 3944),__exception_result_var_b577=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_321, "05call.c", 1294, 3942)), "05call.c", 1294, 3943)),"_"), come_pop_stackframe(), __exception_result_var_b577);
                                                            buf2_322=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1296, 3945),__exception_result_var_b578=((char*)(right_value388=parse_word(info))), come_pop_stackframe(), __exception_result_var_b578));
                                                            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            (come_push_stackframe("05call.c", 1298, 3948),__exception_result_var_b579=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_321, "05call.c", 1298, 3946)), "05call.c", 1298, 3947)),buf2_322), come_pop_stackframe(), __exception_result_var_b579);
                                                            node_323=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1300, 3952),__exception_result_var_b581=((struct sNode*)(right_value390=parse_function_call((come_push_stackframe("05call.c", 1300, 3951),__exception_result_var_b580=((char*)(right_value389=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(fun_name_321, "05call.c", 1300, 3949)), "05call.c", 1300, 3950))))), come_pop_stackframe(), __exception_result_var_b580),info))), come_pop_stackframe(), __exception_result_var_b581));
                                                            right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            __result233__ = __result_obj__ = node_323;
                                                            come_call_finalizer3(fun_name_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_322 = come_decrement_ref_count2(buf2_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result233__;
                                                            come_call_finalizer3(fun_name_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_322 = come_decrement_ref_count2(buf2_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(call_method_generics_fun_call_291) {
                                                                node_324=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1305, 3953),__exception_result_var_b582=((struct sNode*)(right_value391=parse_function_call(buf_284,info))), come_pop_stackframe(), __exception_result_var_b582));
                                                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                __result234__ = __result_obj__ = node_324;
                                                                if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result234__;
                                                                if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(_if_conditional430=(come_push_stackframe("05call.c", 1309, 3954),__exception_result_var_b583=string_operator_not_equals(buf_284,"if"), come_pop_stackframe(), __exception_result_var_b583)&&(come_push_stackframe("05call.c", 1309, 3955),__exception_result_var_b584=string_operator_not_equals(buf_284,"while"), come_pop_stackframe(), __exception_result_var_b584)&&(come_push_stackframe("05call.c", 1309, 3956),__exception_result_var_b585=string_operator_not_equals(buf_284,"for"), come_pop_stackframe(), __exception_result_var_b585)&&(come_push_stackframe("05call.c", 1309, 3957),__exception_result_var_b586=string_operator_not_equals(buf_284,"switch"), come_pop_stackframe(), __exception_result_var_b586)&&(come_push_stackframe("05call.c", 1309, 3958),__exception_result_var_b587=string_operator_not_equals(buf_284,"return"), come_pop_stackframe(), __exception_result_var_b587)&&(come_push_stackframe("05call.c", 1309, 3959),__exception_result_var_b588=string_operator_not_equals(buf_284,"sizeof"), come_pop_stackframe(), __exception_result_var_b588)&&(come_push_stackframe("05call.c", 1309, 3960),__exception_result_var_b589=string_operator_not_equals(buf_284,"isheap"), come_pop_stackframe(), __exception_result_var_b589)&&(come_push_stackframe("05call.c", 1309, 3961),__exception_result_var_b590=string_operator_not_equals(buf_284,"ispointer"), come_pop_stackframe(), __exception_result_var_b590)&&(come_push_stackframe("05call.c", 1309, 3962),__exception_result_var_b591=string_operator_not_equals(buf_284,"guard"), come_pop_stackframe(), __exception_result_var_b591)&&(come_push_stackframe("05call.c", 1309, 3963),__exception_result_var_b592=string_operator_not_equals(buf_284,"__typeof__"), come_pop_stackframe(), __exception_result_var_b592)&&(come_push_stackframe("05call.c", 1309, 3964),__exception_result_var_b593=string_operator_not_equals(buf_284,"dynamic_typeof"), come_pop_stackframe(), __exception_result_var_b593)&&(come_push_stackframe("05call.c", 1309, 3965),__exception_result_var_b594=string_operator_not_equals(buf_284,"typeof"), come_pop_stackframe(), __exception_result_var_b594)&&(come_push_stackframe("05call.c", 1309, 3966),__exception_result_var_b595=string_operator_not_equals(buf_284,"gc_inc"), come_pop_stackframe(), __exception_result_var_b595)&&(come_push_stackframe("05call.c", 1309, 3967),__exception_result_var_b596=string_operator_not_equals(buf_284,"gc_dec"), come_pop_stackframe(), __exception_result_var_b596)&&(come_push_stackframe("05call.c", 1309, 3968),__exception_result_var_b597=string_operator_not_equals(buf_284,"case"), come_pop_stackframe(), __exception_result_var_b597)&&(come_push_stackframe("05call.c", 1309, 3969),__exception_result_var_b598=string_operator_not_equals(buf_284,"_Alignof"), come_pop_stackframe(), __exception_result_var_b598)&&(come_push_stackframe("05call.c", 1309, 3970),__exception_result_var_b599=string_operator_not_equals(buf_284,"__alignof__"), come_pop_stackframe(), __exception_result_var_b599)&&(come_push_stackframe("05call.c", 1309, 3971),__exception_result_var_b600=string_operator_not_equals(buf_284,"_Alignas"), come_pop_stackframe(), __exception_result_var_b600)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1309, 3972)), "05call.c", 1309, 3973))->p, "05call.c", 1309, 3974))==40&&!(*((char*)come_null_check((((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1309, 3975)), "05call.c", 1309, 3976))->p+1), "05call.c", 1309, 3977))==42&&is_type_name__285),                                                                _if_conditional430) {
                                                                    node_325=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1311, 3978),__exception_result_var_b601=((struct sNode*)(right_value392=parse_function_call(buf_284,info))), come_pop_stackframe(), __exception_result_var_b601));
                                                                    if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    __result235__ = __result_obj__ = node_325;
                                                                    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result235__;
                                                                    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    node_326=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1316, 3979),__exception_result_var_b602=((struct sNode*)(right_value393=string_node_v21(buf_284,head_282,head_sline_283,info))), come_pop_stackframe(), __exception_result_var_b602));
                                                                    if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    __result236__ = __result_obj__ = node_326;
                                                                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result236__;
                                                                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            }
            buf_284 = come_decrement_ref_count2(buf_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node_327=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1322, 3980),__exception_result_var_b603=((struct sNode*)(right_value394=expression_node_v96(info))), come_pop_stackframe(), __exception_result_var_b603));
            if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result237__ = __result_obj__ = node_327;
            if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result237__;
            if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    (come_push_stackframe("05call.c", 1327,3984),err_msg(info,"unexpected operator(%c)\n",*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1327, 3981)), "05call.c", 1327, 3982))->p, "05call.c", 1327, 3983))),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1328,3985),exit(2),come_pop_stackframe());
    __result238__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result238__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional336=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0, 3351)), "sReturnNode_finalize", 0, 3352))->sname!=((void*)0),                _if_conditional336) {
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0, 3353)), "sReturnNode_finalize", 0, 3354))->sname = come_decrement_ref_count2(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 0, 3353)), "sReturnNode_finalize", 0, 3354))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional337=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3355)), "sReturnNode_finalize", 1, 3356))->value!=((void*)0),                _if_conditional337) {
                    if(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3357)), "sReturnNode_finalize", 1, 3358))->value) { ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3357)), "sReturnNode_finalize", 1, 3358))->value = come_decrement_ref_count2(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3357)), "sReturnNode_finalize", 1, 3358))->value, ((struct sNode*)((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3357)), "sReturnNode_finalize", 1, 3358))->value)->finalize, ((struct sNode*)((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 1, 3357)), "sReturnNode_finalize", 1, 3358))->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional338=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2, 3359)), "sReturnNode_finalize", 2, 3360))->value_source!=((void*)0),                _if_conditional338) {
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2, 3361)), "sReturnNode_finalize", 2, 3362))->value_source = come_decrement_ref_count2(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_finalize", 2, 3361)), "sReturnNode_finalize", 2, 3362))->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional339;
struct sReturnNode* __result193__;
void* right_value324;
struct sReturnNode* result_281;
_Bool _if_conditional340;
_Bool _if_conditional341;
char* __exception_result_var_b445;
void* right_value325;
char* __dec_obj122;
_Bool _if_conditional342;
struct sNode* __exception_result_var_b446;
void* right_value326;
struct sNode* __dec_obj123;
_Bool _if_conditional343;
char* __exception_result_var_b447;
void* right_value327;
char* __dec_obj124;
struct sReturnNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
memset(&result_281, 0, sizeof(struct sReturnNode*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
                if(_if_conditional339=self==(void*)0,                _if_conditional339) {
                    __result193__ = __result_obj__ = (void*)0;
                    return __result193__;
                }
                result_281=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value324=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                come_call_finalizer3(right_value324,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional340=self!=((void*)0),                _if_conditional340) {
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 4, 3363)), "sReturnNode_clone", 4, 3364))->sline=((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 4, 3365)), "sReturnNode_clone", 4, 3366))->sline;
                }
                if(_if_conditional341=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 5, 3367)), "sReturnNode_clone", 5, 3368))->sname!=((void*)0),                _if_conditional341) {
                    __dec_obj122=((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 5, 3369)), "sReturnNode_clone", 5, 3370))->sname;
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 5, 3369)), "sReturnNode_clone", 5, 3370))->sname=(char*)come_increment_ref_count(((char*)(right_value325=(come_push_stackframe("sReturnNode_clone", 5, 3373),__exception_result_var_b445=string_clone(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 5, 3371)), "sReturnNode_clone", 5, 3372))->sname), come_pop_stackframe(), __exception_result_var_b445))));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional342=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 6, 3374)), "sReturnNode_clone", 6, 3375))->value!=((void*)0),                _if_conditional342) {
                    __dec_obj123=((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 6, 3376)), "sReturnNode_clone", 6, 3377))->value;
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 6, 3376)), "sReturnNode_clone", 6, 3377))->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=(come_push_stackframe("sReturnNode_clone", 6, 3380),__exception_result_var_b446=sNode_clone(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 6, 3378)), "sReturnNode_clone", 6, 3379))->value), come_pop_stackframe(), __exception_result_var_b446))));
                    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional343=self!=((void*)0)&&((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 7, 3381)), "sReturnNode_clone", 7, 3382))->value_source!=((void*)0),                _if_conditional343) {
                    __dec_obj124=((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 7, 3383)), "sReturnNode_clone", 7, 3384))->value_source;
                    ((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(result_281, "sReturnNode_clone", 7, 3383)), "sReturnNode_clone", 7, 3384))->value_source=(char*)come_increment_ref_count(((char*)(right_value327=(come_push_stackframe("sReturnNode_clone", 7, 3387),__exception_result_var_b447=string_clone(((struct sReturnNode*)come_null_check(((struct sReturnNode*)come_null_check(self, "sReturnNode_clone", 7, 3385)), "sReturnNode_clone", 7, 3386))->value_source), come_pop_stackframe(), __exception_result_var_b447))));
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result194__ = __result_obj__ = result_281;
                come_call_finalizer3(result_281,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result194__;
                come_call_finalizer3(result_281,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_292;
void* __exception_result_var_b515;
unsigned int __exception_result_var_b516;
unsigned int hash_293;
unsigned int it_294;
_Bool _while_condtional35;
_Bool _if_conditional355;
_Bool __exception_result_var_b517;
_Bool _if_conditional356;
struct sVar* __result196__;
_Bool _if_conditional361;
_Bool _if_conditional362;
struct sVar* __result197__;
struct sVar* __result198__;
struct sVar* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_292, 0, sizeof(struct sVar*));
memset(&hash_293, 0, sizeof(unsigned int));
memset(&it_294, 0, sizeof(unsigned int));
                    (come_push_stackframe("./neo-c.h", 1526, 3569),__exception_result_var_b515=memset(&default_value_292,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b515);
                    hash_293=(come_push_stackframe("./neo-c.h", 1528, 3572),__exception_result_var_b516=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 3570)), "./neo-c.h", 1528, 3571))), come_pop_stackframe(), __exception_result_var_b516)%((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1528, 3573)), "./neo-c.h", 1528, 3574))->size;
                    it_294=hash_293;
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        if(_if_conditional355=((_Bool*)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1532, 3575)), "./neo-c.h", 1532, 3576))->item_existance, "./neo-c.h", 1532, 3577))[it_294],                        _if_conditional355) {
                            if(_if_conditional356=(come_push_stackframe("./neo-c.h", 1534, 3583),__exception_result_var_b517=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1534, 3578)), "./neo-c.h", 1534, 3579))->keys, "./neo-c.h", 1534, 3580))[it_294], "./neo-c.h", 1534, 3581)), "./neo-c.h", 1534, 3582)),key), come_pop_stackframe(), __exception_result_var_b517),                            _if_conditional356) {
                                __result196__ = __result_obj__ = ((struct sVar**)come_null_check(((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1536, 3584)), "./neo-c.h", 1536, 3585))->items, "./neo-c.h", 1536, 3586))[it_294];
                                come_call_finalizer3(default_value_292,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result196__;
                            }
                            it_294++;
                            if(_if_conditional361=it_294>=((struct map$2charphsVarph*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./neo-c.h", 1541, 3603)), "./neo-c.h", 1541, 3604))->size,                            _if_conditional361) {
                                it_294=0;
                            }
                            else {
                                if(_if_conditional362=it_294==hash_293,                                _if_conditional362) {
                                    __result197__ = __result_obj__ = default_value_292;
                                    come_call_finalizer3(default_value_292,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result197__;
                                }
                            }
                        }
                        else {
                            __result198__ = __result_obj__ = default_value_292;
                            come_call_finalizer3(default_value_292,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                        }
                    }
                    __result199__ = __result_obj__ = default_value_292;
                    come_call_finalizer3(default_value_292,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result199__;
                    come_call_finalizer3(default_value_292,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional357=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 3587)), "sVar_finalize", 0, 3588))->mName!=((void*)0),                                    _if_conditional357) {
                                        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 3589)), "sVar_finalize", 0, 3590))->mName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 0, 3589)), "sVar_finalize", 0, 3590))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional358=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 3591)), "sVar_finalize", 1, 3592))->mCValueName!=((void*)0),                                    _if_conditional358) {
                                        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 3593)), "sVar_finalize", 1, 3594))->mCValueName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 1, 3593)), "sVar_finalize", 1, 3594))->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional359=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 3595)), "sVar_finalize", 2, 3596))->mType!=((void*)0),                                    _if_conditional359) {
                                        come_call_finalizer3(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 2, 3597)), "sVar_finalize", 2, 3598))->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional360=self!=((void*)0)&&((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 3599)), "sVar_finalize", 3, 3600))->mFunName!=((void*)0),                                    _if_conditional360) {
                                        ((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 3601)), "sVar_finalize", 3, 3602))->mFunName = come_decrement_ref_count2(((struct sVar*)come_null_check(((struct sVar*)come_null_check(self, "sVar_finalize", 3, 3601)), "sVar_finalize", 3, 3602))->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional372=self!=((void*)0)&&((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0, 3659)), "sFuncNode_finalize", 0, 3660))->sname!=((void*)0),                            _if_conditional372) {
                                ((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0, 3661)), "sFuncNode_finalize", 0, 3662))->sname = come_decrement_ref_count2(((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_finalize", 0, 3661)), "sFuncNode_finalize", 0, 3662))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional373;
struct sFuncNode* __result202__;
void* right_value340;
struct sFuncNode* result_297;
_Bool _if_conditional374;
_Bool _if_conditional375;
char* __exception_result_var_b527;
void* right_value341;
char* __dec_obj127;
struct sFuncNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value340 = (void*)0;
memset(&result_297, 0, sizeof(struct sFuncNode*));
right_value341 = (void*)0;
                            if(_if_conditional373=self==(void*)0,                            _if_conditional373) {
                                __result202__ = __result_obj__ = (void*)0;
                                return __result202__;
                            }
                            result_297=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value340=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            come_call_finalizer3(right_value340,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional374=self!=((void*)0),                            _if_conditional374) {
                                ((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(result_297, "sFuncNode_clone", 4, 3663)), "sFuncNode_clone", 4, 3664))->sline=((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_clone", 4, 3665)), "sFuncNode_clone", 4, 3666))->sline;
                            }
                            if(_if_conditional375=self!=((void*)0)&&((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_clone", 5, 3667)), "sFuncNode_clone", 5, 3668))->sname!=((void*)0),                            _if_conditional375) {
                                __dec_obj127=((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(result_297, "sFuncNode_clone", 5, 3669)), "sFuncNode_clone", 5, 3670))->sname;
                                ((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(result_297, "sFuncNode_clone", 5, 3669)), "sFuncNode_clone", 5, 3670))->sname=(char*)come_increment_ref_count(((char*)(right_value341=(come_push_stackframe("sFuncNode_clone", 5, 3673),__exception_result_var_b527=string_clone(((struct sFuncNode*)come_null_check(((struct sFuncNode*)come_null_check(self, "sFuncNode_clone", 5, 3671)), "sFuncNode_clone", 5, 3672))->sname), come_pop_stackframe(), __exception_result_var_b527))));
                                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result203__ = __result_obj__ = result_297;
                            come_call_finalizer3(result_297,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result203__;
                            come_call_finalizer3(result_297,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional377;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional377=self!=((void*)0)&&((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0, 3677)), "sLineNode_finalize", 0, 3678))->sname!=((void*)0),                                _if_conditional377) {
                                    ((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0, 3679)), "sLineNode_finalize", 0, 3680))->sname = come_decrement_ref_count2(((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_finalize", 0, 3679)), "sLineNode_finalize", 0, 3680))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional378;
struct sLineNode* __result205__;
void* right_value345;
struct sLineNode* result_298;
_Bool _if_conditional379;
_Bool _if_conditional380;
char* __exception_result_var_b530;
void* right_value346;
char* __dec_obj128;
struct sLineNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
memset(&result_298, 0, sizeof(struct sLineNode*));
right_value346 = (void*)0;
                                if(_if_conditional378=self==(void*)0,                                _if_conditional378) {
                                    __result205__ = __result_obj__ = (void*)0;
                                    return __result205__;
                                }
                                result_298=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value345=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                come_call_finalizer3(right_value345,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional379=self!=((void*)0),                                _if_conditional379) {
                                    ((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(result_298, "sLineNode_clone", 4, 3681)), "sLineNode_clone", 4, 3682))->sline=((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_clone", 4, 3683)), "sLineNode_clone", 4, 3684))->sline;
                                }
                                if(_if_conditional380=self!=((void*)0)&&((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_clone", 5, 3685)), "sLineNode_clone", 5, 3686))->sname!=((void*)0),                                _if_conditional380) {
                                    __dec_obj128=((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(result_298, "sLineNode_clone", 5, 3687)), "sLineNode_clone", 5, 3688))->sname;
                                    ((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(result_298, "sLineNode_clone", 5, 3687)), "sLineNode_clone", 5, 3688))->sname=(char*)come_increment_ref_count(((char*)(right_value346=(come_push_stackframe("sLineNode_clone", 5, 3691),__exception_result_var_b530=string_clone(((struct sLineNode*)come_null_check(((struct sLineNode*)come_null_check(self, "sLineNode_clone", 5, 3689)), "sLineNode_clone", 5, 3690))->sname), come_pop_stackframe(), __exception_result_var_b530))));
                                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result206__ = __result_obj__ = result_298;
                                come_call_finalizer3(result_298,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result206__;
                                come_call_finalizer3(result_298,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional382;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional382=self!=((void*)0)&&((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0, 3695)), "sSNameNode_finalize", 0, 3696))->sname!=((void*)0),                                    _if_conditional382) {
                                        ((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0, 3697)), "sSNameNode_finalize", 0, 3698))->sname = come_decrement_ref_count2(((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_finalize", 0, 3697)), "sSNameNode_finalize", 0, 3698))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional383;
struct sSNameNode* __result208__;
void* right_value350;
struct sSNameNode* result_299;
_Bool _if_conditional384;
_Bool _if_conditional385;
char* __exception_result_var_b533;
void* right_value351;
char* __dec_obj129;
struct sSNameNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
memset(&result_299, 0, sizeof(struct sSNameNode*));
right_value351 = (void*)0;
                                    if(_if_conditional383=self==(void*)0,                                    _if_conditional383) {
                                        __result208__ = __result_obj__ = (void*)0;
                                        return __result208__;
                                    }
                                    result_299=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value350=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    come_call_finalizer3(right_value350,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional384=self!=((void*)0),                                    _if_conditional384) {
                                        ((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(result_299, "sSNameNode_clone", 4, 3699)), "sSNameNode_clone", 4, 3700))->sline=((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_clone", 4, 3701)), "sSNameNode_clone", 4, 3702))->sline;
                                    }
                                    if(_if_conditional385=self!=((void*)0)&&((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_clone", 5, 3703)), "sSNameNode_clone", 5, 3704))->sname!=((void*)0),                                    _if_conditional385) {
                                        __dec_obj129=((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(result_299, "sSNameNode_clone", 5, 3705)), "sSNameNode_clone", 5, 3706))->sname;
                                        ((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(result_299, "sSNameNode_clone", 5, 3705)), "sSNameNode_clone", 5, 3706))->sname=(char*)come_increment_ref_count(((char*)(right_value351=(come_push_stackframe("sSNameNode_clone", 5, 3709),__exception_result_var_b533=string_clone(((struct sSNameNode*)come_null_check(((struct sSNameNode*)come_null_check(self, "sSNameNode_clone", 5, 3707)), "sSNameNode_clone", 5, 3708))->sname), come_pop_stackframe(), __exception_result_var_b533))));
                                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result209__ = __result_obj__ = result_299;
                                    come_call_finalizer3(result_299,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result209__;
                                    come_call_finalizer3(result_299,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional387=self!=((void*)0)&&((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0, 3713)), "sCallerFuncNode_finalize", 0, 3714))->sname!=((void*)0),                                        _if_conditional387) {
                                            ((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0, 3715)), "sCallerFuncNode_finalize", 0, 3716))->sname = come_decrement_ref_count2(((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_finalize", 0, 3715)), "sCallerFuncNode_finalize", 0, 3716))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional388;
struct sCallerFuncNode* __result211__;
void* right_value355;
struct sCallerFuncNode* result_300;
_Bool _if_conditional389;
_Bool _if_conditional390;
char* __exception_result_var_b536;
void* right_value356;
char* __dec_obj130;
struct sCallerFuncNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
memset(&result_300, 0, sizeof(struct sCallerFuncNode*));
right_value356 = (void*)0;
                                        if(_if_conditional388=self==(void*)0,                                        _if_conditional388) {
                                            __result211__ = __result_obj__ = (void*)0;
                                            return __result211__;
                                        }
                                        result_300=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value355=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        come_call_finalizer3(right_value355,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional389=self!=((void*)0),                                        _if_conditional389) {
                                            ((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(result_300, "sCallerFuncNode_clone", 4, 3717)), "sCallerFuncNode_clone", 4, 3718))->sline=((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_clone", 4, 3719)), "sCallerFuncNode_clone", 4, 3720))->sline;
                                        }
                                        if(_if_conditional390=self!=((void*)0)&&((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_clone", 5, 3721)), "sCallerFuncNode_clone", 5, 3722))->sname!=((void*)0),                                        _if_conditional390) {
                                            __dec_obj130=((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(result_300, "sCallerFuncNode_clone", 5, 3723)), "sCallerFuncNode_clone", 5, 3724))->sname;
                                            ((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(result_300, "sCallerFuncNode_clone", 5, 3723)), "sCallerFuncNode_clone", 5, 3724))->sname=(char*)come_increment_ref_count(((char*)(right_value356=(come_push_stackframe("sCallerFuncNode_clone", 5, 3727),__exception_result_var_b536=string_clone(((struct sCallerFuncNode*)come_null_check(((struct sCallerFuncNode*)come_null_check(self, "sCallerFuncNode_clone", 5, 3725)), "sCallerFuncNode_clone", 5, 3726))->sname), come_pop_stackframe(), __exception_result_var_b536))));
                                            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result212__ = __result_obj__ = result_300;
                                        come_call_finalizer3(result_300,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result212__;
                                        come_call_finalizer3(result_300,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional392;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional392=self!=((void*)0)&&((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0, 3731)), "sCallerLineNode_finalize", 0, 3732))->sname!=((void*)0),                                            _if_conditional392) {
                                                ((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0, 3733)), "sCallerLineNode_finalize", 0, 3734))->sname = come_decrement_ref_count2(((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_finalize", 0, 3733)), "sCallerLineNode_finalize", 0, 3734))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional393;
struct sCallerLineNode* __result214__;
void* right_value360;
struct sCallerLineNode* result_301;
_Bool _if_conditional394;
_Bool _if_conditional395;
char* __exception_result_var_b539;
void* right_value361;
char* __dec_obj131;
struct sCallerLineNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
memset(&result_301, 0, sizeof(struct sCallerLineNode*));
right_value361 = (void*)0;
                                            if(_if_conditional393=self==(void*)0,                                            _if_conditional393) {
                                                __result214__ = __result_obj__ = (void*)0;
                                                return __result214__;
                                            }
                                            result_301=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value360=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            come_call_finalizer3(right_value360,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional394=self!=((void*)0),                                            _if_conditional394) {
                                                ((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(result_301, "sCallerLineNode_clone", 4, 3735)), "sCallerLineNode_clone", 4, 3736))->sline=((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_clone", 4, 3737)), "sCallerLineNode_clone", 4, 3738))->sline;
                                            }
                                            if(_if_conditional395=self!=((void*)0)&&((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_clone", 5, 3739)), "sCallerLineNode_clone", 5, 3740))->sname!=((void*)0),                                            _if_conditional395) {
                                                __dec_obj131=((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(result_301, "sCallerLineNode_clone", 5, 3741)), "sCallerLineNode_clone", 5, 3742))->sname;
                                                ((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(result_301, "sCallerLineNode_clone", 5, 3741)), "sCallerLineNode_clone", 5, 3742))->sname=(char*)come_increment_ref_count(((char*)(right_value361=(come_push_stackframe("sCallerLineNode_clone", 5, 3745),__exception_result_var_b539=string_clone(((struct sCallerLineNode*)come_null_check(((struct sCallerLineNode*)come_null_check(self, "sCallerLineNode_clone", 5, 3743)), "sCallerLineNode_clone", 5, 3744))->sname), come_pop_stackframe(), __exception_result_var_b539))));
                                                __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result215__ = __result_obj__ = result_301;
                                            come_call_finalizer3(result_301,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result215__;
                                            come_call_finalizer3(result_301,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional397=self!=((void*)0)&&((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0, 3749)), "sCallerSNameNode_finalize", 0, 3750))->sname!=((void*)0),                                                _if_conditional397) {
                                                    ((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0, 3751)), "sCallerSNameNode_finalize", 0, 3752))->sname = come_decrement_ref_count2(((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_finalize", 0, 3751)), "sCallerSNameNode_finalize", 0, 3752))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional398;
struct sCallerSNameNode* __result217__;
void* right_value365;
struct sCallerSNameNode* result_302;
_Bool _if_conditional399;
_Bool _if_conditional400;
char* __exception_result_var_b542;
void* right_value366;
char* __dec_obj132;
struct sCallerSNameNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
memset(&result_302, 0, sizeof(struct sCallerSNameNode*));
right_value366 = (void*)0;
                                                if(_if_conditional398=self==(void*)0,                                                _if_conditional398) {
                                                    __result217__ = __result_obj__ = (void*)0;
                                                    return __result217__;
                                                }
                                                result_302=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value365=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                come_call_finalizer3(right_value365,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional399=self!=((void*)0),                                                _if_conditional399) {
                                                    ((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(result_302, "sCallerSNameNode_clone", 4, 3753)), "sCallerSNameNode_clone", 4, 3754))->sline=((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_clone", 4, 3755)), "sCallerSNameNode_clone", 4, 3756))->sline;
                                                }
                                                if(_if_conditional400=self!=((void*)0)&&((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_clone", 5, 3757)), "sCallerSNameNode_clone", 5, 3758))->sname!=((void*)0),                                                _if_conditional400) {
                                                    __dec_obj132=((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(result_302, "sCallerSNameNode_clone", 5, 3759)), "sCallerSNameNode_clone", 5, 3760))->sname;
                                                    ((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(result_302, "sCallerSNameNode_clone", 5, 3759)), "sCallerSNameNode_clone", 5, 3760))->sname=(char*)come_increment_ref_count(((char*)(right_value366=(come_push_stackframe("sCallerSNameNode_clone", 5, 3763),__exception_result_var_b542=string_clone(((struct sCallerSNameNode*)come_null_check(((struct sCallerSNameNode*)come_null_check(self, "sCallerSNameNode_clone", 5, 3761)), "sCallerSNameNode_clone", 5, 3762))->sname), come_pop_stackframe(), __exception_result_var_b542))));
                                                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result218__ = __result_obj__ = result_302;
                                                come_call_finalizer3(result_302,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result218__;
                                                come_call_finalizer3(result_302,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional402=self!=((void*)0)&&((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_finalize", 0, 3774)), "sVarArgTypeName_finalize", 0, 3775))->sname!=((void*)0),                                                    _if_conditional402) {
                                                        ((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_finalize", 0, 3776)), "sVarArgTypeName_finalize", 0, 3777))->sname = come_decrement_ref_count2(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_finalize", 0, 3776)), "sVarArgTypeName_finalize", 0, 3777))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(_if_conditional403=self!=((void*)0)&&((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_finalize", 1, 3778)), "sVarArgTypeName_finalize", 1, 3779))->type!=((void*)0),                                                    _if_conditional403) {
                                                        come_call_finalizer3(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_finalize", 1, 3780)), "sVarArgTypeName_finalize", 1, 3781))->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__;
_Bool _if_conditional404;
struct sVarArgTypeName* __result220__;
void* right_value371;
struct sVarArgTypeName* result_306;
_Bool _if_conditional405;
_Bool _if_conditional406;
char* __exception_result_var_b546;
void* right_value372;
char* __dec_obj133;
_Bool _if_conditional407;
struct sType* __exception_result_var_b547;
void* right_value373;
struct sType* __dec_obj134;
struct sVarArgTypeName* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_306, 0, sizeof(struct sVarArgTypeName*));
right_value372 = (void*)0;
right_value373 = (void*)0;
                                                    if(_if_conditional404=self==(void*)0,                                                    _if_conditional404) {
                                                        __result220__ = __result_obj__ = (void*)0;
                                                        return __result220__;
                                                    }
                                                    result_306=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(right_value371=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"))));
                                                    come_call_finalizer3(right_value371,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional405=self!=((void*)0),                                                    _if_conditional405) {
                                                        ((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(result_306, "sVarArgTypeName_clone", 4, 3782)), "sVarArgTypeName_clone", 4, 3783))->sline=((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_clone", 4, 3784)), "sVarArgTypeName_clone", 4, 3785))->sline;
                                                    }
                                                    if(_if_conditional406=self!=((void*)0)&&((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_clone", 5, 3786)), "sVarArgTypeName_clone", 5, 3787))->sname!=((void*)0),                                                    _if_conditional406) {
                                                        __dec_obj133=((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(result_306, "sVarArgTypeName_clone", 5, 3788)), "sVarArgTypeName_clone", 5, 3789))->sname;
                                                        ((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(result_306, "sVarArgTypeName_clone", 5, 3788)), "sVarArgTypeName_clone", 5, 3789))->sname=(char*)come_increment_ref_count(((char*)(right_value372=(come_push_stackframe("sVarArgTypeName_clone", 5, 3792),__exception_result_var_b546=string_clone(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_clone", 5, 3790)), "sVarArgTypeName_clone", 5, 3791))->sname), come_pop_stackframe(), __exception_result_var_b546))));
                                                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(_if_conditional407=self!=((void*)0)&&((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_clone", 6, 3793)), "sVarArgTypeName_clone", 6, 3794))->type!=((void*)0),                                                    _if_conditional407) {
                                                        __dec_obj134=((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(result_306, "sVarArgTypeName_clone", 6, 3795)), "sVarArgTypeName_clone", 6, 3796))->type;
                                                        ((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(result_306, "sVarArgTypeName_clone", 6, 3795)), "sVarArgTypeName_clone", 6, 3796))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=(come_push_stackframe("sVarArgTypeName_clone", 6, 3799),__exception_result_var_b547=sType_clone(((struct sVarArgTypeName*)come_null_check(((struct sVarArgTypeName*)come_null_check(self, "sVarArgTypeName_clone", 6, 3797)), "sVarArgTypeName_clone", 6, 3798))->type), come_pop_stackframe(), __exception_result_var_b547))));
                                                        come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value373,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result221__ = __result_obj__ = result_306;
                                                    come_call_finalizer3(result_306,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result221__;
                                                    come_call_finalizer3(result_306,sVarArgTypeName_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_310;
void* __exception_result_var_b556;
unsigned int __exception_result_var_b557;
unsigned int hash_311;
unsigned int it_312;
_Bool _while_condtional37;
_Bool _if_conditional410;
_Bool __exception_result_var_b558;
_Bool _if_conditional411;
struct sType* __result224__;
_Bool _if_conditional412;
_Bool _if_conditional413;
struct sType* __result225__;
struct sType* __result226__;
struct sType* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_310, 0, sizeof(struct sType*));
memset(&hash_311, 0, sizeof(unsigned int));
memset(&it_312, 0, sizeof(unsigned int));
                                                            (come_push_stackframe("./neo-c.h", 1526, 3818),__exception_result_var_b556=memset(&default_value_310,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b556);
                                                            hash_311=(come_push_stackframe("./neo-c.h", 1528, 3821),__exception_result_var_b557=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 3819)), "./neo-c.h", 1528, 3820))), come_pop_stackframe(), __exception_result_var_b557)%((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1528, 3822)), "./neo-c.h", 1528, 3823))->size;
                                                            it_312=hash_311;
                                                            while(_while_condtional37=(_Bool)1,                                                            _while_condtional37) {
                                                                if(_if_conditional410=((_Bool*)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1532, 3824)), "./neo-c.h", 1532, 3825))->item_existance, "./neo-c.h", 1532, 3826))[it_312],                                                                _if_conditional410) {
                                                                    if(_if_conditional411=(come_push_stackframe("./neo-c.h", 1534, 3832),__exception_result_var_b558=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1534, 3827)), "./neo-c.h", 1534, 3828))->keys, "./neo-c.h", 1534, 3829))[it_312], "./neo-c.h", 1534, 3830)), "./neo-c.h", 1534, 3831)),key), come_pop_stackframe(), __exception_result_var_b558),                                                                    _if_conditional411) {
                                                                        __result224__ = __result_obj__ = ((struct sType**)come_null_check(((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1536, 3833)), "./neo-c.h", 1536, 3834))->items, "./neo-c.h", 1536, 3835))[it_312];
                                                                        come_call_finalizer3(default_value_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result224__;
                                                                    }
                                                                    it_312++;
                                                                    if(_if_conditional412=it_312>=((struct map$2charphsTypeph*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./neo-c.h", 1541, 3836)), "./neo-c.h", 1541, 3837))->size,                                                                    _if_conditional412) {
                                                                        it_312=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional413=it_312==hash_311,                                                                        _if_conditional413) {
                                                                            __result225__ = __result_obj__ = default_value_310;
                                                                            come_call_finalizer3(default_value_310,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result225__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result226__ = __result_obj__ = default_value_310;
                                                                    come_call_finalizer3(default_value_310,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result226__;
                                                                }
                                                            }
                                                            __result227__ = __result_obj__ = default_value_310;
                                                            come_call_finalizer3(default_value_310,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result227__;
                                                            come_call_finalizer3(default_value_310,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_314;
void* __exception_result_var_b562;
unsigned int __exception_result_var_b563;
unsigned int hash_315;
unsigned int it_316;
_Bool _while_condtional38;
_Bool _if_conditional415;
_Bool __exception_result_var_b564;
_Bool _if_conditional416;
struct sClass* __result228__;
_Bool _if_conditional424;
_Bool _if_conditional425;
struct sClass* __result229__;
struct sClass* __result230__;
struct sClass* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_314, 0, sizeof(struct sClass*));
memset(&hash_315, 0, sizeof(unsigned int));
memset(&it_316, 0, sizeof(unsigned int));
                                                                (come_push_stackframe("./neo-c.h", 1526, 3845),__exception_result_var_b562=memset(&default_value_314,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b562);
                                                                hash_315=(come_push_stackframe("./neo-c.h", 1528, 3848),__exception_result_var_b563=string_get_hash_key(((char*)come_null_check(((char*)come_null_check(((char*)key), "./neo-c.h", 1528, 3846)), "./neo-c.h", 1528, 3847))), come_pop_stackframe(), __exception_result_var_b563)%((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1528, 3849)), "./neo-c.h", 1528, 3850))->size;
                                                                it_316=hash_315;
                                                                while(_while_condtional38=(_Bool)1,                                                                _while_condtional38) {
                                                                    if(_if_conditional415=((_Bool*)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1532, 3851)), "./neo-c.h", 1532, 3852))->item_existance, "./neo-c.h", 1532, 3853))[it_316],                                                                    _if_conditional415) {
                                                                        if(_if_conditional416=(come_push_stackframe("./neo-c.h", 1534, 3859),__exception_result_var_b564=string_equals(((char*)come_null_check(((char*)come_null_check(((char**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1534, 3854)), "./neo-c.h", 1534, 3855))->keys, "./neo-c.h", 1534, 3856))[it_316], "./neo-c.h", 1534, 3857)), "./neo-c.h", 1534, 3858)),key), come_pop_stackframe(), __exception_result_var_b564),                                                                        _if_conditional416) {
                                                                            __result228__ = __result_obj__ = ((struct sClass**)come_null_check(((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1536, 3860)), "./neo-c.h", 1536, 3861))->items, "./neo-c.h", 1536, 3862))[it_316];
                                                                            come_call_finalizer3(default_value_314,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                            return __result228__;
                                                                        }
                                                                        it_316++;
                                                                        if(_if_conditional424=it_316>=((struct map$2charphsClassph*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./neo-c.h", 1541, 3895)), "./neo-c.h", 1541, 3896))->size,                                                                        _if_conditional424) {
                                                                            it_316=0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional425=it_316==hash_315,                                                                            _if_conditional425) {
                                                                                __result229__ = __result_obj__ = default_value_314;
                                                                                come_call_finalizer3(default_value_314,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result229__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result230__ = __result_obj__ = default_value_314;
                                                                        come_call_finalizer3(default_value_314,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result230__;
                                                                    }
                                                                }
                                                                __result231__ = __result_obj__ = default_value_314;
                                                                come_call_finalizer3(default_value_314,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result231__;
                                                                come_call_finalizer3(default_value_314,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional422;
_Bool _if_conditional423;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional417=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 3863)), "sClass_finalize", 0, 3864))->mName!=((void*)0),                                                                                _if_conditional417) {
                                                                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 3865)), "sClass_finalize", 0, 3866))->mName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 0, 3865)), "sClass_finalize", 0, 3866))->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional418=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 3867)), "sClass_finalize", 1, 3868))->mFields!=((void*)0),                                                                                _if_conditional418) {
                                                                                    come_call_finalizer3(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 1, 3869)), "sClass_finalize", 1, 3870))->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional422=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 3887)), "sClass_finalize", 2, 3888))->mDeclareSName!=((void*)0),                                                                                _if_conditional422) {
                                                                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 3889)), "sClass_finalize", 2, 3890))->mDeclareSName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 2, 3889)), "sClass_finalize", 2, 3890))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional423=self!=((void*)0)&&((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 3891)), "sClass_finalize", 3, 3892))->mParentClassName!=((void*)0),                                                                                _if_conditional423) {
                                                                                    ((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 3893)), "sClass_finalize", 3, 3894))->mParentClassName = come_decrement_ref_count2(((struct sClass*)come_null_check(((struct sClass*)come_null_check(self, "sClass_finalize", 3, 3893)), "sClass_finalize", 3, 3894))->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_317;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_318;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_317, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_318, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                        it_317=((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./neo-c.h", 120, 3871)), "./neo-c.h", 120, 3872))->head;
                                                                                        while(_while_condtional39=it_317!=((void*)0),                                                                                        _while_condtional39) {
                                                                                            prev_it_318=it_317;
                                                                                            it_317=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_317, "./neo-c.h", 123, 3873)), "./neo-c.h", 123, 3874))->next;
                                                                                            come_call_finalizer3(prev_it_318,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional419;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional419=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3875)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3876))->item!=((void*)0),                                                                                                _if_conditional419) {
                                                                                                    come_call_finalizer3(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3877)), "list_item$1tuple2$2charphsTypephphp_finalize", 0, 3878))->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional420;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                        if(_if_conditional420=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3879)), "tuple2$2charphsTypephp_finalize", 0, 3880))->v1!=((void*)0),                                                                                                        _if_conditional420) {
                                                                                                            ((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3881)), "tuple2$2charphsTypephp_finalize", 0, 3882))->v1 = come_decrement_ref_count2(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0, 3881)), "tuple2$2charphsTypephp_finalize", 0, 3882))->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        if(_if_conditional421=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 3883)), "tuple2$2charphsTypephp_finalize", 1, 3884))->v2!=((void*)0),                                                                                                        _if_conditional421) {
                                                                                                            come_call_finalizer3(((struct tuple2$2charphsTypeph*)come_null_check(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1, 3885)), "tuple2$2charphsTypephp_finalize", 1, 3886))->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                        }
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value395;
struct sNode* __exception_result_var_b604;
struct sNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
    __result239__ = __result_obj__ = (come_push_stackframe("05call.c", 1335, 3986),__exception_result_var_b604=((struct sNode*)(right_value395=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b604);
    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result239__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __exception_result_var_b605;
_Bool _if_conditional431;
unsigned long int __exception_result_var_b606;
struct sNode* __exception_result_var_b607;
void* right_value396;
void* right_value397;
struct sNode* __exception_result_var_b608;
struct sNode* __dec_obj136;
struct sNode* __result240__;
_Bool __exception_result_var_b609;
_Bool _if_conditional432;
unsigned long int __exception_result_var_b610;
struct sNode* __exception_result_var_b611;
void* right_value398;
void* right_value399;
struct sNode* __exception_result_var_b612;
struct sNode* __dec_obj137;
struct sNode* __result241__;
struct sNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
    if(_if_conditional431=(come_push_stackframe("05call.c", 1340, 3987),__exception_result_var_b605=parsecmp("or",info), come_pop_stackframe(), __exception_result_var_b605),    _if_conditional431) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1341, 3988)), "05call.c", 1341, 3989))->p+=(come_push_stackframe("05call.c", 1341, 3990),__exception_result_var_b606=strlen("or"), come_pop_stackframe(), __exception_result_var_b606);
        (come_push_stackframe("05call.c", 1342,3991),skip_spaces_and_lf(info),come_pop_stackframe());
        __dec_obj136=node;
        node=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1344, 3993),__exception_result_var_b608=((struct sNode*)(right_value397=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=(come_push_stackframe("05call.c", 1344, 3992),__exception_result_var_b607=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b607)))),info))), come_pop_stackframe(), __exception_result_var_b608));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result240__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result240__;
    }
    else {
        if(_if_conditional432=(come_push_stackframe("05call.c", 1348, 3994),__exception_result_var_b609=parsecmp("and",info), come_pop_stackframe(), __exception_result_var_b609),        _if_conditional432) {
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1349, 3995)), "05call.c", 1349, 3996))->p+=(come_push_stackframe("05call.c", 1349, 3997),__exception_result_var_b610=strlen("and"), come_pop_stackframe(), __exception_result_var_b610);
            (come_push_stackframe("05call.c", 1350,3998),skip_spaces_and_lf(info),come_pop_stackframe());
            __dec_obj137=node;
            node=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1352, 4000),__exception_result_var_b612=((struct sNode*)(right_value399=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=(come_push_stackframe("05call.c", 1352, 3999),__exception_result_var_b611=sNode_clone(node), come_pop_stackframe(), __exception_result_var_b611)))),info))), come_pop_stackframe(), __exception_result_var_b612));
            if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result241__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result241__;
        }
    }
    __result242__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result242__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value400;
struct sNode* __exception_result_var_b613;
struct sNode* node_328;
void* right_value401;
struct sNode* __exception_result_var_b614;
struct sNode* __dec_obj138;
struct sNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
    node_328=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1362, 4001),__exception_result_var_b613=((struct sNode*)(right_value400=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b613));
    if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj138=node_328;
    node_328=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1364, 4002),__exception_result_var_b614=((struct sNode*)(right_value401=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_328),info))), come_pop_stackframe(), __exception_result_var_b614));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result243__ = __result_obj__ = node_328;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result243__;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_329;
void* right_value402;
void* right_value403;
struct buffer* __exception_result_var_b615;
struct buffer* buf_330;
_Bool __exception_result_var_b616;
_Bool _if_conditional433;
void* right_value404;
char* __exception_result_var_b617;
char* __dec_obj139;
_Bool _if_conditional434;
int i_331;
struct buffer* __exception_result_var_b618;
_Bool _if_conditional435;
void* right_value405;
char* __exception_result_var_b619;
char* __dec_obj140;
void* right_value406;
char* __exception_result_var_b620;
char* __dec_obj141;
int i_332;
struct buffer* __exception_result_var_b621;
_Bool _if_conditional436;
struct buffer* __exception_result_var_b622;
int __exception_result_var_b623;
_Bool _if_conditional438;
struct buffer* __exception_result_var_b624;
void* right_value407;
char* __exception_result_var_b625;
void* right_value408;
char* __exception_result_var_b626;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_329, 0, sizeof(char*));
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&buf_330, 0, sizeof(struct buffer*));
right_value404 = (void*)0;
memset(&i_331, 0, sizeof(int));
right_value405 = (void*)0;
right_value406 = (void*)0;
memset(&i_332, 0, sizeof(int));
right_value407 = (void*)0;
right_value408 = (void*)0;
    buf_330=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 1372, 4004),__exception_result_var_b615=((struct buffer*)(right_value403=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value402=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1372, "buffer"))), "05call.c", 1372, 4003)))))), come_pop_stackframe(), __exception_result_var_b615));
    come_call_finalizer3(right_value402,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value403,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional433=(come_push_stackframe("05call.c", 1373, 4007),__exception_result_var_b616=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1373, 4005)), "05call.c", 1373, 4006))->mOriginalTypeName,""), come_pop_stackframe(), __exception_result_var_b616),    _if_conditional433) {
        __dec_obj139=struct_name_329;
        struct_name_329=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1374, 4010),__exception_result_var_b617=((char*)(right_value404=__builtin_string(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1374, 4008)), "05call.c", 1374, 4009))->mOriginalTypeName))), come_pop_stackframe(), __exception_result_var_b617));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional434=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1375, 4011)), "05call.c", 1375, 4012))->mClass, "05call.c", 1375, 4013)), "05call.c", 1375, 4014))->mStruct,        _if_conditional434) {
            for(            i_331=0;            i_331<((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1376, 4015)), "05call.c", 1376, 4016))->mOriginalTypeNamePointerNum;            i_331++            ){
                (come_push_stackframe("05call.c", 1378, 4019),__exception_result_var_b618=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_330, "05call.c", 1378, 4017)), "05call.c", 1378, 4018)),"p"), come_pop_stackframe(), __exception_result_var_b618);
            }
        }
    }
    else {
        if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1382, 4020)), "05call.c", 1382, 4021))->mClass, "05call.c", 1382, 4022)), "05call.c", 1382, 4023))->mStruct) {
            __dec_obj140=struct_name_329;
            struct_name_329=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1383, 4028),__exception_result_var_b619=((char*)(right_value405=__builtin_string(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1383, 4024)), "05call.c", 1383, 4025))->mClass, "05call.c", 1383, 4026)), "05call.c", 1383, 4027))->mName))), come_pop_stackframe(), __exception_result_var_b619));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj141=struct_name_329;
            struct_name_329=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1386, 4029),__exception_result_var_b620=((char*)(right_value406=create_generics_name(obj_type,info))), come_pop_stackframe(), __exception_result_var_b620));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_332=0;            i_332<((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1387, 4030)), "05call.c", 1387, 4031))->mPointerNum;            i_332++            ){
                (come_push_stackframe("05call.c", 1389, 4034),__exception_result_var_b621=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_330, "05call.c", 1389, 4032)), "05call.c", 1389, 4033)),"p"), come_pop_stackframe(), __exception_result_var_b621);
            }
        }
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1393, 4035)), "05call.c", 1393, 4036))->mArrayPointerType) {
        (come_push_stackframe("05call.c", 1394, 4039),__exception_result_var_b622=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_330, "05call.c", 1394, 4037)), "05call.c", 1394, 4038)),"a"), come_pop_stackframe(), __exception_result_var_b622);
    }
    if(_if_conditional438=!array_equal_pointer&&(come_push_stackframe("05call.c", 1397, 4046),__exception_result_var_b623=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1397, 4040)), "05call.c", 1397, 4041))->mArrayNum, "05call.c", 1397, 4042)), "05call.c", 1397, 4043))), come_pop_stackframe(), __exception_result_var_b623)>0,    _if_conditional438) {
        (come_push_stackframe("05call.c", 1398, 4049),__exception_result_var_b624=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_330, "05call.c", 1398, 4047)), "05call.c", 1398, 4048)),"pa"), come_pop_stackframe(), __exception_result_var_b624);
    }
    __result246__ = __result_obj__ = (come_push_stackframe("05call.c", 1401, 4053),__exception_result_var_b626=((char*)(right_value408=xsprintf("%s%s_%s",struct_name_329,(come_push_stackframe("05call.c", 1401, 4052),__exception_result_var_b625=((char*)(right_value407=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_330, "05call.c", 1401, 4050)), "05call.c", 1401, 4051))))), come_pop_stackframe(), __exception_result_var_b625),fun_name))), come_pop_stackframe(), __exception_result_var_b626);
    struct_name_329 = come_decrement_ref_count2(struct_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value408 = come_decrement_ref_count2(right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result246__;
    struct_name_329 = come_decrement_ref_count2(struct_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_330,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional437;
int __result244__;
int __result245__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional437=self==((void*)0),        _if_conditional437) {
            __result244__ = 0;
            return __result244__;
        }
        __result245__ = ((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./neo-c.h", 360, 4044)), "./neo-c.h", 360, 4045))->len;
        return __result245__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_333;
void* right_value409;
void* right_value410;
struct buffer* __exception_result_var_b627;
struct buffer* buf_334;
_Bool __exception_result_var_b628;
_Bool _if_conditional439;
void* right_value411;
char* __exception_result_var_b629;
char* __dec_obj142;
_Bool _if_conditional440;
int i_335;
struct buffer* __exception_result_var_b630;
_Bool _if_conditional441;
void* right_value412;
char* __exception_result_var_b631;
char* __dec_obj143;
void* right_value413;
char* __exception_result_var_b632;
char* __dec_obj144;
int i_336;
struct buffer* __exception_result_var_b633;
_Bool _if_conditional442;
struct buffer* __exception_result_var_b634;
int __exception_result_var_b635;
_Bool _if_conditional443;
struct buffer* __exception_result_var_b636;
int __exception_result_var_b637;
int __exception_result_var_b638;
int __exception_result_var_b639;
void* right_value414;
char* __exception_result_var_b640;
int __exception_result_var_b641;
int len_338;
int __exception_result_var_b642;
void* __exception_result_var_b643;
int __exception_result_var_b644;
int __exception_result_var_b645;
void* right_value415;
char* __exception_result_var_b646;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_333, 0, sizeof(char*));
right_value409 = (void*)0;
right_value410 = (void*)0;
memset(&buf_334, 0, sizeof(struct buffer*));
right_value411 = (void*)0;
memset(&i_335, 0, sizeof(int));
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&i_336, 0, sizeof(int));
right_value414 = (void*)0;
memset(&len_338, 0, sizeof(int));
right_value415 = (void*)0;
    buf_334=(struct buffer*)come_increment_ref_count((come_push_stackframe("05call.c", 1407, 4055),__exception_result_var_b627=((struct buffer*)(right_value410=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)come_null_check(((struct buffer*)(right_value409=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1407, "buffer"))), "05call.c", 1407, 4054)))))), come_pop_stackframe(), __exception_result_var_b627));
    come_call_finalizer3(right_value409,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value410,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional439=(come_push_stackframe("05call.c", 1408, 4058),__exception_result_var_b628=string_operator_not_equals(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1408, 4056)), "05call.c", 1408, 4057))->mOriginalTypeName,""), come_pop_stackframe(), __exception_result_var_b628),    _if_conditional439) {
        __dec_obj142=struct_name_333;
        struct_name_333=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1409, 4061),__exception_result_var_b629=((char*)(right_value411=__builtin_string(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1409, 4059)), "05call.c", 1409, 4060))->mOriginalTypeName))), come_pop_stackframe(), __exception_result_var_b629));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional440=!((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1410, 4062)), "05call.c", 1410, 4063))->mClass, "05call.c", 1410, 4064)), "05call.c", 1410, 4065))->mStruct,        _if_conditional440) {
            for(            i_335=0;            i_335<((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1411, 4066)), "05call.c", 1411, 4067))->mOriginalTypeNamePointerNum;            i_335++            ){
                (come_push_stackframe("05call.c", 1413, 4070),__exception_result_var_b630=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_334, "05call.c", 1413, 4068)), "05call.c", 1413, 4069)),"p"), come_pop_stackframe(), __exception_result_var_b630);
            }
        }
    }
    else {
        if(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1417, 4071)), "05call.c", 1417, 4072))->mClass, "05call.c", 1417, 4073)), "05call.c", 1417, 4074))->mStruct) {
            __dec_obj143=struct_name_333;
            struct_name_333=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1418, 4079),__exception_result_var_b631=((char*)(right_value412=__builtin_string(((struct sClass*)come_null_check(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1418, 4075)), "05call.c", 1418, 4076))->mClass, "05call.c", 1418, 4077)), "05call.c", 1418, 4078))->mName))), come_pop_stackframe(), __exception_result_var_b631));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj144=struct_name_333;
            struct_name_333=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1421, 4080),__exception_result_var_b632=((char*)(right_value413=create_generics_name(obj_type,info))), come_pop_stackframe(), __exception_result_var_b632));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_336=0;            i_336<((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1422, 4081)), "05call.c", 1422, 4082))->mPointerNum;            i_336++            ){
                (come_push_stackframe("05call.c", 1424, 4085),__exception_result_var_b633=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_334, "05call.c", 1424, 4083)), "05call.c", 1424, 4084)),"p"), come_pop_stackframe(), __exception_result_var_b633);
            }
        }
    }
    if(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1428, 4086)), "05call.c", 1428, 4087))->mArrayPointerType) {
        (come_push_stackframe("05call.c", 1429, 4090),__exception_result_var_b634=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_334, "05call.c", 1429, 4088)), "05call.c", 1429, 4089)),"a"), come_pop_stackframe(), __exception_result_var_b634);
    }
    if(_if_conditional443=!array_equal_pointer&&(come_push_stackframe("05call.c", 1432, 4095),__exception_result_var_b635=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sType*)come_null_check(obj_type, "05call.c", 1432, 4091)), "05call.c", 1432, 4092))->mArrayNum, "05call.c", 1432, 4093)), "05call.c", 1432, 4094))), come_pop_stackframe(), __exception_result_var_b635)>0,    _if_conditional443) {
        (come_push_stackframe("05call.c", 1433, 4098),__exception_result_var_b636=buffer_append_str(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_334, "05call.c", 1433, 4096)), "05call.c", 1433, 4097)),"pa"), come_pop_stackframe(), __exception_result_var_b636);
    }
    char none_method_name_337[(come_push_stackframe("05call.c", 1436, 4101),__exception_result_var_b637=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1436, 4099)), "05call.c", 1436, 4100))), come_pop_stackframe(), __exception_result_var_b637)+1];
    memset(&none_method_name_337, 0, sizeof(char)    *((come_push_stackframe("05call.c", 1436, 4104),__exception_result_var_b638=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1436, 4102)), "05call.c", 1436, 4103))), come_pop_stackframe(), __exception_result_var_b638)+1)    );
    len_338=(come_push_stackframe("05call.c", 1438, 4107),__exception_result_var_b639=string_length(((char*)come_null_check(((char*)come_null_check(struct_name_333, "05call.c", 1438, 4105)), "05call.c", 1438, 4106))), come_pop_stackframe(), __exception_result_var_b639)+(come_push_stackframe("05call.c", 1438, 4113),__exception_result_var_b641=string_length(((char*)come_null_check(((char*)come_null_check((come_push_stackframe("05call.c", 1438, 4110),__exception_result_var_b640=((char*)(right_value414=buffer_to_string(((struct buffer*)come_null_check(((struct buffer*)come_null_check(buf_334, "05call.c", 1438, 4108)), "05call.c", 1438, 4109))))), come_pop_stackframe(), __exception_result_var_b640), "05call.c", 1438, 4111)), "05call.c", 1438, 4112))), come_pop_stackframe(), __exception_result_var_b641);
    right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    (come_push_stackframe("05call.c", 1439, 4117),__exception_result_var_b643=memcpy(none_method_name_337,fun_name+len_338+1,(come_push_stackframe("05call.c", 1439, 4116),__exception_result_var_b642=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1439, 4114)), "05call.c", 1439, 4115))), come_pop_stackframe(), __exception_result_var_b642)-len_338-1), come_pop_stackframe(), __exception_result_var_b643);
    (come_range_check(&((char*)come_null_check(none_method_name_337, "05call.c", 1440, 4118))[(come_push_stackframe("05call.c", 1440, 4121),__exception_result_var_b644=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1440, 4119)), "05call.c", 1440, 4120))), come_pop_stackframe(), __exception_result_var_b644)-len_338-1],((char*)come_null_check(none_method_name_337, "05call.c", 1440, 4118)),((char*)come_null_check(none_method_name_337, "05call.c", 1440, 4118))+((come_push_stackframe("05call.c", 1436, 4124),__exception_result_var_b645=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1436, 4122)), "05call.c", 1436, 4123))), come_pop_stackframe(), __exception_result_var_b645)+1), "05call.c", 1440), ((char*)come_null_check(none_method_name_337, "05call.c", 1440, 4118))[(come_push_stackframe("05call.c", 1440, 4121),__exception_result_var_b644=charp_length(((char*)come_null_check(((char*)come_null_check(fun_name, "05call.c", 1440, 4119)), "05call.c", 1440, 4120))), come_pop_stackframe(), __exception_result_var_b644)-len_338-1]=0);
    __result247__ = __result_obj__ = (come_push_stackframe("05call.c", 1442, 4125),__exception_result_var_b646=((char*)(right_value415=__builtin_string(none_method_name_337))), come_pop_stackframe(), __exception_result_var_b646);
    struct_name_333 = come_decrement_ref_count2(struct_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result247__;
    struct_name_333 = come_decrement_ref_count2(struct_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_334,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value416;
char* __exception_result_var_b647;
char* struct_name_339;
void* right_value417;
char* __exception_result_var_b648;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&struct_name_339, 0, sizeof(char*));
right_value417 = (void*)0;
    struct_name_339=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1447, 4128),__exception_result_var_b647=((char*)(right_value416=__builtin_string(((struct sClass*)come_null_check(((struct sClass*)come_null_check(obj_class, "05call.c", 1447, 4126)), "05call.c", 1447, 4127))->mName))), come_pop_stackframe(), __exception_result_var_b647));
    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result248__ = __result_obj__ = (come_push_stackframe("05call.c", 1449, 4129),__exception_result_var_b648=((char*)(right_value417=xsprintf("%s_%s",struct_name_339,fun_name))), come_pop_stackframe(), __exception_result_var_b648);
    struct_name_339 = come_decrement_ref_count2(struct_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result248__;
    struct_name_339 = come_decrement_ref_count2(struct_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    (come_push_stackframe("05call.c", 1454,4130),err_msg(info,"unexpected word(%s)(2)\n",buf),come_pop_stackframe());
    (come_push_stackframe("05call.c", 1455,4131),exit(2),come_pop_stackframe());
    __result249__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result249__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional444;
void* right_value418;
void* right_value419;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b649;
struct list$1tuple2$2charphsNodephph* params_340;
_Bool _while_condtional41;
_Bool _if_conditional445;
char* p_341;
int sline_342;
_Bool err_flag_343;
void* right_value420;
char* __exception_result_var_b650;
char* label_344;
_Bool __exception_result_var_b651;
_Bool _if_conditional446;
void* right_value421;
char* __exception_result_var_b652;
char* __dec_obj145;
_Bool _if_conditional447;
char* __dec_obj146;
_Bool no_comma_345;
void* right_value422;
struct sNode* __exception_result_var_b653;
struct sNode* node_346;
void* right_value423;
struct sNode* __exception_result_var_b654;
struct sNode* __dec_obj147;
void* right_value424;
void* right_value425;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b655;
_Bool _if_conditional448;
_Bool _if_conditional449;
void* right_value426;
void* right_value427;
struct sLambdaCall* __exception_result_var_b656;
struct sNode* _inf_value11;
struct sLambdaCall* _inf_obj_value11;
void* right_value432;
struct sNode* __result252__;
struct sNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&params_340, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_341, 0, sizeof(char*));
memset(&sline_342, 0, sizeof(int));
memset(&err_flag_343, 0, sizeof(_Bool));
right_value420 = (void*)0;
memset(&label_344, 0, sizeof(char*));
right_value421 = (void*)0;
memset(&no_comma_345, 0, sizeof(_Bool));
right_value422 = (void*)0;
memset(&node_346, 0, sizeof(struct sNode*));
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value432 = (void*)0;
    (come_push_stackframe("05call.c", 1463,4132),parse_sharp_v5(info),come_pop_stackframe());
    if(_if_conditional444=!((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "05call.c", 1465, 4133)), "05call.c", 1465, 4134))->terminated(((struct sNode*)come_null_check(((struct sNode*)come_null_check(node, "05call.c", 1465, 4133)), "05call.c", 1465, 4134))->_protocol_obj)&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1465, 4135)), "05call.c", 1465, 4136))->p, "05call.c", 1465, 4137))==40,    _if_conditional444) {
        ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1466, 4138)), "05call.c", 1466, 4139))->p++;
        (come_push_stackframe("05call.c", 1467,4140),skip_spaces_and_lf(info),come_pop_stackframe());
        (come_push_stackframe("05call.c", 1469,4141),parse_sharp_v5(info),come_pop_stackframe());
        params_340=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((come_push_stackframe("05call.c", 1471, 4143),__exception_result_var_b649=((struct list$1tuple2$2charphsNodephph*)(right_value419=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)(right_value418=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1471, "list$1tuple2$2charphsNodephph"))), "05call.c", 1471, 4142)))))), come_pop_stackframe(), __exception_result_var_b649));
        come_call_finalizer3(right_value418,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value419,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=(_Bool)1,        _while_condtional41) {
            if(_if_conditional445=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1474, 4144)), "05call.c", 1474, 4145))->p, "05call.c", 1474, 4146))==41,            _if_conditional445) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1475, 4147)), "05call.c", 1475, 4148))->p++;
                (come_push_stackframe("05call.c", 1476,4149),skip_spaces_and_lf(info),come_pop_stackframe());
                break;
            }
            p_341=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1480, 4150)), "05call.c", 1480, 4151))->p;
            sline_342=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1481, 4152)), "05call.c", 1481, 4153))->sline;
            err_flag_343=(_Bool)0;
            label_344=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1484, 4154),__exception_result_var_b650=((char*)(right_value420=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b650));
            right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional446=(come_push_stackframe("05call.c", 1485, 4158),__exception_result_var_b651=xisalpha(*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1485, 4155)), "05call.c", 1485, 4156))->p, "05call.c", 1485, 4157))), come_pop_stackframe(), __exception_result_var_b651)||*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1485, 4159)), "05call.c", 1485, 4160))->p, "05call.c", 1485, 4161))==95,            _if_conditional446) {
                __dec_obj145=label_344;
                label_344=(char*)come_increment_ref_count((come_push_stackframe("05call.c", 1486, 4162),__exception_result_var_b652=((char*)(right_value421=parse_word(info))), come_pop_stackframe(), __exception_result_var_b652));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_343=(_Bool)1;
            }
            if(_if_conditional447=err_flag_343==(_Bool)1&&*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1490, 4163)), "05call.c", 1490, 4164))->p, "05call.c", 1490, 4165))==58,            _if_conditional447) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1491, 4166)), "05call.c", 1491, 4167))->p++;
                (come_push_stackframe("05call.c", 1492,4168),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                __dec_obj146=label_344;
                label_344=((void*)0);
                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1497, 4169)), "05call.c", 1497, 4170))->p=p_341;
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1498, 4171)), "05call.c", 1498, 4172))->sline=sline_342;
            }
            no_comma_345=((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1501, 4173)), "05call.c", 1501, 4174))->no_comma;
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1502, 4175)), "05call.c", 1502, 4176))->no_comma=(_Bool)1;
            node_346=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1504, 4177),__exception_result_var_b653=((struct sNode*)(right_value422=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b653));
            if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj147=node_346;
            node_346=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1506, 4178),__exception_result_var_b654=((struct sNode*)(right_value423=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_346),info))), come_pop_stackframe(), __exception_result_var_b654));
            if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1508, 4179)), "05call.c", 1508, 4180))->no_comma=no_comma_345;
            (come_push_stackframe("05call.c", 1510, 4183),__exception_result_var_b655=list$1tuple2$2charphsNodephph_push_back(((struct list$1tuple2$2charphsNodephph*)come_null_check(((struct list$1tuple2$2charphsNodephph*)come_null_check(params_340, "05call.c", 1510, 4181)), "05call.c", 1510, 4182)),(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value425=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value424=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1510, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_344),(struct sNode*)come_increment_ref_count(node_346)))))), come_pop_stackframe(), __exception_result_var_b655);
            come_call_finalizer3(right_value424,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value425,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            (come_push_stackframe("05call.c", 1512,4184),parse_sharp_v5(info),come_pop_stackframe());
            if(_if_conditional448=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1514, 4185)), "05call.c", 1514, 4186))->p, "05call.c", 1514, 4187))==44,            _if_conditional448) {
                ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1515, 4188)), "05call.c", 1515, 4189))->p++;
                (come_push_stackframe("05call.c", 1516,4190),skip_spaces_and_lf(info),come_pop_stackframe());
            }
            else {
                if(_if_conditional449=*((char*)come_null_check(((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1518, 4191)), "05call.c", 1518, 4192))->p, "05call.c", 1518, 4193))==41,                _if_conditional449) {
                    ((struct sInfo*)come_null_check(((struct sInfo*)come_null_check(info, "05call.c", 1519, 4194)), "05call.c", 1519, 4195))->p++;
                    (come_push_stackframe("05call.c", 1520,4196),skip_spaces_and_lf(info),come_pop_stackframe());
                    label_344 = come_decrement_ref_count2(label_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_344 = come_decrement_ref_count2(label_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        (come_push_stackframe("05call.c", 1526,4197),parse_sharp_v5(info),come_pop_stackframe());
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1528, "struct sNode");
        _inf_obj_value11=come_increment_ref_count((come_push_stackframe("05call.c", 1528, 4199),__exception_result_var_b656=((struct sLambdaCall*)(right_value427=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)(right_value426=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1528, "sLambdaCall"))), "05call.c", 1528, 4198))),(struct sNode*)come_increment_ref_count(node),params_340,info))), come_pop_stackframe(), __exception_result_var_b656));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLambdaCall_finalize;
        _inf_value11->clone=(void*)sLambdaCall_clone;
        _inf_value11->compile=(void*)sLambdaCall_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sLambdaCall_kind;
        __result252__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value11));
        come_call_finalizer3(params_340,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value426,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value427,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result252__;
        come_call_finalizer3(params_340,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result253__ = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result253__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
void* __result_obj__;
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional450=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 0, 4200)), "sLambdaCall_finalize", 0, 4201))->sname!=((void*)0),            _if_conditional450) {
                ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 0, 4202)), "sLambdaCall_finalize", 0, 4203))->sname = come_decrement_ref_count2(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 0, 4202)), "sLambdaCall_finalize", 0, 4203))->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional451=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4204)), "sLambdaCall_finalize", 1, 4205))->node!=((void*)0),            _if_conditional451) {
                if(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4206)), "sLambdaCall_finalize", 1, 4207))->node) { ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4206)), "sLambdaCall_finalize", 1, 4207))->node = come_decrement_ref_count2(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4206)), "sLambdaCall_finalize", 1, 4207))->node, ((struct sNode*)((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4206)), "sLambdaCall_finalize", 1, 4207))->node)->finalize, ((struct sNode*)((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 1, 4206)), "sLambdaCall_finalize", 1, 4207))->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional452=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 2, 4208)), "sLambdaCall_finalize", 2, 4209))->params!=((void*)0),            _if_conditional452) {
                come_call_finalizer3(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_finalize", 2, 4210)), "sLambdaCall_finalize", 2, 4211))->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__;
_Bool _if_conditional453;
struct sLambdaCall* __result250__;
void* right_value428;
struct sLambdaCall* result_347;
_Bool _if_conditional454;
_Bool _if_conditional455;
char* __exception_result_var_b657;
void* right_value429;
char* __dec_obj148;
_Bool _if_conditional456;
struct sNode* __exception_result_var_b658;
void* right_value430;
struct sNode* __dec_obj149;
_Bool _if_conditional457;
struct list$1tuple2$2charphsNodephph* __exception_result_var_b659;
void* right_value431;
struct list$1tuple2$2charphsNodephph* __dec_obj150;
struct sLambdaCall* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value428 = (void*)0;
memset(&result_347, 0, sizeof(struct sLambdaCall*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
            if(_if_conditional453=self==(void*)0,            _if_conditional453) {
                __result250__ = __result_obj__ = (void*)0;
                return __result250__;
            }
            result_347=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(right_value428=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"))));
            come_call_finalizer3(right_value428,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional454=self!=((void*)0),            _if_conditional454) {
                ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 4, 4212)), "sLambdaCall_clone", 4, 4213))->sline=((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 4, 4214)), "sLambdaCall_clone", 4, 4215))->sline;
            }
            if(_if_conditional455=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 5, 4216)), "sLambdaCall_clone", 5, 4217))->sname!=((void*)0),            _if_conditional455) {
                __dec_obj148=((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 5, 4218)), "sLambdaCall_clone", 5, 4219))->sname;
                ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 5, 4218)), "sLambdaCall_clone", 5, 4219))->sname=(char*)come_increment_ref_count(((char*)(right_value429=(come_push_stackframe("sLambdaCall_clone", 5, 4222),__exception_result_var_b657=string_clone(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 5, 4220)), "sLambdaCall_clone", 5, 4221))->sname), come_pop_stackframe(), __exception_result_var_b657))));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional456=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 6, 4223)), "sLambdaCall_clone", 6, 4224))->node!=((void*)0),            _if_conditional456) {
                __dec_obj149=((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 6, 4225)), "sLambdaCall_clone", 6, 4226))->node;
                ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 6, 4225)), "sLambdaCall_clone", 6, 4226))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=(come_push_stackframe("sLambdaCall_clone", 6, 4229),__exception_result_var_b658=sNode_clone(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 6, 4227)), "sLambdaCall_clone", 6, 4228))->node), come_pop_stackframe(), __exception_result_var_b658))));
                if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional457=self!=((void*)0)&&((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 7, 4230)), "sLambdaCall_clone", 7, 4231))->params!=((void*)0),            _if_conditional457) {
                __dec_obj150=((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 7, 4232)), "sLambdaCall_clone", 7, 4233))->params;
                ((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(result_347, "sLambdaCall_clone", 7, 4232)), "sLambdaCall_clone", 7, 4233))->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value431=(come_push_stackframe("sLambdaCall_clone", 7, 4236),__exception_result_var_b659=list$1tuple2$2charphsNodephphp_clone(((struct sLambdaCall*)come_null_check(((struct sLambdaCall*)come_null_check(self, "sLambdaCall_clone", 7, 4234)), "sLambdaCall_clone", 7, 4235))->params), come_pop_stackframe(), __exception_result_var_b659))));
                come_call_finalizer3(__dec_obj150,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value431,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result251__ = __result_obj__ = result_347;
            come_call_finalizer3(result_347,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
            return __result251__;
            come_call_finalizer3(result_347,sLambdaCall_finalize, 0, 0, 0, 0, (void*)0);
}

