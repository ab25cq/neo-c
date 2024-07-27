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
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

char* sLambdaCall_kind(struct sLambdaCall* self);

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);

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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1903, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1910, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1917, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1924, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1931, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1938, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1954, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1964, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1974, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1984, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1994, "smart_pointer$1long"))));
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
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2165, "smart_pointer$1char")))),self,len)));
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
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2170, "smart_pointer$1short")))),self,len)));
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
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2175, "smart_pointer$1int")))),self,len)));
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
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2180, "smart_pointer$1long")))),self,len)));
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
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2185, "smart_pointer$1float")))),self,len)));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2190, "smart_pointer$1double")))),self,len)));
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
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2195, "list$1char")))),len,self)));
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
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2200, "list$1short")))),len,self)));
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
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2205, "list$1int")))),len,self)));
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
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2210, "list$1long")))),len,self)));
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
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2215, "list$1float")))),len,self)));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2220, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2006, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 223, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 233, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 243, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 223, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 233, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 243, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 223, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 233, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 243, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 223, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 233, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 243, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 223, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 233, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 243, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 223, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 233, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 243, "list_item$1double"))));
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










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNode* __dec_obj12;
void* right_value80;
char* __dec_obj13;
struct sReturnNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj13=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(value_source))));
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
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sReturnNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result53__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional23;
struct sFun* come_fun_47;
void* right_value117;
struct sType* result_type_78;
void* right_value118;
struct sType* result_type2_79;
struct sType* result_type3_80;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool __result72__;
void* right_value119;
struct CVALUE* __exception_result_var_b1;
struct CVALUE* come_value_81;
_Bool _if_conditional123;
int right_value_id_82;
_Bool _if_conditional124;
void* right_value120;
struct sType* come_value_type_83;
void* right_value121;
struct sType* __dec_obj37;
void* right_value122;
char* var_name_85;
int num_result_stack_86;
_Bool _if_conditional125;
void* right_value123;
void* right_value124;
_Bool _if_conditional126;
void* right_value125;
struct sFun* come_fun_87;
_Bool _if_conditional127;
void* right_value126;
_Bool __result73__;
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
    if(self->value) {
        come_fun_47=info->come_fun;
        result_type_78=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(come_fun_47->mResultType))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type2_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=solve_generics(result_type_78,info->generics_type,info))));
        come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        if(result_type2_79->mNoSolvedGenericsType->v1) {
            result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_80=result_type2_79;
        }
        if(_if_conditional120=!node_compile(self->value,info),        _if_conditional120) {
            __result72__ = (_Bool)0;
            come_call_finalizer3(result_type_78,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result72__;
        }
        come_value_81=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 39, 0),__exception_result_var_b1=((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
        come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        if(_if_conditional123=come_value_81->type->mHeap&&come_value_81->var==((void*)0),        _if_conditional123) {
            right_value_id_82=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_81->c_value));
            if(_if_conditional124=right_value_id_82!=-1,            _if_conditional124) {
                remove_object_from_right_values(right_value_id_82,info);
            }
        }
        come_value_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=solve_generics(come_value_81->type,info->generics_type,info))));
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj37=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_81->type))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, __result_obj__);
        static int num_result_84=0;
        var_name_85=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("__result%d__",++num_result_84))));
        right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        num_result_stack_86=num_result_84;
        if(_if_conditional125=result_type2_79->mPointerNum>0,        _if_conditional125) {
            check_assign_type("result type",result_type2_79,come_value_81->type,come_value_81,(_Bool)0,(_Bool)1,info);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value123=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
            right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_85,come_value_81->c_value);
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value124=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
            right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code(info,"%s = %s;\n",var_name_85,come_value_81->c_value);
        }
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(_if_conditional126=!gComeC&&string_operator_equals(info->come_fun->mName,"main"),        _if_conditional126) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value125=xsprintf("come_heap_final();\n"))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return __result%d__;\n",num_result_stack_86);
        come_call_finalizer3(result_type_78,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_85 = come_decrement_ref_count2(var_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_87=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_87->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(_if_conditional127=!gComeC&&string_operator_equals(info->come_fun->mName,"main"),        _if_conditional127) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value126=xsprintf("come_heap_final();\n"))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    __result73__ = (_Bool)1;
    return __result73__;
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
_Bool _if_conditional24;
struct sType* __result54__;
void* right_value82;
struct sType* result_48;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value89;
struct list$1sTypeph* __dec_obj17;
_Bool _if_conditional47;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional51;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj20;
_Bool _if_conditional52;
void* right_value94;
char* __dec_obj21;
_Bool _if_conditional53;
void* right_value95;
struct list$1sTypeph* __dec_obj22;
_Bool _if_conditional54;
void* right_value103;
struct list$1sNodeph* __dec_obj26;
_Bool _if_conditional67;
_Bool _if_conditional68;
void* right_value104;
struct list$1sTypeph* __dec_obj27;
_Bool _if_conditional69;
void* right_value111;
struct list$1charph* __dec_obj31;
_Bool _if_conditional73;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj32;
_Bool _if_conditional74;
_Bool _if_conditional75;
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
void* right_value114;
struct sNode* __dec_obj34;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
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
void* right_value116;
char* __dec_obj36;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sType* __result71__;
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
            if(_if_conditional24=self==(void*)0,            _if_conditional24) {
                __result54__ = __result_obj__ = (void*)0;
                return __result54__;
            }
            result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional42=self!=((void*)0),            _if_conditional42) {
                result_48->mClass=self->mClass;
            }
            if(_if_conditional43=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional43) {
                __dec_obj17=result_48->mMultipleTypes;
                result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional47=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional47) {
                __dec_obj19=result_48->mNoSolvedGenericsType;
                result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional51=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional51) {
                __dec_obj20=result_48->mOriginalLoadVarType;
                result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional52=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional52) {
                __dec_obj21=result_48->mGenericsName;
                result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->mGenericsName))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional53=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional53) {
                __dec_obj22=result_48->mGenericsTypes;
                result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value95,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional54=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional54) {
                __dec_obj26=result_48->mArrayNum;
                result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional67=self!=((void*)0),            _if_conditional67) {
                result_48->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(_if_conditional68=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional68) {
                __dec_obj27=result_48->mParamTypes;
                result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional69=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional69) {
                __dec_obj31=result_48->mParamNames;
                result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional73=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional73) {
                __dec_obj32=result_48->mResultType;
                result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional74=self!=((void*)0),            _if_conditional74) {
                result_48->mVarArgs=self->mVarArgs;
            }
            if(_if_conditional75=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional75) {
                __dec_obj33=result_48->mAlignas;
                result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mAlignas))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional76=self!=((void*)0),            _if_conditional76) {
                result_48->mUnsigned=self->mUnsigned;
            }
            if(_if_conditional77=self!=((void*)0),            _if_conditional77) {
                result_48->mShort=self->mShort;
            }
            if(_if_conditional78=self!=((void*)0),            _if_conditional78) {
                result_48->mLong=self->mLong;
            }
            if(_if_conditional79=self!=((void*)0),            _if_conditional79) {
                result_48->mLongLong=self->mLongLong;
            }
            if(_if_conditional80=self!=((void*)0),            _if_conditional80) {
                result_48->mConstant=self->mConstant;
            }
            if(_if_conditional81=self!=((void*)0),            _if_conditional81) {
                result_48->mRegister=self->mRegister;
            }
            if(_if_conditional82=self!=((void*)0),            _if_conditional82) {
                result_48->mVolatile=self->mVolatile;
            }
            if(_if_conditional83=self!=((void*)0),            _if_conditional83) {
                result_48->mStatic=self->mStatic;
            }
            if(_if_conditional84=self!=((void*)0),            _if_conditional84) {
                result_48->mUniq=self->mUniq;
            }
            if(_if_conditional85=self!=((void*)0),            _if_conditional85) {
                result_48->mRecord=self->mRecord;
            }
            if(_if_conditional86=self!=((void*)0),            _if_conditional86) {
                result_48->mExtern=self->mExtern;
            }
            if(_if_conditional87=self!=((void*)0),            _if_conditional87) {
                result_48->mRestrict=self->mRestrict;
            }
            if(_if_conditional88=self!=((void*)0),            _if_conditional88) {
                result_48->mImmutable=self->mImmutable;
            }
            if(_if_conditional89=self!=((void*)0),            _if_conditional89) {
                result_48->mHeap=self->mHeap;
            }
            if(_if_conditional90=self!=((void*)0),            _if_conditional90) {
                result_48->mDummyHeap=self->mDummyHeap;
            }
            if(_if_conditional91=self!=((void*)0),            _if_conditional91) {
                result_48->mDelegate=self->mDelegate;
            }
            if(_if_conditional92=self!=((void*)0),            _if_conditional92) {
                result_48->mShare=self->mShare;
            }
            if(_if_conditional93=self!=((void*)0),            _if_conditional93) {
                result_48->mClone=self->mClone;
            }
            if(_if_conditional94=self!=((void*)0),            _if_conditional94) {
                result_48->mNoHeap=self->mNoHeap;
            }
            if(_if_conditional95=self!=((void*)0),            _if_conditional95) {
                result_48->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(_if_conditional96=self!=((void*)0),            _if_conditional96) {
                result_48->mRefference=self->mRefference;
            }
            if(_if_conditional97=self!=((void*)0),            _if_conditional97) {
                result_48->mException=self->mException;
            }
            if(_if_conditional98=self!=((void*)0),            _if_conditional98) {
                result_48->mPointerNum=self->mPointerNum;
            }
            if(_if_conditional99=self!=((void*)0),            _if_conditional99) {
                result_48->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(_if_conditional100=self!=((void*)0),            _if_conditional100) {
                result_48->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(_if_conditional101=self!=((void*)0),            _if_conditional101) {
                result_48->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(_if_conditional102=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional102) {
                __dec_obj34=result_48->mSizeNum;
                result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mSizeNum))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional103=self!=((void*)0),            _if_conditional103) {
                result_48->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(_if_conditional104=self!=((void*)0),            _if_conditional104) {
                result_48->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(_if_conditional105=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional105) {
                __dec_obj35=result_48->mOriginalTypeName;
                result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mOriginalTypeName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional106=self!=((void*)0),            _if_conditional106) {
                result_48->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(_if_conditional107=self!=((void*)0),            _if_conditional107) {
                result_48->mFunctionParam=self->mFunctionParam;
            }
            if(_if_conditional108=self!=((void*)0),            _if_conditional108) {
                result_48->mAllocaValue=self->mAllocaValue;
            }
            if(_if_conditional109=self!=((void*)0),            _if_conditional109) {
                result_48->mGenericsStruct=self->mGenericsStruct;
            }
            if(_if_conditional110=self!=((void*)0),            _if_conditional110) {
                result_48->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(_if_conditional111=self!=((void*)0),            _if_conditional111) {
                result_48->mComeMemCore=self->mComeMemCore;
            }
            if(_if_conditional112=self!=((void*)0),            _if_conditional112) {
                result_48->mInline=self->mInline;
            }
            if(_if_conditional113=self!=((void*)0),            _if_conditional113) {
                result_48->mNullValue=self->mNullValue;
            }
            if(_if_conditional114=self!=((void*)0),            _if_conditional114) {
                result_48->mGuardValue=self->mGuardValue;
            }
            if(_if_conditional115=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional115) {
                __dec_obj36=result_48->mAsmName;
                result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mAsmName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional116=self!=((void*)0),            _if_conditional116) {
                result_48->mArrayPointerType=self->mArrayPointerType;
            }
            if(_if_conditional117=self!=((void*)0),            _if_conditional117) {
                result_48->mLambdaArray=self->mLambdaArray;
            }
            if(_if_conditional118=self!=((void*)0),            _if_conditional118) {
                result_48->mNoNumberArray=self->mNoNumberArray;
            }
            __result71__ = __result_obj__ = result_48;
            come_call_finalizer3(result_48,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                if(_if_conditional25=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),                _if_conditional25) {
                    come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional27=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                _if_conditional27) {
                    come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional29=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                _if_conditional29) {
                    come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional30=self!=((void*)0)&&self->mGenericsName!=((void*)0),                _if_conditional30) {
                    self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional31=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                _if_conditional31) {
                    come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional32=self!=((void*)0)&&self->mArrayNum!=((void*)0),                _if_conditional32) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional34=self!=((void*)0)&&self->mParamTypes!=((void*)0),                _if_conditional34) {
                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional35=self!=((void*)0)&&self->mParamNames!=((void*)0),                _if_conditional35) {
                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional37=self!=((void*)0)&&self->mResultType!=((void*)0),                _if_conditional37) {
                    come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional38=self!=((void*)0)&&self->mAlignas!=((void*)0),                _if_conditional38) {
                    if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional39=self!=((void*)0)&&self->mSizeNum!=((void*)0),                _if_conditional39) {
                    if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional40=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                _if_conditional40) {
                    self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional41=self!=((void*)0)&&self->mAsmName!=((void*)0),                _if_conditional41) {
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
                        it_49=self->head;
                        while(_while_condtional7=it_49!=((void*)0),                        _while_condtional7) {
                            prev_it_50=it_49;
                            it_49=it_49->next;
                            come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional26) {
                                    come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional28=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional28) {
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
                        it_51=self->head;
                        while(_while_condtional8=it_51!=((void*)0),                        _while_condtional8) {
                            prev_it_52=it_51;
                            it_51=it_51->next;
                            come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional33=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional33) {
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
                        it_53=self->head;
                        while(_while_condtional9=it_53!=((void*)0),                        _while_condtional9) {
                            prev_it_54=it_53;
                            it_53=it_53->next;
                            come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional36;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional36=self!=((void*)0)&&self->item!=((void*)0),                                _if_conditional36) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
struct list$1sTypeph* __result55__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
_Bool _while_condtional10;
void* right_value88;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                    if(_if_conditional44=self==((void*)0),                    _if_conditional44) {
                        __result55__ = __result_obj__ = ((void*)0);
                        return __result55__;
                    }
                    result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 139, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_56=self->head;
                    while(_while_condtional10=it_56!=((void*)0),                    _while_condtional10) {
                        list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(it_56->item)))));
                        come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_56=it_56->next;
                    }
                    __result58__ = __result_obj__ = result_55;
                    come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result58__;
                    come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result56__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional45;
void* right_value85;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj14;
_Bool _if_conditional46;
void* right_value86;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj15;
void* right_value87;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj16;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional45=self->len==0,                            _if_conditional45) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 153, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=((void*)0);
                                litem_57->next=((void*)0);
                                __dec_obj14=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_57;
                                self->head=litem_57;
                            }
                            else {
                                if(_if_conditional46=self->len==1,                                _if_conditional46) {
                                    litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 163, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_58->prev=self->head;
                                    litem_58->next=((void*)0);
                                    __dec_obj15=litem_58->item;
                                    litem_58->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_58;
                                    self->head->next=litem_58;
                                }
                                else {
                                    litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 173, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_59->prev=self->tail;
                                    litem_59->next=((void*)0);
                                    __dec_obj16=litem_59->item;
                                    litem_59->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_59;
                                    self->tail=litem_59;
                                }
                            }
                            self->len++;
                            __result57__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result57__;
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
                    it_60=self->head;
                    while(_while_condtional11=it_60!=((void*)0),                    _while_condtional11) {
                        prev_it_61=it_60;
                        it_60=it_60->next;
                        come_call_finalizer3(prev_it_61,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional48;
struct tuple1$1sTypeph* __result59__;
void* right_value90;
struct tuple1$1sTypeph* result_62;
_Bool _if_conditional50;
void* right_value91;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                    if(_if_conditional48=self==(void*)0,                    _if_conditional48) {
                        __result59__ = __result_obj__ = (void*)0;
                        return __result59__;
                    }
                    result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value90,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional50=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional50) {
                        __dec_obj18=result_62->v1;
                        result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result60__ = __result_obj__ = result_62;
                    come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result60__;
                    come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional49;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional49=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional49) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional55;
struct list$1sNodeph* __result61__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
_Bool _while_condtional12;
void* right_value102;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                    if(_if_conditional55=self==((void*)0),                    _if_conditional55) {
                        __result61__ = __result_obj__ = ((void*)0);
                        return __result61__;
                    }
                    result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 139, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_64=self->head;
                    while(_while_condtional12=it_64!=((void*)0),                    _while_condtional12) {
                        list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(it_64->item)))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_64=it_64->next;
                    }
                    __result66__ = __result_obj__ = result_63;
                    come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result66__;
                    come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result62__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result62__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional56;
void* right_value98;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj23;
_Bool _if_conditional57;
void* right_value99;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj24;
void* right_value100;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional56=self->len==0,                            _if_conditional56) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 153, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_65->prev=((void*)0);
                                litem_65->next=((void*)0);
                                __dec_obj23=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_65;
                                self->head=litem_65;
                            }
                            else {
                                if(_if_conditional57=self->len==1,                                _if_conditional57) {
                                    litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 163, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_66->prev=self->head;
                                    litem_66->next=((void*)0);
                                    __dec_obj24=litem_66->item;
                                    litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_66;
                                    self->head->next=litem_66;
                                }
                                else {
                                    litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 173, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_67->prev=self->tail;
                                    litem_67->next=((void*)0);
                                    __dec_obj25=litem_67->item;
                                    litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_67;
                                    self->tail=litem_67;
                                }
                            }
                            self->len++;
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
struct sNode* result_68;
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
memset(&result_68, 0, sizeof(struct sNode*));
                            if(_if_conditional58=self==(void*)0,                            _if_conditional58) {
                                __result64__ = __result_obj__ = (void*)0;
                                return __result64__;
                            }
                            result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(_if_conditional59=self!=((void*)0)&&self->clone!=((void*)0),                            _if_conditional59) {
                                result_68->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(_if_conditional60=self!=((void*)0),                            _if_conditional60) {
                                result_68->finalize=self->finalize;
                            }
                            if(_if_conditional61=self!=((void*)0),                            _if_conditional61) {
                                result_68->clone=self->clone;
                            }
                            if(_if_conditional62=self!=((void*)0),                            _if_conditional62) {
                                result_68->compile=self->compile;
                            }
                            if(_if_conditional63=self!=((void*)0),                            _if_conditional63) {
                                result_68->sline=self->sline;
                            }
                            if(_if_conditional64=self!=((void*)0),                            _if_conditional64) {
                                result_68->sname=self->sname;
                            }
                            if(_if_conditional65=self!=((void*)0),                            _if_conditional65) {
                                result_68->terminated=self->terminated;
                            }
                            if(_if_conditional66=self!=((void*)0),                            _if_conditional66) {
                                result_68->kind=self->kind;
                            }
                            __result65__ = __result_obj__ = result_68;
                            if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result65__;
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
                    it_69=self->head;
                    while(_while_condtional13=it_69!=((void*)0),                    _while_condtional13) {
                        prev_it_70=it_69;
                        it_69=it_69->next;
                        come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional70;
struct list$1charph* __result67__;
void* right_value105;
void* right_value106;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
_Bool _while_condtional14;
void* right_value110;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                    if(_if_conditional70=self==((void*)0),                    _if_conditional70) {
                        __result67__ = __result_obj__ = ((void*)0);
                        return __result67__;
                    }
                    result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 139, "list$1charph"))))))));
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_72=self->head;
                    while(_while_condtional14=it_72!=((void*)0),                    _while_condtional14) {
                        list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value110=string_clone(it_72->item)))));
                        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_72=it_72->next;
                    }
                    __result70__ = __result_obj__ = result_71;
                    come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result68__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result68__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional71;
