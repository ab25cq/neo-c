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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sSubNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMultNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sDivNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sModNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLShiftNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sRShiftNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sGtEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLtEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sLtNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sGtNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sNotEqNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sEq2Node
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sNotEq2Node
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sAndNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sXOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sAndAndNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sOrOrNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sCommaNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sConditionalNode
{
    int sline;
    char* sname;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated(struct sNullNode* self);

char* sNullNode_kind(struct sNullNode* self);

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated(struct sNilNode* self);

char* sNilNode_kind(struct sNilNode* self);

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated(struct sAddNode* self);

char* sAddNode_kind(struct sAddNode* self);

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated(struct sSubNode* self);

char* sSubNode_kind(struct sSubNode* self);

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated(struct sMultNode* self);

char* sMultNode_kind(struct sMultNode* self);

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated(struct sDivNode* self);

char* sDivNode_kind(struct sDivNode* self);

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated(struct sModNode* self);

char* sModNode_kind(struct sModNode* self);

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated(struct sLShiftNode* self);

char* sLShiftNode_kind(struct sLShiftNode* self);

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated(struct sRShiftNode* self);

char* sRShiftNode_kind(struct sRShiftNode* self);

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated(struct sGtEqNode* self);

char* sGtEqNode_kind(struct sGtEqNode* self);

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated(struct sLtEqNode* self);

char* sLtEqNode_kind(struct sLtEqNode* self);

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated(struct sLtNode* self);

char* sLtNode_kind(struct sLtNode* self);

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated(struct sGtNode* self);

char* sGtNode_kind(struct sGtNode* self);

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEqNode_terminated(struct sEqNode* self);

char* sEqNode_kind(struct sEqNode* self);

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated(struct sNotEqNode* self);

char* sNotEqNode_kind(struct sNotEqNode* self);

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated(struct sEq2Node* self);

char* sEq2Node_kind(struct sEq2Node* self);

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated(struct sNotEq2Node* self);

char* sNotEq2Node_kind(struct sNotEq2Node* self);

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated(struct sAndNode* self);

char* sAndNode_kind(struct sAndNode* self);

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated(struct sXOrNode* self);

char* sXOrNode_kind(struct sXOrNode* self);

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated(struct sOrNode* self);

char* sOrNode_kind(struct sOrNode* self);

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated(struct sAndAndNode* self);

char* sAndAndNode_kind(struct sAndAndNode* self);

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated(struct sOrOrNode* self);

char* sOrOrNode_kind(struct sOrOrNode* self);

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated(struct sCommaNode* self);

char* sCommaNode_kind(struct sCommaNode* self);

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated(struct sConditionalNode* self);

char* sConditionalNode_kind(struct sConditionalNode* self);

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1897, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1904, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1911, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1918, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1925, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1932, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1948, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1958, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1968, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1978, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1988, "smart_pointer$1long"))));
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
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2214, "list$1double")))),len,self)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2000, "buffer"))))))));
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
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 217, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(_if_conditional8=self->len==1,                    _if_conditional8) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 227, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 237, "list_item$1char"))));
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
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 217, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(_if_conditional10=self->len==1,                    _if_conditional10) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 227, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 237, "list_item$1short"))));
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
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 217, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(_if_conditional12=self->len==1,                    _if_conditional12) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 227, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 237, "list_item$1int"))));
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
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 217, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(_if_conditional14=self->len==1,                    _if_conditional14) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 227, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 237, "list_item$1long"))));
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
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 217, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(_if_conditional16=self->len==1,                    _if_conditional16) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 227, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 237, "list_item$1float"))));
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
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 217, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(_if_conditional18=self->len==1,                    _if_conditional18) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 227, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 237, "list_item$1double"))));
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










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional111;
struct sType* __dec_obj35;
_Bool _if_conditional112;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
_Bool _if_conditional114;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_87;
_Bool _if_conditional129;
void* right_value119;
_Bool _if_conditional130;
_Bool __result76__;
_Bool _if_conditional150;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
_Bool _if_conditional152;
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
_Bool _if_conditional153;
void* right_value126;
char* __dec_obj38;
_Bool _if_conditional154;
_Bool result_101;
_Bool _if_conditional155;
void* right_value127;
struct CVALUE* come_value_102;
char* left_value2_103;
void* right_value128;
void* right_value129;
_Bool _if_conditional160;
void* right_value130;
char* __dec_obj39;
void* right_value131;
char* __dec_obj40;
char* right_value2_107;
void* right_value132;
void* right_value133;
_Bool _if_conditional161;
void* right_value134;
char* __dec_obj41;
void* right_value135;
char* __dec_obj42;
void* right_value136;
void* right_value137;
void* right_value138;
void* right_value139;
char* __dec_obj43;
void* right_value140;
struct sType* type2_108;
void* right_value141;
struct sType* type3_109;
void* right_value142;
struct sType* __dec_obj44;
_Bool _if_conditional162;
void* right_value143;
char* __dec_obj45;
_Bool _if_conditional163;
void* right_value144;
void* right_value145;
char* __dec_obj46;
void* right_value146;
char* __dec_obj47;
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
memset(&right_value2_107, 0, sizeof(char*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&type2_108, 0, sizeof(struct sType*));
right_value141 = (void*)0;
memset(&type3_109, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
    generics_type_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type_77->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_77;
        generics_type_77=(struct sType*)come_increment_ref_count(generics_type_77->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_78=type->mClass;
    class_name_79=klass_78->mName;
    operator_fun_80=((void*)0);
    if(_if_conditional114=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional114) {
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_87=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_87) {
            if(_if_conditional130=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional130) {
                __result76__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_77,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result76__;
            }
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
        else {
            if(_if_conditional150=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional150) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional152=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional152) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            if(operator_fun_80) {
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional154=operator_fun_80==((void*)0),        _if_conditional154) {
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    result_101=(_Bool)0;
    if(_if_conditional155=operator_fun_80&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional155) {
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional160=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap,        _if_conditional160) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 81, 2)),left_value->type,left_value,info);
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value133=xsprintf("\%s is assigned to",((char*)(right_value132=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 88, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional161=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap,        _if_conditional161) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 90, 5)),right_value->type,right_value,info);
            __dec_obj41=right_value2_107;
            right_value2_107=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s",right_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=right_value2_107;
            right_value2_107=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(right_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj43=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("\%s(\%s,\%s)",((char*)(right_value136=string_to_string(fun_name2_81))),((char*)(right_value137=string_to_string(left_value2_103))),((char*)(right_value138=string_to_string(right_value2_107)))))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_108=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(operator_fun_80->mResultType))));
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type3_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=solve_generics(type2_108,generics_type_77,info))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj44=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type3_109))));
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_102->var=((void*)0);
        if(type3_109->mHeap) {
            __dec_obj45=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value143=append_object_to_right_values(come_value_102->c_value,(struct sType*)come_increment_ref_count(type3_109),info))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional163=!break_guard&&type3_109->mGuardValue&&type3_109->mPointerNum>0,        _if_conditional163) {
            __dec_obj46=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value144=make_type_name_string(type3_109,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_102->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj47=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value146=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_107 = come_decrement_ref_count2(right_value2_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_108,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_109,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
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
_Bool _if_conditional96;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value112;
char* __dec_obj33;
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
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional110;
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
        if(_if_conditional19=self==(void*)0,        _if_conditional19) {
            __result52__ = __result_obj__ = (void*)0;
            return __result52__;
        }
        result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional37=self!=((void*)0),        _if_conditional37) {
            result_47->mClass=self->mClass;
        }
        if(_if_conditional38=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional38) {
            __dec_obj15=result_47->mMultipleTypes;
            result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional42=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional42) {
            __dec_obj17=result_47->mNoSolvedGenericsType;
            result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional46) {
            __dec_obj18=result_47->mOriginalLoadVarType;
            result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional47) {
            __dec_obj19=result_47->mGenericsName;
            result_47->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional48) {
            __dec_obj20=result_47->mGenericsTypes;
            result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional49) {
            __dec_obj24=result_47->mArrayNum;
            result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_47->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional63=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional63) {
            __dec_obj25=result_47->mParamTypes;
            result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional64=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional64) {
            __dec_obj29=result_47->mParamNames;
            result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional68=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional68) {
            __dec_obj30=result_47->mResultType;
            result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_47->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional70=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional70) {
            __dec_obj31=result_47->mAlignas;
            result_47->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_47->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_47->mShort=self->mShort;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_47->mLong=self->mLong;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_47->mLongLong=self->mLongLong;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_47->mConstant=self->mConstant;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_47->mRegister=self->mRegister;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_47->mVolatile=self->mVolatile;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_47->mStatic=self->mStatic;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_47->mUniq=self->mUniq;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_47->mRecord=self->mRecord;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_47->mExtern=self->mExtern;
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_47->mRestrict=self->mRestrict;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_47->mImmutable=self->mImmutable;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_47->mHeap=self->mHeap;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_47->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_47->mDelegate=self->mDelegate;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_47->mShare=self->mShare;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_47->mClone=self->mClone;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_47->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_47->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_47->mRefference=self->mRefference;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_47->mException=self->mException;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_47->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional96=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional96) {
            __dec_obj32=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional99=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional99) {
            __dec_obj33=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_47->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_47->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_47->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_47->mInline=self->mInline;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_47->mNullValue=self->mNullValue;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_47->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional109=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional109) {
            __dec_obj34=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
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
            if(_if_conditional20=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional20) {
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional22) {
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional24) {
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional25=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional25) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional26=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional26) {
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional27=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional27) {
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional29=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional29) {
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional30=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional30) {
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional32=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional32) {
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional33=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional33) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional34=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional34) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional35=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional35) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional36=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional36) {
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
                    while(_while_condtional7=it_48!=((void*)0),                    _while_condtional7) {
                        prev_it_49=it_48;
                        it_48=it_48->next;
                        come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional21) {
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional23;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional23=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional23) {
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
                    while(_while_condtional8=it_50!=((void*)0),                    _while_condtional8) {
                        prev_it_51=it_50;
                        it_50=it_50->next;
                        come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional28;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional28=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional28) {
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
                    while(_while_condtional9=it_52!=((void*)0),                    _while_condtional9) {
                        prev_it_53=it_52;
                        it_52=it_52->next;
                        come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional31=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional31) {
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
                if(_if_conditional39=self==((void*)0),                _if_conditional39) {
                    __result53__ = __result_obj__ = ((void*)0);
                    return __result53__;
                }
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 133, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_55=self->head;
                while(_while_condtional10=it_55!=((void*)0),                _while_condtional10) {
                    list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_55->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
                        if(_if_conditional40=self->len==0,                        _if_conditional40) {
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 147, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_56->prev=((void*)0);
                            litem_56->next=((void*)0);
                            __dec_obj12=litem_56->item;
                            litem_56->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_56;
                            self->head=litem_56;
                        }
                        else {
                            if(_if_conditional41=self->len==1,                            _if_conditional41) {
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 157, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_57->prev=self->head;
                                litem_57->next=((void*)0);
                                __dec_obj13=litem_57->item;
                                litem_57->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_57;
                                self->head->next=litem_57;
                            }
                            else {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 167, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->tail;
                                litem_58->next=((void*)0);
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                while(_while_condtional11=it_59!=((void*)0),                _while_condtional11) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
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
                if(_if_conditional43=self==(void*)0,                _if_conditional43) {
                    __result57__ = __result_obj__ = (void*)0;
                    return __result57__;
                }
                result_61=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional45=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional45) {
                    __dec_obj16=result_61->v1;
                    result_61->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result58__ = __result_obj__ = result_61;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result58__;
                come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional44=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional44) {
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
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result59__ = __result_obj__ = ((void*)0);
                    return __result59__;
                }
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 133, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_63=self->head;
                while(_while_condtional12=it_63!=((void*)0),                _while_condtional12) {
                    list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_63->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 147, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_64->prev=((void*)0);
                            litem_64->next=((void*)0);
                            __dec_obj21=litem_64->item;
                            litem_64->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_64;
                            self->head=litem_64;
                        }
                        else {
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 157, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_65->prev=self->head;
                                litem_65->next=((void*)0);
                                __dec_obj22=litem_65->item;
                                litem_65->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_65;
                                self->head->next=litem_65;
                            }
                            else {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 167, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->tail;
                                litem_66->next=((void*)0);
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
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
                        if(_if_conditional53=self==(void*)0,                        _if_conditional53) {
                            __result62__ = __result_obj__ = (void*)0;
                            return __result62__;
                        }
                        result_67=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional54=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional54) {
                            result_67->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional55=self!=((void*)0),                        _if_conditional55) {
                            result_67->finalize=self->finalize;
                        }
                        if(_if_conditional56=self!=((void*)0),                        _if_conditional56) {
                            result_67->clone=self->clone;
                        }
                        if(_if_conditional57=self!=((void*)0),                        _if_conditional57) {
                            result_67->compile=self->compile;
                        }
                        if(_if_conditional58=self!=((void*)0),                        _if_conditional58) {
                            result_67->sline=self->sline;
                        }
                        if(_if_conditional59=self!=((void*)0),                        _if_conditional59) {
                            result_67->sname=self->sname;
                        }
                        if(_if_conditional60=self!=((void*)0),                        _if_conditional60) {
                            result_67->terminated=self->terminated;
                        }
                        if(_if_conditional61=self!=((void*)0),                        _if_conditional61) {
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
                while(_while_condtional13=it_68!=((void*)0),                _while_condtional13) {
                    prev_it_69=it_68;
                    it_68=it_68->next;
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
                if(_if_conditional65=self==((void*)0),                _if_conditional65) {
                    __result65__ = __result_obj__ = ((void*)0);
                    return __result65__;
                }
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 133, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_71=self->head;
                while(_while_condtional14=it_71!=((void*)0),                _while_condtional14) {
                    list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_71->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
                        if(_if_conditional66=self->len==0,                        _if_conditional66) {
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 147, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_72->prev=((void*)0);
                            litem_72->next=((void*)0);
                            __dec_obj26=litem_72->item;
                            litem_72->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_72;
                            self->head=litem_72;
                        }
                        else {
                            if(_if_conditional67=self->len==1,                            _if_conditional67) {
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 157, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_73->prev=self->head;
                                litem_73->next=((void*)0);
                                __dec_obj27=litem_73->item;
                                litem_73->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_73;
                                self->head->next=litem_73;
                            }
                            else {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 167, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->tail;
                                litem_74->next=((void*)0);
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                while(_while_condtional15=it_75!=((void*)0),                _while_condtional15) {
                    prev_it_76=it_75;
                    it_75=it_75->next;
                    come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional113;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional113=self==((void*)0),        _if_conditional113) {
            __result70__ = 0;
            return __result70__;
        }
        __result71__ = self->len;
        return __result71__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_85;
unsigned int it_86;
_Bool _while_condtional16;
_Bool _if_conditional115;
_Bool _if_conditional116;
struct sGenericsFun* __result72__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
            hash_85=string_get_hash_key(((char*)key))%self->size;
            it_86=hash_85;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional115=self->item_existance[it_86],                _if_conditional115) {
                    if(_if_conditional116=string_equals(self->keys[it_86],key),                    _if_conditional116) {
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_86++;
                    if(_if_conditional127=it_86>=self->size,                    _if_conditional127) {
                        it_86=0;
                    }
                    else {
                        if(_if_conditional128=it_86==hash_85,                        _if_conditional128) {
                            __result73__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result73__;
                        }
                    }
                }
                else {
                    __result74__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result74__;
                }
            }
            __result75__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result75__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional117=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional117) {
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional118=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional118) {
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional119=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional119) {
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional120=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional120) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional123) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional124) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional125) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional126) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional131;
_Bool _if_conditional132;
struct sFun* __result77__;
_Bool _if_conditional148;
_Bool _if_conditional149;
struct sFun* __result78__;
struct sFun* __result79__;
struct sFun* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
                memset(&default_value_88,0,sizeof(struct sFun*));
                hash_89=string_get_hash_key(((char*)key))%self->size;
                it_90=hash_89;
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional131=self->item_existance[it_90],                    _if_conditional131) {
                        if(_if_conditional132=string_equals(self->keys[it_90],key),                        _if_conditional132) {
                            __result77__ = __result_obj__ = self->items[it_90];
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        it_90++;
                        if(_if_conditional148=it_90>=self->size,                        _if_conditional148) {
                            it_90=0;
                        }
                        else {
                            if(_if_conditional149=it_90==hash_89,                            _if_conditional149) {
                                __result78__ = __result_obj__ = default_value_88;
                                come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result78__;
                            }
                        }
                    }
                    else {
                        __result79__ = __result_obj__ = default_value_88;
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result79__;
                    }
                }
                __result80__ = __result_obj__ = default_value_88;
                come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result80__;
                come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional133=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional133) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional134=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional134) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional135=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional135) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional136=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional136) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional137=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional137) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional138=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional138) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional139=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional139) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional142=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional142) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional143=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional143) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional144=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional144) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional145=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional145) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional146=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional146) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional147=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional147) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional140;
_Bool _if_conditional141;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional140=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional140) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional141=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional141) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional151;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional151=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional151) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional156;
_Bool _if_conditional157;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional156=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional156) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional157=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional157) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional158;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional18;
_Bool _if_conditional159;
struct sType* __result81__;
struct sType* default_value_106;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
            if(_if_conditional158=position<0,            _if_conditional158) {
                position+=self->len;
            }
            it_104=self->head;
            i_105=0;
            while(_while_condtional18=it_104!=((void*)0),            _while_condtional18) {
                if(_if_conditional159=position==i_105,                _if_conditional159) {
                    __result81__ = __result_obj__ = it_104->item;
                    return __result81__;
                }
                it_104=it_104->next;
                i_105++;
            }
            memset(&default_value_106,0,sizeof(struct sType*));
            __result82__ = __result_obj__ = default_value_106;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional164;
void* right_value147;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj48;
_Bool _if_conditional166;
void* right_value148;
struct list_item$1CVALUEph* litem_111;
struct CVALUE* __dec_obj49;
void* right_value149;
struct list_item$1CVALUEph* litem_112;
struct CVALUE* __dec_obj50;
struct list$1CVALUEph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1CVALUEph*));
right_value148 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional164=self->len==0,            _if_conditional164) {
                litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value147=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 217, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value147,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_110->prev=((void*)0);
                litem_110->next=((void*)0);
                __dec_obj48=litem_110->item;
                litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj48,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_110;
                self->head=litem_110;
            }
            else {
                if(_if_conditional166=self->len==1,                _if_conditional166) {
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 227, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_111->prev=self->head;
                    litem_111->next=((void*)0);
                    __dec_obj49=litem_111->item;
                    litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_111;
                    self->head->next=litem_111;
                }
                else {
                    litem_112=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 237, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_112->prev=self->tail;
                    litem_112->next=((void*)0);
                    __dec_obj50=litem_112->item;
                    litem_112->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_112;
                    self->tail=litem_112;
                }
            }
            self->len++;
            __result83__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result83__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional165=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional165) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __dec_obj51;
struct sNullNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(struct sNullNode* self){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__;
void* right_value151;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sNullNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
struct CVALUE* come_value_113;
void* right_value153;
char* __dec_obj52;
void* right_value154;
void* right_value155;
struct sType* __dec_obj53;
_Bool __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 146, "CVALUE"))));
    come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=come_value_113->c_value;
    come_value_113->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("((void*)0)"))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj53=come_value_113->type;
    come_value_113->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 149, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_113->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_113->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
    __result88__ = (_Bool)1;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value156;