void* right_value107;
struct list_item$1charph* litem_73;
char* __dec_obj28;
_Bool _if_conditional72;
void* right_value108;
struct list_item$1charph* litem_74;
char* __dec_obj29;
void* right_value109;
struct list_item$1charph* litem_75;
char* __dec_obj30;
struct list$1charph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional71=self->len==0,                            _if_conditional71) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 153, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_73->prev=((void*)0);
                                litem_73->next=((void*)0);
                                __dec_obj28=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_73;
                                self->head=litem_73;
                            }
                            else {
                                if(_if_conditional72=self->len==1,                                _if_conditional72) {
                                    litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 163, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_74->prev=self->head;
                                    litem_74->next=((void*)0);
                                    __dec_obj29=litem_74->item;
                                    litem_74->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_74;
                                    self->head->next=litem_74;
                                }
                                else {
                                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 173, "list_item$1charph"))));
                                    come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_75->prev=self->tail;
                                    litem_75->next=((void*)0);
                                    __dec_obj30=litem_75->item;
                                    litem_75->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_75;
                                    self->tail=litem_75;
                                }
                            }
                            self->len++;
                            __result69__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result69__;
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
                    it_76=self->head;
                    while(_while_condtional15=it_76!=((void*)0),                    _while_condtional15) {
                        prev_it_77=it_76;
                        it_76=it_76->next;
                        come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional121;
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional121=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional121) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional122=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional122) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
struct sLineNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    ((struct sNodeBase*)(right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* right_value128;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sLineNode")));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value129;
struct CVALUE* come_value_88;
void* right_value130;
char* __dec_obj38;
void* right_value131;
void* right_value132;
struct sType* __dec_obj39;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 113, "CVALUE"))));
    come_call_finalizer3(right_value129,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj38=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%d",info->sline))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj39=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 116, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_88->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    add_come_last_code(info,"%s;\n",come_value_88->c_value);
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
        if(_if_conditional129=self->len==0,        _if_conditional129) {
            litem_89=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 223, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_89->prev=((void*)0);
            litem_89->next=((void*)0);
            __dec_obj40=litem_89->item;
            litem_89->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_89;
            self->head=litem_89;
        }
        else {
            if(_if_conditional131=self->len==1,            _if_conditional131) {
                litem_90=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 233, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value134,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_90->prev=self->head;
                litem_90->next=((void*)0);
                __dec_obj41=litem_90->item;
                litem_90->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_90;
                self->head->next=litem_90;
            }
            else {
                litem_91=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 243, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value135,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_91->prev=self->tail;
                litem_91->next=((void*)0);
                __dec_obj42=litem_91->item;
                litem_91->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_91;
                self->tail=litem_91;
            }
        }
        self->len++;
        __result76__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result76__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional130=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional130) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
struct sSNameNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    ((struct sNodeBase*)(right_value136=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value136,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result78__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* right_value137;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value137=__builtin_string("sSNameNode")));
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct CVALUE* come_value_92;
void* right_value139;
char* __dec_obj43;
void* right_value140;
void* right_value141;
struct sType* __dec_obj44;
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 141, "CVALUE"))));
    come_call_finalizer3(right_value138,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=come_value_92->c_value;
    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("\"%s\"",info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 144, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_92->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
struct sFuncNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    ((struct sNodeBase*)(right_value142=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value142,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* right_value143;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sFuncNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct CVALUE* come_value_93;
void* right_value145;
char* __dec_obj45;
void* right_value146;
void* right_value147;
struct sType* __dec_obj46;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 169, "CVALUE"))));
    come_call_finalizer3(right_value144,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj45=come_value_93->c_value;
    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj46=come_value_93->type;
    come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 172, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value146,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_93->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
    add_come_last_code(info,"%s;\n",come_value_93->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct sCallerFuncNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    ((struct sNodeBase*)(right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value148,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* right_value149;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sCallerFuncNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct CVALUE* come_value_94;
_Bool _if_conditional135;
void* right_value151;
char* __dec_obj47;
void* right_value152;
char* __dec_obj48;
void* right_value153;
void* right_value154;
struct sType* __dec_obj49;
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
    if(info->caller_fun) {
        __dec_obj47=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj48=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("\"\""))));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj49=come_value_94->type;
    come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 206, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_94->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    add_come_last_code(info,"%s;\n",come_value_94->c_value);
    __result86__ = (_Bool)1;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value155;
struct sCallerLineNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    ((struct sNodeBase*)(right_value155=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
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
char* __dec_obj50;
void* right_value158;
void* right_value159;
struct sType* __dec_obj51;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 227, "CVALUE"))));
    come_call_finalizer3(right_value156,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%d",info->caller_line))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value158=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 230, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value159,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_95->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    __result88__ = (_Bool)1;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* right_value160;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sCallerLineNode")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct sCallerSNameNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    ((struct sNodeBase*)(right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
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
char* __dec_obj52;
void* right_value164;
void* right_value165;
struct sType* __dec_obj53;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 255, "CVALUE"))));
    come_call_finalizer3(right_value162,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=come_value_96->c_value;
    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value164=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 258, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_96->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    __result91__ = (_Bool)1;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* right_value166;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sCallerSNameNode")));
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value167;
char* fun_name3_98;
struct list$1sTypeph* method_generics_types_before_99;
struct list$1sTypeph* __dec_obj54;
struct sGenericsFun* generics_fun_102;
_Bool _if_conditional152;
void* right_value168;
_Bool _if_conditional153;
void* right_value169;
char* __result97__;
struct list$1sTypeph* __dec_obj55;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
memset(&fun_name3_98, 0, sizeof(char*));
memset(&method_generics_types_before_99, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_102, 0, sizeof(struct sGenericsFun*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    static int num_method_generics_97=0;
    fun_name3_98=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s_method_generics%d",fun_name,num_method_generics_97++))));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    method_generics_types_before_99=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj54=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_102=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(generics_fun_102) {
        if(_if_conditional153=!create_method_generics_fun((char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(fun_name3_98)))),generics_fun_102,info),        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional153) {
            err_msg(info,"%s not found",fun_name3_98);
            __result97__ = __result_obj__ = ((char*)(right_value169=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result97__;
        }
    }
    __dec_obj55=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_99);
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
unsigned int hash_100;
unsigned int it_101;
_Bool _while_condtional16;
_Bool _if_conditional138;
_Bool _if_conditional139;
struct sGenericsFun* __result93__;
_Bool _if_conditional150;
_Bool _if_conditional151;
struct sGenericsFun* __result94__;
struct sGenericsFun* __result95__;
struct sGenericsFun* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_100, 0, sizeof(unsigned int));
memset(&it_101, 0, sizeof(unsigned int));
        hash_100=string_get_hash_key(((char*)key))%self->size;
        it_101=hash_100;
        while(_while_condtional16=(_Bool)1,        _while_condtional16) {
            if(_if_conditional138=self->item_existance[it_101],            _if_conditional138) {
                if(_if_conditional139=string_equals(self->keys[it_101],key),                _if_conditional139) {
                    __result93__ = __result_obj__ = self->items[it_101];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result93__;
                }
                it_101++;
                if(_if_conditional150=it_101>=self->size,                _if_conditional150) {
                    it_101=0;
                }
                else {
                    if(_if_conditional151=it_101==hash_100,                    _if_conditional151) {
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
                        if(_if_conditional140=self!=((void*)0)&&self->mImplType!=((void*)0),                        _if_conditional140) {
                            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional141=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                        _if_conditional141) {
                            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional142=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                        _if_conditional142) {
                            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional143=self!=((void*)0)&&self->mName!=((void*)0),                        _if_conditional143) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional144=self!=((void*)0)&&self->mResultType!=((void*)0),                        _if_conditional144) {
                            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional145=self!=((void*)0)&&self->mParamTypes!=((void*)0),                        _if_conditional145) {
                            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional146=self!=((void*)0)&&self->mParamNames!=((void*)0),                        _if_conditional146) {
                            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional147=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                        _if_conditional147) {
                            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional148=self!=((void*)0)&&self->mBlock!=((void*)0),                        _if_conditional148) {
                            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional149=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                        _if_conditional149) {
                            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value170;
void* right_value171;
char* __dec_obj56;
void* right_value181;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct list$1sTypeph* __dec_obj63;
struct sFunCallNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value181 = (void*)0;
    ((struct sNodeBase*)(right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value170,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(fun_name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value181=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->guard_break=guard_break;
    __dec_obj63=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
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
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value182=__builtin_string("sFunCallNode")));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
void* __result_obj__;
char* fun_name_113;
struct list$1tuple2$2charphsNodephph* params_114;
struct sVar* var__115;
_Bool _if_conditional175;
_Bool _if_conditional176;
struct sType* lambda_type_116;
void* right_value183;
struct sType* result_type_117;
void* right_value184;
void* right_value185;
struct list$1CVALUEph* come_params_120;
_Bool _if_conditional179;
_Bool __result112__;
int i_121;
struct list$1tuple2$2charphsNodephph* o2_saved_122;
struct tuple2$2charphsNodeph* it_125;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_128;
struct sNode* node_129;
_Bool _if_conditional184;
_Bool __result120__;
void* right_value186;
struct CVALUE* __exception_result_var_b2;
struct CVALUE* come_value_130;
_Bool _if_conditional187;
void* right_value187;
void* right_value188;
void* right_value189;
_Bool _if_conditional188;
void* right_value190;
void* right_value191;
struct buffer* buf_134;
int j_135;
struct list$1CVALUEph* o2_saved_136;
struct CVALUE* it_139;
_Bool _if_conditional194;
void* right_value192;
struct CVALUE* come_value_142;
void* right_value193;
char* __dec_obj64;
_Bool _if_conditional195;
void* right_value194;
char* __dec_obj65;
void* right_value195;
struct sType* __dec_obj66;
_Bool _if_conditional196;
void* right_value196;
char* __dec_obj67;
_Bool _if_conditional197;
void* right_value197;
void* right_value198;
struct list$1CVALUEph* come_params_143;
struct list$1tuple2$2charphsNodephph* o2_saved_144;
struct tuple2$2charphsNodeph* it_145;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_146;
struct sNode* node_147;
_Bool _if_conditional198;
_Bool __result132__;
void* right_value199;
struct CVALUE* __exception_result_var_b3;
struct CVALUE* come_value_148;
void* right_value200;
void* right_value201;
struct buffer* buf_149;
int j_150;
struct list$1CVALUEph* o2_saved_151;
struct CVALUE* it_152;
_Bool _if_conditional199;
void* right_value202;
struct CVALUE* come_value_153;
void* right_value203;
char* __dec_obj68;
_Bool _if_conditional200;
void* right_value204;
void* right_value205;
struct sType* __dec_obj69;
_Bool _if_conditional201;
void* right_value206;
void* right_value207;
struct sType* __dec_obj70;
_Bool _if_conditional202;
void* right_value208;
void* right_value209;
struct sType* __dec_obj71;
_Bool _if_conditional203;
void* right_value210;
void* right_value211;
struct sType* __dec_obj72;
_Bool __result133__;
_Bool _if_conditional204;
void* right_value212;
char* __dec_obj73;
_Bool _if_conditional205;
void* right_value213;
char* __dec_obj74;
_Bool _if_conditional206;
char* p_154;
int version_155;
_Bool _while_condtional22;
_Bool _if_conditional207;
char* p2_156;
_Bool _while_condtional23;
int i_158;
void* right_value214;
char* new_fun_name_159;
_Bool _if_conditional227;
void* right_value215;
char* __dec_obj75;
_Bool _if_conditional228;
void* right_value216;
char* new_fun_name_163;
_Bool _if_conditional229;
void* right_value217;
char* __dec_obj76;
_Bool _if_conditional230;
_Bool __result138__;
int i_164;
void* right_value218;
char* new_fun_name_165;
_Bool _if_conditional231;
void* right_value219;
char* __dec_obj77;
struct sFun* fun_168;
_Bool _if_conditional236;
_Bool __result143__;
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
struct sType* __dec_obj81;
void* right_value230;
void* right_value231;
struct list$1CVALUEph* come_params_181;
int i_182;
struct list$1tuple2$2charphsNodephph* o2_saved_186;
struct tuple2$2charphsNodeph* it_187;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_188;
struct sNode* node_189;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool __result153__;
void* right_value235;
struct CVALUE* __exception_result_var_b4;
struct CVALUE* come_value_190;
int n_191;
struct list$1charph* o2_saved_192;
char* it_195;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value236;
void* right_value237;
void* right_value238;
_Bool _if_conditional254;
int i_200;
struct list$1tuple2$2charphsNodephph* o2_saved_201;
struct tuple2$2charphsNodeph* it_202;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_203;
struct sNode* node_204;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool __result163__;
void* right_value239;
struct CVALUE* __exception_result_var_b5;
struct CVALUE* come_value_205;
_Bool _while_condtional27;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
_Bool __result166__;
void* right_value240;
struct CVALUE* __exception_result_var_b6;
struct CVALUE* come_value_209;
_Bool _while_condtional29;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value241;
void* right_value242;
void* right_value243;
_Bool _if_conditional267;
_Bool _while_condtional30;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value244;
char* default_param_213;
char* param_name_214;
_Bool _if_conditional272;
struct buffer* source_215;
char* p_216;
char* head_217;
int sline_218;
void* right_value245;
struct buffer* __dec_obj86;
void* right_value246;
struct sNode* node_219;
_Bool _if_conditional273;
_Bool __result169__;
struct buffer* __dec_obj87;
void* right_value247;
struct CVALUE* __exception_result_var_b7;
struct CVALUE* come_value_220;
_Bool _if_conditional274;
void* right_value248;
void* right_value249;
void* right_value250;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool __result170__;
_Bool _if_conditional277;
_Bool __result171__;
void* right_value251;
void* right_value252;
struct buffer* buf_221;
int j_222;
struct list$1CVALUEph* o2_saved_223;
struct CVALUE* it_224;
_Bool _if_conditional278;
void* right_value253;
struct CVALUE* come_value_225;
void* right_value254;
char* __dec_obj88;
void* right_value255;
struct sType* __dec_obj89;
_Bool _if_conditional279;
void* right_value256;
char* __dec_obj90;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value257;
char* __dec_obj91;
_Bool _if_conditional282;
void* right_value258;
void* right_value259;
char* __dec_obj92;
_Bool __result172__;
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
    fun_name_113=(char*)come_increment_ref_count(self->fun_name);
    params_114=self->params;
    var__115=get_variable_from_table(info->lv_table,fun_name_113);
    if(_if_conditional175=var__115==((void*)0),    _if_conditional175) {
        var__115=get_variable_from_table(info->gv_table,fun_name_113);
    }
    if(var__115) {
        lambda_type_116=var__115->mType;
        result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(lambda_type_116->mResultType->v1))));
        come_call_finalizer3(right_value183,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_117->mStatic=(_Bool)0;
        come_params_120=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value184=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 330, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value184,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value185,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional179=list$1sTypeph_length(lambda_type_116->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_114)&&!lambda_type_116->mVarArgs,        _if_conditional179) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(lambda_type_116->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
            __result112__ = (_Bool)0;
            come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result112__;
        }
        i_121=0;
        for(        o2_saved_122=(params_114),it_125=list$1tuple2$2charphsNodephph_begin((o2_saved_122));        !list$1tuple2$2charphsNodephph_end((o2_saved_122));        it_125=list$1tuple2$2charphsNodephph_next((o2_saved_122))        ){
            multiple_assign_var1=it_125;
            label_128=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(_if_conditional184=!node_compile(node_129,info),            _if_conditional184) {
                __result120__ = (_Bool)0;
                label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result120__;
            }
            come_value_130=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 345, 1),__exception_result_var_b2=((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
            come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional187=lambda_type_116->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 346, 2))==((void*)0),            _if_conditional187) {
            }
            else {
                check_assign_type(((char*)(right_value189=xsprintf("\%s calling param #\%s",((char*)(right_value187=string_to_string(fun_name_113))),((char*)(right_value188=int_to_string(i_121)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 349, 3)),come_value_130->type,come_value_130,(_Bool)0,(_Bool)1,info);
                right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional188=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 350, 4))->mHeap&&come_value_130->type->mHeap,                _if_conditional188) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 351, 5)),come_value_130->type,come_value_130,info);
                }
            }
            list$1CVALUEph_push_back(come_params_120,(struct CVALUE*)come_increment_ref_count(come_value_130));
            dec_stack_ptr(1,info);
            i_121++;
            label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value191=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value190=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 361, "buffer"))))))));
        come_call_finalizer3(right_value190,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value191,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_134,var__115->mCValueName);
        buffer_append_str(buf_134,"(");
        j_135=0;
        for(        o2_saved_136=(struct list$1CVALUEph*)come_increment_ref_count((come_params_120)),it_139=list$1CVALUEph_begin((o2_saved_136));        !list$1CVALUEph_end((o2_saved_136));        it_139=list$1CVALUEph_next((o2_saved_136))        ){
            buffer_append_str(buf_134,it_139->c_value);
            if(_if_conditional194=j_135!=list$1CVALUEph_length(come_params_120)-1,            _if_conditional194) {
                buffer_append_str(buf_134,",");
            }
            j_135++;
        }
        come_call_finalizer3(o2_saved_136,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_134,")");
        come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 378, "CVALUE"))));
        come_call_finalizer3(right_value192,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=come_value_142->c_value;
        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value193=buffer_to_string(buf_134))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(lambda_type_116->mResultType->v1->mHeap) {
            __dec_obj65=come_value_142->c_value;
            come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value194=append_object_to_right_values(come_value_142->c_value,(struct sType*)come_increment_ref_count(lambda_type_116->mResultType->v1),info))));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj66=come_value_142->type;
        come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(result_type_117))));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value195,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_142->type->mStatic=(_Bool)0;
        come_value_142->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_142->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
        come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional196=list$1sTypeph_length(self->method_generics_types)>0,        _if_conditional196) {
            __dec_obj67=fun_name_113;
            fun_name_113=(char*)come_increment_ref_count(((char*)(right_value196=make_method_generics_function((char*)come_increment_ref_count(fun_name_113),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional197=string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset")||string_operator_equals(fun_name_113,"__builtin_ffs")||string_operator_equals(fun_name_113,"__builtin_ffsl")||string_operator_equals(fun_name_113,"__builtin_ffsll"),        _if_conditional197) {
            come_params_143=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value198=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value197=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 400, "list$1CVALUEph"))))))));
            come_call_finalizer3(right_value197,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value198,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_144=(params_114),it_145=list$1tuple2$2charphsNodephph_begin((o2_saved_144));            !list$1tuple2$2charphsNodephph_end((o2_saved_144));            it_145=list$1tuple2$2charphsNodephph_next((o2_saved_144))            ){
                multiple_assign_var2=it_145;
                label_146=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_147=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                if(_if_conditional198=!node_compile(node_147,info),                _if_conditional198) {
                    __result132__ = (_Bool)0;
                    label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result132__;
                }
                come_value_148=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 408, 6),__exception_result_var_b3=((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
                come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_143,(struct CVALUE*)come_increment_ref_count(come_value_148));
                label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value201=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value200=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 414, "buffer"))))))));
            come_call_finalizer3(right_value200,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value201,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append_str(buf_149,fun_name_113);
            buffer_append_str(buf_149,"(");
            j_150=0;
            for(            o2_saved_151=(struct list$1CVALUEph*)come_increment_ref_count((come_params_143)),it_152=list$1CVALUEph_begin((o2_saved_151));            !list$1CVALUEph_end((o2_saved_151));            it_152=list$1CVALUEph_next((o2_saved_151))            ){
                buffer_append_str(buf_149,it_152->c_value);
                if(_if_conditional199=j_150!=list$1CVALUEph_length(come_params_143)-1,                _if_conditional199) {
                    buffer_append_str(buf_149,",");
                }
                j_150++;
            }
            come_call_finalizer3(o2_saved_151,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_149,")");
            come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 431, "CVALUE"))));
            come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj68=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(right_value203=buffer_to_string(buf_149))));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional200=string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset"),            _if_conditional200) {
                __dec_obj69=come_value_153->type;
                come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value204=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 435, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional201=string_operator_equals(fun_name_113,"__builtin_ffs"),                _if_conditional201) {
                    __dec_obj70=come_value_153->type;
                    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value206=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 438, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value207,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional202=string_operator_equals(fun_name_113,"__builtin_ffsl"),                    _if_conditional202) {
                        __dec_obj71=come_value_153->type;
                        come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 441, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(_if_conditional203=string_operator_equals(fun_name_113,"__builtin_ffsll"),                        _if_conditional203) {
                            __dec_obj72=come_value_153->type;
                            come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value210=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 444, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
            }
            come_value_153->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_153->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
            __result133__ = (_Bool)1;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result133__;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(_if_conditional204=string_operator_equals(fun_name_113,"string"),            _if_conditional204) {
                __dec_obj73=fun_name_113;
                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("__builtin_string"))));
                __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                if(_if_conditional205=string_operator_equals(fun_name_113,"wstring"),                _if_conditional205) {
                    __dec_obj74=fun_name_113;
                    fun_name_113=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("__builtin_wstring"))));
                    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    if(_if_conditional206=string_operator_equals(fun_name_113,"inherit"),                    _if_conditional206) {
                        p_154=info->come_fun->mName;
                        version_155=0;
                        while(_while_condtional22=*p_154,                        _while_condtional22) {
                            if(_if_conditional207=*p_154==95&&*(p_154+1)==118&&xisdigit(*(p_154+2)),                            _if_conditional207) {
                                p2_156=p_154+2;
                                version_155=0;
                                while(_while_condtional23=xisdigit(*p2_156),                                _while_condtional23) {
                                    version_155=version_155*10+(*p2_156-48);
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
                        memcpy(real_fun_name_157,info->come_fun->mName,p_154-info->come_fun->mName);
                        real_fun_name_157[p_154-info->come_fun->mName]=0;
                        for(                        i_158=version_155-1;                        i_158>=1;                        i_158--                        ){
                            new_fun_name_159=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s_v%d",real_fun_name_157,i_158))));
                            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional227=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_159),                            _if_conditional227) {
                                __dec_obj75=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(new_fun_name_159))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional228=i_158==0,                        _if_conditional228) {
                            new_fun_name_163=(char*)come_increment_ref_count(((char*)(right_value216=xsprintf("%s",real_fun_name_157))));
                            right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional229=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_163),                            _if_conditional229) {
                                __dec_obj76=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(new_fun_name_163))));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional230=string_operator_equals(fun_name_113,info->come_fun->mName),                            _if_conditional230) {
                                err_msg(info,"invalid inherit");
                                __result138__ = (_Bool)0;
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result138__;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_164=128;                        i_164>=1;                        i_164--                        ){
                            new_fun_name_165=(char*)come_increment_ref_count(((char*)(right_value218=xsprintf("%s_v%d",fun_name_113,i_164))));
                            right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(_if_conditional231=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_165),                            _if_conditional231) {
                                __dec_obj77=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string(new_fun_name_165))));
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
        fun_168=map$2charphsFunph_at(info->funcs,fun_name_113,((void*)0));
        if(_if_conditional236=fun_168==((void*)0),        _if_conditional236) {
            err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_113);
            __result143__ = (_Bool)1;
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(fun_168->mResultType))));
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        result_type_169->mStatic=(_Bool)0;
        param_types_170=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value222=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value221=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 528, "list$1sTypeph"))))))));
        come_call_finalizer3(right_value221,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value222,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_171=(struct list$1sTypeph*)come_increment_ref_count((fun_168->mParamTypes)),it_174=list$1sTypeph_begin((o2_saved_171));        !list$1sTypeph_end((o2_saved_171));        it_174=list$1sTypeph_next((o2_saved_171))        ){
            it2_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=solve_generics(((struct sType*)(right_value223=sType_clone(it_174))),info->generics_type,info))));
            come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(param_types_170,(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(it2_177)))));
            come_call_finalizer3(right_value228,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(it2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_171,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj81=result_type_169;
        result_type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=solve_generics(result_type_169,info->generics_type,info))));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_params_181=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value231=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value230=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 536, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value230,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value231,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        for(        i_182=0;        i_182<list$1sTypeph_length(fun_168->mParamTypes);        i_182++        ){
            list$1CVALUEph_add(come_params_181,((void*)0));
        }
        for(        o2_saved_186=(params_114),it_187=list$1tuple2$2charphsNodephph_begin((o2_saved_186));        !list$1tuple2$2charphsNodephph_end((o2_saved_186));        it_187=list$1tuple2$2charphsNodephph_next((o2_saved_186))        ){
            multiple_assign_var3=it_187;
            label_188=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_189=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(_if_conditional245=fun_168->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start"),            _if_conditional245) {
            }
            else {
                if(label_188) {
                    if(_if_conditional247=!node_compile(node_189,info),                    _if_conditional247) {
                        __result153__ = (_Bool)0;
                        label_188 = come_decrement_ref_count2(label_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result153__;
                    }
                    come_value_190=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 552, 7),__exception_result_var_b4=((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
                    come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    n_191=0;
                    for(                    o2_saved_192=(struct list$1charph*)come_increment_ref_count((fun_168->mParamNames)),it_195=list$1charph_begin((o2_saved_192));                    !list$1charph_end((o2_saved_192));                    it_195=list$1charph_next((o2_saved_192))                    ){
                        if(_if_conditional252=string_operator_equals(label_188,it_195),                        _if_conditional252) {
                            break;
                        }
                        n_191++;
                    }
                    come_call_finalizer3(o2_saved_192,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(_if_conditional253=list$1sTypephp_operator_load_element(param_types_170,n_191),                    _if_conditional253) {
                        check_assign_type(((char*)(right_value238=xsprintf("\%s param num \%s is assinged to",((char*)(right_value236=string_to_string(fun_name_113))),((char*)(right_value237=int_to_string(n_191)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 565, 8)),come_value_190->type,come_value_190,(_Bool)0,(_Bool)1,info);
                        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional254=list$1sTypephp_operator_load_element(param_types_170,n_191)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 567, 9))->mHeap&&come_value_190->type->mHeap,                    _if_conditional254) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,n_191), "05call.c", 568, 10)),come_value_190->type,come_value_190,info);
                    }
                    list$1CVALUEph_replace(come_params_181,n_191,(struct CVALUE*)come_increment_ref_count(come_value_190));
                    come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_188 = come_decrement_ref_count2(label_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_189) { node_189 = come_decrement_ref_count2(node_189, ((struct sNode*)node_189)->finalize, ((struct sNode*)node_189)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        i_200=0;
        for(        o2_saved_201=(params_114),it_202=list$1tuple2$2charphsNodephph_begin((o2_saved_201));        !list$1tuple2$2charphsNodephph_end((o2_saved_201));        it_202=list$1tuple2$2charphsNodephph_next((o2_saved_201))        ){
            multiple_assign_var4=it_202;
            label_203=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_204=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(_if_conditional258=fun_168->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start"),            _if_conditional258) {
                if(_if_conditional259=!node_compile(node_204,info),                _if_conditional259) {
                    __result163__ = (_Bool)0;
                    label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result163__;
                }
                come_value_205=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 584, 11),__exception_result_var_b5=((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
                come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                dec_stack_ptr(1,info);
                while(_while_condtional27=(_Bool)1,                _while_condtional27) {
                    if(_if_conditional262=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                    _if_conditional262) {
                        break;
                    }
                    else {
                        i_200++;
                    }
                }
                list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_205));
                i_200++;
                come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(label_203) {
                }
                else {
                    if(_if_conditional264=!node_compile(node_204,info),                    _if_conditional264) {
                        __result166__ = (_Bool)0;
                        label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result166__;
                    }
                    come_value_209=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 606, 12),__exception_result_var_b6=((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
                    come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    dec_stack_ptr(1,info);
                    while(_while_condtional29=(_Bool)1,                    _while_condtional29) {
                        if(_if_conditional265=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                        _if_conditional265) {
                            break;
                        }
                        else {
                            i_200++;
                        }
                    }
                    if(_if_conditional266=list$1sTypephp_operator_load_element(param_types_170,i_200),                    _if_conditional266) {
                        check_assign_type(((char*)(right_value243=xsprintf("\%s param num \%s is assinged to",((char*)(right_value241=string_to_string(fun_name_113))),((char*)(right_value242=int_to_string(i_200)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 619, 13)),come_value_209->type,come_value_209,(_Bool)0,(_Bool)1,info);
                        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional267=list$1sTypephp_operator_load_element(param_types_170,i_200)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 621, 14))->mHeap&&come_value_209->type->mHeap,                    _if_conditional267) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 622, 15)),come_value_209->type,come_value_209,info);
                    }
                    list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_209));
                    i_200++;
                    come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        while(_while_condtional30=(_Bool)1,        _while_condtional30) {
            if(_if_conditional268=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),            _if_conditional268) {
                break;
            }
            else {
                i_200++;
            }
        }
        if(_if_conditional269=list$1tuple2$2charphsNodephph_length(params_114)<list$1sTypeph_length(fun_168->mParamTypes),        _if_conditional269) {
            for(            ;            i_200<list$1sTypeph_length(fun_168->mParamTypes);            i_200++            ){
                default_param_213=(char*)come_increment_ref_count(((char*)(right_value244=string_clone(list$1charphp_operator_load_element(fun_168->mParamDefaultParametors,i_200)))));
                right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                param_name_214=((char*)come_null_check(list$1charphp_operator_load_element(fun_168->mParamNames,i_200), "05call.c", 643, 16));
                if(_if_conditional272=default_param_213&&string_operator_not_equals(default_param_213,"")&&list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                _if_conditional272) {
                    source_215=(struct buffer*)come_increment_ref_count(info->source);
                    p_216=info->p;
                    head_217=info->head;
                    sline_218=info->sline;
                    __dec_obj86=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value245=string_to_buffer(default_param_213))));
                    come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value245,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_219=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=expression_v13(info))));
                    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(_if_conditional273=!node_compile(node_219,info),                    _if_conditional273) {
                        __result169__ = (_Bool)0;
                        come_call_finalizer3(source_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result169__;
                    }
                    __dec_obj87=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_215);
                    come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_216;
                    info->head=head_217;
                    info->sline=sline_218;
                    come_value_220=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 666, 17),__exception_result_var_b7=((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b7));
                    come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional274=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 667, 18)),                    _if_conditional274) {
                        check_assign_type(((char*)(right_value250=xsprintf("\%s param num \%s is assinged to",((char*)(right_value248=string_to_string(fun_name_113))),((char*)(right_value249=int_to_string(i_200)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 668, 19)),come_value_220->type,come_value_220,(_Bool)0,(_Bool)1,info);
                        right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional275=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 670, 20))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 670, 21))->mHeap&&come_value_220->type->mHeap,                    _if_conditional275) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_170,i_200), "05call.c", 671, 22)),come_value_220->type,come_value_220,info);
                    }
                    list$1CVALUEph_replace(come_params_181,i_200,(struct CVALUE*)come_increment_ref_count(come_value_220));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(_if_conditional276=list$1CVALUEphp_operator_load_element(come_params_181,i_200)==((void*)0),                    _if_conditional276) {
                        err_msg(info,"require parametor(%s) %d",fun_168->mName,i_200);
                        __result170__ = (_Bool)0;
                        default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result170__;
                    }
                }
                default_param_213 = come_decrement_ref_count2(default_param_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(_if_conditional277=list$1sTypeph_length(fun_168->mParamTypes)!=list$1CVALUEph_length(come_params_181)&&!fun_168->mVarArgs&&string_operator_not_equals(fun_name_113,"__builtin_va_start")&&string_operator_not_equals(fun_name_113,"__builtin_va_end"),        _if_conditional277) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(fun_168->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
            __result171__ = (_Bool)0;
            come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result171__;
        }
        buf_221=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value252=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value251=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 691, "buffer"))))))));
        come_call_finalizer3(right_value251,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value252,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(buf_221,fun_name_113);
        buffer_append_str(buf_221,"(");
        j_222=0;
        for(        o2_saved_223=(struct list$1CVALUEph*)come_increment_ref_count((come_params_181)),it_224=list$1CVALUEph_begin((o2_saved_223));        !list$1CVALUEph_end((o2_saved_223));        it_224=list$1CVALUEph_next((o2_saved_223))        ){
            buffer_append_str(buf_221,it_224->c_value);
            if(_if_conditional278=j_222!=list$1CVALUEph_length(come_params_181)-1,            _if_conditional278) {
                buffer_append_str(buf_221,",");
            }
            j_222++;
        }
        come_call_finalizer3(o2_saved_223,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_221,")");
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 708, "CVALUE"))));
        come_call_finalizer3(right_value253,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj88=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value254=buffer_to_string(buf_221))));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj89=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(result_type_169))));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value255,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_225->type->mStatic=(_Bool)0;
        come_value_225->var=((void*)0);
        if(fun_168->mResultType->mHeap) {
            __dec_obj90=come_value_225->c_value;
            come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value256=append_object_to_right_values(come_value_225->c_value,(struct sType*)come_increment_ref_count(result_type_169),info))));
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional280=string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free"),        _if_conditional280) {
            if(_if_conditional281=string_operator_not_equals(fun_name_113,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_113,"null_check")&&string_operator_not_equals(fun_name_113,"come_push_stackframe")&&string_operator_not_equals(fun_name_113,"come_pop_stackframe"),            _if_conditional281) {
                __dec_obj91=come_value_225->c_value;
                come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value257=append_stackframe(come_value_225->c_value,come_value_225->type,info))));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        if(_if_conditional282=!self->guard_break&&result_type_169->mGuardValue&&result_type_169->mPointerNum>0,        _if_conditional282) {
            __dec_obj92=come_value_225->c_value;
            come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value258=make_type_name_string(result_type_169,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_225->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        add_come_last_code(info,"%s;\n",come_value_225->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        come_call_finalizer3(result_type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_170,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result172__ = (_Bool)1;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result172__;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional154;
struct list$1tuple2$2charphsNodephph* __result99__;
void* right_value172;
void* right_value173;
struct list$1tuple2$2charphsNodephph* result_105;
struct list_item$1tuple2$2charphsNodephph* it_106;
_Bool _while_condtional18;
void* right_value180;
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
        result_105=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value173=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value172=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 139, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value172,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value173,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_106=self->head;
        while(_while_condtional18=it_106!=((void*)0),        _while_condtional18) {
            list$1tuple2$2charphsNodephph_add(result_105,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value180=tuple2$2charphsNodephp_clone(it_106->item)))));
            come_call_finalizer3(right_value180,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_106=it_106->next;
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
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
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
                it_103=self->head;
                while(_while_condtional17=it_103!=((void*)0),                _while_condtional17) {
                    prev_it_104=it_103;
                    it_103=it_103->next;
                    come_call_finalizer3(prev_it_104,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional155=self!=((void*)0)&&self->item!=((void*)0),                        _if_conditional155) {
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
                if(_if_conditional158=self->len==0,                _if_conditional158) {
                    litem_107=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value174=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 153, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value174,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_107->prev=((void*)0);
                    litem_107->next=((void*)0);
                    __dec_obj57=litem_107->item;
                    litem_107->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj57,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_107;
                    self->head=litem_107;
                }
                else {
                    if(_if_conditional161=self->len==1,                    _if_conditional161) {
                        litem_108=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value175=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 163, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value175,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=self->head;
                        litem_108->next=((void*)0);
                        __dec_obj58=litem_108->item;
                        litem_108->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj58,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_108;
                        self->head->next=litem_108;
                    }
                    else {
                        litem_109=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value176=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 173, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value176,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_109->prev=self->tail;
                        litem_109->next=((void*)0);
                        __dec_obj59=litem_109->item;
                        litem_109->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj59,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_109;
                        self->tail=litem_109;
                    }
                }
                self->len++;
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
                            if(_if_conditional164=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional164) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional165=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional165) {
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
_Bool _if_conditional166;
struct tuple2$2charphsNodeph* __result102__;
void* right_value177;
struct tuple2$2charphsNodeph* result_110;
_Bool _if_conditional169;
void* right_value178;
char* __dec_obj60;
_Bool _if_conditional170;
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
                if(_if_conditional169=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional169) {
                    __dec_obj60=result_110->v1;
                    result_110->v1=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(self->v1))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional170=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional170) {
                    __dec_obj61=result_110->v2;
                    result_110->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(self->v2))));
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
                    if(_if_conditional167=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional167) {
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional168=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional168) {
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
        it_111=self->head;
        while(_while_condtional19=it_111!=((void*)0),        _while_condtional19) {
            prev_it_112=it_111;
            it_111=it_111->next;
            come_call_finalizer3(prev_it_112,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result107__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result107__;
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
                it_118=self->head;
                while(_while_condtional20=it_118!=((void*)0),                _while_condtional20) {
                    prev_it_119=it_118;
                    it_118=it_118->next;
                    come_call_finalizer3(prev_it_119,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional177;
int __result108__;
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional177=self==((void*)0),            _if_conditional177) {
                __result108__ = 0;
                return __result108__;
            }
            __result109__ = self->len;
            return __result109__;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional178;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional178=self==((void*)0),            _if_conditional178) {
                __result110__ = 0;
                return __result110__;
            }
            __result111__ = self->len;
            return __result111__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional180;
struct tuple2$2charphsNodeph* result_123;
struct tuple2$2charphsNodeph* __result113__;
_Bool _if_conditional181;
struct tuple2$2charphsNodeph* __result114__;
struct tuple2$2charphsNodeph* result_124;
struct tuple2$2charphsNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional180=self==((void*)0),            _if_conditional180) {
                memset(&result_123,0,sizeof(struct tuple2$2charphsNodeph*));
                __result113__ = __result_obj__ = result_123;
                return __result113__;
            }
            self->it=self->head;
            if(self->it) {
                __result114__ = __result_obj__ = self->it->item;
                return __result114__;
            }
            memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*));
            __result115__ = __result_obj__ = result_124;
            return __result115__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
            __result116__ = self==((void*)0)||self->it==((void*)0);
            return __result116__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
_Bool _if_conditional182;
struct tuple2$2charphsNodeph* result_126;
struct tuple2$2charphsNodeph* __result117__;
_Bool _if_conditional183;
struct tuple2$2charphsNodeph* __result118__;
struct tuple2$2charphsNodeph* result_127;
struct tuple2$2charphsNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional182=self==((void*)0)||self->it==((void*)0),            _if_conditional182) {
                memset(&result_126,0,sizeof(struct tuple2$2charphsNodeph*));
                __result117__ = __result_obj__ = result_126;
                return __result117__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result118__ = __result_obj__ = self->it->item;
                return __result118__;
            }
            memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*));
            __result119__ = __result_obj__ = result_127;
            return __result119__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional185;