char* __dec_obj54;
struct sNilNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(struct sNilNode* self){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)0;
    return __result90__;
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__;
void* right_value157;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value157=__builtin_string("sNilNode")));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value158;
struct CVALUE* come_value_114;
void* right_value159;
char* __dec_obj55;
void* right_value160;
void* right_value161;
struct sType* __dec_obj56;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
    come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 180, "CVALUE"))));
    come_call_finalizer3(right_value158,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=come_value_114->c_value;
    come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("((void*)0)"))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_114->type;
    come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 183, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value160,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_114->type->mNullValue=(_Bool)1;
    come_value_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_114->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
    __result92__ = (_Bool)1;
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __dec_obj57;
void* right_value163;
struct sNode* __dec_obj58;
void* right_value164;
struct sNode* __dec_obj59;
struct sAddNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj58=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj59=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result93__;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAddNode_terminated(struct sAddNode* self){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__;
void* right_value165;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sAddNode")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_115;
_Bool _if_conditional172;
_Bool __result96__;
void* right_value166;
struct CVALUE* __exception_result_var_b1;
struct CVALUE* left_value_116;
struct sNode* right_node_117;
_Bool _if_conditional173;
_Bool __result97__;
void* right_value167;
struct CVALUE* __exception_result_var_b2;
struct CVALUE* right_value_118;
struct sType* type_119;
char* fun_name_120;
_Bool calling_fun_121;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value168;
struct CVALUE* come_value_122;
void* right_value169;
char* __dec_obj60;
void* right_value170;
struct sType* __dec_obj61;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_115, 0, sizeof(struct sNode*));
right_value166 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
memset(&right_node_117, 0, sizeof(struct sNode*));
right_value167 = (void*)0;
memset(&right_value_118, 0, sizeof(struct CVALUE*));
memset(&type_119, 0, sizeof(struct sType*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&calling_fun_121, 0, sizeof(_Bool));
right_value168 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    left_node_115=self->mLeft;
    if(_if_conditional172=!node_compile(left_node_115,info),    _if_conditional172) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 230, 6),__exception_result_var_b1=((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_117=self->mRight;
    if(_if_conditional173=!node_compile(right_node_117,info),    _if_conditional173) {
        __result97__ = (_Bool)0;
        come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    right_value_118=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 239, 7),__exception_result_var_b2=((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_119=(struct sType*)come_increment_ref_count(left_value_116->type);
    fun_name_120="operator_add";
    if(self->mQuote) {
        calling_fun_121=(_Bool)0;
    }
    else {
        calling_fun_121=operator_overload_fun(type_119,fun_name_120,left_value_116,right_value_118,(_Bool)0,info);
    }
    if(_if_conditional175=!calling_fun_121,    _if_conditional175) {
        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 254, "CVALUE"))));
        come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj60=come_value_122->c_value;
        come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s+%s",left_value_116->c_value,right_value_118->c_value))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj61=come_value_122->type;
        come_value_122->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(left_value_116->type))));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_122->type->mHeap=(_Bool)0;
        come_value_122->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_122->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
        come_call_finalizer3(come_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result98__ = (_Bool)1;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_119,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_118,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_119,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __dec_obj62;
void* right_value172;
struct sNode* __dec_obj63;
void* right_value173;
struct sNode* __dec_obj64;
struct sSubNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
right_value172 = (void*)0;
right_value173 = (void*)0;
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj64=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result99__;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSubNode_terminated(struct sSubNode* self){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__;
void* right_value174;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value174=__builtin_string("sSubNode")));
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_123;
_Bool _if_conditional179;
_Bool __result102__;
void* right_value175;
struct CVALUE* __exception_result_var_b3;
struct CVALUE* left_value_124;
struct sNode* right_node_125;
_Bool _if_conditional180;
_Bool __result103__;
void* right_value176;
struct CVALUE* __exception_result_var_b4;
struct CVALUE* right_value_126;
struct sType* type_127;
char* fun_name_128;
_Bool calling_fun_129;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value177;
struct CVALUE* come_value_130;
void* right_value178;
char* __dec_obj65;
void* right_value179;
struct sType* __dec_obj66;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_123, 0, sizeof(struct sNode*));
right_value175 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&right_node_125, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
memset(&right_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&fun_name_128, 0, sizeof(char*));
memset(&calling_fun_129, 0, sizeof(_Bool));
right_value177 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value178 = (void*)0;
right_value179 = (void*)0;
    left_node_123=self->mLeft;
    if(_if_conditional179=!node_compile(left_node_123,info),    _if_conditional179) {
        __result102__ = (_Bool)0;
        return __result102__;
    }
    left_value_124=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 305, 8),__exception_result_var_b3=((struct CVALUE*)(right_value175=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value175,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_125=self->mRight;
    if(_if_conditional180=!node_compile(right_node_125,info),    _if_conditional180) {
        __result103__ = (_Bool)0;
        come_call_finalizer3(left_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    right_value_126=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 314, 9),__exception_result_var_b4=((struct CVALUE*)(right_value176=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
    come_call_finalizer3(right_value176,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_127=(struct sType*)come_increment_ref_count(left_value_124->type);
    fun_name_128="operator_sub";
    if(self->mQuote) {
        calling_fun_129=(_Bool)0;
    }
    else {
        calling_fun_129=operator_overload_fun(type_127,fun_name_128,left_value_124,right_value_126,(_Bool)0,info);
    }
    if(_if_conditional182=!calling_fun_129,    _if_conditional182) {
        come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 329, "CVALUE"))));
        come_call_finalizer3(right_value177,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj65=come_value_130->c_value;
        come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s-%s",left_value_124->c_value,right_value_126->c_value))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj66=come_value_130->type;
        come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_clone(left_value_124->type))));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value179,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_130->type->mHeap=(_Bool)0;
        come_value_130->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_130->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
        come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result104__ = (_Bool)1;
    come_call_finalizer3(left_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_127,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(left_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_127,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value180;
char* __dec_obj67;
void* right_value181;
struct sNode* __dec_obj68;
void* right_value182;
struct sNode* __dec_obj69;
struct sMultNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(info->sname))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value181) { right_value181 = come_decrement_ref_count2(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultNode_terminated(struct sMultNode* self){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__;
void* right_value183;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sMultNode")));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_131;
_Bool _if_conditional186;
_Bool __result108__;
void* right_value184;
struct CVALUE* __exception_result_var_b5;
struct CVALUE* left_value_132;
struct sNode* right_node_133;
_Bool _if_conditional187;
_Bool __result109__;
void* right_value185;
struct CVALUE* __exception_result_var_b6;
struct CVALUE* right_value_134;
struct sType* type_135;
char* fun_name_136;
_Bool calling_fun_137;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value186;
struct CVALUE* come_value_138;
void* right_value187;
char* __dec_obj70;
void* right_value188;
struct sType* __dec_obj71;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_131, 0, sizeof(struct sNode*));
right_value184 = (void*)0;
memset(&left_value_132, 0, sizeof(struct CVALUE*));
memset(&right_node_133, 0, sizeof(struct sNode*));
right_value185 = (void*)0;
memset(&right_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&calling_fun_137, 0, sizeof(_Bool));
right_value186 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
    left_node_131=self->mLeft;
    if(_if_conditional186=!node_compile(left_node_131,info),    _if_conditional186) {
        __result108__ = (_Bool)0;
        return __result108__;
    }
    left_value_132=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 380, 10),__exception_result_var_b5=((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value184,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_133=self->mRight;
    if(_if_conditional187=!node_compile(right_node_133,info),    _if_conditional187) {
        __result109__ = (_Bool)0;
        come_call_finalizer3(left_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result109__;
    }
    right_value_134=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 389, 11),__exception_result_var_b6=((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
    come_call_finalizer3(right_value185,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_135=(struct sType*)come_increment_ref_count(left_value_132->type);
    fun_name_136="operator_mult";
    if(self->mQuote) {
        calling_fun_137=(_Bool)0;
    }
    else {
        calling_fun_137=operator_overload_fun(type_135,fun_name_136,left_value_132,right_value_134,(_Bool)0,info);
    }
    if(_if_conditional189=!calling_fun_137,    _if_conditional189) {
        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 404, "CVALUE"))));
        come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=come_value_138->c_value;
        come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s*%s",left_value_132->c_value,right_value_134->c_value))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_138->type;
        come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(left_value_132->type))));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_138->type->mHeap=(_Bool)0;
        come_value_138->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_138->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
        come_call_finalizer3(come_value_138,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result110__ = (_Bool)1;
    come_call_finalizer3(left_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_135,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(left_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_135,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value189;
char* __dec_obj72;
void* right_value190;
struct sNode* __dec_obj73;
void* right_value191;
struct sNode* __dec_obj74;
struct sDivNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value189=__builtin_string(info->sname))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value191) { right_value191 = come_decrement_ref_count2(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result111__;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivNode_terminated(struct sDivNode* self){
void* __result_obj__;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = (_Bool)0;
    return __result112__;
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__;
void* right_value192;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sDivNode")));
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_139;
_Bool _if_conditional193;
_Bool __result114__;
void* right_value193;
struct CVALUE* __exception_result_var_b7;
struct CVALUE* left_value_140;
struct sNode* right_node_141;
_Bool _if_conditional194;
_Bool __result115__;
void* right_value194;
struct CVALUE* __exception_result_var_b8;
struct CVALUE* right_value_142;
struct sType* type_143;
char* fun_name_144;
_Bool calling_fun_145;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value195;
struct CVALUE* come_value_146;
void* right_value196;
char* __dec_obj75;
void* right_value197;
struct sType* __dec_obj76;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_139, 0, sizeof(struct sNode*));
right_value193 = (void*)0;
memset(&left_value_140, 0, sizeof(struct CVALUE*));
memset(&right_node_141, 0, sizeof(struct sNode*));
right_value194 = (void*)0;
memset(&right_value_142, 0, sizeof(struct CVALUE*));
memset(&type_143, 0, sizeof(struct sType*));
memset(&fun_name_144, 0, sizeof(char*));
memset(&calling_fun_145, 0, sizeof(_Bool));
right_value195 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
    left_node_139=self->mLeft;
    if(_if_conditional193=!node_compile(left_node_139,info),    _if_conditional193) {
        __result114__ = (_Bool)0;
        return __result114__;
    }
    left_value_140=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 455, 12),__exception_result_var_b7=((struct CVALUE*)(right_value193=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value193,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_141=self->mRight;
    if(_if_conditional194=!node_compile(right_node_141,info),    _if_conditional194) {
        __result115__ = (_Bool)0;
        come_call_finalizer3(left_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    right_value_142=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 464, 13),__exception_result_var_b8=((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b8));
    come_call_finalizer3(right_value194,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_143=(struct sType*)come_increment_ref_count(left_value_140->type);
    fun_name_144="operator_div";
    if(self->mQuote) {
        calling_fun_145=(_Bool)0;
    }
    else {
        calling_fun_145=operator_overload_fun(type_143,fun_name_144,left_value_140,right_value_142,(_Bool)0,info);
    }
    if(_if_conditional196=!calling_fun_145,    _if_conditional196) {
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 479, "CVALUE"))));
        come_call_finalizer3(right_value195,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=come_value_146->c_value;
        come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("%s/%s",left_value_140->c_value,right_value_142->c_value))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj76=come_value_146->type;
        come_value_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(left_value_140->type))));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value197,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_146->type->mHeap=(_Bool)0;
        come_value_146->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_146->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
        come_call_finalizer3(come_value_146,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    come_call_finalizer3(left_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(left_value_140,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value198;
char* __dec_obj77;
void* right_value199;
struct sNode* __dec_obj78;
void* right_value200;
struct sNode* __dec_obj79;
struct sModNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value198=__builtin_string(info->sname))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj78=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value199) { right_value199 = come_decrement_ref_count2(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj79=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModNode_terminated(struct sModNode* self){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__;
void* right_value201;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value201=__builtin_string("sModNode")));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_147;
_Bool _if_conditional200;
_Bool __result120__;
void* right_value202;
struct CVALUE* __exception_result_var_b9;
struct CVALUE* left_value_148;
struct sNode* right_node_149;
_Bool _if_conditional201;
_Bool __result121__;
void* right_value203;
struct CVALUE* __exception_result_var_b10;
struct CVALUE* right_value_150;
struct sType* type_151;
char* fun_name_152;
_Bool calling_fun_153;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value204;
struct CVALUE* come_value_154;
void* right_value205;
char* __dec_obj80;
void* right_value206;
struct sType* __dec_obj81;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_147, 0, sizeof(struct sNode*));
right_value202 = (void*)0;
memset(&left_value_148, 0, sizeof(struct CVALUE*));
memset(&right_node_149, 0, sizeof(struct sNode*));
right_value203 = (void*)0;
memset(&right_value_150, 0, sizeof(struct CVALUE*));
memset(&type_151, 0, sizeof(struct sType*));
memset(&fun_name_152, 0, sizeof(char*));
memset(&calling_fun_153, 0, sizeof(_Bool));
right_value204 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    left_node_147=self->mLeft;
    if(_if_conditional200=!node_compile(left_node_147,info),    _if_conditional200) {
        __result120__ = (_Bool)0;
        return __result120__;
    }
    left_value_148=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 530, 14),__exception_result_var_b9=((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_149=self->mRight;
    if(_if_conditional201=!node_compile(right_node_149,info),    _if_conditional201) {
        __result121__ = (_Bool)0;
        come_call_finalizer3(left_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    right_value_150=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 539, 15),__exception_result_var_b10=((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b10));
    come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_151=(struct sType*)come_increment_ref_count(left_value_148->type);
    fun_name_152="operator_mod";
    if(self->mQuote) {
        calling_fun_153=(_Bool)0;
    }
    else {
        calling_fun_153=operator_overload_fun(type_151,fun_name_152,left_value_148,right_value_150,(_Bool)0,info);
    }
    if(_if_conditional203=!calling_fun_153,    _if_conditional203) {
        come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 554, "CVALUE"))));
        come_call_finalizer3(right_value204,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj80=come_value_154->c_value;
        come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value205=xsprintf("%s%%%s",left_value_148->c_value,right_value_150->c_value))));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_154->type;
        come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(left_value_148->type))));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_154->type->mHeap=(_Bool)0;
        come_value_154->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_154->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
        come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result122__ = (_Bool)1;
    come_call_finalizer3(left_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(left_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __dec_obj82;
void* right_value208;
struct sNode* __dec_obj83;
void* right_value209;
struct sNode* __dec_obj84;
struct sLShiftNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(info->sname))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value208) { right_value208 = come_decrement_ref_count2(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value209) { right_value209 = come_decrement_ref_count2(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result123__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShiftNode_terminated(struct sLShiftNode* self){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__;
void* right_value210;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value210=__builtin_string("sLShiftNode")));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_155;
_Bool _if_conditional207;
_Bool __result126__;
void* right_value211;
struct CVALUE* __exception_result_var_b11;
struct CVALUE* left_value_156;
struct sNode* right_node_157;
_Bool _if_conditional208;
_Bool __result127__;
void* right_value212;
struct CVALUE* __exception_result_var_b12;
struct CVALUE* right_value_158;
struct sType* type_159;
char* fun_name_160;
_Bool calling_fun_161;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value213;
struct CVALUE* come_value_162;
void* right_value214;
char* __dec_obj85;
void* right_value215;
struct sType* __dec_obj86;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_155, 0, sizeof(struct sNode*));
right_value211 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
memset(&right_node_157, 0, sizeof(struct sNode*));
right_value212 = (void*)0;
memset(&right_value_158, 0, sizeof(struct CVALUE*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&fun_name_160, 0, sizeof(char*));
memset(&calling_fun_161, 0, sizeof(_Bool));
right_value213 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    left_node_155=self->mLeft;
    if(_if_conditional207=!node_compile(left_node_155,info),    _if_conditional207) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_156=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 605, 16),__exception_result_var_b11=((struct CVALUE*)(right_value211=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_157=self->mRight;
    if(_if_conditional208=!node_compile(right_node_157,info),    _if_conditional208) {
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_158=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 614, 17),__exception_result_var_b12=((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b12));
    come_call_finalizer3(right_value212,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_159=(struct sType*)come_increment_ref_count(left_value_156->type);
    fun_name_160="operator_lshift";
    if(self->mQuote) {
        calling_fun_161=(_Bool)0;
    }
    else {
        calling_fun_161=operator_overload_fun(type_159,fun_name_160,left_value_156,right_value_158,(_Bool)0,info);
    }
    if(_if_conditional210=!calling_fun_161,    _if_conditional210) {
        come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 629, "CVALUE"))));
        come_call_finalizer3(right_value213,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj85=come_value_162->c_value;
        come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s<<%s",left_value_156->c_value,right_value_158->c_value))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj86=come_value_162->type;
        come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(left_value_156->type))));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_162->type->mHeap=(_Bool)0;
        come_value_162->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_162->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
        come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_159,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_159,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value216;
char* __dec_obj87;
void* right_value217;
struct sNode* __dec_obj88;
void* right_value218;
struct sNode* __dec_obj89;
struct sRShiftNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(info->sname))));
    __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value217) { right_value217 = come_decrement_ref_count2(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value218) { right_value218 = come_decrement_ref_count2(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftNode_terminated(struct sRShiftNode* self){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__;
void* right_value219;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value219 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value219=__builtin_string("sRShiftNode")));
    right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_163;
_Bool _if_conditional214;
_Bool __result132__;
void* right_value220;
struct CVALUE* __exception_result_var_b13;
struct CVALUE* left_value_164;
struct sNode* right_node_165;
_Bool _if_conditional215;
_Bool __result133__;
void* right_value221;
struct CVALUE* __exception_result_var_b14;
struct CVALUE* right_value_166;
struct sType* type_167;
char* fun_name_168;
_Bool calling_fun_169;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value222;
struct CVALUE* come_value_170;
void* right_value223;
char* __dec_obj90;
void* right_value224;
struct sType* __dec_obj91;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_163, 0, sizeof(struct sNode*));
right_value220 = (void*)0;
memset(&left_value_164, 0, sizeof(struct CVALUE*));
memset(&right_node_165, 0, sizeof(struct sNode*));
right_value221 = (void*)0;
memset(&right_value_166, 0, sizeof(struct CVALUE*));
memset(&type_167, 0, sizeof(struct sType*));
memset(&fun_name_168, 0, sizeof(char*));
memset(&calling_fun_169, 0, sizeof(_Bool));
right_value222 = (void*)0;
memset(&come_value_170, 0, sizeof(struct CVALUE*));
right_value223 = (void*)0;
right_value224 = (void*)0;
    left_node_163=self->mLeft;
    if(_if_conditional214=!node_compile(left_node_163,info),    _if_conditional214) {
        __result132__ = (_Bool)0;
        return __result132__;
    }
    left_value_164=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 680, 18),__exception_result_var_b13=((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b13));
    come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_165=self->mRight;
    if(_if_conditional215=!node_compile(right_node_165,info),    _if_conditional215) {
        __result133__ = (_Bool)0;
        come_call_finalizer3(left_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    right_value_166=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 689, 19),__exception_result_var_b14=((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b14));
    come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_167=(struct sType*)come_increment_ref_count(left_value_164->type);
    fun_name_168="operator_rshift";
    if(self->mQuote) {
        calling_fun_169=(_Bool)0;
    }
    else {
        calling_fun_169=operator_overload_fun(type_167,fun_name_168,left_value_164,right_value_166,(_Bool)0,info);
    }
    if(_if_conditional217=!calling_fun_169,    _if_conditional217) {
        come_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 704, "CVALUE"))));
        come_call_finalizer3(right_value222,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_170->c_value;
        come_value_170->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s>>%s",left_value_164->c_value,right_value_166->c_value))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_170->type;
        come_value_170->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(left_value_164->type))));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_170->type->mHeap=(_Bool)0;
        come_value_170->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_170->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_170));
        come_call_finalizer3(come_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_167,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_167,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value225;
char* __dec_obj92;
void* right_value226;
struct sNode* __dec_obj93;
void* right_value227;
struct sNode* __dec_obj94;
struct sGtEqNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result135__;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtEqNode_terminated(struct sGtEqNode* self){
void* __result_obj__;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = (_Bool)0;
    return __result136__;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__;
void* right_value228;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value228 = (void*)0;
    __result137__ = __result_obj__ = ((char*)(right_value228=__builtin_string("sGtEqNode")));
    right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result137__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_171;
_Bool _if_conditional221;
_Bool __result138__;
void* right_value229;
struct CVALUE* __exception_result_var_b15;
struct CVALUE* left_value_172;
struct sNode* right_node_173;
_Bool _if_conditional222;
_Bool __result139__;
void* right_value230;
struct CVALUE* __exception_result_var_b16;
struct CVALUE* right_value_174;
struct sType* type_175;
char* fun_name_176;
_Bool calling_fun_177;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value231;
struct CVALUE* come_value_178;
void* right_value232;
char* __dec_obj95;
void* right_value233;
struct sType* __dec_obj96;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_171, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&left_value_172, 0, sizeof(struct CVALUE*));
memset(&right_node_173, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
memset(&right_value_174, 0, sizeof(struct CVALUE*));
memset(&type_175, 0, sizeof(struct sType*));
memset(&fun_name_176, 0, sizeof(char*));
memset(&calling_fun_177, 0, sizeof(_Bool));
right_value231 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
right_value233 = (void*)0;
    left_node_171=self->mLeft;
    if(_if_conditional221=!node_compile(left_node_171,info),    _if_conditional221) {
        __result138__ = (_Bool)0;
        return __result138__;
    }
    left_value_172=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 755, 20),__exception_result_var_b15=((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b15));
    come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_173=self->mRight;
    if(_if_conditional222=!node_compile(right_node_173,info),    _if_conditional222) {
        __result139__ = (_Bool)0;
        come_call_finalizer3(left_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    right_value_174=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 764, 21),__exception_result_var_b16=((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b16));
    come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_175=(struct sType*)come_increment_ref_count(left_value_172->type);
    fun_name_176="operator_gteq";
    if(self->mQuote) {
        calling_fun_177=(_Bool)0;
    }
    else {
        calling_fun_177=operator_overload_fun(type_175,fun_name_176,left_value_172,right_value_174,(_Bool)0,info);
    }
    if(_if_conditional224=!calling_fun_177,    _if_conditional224) {
        come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 779, "CVALUE"))));
        come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj95=come_value_178->c_value;
        come_value_178->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("%s>=%s",left_value_172->c_value,right_value_174->c_value))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj96=come_value_178->type;
        come_value_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(left_value_172->type))));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_178->type->mHeap=(_Bool)0;
        come_value_178->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_178->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
        come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    come_call_finalizer3(left_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_175,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(left_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_174,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_175,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value234;
char* __dec_obj97;
void* right_value235;
struct sNode* __dec_obj98;
void* right_value236;
struct sNode* __dec_obj99;
struct sLtEqNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj99=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtEqNode_terminated(struct sLtEqNode* self){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__;
void* right_value237;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sLtEqNode")));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_179;
_Bool _if_conditional228;
_Bool __result144__;
void* right_value238;
struct CVALUE* __exception_result_var_b17;
struct CVALUE* left_value_180;
struct sNode* right_node_181;
_Bool _if_conditional229;
_Bool __result145__;
void* right_value239;
struct CVALUE* __exception_result_var_b18;
struct CVALUE* right_value_182;
struct sType* type_183;
char* fun_name_184;
_Bool calling_fun_185;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value240;
struct CVALUE* come_value_186;
void* right_value241;
char* __dec_obj100;
void* right_value242;
struct sType* __dec_obj101;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_179, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
memset(&left_value_180, 0, sizeof(struct CVALUE*));
memset(&right_node_181, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&right_value_182, 0, sizeof(struct CVALUE*));
memset(&type_183, 0, sizeof(struct sType*));
memset(&fun_name_184, 0, sizeof(char*));
memset(&calling_fun_185, 0, sizeof(_Bool));
right_value240 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
    left_node_179=self->mLeft;
    if(_if_conditional228=!node_compile(left_node_179,info),    _if_conditional228) {
        __result144__ = (_Bool)0;
        return __result144__;
    }
    left_value_180=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 830, 22),__exception_result_var_b17=((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b17));
    come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_181=self->mRight;
    if(_if_conditional229=!node_compile(right_node_181,info),    _if_conditional229) {
        __result145__ = (_Bool)0;
        come_call_finalizer3(left_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    right_value_182=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 839, 23),__exception_result_var_b18=((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b18));
    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_183=(struct sType*)come_increment_ref_count(left_value_180->type);
    fun_name_184="operator_lteq";
    if(self->mQuote) {
        calling_fun_185=(_Bool)0;
    }
    else {
        calling_fun_185=operator_overload_fun(type_183,fun_name_184,left_value_180,right_value_182,(_Bool)0,info);
    }
    if(_if_conditional231=!calling_fun_185,    _if_conditional231) {
        come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 854, "CVALUE"))));
        come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj100=come_value_186->c_value;
        come_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("%s<=%s",left_value_180->c_value,right_value_182->c_value))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj101=come_value_186->type;
        come_value_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_value_180->type))));
        come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_186->type->mHeap=(_Bool)0;
        come_value_186->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_186->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
        come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result146__ = (_Bool)1;
    come_call_finalizer3(left_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer3(left_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value243;
char* __dec_obj102;
void* right_value244;
struct sNode* __dec_obj103;
void* right_value245;
struct sNode* __dec_obj104;
struct sLtNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(info->sname))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result147__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtNode_terminated(struct sLtNode* self){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__;
void* right_value246;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sLtNode")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_187;
_Bool _if_conditional235;
_Bool __result150__;
void* right_value247;
struct CVALUE* __exception_result_var_b19;
struct CVALUE* left_value_188;
struct sNode* right_node_189;
_Bool _if_conditional236;
_Bool __result151__;
void* right_value248;
struct CVALUE* __exception_result_var_b20;
struct CVALUE* right_value_190;
struct sType* type_191;
char* fun_name_192;
_Bool calling_fun_193;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value249;
struct CVALUE* come_value_194;
void* right_value250;
char* __dec_obj105;
void* right_value251;
struct sType* __dec_obj106;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_187, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&left_value_188, 0, sizeof(struct CVALUE*));
memset(&right_node_189, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&right_value_190, 0, sizeof(struct CVALUE*));
memset(&type_191, 0, sizeof(struct sType*));
memset(&fun_name_192, 0, sizeof(char*));
memset(&calling_fun_193, 0, sizeof(_Bool));
right_value249 = (void*)0;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    left_node_187=self->mLeft;
    if(_if_conditional235=!node_compile(left_node_187,info),    _if_conditional235) {
        __result150__ = (_Bool)0;
        return __result150__;
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 905, 24),__exception_result_var_b19=((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b19));
    come_call_finalizer3(right_value247,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_189=self->mRight;
    if(_if_conditional236=!node_compile(right_node_189,info),    _if_conditional236) {
        __result151__ = (_Bool)0;
        come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    right_value_190=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 914, 25),__exception_result_var_b20=((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b20));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_191=(struct sType*)come_increment_ref_count(left_value_188->type);
    fun_name_192="operator_lt";
    if(self->mQuote) {
        calling_fun_193=(_Bool)0;
    }
    else {
        calling_fun_193=operator_overload_fun(type_191,fun_name_192,left_value_188,right_value_190,(_Bool)0,info);
    }
    if(_if_conditional238=!calling_fun_193,    _if_conditional238) {
        come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 929, "CVALUE"))));
        come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj105=come_value_194->c_value;
        come_value_194->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("%s<%s",left_value_188->c_value,right_value_190->c_value))));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj106=come_value_194->type;
        come_value_194->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(left_value_188->type))));
        come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_194->type->mHeap=(_Bool)0;
        come_value_194->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_194->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
        come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result152__ = (_Bool)1;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value252;