struct list_item$1sTypeph* it_131;
int i_132;
_Bool _while_condtional21;
_Bool _if_conditional186;
struct sType* __result121__;
struct sType* default_value_133;
struct sType* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_132, 0, sizeof(int));
memset(&default_value_133, 0, sizeof(struct sType*));
                if(_if_conditional185=position<0,                _if_conditional185) {
                    position+=self->len;
                }
                it_131=self->head;
                i_132=0;
                while(_while_condtional21=it_131!=((void*)0),                _while_condtional21) {
                    if(_if_conditional186=position==i_132,                    _if_conditional186) {
                        __result121__ = __result_obj__ = it_131->item;
                        return __result121__;
                    }
                    it_131=it_131->next;
                    i_132++;
                }
                memset(&default_value_133,0,sizeof(struct sType*));
                __result122__ = __result_obj__ = default_value_133;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result122__;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional189;
struct CVALUE* result_137;
struct CVALUE* __result123__;
_Bool _if_conditional190;
struct CVALUE* __result124__;
struct CVALUE* result_138;
struct CVALUE* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct CVALUE*));
memset(&result_138, 0, sizeof(struct CVALUE*));
            if(_if_conditional189=self==((void*)0),            _if_conditional189) {
                memset(&result_137,0,sizeof(struct CVALUE*));
                __result123__ = __result_obj__ = result_137;
                return __result123__;
            }
            self->it=self->head;
            if(self->it) {
                __result124__ = __result_obj__ = self->it->item;
                return __result124__;
            }
            memset(&result_138,0,sizeof(struct CVALUE*));
            __result125__ = __result_obj__ = result_138;
            return __result125__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
            __result126__ = self==((void*)0)||self->it==((void*)0);
            return __result126__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional191;
struct CVALUE* result_140;
struct CVALUE* __result127__;
_Bool _if_conditional192;
struct CVALUE* __result128__;
struct CVALUE* result_141;
struct CVALUE* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct CVALUE*));
memset(&result_141, 0, sizeof(struct CVALUE*));
            if(_if_conditional191=self==((void*)0)||self->it==((void*)0),            _if_conditional191) {
                memset(&result_140,0,sizeof(struct CVALUE*));
                __result127__ = __result_obj__ = result_140;
                return __result127__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result128__ = __result_obj__ = self->it->item;
                return __result128__;
            }
            memset(&result_141,0,sizeof(struct CVALUE*));
            __result129__ = __result_obj__ = result_141;
            return __result129__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional193;
int __result130__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional193=self==((void*)0),                _if_conditional193) {
                    __result130__ = 0;
                    return __result130__;
                }
                __result131__ = self->len;
                return __result131__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_160;
unsigned int hash_161;
unsigned int it_162;
_Bool _while_condtional24;
_Bool _if_conditional208;
_Bool _if_conditional209;
struct sFun* __result134__;
_Bool _if_conditional225;
_Bool _if_conditional226;
struct sFun* __result135__;
struct sFun* __result136__;
struct sFun* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_160, 0, sizeof(struct sFun*));
memset(&hash_161, 0, sizeof(unsigned int));
memset(&it_162, 0, sizeof(unsigned int));
                                memset(&default_value_160,0,sizeof(struct sFun*));
                                hash_161=string_get_hash_key(((char*)key))%self->size;
                                it_162=hash_161;
                                while(_while_condtional24=(_Bool)1,                                _while_condtional24) {
                                    if(_if_conditional208=self->item_existance[it_162],                                    _if_conditional208) {
                                        if(_if_conditional209=string_equals(self->keys[it_162],key),                                        _if_conditional209) {
                                            __result134__ = __result_obj__ = self->items[it_162];
                                            come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result134__;
                                        }
                                        it_162++;
                                        if(_if_conditional225=it_162>=self->size,                                        _if_conditional225) {
                                            it_162=0;
                                        }
                                        else {
                                            if(_if_conditional226=it_162==hash_161,                                            _if_conditional226) {
                                                __result135__ = __result_obj__ = default_value_160;
                                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result135__;
                                            }
                                        }
                                    }
                                    else {
                                        __result136__ = __result_obj__ = default_value_160;
                                        come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result136__;
                                    }
                                }
                                __result137__ = __result_obj__ = default_value_160;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result137__;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional210;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional210=self!=((void*)0)&&self->mName!=((void*)0),                                                _if_conditional210) {
                                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional211=self!=((void*)0)&&self->mResultType!=((void*)0),                                                _if_conditional211) {
                                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional212=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                                _if_conditional212) {
                                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional213=self!=((void*)0)&&self->mParamNames!=((void*)0),                                                _if_conditional213) {
                                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional214=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                                _if_conditional214) {
                                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional215=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                                _if_conditional215) {
                                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional216=self!=((void*)0)&&self->mBlock!=((void*)0),                                                _if_conditional216) {
                                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional219=self!=((void*)0)&&self->mSource!=((void*)0),                                                _if_conditional219) {
                                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional220=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                                _if_conditional220) {
                                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional221=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                                _if_conditional221) {
                                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional222=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                                _if_conditional222) {
                                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional223=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                                _if_conditional223) {
                                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(_if_conditional224=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                _if_conditional224) {
                                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional217=self!=((void*)0)&&self->mNodes!=((void*)0),                                                        _if_conditional217) {
                                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(_if_conditional218=self!=((void*)0)&&self->mVarTable!=((void*)0),                                                        _if_conditional218) {
                                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_166;
unsigned int it_167;
_Bool _while_condtional25;
_Bool _if_conditional232;
_Bool _if_conditional233;
struct sFun* __result139__;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct sFun* __result140__;
struct sFun* __result141__;
struct sFun* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_166, 0, sizeof(unsigned int));
memset(&it_167, 0, sizeof(unsigned int));
            hash_166=string_get_hash_key(((char*)key))%self->size;
            it_167=hash_166;
            while(_while_condtional25=(_Bool)1,            _while_condtional25) {
                if(_if_conditional232=self->item_existance[it_167],                _if_conditional232) {
                    if(_if_conditional233=string_equals(self->keys[it_167],key),                    _if_conditional233) {
                        __result139__ = __result_obj__ = self->items[it_167];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result139__;
                    }
                    it_167++;
                    if(_if_conditional234=it_167>=self->size,                    _if_conditional234) {
                        it_167=0;
                    }
                    else {
                        if(_if_conditional235=it_167==hash_166,                        _if_conditional235) {
                            __result140__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result140__;
                        }
                    }
                }
                else {
                    __result141__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result141__;
                }
            }
            __result142__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result142__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional237;
struct sType* result_172;
struct sType* __result144__;
_Bool _if_conditional238;
struct sType* __result145__;
struct sType* result_173;
struct sType* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_172, 0, sizeof(struct sType*));
memset(&result_173, 0, sizeof(struct sType*));
            if(_if_conditional237=self==((void*)0),            _if_conditional237) {
                memset(&result_172,0,sizeof(struct sType*));
                __result144__ = __result_obj__ = result_172;
                return __result144__;
            }
            self->it=self->head;
            if(self->it) {
                __result145__ = __result_obj__ = self->it->item;
                return __result145__;
            }
            memset(&result_173,0,sizeof(struct sType*));
            __result146__ = __result_obj__ = result_173;
            return __result146__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
            __result147__ = self==((void*)0)||self->it==((void*)0);
            return __result147__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional239;
struct sType* result_175;
struct sType* __result148__;
_Bool _if_conditional240;
struct sType* __result149__;
struct sType* result_176;
struct sType* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_175, 0, sizeof(struct sType*));
memset(&result_176, 0, sizeof(struct sType*));
            if(_if_conditional239=self==((void*)0)||self->it==((void*)0),            _if_conditional239) {
                memset(&result_175,0,sizeof(struct sType*));
                __result148__ = __result_obj__ = result_175;
                return __result148__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result149__ = __result_obj__ = self->it->item;
                return __result149__;
            }
            memset(&result_176,0,sizeof(struct sType*));
            __result150__ = __result_obj__ = result_176;
            return __result150__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional241;
void* right_value225;
struct list_item$1sTypeph* litem_178;
struct sType* __dec_obj78;
_Bool _if_conditional242;
void* right_value226;
struct list_item$1sTypeph* litem_179;
struct sType* __dec_obj79;
void* right_value227;
struct list_item$1sTypeph* litem_180;
struct sType* __dec_obj80;
struct list$1sTypeph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
memset(&litem_178, 0, sizeof(struct list_item$1sTypeph*));
right_value226 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1sTypeph*));
right_value227 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional241=self->len==0,                _if_conditional241) {
                    litem_178=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value225=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 223, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value225,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_178->prev=((void*)0);
                    litem_178->next=((void*)0);
                    __dec_obj78=litem_178->item;
                    litem_178->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_178;
                    self->head=litem_178;
                }
                else {
                    if(_if_conditional242=self->len==1,                    _if_conditional242) {
                        litem_179=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value226=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 233, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value226,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_179->prev=self->head;
                        litem_179->next=((void*)0);
                        __dec_obj79=litem_179->item;
                        litem_179->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_179;
                        self->head->next=litem_179;
                    }
                    else {
                        litem_180=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value227=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 243, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value227,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_180->prev=self->tail;
                        litem_180->next=((void*)0);
                        __dec_obj80=litem_180->item;
                        litem_180->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_180;
                        self->tail=litem_180;
                    }
                }
                self->len++;
                __result151__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result151__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional243;
void* right_value232;
struct list_item$1CVALUEph* litem_183;
struct CVALUE* __dec_obj82;
_Bool _if_conditional244;
void* right_value233;
struct list_item$1CVALUEph* litem_184;
struct CVALUE* __dec_obj83;
void* right_value234;
struct list_item$1CVALUEph* litem_185;
struct CVALUE* __dec_obj84;
struct list$1CVALUEph* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
memset(&litem_183, 0, sizeof(struct list_item$1CVALUEph*));
right_value233 = (void*)0;
memset(&litem_184, 0, sizeof(struct list_item$1CVALUEph*));
right_value234 = (void*)0;
memset(&litem_185, 0, sizeof(struct list_item$1CVALUEph*));
                if(_if_conditional243=self->len==0,                _if_conditional243) {
                    litem_183=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 153, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value232,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_183->prev=((void*)0);
                    litem_183->next=((void*)0);
                    __dec_obj82=litem_183->item;
                    litem_183->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_183;
                    self->head=litem_183;
                }
                else {
                    if(_if_conditional244=self->len==1,                    _if_conditional244) {
                        litem_184=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value233=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 163, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value233,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_184->prev=self->head;
                        litem_184->next=((void*)0);
                        __dec_obj83=litem_184->item;
                        litem_184->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_184;
                        self->head->next=litem_184;
                    }
                    else {
                        litem_185=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value234=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 173, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value234,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_185->prev=self->tail;
                        litem_185->next=((void*)0);
                        __dec_obj84=litem_185->item;
                        litem_185->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_185;
                        self->tail=litem_185;
                    }
                }
                self->len++;
                __result152__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result152__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional248;
char* result_193;
char* __result154__;
_Bool _if_conditional249;
char* __result155__;
char* result_194;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
                        if(_if_conditional248=self==((void*)0),                        _if_conditional248) {
                            memset(&result_193,0,sizeof(char*));
                            __result154__ = __result_obj__ = result_193;
                            return __result154__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result155__ = __result_obj__ = self->it->item;
                            return __result155__;
                        }
                        memset(&result_194,0,sizeof(char*));
                        __result156__ = __result_obj__ = result_194;
                        return __result156__;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
                        __result157__ = self==((void*)0)||self->it==((void*)0);
                        return __result157__;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional250;
char* result_196;
char* __result158__;
_Bool _if_conditional251;
char* __result159__;
char* result_197;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
                        if(_if_conditional250=self==((void*)0)||self->it==((void*)0),                        _if_conditional250) {
                            memset(&result_196,0,sizeof(char*));
                            __result158__ = __result_obj__ = result_196;
                            return __result158__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result159__ = __result_obj__ = self->it->item;
                            return __result159__;
                        }
                        memset(&result_197,0,sizeof(char*));
                        __result160__ = __result_obj__ = result_197;
                        return __result160__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
struct list$1CVALUEph* __result161__;
struct list_item$1CVALUEph* it_198;
int i_199;
_Bool _while_condtional26;
_Bool _if_conditional257;
struct CVALUE* __dec_obj85;
struct list$1CVALUEph* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_199, 0, sizeof(int));
                        if(_if_conditional255=position<0,                        _if_conditional255) {
                            position+=self->len;
                        }
                        if(_if_conditional256=position>=self->len,                        _if_conditional256) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result161__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result161__;
                        }
                        it_198=self->head;
                        i_199=0;
                        while(_while_condtional26=it_198!=((void*)0),                        _while_condtional26) {
                            if(_if_conditional257=position==i_199,                            _if_conditional257) {
                                __dec_obj85=it_198->item;
                                it_198->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj85,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_198=it_198->next;
                            i_199++;
                        }
                        __result162__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result162__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool _if_conditional260;
struct list_item$1CVALUEph* it_206;
int i_207;
_Bool _while_condtional28;
_Bool _if_conditional261;
struct CVALUE* __result164__;
struct CVALUE* default_value_208;
struct CVALUE* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_206, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_207, 0, sizeof(int));
memset(&default_value_208, 0, sizeof(struct CVALUE*));
                        if(_if_conditional260=position<0,                        _if_conditional260) {
                            position+=self->len;
                        }
                        it_206=self->head;
                        i_207=0;
                        while(_while_condtional28=it_206!=((void*)0),                        _while_condtional28) {
                            if(_if_conditional261=position==i_207,                            _if_conditional261) {
                                __result164__ = __result_obj__ = it_206->item;
                                return __result164__;
                            }
                            it_206=it_206->next;
                            i_207++;
                        }
                        memset(&default_value_208,0,sizeof(struct CVALUE*));
                        __result165__ = __result_obj__ = default_value_208;
                        come_call_finalizer3(default_value_208,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result165__;
                        come_call_finalizer3(default_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool _if_conditional270;
struct list_item$1charph* it_210;
int i_211;
_Bool _while_condtional31;
_Bool _if_conditional271;
char* __result167__;
char* default_value_212;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_210, 0, sizeof(struct list_item$1charph*));
memset(&i_211, 0, sizeof(int));
memset(&default_value_212, 0, sizeof(char*));
                    if(_if_conditional270=position<0,                    _if_conditional270) {
                        position+=self->len;
                    }
                    it_210=self->head;
                    i_211=0;
                    while(_while_condtional31=it_210!=((void*)0),                    _while_condtional31) {
                        if(_if_conditional271=position==i_211,                        _if_conditional271) {
                            __result167__ = __result_obj__ = it_210->item;
                            return __result167__;
                        }
                        it_210=it_210->next;
                        i_211++;
                    }
                    memset(&default_value_212,0,sizeof(char*));
                    __result168__ = __result_obj__ = default_value_212;
                    default_value_212 = come_decrement_ref_count2(default_value_212, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result168__;
                    default_value_212 = come_decrement_ref_count2(default_value_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value260;
struct sNode* __dec_obj93;
void* right_value261;
struct list$1tuple2$2charphsNodephph* __dec_obj94;
struct sLambdaCall* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    ((struct sNodeBase*)(right_value260=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value260,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj94=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value261=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj94,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value261,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result173__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result173__;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__;
void* right_value262;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
    __result174__ = __result_obj__ = ((char*)(right_value262=__builtin_string("sLambdaCall")));
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_226;
struct list$1tuple2$2charphsNodephph* params_227;
_Bool _if_conditional286;
_Bool __result175__;
void* right_value263;
struct CVALUE* __exception_result_var_b8;
struct CVALUE* come_value_228;
struct sType* lambda_type_229;
void* right_value264;
struct sType* result_type_230;
void* right_value265;
void* right_value266;
struct list$1CVALUEph* come_params_231;
_Bool _if_conditional287;
_Bool __result176__;
int i_232;
struct list$1tuple2$2charphsNodephph* o2_saved_233;
struct tuple2$2charphsNodeph* it_234;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_235;
struct sNode* node_236;
_Bool _if_conditional288;
_Bool __result177__;
void* right_value267;
struct CVALUE* __exception_result_var_b9;
struct CVALUE* come_value_237;
_Bool _if_conditional289;
void* right_value268;
void* right_value269;
_Bool _if_conditional290;
void* right_value270;
void* right_value271;
struct buffer* buf_238;
int j_239;
struct list$1CVALUEph* o2_saved_240;
struct CVALUE* it_241;
_Bool _if_conditional291;
void* right_value272;
struct CVALUE* come_value2_242;
void* right_value273;
char* __dec_obj95;
_Bool _if_conditional292;
void* right_value274;
char* __dec_obj96;
void* right_value275;
struct sType* __dec_obj97;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_226, 0, sizeof(struct sNode*));
memset(&params_227, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value263 = (void*)0;
memset(&come_value_228, 0, sizeof(struct CVALUE*));
memset(&lambda_type_229, 0, sizeof(struct sType*));
right_value264 = (void*)0;
memset(&result_type_230, 0, sizeof(struct sType*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&come_params_231, 0, sizeof(struct list$1CVALUEph*));
memset(&i_232, 0, sizeof(int));
memset(&o2_saved_233, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_234, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value267 = (void*)0;
memset(&come_value_237, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&buf_238, 0, sizeof(struct buffer*));
memset(&j_239, 0, sizeof(int));
memset(&o2_saved_240, 0, sizeof(struct list$1CVALUEph*));
memset(&it_241, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
memset(&come_value2_242, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
    node_226=(struct sNode*)come_increment_ref_count(self->node);
    params_227=self->params;
    if(_if_conditional286=!node_compile(node_226,info),    _if_conditional286) {
        __result175__ = (_Bool)0;
        if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result175__;
    }
    come_value_228=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 762, 23),__exception_result_var_b8=((struct CVALUE*)(right_value263=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b8));
    come_call_finalizer3(right_value263,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    lambda_type_229=come_value_228->type;
    result_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(lambda_type_229->mResultType->v1))));
    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, __result_obj__);
    result_type_230->mStatic=(_Bool)0;
    come_params_231=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value266=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value265=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 770, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value265,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value266,list$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional287=list$1sTypeph_length(lambda_type_229->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_227)&&!lambda_type_229->mVarArgs,    _if_conditional287) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_229->mParamTypes),list$1tuple2$2charphsNodephph_length(params_227));
        __result176__ = (_Bool)0;
        if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result176__;
    }
    i_232=0;
    for(    o2_saved_233=(params_227),it_234=list$1tuple2$2charphsNodephph_begin((o2_saved_233));    !list$1tuple2$2charphsNodephph_end((o2_saved_233));    it_234=list$1tuple2$2charphsNodephph_next((o2_saved_233))    ){
        multiple_assign_var5=it_234;
        label_235=(char*)come_increment_ref_count(multiple_assign_var5->v1);
        node_236=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
        if(_if_conditional288=!node_compile(node_236,info),        _if_conditional288) {
            __result177__ = (_Bool)0;
            label_235 = come_decrement_ref_count2(label_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result177__;
        }
        come_value_237=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("05call.c", 785, 24),__exception_result_var_b9=((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b9));
        come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional289=lambda_type_229->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_232), "05call.c", 786, 25))==((void*)0),        _if_conditional289) {
        }
        else {
            check_assign_type(((char*)(right_value269=xsprintf("calling param #\%s",((char*)(right_value268=int_to_string(i_232)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_232), "05call.c", 789, 26)),come_value_237->type,come_value_237,(_Bool)0,(_Bool)1,info);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional290=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_232), "05call.c", 790, 27))->mHeap&&come_value_237->type->mHeap,            _if_conditional290) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_229->mParamTypes,i_232), "05call.c", 791, 28)),come_value_237->type,come_value_237,info);
            }
        }
        list$1CVALUEph_push_back(come_params_231,(struct CVALUE*)come_increment_ref_count(come_value_237));
        dec_stack_ptr(1,info);
        i_232++;
        label_235 = come_decrement_ref_count2(label_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value271=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value270=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 801, "buffer"))))))));
    come_call_finalizer3(right_value270,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(buf_238,"(");
    buffer_append_str(buf_238,come_value_228->c_value);
    buffer_append_str(buf_238,")");
    buffer_append_str(buf_238,"(");
    j_239=0;
    for(    o2_saved_240=(struct list$1CVALUEph*)come_increment_ref_count((come_params_231)),it_241=list$1CVALUEph_begin((o2_saved_240));    !list$1CVALUEph_end((o2_saved_240));    it_241=list$1CVALUEph_next((o2_saved_240))    ){
        buffer_append_str(buf_238,it_241->c_value);
        if(_if_conditional291=j_239!=list$1CVALUEph_length(come_params_231)-1,        _if_conditional291) {
            buffer_append_str(buf_238,",");
        }
        j_239++;
    }
    come_call_finalizer3(o2_saved_240,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_238,")");
    come_value2_242=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 820, "CVALUE"))));
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=come_value2_242->c_value;
    come_value2_242->c_value=(char*)come_increment_ref_count(((char*)(right_value273=buffer_to_string(buf_238))));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    if(lambda_type_229->mResultType->v1->mHeap) {
        __dec_obj96=come_value2_242->c_value;
        come_value2_242->c_value=(char*)come_increment_ref_count(((char*)(right_value274=append_object_to_right_values(come_value2_242->c_value,(struct sType*)come_increment_ref_count(lambda_type_229->mResultType->v1),info))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __dec_obj97=come_value2_242->type;
    come_value2_242->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(result_type_230))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value2_242->type->mStatic=(_Bool)0;
    come_value2_242->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_242->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_242));
    __result178__ = (_Bool)1;
    if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result178__;
    if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_231,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value276;