char* __dec_obj107;
void* right_value253;
struct sNode* __dec_obj108;
void* right_value254;
struct sNode* __dec_obj109;
struct sGtNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(info->sname))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result153__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result153__;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtNode_terminated(struct sGtNode* self){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = (_Bool)0;
    return __result154__;
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__;
void* right_value255;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result155__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sGtNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_195;
_Bool _if_conditional242;
_Bool __result156__;
void* right_value256;
struct CVALUE* __exception_result_var_b21;
struct CVALUE* left_value_196;
struct sNode* right_node_197;
_Bool _if_conditional243;
_Bool __result157__;
void* right_value257;
struct CVALUE* __exception_result_var_b22;
struct CVALUE* right_value_198;
struct sType* type_199;
char* fun_name_200;
_Bool calling_fun_201;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value258;
struct CVALUE* come_value_202;
void* right_value259;
char* __dec_obj110;
void* right_value260;
struct sType* __dec_obj111;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_195, 0, sizeof(struct sNode*));
right_value256 = (void*)0;
memset(&left_value_196, 0, sizeof(struct CVALUE*));
memset(&right_node_197, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&right_value_198, 0, sizeof(struct CVALUE*));
memset(&type_199, 0, sizeof(struct sType*));
memset(&fun_name_200, 0, sizeof(char*));
memset(&calling_fun_201, 0, sizeof(_Bool));
right_value258 = (void*)0;
memset(&come_value_202, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    left_node_195=self->mLeft;
    if(_if_conditional242=!node_compile(left_node_195,info),    _if_conditional242) {
        __result156__ = (_Bool)0;
        return __result156__;
    }
    left_value_196=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 980, 26),__exception_result_var_b21=((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b21));
    come_call_finalizer3(right_value256,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_197=self->mRight;
    if(_if_conditional243=!node_compile(right_node_197,info),    _if_conditional243) {
        __result157__ = (_Bool)0;
        come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result157__;
    }
    right_value_198=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 989, 27),__exception_result_var_b22=((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b22));
    come_call_finalizer3(right_value257,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_199=(struct sType*)come_increment_ref_count(left_value_196->type);
    fun_name_200="operator_gt";
    if(self->mQuote) {
        calling_fun_201=(_Bool)0;
    }
    else {
        calling_fun_201=operator_overload_fun(type_199,fun_name_200,left_value_196,right_value_198,(_Bool)0,info);
    }
    if(_if_conditional245=!calling_fun_201,    _if_conditional245) {
        come_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1004, "CVALUE"))));
        come_call_finalizer3(right_value258,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj110=come_value_202->c_value;
        come_value_202->c_value=(char*)come_increment_ref_count(((char*)(right_value259=xsprintf("%s>%s",left_value_196->c_value,right_value_198->c_value))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj111=come_value_202->type;
        come_value_202->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(left_value_196->type))));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_202->type->mHeap=(_Bool)0;
        come_value_202->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_202->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_202));
        come_call_finalizer3(come_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result158__ = (_Bool)1;
    come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result158__;
    come_call_finalizer3(left_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_199,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value261;
char* __dec_obj112;
void* right_value262;
struct sNode* __dec_obj113;
void* right_value263;
struct sNode* __dec_obj114;
struct sEqNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
right_value262 = (void*)0;
right_value263 = (void*)0;
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value261=__builtin_string(info->sname))));
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result159__ = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEqNode_terminated(struct sEqNode* self){
void* __result_obj__;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = (_Bool)0;
    return __result160__;
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__;
void* right_value264;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
    __result161__ = __result_obj__ = ((char*)(right_value264=__builtin_string("sEqNode")));
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_203;
_Bool _if_conditional249;
_Bool __result162__;
void* right_value265;
struct CVALUE* __exception_result_var_b23;
struct CVALUE* left_value_204;
struct sNode* right_node_205;
_Bool _if_conditional250;
_Bool __result163__;
void* right_value266;
struct CVALUE* __exception_result_var_b24;
struct CVALUE* right_value_206;
void* right_value267;
struct CVALUE* come_value_207;
void* right_value268;
char* __dec_obj115;
void* right_value269;
struct sType* __dec_obj116;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_203, 0, sizeof(struct sNode*));
right_value265 = (void*)0;
memset(&left_value_204, 0, sizeof(struct CVALUE*));
memset(&right_node_205, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
memset(&right_value_206, 0, sizeof(struct CVALUE*));
right_value267 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    left_node_203=self->mLeft;
    if(_if_conditional249=!node_compile(left_node_203,info),    _if_conditional249) {
        __result162__ = (_Bool)0;
        return __result162__;
    }
    left_value_204=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1056, 28),__exception_result_var_b23=((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b23));
    come_call_finalizer3(right_value265,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_205=self->mRight;
    if(_if_conditional250=!node_compile(right_node_205,info),    _if_conditional250) {
        __result163__ = (_Bool)0;
        come_call_finalizer3(left_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    right_value_206=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1065, 29),__exception_result_var_b24=((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b24));
    come_call_finalizer3(right_value266,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1068, "CVALUE"))));
    come_call_finalizer3(right_value267,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj115=come_value_207->c_value;
    come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value268=xsprintf("%s==%s",left_value_204->c_value,right_value_206->c_value))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj116=come_value_207->type;
    come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_clone(left_value_204->type))));
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_207->type->mHeap=(_Bool)0;
    come_value_207->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_207->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
    __result164__ = (_Bool)1;
    come_call_finalizer3(left_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
    come_call_finalizer3(left_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value270;
char* __dec_obj117;
void* right_value271;
struct sNode* __dec_obj118;
void* right_value272;
struct sNode* __dec_obj119;
struct sNotEqNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(info->sname))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result165__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEqNode_terminated(struct sNotEqNode* self){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = (_Bool)0;
    return __result166__;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__;
void* right_value273;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
    __result167__ = __result_obj__ = ((char*)(right_value273=__builtin_string("sNotEqNode")));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_208;
_Bool _if_conditional254;
_Bool __result168__;
void* right_value274;
struct CVALUE* __exception_result_var_b25;
struct CVALUE* left_value_209;
struct sNode* right_node_210;
_Bool _if_conditional255;
_Bool __result169__;
void* right_value275;
struct CVALUE* __exception_result_var_b26;
struct CVALUE* right_value_211;
void* right_value276;
struct CVALUE* come_value_212;
void* right_value277;
char* __dec_obj120;
void* right_value278;
struct sType* __dec_obj121;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_208, 0, sizeof(struct sNode*));
right_value274 = (void*)0;
memset(&left_value_209, 0, sizeof(struct CVALUE*));
memset(&right_node_210, 0, sizeof(struct sNode*));
right_value275 = (void*)0;
memset(&right_value_211, 0, sizeof(struct CVALUE*));
right_value276 = (void*)0;
memset(&come_value_212, 0, sizeof(struct CVALUE*));
right_value277 = (void*)0;
right_value278 = (void*)0;
    left_node_208=self->mLeft;
    if(_if_conditional254=!node_compile(left_node_208,info),    _if_conditional254) {
        __result168__ = (_Bool)0;
        return __result168__;
    }
    left_value_209=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1118, 30),__exception_result_var_b25=((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b25));
    come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_210=self->mRight;
    if(_if_conditional255=!node_compile(right_node_210,info),    _if_conditional255) {
        __result169__ = (_Bool)0;
        come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result169__;
    }
    right_value_211=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1127, 31),__exception_result_var_b26=((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b26));
    come_call_finalizer3(right_value275,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1130, "CVALUE"))));
    come_call_finalizer3(right_value276,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=come_value_212->c_value;
    come_value_212->c_value=(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("%s!=%s",left_value_209->c_value,right_value_211->c_value))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj121=come_value_212->type;
    come_value_212->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(left_value_209->type))));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value278,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_212->type->mHeap=(_Bool)0;
    come_value_212->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_212->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
    __result170__ = (_Bool)1;
    come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
    come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value279;
char* __dec_obj122;
void* right_value280;
struct sNode* __dec_obj123;
void* right_value281;
struct sNode* __dec_obj124;
struct sEq2Node* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value281 = (void*)0;
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(info->sname))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value280=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, ((struct sNode*)right_value280)->finalize, ((struct sNode*)right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value281) { right_value281 = come_decrement_ref_count2(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result171__ = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result171__;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEq2Node_terminated(struct sEq2Node* self){
void* __result_obj__;
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = (_Bool)0;
    return __result172__;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__;
void* right_value282;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
    __result173__ = __result_obj__ = ((char*)(right_value282=__builtin_string("sEq2Node")));
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result173__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_213;
_Bool _if_conditional259;
_Bool __result174__;
void* right_value283;
struct CVALUE* __exception_result_var_b27;
struct CVALUE* left_value_214;
struct sNode* right_node_215;
_Bool _if_conditional260;
_Bool __result175__;
void* right_value284;
struct CVALUE* __exception_result_var_b28;
struct CVALUE* right_value_216;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value285;
struct CVALUE* come_value_220;
void* right_value286;
char* __dec_obj125;
void* right_value287;
struct sType* __dec_obj126;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_213, 0, sizeof(struct sNode*));
right_value283 = (void*)0;
memset(&left_value_214, 0, sizeof(struct CVALUE*));
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value284 = (void*)0;
memset(&right_value_216, 0, sizeof(struct CVALUE*));
memset(&type_217, 0, sizeof(struct sType*));
memset(&fun_name_218, 0, sizeof(char*));
memset(&calling_fun_219, 0, sizeof(_Bool));
right_value285 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
right_value287 = (void*)0;
    left_node_213=self->mLeft;
    if(_if_conditional259=!node_compile(left_node_213,info),    _if_conditional259) {
        __result174__ = (_Bool)0;
        return __result174__;
    }
    left_value_214=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1180, 32),__exception_result_var_b27=((struct CVALUE*)(right_value283=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b27));
    come_call_finalizer3(right_value283,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_215=self->mRight;
    if(_if_conditional260=!node_compile(right_node_215,info),    _if_conditional260) {
        __result175__ = (_Bool)0;
        come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result175__;
    }
    right_value_216=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1189, 33),__exception_result_var_b28=((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b28));
    come_call_finalizer3(right_value284,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_217=(struct sType*)come_increment_ref_count(left_value_214->type);
    fun_name_218="operator_equals";
    if(self->mQuote) {
        calling_fun_219=(_Bool)0;
    }
    else {
        calling_fun_219=operator_overload_fun(type_217,fun_name_218,left_value_214,right_value_216,(_Bool)0,info);
    }
    if(_if_conditional262=!calling_fun_219,    _if_conditional262) {
        come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1204, "CVALUE"))));
        come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj125=come_value_220->c_value;
        come_value_220->c_value=(char*)come_increment_ref_count(((char*)(right_value286=xsprintf("%s==%s",left_value_214->c_value,right_value_216->c_value))));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj126=come_value_220->type;
        come_value_220->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value287=sType_clone(left_value_214->type))));
        come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value287,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_220->type->mHeap=(_Bool)0;
        come_value_220->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_220->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_220));
        come_call_finalizer3(come_value_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result176__ = (_Bool)1;
    come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
    come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value288;
char* __dec_obj127;
void* right_value289;
struct sNode* __dec_obj128;
void* right_value290;
struct sNode* __dec_obj129;
struct sNotEq2Node* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value288=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value289) { right_value289 = come_decrement_ref_count2(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result177__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result177__;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEq2Node_terminated(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__;
void* right_value291;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
    __result179__ = __result_obj__ = ((char*)(right_value291=__builtin_string("sNotEq2Node")));
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_221;
_Bool _if_conditional266;
_Bool __result180__;
void* right_value292;
struct CVALUE* __exception_result_var_b29;
struct CVALUE* left_value_222;
struct sNode* right_node_223;
_Bool _if_conditional267;
_Bool __result181__;
void* right_value293;
struct CVALUE* __exception_result_var_b30;
struct CVALUE* right_value_224;
struct sType* type_225;
char* fun_name_226;
_Bool calling_fun_227;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value294;
struct CVALUE* come_value_228;
void* right_value295;
char* __dec_obj130;
void* right_value296;
struct sType* __dec_obj131;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_221, 0, sizeof(struct sNode*));
right_value292 = (void*)0;
memset(&left_value_222, 0, sizeof(struct CVALUE*));
memset(&right_node_223, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&right_value_224, 0, sizeof(struct CVALUE*));
memset(&type_225, 0, sizeof(struct sType*));
memset(&fun_name_226, 0, sizeof(char*));
memset(&calling_fun_227, 0, sizeof(_Bool));
right_value294 = (void*)0;
memset(&come_value_228, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
right_value296 = (void*)0;
    left_node_221=self->mLeft;
    if(_if_conditional266=!node_compile(left_node_221,info),    _if_conditional266) {
        __result180__ = (_Bool)0;
        return __result180__;
    }
    left_value_222=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1255, 34),__exception_result_var_b29=((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b29));
    come_call_finalizer3(right_value292,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_223=self->mRight;
    if(_if_conditional267=!node_compile(right_node_223,info),    _if_conditional267) {
        __result181__ = (_Bool)0;
        come_call_finalizer3(left_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result181__;
    }
    right_value_224=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1264, 35),__exception_result_var_b30=((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b30));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_225=(struct sType*)come_increment_ref_count(left_value_222->type);
    fun_name_226="operator_not_equals";
    if(self->mQuote) {
        calling_fun_227=(_Bool)0;
    }
    else {
        calling_fun_227=operator_overload_fun(type_225,fun_name_226,left_value_222,right_value_224,(_Bool)0,info);
    }
    if(_if_conditional269=!calling_fun_227,    _if_conditional269) {
        come_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1279, "CVALUE"))));
        come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj130=come_value_228->c_value;
        come_value_228->c_value=(char*)come_increment_ref_count(((char*)(right_value295=xsprintf("%s!=%s",left_value_222->c_value,right_value_224->c_value))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj131=come_value_228->type;
        come_value_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(left_value_222->type))));
        come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value296,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_228->type->mHeap=(_Bool)0;
        come_value_228->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_228->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
        come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result182__ = (_Bool)1;
    come_call_finalizer3(left_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result182__;
    come_call_finalizer3(left_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value297;
char* __dec_obj132;
void* right_value298;
struct sNode* __dec_obj133;
void* right_value299;
struct sNode* __dec_obj134;
struct sAndNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(info->sname))));
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value299) { right_value299 = come_decrement_ref_count2(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result183__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result183__;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndNode_terminated(struct sAndNode* self){
void* __result_obj__;
_Bool __result184__;
memset(&__result_obj__, 0, sizeof(void*));
    __result184__ = (_Bool)0;
    return __result184__;
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__;
void* right_value300;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value300 = (void*)0;
    __result185__ = __result_obj__ = ((char*)(right_value300=__builtin_string("sAndNode")));
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result185__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_229;
_Bool _if_conditional273;
_Bool __result186__;
void* right_value301;
struct CVALUE* __exception_result_var_b31;
struct CVALUE* left_value_230;
struct sNode* right_node_231;
_Bool _if_conditional274;
_Bool __result187__;
void* right_value302;
struct CVALUE* __exception_result_var_b32;
struct CVALUE* right_value_232;
struct sType* type_233;
char* fun_name_234;
_Bool calling_fun_235;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value303;
struct CVALUE* come_value_236;
void* right_value304;
char* __dec_obj135;
void* right_value305;
struct sType* __dec_obj136;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_229, 0, sizeof(struct sNode*));
right_value301 = (void*)0;
memset(&left_value_230, 0, sizeof(struct CVALUE*));
memset(&right_node_231, 0, sizeof(struct sNode*));
right_value302 = (void*)0;
memset(&right_value_232, 0, sizeof(struct CVALUE*));
memset(&type_233, 0, sizeof(struct sType*));
memset(&fun_name_234, 0, sizeof(char*));
memset(&calling_fun_235, 0, sizeof(_Bool));
right_value303 = (void*)0;
memset(&come_value_236, 0, sizeof(struct CVALUE*));
right_value304 = (void*)0;
right_value305 = (void*)0;
    left_node_229=self->mLeft;
    if(_if_conditional273=!node_compile(left_node_229,info),    _if_conditional273) {
        __result186__ = (_Bool)0;
        return __result186__;
    }
    left_value_230=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1330, 36),__exception_result_var_b31=((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b31));
    come_call_finalizer3(right_value301,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_231=self->mRight;
    if(_if_conditional274=!node_compile(right_node_231,info),    _if_conditional274) {
        __result187__ = (_Bool)0;
        come_call_finalizer3(left_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    right_value_232=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1339, 37),__exception_result_var_b32=((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b32));
    come_call_finalizer3(right_value302,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_233=(struct sType*)come_increment_ref_count(left_value_230->type);
    fun_name_234="operator_and";
    if(self->mQuote) {
        calling_fun_235=(_Bool)0;
    }
    else {
        calling_fun_235=operator_overload_fun(type_233,fun_name_234,left_value_230,right_value_232,(_Bool)0,info);
    }
    if(_if_conditional276=!calling_fun_235,    _if_conditional276) {
        come_value_236=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value303=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1355, "CVALUE"))));
        come_call_finalizer3(right_value303,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj135=come_value_236->c_value;
        come_value_236->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("%s&%s",left_value_230->c_value,right_value_232->c_value))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj136=come_value_236->type;
        come_value_236->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(left_value_230->type))));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_236->type->mHeap=(_Bool)0;
        come_value_236->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_236->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_236));
        come_call_finalizer3(come_value_236,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result188__ = (_Bool)1;
    come_call_finalizer3(left_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_233,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
    come_call_finalizer3(left_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_233,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value306;
char* __dec_obj137;
void* right_value307;
struct sNode* __dec_obj138;
void* right_value308;
struct sNode* __dec_obj139;
struct sXOrNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
    self->sline=info->sline;
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(info->sname))));
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value307) { right_value307 = come_decrement_ref_count2(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result189__ = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXOrNode_terminated(struct sXOrNode* self){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = (_Bool)0;
    return __result190__;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__;
void* right_value309;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value309 = (void*)0;
    __result191__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sXOrNode")));
    right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result191__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_237;
_Bool _if_conditional280;
_Bool __result192__;
void* right_value310;
struct CVALUE* __exception_result_var_b33;
struct CVALUE* left_value_238;
struct sNode* right_node_239;
_Bool _if_conditional281;
_Bool __result193__;
void* right_value311;
struct CVALUE* __exception_result_var_b34;
struct CVALUE* right_value_240;
struct sType* type_241;
char* fun_name_242;
_Bool calling_fun_243;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value312;
struct CVALUE* come_value_244;
void* right_value313;
char* __dec_obj140;
void* right_value314;
struct sType* __dec_obj141;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_237, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
memset(&left_value_238, 0, sizeof(struct CVALUE*));
memset(&right_node_239, 0, sizeof(struct sNode*));
right_value311 = (void*)0;
memset(&right_value_240, 0, sizeof(struct CVALUE*));
memset(&type_241, 0, sizeof(struct sType*));
memset(&fun_name_242, 0, sizeof(char*));
memset(&calling_fun_243, 0, sizeof(_Bool));
right_value312 = (void*)0;
memset(&come_value_244, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
    left_node_237=self->mLeft;
    if(_if_conditional280=!node_compile(left_node_237,info),    _if_conditional280) {
        __result192__ = (_Bool)0;
        return __result192__;
    }
    left_value_238=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1406, 38),__exception_result_var_b33=((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b33));
    come_call_finalizer3(right_value310,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_239=self->mRight;
    if(_if_conditional281=!node_compile(right_node_239,info),    _if_conditional281) {
        __result193__ = (_Bool)0;
        come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result193__;
    }
    right_value_240=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1415, 39),__exception_result_var_b34=((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b34));
    come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_241=(struct sType*)come_increment_ref_count(left_value_238->type);
    fun_name_242="operator_xor";
    if(self->mQuote) {
        calling_fun_243=(_Bool)0;
    }
    else {
        calling_fun_243=operator_overload_fun(type_241,fun_name_242,left_value_238,right_value_240,(_Bool)0,info);
    }
    if(_if_conditional283=!calling_fun_243,    _if_conditional283) {
        come_value_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1430, "CVALUE"))));
        come_call_finalizer3(right_value312,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj140=come_value_244->c_value;
        come_value_244->c_value=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("%s^%s",left_value_238->c_value,right_value_240->c_value))));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj141=come_value_244->type;
        come_value_244->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_value_238->type))));
        come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value314,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_244->type->mHeap=(_Bool)0;
        come_value_244->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_244->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_244));
        come_call_finalizer3(come_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result194__ = (_Bool)1;
    come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result194__;
    come_call_finalizer3(left_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value315;
char* __dec_obj142;
void* right_value316;
struct sNode* __dec_obj143;
void* right_value317;
struct sNode* __dec_obj144;
struct sOrNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(info->sname))));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj143=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj144=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result195__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result195__;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrNode_terminated(struct sOrNode* self){
void* __result_obj__;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    __result196__ = (_Bool)0;
    return __result196__;
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__;
void* right_value318;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value318 = (void*)0;
    __result197__ = __result_obj__ = ((char*)(right_value318=__builtin_string("sOrNode")));
    right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result197__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_245;
_Bool _if_conditional287;
_Bool __result198__;
void* right_value319;
struct CVALUE* __exception_result_var_b35;
struct CVALUE* left_value_246;
struct sNode* right_node_247;
_Bool _if_conditional288;
_Bool __result199__;
void* right_value320;
struct CVALUE* __exception_result_var_b36;
struct CVALUE* right_value_248;
struct sType* type_249;
char* fun_name_250;
_Bool calling_fun_251;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value321;
struct CVALUE* come_value_252;
void* right_value322;
char* __dec_obj145;
void* right_value323;
struct sType* __dec_obj146;
_Bool __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_245, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
memset(&left_value_246, 0, sizeof(struct CVALUE*));
memset(&right_node_247, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
memset(&right_value_248, 0, sizeof(struct CVALUE*));
memset(&type_249, 0, sizeof(struct sType*));
memset(&fun_name_250, 0, sizeof(char*));
memset(&calling_fun_251, 0, sizeof(_Bool));
right_value321 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    left_node_245=self->mLeft;
    if(_if_conditional287=!node_compile(left_node_245,info),    _if_conditional287) {
        __result198__ = (_Bool)0;
        return __result198__;
    }
    left_value_246=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1481, 40),__exception_result_var_b35=((struct CVALUE*)(right_value319=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b35));
    come_call_finalizer3(right_value319,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_247=self->mRight;
    if(_if_conditional288=!node_compile(right_node_247,info),    _if_conditional288) {
        __result199__ = (_Bool)0;
        come_call_finalizer3(left_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result199__;
    }
    right_value_248=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1490, 41),__exception_result_var_b36=((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b36));
    come_call_finalizer3(right_value320,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_249=(struct sType*)come_increment_ref_count(left_value_246->type);
    fun_name_250="operator_or";
    if(self->mQuote) {
        calling_fun_251=(_Bool)0;
    }
    else {
        calling_fun_251=operator_overload_fun(type_249,fun_name_250,left_value_246,right_value_248,(_Bool)0,info);
    }
    if(_if_conditional290=!calling_fun_251,    _if_conditional290) {
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1506, "CVALUE"))));
        come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj145=come_value_252->c_value;
        come_value_252->c_value=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("%s|%s",left_value_246->c_value,right_value_248->c_value))));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj146=come_value_252->type;
        come_value_252->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_value_246->type))));
        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_252->type->mHeap=(_Bool)0;
        come_value_252->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_252->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_252));
        come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result200__ = (_Bool)1;
    come_call_finalizer3(left_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result200__;
    come_call_finalizer3(left_value_246,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value324;
char* __dec_obj147;
void* right_value325;
struct sNode* __dec_obj148;
void* right_value326;
struct sNode* __dec_obj149;
struct sAndAndNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(info->sname))));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result201__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result201__;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndAndNode_terminated(struct sAndAndNode* self){
void* __result_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
    __result202__ = (_Bool)0;
    return __result202__;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__;
void* right_value327;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    __result203__ = __result_obj__ = ((char*)(right_value327=__builtin_string("sAndAndNode")));
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result203__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_253;
_Bool _if_conditional294;
_Bool __result204__;
void* right_value328;
struct CVALUE* __exception_result_var_b37;
struct CVALUE* left_value_254;
struct sNode* right_node_255;
_Bool _if_conditional295;
_Bool __result205__;
void* right_value329;
struct CVALUE* __exception_result_var_b38;
struct CVALUE* right_value_256;
struct sType* type_257;
char* fun_name_258;
_Bool calling_fun_259;
_Bool _if_conditional296;
_Bool _if_conditional297;
void* right_value330;
struct CVALUE* come_value_260;
void* right_value331;
char* __dec_obj150;
void* right_value332;
struct sType* __dec_obj151;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_253, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
memset(&left_value_254, 0, sizeof(struct CVALUE*));
memset(&right_node_255, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&right_value_256, 0, sizeof(struct CVALUE*));
memset(&type_257, 0, sizeof(struct sType*));
memset(&fun_name_258, 0, sizeof(char*));
memset(&calling_fun_259, 0, sizeof(_Bool));
right_value330 = (void*)0;
memset(&come_value_260, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
right_value332 = (void*)0;
    left_node_253=self->mLeft;
    if(_if_conditional294=!node_compile(left_node_253,info),    _if_conditional294) {
        __result204__ = (_Bool)0;
        return __result204__;
    }
    left_value_254=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1557, 42),__exception_result_var_b37=((struct CVALUE*)(right_value328=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b37));
    come_call_finalizer3(right_value328,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_255=self->mRight;
    if(_if_conditional295=!node_compile(right_node_255,info),    _if_conditional295) {
        __result205__ = (_Bool)0;
        come_call_finalizer3(left_value_254,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result205__;
    }
    right_value_256=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1566, 43),__exception_result_var_b38=((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b38));
    come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_257=(struct sType*)come_increment_ref_count(left_value_254->type);
    fun_name_258="operator_andand";
    if(self->mQuote) {
        calling_fun_259=(_Bool)0;
    }
    else {
        calling_fun_259=operator_overload_fun(type_257,fun_name_258,left_value_254,right_value_256,(_Bool)0,info);
    }
    if(_if_conditional297=!calling_fun_259,    _if_conditional297) {
        come_value_260=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1582, "CVALUE"))));
        come_call_finalizer3(right_value330,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj150=come_value_260->c_value;
        come_value_260->c_value=(char*)come_increment_ref_count(((char*)(right_value331=xsprintf("%s&&%s",left_value_254->c_value,right_value_256->c_value))));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj151=come_value_260->type;
        come_value_260->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(left_value_254->type))));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_260->type->mHeap=(_Bool)0;
        come_value_260->var=left_value_254->var;
        add_come_last_code(info,"%s;\n",come_value_260->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_260));
        come_call_finalizer3(come_value_260,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result206__ = (_Bool)1;
    come_call_finalizer3(left_value_254,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer3(left_value_254,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_256,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value333;
char* __dec_obj152;
void* right_value334;
struct sNode* __dec_obj153;
void* right_value335;
struct sNode* __dec_obj154;
struct sOrOrNode* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value333=__builtin_string(info->sname))));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result207__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result207__;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrOrNode_terminated(struct sOrOrNode* self){
void* __result_obj__;
_Bool __result208__;
memset(&__result_obj__, 0, sizeof(void*));
    __result208__ = (_Bool)0;
    return __result208__;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__;
void* right_value336;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value336 = (void*)0;
    __result209__ = __result_obj__ = ((char*)(right_value336=__builtin_string("sOrOrNode")));
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result209__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_261;
_Bool _if_conditional301;
_Bool __result210__;
void* right_value337;
struct CVALUE* __exception_result_var_b39;
struct CVALUE* left_value_262;
struct sNode* right_node_263;
_Bool _if_conditional302;
_Bool __result211__;
void* right_value338;
struct CVALUE* __exception_result_var_b40;
struct CVALUE* right_value_264;
struct sType* type_265;
char* fun_name_266;
_Bool calling_fun_267;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value339;
struct CVALUE* come_value_268;
void* right_value340;
char* __dec_obj155;
void* right_value341;
struct sType* __dec_obj156;
_Bool __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_261, 0, sizeof(struct sNode*));
right_value337 = (void*)0;
memset(&left_value_262, 0, sizeof(struct CVALUE*));
memset(&right_node_263, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&right_value_264, 0, sizeof(struct CVALUE*));
memset(&type_265, 0, sizeof(struct sType*));
memset(&fun_name_266, 0, sizeof(char*));
memset(&calling_fun_267, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&come_value_268, 0, sizeof(struct CVALUE*));
right_value340 = (void*)0;
right_value341 = (void*)0;
    left_node_261=self->mLeft;
    if(_if_conditional301=!node_compile(left_node_261,info),    _if_conditional301) {
        __result210__ = (_Bool)0;
        return __result210__;
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1633, 44),__exception_result_var_b39=((struct CVALUE*)(right_value337=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b39));
    come_call_finalizer3(right_value337,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_263=self->mRight;
    if(_if_conditional302=!node_compile(right_node_263,info),    _if_conditional302) {
        __result211__ = (_Bool)0;
        come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result211__;
    }
    right_value_264=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1642, 45),__exception_result_var_b40=((struct CVALUE*)(right_value338=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b40));
    come_call_finalizer3(right_value338,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_265=(struct sType*)come_increment_ref_count(left_value_262->type);
    fun_name_266="operator_oror";
    if(self->mQuote) {
        calling_fun_267=(_Bool)0;
    }
    else {
        calling_fun_267=operator_overload_fun(type_265,fun_name_266,left_value_262,right_value_264,(_Bool)0,info);
    }
    if(_if_conditional304=!calling_fun_267,    _if_conditional304) {
        come_value_268=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1657, "CVALUE"))));
        come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj155=come_value_268->c_value;
        come_value_268->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("%s||%s",left_value_262->c_value,right_value_264->c_value))));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj156=come_value_268->type;
        come_value_268->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(left_value_262->type))));
        come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_268->type->mHeap=(_Bool)0;
        come_value_268->var=left_value_262->var;
        add_come_last_code(info,"%s;\n",come_value_268->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_268));
        come_call_finalizer3(come_value_268,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result212__ = (_Bool)1;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result212__;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value342;
char* __dec_obj157;
void* right_value343;
struct sNode* __dec_obj158;
void* right_value344;
struct sNode* __dec_obj159;
struct sCommaNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string(info->sname))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=sNode_clone(left))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj159=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=sNode_clone(right))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result213__ = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCommaNode_terminated(struct sCommaNode* self){
void* __result_obj__;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = (_Bool)0;
    return __result214__;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__;
void* right_value345;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    __result215__ = __result_obj__ = ((char*)(right_value345=__builtin_string("sCommaNode")));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_269;
_Bool _if_conditional308;
_Bool __result216__;
void* right_value346;
struct CVALUE* __exception_result_var_b41;
struct CVALUE* left_value_270;
struct sNode* right_node_271;
_Bool _if_conditional309;
_Bool __result217__;
void* right_value347;
struct CVALUE* __exception_result_var_b42;
struct CVALUE* right_value_272;
void* right_value348;
struct CVALUE* come_value_273;
void* right_value349;
char* __dec_obj160;
void* right_value350;
struct sType* __dec_obj161;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_269, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
memset(&left_value_270, 0, sizeof(struct CVALUE*));
memset(&right_node_271, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
memset(&right_value_272, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
memset(&come_value_273, 0, sizeof(struct CVALUE*));
right_value349 = (void*)0;
right_value350 = (void*)0;
    left_node_269=self->mLeft;
    if(_if_conditional308=!node_compile(left_node_269,info),    _if_conditional308) {
        __result216__ = (_Bool)0;
        return __result216__;
    }
    left_value_270=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1706, 46),__exception_result_var_b41=((struct CVALUE*)(right_value346=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b41));
    come_call_finalizer3(right_value346,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_271=self->mRight;
    if(_if_conditional309=!node_compile(right_node_271,info),    _if_conditional309) {
        __result217__ = (_Bool)0;
        come_call_finalizer3(left_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result217__;
    }
    right_value_272=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1715, 47),__exception_result_var_b42=((struct CVALUE*)(right_value347=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b42));
    come_call_finalizer3(right_value347,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_273=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1718, "CVALUE"))));
    come_call_finalizer3(right_value348,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=come_value_273->c_value;
    come_value_273->c_value=(char*)come_increment_ref_count(((char*)(right_value349=xsprintf("%s,%s",left_value_270->c_value,right_value_272->c_value))));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj161=come_value_273->type;
    come_value_273->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(left_value_270->type))));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_273->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_273->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_273));
    __result218__ = (_Bool)1;
    come_call_finalizer3(left_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result218__;
    come_call_finalizer3(left_value_270,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value351;
char* __dec_obj162;
void* right_value352;
struct sNode* __dec_obj163;
void* right_value353;
struct sNode* __dec_obj164;
void* right_value354;
struct sNode* __dec_obj165;
struct sConditionalNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
    self->sline=info->sline;
    __dec_obj162=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value351=__builtin_string(info->sname))));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=sNode_clone(value1))));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj164=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(value2))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj165=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(value3))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result219__ = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result219__;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sConditionalNode_terminated(struct sConditionalNode* self){
void* __result_obj__;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    __result220__ = (_Bool)0;
    return __result220__;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__;
void* right_value355;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value355 = (void*)0;
    __result221__ = __result_obj__ = ((char*)(right_value355=__builtin_string("sConditionalNode")));
    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result221__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_274;
_Bool _if_conditional314;
_Bool __result222__;
void* right_value356;
struct CVALUE* __exception_result_var_b43;
struct CVALUE* value1_value_275;
struct sNode* value2_276;
_Bool _if_conditional315;
_Bool __result223__;
void* right_value357;
struct CVALUE* __exception_result_var_b44;
struct CVALUE* value2_value_277;
struct sNode* value3_278;
_Bool _if_conditional316;
_Bool __result224__;
void* right_value358;
struct CVALUE* __exception_result_var_b45;
struct CVALUE* value3_value_279;
void* right_value359;
struct CVALUE* come_value_280;
void* right_value360;
char* __dec_obj166;
void* right_value361;
struct sType* __dec_obj167;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_274, 0, sizeof(struct sNode*));
right_value356 = (void*)0;
memset(&value1_value_275, 0, sizeof(struct CVALUE*));
memset(&value2_276, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
memset(&value2_value_277, 0, sizeof(struct CVALUE*));
memset(&value3_278, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&value3_value_279, 0, sizeof(struct CVALUE*));
right_value359 = (void*)0;
memset(&come_value_280, 0, sizeof(struct CVALUE*));
right_value360 = (void*)0;
right_value361 = (void*)0;
    value1_274=self->mValue1;
    if(_if_conditional314=!node_compile(value1_274,info),    _if_conditional314) {
        __result222__ = (_Bool)0;
        return __result222__;
    }
    value1_value_275=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1767, 48),__exception_result_var_b43=((struct CVALUE*)(right_value356=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b43));
    come_call_finalizer3(right_value356,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value2_276=self->mValue2;
    if(_if_conditional315=!node_compile(value2_276,info),    _if_conditional315) {
        __result223__ = (_Bool)0;
        come_call_finalizer3(value1_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result223__;
    }
    value2_value_277=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1776, 49),__exception_result_var_b44=((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b44));
    come_call_finalizer3(right_value357,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value3_278=self->mValue3;
    if(_if_conditional316=!node_compile(value3_278,info),    _if_conditional316) {
        __result224__ = (_Bool)0;
        come_call_finalizer3(value1_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result224__;
    }
    value3_value_279=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1785, 50),__exception_result_var_b45=((struct CVALUE*)(right_value358=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b45));
    come_call_finalizer3(right_value358,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_280=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value359=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1788, "CVALUE"))));
    come_call_finalizer3(right_value359,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj166=come_value_280->c_value;
    come_value_280->c_value=(char*)come_increment_ref_count(((char*)(right_value360=xsprintf("%s?%s:%s",value1_value_275->c_value,value2_value_277->c_value,value3_value_279->c_value))));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj167=come_value_280->type;
    come_value_280->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value361=sType_clone(value1_value_275->type))));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value361,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_280->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_280->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_280));
    __result225__ = (_Bool)1;
    come_call_finalizer3(value1_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result225__;
    come_call_finalizer3(value1_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_279,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value362;
struct sNode* __exception_result_var_b46;
struct sNode* node_281;
_Bool _while_condtional19;
_Bool _if_conditional317;
void* right_value363;
struct sNode* right_282;
void* right_value364;
void* right_value365;
struct sNode* _inf_value1;
struct sMultNode* _inf_obj_value1;
void* right_value370;
struct sNode* __result228__;
_Bool _if_conditional327;
void* right_value371;
struct sNode* right_284;
void* right_value372;
void* right_value373;
struct sNode* _inf_value2;
struct sDivNode* _inf_obj_value2;
void* right_value378;
struct sNode* __result231__;
_Bool _if_conditional337;
void* right_value379;
struct sNode* __exception_result_var_b47;
struct sNode* right_286;
void* right_value380;
void* right_value381;
struct sNode* _inf_value3;
struct sModNode* _inf_obj_value3;
void* right_value386;
struct sNode* __result234__;
_Bool _if_conditional347;
void* right_value387;
struct sNode* right_288;
void* right_value388;
void* right_value389;
struct sNode* _inf_value4;
struct sMultNode* _inf_obj_value4;
void* right_value394;
struct sNode* __result237__;
_Bool _if_conditional357;
void* right_value395;
struct sNode* right_290;
void* right_value396;
void* right_value397;
struct sNode* _inf_value5;
struct sDivNode* _inf_obj_value5;
void* right_value402;
struct sNode* __result240__;
_Bool _if_conditional367;
void* right_value403;
struct sNode* __exception_result_var_b48;
struct sNode* right_292;
void* right_value404;
void* right_value405;
struct sNode* _inf_value6;
struct sModNode* _inf_obj_value6;
void* right_value410;
struct sNode* __result243__;
struct sNode* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value362 = (void*)0;
memset(&node_281, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
memset(&right_282, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&right_284, 0, sizeof(struct sNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
memset(&right_286, 0, sizeof(struct sNode*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&right_288, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value410 = (void*)0;
    node_281=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1804, 51),__exception_result_var_b46=((struct sNode*)(right_value362=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b46));
    if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional317=!node_281->terminated(node_281->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional317) {
            info->p++;
            skip_spaces_and_lf(info);
            right_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=mult_exp(info))));
            if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1815, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sMultNode*)(right_value365=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value364=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1815, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_282),(_Bool)0,info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sMultNode_finalize;
            _inf_value1->clone=(void*)sMultNode_clone;
            _inf_value1->compile=(void*)sMultNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sMultNode_terminated;
            _inf_value1->kind=(void*)sMultNode_kind;
            __result228__ = __result_obj__ = ((struct sNode*)(right_value370=_inf_value1));
            if(right_282) { right_282 = come_decrement_ref_count2(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value364,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value365,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result228__;
            if(right_282) { right_282 = come_decrement_ref_count2(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional327=*info->p==47&&*(info->p+1)!=61,            _if_conditional327) {
                info->p++;
                skip_spaces_and_lf(info);
                right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=mult_exp(info))));
                if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1823, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sDivNode*)(right_value373=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value372=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1823, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sDivNode_finalize;
                _inf_value2->clone=(void*)sDivNode_clone;
                _inf_value2->compile=(void*)sDivNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sDivNode_terminated;
                _inf_value2->kind=(void*)sDivNode_kind;
                __result231__ = __result_obj__ = ((struct sNode*)(right_value378=_inf_value2));
                if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value372,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value373,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value378) { right_value378 = come_decrement_ref_count2(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result231__;
                if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional337=*info->p==37&&*(info->p+1)!=61,                _if_conditional337) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_286=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1829, 52),__exception_result_var_b47=((struct sNode*)(right_value379=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b47));
                    if(right_value379) { right_value379 = come_decrement_ref_count2(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1831, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sModNode*)(right_value381=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value380=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1831, "sModNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sModNode_finalize;
                    _inf_value3->clone=(void*)sModNode_clone;
                    _inf_value3->compile=(void*)sModNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sModNode_terminated;
                    _inf_value3->kind=(void*)sModNode_kind;
                    __result234__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value3));
                    if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value380,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value381,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result234__;
                    if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional347=!node_281->terminated(node_281->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional347) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=mult_exp(info))));
                        if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1839, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sMultNode*)(right_value389=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value388=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1839, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_288),(_Bool)1,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sMultNode_finalize;
                        _inf_value4->clone=(void*)sMultNode_clone;
                        _inf_value4->compile=(void*)sMultNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sMultNode_terminated;
                        _inf_value4->kind=(void*)sMultNode_kind;
                        __result237__ = __result_obj__ = ((struct sNode*)(right_value394=_inf_value4));
                        if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value388,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value389,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result237__;
                        if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional357=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional357) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=mult_exp(info))));
                            if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1847, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sDivNode*)(right_value397=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value396=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1847, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_290),(_Bool)1,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sDivNode_finalize;
                            _inf_value5->clone=(void*)sDivNode_clone;
                            _inf_value5->compile=(void*)sDivNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sDivNode_terminated;
                            _inf_value5->kind=(void*)sDivNode_kind;
                            __result240__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value5));
                            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value396,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value397,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result240__;
                            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional367=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional367) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_292=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1853, 53),__exception_result_var_b48=((struct sNode*)(right_value403=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b48));
                                if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1855, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sModNode*)(right_value405=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value404=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1855, "sModNode")))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sModNode_finalize;
                                _inf_value6->clone=(void*)sModNode_clone;
                                _inf_value6->compile=(void*)sModNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sModNode_terminated;
                                _inf_value6->kind=(void*)sModNode_kind;
                                __result243__ = __result_obj__ = ((struct sNode*)(right_value410=_inf_value6));
                                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value404,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value405,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result243__;
                                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result244__ = __result_obj__ = node_281;
    if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result244__;
    if(node_281) { node_281 = come_decrement_ref_count2(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional348) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional349=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional349) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional350=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional350) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional351;
struct sMultNode* __result235__;
void* right_value390;
struct sMultNode* result_289;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value391;
char* __dec_obj177;
_Bool _if_conditional354;
void* right_value392;
struct sNode* __dec_obj178;
_Bool _if_conditional355;
void* right_value393;
struct sNode* __dec_obj179;
_Bool _if_conditional356;
struct sMultNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_289, 0, sizeof(struct sMultNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
                            if(_if_conditional351=self==(void*)0,                            _if_conditional351) {
                                __result235__ = __result_obj__ = (void*)0;
                                return __result235__;
                            }
                            result_289=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value390=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer3(right_value390,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional352=self!=((void*)0),                            _if_conditional352) {
                                result_289->sline=self->sline;
                            }
                            if(_if_conditional353=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional353) {
                                __dec_obj177=result_289->sname;
                                result_289->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional354=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional354) {
                                __dec_obj178=result_289->mLeft;
                                result_289->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=sNode_clone(self->mLeft))));
                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional355=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional355) {
                                __dec_obj179=result_289->mRight;
                                result_289->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mRight))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional356=self!=((void*)0),                            _if_conditional356) {
                                result_289->mQuote=self->mQuote;
                            }
                            __result236__ = __result_obj__ = result_289;
                            come_call_finalizer3(result_289,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result236__;
                            come_call_finalizer3(result_289,sMultNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional358) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional359=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional359) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional360=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional360) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional361;
struct sDivNode* __result238__;
void* right_value398;
struct sDivNode* result_291;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value399;
char* __dec_obj180;
_Bool _if_conditional364;
void* right_value400;
struct sNode* __dec_obj181;
_Bool _if_conditional365;
void* right_value401;
struct sNode* __dec_obj182;
_Bool _if_conditional366;
struct sDivNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value398 = (void*)0;
memset(&result_291, 0, sizeof(struct sDivNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
                                if(_if_conditional361=self==(void*)0,                                _if_conditional361) {
                                    __result238__ = __result_obj__ = (void*)0;
                                    return __result238__;
                                }
                                result_291=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value398=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer3(right_value398,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional362=self!=((void*)0),                                _if_conditional362) {
                                    result_291->sline=self->sline;
                                }
                                if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional363) {
                                    __dec_obj180=result_291->sname;
                                    result_291->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(self->sname))));
                                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value399 = come_decrement_ref_count2(right_value399, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional364=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional364) {
                                    __dec_obj181=result_291->mLeft;
                                    result_291->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=sNode_clone(self->mLeft))));
                                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional365=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional365) {
                                    __dec_obj182=result_291->mRight;
                                    result_291->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(self->mRight))));
                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional366=self!=((void*)0),                                _if_conditional366) {
                                    result_291->mQuote=self->mQuote;
                                }
                                __result239__ = __result_obj__ = result_291;
                                come_call_finalizer3(result_291,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result239__;
                                come_call_finalizer3(result_291,sDivNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional368) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional369=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional369) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional370=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional370) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional371;