void* right_value277;
struct list$1sTypeph* method_generics_types_243;
_Bool _if_conditional293;
_Bool _while_condtional32;
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value278;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_244;
char* name_245;
_Bool err_246;
_Bool _if_conditional299;
void* right_value279;
int __exception_result_var_b10;
void* right_value280;
void* right_value281;
struct list$1tuple2$2charphsNodephph* params_247;
_Bool _while_condtional33;
_Bool _if_conditional300;
char* p_248;
int sline_249;
_Bool err_flag_250;
void* right_value282;
char* label_251;
_Bool _if_conditional301;
void* right_value283;
char* __dec_obj98;
_Bool _if_conditional302;
char* __dec_obj99;
_Bool no_comma_252;
void* right_value284;
struct sNode* node_253;
void* right_value285;
struct sNode* __dec_obj100;
void* right_value289;
void* right_value290;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool guard_break_257;
_Bool _if_conditional307;
void* right_value291;
void* right_value292;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value298;
struct sNode* node_259;
void* right_value299;
struct sNode* __dec_obj110;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&method_generics_types_243, 0, sizeof(struct list$1sTypeph*));
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&params_247, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_248, 0, sizeof(char*));
memset(&sline_249, 0, sizeof(int));
memset(&err_flag_250, 0, sizeof(_Bool));
right_value282 = (void*)0;
memset(&label_251, 0, sizeof(char*));
right_value283 = (void*)0;
memset(&no_comma_252, 0, sizeof(_Bool));
right_value284 = (void*)0;
memset(&node_253, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&guard_break_257, 0, sizeof(_Bool));
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value298 = (void*)0;
memset(&node_259, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
    method_generics_types_243=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value277=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value276=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 841, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value276,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value277,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional293=*info->p==60,    _if_conditional293) {
        info->p++;
        skip_spaces_and_lf(info);
        while(_while_condtional32=(_Bool)1,        _while_condtional32) {
            if(_if_conditional294=*info->p==0,            _if_conditional294) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(_if_conditional295=*info->p==62,                _if_conditional295) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(_if_conditional296=*info->p==44,                    _if_conditional296) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value278=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_244=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        name_245=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_246=multiple_assign_var6->v3;
                        come_call_finalizer3(right_value278,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional299=!err_246,                        _if_conditional299) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_243,(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(type_244)))));
                        come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_244,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_245 = come_decrement_ref_count2(name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    (come_push_stackframe("05call.c", 875, 29),__exception_result_var_b10=expected_next_character(40,info), come_pop_stackframe(), __exception_result_var_b10);
    parse_sharp_v5(info);
    params_247=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value281=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value280=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 879, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value280,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value281,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    while(_while_condtional33=(_Bool)1,    _while_condtional33) {
        if(_if_conditional300=*info->p==41,        _if_conditional300) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_248=info->p;
        sline_249=info->sline;
        err_flag_250=(_Bool)0;
        label_251=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(""))));
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional301=xisalpha(*info->p)||*info->p==95,        _if_conditional301) {
            __dec_obj98=label_251;
            label_251=(char*)come_increment_ref_count(((char*)(right_value283=parse_word(info))));
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_250=(_Bool)1;
        }
        if(_if_conditional302=err_flag_250==(_Bool)1&&*info->p==58,        _if_conditional302) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj99=label_251;
            label_251=((void*)0);
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_248;
            info->sline=sline_249;
        }
        no_comma_252=info->no_comma;
        info->no_comma=(_Bool)1;
        node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=expression_v13(info))));
        if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj100=node_253;
        node_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_253),info))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_252;
        list$1tuple2$2charphsNodephph_push_back(params_247,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value290=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value289=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 918, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_251),(struct sNode*)come_increment_ref_count(node_253))))));
        come_call_finalizer3(right_value289,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value290,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(_if_conditional305=*info->p==44,        _if_conditional305) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional306=*info->p==41,            _if_conditional306) {
                info->p++;
                skip_spaces_and_lf(info);
                label_251 = come_decrement_ref_count2(label_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_251 = come_decrement_ref_count2(label_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_253) { node_253 = come_decrement_ref_count2(node_253, ((struct sNode*)node_253)->finalize, ((struct sNode*)node_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    guard_break_257=(_Bool)0;
    if(_if_conditional307=*info->p==63&&*(info->p+1)==63,    _if_conditional307) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_257=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 943, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value292=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value291=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 943, "sFunCallNode")))),fun_name,params_247,guard_break_257,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_243),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=_inf_value1)));
    come_call_finalizer3(right_value291,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value292,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=node_259;
    node_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_259),info))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result183__ = __result_obj__ = node_259;
    come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_247,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result183__;
    come_call_finalizer3(method_generics_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_247,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_259) { node_259 = come_decrement_ref_count2(node_259, ((struct sNode*)node_259)->finalize, ((struct sNode*)node_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional297=self!=((void*)0)&&self->v1!=((void*)0),                            _if_conditional297) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional298=self!=((void*)0)&&self->v2!=((void*)0),                            _if_conditional298) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
_Bool _if_conditional303;
void* right_value286;
struct list_item$1tuple2$2charphsNodephph* litem_254;
struct tuple2$2charphsNodeph* __dec_obj101;
_Bool _if_conditional304;
void* right_value287;
struct list_item$1tuple2$2charphsNodephph* litem_255;
struct tuple2$2charphsNodeph* __dec_obj102;
void* right_value288;
struct list_item$1tuple2$2charphsNodephph* litem_256;
struct tuple2$2charphsNodeph* __dec_obj103;
struct list$1tuple2$2charphsNodephph* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
memset(&litem_254, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value287 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value288 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(_if_conditional303=self->len==0,            _if_conditional303) {
                litem_254=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value286=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 223, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(right_value286,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_254->prev=((void*)0);
                litem_254->next=((void*)0);
                __dec_obj101=litem_254->item;
                litem_254->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj101,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_254;
                self->head=litem_254;
            }
            else {
                if(_if_conditional304=self->len==1,                _if_conditional304) {
                    litem_255=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value287=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 233, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value287,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_255->prev=self->head;
                    litem_255->next=((void*)0);
                    __dec_obj102=litem_255->item;
                    litem_255->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj102,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_255;
                    self->head->next=litem_255;
                }
                else {
                    litem_256=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value288=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 243, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value288,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_256->prev=self->tail;
                    litem_256->next=((void*)0);
                    __dec_obj103=litem_256->item;
                    litem_256->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj103,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_256;
                    self->tail=litem_256;
                }
            }
            self->len++;
            __result179__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result179__;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj104;
struct sNode* __dec_obj105;
struct tuple2$2charphsNodeph* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj104=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj105=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
            __result180__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result180__;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional308) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional309=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional309) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional310=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional310) {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional311=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional311) {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
_Bool _if_conditional312;
struct sFunCallNode* __result181__;
void* right_value293;
struct sFunCallNode* result_258;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value294;
char* __dec_obj106;
_Bool _if_conditional315;
void* right_value295;
char* __dec_obj107;
_Bool _if_conditional316;
void* right_value296;
struct list$1tuple2$2charphsNodephph* __dec_obj108;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value297;
struct list$1sTypeph* __dec_obj109;
struct sFunCallNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
memset(&result_258, 0, sizeof(struct sFunCallNode*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
        if(_if_conditional312=self==(void*)0,        _if_conditional312) {
            __result181__ = __result_obj__ = (void*)0;
            return __result181__;
        }
        result_258=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value293=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer3(right_value293,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional313=self!=((void*)0),        _if_conditional313) {
            result_258->sline=self->sline;
        }
        if(_if_conditional314=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional314) {
            __dec_obj106=result_258->sname;
            result_258->sname=(char*)come_increment_ref_count(((char*)(right_value294=string_clone(self->sname))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional315=self!=((void*)0)&&self->fun_name!=((void*)0),        _if_conditional315) {
            __dec_obj107=result_258->fun_name;
            result_258->fun_name=(char*)come_increment_ref_count(((char*)(right_value295=string_clone(self->fun_name))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional316=self!=((void*)0)&&self->params!=((void*)0),        _if_conditional316) {
            __dec_obj108=result_258->params;
            result_258->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value296=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj108,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value296,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional317=self!=((void*)0),        _if_conditional317) {
            result_258->guard_break=self->guard_break;
        }
        if(_if_conditional318=self!=((void*)0)&&self->method_generics_types!=((void*)0),        _if_conditional318) {
            __dec_obj109=result_258->method_generics_types;
            result_258->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj109,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value297,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result182__ = __result_obj__ = result_258;
        come_call_finalizer3(result_258,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result182__;
        come_call_finalizer3(result_258,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result184__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result184__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional319;
_Bool _if_conditional320;
void* right_value300;
void* right_value301;
void* right_value302;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* right_value307;
struct sNode* __result187__;
char* head_261;
void* right_value308;
struct sNode* value_262;
char* tail_263;
void* right_value309;
struct sNode* __dec_obj114;
void* right_value310;
void* right_value311;
void* right_value312;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* right_value317;
struct sNode* __result190__;
_Bool _if_conditional337;
char* head_266;
int head_sline_267;
void* right_value318;
char* buf_268;
_Bool is_type_name__269;
_Bool define_function_pointer_flag_270;
_Bool _if_conditional338;
void* right_value319;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool lambda_flag_271;
_Bool _if_conditional341;
void* right_value320;
void* right_value321;
char* word2_272;
_Bool _if_conditional342;
_Bool fun_name_with_type_name_273;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value322;
char* word2_274;
_Bool _while_condtional34;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool call_method_generics_fun_call_275;
_Bool _if_conditional347;
void* right_value323;
char* __dec_obj118;
_Bool _if_conditional356;
int nest_279;
_Bool _while_condtional36;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value324;
char* __dec_obj119;
_Bool _if_conditional362;
void* right_value325;
struct sNode* __result195__;
_Bool _if_conditional363;
void* right_value326;
struct sNode* node_280;
struct sNode* __result196__;
_Bool _if_conditional364;
void* right_value327;
void* right_value328;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* right_value331;
struct sNode* __result199__;
_Bool _if_conditional369;
void* right_value332;
void* right_value333;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* right_value336;
struct sNode* __result202__;
_Bool _if_conditional374;
void* right_value337;
void* right_value338;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* right_value341;
struct sNode* __result205__;
_Bool _if_conditional379;
void* right_value342;
void* right_value343;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* right_value346;
struct sNode* __result208__;
_Bool _if_conditional384;
void* right_value347;
void* right_value348;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* right_value351;
struct sNode* __result211__;
_Bool _if_conditional389;
void* right_value352;
void* right_value353;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* right_value356;
struct sNode* __result214__;
_Bool _if_conditional394;
void* right_value357;
struct sNode* node_287;
struct sNode* __result215__;
_Bool _if_conditional395;
void* right_value358;
void* right_value359;
struct buffer* fun_name_288;
void* right_value360;
void* right_value361;
struct sType* type_292;
_Bool _if_conditional400;
void* right_value362;
struct sClass* klass_298;
_Bool _if_conditional412;
void* right_value363;
void* right_value364;
struct sType* __dec_obj126;
_Bool _while_condtional40;
_Bool _if_conditional413;
int __exception_result_var_b11;
int __exception_result_var_b12;
void* right_value365;
char* buf2_299;
void* right_value366;
void* right_value367;
struct sNode* node_300;
struct sNode* __result224__;
_Bool _if_conditional414;
void* right_value368;
void* right_value369;
struct buffer* fun_name_301;
void* right_value370;
char* buf2_302;
void* right_value371;
void* right_value372;
struct sNode* node_303;
struct sNode* __result225__;
_Bool _if_conditional415;
void* right_value373;
struct sNode* node_304;
struct sNode* __result226__;
_Bool _if_conditional416;
void* right_value374;
struct sNode* node_305;
struct sNode* __result227__;
void* right_value375;
struct sNode* node_306;
struct sNode* __result228__;
void* right_value376;
struct sNode* __exception_result_var_b13;
struct sNode* node_307;
struct sNode* __result229__;
struct sNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value307 = (void*)0;
memset(&head_261, 0, sizeof(char*));
right_value308 = (void*)0;
memset(&value_262, 0, sizeof(struct sNode*));
memset(&tail_263, 0, sizeof(char*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value317 = (void*)0;
memset(&head_266, 0, sizeof(char*));
memset(&head_sline_267, 0, sizeof(int));
right_value318 = (void*)0;
memset(&buf_268, 0, sizeof(char*));
memset(&is_type_name__269, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_270, 0, sizeof(_Bool));
right_value319 = (void*)0;
memset(&lambda_flag_271, 0, sizeof(_Bool));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&word2_272, 0, sizeof(char*));
memset(&fun_name_with_type_name_273, 0, sizeof(_Bool));
right_value322 = (void*)0;
memset(&word2_274, 0, sizeof(char*));
memset(&call_method_generics_fun_call_275, 0, sizeof(_Bool));
right_value323 = (void*)0;
memset(&nest_279, 0, sizeof(int));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&node_280, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value346 = (void*)0;
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&node_287, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&fun_name_288, 0, sizeof(struct buffer*));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&type_292, 0, sizeof(struct sType*));
right_value362 = (void*)0;
memset(&klass_298, 0, sizeof(struct sClass*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value365 = (void*)0;
memset(&buf2_299, 0, sizeof(char*));
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
memset(&fun_name_301, 0, sizeof(struct buffer*));
right_value370 = (void*)0;
memset(&buf2_302, 0, sizeof(char*));
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&node_303, 0, sizeof(struct sNode*));
right_value373 = (void*)0;
memset(&node_304, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value375 = (void*)0;
memset(&node_306, 0, sizeof(struct sNode*));
right_value376 = (void*)0;
memset(&node_307, 0, sizeof(struct sNode*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(_if_conditional319=parsecmp("return",info),    _if_conditional319) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(_if_conditional320=*info->p==59,        _if_conditional320) {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 971, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sReturnNode*)(right_value302=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value300=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 971, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value301=__builtin_string("0")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result187__ = __result_obj__ = ((struct sNode*)(right_value307=_inf_value2));
            come_call_finalizer3(right_value300,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value302,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result187__;
        }
        else {
            head_261=info->p;
            value_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=expression_v13(info))));
            if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            tail_263=info->p;
            __dec_obj114=value_262;
            value_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=post_position_operator_v99((struct sNode*)come_increment_ref_count(value_262),info))));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            char buf_264[tail_263-head_261+1];
            memset(&buf_264, 0, sizeof(char)            *(tail_263-head_261+1)            );
            memcpy(buf_264,head_261,tail_263-head_261);
            buf_264[tail_263-head_261]=0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 983, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sReturnNode*)(right_value312=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value310=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 983, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_262),(char*)come_increment_ref_count(((char*)(right_value311=__builtin_string(buf_264)))),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result190__ = __result_obj__ = ((struct sNode*)(right_value317=_inf_value3));
            if(value_262) { value_262 = come_decrement_ref_count2(value_262, ((struct sNode*)value_262)->finalize, ((struct sNode*)value_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value310,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value312,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result190__;
            if(value_262) { value_262 = come_decrement_ref_count2(value_262, ((struct sNode*)value_262)->finalize, ((struct sNode*)value_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        if(_if_conditional337=(xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39)),        _if_conditional337) {
            head_266=info->p;
            head_sline_267=info->sline;
            buf_268=(char*)come_increment_ref_count(((char*)(right_value318=backtrace_parse_word(info))));
            right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            is_type_name__269=is_type_name(buf_268,info);
            define_function_pointer_flag_270=(_Bool)0;
            if(_if_conditional338=string_operator_not_equals(buf_268,"if")&&string_operator_not_equals(buf_268,"while")&&string_operator_not_equals(buf_268,"for")&&string_operator_not_equals(buf_268,"switch")&&string_operator_not_equals(buf_268,"return")&&string_operator_not_equals(buf_268,"sizeof")&&string_operator_not_equals(buf_268,"isheap")&&string_operator_not_equals(buf_268,"guard")&&string_operator_not_equals(buf_268,"ispointer")&&string_operator_not_equals(buf_268,"__typeof__")&&string_operator_not_equals(buf_268,"dynamic_typeof")&&string_operator_not_equals(buf_268,"typeof")&&string_operator_not_equals(buf_268,"gc_inc")&&string_operator_not_equals(buf_268,"gc_dec")&&string_operator_not_equals(buf_268,"case")&&string_operator_not_equals(buf_268,"_Alignof")&&string_operator_not_equals(buf_268,"_Alignas")&&string_operator_not_equals(buf_268,"__alignof__")&&*info->p==40&&*(info->p+1)!=42,            _if_conditional338) {
                ((struct tuple3$3sTypephcharphbool*)(right_value319=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value319,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional339=*info->p==40,                _if_conditional339) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(_if_conditional340=*info->p==42,                    _if_conditional340) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_function_pointer_flag_270=(_Bool)1;
                    }
                }
                info->p=head_266;
                info->sline=head_sline_267;
            }
            lambda_flag_271=(_Bool)0;
            if(_if_conditional341=string_operator_not_equals(buf_268,"if")&&string_operator_not_equals(buf_268,"while")&&string_operator_not_equals(buf_268,"for")&&string_operator_not_equals(buf_268,"switch")&&string_operator_not_equals(buf_268,"return")&&string_operator_not_equals(buf_268,"sizeof")&&string_operator_not_equals(buf_268,"_Alignof")&&string_operator_not_equals(buf_268,"__alignof__")&&string_operator_not_equals(buf_268,"_Alignas")&&string_operator_not_equals(buf_268,"isheap")&&string_operator_not_equals(buf_268,"guard")&&string_operator_not_equals(buf_268,"ispointer")&&string_operator_not_equals(buf_268,"__typeof__")&&string_operator_not_equals(buf_268,"dynamic_typeof")&&string_operator_not_equals(buf_268,"typeof")&&string_operator_not_equals(buf_268,"gc_inc")&&string_operator_not_equals(buf_268,"gc_dec")&&string_operator_not_equals(buf_268,"case")&&is_type_name__269,            _if_conditional341) {
                info->p=head_266;
                info->sline=head_sline_267;
                ((struct tuple3$3sTypephcharphbool*)(right_value320=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value320,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                word2_272=(char*)come_increment_ref_count(((char*)(right_value321=backtrace_parse_word(info))));
                right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(_if_conditional342=string_operator_equals(word2_272,"lambda"),                _if_conditional342) {
                    lambda_flag_271=(_Bool)1;
                }
                info->p=head_266;
                info->sline=head_sline_267;
                word2_272 = come_decrement_ref_count2(word2_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            fun_name_with_type_name_273=(_Bool)0;
            if(_if_conditional343=string_operator_not_equals(buf_268,"if")&&string_operator_not_equals(buf_268,"while")&&string_operator_not_equals(buf_268,"for")&&string_operator_not_equals(buf_268,"switch")&&string_operator_not_equals(buf_268,"return")&&string_operator_not_equals(buf_268,"sizeof")&&string_operator_not_equals(buf_268,"_Alignof")&&string_operator_not_equals(buf_268,"__alignof__")&&string_operator_not_equals(buf_268,"_Alignas")&&string_operator_not_equals(buf_268,"isheap")&&string_operator_not_equals(buf_268,"guard")&&string_operator_not_equals(buf_268,"ispointer")&&string_operator_not_equals(buf_268,"dynamic_typeof")&&string_operator_not_equals(buf_268,"__typeof__")&&string_operator_not_equals(buf_268,"typeof")&&string_operator_not_equals(buf_268,"gc_inc")&&string_operator_not_equals(buf_268,"gc_dec")&&string_operator_not_equals(buf_268,"case"),            _if_conditional343) {
                info->p=head_266;
                info->sline=head_sline_267;
                info->no_output_err=(_Bool)1;
                if(_if_conditional344=xisalpha(*info->p)||*info->p==95,                _if_conditional344) {
                    word2_274=(char*)come_increment_ref_count(((char*)(right_value322=parse_word(info))));
                    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    word2_274 = come_decrement_ref_count2(word2_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                while(_while_condtional34=*info->p==42,                _while_condtional34) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(_if_conditional345=*info->p==58&&*(info->p+1)==58,                _if_conditional345) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    if(_if_conditional346=xisalpha(*info->p)||*info->p==95,                    _if_conditional346) {
                        fun_name_with_type_name_273=(_Bool)1;
                    }
                }
                info->no_output_err=(_Bool)0;
                info->p=head_266;
                info->sline=head_sline_267;
            }
            call_method_generics_fun_call_275=(_Bool)0;
            {
                info->p=head_266;
                info->sline=head_sline_267;
                if(_if_conditional347=xisalpha(*info->p)||*info->p==95,                _if_conditional347) {
                    __dec_obj118=buf_268;
                    buf_268=(char*)come_increment_ref_count(((char*)(right_value323=parse_word(info))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional356=!is_type_name(buf_268,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_268)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_268)==((void*)0)&&*info->p==60,                _if_conditional356) {
                    nest_279=0;
                    while(_while_condtional36=*info->p,                    _while_condtional36) {
                        if(_if_conditional357=*info->p==60,                        _if_conditional357) {
                            info->p++;
                            nest_279++;
                        }
                        else {
                            if(_if_conditional358=*info->p==62,                            _if_conditional358) {
                                info->p++;
                                nest_279--;
                                if(_if_conditional359=nest_279==0,                                _if_conditional359) {
                                    break;
                                }
                            }
                            else {
                                if(_if_conditional360=*info->p==10||*info->p==59,                                _if_conditional360) {
                                    break;
                                }
                                else {
                                    info->p++;
                                }
                            }
                        }
                    }
                    if(_if_conditional361=*info->p==40,                    _if_conditional361) {
                        call_method_generics_fun_call_275=(_Bool)1;
                    }
                }
                info->p=head_266;
                info->sline=head_sline_267;
            }
            parse_sharp_v5(info);
            __dec_obj119=buf_268;
            buf_268=(char*)come_increment_ref_count(((char*)(right_value324=parse_word(info))));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(lambda_flag_271) {
                info->p=head_266;
                info->sline=head_sline_267;
                __result195__ = __result_obj__ = ((struct sNode*)(right_value325=parse_function(info)));
                buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result195__;
            }
            else {
                if(_if_conditional363=(string_operator_equals(buf_268,"string")||string_operator_equals(buf_268,"wstring"))&&*info->p==40,                _if_conditional363) {
                    node_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=parse_function_call(buf_268,info))));
                    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result196__ = __result_obj__ = node_280;
                    if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result196__;
                    if(node_280) { node_280 = come_decrement_ref_count2(node_280, ((struct sNode*)node_280)->finalize, ((struct sNode*)node_280)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional364=string_operator_equals(buf_268,"__func__"),                    _if_conditional364) {
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1125, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sFuncNode*)(right_value328=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value327=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1125, "sFuncNode")))),info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result199__ = __result_obj__ = ((struct sNode*)(right_value331=_inf_value4));
                        buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value327,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value328,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result199__;
                    }
                    else {
                        if(_if_conditional369=string_operator_equals(buf_268,"__line__"),                        _if_conditional369) {
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1128, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sLineNode*)(right_value333=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value332=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1128, "sLineNode")))),info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result202__ = __result_obj__ = ((struct sNode*)(right_value336=_inf_value5));
                            buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value332,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value333,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result202__;
                        }
                        else {
                            if(_if_conditional374=string_operator_equals(buf_268,"__sname__"),                            _if_conditional374) {
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1131, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sSNameNode*)(right_value338=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value337=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1131, "sSNameNode")))),info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sNodeBase_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result205__ = __result_obj__ = ((struct sNode*)(right_value341=_inf_value6));
                                buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value337,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value338,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result205__;
                            }
                            else {
                                if(_if_conditional379=string_operator_equals(buf_268,"__caller_func__"),                                _if_conditional379) {
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1134, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sCallerFuncNode*)(right_value343=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value342=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1134, "sCallerFuncNode")))),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sNodeBase_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result208__ = __result_obj__ = ((struct sNode*)(right_value346=_inf_value7));
                                    buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value342,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value343,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result208__;
                                }
                                else {
                                    if(_if_conditional384=string_operator_equals(buf_268,"__caller_line__"),                                    _if_conditional384) {
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1137, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count(((struct sCallerLineNode*)(right_value348=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value347=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1137, "sCallerLineNode")))),info))));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sNodeBase_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result211__ = __result_obj__ = ((struct sNode*)(right_value351=_inf_value8));
                                        buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value347,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value348,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result211__;
                                    }
                                    else {
                                        if(_if_conditional389=string_operator_equals(buf_268,"__caller_sname__"),                                        _if_conditional389) {
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1140, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sCallerSNameNode*)(right_value353=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value352=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1140, "sCallerSNameNode")))),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result214__ = __result_obj__ = ((struct sNode*)(right_value356=_inf_value9));
                                            buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value352,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value353,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result214__;
                                        }
                                        else {
                                            if(_if_conditional394=(string_operator_equals(buf_268,"sizeof")||string_operator_equals(buf_268,"_Alignof")||string_operator_equals(buf_268,"_Alignas")||string_operator_equals(buf_268,"__alignof__"))&&*info->p==40,                                            _if_conditional394) {
                                                node_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=string_node_v21(buf_268,head_266,head_sline_267,info))));
                                                if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                __result215__ = __result_obj__ = node_287;
                                                if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                return __result215__;
                                                if(node_287) { node_287 = come_decrement_ref_count2(node_287, ((struct sNode*)node_287)->finalize, ((struct sNode*)node_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(fun_name_with_type_name_273) {
                                                    fun_name_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value359=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value358=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1148, "buffer"))))))));
                                                    come_call_finalizer3(right_value358,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value359,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(fun_name_288,buf_268);
                                                    type_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value361=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value360=buffer_to_string(fun_name_288))))))));
                                                    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional400=type_292==((void*)0),                                                    _if_conditional400) {
                                                        klass_298=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value362=buffer_to_string(fun_name_288))));
                                                        right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(klass_298) {
                                                            __dec_obj126=type_292;
                                                            type_292=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value363=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1158, "sType")))),buf_268,(_Bool)0,info))));
                                                            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(right_value363,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value364,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        }
                                                        else {
                                                            err_msg(info,"null type(%s)",buf_268);
                                                            exit(2);
                                                        }
                                                    }
                                                    while(_while_condtional40=*info->p==42,                                                    _while_condtional40) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        if(_if_conditional413=type_292->mClass->mStruct==(_Bool)0,                                                        _if_conditional413) {
                                                            buffer_append_str(fun_name_288,"p");
                                                        }
                                                    }
                                                    (come_push_stackframe("05call.c", 1175, 30),__exception_result_var_b11=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b11);
                                                    (come_push_stackframe("05call.c", 1176, 31),__exception_result_var_b12=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b12);
                                                    buffer_append_str(fun_name_288,"_");
                                                    buf2_299=(char*)come_increment_ref_count(((char*)(right_value365=parse_word(info))));
                                                    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    buffer_append_str(fun_name_288,buf2_299);
                                                    node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=parse_function_call(((char*)(right_value366=buffer_to_string(fun_name_288))),info))));
                                                    right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __result224__ = __result_obj__ = node_300;
                                                    come_call_finalizer3(fun_name_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_292,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_299 = come_decrement_ref_count2(buf2_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result224__;
                                                    come_call_finalizer3(fun_name_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(type_292,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    buf2_299 = come_decrement_ref_count2(buf2_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional414=*info->p==58&&*(info->p+1)==58,                                                    _if_conditional414) {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        fun_name_301=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value369=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value368=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1192, "buffer"))))))));
                                                        come_call_finalizer3(right_value368,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value369,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(fun_name_301,buf_268);
                                                        buffer_append_str(fun_name_301,"_");
                                                        buf2_302=(char*)come_increment_ref_count(((char*)(right_value370=parse_word(info))));
                                                        right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(fun_name_301,buf2_302);
                                                        node_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=parse_function_call(((char*)(right_value371=buffer_to_string(fun_name_301))),info))));
                                                        right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __result225__ = __result_obj__ = node_303;
                                                        come_call_finalizer3(fun_name_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_302 = come_decrement_ref_count2(buf2_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result225__;
                                                        come_call_finalizer3(fun_name_301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_302 = come_decrement_ref_count2(buf2_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(call_method_generics_fun_call_275) {
                                                            node_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=parse_function_call(buf_268,info))));
                                                            if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            __result226__ = __result_obj__ = node_304;
                                                            if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result226__;
                                                            if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(_if_conditional416=string_operator_not_equals(buf_268,"if")&&string_operator_not_equals(buf_268,"while")&&string_operator_not_equals(buf_268,"for")&&string_operator_not_equals(buf_268,"switch")&&string_operator_not_equals(buf_268,"return")&&string_operator_not_equals(buf_268,"sizeof")&&string_operator_not_equals(buf_268,"isheap")&&string_operator_not_equals(buf_268,"ispointer")&&string_operator_not_equals(buf_268,"guard")&&string_operator_not_equals(buf_268,"__typeof__")&&string_operator_not_equals(buf_268,"dynamic_typeof")&&string_operator_not_equals(buf_268,"typeof")&&string_operator_not_equals(buf_268,"gc_inc")&&string_operator_not_equals(buf_268,"gc_dec")&&string_operator_not_equals(buf_268,"case")&&string_operator_not_equals(buf_268,"_Alignof")&&string_operator_not_equals(buf_268,"__alignof__")&&string_operator_not_equals(buf_268,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__269),                                                            _if_conditional416) {
                                                                node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=parse_function_call(buf_268,info))));
                                                                if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                __result227__ = __result_obj__ = node_305;
                                                                if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result227__;
                                                                if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=string_node_v21(buf_268,head_266,head_sline_267,info))));
                                                                if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                __result228__ = __result_obj__ = node_306;
                                                                if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result228__;
                                                                if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            buf_268 = come_decrement_ref_count2(buf_268, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node_307=(struct sNode*)come_increment_ref_count((come_push_stackframe("05call.c", 1224, 32),__exception_result_var_b13=((struct sNode*)(right_value376=expression_node_v96(info))), come_pop_stackframe(), __exception_result_var_b13));
            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result229__ = __result_obj__ = node_307;
            if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result229__;
            if(node_307) { node_307 = come_decrement_ref_count2(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result230__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result230__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional329=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional329) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional330=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional330) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional331=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional331) {
                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
_Bool _if_conditional332;
struct sReturnNode* __result188__;
void* right_value313;
struct sReturnNode* result_265;
_Bool _if_conditional333;
_Bool _if_conditional334;
void* right_value314;
char* __dec_obj115;
_Bool _if_conditional335;
void* right_value315;
struct sNode* __dec_obj116;
_Bool _if_conditional336;
void* right_value316;
char* __dec_obj117;
struct sReturnNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
memset(&result_265, 0, sizeof(struct sReturnNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
                if(_if_conditional332=self==(void*)0,                _if_conditional332) {
                    __result188__ = __result_obj__ = (void*)0;
                    return __result188__;
                }
                result_265=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value313=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                come_call_finalizer3(right_value313,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional333=self!=((void*)0),                _if_conditional333) {
                    result_265->sline=self->sline;
                }
                if(_if_conditional334=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional334) {
                    __dec_obj115=result_265->sname;
                    result_265->sname=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->sname))));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional335=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional335) {
                    __dec_obj116=result_265->value;
                    result_265->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(self->value))));
                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional336=self!=((void*)0)&&self->value_source!=((void*)0),                _if_conditional336) {
                    __dec_obj117=result_265->value_source;
                    result_265->value_source=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(self->value_source))));
                    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result189__ = __result_obj__ = result_265;
                come_call_finalizer3(result_265,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result189__;
                come_call_finalizer3(result_265,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_276;
unsigned int hash_277;
unsigned int it_278;
_Bool _while_condtional35;
_Bool _if_conditional348;
_Bool _if_conditional349;
struct sVar* __result191__;
_Bool _if_conditional354;
_Bool _if_conditional355;
struct sVar* __result192__;
struct sVar* __result193__;
struct sVar* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_276, 0, sizeof(struct sVar*));
memset(&hash_277, 0, sizeof(unsigned int));
memset(&it_278, 0, sizeof(unsigned int));
                    memset(&default_value_276,0,sizeof(struct sVar*));
                    hash_277=string_get_hash_key(((char*)key))%self->size;
                    it_278=hash_277;
                    while(_while_condtional35=(_Bool)1,                    _while_condtional35) {
                        if(_if_conditional348=self->item_existance[it_278],                        _if_conditional348) {
                            if(_if_conditional349=string_equals(self->keys[it_278],key),                            _if_conditional349) {
                                __result191__ = __result_obj__ = self->items[it_278];
                                come_call_finalizer3(default_value_276,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result191__;
                            }
                            it_278++;
                            if(_if_conditional354=it_278>=self->size,                            _if_conditional354) {
                                it_278=0;
                            }
                            else {
                                if(_if_conditional355=it_278==hash_277,                                _if_conditional355) {
                                    __result192__ = __result_obj__ = default_value_276;
                                    come_call_finalizer3(default_value_276,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result192__;
                                }
                            }
                        }
                        else {
                            __result193__ = __result_obj__ = default_value_276;
                            come_call_finalizer3(default_value_276,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result193__;
                        }
                    }
                    __result194__ = __result_obj__ = default_value_276;
                    come_call_finalizer3(default_value_276,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result194__;
                    come_call_finalizer3(default_value_276,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional350=self!=((void*)0)&&self->mName!=((void*)0),                                    _if_conditional350) {
                                        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional351=self!=((void*)0)&&self->mCValueName!=((void*)0),                                    _if_conditional351) {
                                        self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional352=self!=((void*)0)&&self->mType!=((void*)0),                                    _if_conditional352) {
                                        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional353=self!=((void*)0)&&self->mFunName!=((void*)0),                                    _if_conditional353) {
                                        self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static void sFuncNode_finalize(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional365;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional365=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional365) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
_Bool _if_conditional366;
struct sFuncNode* __result197__;
void* right_value329;
struct sFuncNode* result_281;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value330;
char* __dec_obj120;
struct sFuncNode* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
memset(&result_281, 0, sizeof(struct sFuncNode*));
right_value330 = (void*)0;
                            if(_if_conditional366=self==(void*)0,                            _if_conditional366) {
                                __result197__ = __result_obj__ = (void*)0;
                                return __result197__;
                            }
                            result_281=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value329=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            come_call_finalizer3(right_value329,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional367=self!=((void*)0),                            _if_conditional367) {
                                result_281->sline=self->sline;
                            }
                            if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional368) {
                                __dec_obj120=result_281->sname;
                                result_281->sname=(char*)come_increment_ref_count(((char*)(right_value330=string_clone(self->sname))));
                                __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result198__ = __result_obj__ = result_281;
                            come_call_finalizer3(result_281,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result198__;
                            come_call_finalizer3(result_281,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional370) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
_Bool _if_conditional371;
struct sLineNode* __result200__;
void* right_value334;
struct sLineNode* result_282;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value335;
char* __dec_obj121;
struct sLineNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
memset(&result_282, 0, sizeof(struct sLineNode*));
right_value335 = (void*)0;
                                if(_if_conditional371=self==(void*)0,                                _if_conditional371) {
                                    __result200__ = __result_obj__ = (void*)0;
                                    return __result200__;
                                }
                                result_282=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value334=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                come_call_finalizer3(right_value334,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional372=self!=((void*)0),                                _if_conditional372) {
                                    result_282->sline=self->sline;
                                }
                                if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional373) {
                                    __dec_obj121=result_282->sname;
                                    result_282->sname=(char*)come_increment_ref_count(((char*)(right_value335=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result201__ = __result_obj__ = result_282;
                                come_call_finalizer3(result_282,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result201__;
                                come_call_finalizer3(result_282,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional375=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional375) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
_Bool _if_conditional376;
struct sSNameNode* __result203__;
void* right_value339;
struct sSNameNode* result_283;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value340;
char* __dec_obj122;
struct sSNameNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
memset(&result_283, 0, sizeof(struct sSNameNode*));
right_value340 = (void*)0;
                                    if(_if_conditional376=self==(void*)0,                                    _if_conditional376) {
                                        __result203__ = __result_obj__ = (void*)0;
                                        return __result203__;
                                    }
                                    result_283=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value339=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    come_call_finalizer3(right_value339,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional377=self!=((void*)0),                                    _if_conditional377) {
                                        result_283->sline=self->sline;
                                    }
                                    if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional378) {
                                        __dec_obj122=result_283->sname;
                                        result_283->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->sname))));
                                        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result204__ = __result_obj__ = result_283;
                                    come_call_finalizer3(result_283,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result204__;
                                    come_call_finalizer3(result_283,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional380;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional380=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional380) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
_Bool _if_conditional381;
struct sCallerFuncNode* __result206__;
void* right_value344;
struct sCallerFuncNode* result_284;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value345;
char* __dec_obj123;
struct sCallerFuncNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
memset(&result_284, 0, sizeof(struct sCallerFuncNode*));
right_value345 = (void*)0;
                                        if(_if_conditional381=self==(void*)0,                                        _if_conditional381) {
                                            __result206__ = __result_obj__ = (void*)0;
                                            return __result206__;
                                        }
                                        result_284=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value344=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        come_call_finalizer3(right_value344,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional382=self!=((void*)0),                                        _if_conditional382) {
                                            result_284->sline=self->sline;
                                        }
                                        if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional383) {
                                            __dec_obj123=result_284->sname;
                                            result_284->sname=(char*)come_increment_ref_count(((char*)(right_value345=string_clone(self->sname))));
                                            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result207__ = __result_obj__ = result_284;
                                        come_call_finalizer3(result_284,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result207__;
                                        come_call_finalizer3(result_284,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional385) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
_Bool _if_conditional386;
struct sCallerLineNode* __result209__;
void* right_value349;
struct sCallerLineNode* result_285;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value350;
char* __dec_obj124;
struct sCallerLineNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
memset(&result_285, 0, sizeof(struct sCallerLineNode*));
right_value350 = (void*)0;
                                            if(_if_conditional386=self==(void*)0,                                            _if_conditional386) {
                                                __result209__ = __result_obj__ = (void*)0;
                                                return __result209__;
                                            }
                                            result_285=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value349=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            come_call_finalizer3(right_value349,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional387=self!=((void*)0),                                            _if_conditional387) {
                                                result_285->sline=self->sline;
                                            }
                                            if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional388) {
                                                __dec_obj124=result_285->sname;
                                                result_285->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->sname))));
                                                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result210__ = __result_obj__ = result_285;
                                            come_call_finalizer3(result_285,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result210__;
                                            come_call_finalizer3(result_285,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional390) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
_Bool _if_conditional391;
struct sCallerSNameNode* __result212__;
void* right_value354;
struct sCallerSNameNode* result_286;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value355;
char* __dec_obj125;
struct sCallerSNameNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
memset(&result_286, 0, sizeof(struct sCallerSNameNode*));
right_value355 = (void*)0;
                                                if(_if_conditional391=self==(void*)0,                                                _if_conditional391) {
                                                    __result212__ = __result_obj__ = (void*)0;
                                                    return __result212__;
                                                }
                                                result_286=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value354=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                come_call_finalizer3(right_value354,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional392=self!=((void*)0),                                                _if_conditional392) {
                                                    result_286->sline=self->sline;
                                                }
                                                if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional393) {
                                                    __dec_obj125=result_286->sname;
                                                    result_286->sname=(char*)come_increment_ref_count(((char*)(right_value355=string_clone(self->sname))));
                                                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result213__ = __result_obj__ = result_286;
                                                come_call_finalizer3(result_286,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result213__;
                                                come_call_finalizer3(result_286,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_289;
unsigned int hash_290;
unsigned int it_291;
_Bool _while_condtional37;
_Bool _if_conditional396;
_Bool _if_conditional397;
struct sType* __result216__;
_Bool _if_conditional398;
_Bool _if_conditional399;
struct sType* __result217__;
struct sType* __result218__;
struct sType* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_289, 0, sizeof(struct sType*));
memset(&hash_290, 0, sizeof(unsigned int));
memset(&it_291, 0, sizeof(unsigned int));
                                                        memset(&default_value_289,0,sizeof(struct sType*));
                                                        hash_290=string_get_hash_key(((char*)key))%self->size;
                                                        it_291=hash_290;
                                                        while(_while_condtional37=(_Bool)1,                                                        _while_condtional37) {
                                                            if(_if_conditional396=self->item_existance[it_291],                                                            _if_conditional396) {
                                                                if(_if_conditional397=string_equals(self->keys[it_291],key),                                                                _if_conditional397) {
                                                                    __result216__ = __result_obj__ = self->items[it_291];
                                                                    come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result216__;
                                                                }
                                                                it_291++;
                                                                if(_if_conditional398=it_291>=self->size,                                                                _if_conditional398) {
                                                                    it_291=0;
                                                                }
                                                                else {
                                                                    if(_if_conditional399=it_291==hash_290,                                                                    _if_conditional399) {
                                                                        __result217__ = __result_obj__ = default_value_289;
                                                                        come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result217__;
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                __result218__ = __result_obj__ = default_value_289;
                                                                come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result218__;
                                                            }
                                                        }
                                                        __result219__ = __result_obj__ = default_value_289;
                                                        come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result219__;
                                                        come_call_finalizer3(default_value_289,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_293;
unsigned int hash_294;
unsigned int it_295;
_Bool _while_condtional38;
_Bool _if_conditional401;
_Bool _if_conditional402;
struct sClass* __result220__;
_Bool _if_conditional410;
_Bool _if_conditional411;
struct sClass* __result221__;
struct sClass* __result222__;
struct sClass* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_293, 0, sizeof(struct sClass*));
memset(&hash_294, 0, sizeof(unsigned int));
memset(&it_295, 0, sizeof(unsigned int));
                                                            memset(&default_value_293,0,sizeof(struct sClass*));
                                                            hash_294=string_get_hash_key(((char*)key))%self->size;
                                                            it_295=hash_294;
                                                            while(_while_condtional38=(_Bool)1,                                                            _while_condtional38) {
                                                                if(_if_conditional401=self->item_existance[it_295],                                                                _if_conditional401) {
                                                                    if(_if_conditional402=string_equals(self->keys[it_295],key),                                                                    _if_conditional402) {
                                                                        __result220__ = __result_obj__ = self->items[it_295];
                                                                        come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result220__;
                                                                    }
                                                                    it_295++;
                                                                    if(_if_conditional410=it_295>=self->size,                                                                    _if_conditional410) {
                                                                        it_295=0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional411=it_295==hash_294,                                                                        _if_conditional411) {
                                                                            __result221__ = __result_obj__ = default_value_293;
                                                                            come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result221__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result222__ = __result_obj__ = default_value_293;
                                                                    come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result222__;
                                                                }
                                                            }
                                                            __result223__ = __result_obj__ = default_value_293;
                                                            come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result223__;
                                                            come_call_finalizer3(default_value_293,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional408;
_Bool _if_conditional409;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional403=self!=((void*)0)&&self->mName!=((void*)0),                                                                            _if_conditional403) {
                                                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional404=self!=((void*)0)&&self->mFields!=((void*)0),                                                                            _if_conditional404) {
                                                                                come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional408=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                                                            _if_conditional408) {
                                                                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional409=self!=((void*)0)&&self->mParentClassName!=((void*)0),                                                                            _if_conditional409) {
                                                                                self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_296;
_Bool _while_condtional39;
struct list_item$1tuple2$2charphsTypephph* prev_it_297;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_296, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_297, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                    it_296=self->head;
                                                                                    while(_while_condtional39=it_296!=((void*)0),                                                                                    _while_condtional39) {
                                                                                        prev_it_297=it_296;
                                                                                        it_296=it_296->next;
                                                                                        come_call_finalizer3(prev_it_297,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool _if_conditional405;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional405=self!=((void*)0)&&self->item!=((void*)0),                                                                                            _if_conditional405) {
                                                                                                come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                    if(_if_conditional406=self!=((void*)0)&&self->v1!=((void*)0),                                                                                                    _if_conditional406) {
                                                                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    if(_if_conditional407=self!=((void*)0)&&self->v2!=((void*)0),                                                                                                    _if_conditional407) {
                                                                                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                                    }
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value377;
struct sNode* __exception_result_var_b14;
struct sNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
    __result231__ = __result_obj__ = (come_push_stackframe("05call.c", 1237, 33),__exception_result_var_b14=((struct sNode*)(right_value377=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b14);
    if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result231__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional417;
void* right_value378;
void* right_value379;
struct sNode* __dec_obj127;
struct sNode* __result232__;
_Bool _if_conditional418;
void* right_value380;
void* right_value381;
struct sNode* __dec_obj128;
struct sNode* __result233__;
struct sNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
    if(_if_conditional417=parsecmp("or",info),    _if_conditional417) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj127=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(node)))),info))));
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result232__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result232__;
    }
    else {
        if(_if_conditional418=parsecmp("and",info),        _if_conditional418) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj128=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=sNode_clone(node)))),info))));
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result233__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result233__;
        }
    }
    __result234__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result234__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value382;