struct sModNode* __result241__;
void* right_value406;
struct sModNode* result_293;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value407;
char* __dec_obj183;
_Bool _if_conditional374;
void* right_value408;
struct sNode* __dec_obj184;
_Bool _if_conditional375;
void* right_value409;
struct sNode* __dec_obj185;
_Bool _if_conditional376;
struct sModNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
right_value406 = (void*)0;
memset(&result_293, 0, sizeof(struct sModNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
                                    if(_if_conditional371=self==(void*)0,                                    _if_conditional371) {
                                        __result241__ = __result_obj__ = (void*)0;
                                        return __result241__;
                                    }
                                    result_293=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value406=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer3(right_value406,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional372=self!=((void*)0),                                    _if_conditional372) {
                                        result_293->sline=self->sline;
                                    }
                                    if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional373) {
                                        __dec_obj183=result_293->sname;
                                        result_293->sname=(char*)come_increment_ref_count(((char*)(right_value407=string_clone(self->sname))));
                                        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional374=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional374) {
                                        __dec_obj184=result_293->mLeft;
                                        result_293->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(self->mLeft))));
                                        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional375=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional375) {
                                        __dec_obj185=result_293->mRight;
                                        result_293->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->mRight))));
                                        if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional376=self!=((void*)0),                                    _if_conditional376) {
                                        result_293->mQuote=self->mQuote;
                                    }
                                    __result242__ = __result_obj__ = result_293;
                                    come_call_finalizer3(result_293,sModNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result242__;
                                    come_call_finalizer3(result_293,sModNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value411;
struct sNode* node_294;
_Bool _while_condtional20;
_Bool _if_conditional377;
void* right_value412;
struct sNode* right_295;
void* right_value413;
void* right_value414;
struct sNode* _inf_value7;
struct sAddNode* _inf_obj_value7;
void* right_value419;
struct sNode* __result247__;
_Bool _if_conditional387;
void* right_value420;
struct sNode* right_297;
void* right_value421;
void* right_value422;
struct sNode* _inf_value8;
struct sSubNode* _inf_obj_value8;
void* right_value427;
struct sNode* __result250__;
_Bool _if_conditional397;
void* right_value428;
struct sNode* right_299;
void* right_value429;
void* right_value430;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value435;
struct sNode* __result253__;
_Bool _if_conditional407;
void* right_value436;
struct sNode* right_301;
void* right_value437;
void* right_value438;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value443;
struct sNode* __result256__;
struct sNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
memset(&node_294, 0, sizeof(struct sNode*));
right_value412 = (void*)0;
memset(&right_295, 0, sizeof(struct sNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
memset(&right_297, 0, sizeof(struct sNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&right_299, 0, sizeof(struct sNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&right_301, 0, sizeof(struct sNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value443 = (void*)0;
    node_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=mult_exp(info))));
    if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional377=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional377) {
            info->p++;
            skip_spaces_and_lf(info);
            right_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=add_exp(info))));
            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1881, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sAddNode*)(right_value414=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value413=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1881, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_294),(struct sNode*)come_increment_ref_count(right_295),(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sAddNode_finalize;
            _inf_value7->clone=(void*)sAddNode_clone;
            _inf_value7->compile=(void*)sAddNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sAddNode_terminated;
            _inf_value7->kind=(void*)sAddNode_kind;
            __result247__ = __result_obj__ = ((struct sNode*)(right_value419=_inf_value7));
            if(right_295) { right_295 = come_decrement_ref_count2(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value413,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value414,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result247__;
            if(right_295) { right_295 = come_decrement_ref_count2(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional387=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional387) {
                info->p++;
                skip_spaces_and_lf(info);
                right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=add_exp(info))));
                if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1890, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sSubNode*)(right_value422=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value421=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1890, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_294),(struct sNode*)come_increment_ref_count(right_297),(_Bool)0,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sSubNode_finalize;
                _inf_value8->clone=(void*)sSubNode_clone;
                _inf_value8->compile=(void*)sSubNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sSubNode_terminated;
                _inf_value8->kind=(void*)sSubNode_kind;
                __result250__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value8));
                if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value421,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value422,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result250__;
                if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional397=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional397) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=add_exp(info))));
                    if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1899, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value430=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value429=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1899, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_294),(struct sNode*)come_increment_ref_count(right_299),(_Bool)1,info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sAddNode_finalize;
                    _inf_value9->clone=(void*)sAddNode_clone;
                    _inf_value9->compile=(void*)sAddNode_compile;
                    _inf_value9->sline=(void*)sNodeBase_sline;
                    _inf_value9->sname=(void*)sNodeBase_sname;
                    _inf_value9->terminated=(void*)sAddNode_terminated;
                    _inf_value9->kind=(void*)sAddNode_kind;
                    __result253__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value9));
                    if(right_299) { right_299 = come_decrement_ref_count2(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value429,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value430,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result253__;
                    if(right_299) { right_299 = come_decrement_ref_count2(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional407=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional407) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=add_exp(info))));
                        if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1908, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value438=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value437=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1908, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_294),(struct sNode*)come_increment_ref_count(right_301),(_Bool)1,info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sSubNode_finalize;
                        _inf_value10->clone=(void*)sSubNode_clone;
                        _inf_value10->compile=(void*)sSubNode_compile;
                        _inf_value10->sline=(void*)sNodeBase_sline;
                        _inf_value10->sname=(void*)sNodeBase_sname;
                        _inf_value10->terminated=(void*)sSubNode_terminated;
                        _inf_value10->kind=(void*)sSubNode_kind;
                        __result256__ = __result_obj__ = ((struct sNode*)(right_value443=_inf_value10));
                        if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value437,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value438,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result256__;
                        if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result257__ = __result_obj__ = node_294;
    if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result257__;
    if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional398) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional399=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional399) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional400=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional400) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional401;
struct sAddNode* __result251__;
void* right_value431;
struct sAddNode* result_300;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value432;
char* __dec_obj192;
_Bool _if_conditional404;
void* right_value433;
struct sNode* __dec_obj193;
_Bool _if_conditional405;
void* right_value434;
struct sNode* __dec_obj194;
_Bool _if_conditional406;
struct sAddNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
memset(&result_300, 0, sizeof(struct sAddNode*));
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
                        if(_if_conditional401=self==(void*)0,                        _if_conditional401) {
                            __result251__ = __result_obj__ = (void*)0;
                            return __result251__;
                        }
                        result_300=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value431=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer3(right_value431,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional402=self!=((void*)0),                        _if_conditional402) {
                            result_300->sline=self->sline;
                        }
                        if(_if_conditional403=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional403) {
                            __dec_obj192=result_300->sname;
                            result_300->sname=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->sname))));
                            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional404=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional404) {
                            __dec_obj193=result_300->mLeft;
                            result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=sNode_clone(self->mLeft))));
                            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional405=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional405) {
                            __dec_obj194=result_300->mRight;
                            result_300->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(self->mRight))));
                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            result_300->mQuote=self->mQuote;
                        }
                        __result252__ = __result_obj__ = result_300;
                        come_call_finalizer3(result_300,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result252__;
                        come_call_finalizer3(result_300,sAddNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional408) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional409=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional409) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional410=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional410) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional411;
struct sSubNode* __result254__;
void* right_value439;
struct sSubNode* result_302;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value440;
char* __dec_obj195;
_Bool _if_conditional414;
void* right_value441;
struct sNode* __dec_obj196;
_Bool _if_conditional415;
void* right_value442;
struct sNode* __dec_obj197;
_Bool _if_conditional416;
struct sSubNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value439 = (void*)0;
memset(&result_302, 0, sizeof(struct sSubNode*));
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
                            if(_if_conditional411=self==(void*)0,                            _if_conditional411) {
                                __result254__ = __result_obj__ = (void*)0;
                                return __result254__;
                            }
                            result_302=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value439=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer3(right_value439,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional412=self!=((void*)0),                            _if_conditional412) {
                                result_302->sline=self->sline;
                            }
                            if(_if_conditional413=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional413) {
                                __dec_obj195=result_302->sname;
                                result_302->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->sname))));
                                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional414) {
                                __dec_obj196=result_302->mLeft;
                                result_302->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=sNode_clone(self->mLeft))));
                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional415=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional415) {
                                __dec_obj197=result_302->mRight;
                                result_302->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(self->mRight))));
                                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional416=self!=((void*)0),                            _if_conditional416) {
                                result_302->mQuote=self->mQuote;
                            }
                            __result255__ = __result_obj__ = result_302;
                            come_call_finalizer3(result_302,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result255__;
                            come_call_finalizer3(result_302,sSubNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value444;
struct sNode* node_303;
_Bool _while_condtional21;
_Bool _if_conditional417;
void* right_value445;
struct sNode* right_304;
void* right_value446;
void* right_value447;
struct sNode* _inf_value11;
struct sLShiftNode* _inf_obj_value11;
void* right_value452;
struct sNode* __result260__;
_Bool _if_conditional427;
void* right_value453;
struct sNode* right_306;
void* right_value454;
void* right_value455;
struct sNode* _inf_value12;
struct sRShiftNode* _inf_obj_value12;
void* right_value460;
struct sNode* __result263__;
_Bool _if_conditional437;
void* right_value461;
struct sNode* right_308;
void* right_value462;
void* right_value463;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value468;
struct sNode* __result266__;
_Bool _if_conditional447;
void* right_value469;
struct sNode* right_310;
void* right_value470;
void* right_value471;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value476;
struct sNode* __result269__;
struct sNode* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value444 = (void*)0;
memset(&node_303, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
memset(&right_304, 0, sizeof(struct sNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&right_308, 0, sizeof(struct sNode*));
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&right_310, 0, sizeof(struct sNode*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value476 = (void*)0;
    parse_sharp_v5(info);
    node_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=add_exp(info))));
    if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional417=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional417) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=shift_exp(info))));
            if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1935, "struct sNode");
            _inf_obj_value11=come_increment_ref_count(((struct sLShiftNode*)(right_value447=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value446=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1935, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_304),(_Bool)0,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sLShiftNode_finalize;
            _inf_value11->clone=(void*)sLShiftNode_clone;
            _inf_value11->compile=(void*)sLShiftNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sLShiftNode_terminated;
            _inf_value11->kind=(void*)sLShiftNode_kind;
            __result260__ = __result_obj__ = ((struct sNode*)(right_value452=_inf_value11));
            if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value446,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value447,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result260__;
            if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional427=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional427) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=shift_exp(info))));
                if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1943, "struct sNode");
                _inf_obj_value12=come_increment_ref_count(((struct sRShiftNode*)(right_value455=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value454=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1943, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sRShiftNode_finalize;
                _inf_value12->clone=(void*)sRShiftNode_clone;
                _inf_value12->compile=(void*)sRShiftNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sRShiftNode_terminated;
                _inf_value12->kind=(void*)sRShiftNode_kind;
                __result263__ = __result_obj__ = ((struct sNode*)(right_value460=_inf_value12));
                if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value454,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value455,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result263__;
                if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional437=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional437) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value461=shift_exp(info))));
                    if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1951, "struct sNode");
                    _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value463=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value462=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1951, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sLShiftNode_finalize;
                    _inf_value13->clone=(void*)sLShiftNode_clone;
                    _inf_value13->compile=(void*)sLShiftNode_compile;
                    _inf_value13->sline=(void*)sNodeBase_sline;
                    _inf_value13->sname=(void*)sNodeBase_sname;
                    _inf_value13->terminated=(void*)sLShiftNode_terminated;
                    _inf_value13->kind=(void*)sLShiftNode_kind;
                    __result266__ = __result_obj__ = ((struct sNode*)(right_value468=_inf_value13));
                    if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value462,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value463,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result266__;
                    if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional447=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional447) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=shift_exp(info))));
                        if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1959, "struct sNode");
                        _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value471=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value470=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1959, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_310),(_Bool)1,info))));
                        _inf_value14->_protocol_obj=_inf_obj_value14;
                        _inf_value14->finalize=(void*)sRShiftNode_finalize;
                        _inf_value14->clone=(void*)sRShiftNode_clone;
                        _inf_value14->compile=(void*)sRShiftNode_compile;
                        _inf_value14->sline=(void*)sNodeBase_sline;
                        _inf_value14->sname=(void*)sNodeBase_sname;
                        _inf_value14->terminated=(void*)sRShiftNode_terminated;
                        _inf_value14->kind=(void*)sRShiftNode_kind;
                        __result269__ = __result_obj__ = ((struct sNode*)(right_value476=_inf_value14));
                        if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value470,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value471,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result269__;
                        if(right_310) { right_310 = come_decrement_ref_count2(right_310, ((struct sNode*)right_310)->finalize, ((struct sNode*)right_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result270__ = __result_obj__ = node_303;
    if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result270__;
    if(node_303) { node_303 = come_decrement_ref_count2(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional438) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional439=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional439) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional440=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional440) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional441;
struct sLShiftNode* __result264__;
void* right_value464;
struct sLShiftNode* result_309;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value465;
char* __dec_obj204;
_Bool _if_conditional444;
void* right_value466;
struct sNode* __dec_obj205;
_Bool _if_conditional445;
void* right_value467;
struct sNode* __dec_obj206;
_Bool _if_conditional446;
struct sLShiftNode* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value464 = (void*)0;
memset(&result_309, 0, sizeof(struct sLShiftNode*));
right_value465 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
                        if(_if_conditional441=self==(void*)0,                        _if_conditional441) {
                            __result264__ = __result_obj__ = (void*)0;
                            return __result264__;
                        }
                        result_309=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value464=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer3(right_value464,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional442=self!=((void*)0),                        _if_conditional442) {
                            result_309->sline=self->sline;
                        }
                        if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional443) {
                            __dec_obj204=result_309->sname;
                            result_309->sname=(char*)come_increment_ref_count(((char*)(right_value465=string_clone(self->sname))));
                            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value465 = come_decrement_ref_count2(right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional444=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional444) {
                            __dec_obj205=result_309->mLeft;
                            result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value466=sNode_clone(self->mLeft))));
                            if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional445=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional445) {
                            __dec_obj206=result_309->mRight;
                            result_309->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=sNode_clone(self->mRight))));
                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional446=self!=((void*)0),                        _if_conditional446) {
                            result_309->mQuote=self->mQuote;
                        }
                        __result265__ = __result_obj__ = result_309;
                        come_call_finalizer3(result_309,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result265__;
                        come_call_finalizer3(result_309,sLShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional448=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional448) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional449=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional449) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional450=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional450) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional451;
struct sRShiftNode* __result267__;
void* right_value472;
struct sRShiftNode* result_311;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value473;
char* __dec_obj207;
_Bool _if_conditional454;
void* right_value474;
struct sNode* __dec_obj208;
_Bool _if_conditional455;
void* right_value475;
struct sNode* __dec_obj209;
_Bool _if_conditional456;
struct sRShiftNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value472 = (void*)0;
memset(&result_311, 0, sizeof(struct sRShiftNode*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
                            if(_if_conditional451=self==(void*)0,                            _if_conditional451) {
                                __result267__ = __result_obj__ = (void*)0;
                                return __result267__;
                            }
                            result_311=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value472=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer3(right_value472,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional452=self!=((void*)0),                            _if_conditional452) {
                                result_311->sline=self->sline;
                            }
                            if(_if_conditional453=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional453) {
                                __dec_obj207=result_311->sname;
                                result_311->sname=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(self->sname))));
                                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value473 = come_decrement_ref_count2(right_value473, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional454=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional454) {
                                __dec_obj208=result_311->mLeft;
                                result_311->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=sNode_clone(self->mLeft))));
                                if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional455=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional455) {
                                __dec_obj209=result_311->mRight;
                                result_311->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value475=sNode_clone(self->mRight))));
                                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional456=self!=((void*)0),                            _if_conditional456) {
                                result_311->mQuote=self->mQuote;
                            }
                            __result268__ = __result_obj__ = result_311;
                            come_call_finalizer3(result_311,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result268__;
                            come_call_finalizer3(result_311,sRShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value477;
struct sNode* node_312;
_Bool _while_condtional22;
_Bool _if_conditional457;
void* right_value478;
struct sNode* right_313;
void* right_value479;
void* right_value480;
struct sNode* _inf_value15;
struct sGtEqNode* _inf_obj_value15;
void* right_value485;
struct sNode* __result273__;
_Bool _if_conditional467;
void* right_value486;
struct sNode* right_315;
void* right_value487;
void* right_value488;
struct sNode* _inf_value16;
struct sLtEqNode* _inf_obj_value16;
void* right_value493;
struct sNode* __result276__;
_Bool _if_conditional477;
void* right_value494;
struct sNode* right_317;
void* right_value495;
void* right_value496;
struct sNode* _inf_value17;
struct sGtNode* _inf_obj_value17;
void* right_value501;
struct sNode* __result279__;
_Bool _if_conditional487;
void* right_value502;
struct sNode* right_319;
void* right_value503;
void* right_value504;
struct sNode* _inf_value18;
struct sLtNode* _inf_obj_value18;
void* right_value509;
struct sNode* __result282__;
_Bool _if_conditional497;
void* right_value510;
struct sNode* right_321;
void* right_value511;
void* right_value512;
struct sNode* _inf_value19;
struct sGtEqNode* _inf_obj_value19;
void* right_value517;
struct sNode* __result285__;
_Bool _if_conditional507;
void* right_value518;
struct sNode* right_323;
void* right_value519;
void* right_value520;
struct sNode* _inf_value20;
struct sLtEqNode* _inf_obj_value20;
void* right_value525;
struct sNode* __result288__;
_Bool _if_conditional517;
void* right_value526;
struct sNode* right_325;
void* right_value527;
void* right_value528;
struct sNode* _inf_value21;
struct sGtNode* _inf_obj_value21;
void* right_value533;
struct sNode* __result291__;
_Bool _if_conditional527;
void* right_value534;
struct sNode* right_327;
void* right_value535;
void* right_value536;
struct sNode* _inf_value22;
struct sLtNode* _inf_obj_value22;
void* right_value541;
struct sNode* __result294__;
struct sNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value477 = (void*)0;
memset(&node_312, 0, sizeof(struct sNode*));
right_value478 = (void*)0;
memset(&right_313, 0, sizeof(struct sNode*));
right_value479 = (void*)0;
right_value480 = (void*)0;
right_value485 = (void*)0;
right_value486 = (void*)0;
memset(&right_315, 0, sizeof(struct sNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value493 = (void*)0;
right_value494 = (void*)0;
memset(&right_317, 0, sizeof(struct sNode*));
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value501 = (void*)0;
right_value502 = (void*)0;
memset(&right_319, 0, sizeof(struct sNode*));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value509 = (void*)0;
right_value510 = (void*)0;
memset(&right_321, 0, sizeof(struct sNode*));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
memset(&right_323, 0, sizeof(struct sNode*));
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&right_325, 0, sizeof(struct sNode*));
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&right_327, 0, sizeof(struct sNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value541 = (void*)0;
    parse_sharp_v5(info);
    node_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=shift_exp(info))));
    if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional22=*info->p,    _while_condtional22) {
        if(_if_conditional457=*info->p==62&&*(info->p+1)==61,        _if_conditional457) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=shift_exp(info))));
            if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1986, "struct sNode");
            _inf_obj_value15=come_increment_ref_count(((struct sGtEqNode*)(right_value480=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value479=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1986, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_313),(_Bool)0,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sGtEqNode_finalize;
            _inf_value15->clone=(void*)sGtEqNode_clone;
            _inf_value15->compile=(void*)sGtEqNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sGtEqNode_terminated;
            _inf_value15->kind=(void*)sGtEqNode_kind;
            __result273__ = __result_obj__ = ((struct sNode*)(right_value485=_inf_value15));
            if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value479,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value480,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result273__;
            if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional467=*info->p==60&&*(info->p+1)==61,            _if_conditional467) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value486=shift_exp(info))));
                if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1994, "struct sNode");
                _inf_obj_value16=come_increment_ref_count(((struct sLtEqNode*)(right_value488=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value487=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1994, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_315),(_Bool)0,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sLtEqNode_finalize;
                _inf_value16->clone=(void*)sLtEqNode_clone;
                _inf_value16->compile=(void*)sLtEqNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sLtEqNode_terminated;
                _inf_value16->kind=(void*)sLtEqNode_kind;
                __result276__ = __result_obj__ = ((struct sNode*)(right_value493=_inf_value16));
                if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value487,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value488,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value493) { right_value493 = come_decrement_ref_count2(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result276__;
                if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional477=*info->p==62&&*(info->p+1)!=62,                _if_conditional477) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=shift_exp(info))));
                    if(right_value494) { right_value494 = come_decrement_ref_count2(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2002, "struct sNode");
                    _inf_obj_value17=come_increment_ref_count(((struct sGtNode*)(right_value496=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value495=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2002, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
                    _inf_value17->_protocol_obj=_inf_obj_value17;
                    _inf_value17->finalize=(void*)sGtNode_finalize;
                    _inf_value17->clone=(void*)sGtNode_clone;
                    _inf_value17->compile=(void*)sGtNode_compile;
                    _inf_value17->sline=(void*)sNodeBase_sline;
                    _inf_value17->sname=(void*)sNodeBase_sname;
                    _inf_value17->terminated=(void*)sGtNode_terminated;
                    _inf_value17->kind=(void*)sGtNode_kind;
                    __result279__ = __result_obj__ = ((struct sNode*)(right_value501=_inf_value17));
                    if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value495,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value496,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result279__;
                    if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional487=*info->p==60&&*(info->p+1)!=60,                    _if_conditional487) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value502=shift_exp(info))));
                        if(right_value502) { right_value502 = come_decrement_ref_count2(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2010, "struct sNode");
                        _inf_obj_value18=come_increment_ref_count(((struct sLtNode*)(right_value504=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value503=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2010, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_319),(_Bool)0,info))));
                        _inf_value18->_protocol_obj=_inf_obj_value18;
                        _inf_value18->finalize=(void*)sLtNode_finalize;
                        _inf_value18->clone=(void*)sLtNode_clone;
                        _inf_value18->compile=(void*)sLtNode_compile;
                        _inf_value18->sline=(void*)sNodeBase_sline;
                        _inf_value18->sname=(void*)sNodeBase_sname;
                        _inf_value18->terminated=(void*)sLtNode_terminated;
                        _inf_value18->kind=(void*)sLtNode_kind;
                        __result282__ = __result_obj__ = ((struct sNode*)(right_value509=_inf_value18));
                        if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value503,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value504,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result282__;
                        if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional497=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional497) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=shift_exp(info))));
                            if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2018, "struct sNode");
                            _inf_obj_value19=come_increment_ref_count(((struct sGtEqNode*)(right_value512=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value511=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2018, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_321),(_Bool)1,info))));
                            _inf_value19->_protocol_obj=_inf_obj_value19;
                            _inf_value19->finalize=(void*)sGtEqNode_finalize;
                            _inf_value19->clone=(void*)sGtEqNode_clone;
                            _inf_value19->compile=(void*)sGtEqNode_compile;
                            _inf_value19->sline=(void*)sNodeBase_sline;
                            _inf_value19->sname=(void*)sNodeBase_sname;
                            _inf_value19->terminated=(void*)sGtEqNode_terminated;
                            _inf_value19->kind=(void*)sGtEqNode_kind;
                            __result285__ = __result_obj__ = ((struct sNode*)(right_value517=_inf_value19));
                            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value511,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value512,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result285__;
                            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional507=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional507) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=shift_exp(info))));
                                if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2026, "struct sNode");
                                _inf_obj_value20=come_increment_ref_count(((struct sLtEqNode*)(right_value520=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value519=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2026, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                _inf_value20->finalize=(void*)sLtEqNode_finalize;
                                _inf_value20->clone=(void*)sLtEqNode_clone;
                                _inf_value20->compile=(void*)sLtEqNode_compile;
                                _inf_value20->sline=(void*)sNodeBase_sline;
                                _inf_value20->sname=(void*)sNodeBase_sname;
                                _inf_value20->terminated=(void*)sLtEqNode_terminated;
                                _inf_value20->kind=(void*)sLtEqNode_kind;
                                __result288__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value20));
                                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value519,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value520,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result288__;
                                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional517=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional517) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=shift_exp(info))));
                                    if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2034, "struct sNode");
                                    _inf_obj_value21=come_increment_ref_count(((struct sGtNode*)(right_value528=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value527=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2034, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_325),(_Bool)1,info))));
                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                    _inf_value21->finalize=(void*)sGtNode_finalize;
                                    _inf_value21->clone=(void*)sGtNode_clone;
                                    _inf_value21->compile=(void*)sGtNode_compile;
                                    _inf_value21->sline=(void*)sNodeBase_sline;
                                    _inf_value21->sname=(void*)sNodeBase_sname;
                                    _inf_value21->terminated=(void*)sGtNode_terminated;
                                    _inf_value21->kind=(void*)sGtNode_kind;
                                    __result291__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value21));
                                    if(right_325) { right_325 = come_decrement_ref_count2(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value527,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value528,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result291__;
                                    if(right_325) { right_325 = come_decrement_ref_count2(right_325, ((struct sNode*)right_325)->finalize, ((struct sNode*)right_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional527=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional527) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value534=shift_exp(info))));
                                        if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2042, "struct sNode");
                                        _inf_obj_value22=come_increment_ref_count(((struct sLtNode*)(right_value536=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value535=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2042, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_312),(struct sNode*)come_increment_ref_count(right_327),(_Bool)1,info))));
                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                        _inf_value22->finalize=(void*)sLtNode_finalize;
                                        _inf_value22->clone=(void*)sLtNode_clone;
                                        _inf_value22->compile=(void*)sLtNode_compile;
                                        _inf_value22->sline=(void*)sNodeBase_sline;
                                        _inf_value22->sname=(void*)sNodeBase_sname;
                                        _inf_value22->terminated=(void*)sLtNode_terminated;
                                        _inf_value22->kind=(void*)sLtNode_kind;
                                        __result294__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value22));
                                        if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value535,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value536,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result294__;
                                        if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result295__ = __result_obj__ = node_312;
    if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result295__;
    if(node_312) { node_312 = come_decrement_ref_count2(node_312, ((struct sNode*)node_312)->finalize, ((struct sNode*)node_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional498=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional498) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional499=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional499) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional500=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional500) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional501;
struct sGtEqNode* __result283__;
void* right_value513;
struct sGtEqNode* result_322;
_Bool _if_conditional502;
_Bool _if_conditional503;
void* right_value514;
char* __dec_obj222;
_Bool _if_conditional504;
void* right_value515;
struct sNode* __dec_obj223;
_Bool _if_conditional505;
void* right_value516;
struct sNode* __dec_obj224;
_Bool _if_conditional506;
struct sGtEqNode* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
right_value513 = (void*)0;
memset(&result_322, 0, sizeof(struct sGtEqNode*));
right_value514 = (void*)0;
right_value515 = (void*)0;
right_value516 = (void*)0;
                                if(_if_conditional501=self==(void*)0,                                _if_conditional501) {
                                    __result283__ = __result_obj__ = (void*)0;
                                    return __result283__;
                                }
                                result_322=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value513=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer3(right_value513,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional502=self!=((void*)0),                                _if_conditional502) {
                                    result_322->sline=self->sline;
                                }
                                if(_if_conditional503=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional503) {
                                    __dec_obj222=result_322->sname;
                                    result_322->sname=(char*)come_increment_ref_count(((char*)(right_value514=string_clone(self->sname))));
                                    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value514 = come_decrement_ref_count2(right_value514, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional504=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional504) {
                                    __dec_obj223=result_322->mLeft;
                                    result_322->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value515=sNode_clone(self->mLeft))));
                                    if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value515) { right_value515 = come_decrement_ref_count2(right_value515, ((struct sNode*)right_value515)->finalize, ((struct sNode*)right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional505=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional505) {
                                    __dec_obj224=result_322->mRight;
                                    result_322->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->mRight))));
                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional506=self!=((void*)0),                                _if_conditional506) {
                                    result_322->mQuote=self->mQuote;
                                }
                                __result284__ = __result_obj__ = result_322;
                                come_call_finalizer3(result_322,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result284__;
                                come_call_finalizer3(result_322,sGtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional508=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional508) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional509=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional509) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional510=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional510) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional511;
struct sLtEqNode* __result286__;
void* right_value521;
struct sLtEqNode* result_324;
_Bool _if_conditional512;
_Bool _if_conditional513;
void* right_value522;
char* __dec_obj225;
_Bool _if_conditional514;
void* right_value523;
struct sNode* __dec_obj226;
_Bool _if_conditional515;
void* right_value524;
struct sNode* __dec_obj227;
_Bool _if_conditional516;
struct sLtEqNode* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
right_value521 = (void*)0;
memset(&result_324, 0, sizeof(struct sLtEqNode*));
right_value522 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
                                    if(_if_conditional511=self==(void*)0,                                    _if_conditional511) {
                                        __result286__ = __result_obj__ = (void*)0;
                                        return __result286__;
                                    }
                                    result_324=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value521=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer3(right_value521,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional512=self!=((void*)0),                                    _if_conditional512) {
                                        result_324->sline=self->sline;
                                    }
                                    if(_if_conditional513=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional513) {
                                        __dec_obj225=result_324->sname;
                                        result_324->sname=(char*)come_increment_ref_count(((char*)(right_value522=string_clone(self->sname))));
                                        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value522 = come_decrement_ref_count2(right_value522, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional514=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional514) {
                                        __dec_obj226=result_324->mLeft;
                                        result_324->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=sNode_clone(self->mLeft))));
                                        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional515=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional515) {
                                        __dec_obj227=result_324->mRight;
                                        result_324->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=sNode_clone(self->mRight))));
                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional516=self!=((void*)0),                                    _if_conditional516) {
                                        result_324->mQuote=self->mQuote;
                                    }
                                    __result287__ = __result_obj__ = result_324;
                                    come_call_finalizer3(result_324,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result287__;
                                    come_call_finalizer3(result_324,sLtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional518;
_Bool _if_conditional519;
_Bool _if_conditional520;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional518=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional518) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional519=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional519) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional520=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional520) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional521;
struct sGtNode* __result289__;
void* right_value529;
struct sGtNode* result_326;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value530;
char* __dec_obj228;
_Bool _if_conditional524;
void* right_value531;
struct sNode* __dec_obj229;
_Bool _if_conditional525;
void* right_value532;
struct sNode* __dec_obj230;
_Bool _if_conditional526;
struct sGtNode* __result290__;
memset(&__result_obj__, 0, sizeof(void*));
right_value529 = (void*)0;
memset(&result_326, 0, sizeof(struct sGtNode*));
right_value530 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
                                        if(_if_conditional521=self==(void*)0,                                        _if_conditional521) {
                                            __result289__ = __result_obj__ = (void*)0;
                                            return __result289__;
                                        }
                                        result_326=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value529=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer3(right_value529,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional522=self!=((void*)0),                                        _if_conditional522) {
                                            result_326->sline=self->sline;
                                        }
                                        if(_if_conditional523=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional523) {
                                            __dec_obj228=result_326->sname;
                                            result_326->sname=(char*)come_increment_ref_count(((char*)(right_value530=string_clone(self->sname))));
                                            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value530 = come_decrement_ref_count2(right_value530, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional524=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional524) {
                                            __dec_obj229=result_326->mLeft;
                                            result_326->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=sNode_clone(self->mLeft))));
                                            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional525=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional525) {
                                            __dec_obj230=result_326->mRight;
                                            result_326->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=sNode_clone(self->mRight))));
                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional526=self!=((void*)0),                                        _if_conditional526) {
                                            result_326->mQuote=self->mQuote;
                                        }
                                        __result290__ = __result_obj__ = result_326;
                                        come_call_finalizer3(result_326,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result290__;
                                        come_call_finalizer3(result_326,sGtNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional528;
_Bool _if_conditional529;
_Bool _if_conditional530;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional528=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional528) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional529=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional529) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional530=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional530) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional531;
struct sLtNode* __result292__;
void* right_value537;
struct sLtNode* result_328;
_Bool _if_conditional532;
_Bool _if_conditional533;
void* right_value538;
char* __dec_obj231;
_Bool _if_conditional534;
void* right_value539;
struct sNode* __dec_obj232;
_Bool _if_conditional535;
void* right_value540;
struct sNode* __dec_obj233;
_Bool _if_conditional536;
struct sLtNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value537 = (void*)0;
memset(&result_328, 0, sizeof(struct sLtNode*));
right_value538 = (void*)0;
right_value539 = (void*)0;
right_value540 = (void*)0;
                                            if(_if_conditional531=self==(void*)0,                                            _if_conditional531) {
                                                __result292__ = __result_obj__ = (void*)0;
                                                return __result292__;
                                            }
                                            result_328=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value537=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer3(right_value537,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional532=self!=((void*)0),                                            _if_conditional532) {
                                                result_328->sline=self->sline;
                                            }
                                            if(_if_conditional533=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional533) {
                                                __dec_obj231=result_328->sname;
                                                result_328->sname=(char*)come_increment_ref_count(((char*)(right_value538=string_clone(self->sname))));
                                                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value538 = come_decrement_ref_count2(right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional534=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional534) {
                                                __dec_obj232=result_328->mLeft;
                                                result_328->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=sNode_clone(self->mLeft))));
                                                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional535=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional535) {
                                                __dec_obj233=result_328->mRight;
                                                result_328->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=sNode_clone(self->mRight))));
                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional536=self!=((void*)0),                                            _if_conditional536) {
                                                result_328->mQuote=self->mQuote;
                                            }
                                            __result293__ = __result_obj__ = result_328;
                                            come_call_finalizer3(result_328,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result293__;
                                            come_call_finalizer3(result_328,sLtNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value542;
struct sNode* node_329;
_Bool _while_condtional23;
_Bool _if_conditional537;
void* right_value543;
struct sNode* right_330;
void* right_value544;
void* right_value545;
struct sNode* _inf_value23;
struct sEq2Node* _inf_obj_value23;
void* right_value550;
struct sNode* __result298__;
_Bool _if_conditional547;
void* right_value551;
struct sNode* right_332;
void* right_value552;
void* right_value553;
struct sNode* _inf_value24;
struct sEqNode* _inf_obj_value24;
void* right_value558;
struct sNode* __result301__;
_Bool _if_conditional557;
void* right_value559;
struct sNode* right_334;
void* right_value560;
void* right_value561;
struct sNode* _inf_value25;
struct sNotEq2Node* _inf_obj_value25;
void* right_value566;
struct sNode* __result304__;
_Bool _if_conditional567;
void* right_value567;
struct sNode* right_336;
void* right_value568;
void* right_value569;
struct sNode* _inf_value26;
struct sNotEqNode* _inf_obj_value26;
void* right_value574;
struct sNode* __result307__;
_Bool _if_conditional577;
void* right_value575;
struct sNode* right_338;
void* right_value576;
void* right_value577;
struct sNode* _inf_value27;
struct sEq2Node* _inf_obj_value27;
void* right_value582;
struct sNode* __result310__;
_Bool _if_conditional587;
void* right_value583;
struct sNode* right_340;
void* right_value584;
void* right_value585;
struct sNode* _inf_value28;
struct sEqNode* _inf_obj_value28;
void* right_value590;
struct sNode* __result313__;
_Bool _if_conditional597;
void* right_value591;
struct sNode* right_342;
void* right_value592;
void* right_value593;
struct sNode* _inf_value29;
struct sNotEq2Node* _inf_obj_value29;
void* right_value598;
struct sNode* __result316__;
_Bool _if_conditional607;
void* right_value599;
struct sNode* right_344;
void* right_value600;
void* right_value601;
struct sNode* _inf_value30;
struct sNotEqNode* _inf_obj_value30;
void* right_value606;
struct sNode* __result319__;
struct sNode* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value542 = (void*)0;
memset(&node_329, 0, sizeof(struct sNode*));
right_value543 = (void*)0;
memset(&right_330, 0, sizeof(struct sNode*));
right_value544 = (void*)0;
right_value545 = (void*)0;
right_value550 = (void*)0;
right_value551 = (void*)0;
memset(&right_332, 0, sizeof(struct sNode*));
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value558 = (void*)0;
right_value559 = (void*)0;
memset(&right_334, 0, sizeof(struct sNode*));
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value566 = (void*)0;
right_value567 = (void*)0;
memset(&right_336, 0, sizeof(struct sNode*));
right_value568 = (void*)0;
right_value569 = (void*)0;
right_value574 = (void*)0;
right_value575 = (void*)0;
memset(&right_338, 0, sizeof(struct sNode*));
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
memset(&right_340, 0, sizeof(struct sNode*));
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
memset(&right_342, 0, sizeof(struct sNode*));
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
memset(&right_344, 0, sizeof(struct sNode*));
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value606 = (void*)0;
    parse_sharp_v5(info);
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=comparison_exp(info))));
    if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional23=*info->p,    _while_condtional23) {
        if(_if_conditional537=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional537) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value543=eq_exp(info))));
            if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2069, "struct sNode");
            _inf_obj_value23=come_increment_ref_count(((struct sEq2Node*)(right_value545=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value544=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2069, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_330),(_Bool)0,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sEq2Node_finalize;
            _inf_value23->clone=(void*)sEq2Node_clone;
            _inf_value23->compile=(void*)sEq2Node_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sEq2Node_terminated;
            _inf_value23->kind=(void*)sEq2Node_kind;
            __result298__ = __result_obj__ = ((struct sNode*)(right_value550=_inf_value23));
            if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value544,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value545,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result298__;
            if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional547=*info->p==61&&*(info->p+1)==61,            _if_conditional547) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value551=eq_exp(info))));
                if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2077, "struct sNode");
                _inf_obj_value24=come_increment_ref_count(((struct sEqNode*)(right_value553=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value552=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2077, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_332),(_Bool)0,info))));
                _inf_value24->_protocol_obj=_inf_obj_value24;
                _inf_value24->finalize=(void*)sEqNode_finalize;
                _inf_value24->clone=(void*)sEqNode_clone;
                _inf_value24->compile=(void*)sEqNode_compile;
                _inf_value24->sline=(void*)sNodeBase_sline;
                _inf_value24->sname=(void*)sNodeBase_sname;
                _inf_value24->terminated=(void*)sEqNode_terminated;
                _inf_value24->kind=(void*)sEqNode_kind;
                __result301__ = __result_obj__ = ((struct sNode*)(right_value558=_inf_value24));
                if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value552,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value553,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value558) { right_value558 = come_decrement_ref_count2(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result301__;
                if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional557=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional557) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=eq_exp(info))));
                    if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2085, "struct sNode");
                    _inf_obj_value25=come_increment_ref_count(((struct sNotEq2Node*)(right_value561=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value560=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2085, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_334),(_Bool)0,info))));
                    _inf_value25->_protocol_obj=_inf_obj_value25;
                    _inf_value25->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value25->clone=(void*)sNotEq2Node_clone;
                    _inf_value25->compile=(void*)sNotEq2Node_compile;
                    _inf_value25->sline=(void*)sNodeBase_sline;
                    _inf_value25->sname=(void*)sNodeBase_sname;
                    _inf_value25->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value25->kind=(void*)sNotEq2Node_kind;
                    __result304__ = __result_obj__ = ((struct sNode*)(right_value566=_inf_value25));
                    if(right_334) { right_334 = come_decrement_ref_count2(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value560,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value561,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value566) { right_value566 = come_decrement_ref_count2(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result304__;
                    if(right_334) { right_334 = come_decrement_ref_count2(right_334, ((struct sNode*)right_334)->finalize, ((struct sNode*)right_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional567=*info->p==33&&*(info->p+1)==61,                    _if_conditional567) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value567=eq_exp(info))));
                        if(right_value567) { right_value567 = come_decrement_ref_count2(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2093, "struct sNode");
                        _inf_obj_value26=come_increment_ref_count(((struct sNotEqNode*)(right_value569=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value568=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2093, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_336),(_Bool)0,info))));
                        _inf_value26->_protocol_obj=_inf_obj_value26;
                        _inf_value26->finalize=(void*)sNotEqNode_finalize;
                        _inf_value26->clone=(void*)sNotEqNode_clone;
                        _inf_value26->compile=(void*)sNotEqNode_compile;
                        _inf_value26->sline=(void*)sNodeBase_sline;
                        _inf_value26->sname=(void*)sNodeBase_sname;
                        _inf_value26->terminated=(void*)sNotEqNode_terminated;
                        _inf_value26->kind=(void*)sNotEqNode_kind;
                        __result307__ = __result_obj__ = ((struct sNode*)(right_value574=_inf_value26));
                        if(right_336) { right_336 = come_decrement_ref_count2(right_336, ((struct sNode*)right_336)->finalize, ((struct sNode*)right_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value568,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value569,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value574) { right_value574 = come_decrement_ref_count2(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result307__;
                        if(right_336) { right_336 = come_decrement_ref_count2(right_336, ((struct sNode*)right_336)->finalize, ((struct sNode*)right_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional577=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional577) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_338=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value575=eq_exp(info))));
                            if(right_value575) { right_value575 = come_decrement_ref_count2(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2101, "struct sNode");
                            _inf_obj_value27=come_increment_ref_count(((struct sEq2Node*)(right_value577=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value576=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2101, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_338),(_Bool)1,info))));
                            _inf_value27->_protocol_obj=_inf_obj_value27;
                            _inf_value27->finalize=(void*)sEq2Node_finalize;
                            _inf_value27->clone=(void*)sEq2Node_clone;
                            _inf_value27->compile=(void*)sEq2Node_compile;
                            _inf_value27->sline=(void*)sNodeBase_sline;
                            _inf_value27->sname=(void*)sNodeBase_sname;
                            _inf_value27->terminated=(void*)sEq2Node_terminated;
                            _inf_value27->kind=(void*)sEq2Node_kind;
                            __result310__ = __result_obj__ = ((struct sNode*)(right_value582=_inf_value27));
                            if(right_338) { right_338 = come_decrement_ref_count2(right_338, ((struct sNode*)right_338)->finalize, ((struct sNode*)right_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value576,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value577,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result310__;
                            if(right_338) { right_338 = come_decrement_ref_count2(right_338, ((struct sNode*)right_338)->finalize, ((struct sNode*)right_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional587=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional587) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_340=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value583=eq_exp(info))));
                                if(right_value583) { right_value583 = come_decrement_ref_count2(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2109, "struct sNode");
                                _inf_obj_value28=come_increment_ref_count(((struct sEqNode*)(right_value585=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value584=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2109, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_340),(_Bool)1,info))));
                                _inf_value28->_protocol_obj=_inf_obj_value28;
                                _inf_value28->finalize=(void*)sEqNode_finalize;
                                _inf_value28->clone=(void*)sEqNode_clone;
                                _inf_value28->compile=(void*)sEqNode_compile;
                                _inf_value28->sline=(void*)sNodeBase_sline;
                                _inf_value28->sname=(void*)sNodeBase_sname;
                                _inf_value28->terminated=(void*)sEqNode_terminated;
                                _inf_value28->kind=(void*)sEqNode_kind;
                                __result313__ = __result_obj__ = ((struct sNode*)(right_value590=_inf_value28));
                                if(right_340) { right_340 = come_decrement_ref_count2(right_340, ((struct sNode*)right_340)->finalize, ((struct sNode*)right_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value584,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value585,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result313__;
                                if(right_340) { right_340 = come_decrement_ref_count2(right_340, ((struct sNode*)right_340)->finalize, ((struct sNode*)right_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional597=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional597) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_342=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=eq_exp(info))));
                                    if(right_value591) { right_value591 = come_decrement_ref_count2(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2117, "struct sNode");
                                    _inf_obj_value29=come_increment_ref_count(((struct sNotEq2Node*)(right_value593=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value592=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2117, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_342),(_Bool)1,info))));
                                    _inf_value29->_protocol_obj=_inf_obj_value29;
                                    _inf_value29->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value29->clone=(void*)sNotEq2Node_clone;
                                    _inf_value29->compile=(void*)sNotEq2Node_compile;
                                    _inf_value29->sline=(void*)sNodeBase_sline;
                                    _inf_value29->sname=(void*)sNodeBase_sname;
                                    _inf_value29->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value29->kind=(void*)sNotEq2Node_kind;
                                    __result316__ = __result_obj__ = ((struct sNode*)(right_value598=_inf_value29));
                                    if(right_342) { right_342 = come_decrement_ref_count2(right_342, ((struct sNode*)right_342)->finalize, ((struct sNode*)right_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value592,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value593,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result316__;
                                    if(right_342) { right_342 = come_decrement_ref_count2(right_342, ((struct sNode*)right_342)->finalize, ((struct sNode*)right_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional607=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional607) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_344=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=eq_exp(info))));
                                        if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2125, "struct sNode");
                                        _inf_obj_value30=come_increment_ref_count(((struct sNotEqNode*)(right_value601=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value600=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2125, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(right_344),(_Bool)1,info))));
                                        _inf_value30->_protocol_obj=_inf_obj_value30;
                                        _inf_value30->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value30->clone=(void*)sNotEqNode_clone;
                                        _inf_value30->compile=(void*)sNotEqNode_compile;
                                        _inf_value30->sline=(void*)sNodeBase_sline;
                                        _inf_value30->sname=(void*)sNodeBase_sname;
                                        _inf_value30->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value30->kind=(void*)sNotEqNode_kind;
                                        __result319__ = __result_obj__ = ((struct sNode*)(right_value606=_inf_value30));
                                        if(right_344) { right_344 = come_decrement_ref_count2(right_344, ((struct sNode*)right_344)->finalize, ((struct sNode*)right_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value600,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value601,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result319__;
                                        if(right_344) { right_344 = come_decrement_ref_count2(right_344, ((struct sNode*)right_344)->finalize, ((struct sNode*)right_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result320__ = __result_obj__ = node_329;
    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result320__;
    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional578;
_Bool _if_conditional579;
_Bool _if_conditional580;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional578=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional578) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional579=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional579) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional580=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional580) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional581;
struct sEq2Node* __result308__;
void* right_value578;
struct sEq2Node* result_339;
_Bool _if_conditional582;
_Bool _if_conditional583;
void* right_value579;
char* __dec_obj246;
_Bool _if_conditional584;
void* right_value580;
struct sNode* __dec_obj247;
_Bool _if_conditional585;
void* right_value581;
struct sNode* __dec_obj248;
_Bool _if_conditional586;
struct sEq2Node* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
right_value578 = (void*)0;
memset(&result_339, 0, sizeof(struct sEq2Node*));
right_value579 = (void*)0;
right_value580 = (void*)0;
right_value581 = (void*)0;
                                if(_if_conditional581=self==(void*)0,                                _if_conditional581) {
                                    __result308__ = __result_obj__ = (void*)0;
                                    return __result308__;
                                }
                                result_339=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value578=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer3(right_value578,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional582=self!=((void*)0),                                _if_conditional582) {
                                    result_339->sline=self->sline;
                                }
                                if(_if_conditional583=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional583) {
                                    __dec_obj246=result_339->sname;
                                    result_339->sname=(char*)come_increment_ref_count(((char*)(right_value579=string_clone(self->sname))));
                                    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value579 = come_decrement_ref_count2(right_value579, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional584=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional584) {
                                    __dec_obj247=result_339->mLeft;
                                    result_339->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=sNode_clone(self->mLeft))));
                                    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value580) { right_value580 = come_decrement_ref_count2(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional585=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional585) {
                                    __dec_obj248=result_339->mRight;
                                    result_339->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->mRight))));
                                    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional586=self!=((void*)0),                                _if_conditional586) {
                                    result_339->mQuote=self->mQuote;
                                }
                                __result309__ = __result_obj__ = result_339;
                                come_call_finalizer3(result_339,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                return __result309__;
                                come_call_finalizer3(result_339,sEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional588;
_Bool _if_conditional589;
_Bool _if_conditional590;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional588=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional588) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional589=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional589) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional590=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional590) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional591;
struct sEqNode* __result311__;
void* right_value586;
struct sEqNode* result_341;
_Bool _if_conditional592;
_Bool _if_conditional593;
void* right_value587;
char* __dec_obj249;
_Bool _if_conditional594;
void* right_value588;
struct sNode* __dec_obj250;
_Bool _if_conditional595;
void* right_value589;
struct sNode* __dec_obj251;
_Bool _if_conditional596;
struct sEqNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
right_value586 = (void*)0;
memset(&result_341, 0, sizeof(struct sEqNode*));
right_value587 = (void*)0;
right_value588 = (void*)0;
right_value589 = (void*)0;
                                    if(_if_conditional591=self==(void*)0,                                    _if_conditional591) {
                                        __result311__ = __result_obj__ = (void*)0;
                                        return __result311__;
                                    }
                                    result_341=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value586=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer3(right_value586,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional592=self!=((void*)0),                                    _if_conditional592) {
                                        result_341->sline=self->sline;
                                    }
                                    if(_if_conditional593=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional593) {
                                        __dec_obj249=result_341->sname;
                                        result_341->sname=(char*)come_increment_ref_count(((char*)(right_value587=string_clone(self->sname))));
                                        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value587 = come_decrement_ref_count2(right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional594=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional594) {
                                        __dec_obj250=result_341->mLeft;
                                        result_341->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value588=sNode_clone(self->mLeft))));
                                        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value588) { right_value588 = come_decrement_ref_count2(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional595=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional595) {
                                        __dec_obj251=result_341->mRight;
                                        result_341->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(self->mRight))));
                                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional596=self!=((void*)0),                                    _if_conditional596) {
                                        result_341->mQuote=self->mQuote;
                                    }
                                    __result312__ = __result_obj__ = result_341;
                                    come_call_finalizer3(result_341,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result312__;
                                    come_call_finalizer3(result_341,sEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional598;
_Bool _if_conditional599;
_Bool _if_conditional600;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional598=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional598) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional599=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional599) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional600=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional600) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional601;
struct sNotEq2Node* __result314__;
void* right_value594;
struct sNotEq2Node* result_343;
_Bool _if_conditional602;
_Bool _if_conditional603;
void* right_value595;
char* __dec_obj252;
_Bool _if_conditional604;
void* right_value596;
struct sNode* __dec_obj253;
_Bool _if_conditional605;
void* right_value597;
struct sNode* __dec_obj254;
_Bool _if_conditional606;
struct sNotEq2Node* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
right_value594 = (void*)0;
memset(&result_343, 0, sizeof(struct sNotEq2Node*));
right_value595 = (void*)0;
right_value596 = (void*)0;
right_value597 = (void*)0;
                                        if(_if_conditional601=self==(void*)0,                                        _if_conditional601) {
                                            __result314__ = __result_obj__ = (void*)0;
                                            return __result314__;
                                        }
                                        result_343=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value594=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer3(right_value594,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional602=self!=((void*)0),                                        _if_conditional602) {
                                            result_343->sline=self->sline;
                                        }
                                        if(_if_conditional603=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional603) {
                                            __dec_obj252=result_343->sname;
                                            result_343->sname=(char*)come_increment_ref_count(((char*)(right_value595=string_clone(self->sname))));
                                            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional604=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional604) {
                                            __dec_obj253=result_343->mLeft;
                                            result_343->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=sNode_clone(self->mLeft))));
                                            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional605=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional605) {
                                            __dec_obj254=result_343->mRight;
                                            result_343->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=sNode_clone(self->mRight))));
                                            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value597) { right_value597 = come_decrement_ref_count2(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional606=self!=((void*)0),                                        _if_conditional606) {
                                            result_343->mQuote=self->mQuote;
                                        }
                                        __result315__ = __result_obj__ = result_343;
                                        come_call_finalizer3(result_343,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result315__;
                                        come_call_finalizer3(result_343,sNotEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional608=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional608) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional609=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional609) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional610=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional610) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional611;