struct sNode* node_308;
void* right_value383;
struct sNode* __dec_obj129;
struct sNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value382 = (void*)0;
memset(&node_308, 0, sizeof(struct sNode*));
right_value383 = (void*)0;
    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=expression_v13(info))));
    if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj129=node_308;
    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_308),info))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result235__ = __result_obj__ = node_308;
    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result235__;
    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_309;
void* right_value384;
void* right_value385;
struct buffer* buf_310;
_Bool _if_conditional419;
void* right_value386;
char* __dec_obj130;
_Bool _if_conditional420;
int i_311;
_Bool _if_conditional421;
void* right_value387;
char* __dec_obj131;
void* right_value388;
char* __dec_obj132;
int i_312;
_Bool _if_conditional422;
_Bool _if_conditional424;
void* right_value389;
void* right_value390;
char* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_309, 0, sizeof(char*));
right_value384 = (void*)0;
right_value385 = (void*)0;
memset(&buf_310, 0, sizeof(struct buffer*));
right_value386 = (void*)0;
memset(&i_311, 0, sizeof(int));
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&i_312, 0, sizeof(int));
right_value389 = (void*)0;
right_value390 = (void*)0;
    buf_310=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value384=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1274, "buffer"))))))));
    come_call_finalizer3(right_value384,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional419=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional419) {
        __dec_obj130=struct_name_309;
        struct_name_309=(char*)come_increment_ref_count(((char*)(right_value386=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value386 = come_decrement_ref_count2(right_value386, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional420=!obj_type->mClass->mStruct,        _if_conditional420) {
            for(            i_311=0;            i_311<obj_type->mOriginalTypeNamePointerNum;            i_311++            ){
                buffer_append_str(buf_310,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj131=struct_name_309;
            struct_name_309=(char*)come_increment_ref_count(((char*)(right_value387=__builtin_string(obj_type->mClass->mName))));
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj132=struct_name_309;
            struct_name_309=(char*)come_increment_ref_count(((char*)(right_value388=create_generics_name(obj_type,info))));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_312=0;            i_312<obj_type->mPointerNum;            i_312++            ){
                buffer_append_str(buf_310,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_310,"a");
    }
    if(_if_conditional424=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional424) {
        buffer_append_str(buf_310,"pa");
    }
    __result238__ = __result_obj__ = ((char*)(right_value390=xsprintf("%s%s_%s",struct_name_309,((char*)(right_value389=buffer_to_string(buf_310))),fun_name)));
    struct_name_309 = come_decrement_ref_count2(struct_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_310,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value390 = come_decrement_ref_count2(right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result238__;
    struct_name_309 = come_decrement_ref_count2(struct_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_310,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional423;
int __result236__;
int __result237__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional423=self==((void*)0),        _if_conditional423) {
            __result236__ = 0;
            return __result236__;
        }
        __result237__ = self->len;
        return __result237__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_313;
void* right_value391;
void* right_value392;
struct buffer* buf_314;
_Bool _if_conditional425;
void* right_value393;
char* __dec_obj133;
_Bool _if_conditional426;
int i_315;
_Bool _if_conditional427;
void* right_value394;
char* __dec_obj134;
void* right_value395;
char* __dec_obj135;
int i_316;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value396;
int len_318;
void* right_value397;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_313, 0, sizeof(char*));
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&buf_314, 0, sizeof(struct buffer*));
right_value393 = (void*)0;
memset(&i_315, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&i_316, 0, sizeof(int));
right_value396 = (void*)0;
memset(&len_318, 0, sizeof(int));
right_value397 = (void*)0;
    buf_314=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value392=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value391=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1309, "buffer"))))))));
    come_call_finalizer3(right_value391,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value392,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional425=string_operator_not_equals(obj_type->mOriginalTypeName,""),    _if_conditional425) {
        __dec_obj133=struct_name_313;
        struct_name_313=(char*)come_increment_ref_count(((char*)(right_value393=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional426=!obj_type->mClass->mStruct,        _if_conditional426) {
            for(            i_315=0;            i_315<obj_type->mOriginalTypeNamePointerNum;            i_315++            ){
                buffer_append_str(buf_314,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj134=struct_name_313;
            struct_name_313=(char*)come_increment_ref_count(((char*)(right_value394=__builtin_string(obj_type->mClass->mName))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj135=struct_name_313;
            struct_name_313=(char*)come_increment_ref_count(((char*)(right_value395=create_generics_name(obj_type,info))));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_316=0;            i_316<obj_type->mPointerNum;            i_316++            ){
                buffer_append_str(buf_314,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_314,"a");
    }
    if(_if_conditional429=!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0,    _if_conditional429) {
        buffer_append_str(buf_314,"pa");
    }
    char none_method_name_317[charp_length(fun_name)+1];
    memset(&none_method_name_317, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_318=string_length(struct_name_313)+string_length(((char*)(right_value396=buffer_to_string(buf_314))));
    right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_317,fun_name+len_318+1,charp_length(fun_name)-len_318-1);
    none_method_name_317[charp_length(fun_name)-len_318-1]=0;
    __result239__ = __result_obj__ = ((char*)(right_value397=__builtin_string(none_method_name_317)));
    struct_name_313 = come_decrement_ref_count2(struct_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result239__;
    struct_name_313 = come_decrement_ref_count2(struct_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value398;
char* struct_name_319;
void* right_value399;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&struct_name_319, 0, sizeof(char*));
right_value399 = (void*)0;
    struct_name_319=(char*)come_increment_ref_count(((char*)(right_value398=__builtin_string(obj_class->mName))));
    right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result240__ = __result_obj__ = ((char*)(right_value399=xsprintf("%s_%s",struct_name_319,fun_name)));
    struct_name_319 = come_decrement_ref_count2(struct_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result240__;
    struct_name_319 = come_decrement_ref_count2(struct_name_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result241__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result241__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional430;
void* right_value400;
void* right_value401;
struct list$1tuple2$2charphsNodephph* params_320;
_Bool _while_condtional41;
_Bool _if_conditional431;
char* p_321;
int sline_322;
_Bool err_flag_323;
void* right_value402;
char* label_324;
_Bool _if_conditional432;
void* right_value403;
char* __dec_obj136;
_Bool _if_conditional433;
char* __dec_obj137;
_Bool no_comma_325;
void* right_value404;
struct sNode* node_326;
void* right_value405;
struct sNode* __dec_obj138;
void* right_value406;
void* right_value407;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value408;
void* right_value409;
struct sNode* _inf_value10;
struct sLambdaCall* _inf_obj_value10;
void* right_value414;
struct sNode* __result244__;
struct sNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&params_320, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_321, 0, sizeof(char*));
memset(&sline_322, 0, sizeof(int));
memset(&err_flag_323, 0, sizeof(_Bool));
right_value402 = (void*)0;
memset(&label_324, 0, sizeof(char*));
right_value403 = (void*)0;
memset(&no_comma_325, 0, sizeof(_Bool));
right_value404 = (void*)0;
memset(&node_326, 0, sizeof(struct sNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value414 = (void*)0;
    parse_sharp_v5(info);
    if(_if_conditional430=!node->terminated(node->_protocol_obj)&&*info->p==40,    _if_conditional430) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_320=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value401=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value400=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1373, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value400,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value401,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while(_while_condtional41=(_Bool)1,        _while_condtional41) {
            if(_if_conditional431=*info->p==41,            _if_conditional431) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_321=info->p;
            sline_322=info->sline;
            err_flag_323=(_Bool)0;
            label_324=(char*)come_increment_ref_count(((char*)(right_value402=__builtin_string(""))));
            right_value402 = come_decrement_ref_count2(right_value402, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(_if_conditional432=xisalpha(*info->p)||*info->p==95,            _if_conditional432) {
                __dec_obj136=label_324;
                label_324=(char*)come_increment_ref_count(((char*)(right_value403=parse_word(info))));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_323=(_Bool)1;
            }
            if(_if_conditional433=err_flag_323==(_Bool)1&&*info->p==58,            _if_conditional433) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj137=label_324;
                label_324=((void*)0);
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_321;
                info->sline=sline_322;
            }
            no_comma_325=info->no_comma;
            info->no_comma=(_Bool)1;
            node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=expression_v13(info))));
            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj138=node_326;
            node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_326),info))));
            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_325;
            list$1tuple2$2charphsNodephph_push_back(params_320,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value407=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value406=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1412, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_324),(struct sNode*)come_increment_ref_count(node_326))))));
            come_call_finalizer3(right_value406,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value407,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(_if_conditional434=*info->p==44,            _if_conditional434) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(_if_conditional435=*info->p==41,                _if_conditional435) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_324 = come_decrement_ref_count2(label_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_324 = come_decrement_ref_count2(label_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1430, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sLambdaCall*)(right_value409=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(right_value408=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1430, "sLambdaCall")))),(struct sNode*)come_increment_ref_count(node),params_320,info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLambdaCall_finalize;
        _inf_value10->clone=(void*)sLambdaCall_clone;
        _inf_value10->compile=(void*)sLambdaCall_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sLambdaCall_kind;
        __result244__ = __result_obj__ = ((struct sNode*)(right_value414=_inf_value10));
        come_call_finalizer3(params_320,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value408,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value409,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result244__;
        come_call_finalizer3(params_320,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result245__ = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result245__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional436) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional437=self!=((void*)0)&&self->node!=((void*)0),            _if_conditional437) {
                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional438=self!=((void*)0)&&self->params!=((void*)0),            _if_conditional438) {
                come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__;
_Bool _if_conditional439;
struct sLambdaCall* __result242__;
void* right_value410;
struct sLambdaCall* result_327;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value411;
char* __dec_obj139;
_Bool _if_conditional442;
void* right_value412;
struct sNode* __dec_obj140;
_Bool _if_conditional443;
void* right_value413;
struct list$1tuple2$2charphsNodephph* __dec_obj141;
struct sLambdaCall* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_327, 0, sizeof(struct sLambdaCall*));
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
            if(_if_conditional439=self==(void*)0,            _if_conditional439) {
                __result242__ = __result_obj__ = (void*)0;
                return __result242__;
            }
            result_327=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(right_value410=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"))));
            come_call_finalizer3(right_value410,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional440=self!=((void*)0),            _if_conditional440) {
                result_327->sline=self->sline;
            }
            if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional441) {
                __dec_obj139=result_327->sname;
                result_327->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional442=self!=((void*)0)&&self->node!=((void*)0),            _if_conditional442) {
                __dec_obj140=result_327->node;
                result_327->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(self->node))));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional443=self!=((void*)0)&&self->params!=((void*)0),            _if_conditional443) {
                __dec_obj141=result_327->params;
                result_327->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value413=list$1tuple2$2charphsNodephphp_clone(self->params))));
                come_call_finalizer3(__dec_obj141,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value413,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result243__ = __result_obj__ = result_327;
            come_call_finalizer3(result_327,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
            return __result243__;
            come_call_finalizer3(result_327,sLambdaCall_finalize, 0, 0, 0, 0, (void*)0);
}