struct sNotEqNode* __result317__;
void* right_value602;
struct sNotEqNode* result_345;
_Bool _if_conditional612;
_Bool _if_conditional613;
void* right_value603;
char* __dec_obj255;
_Bool _if_conditional614;
void* right_value604;
struct sNode* __dec_obj256;
_Bool _if_conditional615;
void* right_value605;
struct sNode* __dec_obj257;
_Bool _if_conditional616;
struct sNotEqNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value602 = (void*)0;
memset(&result_345, 0, sizeof(struct sNotEqNode*));
right_value603 = (void*)0;
right_value604 = (void*)0;
right_value605 = (void*)0;
                                            if(_if_conditional611=self==(void*)0,                                            _if_conditional611) {
                                                __result317__ = __result_obj__ = (void*)0;
                                                return __result317__;
                                            }
                                            result_345=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value602=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer3(right_value602,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional612=self!=((void*)0),                                            _if_conditional612) {
                                                result_345->sline=self->sline;
                                            }
                                            if(_if_conditional613=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional613) {
                                                __dec_obj255=result_345->sname;
                                                result_345->sname=(char*)come_increment_ref_count(((char*)(right_value603=string_clone(self->sname))));
                                                __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value603 = come_decrement_ref_count2(right_value603, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional614=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional614) {
                                                __dec_obj256=result_345->mLeft;
                                                result_345->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=sNode_clone(self->mLeft))));
                                                if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value604) { right_value604 = come_decrement_ref_count2(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional615=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional615) {
                                                __dec_obj257=result_345->mRight;
                                                result_345->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value605=sNode_clone(self->mRight))));
                                                if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value605) { right_value605 = come_decrement_ref_count2(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional616=self!=((void*)0),                                            _if_conditional616) {
                                                result_345->mQuote=self->mQuote;
                                            }
                                            __result318__ = __result_obj__ = result_345;
                                            come_call_finalizer3(result_345,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result318__;
                                            come_call_finalizer3(result_345,sNotEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value607;
struct sNode* node_346;
_Bool _while_condtional24;
_Bool _if_conditional617;
void* right_value608;
struct sNode* right_347;
void* right_value609;
void* right_value610;
struct sNode* _inf_value31;
struct sAndNode* _inf_obj_value31;
void* right_value615;
struct sNode* __result323__;
_Bool _if_conditional627;
void* right_value616;
struct sNode* right_349;
void* right_value617;
void* right_value618;
struct sNode* _inf_value32;
struct sAndNode* _inf_obj_value32;
void* right_value623;
struct sNode* __result326__;
struct sNode* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value607 = (void*)0;
memset(&node_346, 0, sizeof(struct sNode*));
right_value608 = (void*)0;
memset(&right_347, 0, sizeof(struct sNode*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value615 = (void*)0;
right_value616 = (void*)0;
memset(&right_349, 0, sizeof(struct sNode*));
right_value617 = (void*)0;
right_value618 = (void*)0;
right_value623 = (void*)0;
    parse_sharp_v5(info);
    node_346=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=eq_exp(info))));
    if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional24=*info->p,    _while_condtional24) {
        if(_if_conditional617=!node_346->terminated(node_346->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional617) {
            info->p++;
            skip_spaces_and_lf(info);
            right_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=and_exp(info))));
            if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2152, "struct sNode");
            _inf_obj_value31=come_increment_ref_count(((struct sAndNode*)(right_value610=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value609=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2152, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_346),(struct sNode*)come_increment_ref_count(right_347),(_Bool)0,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sAndNode_finalize;
            _inf_value31->clone=(void*)sAndNode_clone;
            _inf_value31->compile=(void*)sAndNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sAndNode_terminated;
            _inf_value31->kind=(void*)sAndNode_kind;
            __result323__ = __result_obj__ = ((struct sNode*)(right_value615=_inf_value31));
            if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value609,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value610,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result323__;
            if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional627=!node_346->terminated(node_346->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional627) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value616=and_exp(info))));
                if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2160, "struct sNode");
                _inf_obj_value32=come_increment_ref_count(((struct sAndNode*)(right_value618=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value617=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2160, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_346),(struct sNode*)come_increment_ref_count(right_349),(_Bool)1,info))));
                _inf_value32->_protocol_obj=_inf_obj_value32;
                _inf_value32->finalize=(void*)sAndNode_finalize;
                _inf_value32->clone=(void*)sAndNode_clone;
                _inf_value32->compile=(void*)sAndNode_compile;
                _inf_value32->sline=(void*)sNodeBase_sline;
                _inf_value32->sname=(void*)sNodeBase_sname;
                _inf_value32->terminated=(void*)sAndNode_terminated;
                _inf_value32->kind=(void*)sAndNode_kind;
                __result326__ = __result_obj__ = ((struct sNode*)(right_value623=_inf_value32));
                if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value617,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value618,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result326__;
                if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result327__ = __result_obj__ = node_346;
    if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result327__;
    if(node_346) { node_346 = come_decrement_ref_count2(node_346, ((struct sNode*)node_346)->finalize, ((struct sNode*)node_346)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional628;
_Bool _if_conditional629;
_Bool _if_conditional630;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional628=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional628) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional629=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional629) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional630=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional630) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional631;
struct sAndNode* __result324__;
void* right_value619;
struct sAndNode* result_350;
_Bool _if_conditional632;
_Bool _if_conditional633;
void* right_value620;
char* __dec_obj261;
_Bool _if_conditional634;
void* right_value621;
struct sNode* __dec_obj262;
_Bool _if_conditional635;
void* right_value622;
struct sNode* __dec_obj263;
_Bool _if_conditional636;
struct sAndNode* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value619 = (void*)0;
memset(&result_350, 0, sizeof(struct sAndNode*));
right_value620 = (void*)0;
right_value621 = (void*)0;
right_value622 = (void*)0;
                    if(_if_conditional631=self==(void*)0,                    _if_conditional631) {
                        __result324__ = __result_obj__ = (void*)0;
                        return __result324__;
                    }
                    result_350=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value619=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer3(right_value619,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional632=self!=((void*)0),                    _if_conditional632) {
                        result_350->sline=self->sline;
                    }
                    if(_if_conditional633=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional633) {
                        __dec_obj261=result_350->sname;
                        result_350->sname=(char*)come_increment_ref_count(((char*)(right_value620=string_clone(self->sname))));
                        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value620 = come_decrement_ref_count2(right_value620, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional634=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional634) {
                        __dec_obj262=result_350->mLeft;
                        result_350->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional635=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional635) {
                        __dec_obj263=result_350->mRight;
                        result_350->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional636=self!=((void*)0),                    _if_conditional636) {
                        result_350->mQuote=self->mQuote;
                    }
                    __result325__ = __result_obj__ = result_350;
                    come_call_finalizer3(result_350,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result325__;
                    come_call_finalizer3(result_350,sAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value624;
struct sNode* node_351;
_Bool _while_condtional25;
_Bool _if_conditional637;
void* right_value625;
struct sNode* right_352;
void* right_value626;
void* right_value627;
struct sNode* _inf_value33;
struct sXOrNode* _inf_obj_value33;
void* right_value632;
struct sNode* __result330__;
_Bool _if_conditional647;
void* right_value633;
struct sNode* right_354;
void* right_value634;
void* right_value635;
struct sNode* _inf_value34;
struct sXOrNode* _inf_obj_value34;
void* right_value640;
struct sNode* __result333__;
struct sNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
right_value624 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value625 = (void*)0;
memset(&right_352, 0, sizeof(struct sNode*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&right_354, 0, sizeof(struct sNode*));
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value640 = (void*)0;
    parse_sharp_v5(info);
    node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=and_exp(info))));
    if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional25=*info->p,    _while_condtional25) {
        if(_if_conditional637=*info->p==94&&*(info->p+1)!=61,        _if_conditional637) {
            info->p++;
            skip_spaces_and_lf(info);
            right_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=xor_exp(info))));
            if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2187, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sXOrNode*)(right_value627=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value626=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2187, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_351),(struct sNode*)come_increment_ref_count(right_352),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sXOrNode_finalize;
            _inf_value33->clone=(void*)sXOrNode_clone;
            _inf_value33->compile=(void*)sXOrNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sXOrNode_terminated;
            _inf_value33->kind=(void*)sXOrNode_kind;
            __result330__ = __result_obj__ = ((struct sNode*)(right_value632=_inf_value33));
            if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value626,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value627,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result330__;
            if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional647=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional647) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=xor_exp(info))));
                if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2195, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sXOrNode*)(right_value635=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value634=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2195, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_351),(struct sNode*)come_increment_ref_count(right_354),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sXOrNode_finalize;
                _inf_value34->clone=(void*)sXOrNode_clone;
                _inf_value34->compile=(void*)sXOrNode_compile;
                _inf_value34->sline=(void*)sNodeBase_sline;
                _inf_value34->sname=(void*)sNodeBase_sname;
                _inf_value34->terminated=(void*)sXOrNode_terminated;
                _inf_value34->kind=(void*)sXOrNode_kind;
                __result333__ = __result_obj__ = ((struct sNode*)(right_value640=_inf_value34));
                if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value634,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value635,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value640) { right_value640 = come_decrement_ref_count2(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result333__;
                if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result334__ = __result_obj__ = node_351;
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result334__;
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional648;
_Bool _if_conditional649;
_Bool _if_conditional650;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional648=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional648) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional649=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional649) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional650=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional650) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional651;
struct sXOrNode* __result331__;
void* right_value636;
struct sXOrNode* result_355;
_Bool _if_conditional652;
_Bool _if_conditional653;
void* right_value637;
char* __dec_obj267;
_Bool _if_conditional654;
void* right_value638;
struct sNode* __dec_obj268;
_Bool _if_conditional655;
void* right_value639;
struct sNode* __dec_obj269;
_Bool _if_conditional656;
struct sXOrNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value636 = (void*)0;
memset(&result_355, 0, sizeof(struct sXOrNode*));
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
                    if(_if_conditional651=self==(void*)0,                    _if_conditional651) {
                        __result331__ = __result_obj__ = (void*)0;
                        return __result331__;
                    }
                    result_355=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value636=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer3(right_value636,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional652=self!=((void*)0),                    _if_conditional652) {
                        result_355->sline=self->sline;
                    }
                    if(_if_conditional653=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional653) {
                        __dec_obj267=result_355->sname;
                        result_355->sname=(char*)come_increment_ref_count(((char*)(right_value637=string_clone(self->sname))));
                        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional654=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional654) {
                        __dec_obj268=result_355->mLeft;
                        result_355->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional655=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional655) {
                        __dec_obj269=result_355->mRight;
                        result_355->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional656=self!=((void*)0),                    _if_conditional656) {
                        result_355->mQuote=self->mQuote;
                    }
                    __result332__ = __result_obj__ = result_355;
                    come_call_finalizer3(result_355,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result332__;
                    come_call_finalizer3(result_355,sXOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value641;
struct sNode* node_356;
_Bool _while_condtional26;
_Bool _if_conditional657;
void* right_value642;
struct sNode* right_357;
void* right_value643;
void* right_value644;
struct sNode* _inf_value35;
struct sOrNode* _inf_obj_value35;
void* right_value649;
struct sNode* __result337__;
_Bool _if_conditional667;
void* right_value650;
struct sNode* right_359;
void* right_value651;
void* right_value652;
struct sNode* _inf_value36;
struct sOrNode* _inf_obj_value36;
void* right_value657;
struct sNode* __result340__;
struct sNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
right_value641 = (void*)0;
memset(&node_356, 0, sizeof(struct sNode*));
right_value642 = (void*)0;
memset(&right_357, 0, sizeof(struct sNode*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&right_359, 0, sizeof(struct sNode*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value657 = (void*)0;
    parse_sharp_v5(info);
    node_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=xor_exp(info))));
    if(right_value641) { right_value641 = come_decrement_ref_count2(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional26=*info->p,    _while_condtional26) {
        if(_if_conditional657=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional657) {
            info->p++;
            skip_spaces_and_lf(info);
            right_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=or_exp(info))));
            if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2222, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sOrNode*)(right_value644=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value643=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2222, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_356),(struct sNode*)come_increment_ref_count(right_357),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sOrNode_finalize;
            _inf_value35->clone=(void*)sOrNode_clone;
            _inf_value35->compile=(void*)sOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sOrNode_terminated;
            _inf_value35->kind=(void*)sOrNode_kind;
            __result337__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value35));
            if(right_357) { right_357 = come_decrement_ref_count2(right_357, ((struct sNode*)right_357)->finalize, ((struct sNode*)right_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value643,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value644,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result337__;
            if(right_357) { right_357 = come_decrement_ref_count2(right_357, ((struct sNode*)right_357)->finalize, ((struct sNode*)right_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional667=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional667) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=or_exp(info))));
                if(right_value650) { right_value650 = come_decrement_ref_count2(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2230, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sOrNode*)(right_value652=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value651=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2230, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_356),(struct sNode*)come_increment_ref_count(right_359),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sOrNode_finalize;
                _inf_value36->clone=(void*)sOrNode_clone;
                _inf_value36->compile=(void*)sOrNode_compile;
                _inf_value36->sline=(void*)sNodeBase_sline;
                _inf_value36->sname=(void*)sNodeBase_sname;
                _inf_value36->terminated=(void*)sOrNode_terminated;
                _inf_value36->kind=(void*)sOrNode_kind;
                __result340__ = __result_obj__ = ((struct sNode*)(right_value657=_inf_value36));
                if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value651,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value652,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result340__;
                if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result341__ = __result_obj__ = node_356;
    if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result341__;
    if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional668;
_Bool _if_conditional669;
_Bool _if_conditional670;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional668=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional668) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional669=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional669) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional670=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional670) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional671;
struct sOrNode* __result338__;
void* right_value653;
struct sOrNode* result_360;
_Bool _if_conditional672;
_Bool _if_conditional673;
void* right_value654;
char* __dec_obj273;
_Bool _if_conditional674;
void* right_value655;
struct sNode* __dec_obj274;
_Bool _if_conditional675;
void* right_value656;
struct sNode* __dec_obj275;
_Bool _if_conditional676;
struct sOrNode* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value653 = (void*)0;
memset(&result_360, 0, sizeof(struct sOrNode*));
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
                    if(_if_conditional671=self==(void*)0,                    _if_conditional671) {
                        __result338__ = __result_obj__ = (void*)0;
                        return __result338__;
                    }
                    result_360=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value653=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer3(right_value653,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional672=self!=((void*)0),                    _if_conditional672) {
                        result_360->sline=self->sline;
                    }
                    if(_if_conditional673=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional673) {
                        __dec_obj273=result_360->sname;
                        result_360->sname=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(self->sname))));
                        __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional674=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional674) {
                        __dec_obj274=result_360->mLeft;
                        result_360->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional675=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional675) {
                        __dec_obj275=result_360->mRight;
                        result_360->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional676=self!=((void*)0),                    _if_conditional676) {
                        result_360->mQuote=self->mQuote;
                    }
                    __result339__ = __result_obj__ = result_360;
                    come_call_finalizer3(result_360,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result339__;
                    come_call_finalizer3(result_360,sOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value658;
struct sNode* node_361;
_Bool _while_condtional27;
_Bool _if_conditional677;
void* right_value659;
struct sNode* right_362;
void* right_value660;
void* right_value661;
struct sNode* _inf_value37;
struct sAndAndNode* _inf_obj_value37;
void* right_value666;
struct sNode* __result344__;
_Bool _if_conditional687;
void* right_value667;
struct sNode* right_364;
void* right_value668;
void* right_value669;
struct sNode* _inf_value38;
struct sAndAndNode* _inf_obj_value38;
void* right_value674;
struct sNode* __result347__;
struct sNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value658 = (void*)0;
memset(&node_361, 0, sizeof(struct sNode*));
right_value659 = (void*)0;
memset(&right_362, 0, sizeof(struct sNode*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&right_364, 0, sizeof(struct sNode*));
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value674 = (void*)0;
    parse_sharp_v5(info);
    node_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=or_exp(info))));
    if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional27=*info->p,    _while_condtional27) {
        if(_if_conditional677=*info->p==38&&*(info->p+1)==38,        _if_conditional677) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=andand_exp(info))));
            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2257, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sAndAndNode*)(right_value661=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value660=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2257, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_361),(struct sNode*)come_increment_ref_count(right_362),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sAndAndNode_finalize;
            _inf_value37->clone=(void*)sAndAndNode_clone;
            _inf_value37->compile=(void*)sAndAndNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sAndAndNode_terminated;
            _inf_value37->kind=(void*)sAndAndNode_kind;
            __result344__ = __result_obj__ = ((struct sNode*)(right_value666=_inf_value37));
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value660,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value661,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result344__;
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional687=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional687) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_364=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=andand_exp(info))));
                if(right_value667) { right_value667 = come_decrement_ref_count2(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2265, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sAndAndNode*)(right_value669=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value668=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2265, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_361),(struct sNode*)come_increment_ref_count(right_364),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sAndAndNode_finalize;
                _inf_value38->clone=(void*)sAndAndNode_clone;
                _inf_value38->compile=(void*)sAndAndNode_compile;
                _inf_value38->sline=(void*)sNodeBase_sline;
                _inf_value38->sname=(void*)sNodeBase_sname;
                _inf_value38->terminated=(void*)sAndAndNode_terminated;
                _inf_value38->kind=(void*)sAndAndNode_kind;
                __result347__ = __result_obj__ = ((struct sNode*)(right_value674=_inf_value38));
                if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value668,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value669,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result347__;
                if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result348__ = __result_obj__ = node_361;
    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result348__;
    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional688;
_Bool _if_conditional689;
_Bool _if_conditional690;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional688=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional688) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional689=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional689) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional690=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional690) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional691;
struct sAndAndNode* __result345__;
void* right_value670;
struct sAndAndNode* result_365;
_Bool _if_conditional692;
_Bool _if_conditional693;
void* right_value671;
char* __dec_obj279;
_Bool _if_conditional694;
void* right_value672;
struct sNode* __dec_obj280;
_Bool _if_conditional695;
void* right_value673;
struct sNode* __dec_obj281;
_Bool _if_conditional696;
struct sAndAndNode* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value670 = (void*)0;
memset(&result_365, 0, sizeof(struct sAndAndNode*));
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
                    if(_if_conditional691=self==(void*)0,                    _if_conditional691) {
                        __result345__ = __result_obj__ = (void*)0;
                        return __result345__;
                    }
                    result_365=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value670=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer3(right_value670,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional692=self!=((void*)0),                    _if_conditional692) {
                        result_365->sline=self->sline;
                    }
                    if(_if_conditional693=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional693) {
                        __dec_obj279=result_365->sname;
                        result_365->sname=(char*)come_increment_ref_count(((char*)(right_value671=string_clone(self->sname))));
                        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional694=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional694) {
                        __dec_obj280=result_365->mLeft;
                        result_365->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional695=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional695) {
                        __dec_obj281=result_365->mRight;
                        result_365->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value673) { right_value673 = come_decrement_ref_count2(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional696=self!=((void*)0),                    _if_conditional696) {
                        result_365->mQuote=self->mQuote;
                    }
                    __result346__ = __result_obj__ = result_365;
                    come_call_finalizer3(result_365,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result346__;
                    come_call_finalizer3(result_365,sAndAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value675;
struct sNode* node_366;
_Bool _while_condtional28;
_Bool _if_conditional697;
void* right_value676;
struct sNode* right_367;
void* right_value677;
void* right_value678;
struct sNode* _inf_value39;
struct sOrOrNode* _inf_obj_value39;
void* right_value683;
struct sNode* __result351__;
_Bool _if_conditional707;
void* right_value684;
struct sNode* right_369;
void* right_value685;
void* right_value686;
struct sNode* _inf_value40;
struct sOrOrNode* _inf_obj_value40;
void* right_value691;
struct sNode* __result354__;
struct sNode* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
right_value675 = (void*)0;
memset(&node_366, 0, sizeof(struct sNode*));
right_value676 = (void*)0;
memset(&right_367, 0, sizeof(struct sNode*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&right_369, 0, sizeof(struct sNode*));
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value691 = (void*)0;
    parse_sharp_v5(info);
    node_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=andand_exp(info))));
    if(right_value675) { right_value675 = come_decrement_ref_count2(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional28=*info->p,    _while_condtional28) {
        if(_if_conditional697=*info->p==124&&*(info->p+1)==124,        _if_conditional697) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_367=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=oror_exp(info))));
            if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2292, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sOrOrNode*)(right_value678=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value677=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2292, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_367),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sOrOrNode_finalize;
            _inf_value39->clone=(void*)sOrOrNode_clone;
            _inf_value39->compile=(void*)sOrOrNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sOrOrNode_terminated;
            _inf_value39->kind=(void*)sOrOrNode_kind;
            __result351__ = __result_obj__ = ((struct sNode*)(right_value683=_inf_value39));
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value677,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value678,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result351__;
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional707=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional707) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value684=oror_exp(info))));
                if(right_value684) { right_value684 = come_decrement_ref_count2(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2300, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sOrOrNode*)(right_value686=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value685=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2300, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_369),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sOrOrNode_finalize;
                _inf_value40->clone=(void*)sOrOrNode_clone;
                _inf_value40->compile=(void*)sOrOrNode_compile;
                _inf_value40->sline=(void*)sNodeBase_sline;
                _inf_value40->sname=(void*)sNodeBase_sname;
                _inf_value40->terminated=(void*)sOrOrNode_terminated;
                _inf_value40->kind=(void*)sOrOrNode_kind;
                __result354__ = __result_obj__ = ((struct sNode*)(right_value691=_inf_value40));
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value685,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value686,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value691) { right_value691 = come_decrement_ref_count2(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result354__;
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result355__ = __result_obj__ = node_366;
    if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result355__;
    if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional708;
_Bool _if_conditional709;
_Bool _if_conditional710;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional708=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional708) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional709=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional709) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional710=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional710) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional711;
struct sOrOrNode* __result352__;
void* right_value687;
struct sOrOrNode* result_370;
_Bool _if_conditional712;
_Bool _if_conditional713;
void* right_value688;
char* __dec_obj285;
_Bool _if_conditional714;
void* right_value689;
struct sNode* __dec_obj286;
_Bool _if_conditional715;
void* right_value690;
struct sNode* __dec_obj287;
_Bool _if_conditional716;
struct sOrOrNode* __result353__;
memset(&__result_obj__, 0, sizeof(void*));
right_value687 = (void*)0;
memset(&result_370, 0, sizeof(struct sOrOrNode*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
                    if(_if_conditional711=self==(void*)0,                    _if_conditional711) {
                        __result352__ = __result_obj__ = (void*)0;
                        return __result352__;
                    }
                    result_370=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value687=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer3(right_value687,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional712=self!=((void*)0),                    _if_conditional712) {
                        result_370->sline=self->sline;
                    }
                    if(_if_conditional713=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional713) {
                        __dec_obj285=result_370->sname;
                        result_370->sname=(char*)come_increment_ref_count(((char*)(right_value688=string_clone(self->sname))));
                        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional714=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional714) {
                        __dec_obj286=result_370->mLeft;
                        result_370->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=sNode_clone(self->mLeft))));
                        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value689) { right_value689 = come_decrement_ref_count2(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional715=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional715) {
                        __dec_obj287=result_370->mRight;
                        result_370->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=sNode_clone(self->mRight))));
                        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value690) { right_value690 = come_decrement_ref_count2(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional716=self!=((void*)0),                    _if_conditional716) {
                        result_370->mQuote=self->mQuote;
                    }
                    __result353__ = __result_obj__ = result_370;
                    come_call_finalizer3(result_370,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result353__;
                    come_call_finalizer3(result_370,sOrOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value692;
struct sNode* node_371;
_Bool _while_condtional29;
_Bool _if_conditional717;
void* right_value693;
struct sNode* node2_372;
void* right_value694;
void* right_value695;
struct sNode* _inf_value41;
struct sCommaNode* _inf_obj_value41;
void* right_value700;
struct sNode* __result358__;
struct sNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value692 = (void*)0;
memset(&node_371, 0, sizeof(struct sNode*));
right_value693 = (void*)0;
memset(&node2_372, 0, sizeof(struct sNode*));
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value700 = (void*)0;
    parse_sharp_v5(info);
    node_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=oror_exp(info))));
    if(right_value692) { right_value692 = come_decrement_ref_count2(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional29=*info->p,    _while_condtional29) {
        if(_if_conditional717=!info->no_comma&&*info->p==44,        _if_conditional717) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_372=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=oror_exp(info))));
            if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2327, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sCommaNode*)(right_value695=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value694=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2327, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(node2_372),info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sCommaNode_finalize;
            _inf_value41->clone=(void*)sCommaNode_clone;
            _inf_value41->compile=(void*)sCommaNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sCommaNode_terminated;
            _inf_value41->kind=(void*)sCommaNode_kind;
            __result358__ = __result_obj__ = ((struct sNode*)(right_value700=_inf_value41));
            if(node2_372) { node2_372 = come_decrement_ref_count2(node2_372, ((struct sNode*)node2_372)->finalize, ((struct sNode*)node2_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value694,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value695,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value700) { right_value700 = come_decrement_ref_count2(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result358__;
            if(node2_372) { node2_372 = come_decrement_ref_count2(node2_372, ((struct sNode*)node2_372)->finalize, ((struct sNode*)node2_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result359__ = __result_obj__ = node_371;
    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result359__;
    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional718;
_Bool _if_conditional719;
_Bool _if_conditional720;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional718=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional718) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional719=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional719) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional720=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional720) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional721;
struct sCommaNode* __result356__;
void* right_value696;
struct sCommaNode* result_373;
_Bool _if_conditional722;
_Bool _if_conditional723;
void* right_value697;
char* __dec_obj288;
_Bool _if_conditional724;
void* right_value698;
struct sNode* __dec_obj289;
_Bool _if_conditional725;
void* right_value699;
struct sNode* __dec_obj290;
struct sCommaNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value696 = (void*)0;
memset(&result_373, 0, sizeof(struct sCommaNode*));
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
                if(_if_conditional721=self==(void*)0,                _if_conditional721) {
                    __result356__ = __result_obj__ = (void*)0;
                    return __result356__;
                }
                result_373=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value696=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer3(right_value696,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional722=self!=((void*)0),                _if_conditional722) {
                    result_373->sline=self->sline;
                }
                if(_if_conditional723=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional723) {
                    __dec_obj288=result_373->sname;
                    result_373->sname=(char*)come_increment_ref_count(((char*)(right_value697=string_clone(self->sname))));
                    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value697 = come_decrement_ref_count2(right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional724=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional724) {
                    __dec_obj289=result_373->mLeft;
                    result_373->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value698=sNode_clone(self->mLeft))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value698) { right_value698 = come_decrement_ref_count2(right_value698, ((struct sNode*)right_value698)->finalize, ((struct sNode*)right_value698)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional725=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional725) {
                    __dec_obj290=result_373->mRight;
                    result_373->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value699=sNode_clone(self->mRight))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value699) { right_value699 = come_decrement_ref_count2(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result357__ = __result_obj__ = result_373;
                come_call_finalizer3(result_373,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result357__;
                come_call_finalizer3(result_373,sCommaNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value701;
struct sNode* node_374;
_Bool _while_condtional30;
_Bool _if_conditional726;
struct sNode* value1_375;
_Bool _if_conditional727;
void* right_value702;
void* right_value703;
struct sNode* _inf_value42;
struct sNullNode* _inf_obj_value42;
void* right_value706;
struct sNode* __dec_obj292;
_Bool no_label_377;
void* right_value707;
struct sNode* __dec_obj293;
int __exception_result_var_b49;
void* right_value708;
struct sNode* value2_378;
void* right_value709;
void* right_value710;
struct sNode* _inf_value43;
struct sConditionalNode* _inf_obj_value43;
void* right_value716;
struct sNode* __result364__;
struct sNode* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value701 = (void*)0;
memset(&node_374, 0, sizeof(struct sNode*));
memset(&value1_375, 0, sizeof(struct sNode*));
right_value702 = (void*)0;
right_value703 = (void*)0;
right_value706 = (void*)0;
memset(&no_label_377, 0, sizeof(_Bool));
right_value707 = (void*)0;
right_value708 = (void*)0;
memset(&value2_378, 0, sizeof(struct sNode*));
right_value709 = (void*)0;
right_value710 = (void*)0;
right_value716 = (void*)0;
    parse_sharp_v5(info);
    node_374=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value701=comma_exp(info))));
    if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional30=*info->p,    _while_condtional30) {
        if(_if_conditional726=*info->p==63,        _if_conditional726) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional727=*info->p==58,            _if_conditional727) {
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2356, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sNullNode*)(right_value703=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value702=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2356, "sNullNode")))),info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sNullNode_finalize;
                _inf_value42->clone=(void*)sNullNode_clone;
                _inf_value42->compile=(void*)sNullNode_compile;
                _inf_value42->sline=(void*)sNodeBase_sline;
                _inf_value42->sname=(void*)sNodeBase_sname;
                _inf_value42->terminated=(void*)sNullNode_terminated;
                _inf_value42->kind=(void*)sNullNode_kind;
                __dec_obj292=value1_375;
                value1_375=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value706=_inf_value42)));
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer3(right_value702,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value703,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value706) { right_value706 = come_decrement_ref_count2(right_value706, ((struct sNode*)right_value706)->finalize, ((struct sNode*)right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                no_label_377=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj293=value1_375;
                value1_375=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value707=conditional_exp(info))));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value707) { right_value707 = come_decrement_ref_count2(right_value707, ((struct sNode*)right_value707)->finalize, ((struct sNode*)right_value707)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_label=no_label_377;
            }
            parse_sharp_v5(info);
            (come_push_stackframe("13op.c", 2367, 54),__exception_result_var_b49=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b49);
            value2_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value708=conditional_exp(info))));
            if(right_value708) { right_value708 = come_decrement_ref_count2(right_value708, ((struct sNode*)right_value708)->finalize, ((struct sNode*)right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2373, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sConditionalNode*)(right_value710=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value709=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2373, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_374),(struct sNode*)come_increment_ref_count(value1_375),(struct sNode*)come_increment_ref_count(value2_378),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sConditionalNode_finalize;
            _inf_value43->clone=(void*)sConditionalNode_clone;
            _inf_value43->compile=(void*)sConditionalNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sConditionalNode_terminated;
            _inf_value43->kind=(void*)sConditionalNode_kind;
            __result364__ = __result_obj__ = ((struct sNode*)(right_value716=_inf_value43));
            if(value1_375) { value1_375 = come_decrement_ref_count2(value1_375, ((struct sNode*)value1_375)->finalize, ((struct sNode*)value1_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_378) { value2_378 = come_decrement_ref_count2(value2_378, ((struct sNode*)value2_378)->finalize, ((struct sNode*)value2_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value709,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value710,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value716) { right_value716 = come_decrement_ref_count2(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result364__;
            if(value1_375) { value1_375 = come_decrement_ref_count2(value1_375, ((struct sNode*)value1_375)->finalize, ((struct sNode*)value1_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_378) { value2_378 = come_decrement_ref_count2(value2_378, ((struct sNode*)value2_378)->finalize, ((struct sNode*)value2_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result365__ = __result_obj__ = node_374;
    if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result365__;
    if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional732;
_Bool _if_conditional733;
_Bool _if_conditional734;
_Bool _if_conditional735;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional732=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional732) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional733=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional733) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional734=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional734) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional735=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional735) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional736;
struct sConditionalNode* __result362__;
void* right_value711;
struct sConditionalNode* result_379;
_Bool _if_conditional737;
_Bool _if_conditional738;
void* right_value712;
char* __dec_obj294;
_Bool _if_conditional739;
void* right_value713;
struct sNode* __dec_obj295;
_Bool _if_conditional740;
void* right_value714;
struct sNode* __dec_obj296;
_Bool _if_conditional741;
void* right_value715;
struct sNode* __dec_obj297;
struct sConditionalNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value711 = (void*)0;
memset(&result_379, 0, sizeof(struct sConditionalNode*));
right_value712 = (void*)0;
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value715 = (void*)0;
                if(_if_conditional736=self==(void*)0,                _if_conditional736) {
                    __result362__ = __result_obj__ = (void*)0;
                    return __result362__;
                }
                result_379=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value711=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer3(right_value711,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional737=self!=((void*)0),                _if_conditional737) {
                    result_379->sline=self->sline;
                }
                if(_if_conditional738=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional738) {
                    __dec_obj294=result_379->sname;
                    result_379->sname=(char*)come_increment_ref_count(((char*)(right_value712=string_clone(self->sname))));
                    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value712 = come_decrement_ref_count2(right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional739=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional739) {
                    __dec_obj295=result_379->mValue1;
                    result_379->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value713=sNode_clone(self->mValue1))));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value713) { right_value713 = come_decrement_ref_count2(right_value713, ((struct sNode*)right_value713)->finalize, ((struct sNode*)right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional740=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional740) {
                    __dec_obj296=result_379->mValue2;
                    result_379->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value714=sNode_clone(self->mValue2))));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value714) { right_value714 = come_decrement_ref_count2(right_value714, ((struct sNode*)right_value714)->finalize, ((struct sNode*)right_value714)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional741=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional741) {
                    __dec_obj297=result_379->mValue3;
                    result_379->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value715=sNode_clone(self->mValue3))));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value715) { right_value715 = come_decrement_ref_count2(right_value715, ((struct sNode*)right_value715)->finalize, ((struct sNode*)right_value715)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result363__ = __result_obj__ = result_379;
                come_call_finalizer3(result_379,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result363__;
                come_call_finalizer3(result_379,sConditionalNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value717;
struct sNode* node_380;
struct sNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value717 = (void*)0;
memset(&node_380, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_380=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value717=conditional_exp(info))));
    if(right_value717) { right_value717 = come_decrement_ref_count2(right_value717, ((struct sNode*)right_value717)->finalize, ((struct sNode*)right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result366__ = __result_obj__ = node_380;
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result366__;
    if(node_380) { node_380 = come_decrement_ref_count2(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional742;
void* right_value718;
void* right_value719;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value722;
struct sNode* __result369__;
_Bool _if_conditional747;
void* right_value723;
void* right_value724;
struct sNode* _inf_value45;
struct sNilNode* _inf_obj_value45;
void* right_value727;
struct sNode* __result372__;
void* right_value728;
struct sNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value727 = (void*)0;
right_value728 = (void*)0;
    if(_if_conditional742=charp_operator_equals(buf,"null"),    _if_conditional742) {
        _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2397, "struct sNode");
        _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value719=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value718=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2397, "sNullNode")))),info))));
        _inf_value44->_protocol_obj=_inf_obj_value44;
        _inf_value44->finalize=(void*)sNullNode_finalize;
        _inf_value44->clone=(void*)sNullNode_clone;
        _inf_value44->compile=(void*)sNullNode_compile;
        _inf_value44->sline=(void*)sNodeBase_sline;
        _inf_value44->sname=(void*)sNodeBase_sname;
        _inf_value44->terminated=(void*)sNullNode_terminated;
        _inf_value44->kind=(void*)sNullNode_kind;
        __result369__ = __result_obj__ = ((struct sNode*)(right_value722=_inf_value44));
        come_call_finalizer3(right_value718,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value719,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value722) { right_value722 = come_decrement_ref_count2(right_value722, ((struct sNode*)right_value722)->finalize, ((struct sNode*)right_value722)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result369__;
    }
    else {
        if(_if_conditional747=charp_operator_equals(buf,"nil"),        _if_conditional747) {
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2400, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sNilNode*)(right_value724=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value723=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2400, "sNilNode")))),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sNilNode_finalize;
            _inf_value45->clone=(void*)sNilNode_clone;
            _inf_value45->compile=(void*)sNilNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNilNode_terminated;
            _inf_value45->kind=(void*)sNilNode_kind;
            __result372__ = __result_obj__ = ((struct sNode*)(right_value727=_inf_value45));
            come_call_finalizer3(right_value723,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value724,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value727) { right_value727 = come_decrement_ref_count2(right_value727, ((struct sNode*)right_value727)->finalize, ((struct sNode*)right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result372__;
        }
    }
    __result373__ = __result_obj__ = ((struct sNode*)(right_value728=string_node_v12(buf,head,head_sline,info)));
    if(right_value728) { right_value728 = come_decrement_ref_count2(right_value728, ((struct sNode*)right_value728)->finalize, ((struct sNode*)right_value728)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result373__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional743;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional743=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional743) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional744;
struct sNullNode* __result367__;
void* right_value720;
struct sNullNode* result_381;
_Bool _if_conditional745;
_Bool _if_conditional746;
void* right_value721;
char* __dec_obj298;
struct sNullNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value720 = (void*)0;
memset(&result_381, 0, sizeof(struct sNullNode*));
right_value721 = (void*)0;
            if(_if_conditional744=self==(void*)0,            _if_conditional744) {
                __result367__ = __result_obj__ = (void*)0;
                return __result367__;
            }
            result_381=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value720=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer3(right_value720,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional745=self!=((void*)0),            _if_conditional745) {
                result_381->sline=self->sline;
            }
            if(_if_conditional746=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional746) {
                __dec_obj298=result_381->sname;
                result_381->sname=(char*)come_increment_ref_count(((char*)(right_value721=string_clone(self->sname))));
                __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value721 = come_decrement_ref_count2(right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result368__ = __result_obj__ = result_381;
            come_call_finalizer3(result_381,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result368__;
            come_call_finalizer3(result_381,sNullNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional748;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional748=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional748) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional749;
struct sNilNode* __result370__;
void* right_value725;
struct sNilNode* result_382;
_Bool _if_conditional750;
_Bool _if_conditional751;
void* right_value726;
char* __dec_obj299;
struct sNilNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value725 = (void*)0;
memset(&result_382, 0, sizeof(struct sNilNode*));
right_value726 = (void*)0;
                if(_if_conditional749=self==(void*)0,                _if_conditional749) {
                    __result370__ = __result_obj__ = (void*)0;
                    return __result370__;
                }
                result_382=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value725=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer3(right_value725,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional750=self!=((void*)0),                _if_conditional750) {
                    result_382->sline=self->sline;
                }
                if(_if_conditional751=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional751) {
                    __dec_obj299=result_382->sname;
                    result_382->sname=(char*)come_increment_ref_count(((char*)(right_value726=string_clone(self->sname))));
                    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value726 = come_decrement_ref_count2(right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result371__ = __result_obj__ = result_382;
                come_call_finalizer3(result_382,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result371__;
                come_call_finalizer3(result_382,sNilNode_finalize, 0, 0, 0, 0, (void*)0);
}

